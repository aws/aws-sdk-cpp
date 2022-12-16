/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elasticfilesystem/EFSServiceClientModel.h>

namespace Aws
{
namespace EFS
{
  /**
   * <fullname>Amazon Elastic File System</fullname> <p>Amazon Elastic File System
   * (Amazon EFS) provides simple, scalable file storage for use with Amazon EC2
   * Linux and Mac instances in the Amazon Web Services Cloud. With Amazon EFS,
   * storage capacity is elastic, growing and shrinking automatically as you add and
   * remove files, so that your applications have the storage they need, when they
   * need it. For more information, see the <a
   * href="https://docs.aws.amazon.com/efs/latest/ug/api-reference.html">Amazon
   * Elastic File System API Reference</a> and the <a
   * href="https://docs.aws.amazon.com/efs/latest/ug/whatisefs.html">Amazon Elastic
   * File System User Guide</a>.</p>
   */
  class AWS_EFS_API EFSClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<EFSClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EFSClient(const Aws::EFS::EFSClientConfiguration& clientConfiguration = Aws::EFS::EFSClientConfiguration(),
                  std::shared_ptr<EFSEndpointProviderBase> endpointProvider = Aws::MakeShared<EFSEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EFSClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<EFSEndpointProviderBase> endpointProvider = Aws::MakeShared<EFSEndpointProvider>(ALLOCATION_TAG),
                  const Aws::EFS::EFSClientConfiguration& clientConfiguration = Aws::EFS::EFSClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        EFSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<EFSEndpointProviderBase> endpointProvider = Aws::MakeShared<EFSEndpointProvider>(ALLOCATION_TAG),
                  const Aws::EFS::EFSClientConfiguration& clientConfiguration = Aws::EFS::EFSClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EFSClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EFSClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        EFSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~EFSClient();

        /**
         * <p>Creates an EFS access point. An access point is an application-specific view
         * into an EFS file system that applies an operating system user and group, and a
         * file system path, to any file system request made through the access point. The
         * operating system user and group override any identity information provided by
         * the NFS client. The file system path is exposed as the access point's root
         * directory. Applications using the access point can only access data in the
         * application's own directory and any subdirectories. To learn more, see <a
         * href="https://docs.aws.amazon.com/efs/latest/ug/efs-access-points.html">Mounting
         * a file system using EFS access points</a>.</p>  <p>If multiple requests to
         * create access points on the same file system are sent in quick succession, and
         * the file system is near the limit of 120 access points, you may experience a
         * throttling response for these requests. This is to ensure that the file system
         * does not exceed the stated access point limit.</p>  <p>This operation
         * requires permissions for the <code>elasticfilesystem:CreateAccessPoint</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/CreateAccessPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAccessPointOutcome CreateAccessPoint(const Model::CreateAccessPointRequest& request) const;

        /**
         * A Callable wrapper for CreateAccessPoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAccessPointOutcomeCallable CreateAccessPointCallable(const Model::CreateAccessPointRequest& request) const;

        /**
         * An Async wrapper for CreateAccessPoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAccessPointAsync(const Model::CreateAccessPointRequest& request, const CreateAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new, empty file system. The operation requires a creation token in
         * the request that Amazon EFS uses to ensure idempotent creation (calling the
         * operation with same creation token has no effect). If a file system does not
         * currently exist that is owned by the caller's Amazon Web Services account with
         * the specified creation token, this operation does the following:</p> <ul> <li>
         * <p>Creates a new, empty file system. The file system will have an Amazon EFS
         * assigned ID, and an initial lifecycle state <code>creating</code>.</p> </li>
         * <li> <p>Returns with the description of the created file system.</p> </li> </ul>
         * <p>Otherwise, this operation returns a <code>FileSystemAlreadyExists</code>
         * error with the ID of the existing file system.</p>  <p>For basic use
         * cases, you can use a randomly generated UUID for the creation token.</p> 
         * <p> The idempotent operation allows you to retry a <code>CreateFileSystem</code>
         * call without risk of creating an extra file system. This can happen when an
         * initial call fails in a way that leaves it uncertain whether or not a file
         * system was actually created. An example might be that a transport level timeout
         * occurred or your connection was reset. As long as you use the same creation
         * token, if the initial call had succeeded in creating a file system, the client
         * can learn of its existence from the <code>FileSystemAlreadyExists</code>
         * error.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/efs/latest/ug/creating-using-create-fs.html#creating-using-create-fs-part1">Creating
         * a file system</a> in the <i>Amazon EFS User Guide</i>.</p>  <p>The
         * <code>CreateFileSystem</code> call returns while the file system's lifecycle
         * state is still <code>creating</code>. You can check the file system creation
         * status by calling the <a>DescribeFileSystems</a> operation, which among other
         * things returns the file system state.</p>  <p>This operation accepts an
         * optional <code>PerformanceMode</code> parameter that you choose for your file
         * system. We recommend <code>generalPurpose</code> performance mode for most file
         * systems. File systems using the <code>maxIO</code> performance mode can scale to
         * higher levels of aggregate throughput and operations per second with a tradeoff
         * of slightly higher latencies for most file operations. The performance mode
         * can't be changed after the file system has been created. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/efs/latest/ug/performance.html#performancemodes.html">Amazon
         * EFS performance modes</a>.</p> <p>You can set the throughput mode for the file
         * system using the <code>ThroughputMode</code> parameter.</p> <p>After the file
         * system is fully created, Amazon EFS sets its lifecycle state to
         * <code>available</code>, at which point you can create one or more mount targets
         * for the file system in your VPC. For more information, see
         * <a>CreateMountTarget</a>. You mount your Amazon EFS file system on an EC2
         * instances in your VPC by using the mount target. For more information, see <a
         * href="https://docs.aws.amazon.com/efs/latest/ug/how-it-works.html">Amazon EFS:
         * How it Works</a>. </p> <p> This operation requires permissions for the
         * <code>elasticfilesystem:CreateFileSystem</code> action. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/CreateFileSystem">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFileSystemOutcome CreateFileSystem(const Model::CreateFileSystemRequest& request) const;

        /**
         * A Callable wrapper for CreateFileSystem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFileSystemOutcomeCallable CreateFileSystemCallable(const Model::CreateFileSystemRequest& request) const;

        /**
         * An Async wrapper for CreateFileSystem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFileSystemAsync(const Model::CreateFileSystemRequest& request, const CreateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a mount target for a file system. You can then mount the file system
         * on EC2 instances by using the mount target.</p> <p>You can create one mount
         * target in each Availability Zone in your VPC. All EC2 instances in a VPC within
         * a given Availability Zone share a single mount target for a given file system.
         * If you have multiple subnets in an Availability Zone, you create a mount target
         * in one of the subnets. EC2 instances do not need to be in the same subnet as the
         * mount target in order to access their file system.</p> <p>You can create only
         * one mount target for an EFS file system using One Zone storage classes. You must
         * create that mount target in the same Availability Zone in which the file system
         * is located. Use the <code>AvailabilityZoneName</code> and
         * <code>AvailabiltyZoneId</code> properties in the <a>DescribeFileSystems</a>
         * response object to get this information. Use the <code>subnetId</code>
         * associated with the file system's Availability Zone when creating the mount
         * target.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/efs/latest/ug/how-it-works.html">Amazon EFS:
         * How it Works</a>. </p> <p>To create a mount target for a file system, the file
         * system's lifecycle state must be <code>available</code>. For more information,
         * see <a>DescribeFileSystems</a>.</p> <p>In the request, provide the
         * following:</p> <ul> <li> <p>The file system ID for which you are creating the
         * mount target.</p> </li> <li> <p>A subnet ID, which determines the following:</p>
         * <ul> <li> <p>The VPC in which Amazon EFS creates the mount target</p> </li> <li>
         * <p>The Availability Zone in which Amazon EFS creates the mount target</p> </li>
         * <li> <p>The IP address range from which Amazon EFS selects the IP address of the
         * mount target (if you don't specify an IP address in the request)</p> </li> </ul>
         * </li> </ul> <p>After creating the mount target, Amazon EFS returns a response
         * that includes, a <code>MountTargetId</code> and an <code>IpAddress</code>. You
         * use this IP address when mounting the file system in an EC2 instance. You can
         * also use the mount target's DNS name when mounting the file system. The EC2
         * instance on which you mount the file system by using the mount target can
         * resolve the mount target's DNS name to its IP address. For more information, see
         * <a
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
         * </ul>  <p>The <code>CreateMountTarget</code> call returns only after
         * creating the network interface, but while the mount target state is still
         * <code>creating</code>, you can check the mount target creation status by calling
         * the <a>DescribeMountTargets</a> operation, which among other things returns the
         * mount target state.</p>  <p>We recommend that you create a mount target
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
         * A Callable wrapper for CreateMountTarget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMountTargetOutcomeCallable CreateMountTargetCallable(const Model::CreateMountTargetRequest& request) const;

        /**
         * An Async wrapper for CreateMountTarget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMountTargetAsync(const Model::CreateMountTargetRequest& request, const CreateMountTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a replication configuration that replicates an existing EFS file
         * system to a new, read-only file system. For more information, see <a
         * href="https://docs.aws.amazon.com/efs/latest/ug/efs-replication.html">Amazon EFS
         * replication</a> in the <i>Amazon EFS User Guide</i>. The replication
         * configuration specifies the following:</p> <ul> <li> <p> <b>Source file
         * system</b> - An existing EFS file system that you want replicated. The source
         * file system cannot be a destination file system in an existing replication
         * configuration.</p> </li> <li> <p> <b>Destination file system configuration</b> -
         * The configuration of the destination file system to which the source file system
         * will be replicated. There can only be one destination file system in a
         * replication configuration. The destination file system configuration consists of
         * the following properties:</p> <ul> <li> <p> <b>Amazon Web Services Region</b> -
         * The Amazon Web Services Region in which the destination file system is created.
         * Amazon EFS replication is available in all Amazon Web Services Regions that
         * Amazon EFS is available in, except Africa (Cape Town), Asia Pacific (Hong Kong),
         * Asia Pacific (Jakarta), Europe (Milan), and Middle East (Bahrain).</p> </li>
         * <li> <p> <b>Availability Zone</b> - If you want the destination file system to
         * use EFS One Zone availability and durability, you must specify the Availability
         * Zone to create the file system in. For more information about EFS storage
         * classes, see <a
         * href="https://docs.aws.amazon.com/efs/latest/ug/storage-classes.html"> Amazon
         * EFS storage classes</a> in the <i>Amazon EFS User Guide</i>.</p> </li> <li> <p>
         * <b>Encryption</b> - All destination file systems are created with encryption at
         * rest enabled. You can specify the Key Management Service (KMS) key that is used
         * to encrypt the destination file system. If you don't specify a KMS key, your
         * service-managed KMS key for Amazon EFS is used. </p>  <p>After the file
         * system is created, you cannot change the KMS key.</p>  </li> </ul> </li>
         * </ul> <p>The following properties are set by default:</p> <ul> <li> <p>
         * <b>Performance mode</b> - The destination file system's performance mode matches
         * that of the source file system, unless the destination file system uses EFS One
         * Zone storage. In that case, the General Purpose performance mode is used. The
         * performance mode cannot be changed.</p> </li> <li> <p> <b>Throughput mode</b> -
         * The destination file system uses the Bursting Throughput mode by default. After
         * the file system is created, you can modify the throughput mode.</p> </li> </ul>
         * <p>The following properties are turned off by default:</p> <ul> <li> <p>
         * <b>Lifecycle management</b> - EFS lifecycle management and EFS
         * Intelligent-Tiering are not enabled on the destination file system. After the
         * destination file system is created, you can enable EFS lifecycle management and
         * EFS Intelligent-Tiering.</p> </li> <li> <p> <b>Automatic backups</b> - Automatic
         * daily backups not enabled on the destination file system. After the file system
         * is created, you can change this setting.</p> </li> </ul> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/efs/latest/ug/efs-replication.html">Amazon EFS
         * replication</a> in the <i>Amazon EFS User Guide</i>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/CreateReplicationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReplicationConfigurationOutcome CreateReplicationConfiguration(const Model::CreateReplicationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateReplicationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateReplicationConfigurationOutcomeCallable CreateReplicationConfigurationCallable(const Model::CreateReplicationConfigurationRequest& request) const;

        /**
         * An Async wrapper for CreateReplicationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateReplicationConfigurationAsync(const Model::CreateReplicationConfigurationRequest& request, const CreateReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified access point. After deletion is complete, new clients
         * can no longer connect to the access points. Clients connected to the access
         * point at the time of deletion will continue to function until they terminate
         * their connection.</p> <p>This operation requires permissions for the
         * <code>elasticfilesystem:DeleteAccessPoint</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DeleteAccessPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccessPointOutcome DeleteAccessPoint(const Model::DeleteAccessPointRequest& request) const;

        /**
         * A Callable wrapper for DeleteAccessPoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAccessPointOutcomeCallable DeleteAccessPointCallable(const Model::DeleteAccessPointRequest& request) const;

        /**
         * An Async wrapper for DeleteAccessPoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAccessPointAsync(const Model::DeleteAccessPointRequest& request, const DeleteAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a file system, permanently severing access to its contents. Upon
         * return, the file system no longer exists and you can't access any contents of
         * the deleted file system.</p> <p>You need to manually delete mount targets
         * attached to a file system before you can delete an EFS file system. This step is
         * performed for you when you use the Amazon Web Services console to delete a file
         * system.</p>  <p>You cannot delete a file system that is part of an EFS
         * Replication configuration. You need to delete the replication configuration
         * first.</p>  <p> You can't delete a file system that is in use. That is,
         * if the file system has any mount targets, you must first delete them. For more
         * information, see <a>DescribeMountTargets</a> and <a>DeleteMountTarget</a>. </p>
         *  <p>The <code>DeleteFileSystem</code> call returns while the file system
         * state is still <code>deleting</code>. You can check the file system deletion
         * status by calling the <a>DescribeFileSystems</a> operation, which returns a list
         * of file systems in your account. If you pass file system ID or creation token
         * for the deleted file system, the <a>DescribeFileSystems</a> returns a <code>404
         * FileSystemNotFound</code> error.</p>  <p>This operation requires
         * permissions for the <code>elasticfilesystem:DeleteFileSystem</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DeleteFileSystem">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFileSystemOutcome DeleteFileSystem(const Model::DeleteFileSystemRequest& request) const;

        /**
         * A Callable wrapper for DeleteFileSystem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFileSystemOutcomeCallable DeleteFileSystemCallable(const Model::DeleteFileSystemRequest& request) const;

        /**
         * An Async wrapper for DeleteFileSystem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFileSystemAsync(const Model::DeleteFileSystemRequest& request, const DeleteFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the <code>FileSystemPolicy</code> for the specified file system. The
         * default <code>FileSystemPolicy</code> goes into effect once the existing policy
         * is deleted. For more information about the default file system policy, see <a
         * href="https://docs.aws.amazon.com/efs/latest/ug/res-based-policies-efs.html">Using
         * Resource-based Policies with EFS</a>.</p> <p>This operation requires permissions
         * for the <code>elasticfilesystem:DeleteFileSystemPolicy</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DeleteFileSystemPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFileSystemPolicyOutcome DeleteFileSystemPolicy(const Model::DeleteFileSystemPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteFileSystemPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFileSystemPolicyOutcomeCallable DeleteFileSystemPolicyCallable(const Model::DeleteFileSystemPolicyRequest& request) const;

        /**
         * An Async wrapper for DeleteFileSystemPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFileSystemPolicyAsync(const Model::DeleteFileSystemPolicyRequest& request, const DeleteFileSystemPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <code>elasticfilesystem:DeleteMountTarget</code> </p> </li> </ul>  <p>The
         * <code>DeleteMountTarget</code> call returns while the mount target state is
         * still <code>deleting</code>. You can check the mount target deletion by calling
         * the <a>DescribeMountTargets</a> operation, which returns a list of mount target
         * descriptions for the given file system. </p>  <p>The operation also
         * requires permissions for the following Amazon EC2 action on the mount target's
         * network interface:</p> <ul> <li> <p> <code>ec2:DeleteNetworkInterface</code>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DeleteMountTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMountTargetOutcome DeleteMountTarget(const Model::DeleteMountTargetRequest& request) const;

        /**
         * A Callable wrapper for DeleteMountTarget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMountTargetOutcomeCallable DeleteMountTargetCallable(const Model::DeleteMountTargetRequest& request) const;

        /**
         * An Async wrapper for DeleteMountTarget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMountTargetAsync(const Model::DeleteMountTargetRequest& request, const DeleteMountTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing replication configuration. To delete a replication
         * configuration, you must make the request from the Amazon Web Services Region in
         * which the destination file system is located. Deleting a replication
         * configuration ends the replication process. After a replication configuration is
         * deleted, the destination file system is no longer read-only. You can write to
         * the destination file system after its status becomes
         * <code>Writeable</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DeleteReplicationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReplicationConfigurationOutcome DeleteReplicationConfiguration(const Model::DeleteReplicationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteReplicationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteReplicationConfigurationOutcomeCallable DeleteReplicationConfigurationCallable(const Model::DeleteReplicationConfigurationRequest& request) const;

        /**
         * An Async wrapper for DeleteReplicationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteReplicationConfigurationAsync(const Model::DeleteReplicationConfigurationRequest& request, const DeleteReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the description of a specific Amazon EFS access point if the
         * <code>AccessPointId</code> is provided. If you provide an EFS
         * <code>FileSystemId</code>, it returns descriptions of all access points for that
         * file system. You can provide either an <code>AccessPointId</code> or a
         * <code>FileSystemId</code> in the request, but not both. </p> <p>This operation
         * requires permissions for the <code>elasticfilesystem:DescribeAccessPoints</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DescribeAccessPoints">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccessPointsOutcome DescribeAccessPoints(const Model::DescribeAccessPointsRequest& request) const;

        /**
         * A Callable wrapper for DescribeAccessPoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccessPointsOutcomeCallable DescribeAccessPointsCallable(const Model::DescribeAccessPointsRequest& request) const;

        /**
         * An Async wrapper for DescribeAccessPoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccessPointsAsync(const Model::DescribeAccessPointsRequest& request, const DescribeAccessPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the account preferences settings for the Amazon Web Services account
         * associated with the user making the request, in the current Amazon Web Services
         * Region. For more information, see <a
         * href="efs/latest/ug/manage-efs-resource-ids.html">Managing Amazon EFS resource
         * IDs</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DescribeAccountPreferences">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountPreferencesOutcome DescribeAccountPreferences(const Model::DescribeAccountPreferencesRequest& request) const;

        /**
         * A Callable wrapper for DescribeAccountPreferences that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccountPreferencesOutcomeCallable DescribeAccountPreferencesCallable(const Model::DescribeAccountPreferencesRequest& request) const;

        /**
         * An Async wrapper for DescribeAccountPreferences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccountPreferencesAsync(const Model::DescribeAccountPreferencesRequest& request, const DescribeAccountPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the backup policy for the specified EFS file system.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DescribeBackupPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBackupPolicyOutcome DescribeBackupPolicy(const Model::DescribeBackupPolicyRequest& request) const;

        /**
         * A Callable wrapper for DescribeBackupPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBackupPolicyOutcomeCallable DescribeBackupPolicyCallable(const Model::DescribeBackupPolicyRequest& request) const;

        /**
         * An Async wrapper for DescribeBackupPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBackupPolicyAsync(const Model::DescribeBackupPolicyRequest& request, const DescribeBackupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the <code>FileSystemPolicy</code> for the specified EFS file
         * system.</p> <p>This operation requires permissions for the
         * <code>elasticfilesystem:DescribeFileSystemPolicy</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DescribeFileSystemPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFileSystemPolicyOutcome DescribeFileSystemPolicy(const Model::DescribeFileSystemPolicyRequest& request) const;

        /**
         * A Callable wrapper for DescribeFileSystemPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFileSystemPolicyOutcomeCallable DescribeFileSystemPolicyCallable(const Model::DescribeFileSystemPolicyRequest& request) const;

        /**
         * An Async wrapper for DescribeFileSystemPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFileSystemPolicyAsync(const Model::DescribeFileSystemPolicyRequest& request, const DescribeFileSystemPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the description of a specific Amazon EFS file system if either the
         * file system <code>CreationToken</code> or the <code>FileSystemId</code> is
         * provided. Otherwise, it returns descriptions of all file systems owned by the
         * caller's Amazon Web Services account in the Amazon Web Services Region of the
         * endpoint that you're calling.</p> <p>When retrieving all file system
         * descriptions, you can optionally specify the <code>MaxItems</code> parameter to
         * limit the number of descriptions in a response. Currently, this number is
         * automatically set to 10. If more file system descriptions remain, Amazon EFS
         * returns a <code>NextMarker</code>, an opaque token, in the response. In this
         * case, you should send a subsequent request with the <code>Marker</code> request
         * parameter set to the value of <code>NextMarker</code>. </p> <p>To retrieve a
         * list of your file system descriptions, this operation is used in an iterative
         * process, where <code>DescribeFileSystems</code> is called first without the
         * <code>Marker</code> and then the operation continues to call it with the
         * <code>Marker</code> parameter set to the value of the <code>NextMarker</code>
         * from the previous response until the response has no <code>NextMarker</code>.
         * </p> <p> The order of file systems returned in the response of one
         * <code>DescribeFileSystems</code> call and the order of file systems returned
         * across the responses of a multi-call iteration is unspecified. </p> <p> This
         * operation requires permissions for the
         * <code>elasticfilesystem:DescribeFileSystems</code> action. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DescribeFileSystems">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFileSystemsOutcome DescribeFileSystems(const Model::DescribeFileSystemsRequest& request) const;

        /**
         * A Callable wrapper for DescribeFileSystems that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFileSystemsOutcomeCallable DescribeFileSystemsCallable(const Model::DescribeFileSystemsRequest& request) const;

        /**
         * An Async wrapper for DescribeFileSystems that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFileSystemsAsync(const Model::DescribeFileSystemsRequest& request, const DescribeFileSystemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the current <code>LifecycleConfiguration</code> object for the
         * specified Amazon EFS file system. EFS lifecycle management uses the
         * <code>LifecycleConfiguration</code> object to identify which files to move to
         * the EFS Infrequent Access (IA) storage class. For a file system without a
         * <code>LifecycleConfiguration</code> object, the call returns an empty array in
         * the response.</p> <p>When EFS Intelligent-Tiering is enabled,
         * <code>TransitionToPrimaryStorageClass</code> has a value of
         * <code>AFTER_1_ACCESS</code>.</p> <p>This operation requires permissions for the
         * <code>elasticfilesystem:DescribeLifecycleConfiguration</code>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DescribeLifecycleConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLifecycleConfigurationOutcome DescribeLifecycleConfiguration(const Model::DescribeLifecycleConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeLifecycleConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLifecycleConfigurationOutcomeCallable DescribeLifecycleConfigurationCallable(const Model::DescribeLifecycleConfigurationRequest& request) const;

        /**
         * An Async wrapper for DescribeLifecycleConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeMountTargetSecurityGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMountTargetSecurityGroupsOutcomeCallable DescribeMountTargetSecurityGroupsCallable(const Model::DescribeMountTargetSecurityGroupsRequest& request) const;

        /**
         * An Async wrapper for DescribeMountTargetSecurityGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeMountTargets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMountTargetsOutcomeCallable DescribeMountTargetsCallable(const Model::DescribeMountTargetsRequest& request) const;

        /**
         * An Async wrapper for DescribeMountTargets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMountTargetsAsync(const Model::DescribeMountTargetsRequest& request, const DescribeMountTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the replication configuration for a specific file system. If a file
         * system is not specified, all of the replication configurations for the Amazon
         * Web Services account in an Amazon Web Services Region are
         * retrieved.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DescribeReplicationConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReplicationConfigurationsOutcome DescribeReplicationConfigurations(const Model::DescribeReplicationConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeReplicationConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReplicationConfigurationsOutcomeCallable DescribeReplicationConfigurationsCallable(const Model::DescribeReplicationConfigurationsRequest& request) const;

        /**
         * An Async wrapper for DescribeReplicationConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReplicationConfigurationsAsync(const Model::DescribeReplicationConfigurationsRequest& request, const DescribeReplicationConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all tags for a top-level EFS resource. You must provide the ID of the
         * resource that you want to retrieve the tags for.</p> <p>This operation requires
         * permissions for the <code>elasticfilesystem:DescribeAccessPoints</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * A Callable wrapper for ModifyMountTargetSecurityGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ModifyMountTargetSecurityGroupsOutcomeCallable ModifyMountTargetSecurityGroupsCallable(const Model::ModifyMountTargetSecurityGroupsRequest& request) const;

        /**
         * An Async wrapper for ModifyMountTargetSecurityGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ModifyMountTargetSecurityGroupsAsync(const Model::ModifyMountTargetSecurityGroupsRequest& request, const ModifyMountTargetSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use this operation to set the account preference in the current Amazon Web
         * Services Region to use long 17 character (63 bit) or short 8 character (32 bit)
         * resource IDs for new EFS file system and mount target resources. All existing
         * resource IDs are not affected by any changes you make. You can set the ID
         * preference during the opt-in period as EFS transitions to long resource IDs. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/efs/latest/ug/manage-efs-resource-ids.html">Managing
         * Amazon EFS resource IDs</a>.</p>  <p>Starting in October, 2021, you will
         * receive an error if you try to set the account preference to use the short 8
         * character format resource ID. Contact Amazon Web Services support if you receive
         * an error and must use short IDs for file system and mount target resources.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/PutAccountPreferences">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAccountPreferencesOutcome PutAccountPreferences(const Model::PutAccountPreferencesRequest& request) const;

        /**
         * A Callable wrapper for PutAccountPreferences that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutAccountPreferencesOutcomeCallable PutAccountPreferencesCallable(const Model::PutAccountPreferencesRequest& request) const;

        /**
         * An Async wrapper for PutAccountPreferences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutAccountPreferencesAsync(const Model::PutAccountPreferencesRequest& request, const PutAccountPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the file system's backup policy. Use this action to start or stop
         * automatic backups of the file system. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/PutBackupPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBackupPolicyOutcome PutBackupPolicy(const Model::PutBackupPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutBackupPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBackupPolicyOutcomeCallable PutBackupPolicyCallable(const Model::PutBackupPolicyRequest& request) const;

        /**
         * An Async wrapper for PutBackupPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBackupPolicyAsync(const Model::PutBackupPolicyRequest& request, const PutBackupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Applies an Amazon EFS <code>FileSystemPolicy</code> to an Amazon EFS file
         * system. A file system policy is an IAM resource-based policy and can contain
         * multiple policy statements. A file system always has exactly one file system
         * policy, which can be the default policy or an explicit policy set or updated
         * using this API operation. EFS file system policies have a 20,000 character
         * limit. When an explicit policy is set, it overrides the default policy. For more
         * information about the default file system policy, see <a
         * href="https://docs.aws.amazon.com/efs/latest/ug/iam-access-control-nfs-efs.html#default-filesystempolicy">Default
         * EFS File System Policy</a>. </p>  <p>EFS file system policies have a
         * 20,000 character limit.</p>  <p>This operation requires permissions for
         * the <code>elasticfilesystem:PutFileSystemPolicy</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/PutFileSystemPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutFileSystemPolicyOutcome PutFileSystemPolicy(const Model::PutFileSystemPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutFileSystemPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutFileSystemPolicyOutcomeCallable PutFileSystemPolicyCallable(const Model::PutFileSystemPolicyRequest& request) const;

        /**
         * An Async wrapper for PutFileSystemPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutFileSystemPolicyAsync(const Model::PutFileSystemPolicyRequest& request, const PutFileSystemPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use this action to manage EFS lifecycle management and EFS
         * Intelligent-Tiering. A <code>LifecycleConfiguration</code> consists of one or
         * more <code>LifecyclePolicy</code> objects that define the following:</p> <ul>
         * <li> <p> <b>EFS Lifecycle management</b> - When Amazon EFS automatically
         * transitions files in a file system into the lower-cost EFS Infrequent Access
         * (IA) storage class.</p> <p>To enable EFS Lifecycle management, set the value of
         * <code>TransitionToIA</code> to one of the available options.</p> </li> <li> <p>
         * <b>EFS Intelligent-Tiering</b> - When Amazon EFS automatically transitions files
         * from IA back into the file system's primary storage class (EFS Standard or EFS
         * One Zone Standard).</p> <p>To enable EFS Intelligent-Tiering, set the value of
         * <code>TransitionToPrimaryStorageClass</code> to <code>AFTER_1_ACCESS</code>.</p>
         * </li> </ul> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/efs/latest/ug/lifecycle-management-efs.html">EFS
         * Lifecycle Management</a>.</p> <p>Each Amazon EFS file system supports one
         * lifecycle configuration, which applies to all files in the file system. If a
         * <code>LifecycleConfiguration</code> object already exists for the specified file
         * system, a <code>PutLifecycleConfiguration</code> call modifies the existing
         * configuration. A <code>PutLifecycleConfiguration</code> call with an empty
         * <code>LifecyclePolicies</code> array in the request body deletes any existing
         * <code>LifecycleConfiguration</code> and turns off lifecycle management and EFS
         * Intelligent-Tiering for the file system.</p> <p>In the request, specify the
         * following: </p> <ul> <li> <p>The ID for the file system for which you are
         * enabling, disabling, or modifying lifecycle management and EFS
         * Intelligent-Tiering.</p> </li> <li> <p>A <code>LifecyclePolicies</code> array of
         * <code>LifecyclePolicy</code> objects that define when files are moved into IA
         * storage, and when they are moved back to Standard storage.</p>  <p>Amazon
         * EFS requires that each <code>LifecyclePolicy</code> object have only have a
         * single transition, so the <code>LifecyclePolicies</code> array needs to be
         * structured with separate <code>LifecyclePolicy</code> objects. See the example
         * requests in the following section for more information.</p>  </li> </ul>
         * <p>This operation requires permissions for the
         * <code>elasticfilesystem:PutLifecycleConfiguration</code> operation.</p> <p>To
         * apply a <code>LifecycleConfiguration</code> object to an encrypted file system,
         * you need the same Key Management Service permissions as when you created the
         * encrypted file system.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/PutLifecycleConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutLifecycleConfigurationOutcome PutLifecycleConfiguration(const Model::PutLifecycleConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutLifecycleConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutLifecycleConfigurationOutcomeCallable PutLifecycleConfigurationCallable(const Model::PutLifecycleConfigurationRequest& request) const;

        /**
         * An Async wrapper for PutLifecycleConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutLifecycleConfigurationAsync(const Model::PutLifecycleConfigurationRequest& request, const PutLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a tag for an EFS resource. You can create tags for EFS file systems
         * and access points using this API operation.</p> <p>This operation requires
         * permissions for the <code>elasticfilesystem:TagResource</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes tags from an EFS resource. You can remove tags from EFS file systems
         * and access points using this API operation.</p> <p>This operation requires
         * permissions for the <code>elasticfilesystem:UntagResource</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the throughput mode or the amount of provisioned throughput of an
         * existing file system.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/UpdateFileSystem">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFileSystemOutcome UpdateFileSystem(const Model::UpdateFileSystemRequest& request) const;

        /**
         * A Callable wrapper for UpdateFileSystem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFileSystemOutcomeCallable UpdateFileSystemCallable(const Model::UpdateFileSystemRequest& request) const;

        /**
         * An Async wrapper for UpdateFileSystem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFileSystemAsync(const Model::UpdateFileSystemRequest& request, const UpdateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<EFSEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<EFSClient>;
      void init(const EFSClientConfiguration& clientConfiguration);

      EFSClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<EFSEndpointProviderBase> m_endpointProvider;
  };

} // namespace EFS
} // namespace Aws
