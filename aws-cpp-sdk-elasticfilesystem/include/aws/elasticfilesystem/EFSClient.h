/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/EFSErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elasticfilesystem/model/CreateFileSystemResult.h>
#include <aws/elasticfilesystem/model/CreateMountTargetResult.h>
#include <aws/elasticfilesystem/model/DescribeFileSystemsResult.h>
#include <aws/elasticfilesystem/model/DescribeLifecycleConfigurationResult.h>
#include <aws/elasticfilesystem/model/DescribeMountTargetSecurityGroupsResult.h>
#include <aws/elasticfilesystem/model/DescribeMountTargetsResult.h>
#include <aws/elasticfilesystem/model/DescribeTagsResult.h>
#include <aws/elasticfilesystem/model/PutLifecycleConfigurationResult.h>
#include <aws/elasticfilesystem/model/UpdateFileSystemResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace EFS
{

namespace Model
{
        class CreateFileSystemRequest;
        class CreateMountTargetRequest;
        class CreateTagsRequest;
        class DeleteFileSystemRequest;
        class DeleteMountTargetRequest;
        class DeleteTagsRequest;
        class DescribeFileSystemsRequest;
        class DescribeLifecycleConfigurationRequest;
        class DescribeMountTargetSecurityGroupsRequest;
        class DescribeMountTargetsRequest;
        class DescribeTagsRequest;
        class ModifyMountTargetSecurityGroupsRequest;
        class PutLifecycleConfigurationRequest;
        class UpdateFileSystemRequest;

        typedef Aws::Utils::Outcome<CreateFileSystemResult, Aws::Client::AWSError<EFSErrors>> CreateFileSystemOutcome;
        typedef Aws::Utils::Outcome<CreateMountTargetResult, Aws::Client::AWSError<EFSErrors>> CreateMountTargetOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EFSErrors>> CreateTagsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EFSErrors>> DeleteFileSystemOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EFSErrors>> DeleteMountTargetOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EFSErrors>> DeleteTagsOutcome;
        typedef Aws::Utils::Outcome<DescribeFileSystemsResult, Aws::Client::AWSError<EFSErrors>> DescribeFileSystemsOutcome;
        typedef Aws::Utils::Outcome<DescribeLifecycleConfigurationResult, Aws::Client::AWSError<EFSErrors>> DescribeLifecycleConfigurationOutcome;
        typedef Aws::Utils::Outcome<DescribeMountTargetSecurityGroupsResult, Aws::Client::AWSError<EFSErrors>> DescribeMountTargetSecurityGroupsOutcome;
        typedef Aws::Utils::Outcome<DescribeMountTargetsResult, Aws::Client::AWSError<EFSErrors>> DescribeMountTargetsOutcome;
        typedef Aws::Utils::Outcome<DescribeTagsResult, Aws::Client::AWSError<EFSErrors>> DescribeTagsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<EFSErrors>> ModifyMountTargetSecurityGroupsOutcome;
        typedef Aws::Utils::Outcome<PutLifecycleConfigurationResult, Aws::Client::AWSError<EFSErrors>> PutLifecycleConfigurationOutcome;
        typedef Aws::Utils::Outcome<UpdateFileSystemResult, Aws::Client::AWSError<EFSErrors>> UpdateFileSystemOutcome;

        typedef std::future<CreateFileSystemOutcome> CreateFileSystemOutcomeCallable;
        typedef std::future<CreateMountTargetOutcome> CreateMountTargetOutcomeCallable;
        typedef std::future<CreateTagsOutcome> CreateTagsOutcomeCallable;
        typedef std::future<DeleteFileSystemOutcome> DeleteFileSystemOutcomeCallable;
        typedef std::future<DeleteMountTargetOutcome> DeleteMountTargetOutcomeCallable;
        typedef std::future<DeleteTagsOutcome> DeleteTagsOutcomeCallable;
        typedef std::future<DescribeFileSystemsOutcome> DescribeFileSystemsOutcomeCallable;
        typedef std::future<DescribeLifecycleConfigurationOutcome> DescribeLifecycleConfigurationOutcomeCallable;
        typedef std::future<DescribeMountTargetSecurityGroupsOutcome> DescribeMountTargetSecurityGroupsOutcomeCallable;
        typedef std::future<DescribeMountTargetsOutcome> DescribeMountTargetsOutcomeCallable;
        typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;
        typedef std::future<ModifyMountTargetSecurityGroupsOutcome> ModifyMountTargetSecurityGroupsOutcomeCallable;
        typedef std::future<PutLifecycleConfigurationOutcome> PutLifecycleConfigurationOutcomeCallable;
        typedef std::future<UpdateFileSystemOutcome> UpdateFileSystemOutcomeCallable;
} // namespace Model

  class EFSClient;

    typedef std::function<void(const EFSClient*, const Model::CreateFileSystemRequest&, const Model::CreateFileSystemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFileSystemResponseReceivedHandler;
    typedef std::function<void(const EFSClient*, const Model::CreateMountTargetRequest&, const Model::CreateMountTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMountTargetResponseReceivedHandler;
    typedef std::function<void(const EFSClient*, const Model::CreateTagsRequest&, const Model::CreateTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTagsResponseReceivedHandler;
    typedef std::function<void(const EFSClient*, const Model::DeleteFileSystemRequest&, const Model::DeleteFileSystemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFileSystemResponseReceivedHandler;
    typedef std::function<void(const EFSClient*, const Model::DeleteMountTargetRequest&, const Model::DeleteMountTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMountTargetResponseReceivedHandler;
    typedef std::function<void(const EFSClient*, const Model::DeleteTagsRequest&, const Model::DeleteTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTagsResponseReceivedHandler;
    typedef std::function<void(const EFSClient*, const Model::DescribeFileSystemsRequest&, const Model::DescribeFileSystemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFileSystemsResponseReceivedHandler;
    typedef std::function<void(const EFSClient*, const Model::DescribeLifecycleConfigurationRequest&, const Model::DescribeLifecycleConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLifecycleConfigurationResponseReceivedHandler;
    typedef std::function<void(const EFSClient*, const Model::DescribeMountTargetSecurityGroupsRequest&, const Model::DescribeMountTargetSecurityGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMountTargetSecurityGroupsResponseReceivedHandler;
    typedef std::function<void(const EFSClient*, const Model::DescribeMountTargetsRequest&, const Model::DescribeMountTargetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMountTargetsResponseReceivedHandler;
    typedef std::function<void(const EFSClient*, const Model::DescribeTagsRequest&, const Model::DescribeTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTagsResponseReceivedHandler;
    typedef std::function<void(const EFSClient*, const Model::ModifyMountTargetSecurityGroupsRequest&, const Model::ModifyMountTargetSecurityGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyMountTargetSecurityGroupsResponseReceivedHandler;
    typedef std::function<void(const EFSClient*, const Model::PutLifecycleConfigurationRequest&, const Model::PutLifecycleConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutLifecycleConfigurationResponseReceivedHandler;
    typedef std::function<void(const EFSClient*, const Model::UpdateFileSystemRequest&, const Model::UpdateFileSystemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFileSystemResponseReceivedHandler;

  /**
   * <fullname>Amazon Elastic File System</fullname> <p>Amazon Elastic File System
   * (Amazon EFS) provides simple, scalable file storage for use with Amazon EC2
   * instances in the AWS Cloud. With Amazon EFS, storage capacity is elastic,
   * growing and shrinking automatically as you add and remove files, so your
   * applications have the storage they need, when they need it. For more
   * information, see the <a
   * href="https://docs.aws.amazon.com/efs/latest/ug/api-reference.html">User
   * Guide</a>.</p>
   */
  class AWS_EFS_API EFSClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EFSClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EFSClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        EFSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~EFSClient();

        inline virtual const char* GetServiceClientName() const override { return "EFS"; }


        /**
         * <p>Creates a new, empty file system. The operation requires a creation token in
         * the request that Amazon EFS uses to ensure idempotent creation (calling the
         * operation with same creation token has no effect). If a file system does not
         * currently exist that is owned by the caller's AWS account with the specified
         * creation token, this operation does the following:</p> <ul> <li> <p>Creates a
         * new, empty file system. The file system will have an Amazon EFS assigned ID, and
         * an initial lifecycle state <code>creating</code>.</p> </li> <li> <p>Returns with
         * the description of the created file system.</p> </li> </ul> <p>Otherwise, this
         * operation returns a <code>FileSystemAlreadyExists</code> error with the ID of
         * the existing file system.</p> <note> <p>For basic use cases, you can use a
         * randomly generated UUID for the creation token.</p> </note> <p> The idempotent
         * operation allows you to retry a <code>CreateFileSystem</code> call without risk
         * of creating an extra file system. This can happen when an initial call fails in
         * a way that leaves it uncertain whether or not a file system was actually
         * created. An example might be that a transport level timeout occurred or your
         * connection was reset. As long as you use the same creation token, if the initial
         * call had succeeded in creating a file system, the client can learn of its
         * existence from the <code>FileSystemAlreadyExists</code> error.</p> <note> <p>The
         * <code>CreateFileSystem</code> call returns while the file system's lifecycle
         * state is still <code>creating</code>. You can check the file system creation
         * status by calling the <a>DescribeFileSystems</a> operation, which among other
         * things returns the file system state.</p> </note> <p>This operation also takes
         * an optional <code>PerformanceMode</code> parameter that you choose for your file
         * system. We recommend <code>generalPurpose</code> performance mode for most file
         * systems. File systems using the <code>maxIO</code> performance mode can scale to
         * higher levels of aggregate throughput and operations per second with a tradeoff
         * of slightly higher latencies for most file operations. The performance mode
         * can't be changed after the file system has been created. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/efs/latest/ug/performance.html#performancemodes.html">Amazon
         * EFS: Performance Modes</a>.</p> <p>After the file system is fully created,
         * Amazon EFS sets its lifecycle state to <code>available</code>, at which point
         * you can create one or more mount targets for the file system in your VPC. For
         * more information, see <a>CreateMountTarget</a>. You mount your Amazon EFS file
         * system on an EC2 instances in your VPC by using the mount target. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/efs/latest/ug/how-it-works.html">Amazon EFS:
         * How it Works</a>. </p> <p> This operation requires permissions for the
         * <code>elasticfilesystem:CreateFileSystem</code> action. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/CreateFileSystem">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFileSystemOutcome CreateFileSystem(const Model::CreateFileSystemRequest& request) const;

        /**
         * <p>Creates a new, empty file system. The operation requires a creation token in
         * the request that Amazon EFS uses to ensure idempotent creation (calling the
         * operation with same creation token has no effect). If a file system does not
         * currently exist that is owned by the caller's AWS account with the specified
         * creation token, this operation does the following:</p> <ul> <li> <p>Creates a
         * new, empty file system. The file system will have an Amazon EFS assigned ID, and
         * an initial lifecycle state <code>creating</code>.</p> </li> <li> <p>Returns with
         * the description of the created file system.</p> </li> </ul> <p>Otherwise, this
         * operation returns a <code>FileSystemAlreadyExists</code> error with the ID of
         * the existing file system.</p> <note> <p>For basic use cases, you can use a
         * randomly generated UUID for the creation token.</p> </note> <p> The idempotent
         * operation allows you to retry a <code>CreateFileSystem</code> call without risk
         * of creating an extra file system. This can happen when an initial call fails in
         * a way that leaves it uncertain whether or not a file system was actually
         * created. An example might be that a transport level timeout occurred or your
         * connection was reset. As long as you use the same creation token, if the initial
         * call had succeeded in creating a file system, the client can learn of its
         * existence from the <code>FileSystemAlreadyExists</code> error.</p> <note> <p>The
         * <code>CreateFileSystem</code> call returns while the file system's lifecycle
         * state is still <code>creating</code>. You can check the file system creation
         * status by calling the <a>DescribeFileSystems</a> operation, which among other
         * things returns the file system state.</p> </note> <p>This operation also takes
         * an optional <code>PerformanceMode</code> parameter that you choose for your file
         * system. We recommend <code>generalPurpose</code> performance mode for most file
         * systems. File systems using the <code>maxIO</code> performance mode can scale to
         * higher levels of aggregate throughput and operations per second with a tradeoff
         * of slightly higher latencies for most file operations. The performance mode
         * can't be changed after the file system has been created. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/efs/latest/ug/performance.html#performancemodes.html">Amazon
         * EFS: Performance Modes</a>.</p> <p>After the file system is fully created,
         * Amazon EFS sets its lifecycle state to <code>available</code>, at which point
         * you can create one or more mount targets for the file system in your VPC. For
         * more information, see <a>CreateMountTarget</a>. You mount your Amazon EFS file
         * system on an EC2 instances in your VPC by using the mount target. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/efs/latest/ug/how-it-works.html">Amazon EFS:
         * How it Works</a>. </p> <p> This operation requires permissions for the
         * <code>elasticfilesystem:CreateFileSystem</code> action. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/CreateFileSystem">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFileSystemOutcomeCallable CreateFileSystemCallable(const Model::CreateFileSystemRequest& request) const;

        /**
         * <p>Creates a new, empty file system. The operation requires a creation token in
         * the request that Amazon EFS uses to ensure idempotent creation (calling the
         * operation with same creation token has no effect). If a file system does not
         * currently exist that is owned by the caller's AWS account with the specified
         * creation token, this operation does the following:</p> <ul> <li> <p>Creates a
         * new, empty file system. The file system will have an Amazon EFS assigned ID, and
         * an initial lifecycle state <code>creating</code>.</p> </li> <li> <p>Returns with
         * the description of the created file system.</p> </li> </ul> <p>Otherwise, this
         * operation returns a <code>FileSystemAlreadyExists</code> error with the ID of
         * the existing file system.</p> <note> <p>For basic use cases, you can use a
         * randomly generated UUID for the creation token.</p> </note> <p> The idempotent
         * operation allows you to retry a <code>CreateFileSystem</code> call without risk
         * of creating an extra file system. This can happen when an initial call fails in
         * a way that leaves it uncertain whether or not a file system was actually
         * created. An example might be that a transport level timeout occurred or your
         * connection was reset. As long as you use the same creation token, if the initial
         * call had succeeded in creating a file system, the client can learn of its
         * existence from the <code>FileSystemAlreadyExists</code> error.</p> <note> <p>The
         * <code>CreateFileSystem</code> call returns while the file system's lifecycle
         * state is still <code>creating</code>. You can check the file system creation
         * status by calling the <a>DescribeFileSystems</a> operation, which among other
         * things returns the file system state.</p> </note> <p>This operation also takes
         * an optional <code>PerformanceMode</code> parameter that you choose for your file
         * system. We recommend <code>generalPurpose</code> performance mode for most file
         * systems. File systems using the <code>maxIO</code> performance mode can scale to
         * higher levels of aggregate throughput and operations per second with a tradeoff
         * of slightly higher latencies for most file operations. The performance mode
         * can't be changed after the file system has been created. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/efs/latest/ug/performance.html#performancemodes.html">Amazon
         * EFS: Performance Modes</a>.</p> <p>After the file system is fully created,
         * Amazon EFS sets its lifecycle state to <code>available</code>, at which point
         * you can create one or more mount targets for the file system in your VPC. For
         * more information, see <a>CreateMountTarget</a>. You mount your Amazon EFS file
         * system on an EC2 instances in your VPC by using the mount target. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/efs/latest/ug/how-it-works.html">Amazon EFS:
         * How it Works</a>. </p> <p> This operation requires permissions for the
         * <code>elasticfilesystem:CreateFileSystem</code> action. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/CreateFileSystem">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFileSystemAsync(const Model::CreateFileSystemRequest& request, const CreateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a mount target for a file system. You can then mount the file system
         * on EC2 instances by using the mount target.</p> <p>You can create one mount
         * target in each Availability Zone in your VPC. All EC2 instances in a VPC within
         * a given Availability Zone share a single mount target for a given file system.
         * If you have multiple subnets in an Availability Zone, you create a mount target
         * in one of the subnets. EC2 instances do not need to be in the same subnet as the
         * mount target in order to access their file system. For more information, see <a
         * href="https://docs.aws.amazon.com/efs/latest/ug/how-it-works.html">Amazon EFS:
         * How it Works</a>. </p> <p>In the request, you also specify a file system ID for
         * which you are creating the mount target and the file system's lifecycle state
         * must be <code>available</code>. For more information, see
         * <a>DescribeFileSystems</a>.</p> <p>In the request, you also provide a subnet ID,
         * which determines the following:</p> <ul> <li> <p>VPC in which Amazon EFS creates
         * the mount target</p> </li> <li> <p>Availability Zone in which Amazon EFS creates
         * the mount target</p> </li> <li> <p>IP address range from which Amazon EFS
         * selects the IP address of the mount target (if you don't specify an IP address
         * in the request)</p> </li> </ul> <p>After creating the mount target, Amazon EFS
         * returns a response that includes, a <code>MountTargetId</code> and an
         * <code>IpAddress</code>. You use this IP address when mounting the file system in
         * an EC2 instance. You can also use the mount target's DNS name when mounting the
         * file system. The EC2 instance on which you mount the file system by using the
         * mount target can resolve the mount target's DNS name to its IP address. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/efs/latest/ug/how-it-works.html#how-it-works-implementation">How
         * it Works: Implementation Overview</a>. </p> <p>Note that you can create mount
         * targets for a file system in only one VPC, and there can be only one mount
         * target per Availability Zone. That is, if the file system already has one or
         * more mount targets created for it, the subnet specified in the request to add
         * another mount target must meet the following requirements:</p> <ul> <li> <p>Must
         * belong to the same VPC as the subnets of the existing mount targets</p> </li>
         * <li> <p>Must not be in the same Availability Zone as any of the subnets of the
         * existing mount targets</p> </li> </ul> <p>If the request satisfies the
         * requirements, Amazon EFS does the following:</p> <ul> <li> <p>Creates a new
         * mount target in the specified subnet.</p> </li> <li> <p>Also creates a new
         * network interface in the subnet as follows:</p> <ul> <li> <p>If the request
         * provides an <code>IpAddress</code>, Amazon EFS assigns that IP address to the
         * network interface. Otherwise, Amazon EFS assigns a free address in the subnet
         * (in the same way that the Amazon EC2 <code>CreateNetworkInterface</code> call
         * does when a request does not specify a primary private IP address).</p> </li>
         * <li> <p>If the request provides <code>SecurityGroups</code>, this network
         * interface is associated with those security groups. Otherwise, it belongs to the
         * default security group for the subnet's VPC.</p> </li> <li> <p>Assigns the
         * description <code>Mount target <i>fsmt-id</i> for file system <i>fs-id</i>
         * </code> where <code> <i>fsmt-id</i> </code> is the mount target ID, and <code>
         * <i>fs-id</i> </code> is the <code>FileSystemId</code>.</p> </li> <li> <p>Sets
         * the <code>requesterManaged</code> property of the network interface to
         * <code>true</code>, and the <code>requesterId</code> value to
         * <code>EFS</code>.</p> </li> </ul> <p>Each Amazon EFS mount target has one
         * corresponding requester-managed EC2 network interface. After the network
         * interface is created, Amazon EFS sets the <code>NetworkInterfaceId</code> field
         * in the mount target's description to the network interface ID, and the
         * <code>IpAddress</code> field to its address. If network interface creation
         * fails, the entire <code>CreateMountTarget</code> operation fails.</p> </li>
         * </ul> <note> <p>The <code>CreateMountTarget</code> call returns only after
         * creating the network interface, but while the mount target state is still
         * <code>creating</code>, you can check the mount target creation status by calling
         * the <a>DescribeMountTargets</a> operation, which among other things returns the
         * mount target state.</p> </note> <p>We recommend that you create a mount target
         * in each of the Availability Zones. There are cost considerations for using a
         * file system in an Availability Zone through a mount target created in another
         * Availability Zone. For more information, see <a
         * href="http://aws.amazon.com/efs/">Amazon EFS</a>. In addition, by always using a
         * mount target local to the instance's Availability Zone, you eliminate a partial
         * failure scenario. If the Availability Zone in which your mount target is created
         * goes down, then you can't access your file system through that mount target.
         * </p> <p>This operation requires permissions for the following action on the file
         * system:</p> <ul> <li> <p> <code>elasticfilesystem:CreateMountTarget</code> </p>
         * </li> </ul> <p>This operation also requires permissions for the following Amazon
         * EC2 actions:</p> <ul> <li> <p> <code>ec2:DescribeSubnets</code> </p> </li> <li>
         * <p> <code>ec2:DescribeNetworkInterfaces</code> </p> </li> <li> <p>
         * <code>ec2:CreateNetworkInterface</code> </p> </li> </ul><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/CreateMountTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMountTargetOutcome CreateMountTarget(const Model::CreateMountTargetRequest& request) const;

        /**
         * <p>Creates a mount target for a file system. You can then mount the file system
         * on EC2 instances by using the mount target.</p> <p>You can create one mount
         * target in each Availability Zone in your VPC. All EC2 instances in a VPC within
         * a given Availability Zone share a single mount target for a given file system.
         * If you have multiple subnets in an Availability Zone, you create a mount target
         * in one of the subnets. EC2 instances do not need to be in the same subnet as the
         * mount target in order to access their file system. For more information, see <a
         * href="https://docs.aws.amazon.com/efs/latest/ug/how-it-works.html">Amazon EFS:
         * How it Works</a>. </p> <p>In the request, you also specify a file system ID for
         * which you are creating the mount target and the file system's lifecycle state
         * must be <code>available</code>. For more information, see
         * <a>DescribeFileSystems</a>.</p> <p>In the request, you also provide a subnet ID,
         * which determines the following:</p> <ul> <li> <p>VPC in which Amazon EFS creates
         * the mount target</p> </li> <li> <p>Availability Zone in which Amazon EFS creates
         * the mount target</p> </li> <li> <p>IP address range from which Amazon EFS
         * selects the IP address of the mount target (if you don't specify an IP address
         * in the request)</p> </li> </ul> <p>After creating the mount target, Amazon EFS
         * returns a response that includes, a <code>MountTargetId</code> and an
         * <code>IpAddress</code>. You use this IP address when mounting the file system in
         * an EC2 instance. You can also use the mount target's DNS name when mounting the
         * file system. The EC2 instance on which you mount the file system by using the
         * mount target can resolve the mount target's DNS name to its IP address. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/efs/latest/ug/how-it-works.html#how-it-works-implementation">How
         * it Works: Implementation Overview</a>. </p> <p>Note that you can create mount
         * targets for a file system in only one VPC, and there can be only one mount
         * target per Availability Zone. That is, if the file system already has one or
         * more mount targets created for it, the subnet specified in the request to add
         * another mount target must meet the following requirements:</p> <ul> <li> <p>Must
         * belong to the same VPC as the subnets of the existing mount targets</p> </li>
         * <li> <p>Must not be in the same Availability Zone as any of the subnets of the
         * existing mount targets</p> </li> </ul> <p>If the request satisfies the
         * requirements, Amazon EFS does the following:</p> <ul> <li> <p>Creates a new
         * mount target in the specified subnet.</p> </li> <li> <p>Also creates a new
         * network interface in the subnet as follows:</p> <ul> <li> <p>If the request
         * provides an <code>IpAddress</code>, Amazon EFS assigns that IP address to the
         * network interface. Otherwise, Amazon EFS assigns a free address in the subnet
         * (in the same way that the Amazon EC2 <code>CreateNetworkInterface</code> call
         * does when a request does not specify a primary private IP address).</p> </li>
         * <li> <p>If the request provides <code>SecurityGroups</code>, this network
         * interface is associated with those security groups. Otherwise, it belongs to the
         * default security group for the subnet's VPC.</p> </li> <li> <p>Assigns the
         * description <code>Mount target <i>fsmt-id</i> for file system <i>fs-id</i>
         * </code> where <code> <i>fsmt-id</i> </code> is the mount target ID, and <code>
         * <i>fs-id</i> </code> is the <code>FileSystemId</code>.</p> </li> <li> <p>Sets
         * the <code>requesterManaged</code> property of the network interface to
         * <code>true</code>, and the <code>requesterId</code> value to
         * <code>EFS</code>.</p> </li> </ul> <p>Each Amazon EFS mount target has one
         * corresponding requester-managed EC2 network interface. After the network
         * interface is created, Amazon EFS sets the <code>NetworkInterfaceId</code> field
         * in the mount target's description to the network interface ID, and the
         * <code>IpAddress</code> field to its address. If network interface creation
         * fails, the entire <code>CreateMountTarget</code> operation fails.</p> </li>
         * </ul> <note> <p>The <code>CreateMountTarget</code> call returns only after
         * creating the network interface, but while the mount target state is still
         * <code>creating</code>, you can check the mount target creation status by calling
         * the <a>DescribeMountTargets</a> operation, which among other things returns the
         * mount target state.</p> </note> <p>We recommend that you create a mount target
         * in each of the Availability Zones. There are cost considerations for using a
         * file system in an Availability Zone through a mount target created in another
         * Availability Zone. For more information, see <a
         * href="http://aws.amazon.com/efs/">Amazon EFS</a>. In addition, by always using a
         * mount target local to the instance's Availability Zone, you eliminate a partial
         * failure scenario. If the Availability Zone in which your mount target is created
         * goes down, then you can't access your file system through that mount target.
         * </p> <p>This operation requires permissions for the following action on the file
         * system:</p> <ul> <li> <p> <code>elasticfilesystem:CreateMountTarget</code> </p>
         * </li> </ul> <p>This operation also requires permissions for the following Amazon
         * EC2 actions:</p> <ul> <li> <p> <code>ec2:DescribeSubnets</code> </p> </li> <li>
         * <p> <code>ec2:DescribeNetworkInterfaces</code> </p> </li> <li> <p>
         * <code>ec2:CreateNetworkInterface</code> </p> </li> </ul><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/CreateMountTarget">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMountTargetOutcomeCallable CreateMountTargetCallable(const Model::CreateMountTargetRequest& request) const;

        /**
         * <p>Creates a mount target for a file system. You can then mount the file system
         * on EC2 instances by using the mount target.</p> <p>You can create one mount
         * target in each Availability Zone in your VPC. All EC2 instances in a VPC within
         * a given Availability Zone share a single mount target for a given file system.
         * If you have multiple subnets in an Availability Zone, you create a mount target
         * in one of the subnets. EC2 instances do not need to be in the same subnet as the
         * mount target in order to access their file system. For more information, see <a
         * href="https://docs.aws.amazon.com/efs/latest/ug/how-it-works.html">Amazon EFS:
         * How it Works</a>. </p> <p>In the request, you also specify a file system ID for
         * which you are creating the mount target and the file system's lifecycle state
         * must be <code>available</code>. For more information, see
         * <a>DescribeFileSystems</a>.</p> <p>In the request, you also provide a subnet ID,
         * which determines the following:</p> <ul> <li> <p>VPC in which Amazon EFS creates
         * the mount target</p> </li> <li> <p>Availability Zone in which Amazon EFS creates
         * the mount target</p> </li> <li> <p>IP address range from which Amazon EFS
         * selects the IP address of the mount target (if you don't specify an IP address
         * in the request)</p> </li> </ul> <p>After creating the mount target, Amazon EFS
         * returns a response that includes, a <code>MountTargetId</code> and an
         * <code>IpAddress</code>. You use this IP address when mounting the file system in
         * an EC2 instance. You can also use the mount target's DNS name when mounting the
         * file system. The EC2 instance on which you mount the file system by using the
         * mount target can resolve the mount target's DNS name to its IP address. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/efs/latest/ug/how-it-works.html#how-it-works-implementation">How
         * it Works: Implementation Overview</a>. </p> <p>Note that you can create mount
         * targets for a file system in only one VPC, and there can be only one mount
         * target per Availability Zone. That is, if the file system already has one or
         * more mount targets created for it, the subnet specified in the request to add
         * another mount target must meet the following requirements:</p> <ul> <li> <p>Must
         * belong to the same VPC as the subnets of the existing mount targets</p> </li>
         * <li> <p>Must not be in the same Availability Zone as any of the subnets of the
         * existing mount targets</p> </li> </ul> <p>If the request satisfies the
         * requirements, Amazon EFS does the following:</p> <ul> <li> <p>Creates a new
         * mount target in the specified subnet.</p> </li> <li> <p>Also creates a new
         * network interface in the subnet as follows:</p> <ul> <li> <p>If the request
         * provides an <code>IpAddress</code>, Amazon EFS assigns that IP address to the
         * network interface. Otherwise, Amazon EFS assigns a free address in the subnet
         * (in the same way that the Amazon EC2 <code>CreateNetworkInterface</code> call
         * does when a request does not specify a primary private IP address).</p> </li>
         * <li> <p>If the request provides <code>SecurityGroups</code>, this network
         * interface is associated with those security groups. Otherwise, it belongs to the
         * default security group for the subnet's VPC.</p> </li> <li> <p>Assigns the
         * description <code>Mount target <i>fsmt-id</i> for file system <i>fs-id</i>
         * </code> where <code> <i>fsmt-id</i> </code> is the mount target ID, and <code>
         * <i>fs-id</i> </code> is the <code>FileSystemId</code>.</p> </li> <li> <p>Sets
         * the <code>requesterManaged</code> property of the network interface to
         * <code>true</code>, and the <code>requesterId</code> value to
         * <code>EFS</code>.</p> </li> </ul> <p>Each Amazon EFS mount target has one
         * corresponding requester-managed EC2 network interface. After the network
         * interface is created, Amazon EFS sets the <code>NetworkInterfaceId</code> field
         * in the mount target's description to the network interface ID, and the
         * <code>IpAddress</code> field to its address. If network interface creation
         * fails, the entire <code>CreateMountTarget</code> operation fails.</p> </li>
         * </ul> <note> <p>The <code>CreateMountTarget</code> call returns only after
         * creating the network interface, but while the mount target state is still
         * <code>creating</code>, you can check the mount target creation status by calling
         * the <a>DescribeMountTargets</a> operation, which among other things returns the
         * mount target state.</p> </note> <p>We recommend that you create a mount target
         * in each of the Availability Zones. There are cost considerations for using a
         * file system in an Availability Zone through a mount target created in another
         * Availability Zone. For more information, see <a
         * href="http://aws.amazon.com/efs/">Amazon EFS</a>. In addition, by always using a
         * mount target local to the instance's Availability Zone, you eliminate a partial
         * failure scenario. If the Availability Zone in which your mount target is created
         * goes down, then you can't access your file system through that mount target.
         * </p> <p>This operation requires permissions for the following action on the file
         * system:</p> <ul> <li> <p> <code>elasticfilesystem:CreateMountTarget</code> </p>
         * </li> </ul> <p>This operation also requires permissions for the following Amazon
         * EC2 actions:</p> <ul> <li> <p> <code>ec2:DescribeSubnets</code> </p> </li> <li>
         * <p> <code>ec2:DescribeNetworkInterfaces</code> </p> </li> <li> <p>
         * <code>ec2:CreateNetworkInterface</code> </p> </li> </ul><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/CreateMountTarget">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMountTargetAsync(const Model::CreateMountTargetRequest& request, const CreateMountTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or overwrites tags associated with a file system. Each tag is a
         * key-value pair. If a tag key specified in the request already exists on the file
         * system, this operation overwrites its value with the value provided in the
         * request. If you add the <code>Name</code> tag to your file system, Amazon EFS
         * returns it in the response to the <a>DescribeFileSystems</a> operation. </p>
         * <p>This operation requires permission for the
         * <code>elasticfilesystem:CreateTags</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/CreateTags">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTagsOutcome CreateTags(const Model::CreateTagsRequest& request) const;

        /**
         * <p>Creates or overwrites tags associated with a file system. Each tag is a
         * key-value pair. If a tag key specified in the request already exists on the file
         * system, this operation overwrites its value with the value provided in the
         * request. If you add the <code>Name</code> tag to your file system, Amazon EFS
         * returns it in the response to the <a>DescribeFileSystems</a> operation. </p>
         * <p>This operation requires permission for the
         * <code>elasticfilesystem:CreateTags</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/CreateTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTagsOutcomeCallable CreateTagsCallable(const Model::CreateTagsRequest& request) const;

        /**
         * <p>Creates or overwrites tags associated with a file system. Each tag is a
         * key-value pair. If a tag key specified in the request already exists on the file
         * system, this operation overwrites its value with the value provided in the
         * request. If you add the <code>Name</code> tag to your file system, Amazon EFS
         * returns it in the response to the <a>DescribeFileSystems</a> operation. </p>
         * <p>This operation requires permission for the
         * <code>elasticfilesystem:CreateTags</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/CreateTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTagsAsync(const Model::CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a file system, permanently severing access to its contents. Upon
         * return, the file system no longer exists and you can't access any contents of
         * the deleted file system.</p> <p> You can't delete a file system that is in use.
         * That is, if the file system has any mount targets, you must first delete them.
         * For more information, see <a>DescribeMountTargets</a> and
         * <a>DeleteMountTarget</a>. </p> <note> <p>The <code>DeleteFileSystem</code> call
         * returns while the file system state is still <code>deleting</code>. You can
         * check the file system deletion status by calling the <a>DescribeFileSystems</a>
         * operation, which returns a list of file systems in your account. If you pass
         * file system ID or creation token for the deleted file system, the
         * <a>DescribeFileSystems</a> returns a <code>404 FileSystemNotFound</code>
         * error.</p> </note> <p>This operation requires permissions for the
         * <code>elasticfilesystem:DeleteFileSystem</code> action.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DeleteFileSystem">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFileSystemOutcome DeleteFileSystem(const Model::DeleteFileSystemRequest& request) const;

        /**
         * <p>Deletes a file system, permanently severing access to its contents. Upon
         * return, the file system no longer exists and you can't access any contents of
         * the deleted file system.</p> <p> You can't delete a file system that is in use.
         * That is, if the file system has any mount targets, you must first delete them.
         * For more information, see <a>DescribeMountTargets</a> and
         * <a>DeleteMountTarget</a>. </p> <note> <p>The <code>DeleteFileSystem</code> call
         * returns while the file system state is still <code>deleting</code>. You can
         * check the file system deletion status by calling the <a>DescribeFileSystems</a>
         * operation, which returns a list of file systems in your account. If you pass
         * file system ID or creation token for the deleted file system, the
         * <a>DescribeFileSystems</a> returns a <code>404 FileSystemNotFound</code>
         * error.</p> </note> <p>This operation requires permissions for the
         * <code>elasticfilesystem:DeleteFileSystem</code> action.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DeleteFileSystem">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFileSystemOutcomeCallable DeleteFileSystemCallable(const Model::DeleteFileSystemRequest& request) const;

        /**
         * <p>Deletes a file system, permanently severing access to its contents. Upon
         * return, the file system no longer exists and you can't access any contents of
         * the deleted file system.</p> <p> You can't delete a file system that is in use.
         * That is, if the file system has any mount targets, you must first delete them.
         * For more information, see <a>DescribeMountTargets</a> and
         * <a>DeleteMountTarget</a>. </p> <note> <p>The <code>DeleteFileSystem</code> call
         * returns while the file system state is still <code>deleting</code>. You can
         * check the file system deletion status by calling the <a>DescribeFileSystems</a>
         * operation, which returns a list of file systems in your account. If you pass
         * file system ID or creation token for the deleted file system, the
         * <a>DescribeFileSystems</a> returns a <code>404 FileSystemNotFound</code>
         * error.</p> </note> <p>This operation requires permissions for the
         * <code>elasticfilesystem:DeleteFileSystem</code> action.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DeleteFileSystem">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFileSystemAsync(const Model::DeleteFileSystemRequest& request, const DeleteFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified mount target.</p> <p>This operation forcibly breaks any
         * mounts of the file system by using the mount target that is being deleted, which
         * might disrupt instances or applications using those mounts. To avoid
         * applications getting cut off abruptly, you might consider unmounting any mounts
         * of the mount target, if feasible. The operation also deletes the associated
         * network interface. Uncommitted writes might be lost, but breaking a mount target
         * using this operation does not corrupt the file system itself. The file system
         * you created remains. You can mount an EC2 instance in your VPC by using another
         * mount target.</p> <p>This operation requires permissions for the following
         * action on the file system:</p> <ul> <li> <p>
         * <code>elasticfilesystem:DeleteMountTarget</code> </p> </li> </ul> <note> <p>The
         * <code>DeleteMountTarget</code> call returns while the mount target state is
         * still <code>deleting</code>. You can check the mount target deletion by calling
         * the <a>DescribeMountTargets</a> operation, which returns a list of mount target
         * descriptions for the given file system. </p> </note> <p>The operation also
         * requires permissions for the following Amazon EC2 action on the mount target's
         * network interface:</p> <ul> <li> <p> <code>ec2:DeleteNetworkInterface</code>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DeleteMountTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMountTargetOutcome DeleteMountTarget(const Model::DeleteMountTargetRequest& request) const;

        /**
         * <p>Deletes the specified mount target.</p> <p>This operation forcibly breaks any
         * mounts of the file system by using the mount target that is being deleted, which
         * might disrupt instances or applications using those mounts. To avoid
         * applications getting cut off abruptly, you might consider unmounting any mounts
         * of the mount target, if feasible. The operation also deletes the associated
         * network interface. Uncommitted writes might be lost, but breaking a mount target
         * using this operation does not corrupt the file system itself. The file system
         * you created remains. You can mount an EC2 instance in your VPC by using another
         * mount target.</p> <p>This operation requires permissions for the following
         * action on the file system:</p> <ul> <li> <p>
         * <code>elasticfilesystem:DeleteMountTarget</code> </p> </li> </ul> <note> <p>The
         * <code>DeleteMountTarget</code> call returns while the mount target state is
         * still <code>deleting</code>. You can check the mount target deletion by calling
         * the <a>DescribeMountTargets</a> operation, which returns a list of mount target
         * descriptions for the given file system. </p> </note> <p>The operation also
         * requires permissions for the following Amazon EC2 action on the mount target's
         * network interface:</p> <ul> <li> <p> <code>ec2:DeleteNetworkInterface</code>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DeleteMountTarget">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMountTargetOutcomeCallable DeleteMountTargetCallable(const Model::DeleteMountTargetRequest& request) const;

        /**
         * <p>Deletes the specified mount target.</p> <p>This operation forcibly breaks any
         * mounts of the file system by using the mount target that is being deleted, which
         * might disrupt instances or applications using those mounts. To avoid
         * applications getting cut off abruptly, you might consider unmounting any mounts
         * of the mount target, if feasible. The operation also deletes the associated
         * network interface. Uncommitted writes might be lost, but breaking a mount target
         * using this operation does not corrupt the file system itself. The file system
         * you created remains. You can mount an EC2 instance in your VPC by using another
         * mount target.</p> <p>This operation requires permissions for the following
         * action on the file system:</p> <ul> <li> <p>
         * <code>elasticfilesystem:DeleteMountTarget</code> </p> </li> </ul> <note> <p>The
         * <code>DeleteMountTarget</code> call returns while the mount target state is
         * still <code>deleting</code>. You can check the mount target deletion by calling
         * the <a>DescribeMountTargets</a> operation, which returns a list of mount target
         * descriptions for the given file system. </p> </note> <p>The operation also
         * requires permissions for the following Amazon EC2 action on the mount target's
         * network interface:</p> <ul> <li> <p> <code>ec2:DeleteNetworkInterface</code>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DeleteMountTarget">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMountTargetAsync(const Model::DeleteMountTargetRequest& request, const DeleteMountTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified tags from a file system. If the <code>DeleteTags</code>
         * request includes a tag key that doesn't exist, Amazon EFS ignores it and doesn't
         * cause an error. For more information about tags and related restrictions, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Tag
         * Restrictions</a> in the <i>AWS Billing and Cost Management User Guide</i>.</p>
         * <p>This operation requires permissions for the
         * <code>elasticfilesystem:DeleteTags</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DeleteTags">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTagsOutcome DeleteTags(const Model::DeleteTagsRequest& request) const;

        /**
         * <p>Deletes the specified tags from a file system. If the <code>DeleteTags</code>
         * request includes a tag key that doesn't exist, Amazon EFS ignores it and doesn't
         * cause an error. For more information about tags and related restrictions, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Tag
         * Restrictions</a> in the <i>AWS Billing and Cost Management User Guide</i>.</p>
         * <p>This operation requires permissions for the
         * <code>elasticfilesystem:DeleteTags</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DeleteTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTagsOutcomeCallable DeleteTagsCallable(const Model::DeleteTagsRequest& request) const;

        /**
         * <p>Deletes the specified tags from a file system. If the <code>DeleteTags</code>
         * request includes a tag key that doesn't exist, Amazon EFS ignores it and doesn't
         * cause an error. For more information about tags and related restrictions, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Tag
         * Restrictions</a> in the <i>AWS Billing and Cost Management User Guide</i>.</p>
         * <p>This operation requires permissions for the
         * <code>elasticfilesystem:DeleteTags</code> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DeleteTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTagsAsync(const Model::DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the description of a specific Amazon EFS file system if either the
         * file system <code>CreationToken</code> or the <code>FileSystemId</code> is
         * provided. Otherwise, it returns descriptions of all file systems owned by the
         * caller's AWS account in the AWS Region of the endpoint that you're calling.</p>
         * <p>When retrieving all file system descriptions, you can optionally specify the
         * <code>MaxItems</code> parameter to limit the number of descriptions in a
         * response. Currently, this number is automatically set to 10. If more file system
         * descriptions remain, Amazon EFS returns a <code>NextMarker</code>, an opaque
         * token, in the response. In this case, you should send a subsequent request with
         * the <code>Marker</code> request parameter set to the value of
         * <code>NextMarker</code>. </p> <p>To retrieve a list of your file system
         * descriptions, this operation is used in an iterative process, where
         * <code>DescribeFileSystems</code> is called first without the <code>Marker</code>
         * and then the operation continues to call it with the <code>Marker</code>
         * parameter set to the value of the <code>NextMarker</code> from the previous
         * response until the response has no <code>NextMarker</code>. </p> <p> The order
         * of file systems returned in the response of one <code>DescribeFileSystems</code>
         * call and the order of file systems returned across the responses of a multi-call
         * iteration is unspecified. </p> <p> This operation requires permissions for the
         * <code>elasticfilesystem:DescribeFileSystems</code> action. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DescribeFileSystems">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFileSystemsOutcome DescribeFileSystems(const Model::DescribeFileSystemsRequest& request) const;

        /**
         * <p>Returns the description of a specific Amazon EFS file system if either the
         * file system <code>CreationToken</code> or the <code>FileSystemId</code> is
         * provided. Otherwise, it returns descriptions of all file systems owned by the
         * caller's AWS account in the AWS Region of the endpoint that you're calling.</p>
         * <p>When retrieving all file system descriptions, you can optionally specify the
         * <code>MaxItems</code> parameter to limit the number of descriptions in a
         * response. Currently, this number is automatically set to 10. If more file system
         * descriptions remain, Amazon EFS returns a <code>NextMarker</code>, an opaque
         * token, in the response. In this case, you should send a subsequent request with
         * the <code>Marker</code> request parameter set to the value of
         * <code>NextMarker</code>. </p> <p>To retrieve a list of your file system
         * descriptions, this operation is used in an iterative process, where
         * <code>DescribeFileSystems</code> is called first without the <code>Marker</code>
         * and then the operation continues to call it with the <code>Marker</code>
         * parameter set to the value of the <code>NextMarker</code> from the previous
         * response until the response has no <code>NextMarker</code>. </p> <p> The order
         * of file systems returned in the response of one <code>DescribeFileSystems</code>
         * call and the order of file systems returned across the responses of a multi-call
         * iteration is unspecified. </p> <p> This operation requires permissions for the
         * <code>elasticfilesystem:DescribeFileSystems</code> action. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DescribeFileSystems">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFileSystemsOutcomeCallable DescribeFileSystemsCallable(const Model::DescribeFileSystemsRequest& request) const;

        /**
         * <p>Returns the description of a specific Amazon EFS file system if either the
         * file system <code>CreationToken</code> or the <code>FileSystemId</code> is
         * provided. Otherwise, it returns descriptions of all file systems owned by the
         * caller's AWS account in the AWS Region of the endpoint that you're calling.</p>
         * <p>When retrieving all file system descriptions, you can optionally specify the
         * <code>MaxItems</code> parameter to limit the number of descriptions in a
         * response. Currently, this number is automatically set to 10. If more file system
         * descriptions remain, Amazon EFS returns a <code>NextMarker</code>, an opaque
         * token, in the response. In this case, you should send a subsequent request with
         * the <code>Marker</code> request parameter set to the value of
         * <code>NextMarker</code>. </p> <p>To retrieve a list of your file system
         * descriptions, this operation is used in an iterative process, where
         * <code>DescribeFileSystems</code> is called first without the <code>Marker</code>
         * and then the operation continues to call it with the <code>Marker</code>
         * parameter set to the value of the <code>NextMarker</code> from the previous
         * response until the response has no <code>NextMarker</code>. </p> <p> The order
         * of file systems returned in the response of one <code>DescribeFileSystems</code>
         * call and the order of file systems returned across the responses of a multi-call
         * iteration is unspecified. </p> <p> This operation requires permissions for the
         * <code>elasticfilesystem:DescribeFileSystems</code> action. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DescribeFileSystems">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFileSystemsAsync(const Model::DescribeFileSystemsRequest& request, const DescribeFileSystemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the current <code>LifecycleConfiguration</code> object for the
         * specified Amazon EFS file system. EFS lifecycle management uses the
         * <code>LifecycleConfiguration</code> object to identify which files to move to
         * the EFS Infrequent Access (IA) storage class. For a file system without a
         * <code>LifecycleConfiguration</code> object, the call returns an empty array in
         * the response.</p> <p>This operation requires permissions for the
         * <code>elasticfilesystem:DescribeLifecycleConfiguration</code>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DescribeLifecycleConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLifecycleConfigurationOutcome DescribeLifecycleConfiguration(const Model::DescribeLifecycleConfigurationRequest& request) const;

        /**
         * <p>Returns the current <code>LifecycleConfiguration</code> object for the
         * specified Amazon EFS file system. EFS lifecycle management uses the
         * <code>LifecycleConfiguration</code> object to identify which files to move to
         * the EFS Infrequent Access (IA) storage class. For a file system without a
         * <code>LifecycleConfiguration</code> object, the call returns an empty array in
         * the response.</p> <p>This operation requires permissions for the
         * <code>elasticfilesystem:DescribeLifecycleConfiguration</code>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DescribeLifecycleConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLifecycleConfigurationOutcomeCallable DescribeLifecycleConfigurationCallable(const Model::DescribeLifecycleConfigurationRequest& request) const;

        /**
         * <p>Returns the current <code>LifecycleConfiguration</code> object for the
         * specified Amazon EFS file system. EFS lifecycle management uses the
         * <code>LifecycleConfiguration</code> object to identify which files to move to
         * the EFS Infrequent Access (IA) storage class. For a file system without a
         * <code>LifecycleConfiguration</code> object, the call returns an empty array in
         * the response.</p> <p>This operation requires permissions for the
         * <code>elasticfilesystem:DescribeLifecycleConfiguration</code>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DescribeLifecycleConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLifecycleConfigurationAsync(const Model::DescribeLifecycleConfigurationRequest& request, const DescribeLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the security groups currently in effect for a mount target. This
         * operation requires that the network interface of the mount target has been
         * created and the lifecycle state of the mount target is not
         * <code>deleted</code>.</p> <p>This operation requires permissions for the
         * following actions:</p> <ul> <li> <p>
         * <code>elasticfilesystem:DescribeMountTargetSecurityGroups</code> action on the
         * mount target's file system. </p> </li> <li> <p>
         * <code>ec2:DescribeNetworkInterfaceAttribute</code> action on the mount target's
         * network interface. </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DescribeMountTargetSecurityGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMountTargetSecurityGroupsOutcome DescribeMountTargetSecurityGroups(const Model::DescribeMountTargetSecurityGroupsRequest& request) const;

        /**
         * <p>Returns the security groups currently in effect for a mount target. This
         * operation requires that the network interface of the mount target has been
         * created and the lifecycle state of the mount target is not
         * <code>deleted</code>.</p> <p>This operation requires permissions for the
         * following actions:</p> <ul> <li> <p>
         * <code>elasticfilesystem:DescribeMountTargetSecurityGroups</code> action on the
         * mount target's file system. </p> </li> <li> <p>
         * <code>ec2:DescribeNetworkInterfaceAttribute</code> action on the mount target's
         * network interface. </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DescribeMountTargetSecurityGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMountTargetSecurityGroupsOutcomeCallable DescribeMountTargetSecurityGroupsCallable(const Model::DescribeMountTargetSecurityGroupsRequest& request) const;

        /**
         * <p>Returns the security groups currently in effect for a mount target. This
         * operation requires that the network interface of the mount target has been
         * created and the lifecycle state of the mount target is not
         * <code>deleted</code>.</p> <p>This operation requires permissions for the
         * following actions:</p> <ul> <li> <p>
         * <code>elasticfilesystem:DescribeMountTargetSecurityGroups</code> action on the
         * mount target's file system. </p> </li> <li> <p>
         * <code>ec2:DescribeNetworkInterfaceAttribute</code> action on the mount target's
         * network interface. </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DescribeMountTargetSecurityGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMountTargetSecurityGroupsAsync(const Model::DescribeMountTargetSecurityGroupsRequest& request, const DescribeMountTargetSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the descriptions of all the current mount targets, or a specific
         * mount target, for a file system. When requesting all of the current mount
         * targets, the order of mount targets returned in the response is unspecified.</p>
         * <p>This operation requires permissions for the
         * <code>elasticfilesystem:DescribeMountTargets</code> action, on either the file
         * system ID that you specify in <code>FileSystemId</code>, or on the file system
         * of the mount target that you specify in
         * <code>MountTargetId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DescribeMountTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMountTargetsOutcome DescribeMountTargets(const Model::DescribeMountTargetsRequest& request) const;

        /**
         * <p>Returns the descriptions of all the current mount targets, or a specific
         * mount target, for a file system. When requesting all of the current mount
         * targets, the order of mount targets returned in the response is unspecified.</p>
         * <p>This operation requires permissions for the
         * <code>elasticfilesystem:DescribeMountTargets</code> action, on either the file
         * system ID that you specify in <code>FileSystemId</code>, or on the file system
         * of the mount target that you specify in
         * <code>MountTargetId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DescribeMountTargets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMountTargetsOutcomeCallable DescribeMountTargetsCallable(const Model::DescribeMountTargetsRequest& request) const;

        /**
         * <p>Returns the descriptions of all the current mount targets, or a specific
         * mount target, for a file system. When requesting all of the current mount
         * targets, the order of mount targets returned in the response is unspecified.</p>
         * <p>This operation requires permissions for the
         * <code>elasticfilesystem:DescribeMountTargets</code> action, on either the file
         * system ID that you specify in <code>FileSystemId</code>, or on the file system
         * of the mount target that you specify in
         * <code>MountTargetId</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DescribeMountTargets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMountTargetsAsync(const Model::DescribeMountTargetsRequest& request, const DescribeMountTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the tags associated with a file system. The order of tags returned in
         * the response of one <code>DescribeTags</code> call and the order of tags
         * returned across the responses of a multiple-call iteration (when using
         * pagination) is unspecified. </p> <p> This operation requires permissions for the
         * <code>elasticfilesystem:DescribeTags</code> action. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DescribeTags">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTagsOutcome DescribeTags(const Model::DescribeTagsRequest& request) const;

        /**
         * <p>Returns the tags associated with a file system. The order of tags returned in
         * the response of one <code>DescribeTags</code> call and the order of tags
         * returned across the responses of a multiple-call iteration (when using
         * pagination) is unspecified. </p> <p> This operation requires permissions for the
         * <code>elasticfilesystem:DescribeTags</code> action. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DescribeTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTagsOutcomeCallable DescribeTagsCallable(const Model::DescribeTagsRequest& request) const;

        /**
         * <p>Returns the tags associated with a file system. The order of tags returned in
         * the response of one <code>DescribeTags</code> call and the order of tags
         * returned across the responses of a multiple-call iteration (when using
         * pagination) is unspecified. </p> <p> This operation requires permissions for the
         * <code>elasticfilesystem:DescribeTags</code> action. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DescribeTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTagsAsync(const Model::DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies the set of security groups in effect for a mount target.</p> <p>When
         * you create a mount target, Amazon EFS also creates a new network interface. For
         * more information, see <a>CreateMountTarget</a>. This operation replaces the
         * security groups in effect for the network interface associated with a mount
         * target, with the <code>SecurityGroups</code> provided in the request. This
         * operation requires that the network interface of the mount target has been
         * created and the lifecycle state of the mount target is not <code>deleted</code>.
         * </p> <p>The operation requires permissions for the following actions:</p> <ul>
         * <li> <p> <code>elasticfilesystem:ModifyMountTargetSecurityGroups</code> action
         * on the mount target's file system. </p> </li> <li> <p>
         * <code>ec2:ModifyNetworkInterfaceAttribute</code> action on the mount target's
         * network interface. </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/ModifyMountTargetSecurityGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ModifyMountTargetSecurityGroupsOutcome ModifyMountTargetSecurityGroups(const Model::ModifyMountTargetSecurityGroupsRequest& request) const;

        /**
         * <p>Modifies the set of security groups in effect for a mount target.</p> <p>When
         * you create a mount target, Amazon EFS also creates a new network interface. For
         * more information, see <a>CreateMountTarget</a>. This operation replaces the
         * security groups in effect for the network interface associated with a mount
         * target, with the <code>SecurityGroups</code> provided in the request. This
         * operation requires that the network interface of the mount target has been
         * created and the lifecycle state of the mount target is not <code>deleted</code>.
         * </p> <p>The operation requires permissions for the following actions:</p> <ul>
         * <li> <p> <code>elasticfilesystem:ModifyMountTargetSecurityGroups</code> action
         * on the mount target's file system. </p> </li> <li> <p>
         * <code>ec2:ModifyNetworkInterfaceAttribute</code> action on the mount target's
         * network interface. </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/ModifyMountTargetSecurityGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyMountTargetSecurityGroupsOutcomeCallable ModifyMountTargetSecurityGroupsCallable(const Model::ModifyMountTargetSecurityGroupsRequest& request) const;

        /**
         * <p>Modifies the set of security groups in effect for a mount target.</p> <p>When
         * you create a mount target, Amazon EFS also creates a new network interface. For
         * more information, see <a>CreateMountTarget</a>. This operation replaces the
         * security groups in effect for the network interface associated with a mount
         * target, with the <code>SecurityGroups</code> provided in the request. This
         * operation requires that the network interface of the mount target has been
         * created and the lifecycle state of the mount target is not <code>deleted</code>.
         * </p> <p>The operation requires permissions for the following actions:</p> <ul>
         * <li> <p> <code>elasticfilesystem:ModifyMountTargetSecurityGroups</code> action
         * on the mount target's file system. </p> </li> <li> <p>
         * <code>ec2:ModifyNetworkInterfaceAttribute</code> action on the mount target's
         * network interface. </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/ModifyMountTargetSecurityGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyMountTargetSecurityGroupsAsync(const Model::ModifyMountTargetSecurityGroupsRequest& request, const ModifyMountTargetSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables lifecycle management by creating a new
         * <code>LifecycleConfiguration</code> object. A
         * <code>LifecycleConfiguration</code> object defines when files in an Amazon EFS
         * file system are automatically transitioned to the lower-cost EFS Infrequent
         * Access (IA) storage class. A <code>LifecycleConfiguration</code> applies to all
         * files in a file system.</p> <p>Each Amazon EFS file system supports one
         * lifecycle configuration, which applies to all files in the file system. If a
         * <code>LifecycleConfiguration</code> object already exists for the specified file
         * system, a <code>PutLifecycleConfiguration</code> call modifies the existing
         * configuration. A <code>PutLifecycleConfiguration</code> call with an empty
         * <code>LifecyclePolicies</code> array in the request body deletes any existing
         * <code>LifecycleConfiguration</code> and disables lifecycle management.</p> <p>In
         * the request, specify the following: </p> <ul> <li> <p>The ID for the file system
         * for which you are enabling, disabling, or modifying lifecycle management.</p>
         * </li> <li> <p>A <code>LifecyclePolicies</code> array of
         * <code>LifecyclePolicy</code> objects that define when files are moved to the IA
         * storage class. The array can contain only one <code>LifecyclePolicy</code>
         * item.</p> </li> </ul> <p>This operation requires permissions for the
         * <code>elasticfilesystem:PutLifecycleConfiguration</code> operation.</p> <p>To
         * apply a <code>LifecycleConfiguration</code> object to an encrypted file system,
         * you need the same AWS Key Management Service (AWS KMS) permissions as when you
         * created the encrypted file system. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/PutLifecycleConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutLifecycleConfigurationOutcome PutLifecycleConfiguration(const Model::PutLifecycleConfigurationRequest& request) const;

        /**
         * <p>Enables lifecycle management by creating a new
         * <code>LifecycleConfiguration</code> object. A
         * <code>LifecycleConfiguration</code> object defines when files in an Amazon EFS
         * file system are automatically transitioned to the lower-cost EFS Infrequent
         * Access (IA) storage class. A <code>LifecycleConfiguration</code> applies to all
         * files in a file system.</p> <p>Each Amazon EFS file system supports one
         * lifecycle configuration, which applies to all files in the file system. If a
         * <code>LifecycleConfiguration</code> object already exists for the specified file
         * system, a <code>PutLifecycleConfiguration</code> call modifies the existing
         * configuration. A <code>PutLifecycleConfiguration</code> call with an empty
         * <code>LifecyclePolicies</code> array in the request body deletes any existing
         * <code>LifecycleConfiguration</code> and disables lifecycle management.</p> <p>In
         * the request, specify the following: </p> <ul> <li> <p>The ID for the file system
         * for which you are enabling, disabling, or modifying lifecycle management.</p>
         * </li> <li> <p>A <code>LifecyclePolicies</code> array of
         * <code>LifecyclePolicy</code> objects that define when files are moved to the IA
         * storage class. The array can contain only one <code>LifecyclePolicy</code>
         * item.</p> </li> </ul> <p>This operation requires permissions for the
         * <code>elasticfilesystem:PutLifecycleConfiguration</code> operation.</p> <p>To
         * apply a <code>LifecycleConfiguration</code> object to an encrypted file system,
         * you need the same AWS Key Management Service (AWS KMS) permissions as when you
         * created the encrypted file system. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/PutLifecycleConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutLifecycleConfigurationOutcomeCallable PutLifecycleConfigurationCallable(const Model::PutLifecycleConfigurationRequest& request) const;

        /**
         * <p>Enables lifecycle management by creating a new
         * <code>LifecycleConfiguration</code> object. A
         * <code>LifecycleConfiguration</code> object defines when files in an Amazon EFS
         * file system are automatically transitioned to the lower-cost EFS Infrequent
         * Access (IA) storage class. A <code>LifecycleConfiguration</code> applies to all
         * files in a file system.</p> <p>Each Amazon EFS file system supports one
         * lifecycle configuration, which applies to all files in the file system. If a
         * <code>LifecycleConfiguration</code> object already exists for the specified file
         * system, a <code>PutLifecycleConfiguration</code> call modifies the existing
         * configuration. A <code>PutLifecycleConfiguration</code> call with an empty
         * <code>LifecyclePolicies</code> array in the request body deletes any existing
         * <code>LifecycleConfiguration</code> and disables lifecycle management.</p> <p>In
         * the request, specify the following: </p> <ul> <li> <p>The ID for the file system
         * for which you are enabling, disabling, or modifying lifecycle management.</p>
         * </li> <li> <p>A <code>LifecyclePolicies</code> array of
         * <code>LifecyclePolicy</code> objects that define when files are moved to the IA
         * storage class. The array can contain only one <code>LifecyclePolicy</code>
         * item.</p> </li> </ul> <p>This operation requires permissions for the
         * <code>elasticfilesystem:PutLifecycleConfiguration</code> operation.</p> <p>To
         * apply a <code>LifecycleConfiguration</code> object to an encrypted file system,
         * you need the same AWS Key Management Service (AWS KMS) permissions as when you
         * created the encrypted file system. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/PutLifecycleConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutLifecycleConfigurationAsync(const Model::PutLifecycleConfigurationRequest& request, const PutLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the throughput mode or the amount of provisioned throughput of an
         * existing file system.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/UpdateFileSystem">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFileSystemOutcome UpdateFileSystem(const Model::UpdateFileSystemRequest& request) const;

        /**
         * <p>Updates the throughput mode or the amount of provisioned throughput of an
         * existing file system.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/UpdateFileSystem">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFileSystemOutcomeCallable UpdateFileSystemCallable(const Model::UpdateFileSystemRequest& request) const;

        /**
         * <p>Updates the throughput mode or the amount of provisioned throughput of an
         * existing file system.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/UpdateFileSystem">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFileSystemAsync(const Model::UpdateFileSystemRequest& request, const UpdateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateFileSystemAsyncHelper(const Model::CreateFileSystemRequest& request, const CreateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateMountTargetAsyncHelper(const Model::CreateMountTargetRequest& request, const CreateMountTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTagsAsyncHelper(const Model::CreateTagsRequest& request, const CreateTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFileSystemAsyncHelper(const Model::DeleteFileSystemRequest& request, const DeleteFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMountTargetAsyncHelper(const Model::DeleteMountTargetRequest& request, const DeleteMountTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTagsAsyncHelper(const Model::DeleteTagsRequest& request, const DeleteTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFileSystemsAsyncHelper(const Model::DescribeFileSystemsRequest& request, const DescribeFileSystemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLifecycleConfigurationAsyncHelper(const Model::DescribeLifecycleConfigurationRequest& request, const DescribeLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeMountTargetSecurityGroupsAsyncHelper(const Model::DescribeMountTargetSecurityGroupsRequest& request, const DescribeMountTargetSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeMountTargetsAsyncHelper(const Model::DescribeMountTargetsRequest& request, const DescribeMountTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTagsAsyncHelper(const Model::DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ModifyMountTargetSecurityGroupsAsyncHelper(const Model::ModifyMountTargetSecurityGroupsRequest& request, const ModifyMountTargetSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutLifecycleConfigurationAsyncHelper(const Model::PutLifecycleConfigurationRequest& request, const PutLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFileSystemAsyncHelper(const Model::UpdateFileSystemRequest& request, const UpdateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace EFS
} // namespace Aws
