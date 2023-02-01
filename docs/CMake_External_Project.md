# CMake External Project

You can add the AWS SDK as an external project and use the same [`CMake parameters`](./Docs/CMake_Parameters.md) from a CMake file instead.

### Generic format

```
cmake_minimum_required(VERSION 3.x)
project(<project-name> NONE)
include(ExternalProject)

ExternalProject_Add(<project-name>
    GIT_REPOSITORY    https://github.com/aws/aws-sdk-cpp.git
    GIT_TAG           <tag>
    CMAKE_ARGS        <CMake-options>
    BUILD_ALWAYS      TRUE
    TEST_COMMAND      ""
)
```

where, `<tag>` could be `origin/master` or one of the [`versions`](https://github.com/aws/aws-sdk-cpp/releases).

Note that the required minimmum CMake version is `3.x`.

### External project SAMPLE

```
cmake_minimum_required(VERSION 3.10.2)
project(libawscpp-download NONE)
include(ExternalProject)

ExternalProject_Add(libawscpp-download
    GIT_REPOSITORY    https://github.com/aws/aws-sdk-cpp.git
    GIT_TAG           1.8.17
    LIST_SEPARATOR    "|"
    CMAKE_ARGS       -DBUILD_SHARED_LIBS=OFF
                     -DBUILD_ONLY=monitoring|logs
    BUILD_ALWAYS      TRUE
    TEST_COMMAND      ""
)
```

If the `GIT_TAG` points to a version >= `1.7.0`, third party dependencies `aws-c-common`, `aws-checksums` and `aws-c-event-stream` are built by default and installed in default system directory. To customize how they are handled you can also install them [`separately`](../ReadMe.md#Third-party-dependencies), if you do so, make sure to include `-DBUILD_DEPS=OFF` in `CMAKE_ARGS`.

The SDK's CMake file expects a semilcolon separated list of components for `BUILD_ONLY` CMake argument, however, since `ExternalProject_Add` processes list arguments differently, you'll need to use `LIST_SEPARATOR` to indicate how the elements of the list are split, or which character will replace the semicolon. (For more information, refer to this [`issue`](https://github.com/aws/aws-sdk-cpp/issues/826))
