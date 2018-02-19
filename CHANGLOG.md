# Breaking changes in AWS SDK for C++

## [1.4.0](https://github.com/aws/aws-sdk-cpp/tree/1.4.0) (2018-01-04)

### aws-cpp-sdk-s3

Fixed bugs in Aws::S3::Model::CopyObjectResult, added CopyObjectResultDetails as a member of CopyObjectResult.

> We are missing a member of CopyObjectResult because of name conflict and related files are overwritten when we generate the source code.

> We renamed this member to CopyObjectResultDetails.

## [1.3.0](https://github.com/aws/aws-sdk-cpp/tree/1.3.0) (2017-11-09)

### aws-cpp-sdk-s3

Changed the constructor of AWSAuthV4Signer to use PayloadSigningPolicy instead of a boolean.

> S3 service model doesn't specify the authorizer to be v4-unsigned-body. This leads to all of its requests returning true when inheriting bool AmazonWebServiceRequest::SignBody().

> Proposed solution is to change the ctor argument to an enum with values AlwaysSign, NeverSign and RequestDependent. With the default value of that enum argument set to RequestDependent.

> In S3's ctor, the value should be set to NeverSign.

> In AWSClient, the values AlwaysSign and NeverSign overrule the value returned by the request's SignBody().

## [1.2.0](https://github.com/aws/aws-sdk-cpp/tree/1.2.0) (2017-09-24)

### aws-cpp-sdk-transfer

Changed ownership of thread executor in TransferManager.

> In some cases, a worker thread is the only thing holding on to TransferManager through
a shared_ptr. When TransferManager is destroyed, it can't destroy the thread-executor
which the current worker thread is owned by. This would result in a crash.

> Note: when the thread executor dies, it joins all its threads in the dtor.

## [1.1.1](https://github.com/aws/aws-sdk-cpp/tree/1.1.1) (2017-06-22)

### aws-cpp-sdk-transfer

Introduced a builder function to instantiate TransferManager
as a shared_ptr. That ensures that other threads can increase
TransferManager's lifetime until all the callbacks have finished.

> Ensure TransferManager's life extends beyond TransferHandle callbacks

> By controlling the way TransferManager is being created, in this case on
the heap using a shared_ptr, we can guarantee it lives at least until the
last callback has finished executing. Regardless if the application
destroys/releases its copy.With that in mind, this patch introduces a
Builder pattern to control the creation of TransferManager.