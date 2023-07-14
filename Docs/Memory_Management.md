# Memory Management
The AWS SDK for C++ provides a way to control memory allocation and deallocation in a library.

Custom memory management is available only if you use a version of the library built using the compile-time constant AWS_CUSTOM_MEMORY_MANAGEMENT defined.

If you use a version of the library built without the compile-time constant, the global memory system functions such as InitializeAWSMemorySystem will not work and the global new and delete functions will be used instead.

For more information about the compile-time constant, see the STL and AWS Strings and Vectors section in this Readme.

To allocate or deallocate memory:
1. Implement the MemorySystemInterface subclass:
   aws/core/utils/memory/MemorySystemInterface.h

In the following example, the type signature for AllocateMemory can be changed as needed:

```cpp
class MyMemoryManager : public Aws::Utils::Memory::MemorySystemInterface
{
  public:

    // ...

    virtual void* AllocateMemory(std::size_t blockSize, std::size_t alignment, const char *allocationTag = nullptr) override;
    virtual void FreeMemory(void* memoryPtr) override;

};
```

In Main:

```cpp
int main(void)
{
  MyMemoryManager sdkMemoryManager;
  SDKOptions options;
  options.memoryManagementOptions.memoryManager = &sdkMemoryManager;
  Aws::InitAPI(options);

  // ... do stuff

  Aws::ShutdownAPI(options);

  return 0;
}
```
## STL and AWS Strings and Vectors
When initialized with a memory manager, the AWS SDK for C++ defers all allocation and deallocation to the memory manager. If a memory manager does not exist, the SDK uses global new and delete.

If you use custom STL allocators, you must alter the type signatures for all STL objects to match the allocation policy. Because STL is used prominently in the SDK implementation and interface, a single approach in the SDK would inhibit direct passing of default STL objects into the SDK or control of STL allocation. Alternately, a hybrid approach – using custom allocators internally and allowing standard and custom STL objects on the interface – could potentially cause more difficulty when investigating memory issues.

The solution is to use the memory system’s compile-time constant AWS_CUSTOM_MEMORY_MANAGEMENT to control which STL types the SDK will use.

If the compile-time constant is enabled (on), the types resolve to STL types with a custom allocator connected to the AWS memory system.

If the compile-time constant is disabled (off), all Aws::* types resolve to the corresponding default std::* type.

Example code from the AWSAllocator.h file in the SDK:

```cpp
#ifdef AWS_CUSTOM_MEMORY_MANAGEMENT

template< typename T >
class AwsAllocator : public std::allocator< T >
{
   ... definition of allocator that uses AWS memory system
};

#else

template< typename T > using Allocator = std::allocator<T>;

#endif
```

In the example code, the AwsAllocator can be either a custom allocator or a default allocator, depending on the compile-time constant.

Example code from the AWSVector.h file in the SDK:
`template< typename T > using Vector = std::vector< T, Aws::Allocator< T > >;`

In the example code, we define the Aws::* types.

If the compile-time constant is enabled (on), the type maps to a vector using custom memory allocation and the AWS memory system.

If the compile-time constant is disabled (off), the type maps to a regular std::vector with default type parameters.

Type aliasing is used for all std:: types in the SDK that perform memory allocation, such as containers, string stream, and string buf. The AWS SDK for C++ uses these types.

## Native SDK Developers and Memory Controls
Follow these rules in the SDK code:
* Do not use new and delete; use Aws::New<> and Aws::Delete<>.
* Do not use new[] and delete []; use Aws::NewArray<> and Aws::DeleteArray<>.
* Do not use std::make_shared; use Aws::MakeShared.
* Use Aws::UniquePtr for unique pointers to a single object. Use the Aws::MakeUnique function to create the unique pointer.
* Use Aws::UniqueArray for unique pointers to an array of objects. Use the Aws::MakeUniqueArray function to create the unique pointer.
* Do not directly use STL containers; use one of the Aws::typedefs or add a typedef for the desired container. Example: `Aws::Map<Aws::String, Aws::String> m_kvPairs;`
* Use shared_ptr for any external pointer passed into and managed by the SDK. You must initialize the shared pointer with a destruction policy that matches how the object was allocated. You can use a raw pointer if the SDK is not expected to clean up the pointer.

## Remaining Issues
You can control memory allocation in the SDK; however, STL types still dominate the public interface through string parameters to the model object initialize and set methods. If you choose not to use STL and use strings and containers instead, you must create a lot of temporaries whenever you want to make a service call.

To remove most of the temporaries and allocation when service calls are made using non-STL, we have implemented the following:
* Every Init/Set function that takes a string has an overload that takes the const char*.
* Every Init/Set function that takes a container (map/vector) has an add variant that takes a single entry.
* Every Init/Set function that takes binary data has an overload that takes a pointer to the data and a length value.
* (Optional) Every Init/Set function that takes a string has an overload that takes a non-zero terminated constr char* and a length value.