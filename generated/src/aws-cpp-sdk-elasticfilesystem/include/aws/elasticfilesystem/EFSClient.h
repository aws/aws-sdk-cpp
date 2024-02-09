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
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef EFSClientConfiguration ClientConfigurationType;
      typedef EFSEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EFSClient(const Aws::EFS::EFSClientConfiguration& clientConfiguration = Aws::EFS::EFSClientConfiguration(),
                  std::shared_ptr<EFSEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EFSClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<EFSEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::EFS::EFSClientConfiguration& clientConfiguration = Aws::EFS::EFSClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        EFSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<EFSEndpointProviderBase> endpointProvider = nullptr,
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
         * the file system is near the limit of 1,000 access points, you may experience a
         * throttling response for these requests. This is to ensure that the file system
         * does not exceed the stated access point limit.</p>  <p>This operation
         * requires permissions for the <code>elasticfilesystem:CreateAccessPoint</code>
         * action.</p> <p>Access points can be tagged on creation. If tags are specified in
         * the creation action, IAM performs additional authorization on the
         * <code>elasticfilesystem:TagResource</code> action to verify if users have
         * permissions to create tags. Therefore, you must grant explicit permissions to
         * use the <code>elasticfilesystem:TagResource</code> action. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/efs/latest/ug/using-tags-efs.html#supported-iam-actions-tagging.html">Granting
         * permissions to tag resources during creation</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/CreateAccessPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAccessPointOutcome CreateAccessPoint(const Model::CreateAccessPointRequest& request) const;

        /**
         * A Callable wrapper for CreateAccessPoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAccessPointRequestT = Model::CreateAccessPointRequest>
        Model::CreateAccessPointOutcomeCallable CreateAccessPointCallable(const CreateAccessPointRequestT& request) const
        {
            return SubmitCallable(&EFSClient::CreateAccessPoint, request);
        }

        /**
         * An Async wrapper for CreateAccessPoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAccessPointRequestT = Model::CreateAccessPointRequest>
        void CreateAccessPointAsync(const CreateAccessPointRequestT& request, const CreateAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EFSClient::CreateAccessPoint, request, handler, context);
        }

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
         * <p>The idempotent operation allows you to retry a <code>CreateFileSystem</code>
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
         * system. We recommend <code>generalPurpose</code> performance mode for all file
         * systems. File systems using the <code>maxIO</code> mode is a previous generation
         * performance type that is designed for highly parallelized workloads that can
         * tolerate higher latencies than the General Purpose mode. Max I/O mode is not
         * supported for One Zone file systems or file systems that use Elastic
         * throughput.</p>  <p>Due to the higher per-operation latencies with
         * Max I/O, we recommend using General Purpose performance mode for all file
         * systems.</p>  <p>The performance mode can't be changed after the
         * file system has been created. For more information, see <a
         * href="https://docs.aws.amazon.com/efs/latest/ug/performance.html#performancemodes.html">Amazon
         * EFS performance modes</a>.</p> <p>You can set the throughput mode for the file
         * system using the <code>ThroughputMode</code> parameter.</p> <p>After the file
         * system is fully created, Amazon EFS sets its lifecycle state to
         * <code>available</code>, at which point you can create one or more mount targets
         * for the file system in your VPC. For more information, see
         * <a>CreateMountTarget</a>. You mount your Amazon EFS file system on an EC2
         * instances in your VPC by using the mount target. For more information, see <a
         * href="https://docs.aws.amazon.com/efs/latest/ug/how-it-works.html">Amazon EFS:
         * How it Works</a>. </p> <p>This operation requires permissions for the
         * <code>elasticfilesystem:CreateFileSystem</code> action. </p> <p>File systems can
         * be tagged on creation. If tags are specified in the creation action, IAM
         * performs additional authorization on the
         * <code>elasticfilesystem:TagResource</code> action to verify if users have
         * permissions to create tags. Therefore, you must grant explicit permissions to
         * use the <code>elasticfilesystem:TagResource</code> action. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/efs/latest/ug/using-tags-efs.html#supported-iam-actions-tagging.html">Granting
         * permissions to tag resources during creation</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/CreateFileSystem">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFileSystemOutcome CreateFileSystem(const Model::CreateFileSystemRequest& request) const;

        /**
         * A Callable wrapper for CreateFileSystem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFileSystemRequestT = Model::CreateFileSystemRequest>
        Model::CreateFileSystemOutcomeCallable CreateFileSystemCallable(const CreateFileSystemRequestT& request) const
        {
            return SubmitCallable(&EFSClient::CreateFileSystem, request);
        }

        /**
         * An Async wrapper for CreateFileSystem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFileSystemRequestT = Model::CreateFileSystemRequest>
        void CreateFileSystemAsync(const CreateFileSystemRequestT& request, const CreateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EFSClient::CreateFileSystem, request, handler, context);
        }

        /**
         * <p>Creates a mount target for a file system. You can then mount the file system
         * on EC2 instances by using the mount target.</p> <p>You can create one mount
         * target in each Availability Zone in your VPC. All EC2 instances in a VPC within
         * a given Availability Zone share a single mount target for a given file system.
         * If you have multiple subnets in an Availability Zone, you create a mount target
         * in one of the subnets. EC2 instances do not need to be in the same subnet as the
         * mount target in order to access their file system.</p> <p>You can create only
         * one mount target for a One Zone file system. You must create that mount target
         * in the same Availability Zone in which the file system is located. Use the
         * <code>AvailabilityZoneName</code> and <code>AvailabiltyZoneId</code> properties
         * in the <a>DescribeFileSystems</a> response object to get this information. Use
         * the <code>subnetId</code> associated with the file system's Availability Zone
         * when creating the mount target.</p> <p>For more information, see <a
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
        template<typename CreateMountTargetRequestT = Model::CreateMountTargetRequest>
        Model::CreateMountTargetOutcomeCallable CreateMountTargetCallable(const CreateMountTargetRequestT& request) const
        {
            return SubmitCallable(&EFSClient::CreateMountTarget, request);
        }

        /**
         * An Async wrapper for CreateMountTarget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMountTargetRequestT = Model::CreateMountTargetRequest>
        void CreateMountTargetAsync(const CreateMountTargetRequestT& request, const CreateMountTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EFSClient::CreateMountTarget, request, handler, context);
        }

        /**
         * <p>Creates a replication configuration that replicates an existing EFS file
         * system to a new, read-only file system. For more information, see <a
         * href="https://docs.aws.amazon.com/efs/latest/ug/efs-replication.html">Amazon EFS
         * replication</a> in the <i>Amazon EFS User Guide</i>. The replication
         * configuration specifies the following:</p> <ul> <li> <p> <b>Source file
         * system</b> – The EFS file system that you want replicated. The source file
         * system cannot be a destination file system in an existing replication
         * configuration.</p> </li> <li> <p> <b>Amazon Web Services Region</b> – The Amazon
         * Web Services Region in which the destination file system is created. Amazon EFS
         * replication is available in all Amazon Web Services Regions in which EFS is
         * available. The Region must be enabled. For more information, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/rande-manage.html#rande-manage-enable">Managing
         * Amazon Web Services Regions</a> in the <i>Amazon Web Services General Reference
         * Reference Guide</i>.</p> </li> <li> <p> <b>Destination file system
         * configuration</b> – The configuration of the destination file system to which
         * the source file system will be replicated. There can only be one destination
         * file system in a replication configuration. </p> <p>Parameters for the
         * replication configuration include:</p> <ul> <li> <p> <b>File system ID</b> – The
         * ID of the destination file system for the replication. If no ID is provided,
         * then EFS creates a new file system with the default settings. For existing file
         * systems, the file system's replication overwrite protection must be disabled.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/efs/latest/ug/efs-replication#replicate-existing-destination">
         * Replicating to an existing file system</a>.</p> </li> <li> <p> <b>Availability
         * Zone</b> – If you want the destination file system to use One Zone storage, you
         * must specify the Availability Zone to create the file system in. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/efs/latest/ug/storage-classes.html"> EFS file
         * system types</a> in the <i>Amazon EFS User Guide</i>.</p> </li> <li> <p>
         * <b>Encryption</b> – All destination file systems are created with encryption at
         * rest enabled. You can specify the Key Management Service (KMS) key that is used
         * to encrypt the destination file system. If you don't specify a KMS key, your
         * service-managed KMS key for Amazon EFS is used. </p>  <p>After the file
         * system is created, you cannot change the KMS key.</p>  </li> </ul> </li>
         * </ul>  <p>After the file system is created, you cannot change the KMS
         * key.</p>  <p>For new destination file systems, the following properties
         * are set by default:</p> <ul> <li> <p> <b>Performance mode</b> - The destination
         * file system's performance mode matches that of the source file system, unless
         * the destination file system uses EFS One Zone storage. In that case, the General
         * Purpose performance mode is used. The performance mode cannot be changed.</p>
         * </li> <li> <p> <b>Throughput mode</b> - The destination file system's throughput
         * mode matches that of the source file system. After the file system is created,
         * you can modify the throughput mode.</p> </li> </ul> <ul> <li> <p> <b>Lifecycle
         * management</b> – Lifecycle management is not enabled on the destination file
         * system. After the destination file system is created, you can enable lifecycle
         * management.</p> </li> <li> <p> <b>Automatic backups</b> – Automatic daily
         * backups are enabled on the destination file system. After the file system is
         * created, you can change this setting.</p> </li> </ul> <p>For more information,
         * see <a
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
        template<typename CreateReplicationConfigurationRequestT = Model::CreateReplicationConfigurationRequest>
        Model::CreateReplicationConfigurationOutcomeCallable CreateReplicationConfigurationCallable(const CreateReplicationConfigurationRequestT& request) const
        {
            return SubmitCallable(&EFSClient::CreateReplicationConfiguration, request);
        }

        /**
         * An Async wrapper for CreateReplicationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateReplicationConfigurationRequestT = Model::CreateReplicationConfigurationRequest>
        void CreateReplicationConfigurationAsync(const CreateReplicationConfigurationRequestT& request, const CreateReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EFSClient::CreateReplicationConfiguration, request, handler, context);
        }

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
        template<typename DeleteAccessPointRequestT = Model::DeleteAccessPointRequest>
        Model::DeleteAccessPointOutcomeCallable DeleteAccessPointCallable(const DeleteAccessPointRequestT& request) const
        {
            return SubmitCallable(&EFSClient::DeleteAccessPoint, request);
        }

        /**
         * An Async wrapper for DeleteAccessPoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAccessPointRequestT = Model::DeleteAccessPointRequest>
        void DeleteAccessPointAsync(const DeleteAccessPointRequestT& request, const DeleteAccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EFSClient::DeleteAccessPoint, request, handler, context);
        }

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
        template<typename DeleteFileSystemRequestT = Model::DeleteFileSystemRequest>
        Model::DeleteFileSystemOutcomeCallable DeleteFileSystemCallable(const DeleteFileSystemRequestT& request) const
        {
            return SubmitCallable(&EFSClient::DeleteFileSystem, request);
        }

        /**
         * An Async wrapper for DeleteFileSystem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFileSystemRequestT = Model::DeleteFileSystemRequest>
        void DeleteFileSystemAsync(const DeleteFileSystemRequestT& request, const DeleteFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EFSClient::DeleteFileSystem, request, handler, context);
        }

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
        template<typename DeleteFileSystemPolicyRequestT = Model::DeleteFileSystemPolicyRequest>
        Model::DeleteFileSystemPolicyOutcomeCallable DeleteFileSystemPolicyCallable(const DeleteFileSystemPolicyRequestT& request) const
        {
            return SubmitCallable(&EFSClient::DeleteFileSystemPolicy, request);
        }

        /**
         * An Async wrapper for DeleteFileSystemPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFileSystemPolicyRequestT = Model::DeleteFileSystemPolicyRequest>
        void DeleteFileSystemPolicyAsync(const DeleteFileSystemPolicyRequestT& request, const DeleteFileSystemPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EFSClient::DeleteFileSystemPolicy, request, handler, context);
        }

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
        template<typename DeleteMountTargetRequestT = Model::DeleteMountTargetRequest>
        Model::DeleteMountTargetOutcomeCallable DeleteMountTargetCallable(const DeleteMountTargetRequestT& request) const
        {
            return SubmitCallable(&EFSClient::DeleteMountTarget, request);
        }

        /**
         * An Async wrapper for DeleteMountTarget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMountTargetRequestT = Model::DeleteMountTargetRequest>
        void DeleteMountTargetAsync(const DeleteMountTargetRequestT& request, const DeleteMountTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EFSClient::DeleteMountTarget, request, handler, context);
        }

        /**
         * <p>Deletes a replication configuration. Deleting a replication configuration
         * ends the replication process. After a replication configuration is deleted, the
         * destination file system becomes <code>Writeable</code> and its replication
         * overwrite protection is re-enabled. For more information, see <a
         * href="https://docs.aws.amazon.com/efs/latest/ug/delete-replications.html">Delete
         * a replication configuration</a>.</p> <p>This operation requires permissions for
         * the <code>elasticfilesystem:DeleteReplicationConfiguration</code> action.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DeleteReplicationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReplicationConfigurationOutcome DeleteReplicationConfiguration(const Model::DeleteReplicationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteReplicationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteReplicationConfigurationRequestT = Model::DeleteReplicationConfigurationRequest>
        Model::DeleteReplicationConfigurationOutcomeCallable DeleteReplicationConfigurationCallable(const DeleteReplicationConfigurationRequestT& request) const
        {
            return SubmitCallable(&EFSClient::DeleteReplicationConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteReplicationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteReplicationConfigurationRequestT = Model::DeleteReplicationConfigurationRequest>
        void DeleteReplicationConfigurationAsync(const DeleteReplicationConfigurationRequestT& request, const DeleteReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EFSClient::DeleteReplicationConfiguration, request, handler, context);
        }

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
        template<typename DescribeAccessPointsRequestT = Model::DescribeAccessPointsRequest>
        Model::DescribeAccessPointsOutcomeCallable DescribeAccessPointsCallable(const DescribeAccessPointsRequestT& request) const
        {
            return SubmitCallable(&EFSClient::DescribeAccessPoints, request);
        }

        /**
         * An Async wrapper for DescribeAccessPoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAccessPointsRequestT = Model::DescribeAccessPointsRequest>
        void DescribeAccessPointsAsync(const DescribeAccessPointsRequestT& request, const DescribeAccessPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EFSClient::DescribeAccessPoints, request, handler, context);
        }

        /**
         * <p>Returns the account preferences settings for the Amazon Web Services account
         * associated with the user making the request, in the current Amazon Web Services
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DescribeAccountPreferences">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountPreferencesOutcome DescribeAccountPreferences(const Model::DescribeAccountPreferencesRequest& request) const;

        /**
         * A Callable wrapper for DescribeAccountPreferences that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAccountPreferencesRequestT = Model::DescribeAccountPreferencesRequest>
        Model::DescribeAccountPreferencesOutcomeCallable DescribeAccountPreferencesCallable(const DescribeAccountPreferencesRequestT& request) const
        {
            return SubmitCallable(&EFSClient::DescribeAccountPreferences, request);
        }

        /**
         * An Async wrapper for DescribeAccountPreferences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAccountPreferencesRequestT = Model::DescribeAccountPreferencesRequest>
        void DescribeAccountPreferencesAsync(const DescribeAccountPreferencesRequestT& request, const DescribeAccountPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EFSClient::DescribeAccountPreferences, request, handler, context);
        }

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
        template<typename DescribeBackupPolicyRequestT = Model::DescribeBackupPolicyRequest>
        Model::DescribeBackupPolicyOutcomeCallable DescribeBackupPolicyCallable(const DescribeBackupPolicyRequestT& request) const
        {
            return SubmitCallable(&EFSClient::DescribeBackupPolicy, request);
        }

        /**
         * An Async wrapper for DescribeBackupPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeBackupPolicyRequestT = Model::DescribeBackupPolicyRequest>
        void DescribeBackupPolicyAsync(const DescribeBackupPolicyRequestT& request, const DescribeBackupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EFSClient::DescribeBackupPolicy, request, handler, context);
        }

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
        template<typename DescribeFileSystemPolicyRequestT = Model::DescribeFileSystemPolicyRequest>
        Model::DescribeFileSystemPolicyOutcomeCallable DescribeFileSystemPolicyCallable(const DescribeFileSystemPolicyRequestT& request) const
        {
            return SubmitCallable(&EFSClient::DescribeFileSystemPolicy, request);
        }

        /**
         * An Async wrapper for DescribeFileSystemPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeFileSystemPolicyRequestT = Model::DescribeFileSystemPolicyRequest>
        void DescribeFileSystemPolicyAsync(const DescribeFileSystemPolicyRequestT& request, const DescribeFileSystemPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EFSClient::DescribeFileSystemPolicy, request, handler, context);
        }

        /**
         * <p>Returns the description of a specific Amazon EFS file system if either the
         * file system <code>CreationToken</code> or the <code>FileSystemId</code> is
         * provided. Otherwise, it returns descriptions of all file systems owned by the
         * caller's Amazon Web Services account in the Amazon Web Services Region of the
         * endpoint that you're calling.</p> <p>When retrieving all file system
         * descriptions, you can optionally specify the <code>MaxItems</code> parameter to
         * limit the number of descriptions in a response. This number is automatically set
         * to 100. If more file system descriptions remain, Amazon EFS returns a
         * <code>NextMarker</code>, an opaque token, in the response. In this case, you
         * should send a subsequent request with the <code>Marker</code> request parameter
         * set to the value of <code>NextMarker</code>. </p> <p>To retrieve a list of your
         * file system descriptions, this operation is used in an iterative process, where
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
         * A Callable wrapper for DescribeFileSystems that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeFileSystemsRequestT = Model::DescribeFileSystemsRequest>
        Model::DescribeFileSystemsOutcomeCallable DescribeFileSystemsCallable(const DescribeFileSystemsRequestT& request) const
        {
            return SubmitCallable(&EFSClient::DescribeFileSystems, request);
        }

        /**
         * An Async wrapper for DescribeFileSystems that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeFileSystemsRequestT = Model::DescribeFileSystemsRequest>
        void DescribeFileSystemsAsync(const DescribeFileSystemsRequestT& request, const DescribeFileSystemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EFSClient::DescribeFileSystems, request, handler, context);
        }

        /**
         * <p>Returns the current <code>LifecycleConfiguration</code> object for the
         * specified Amazon EFS file system. Lifecycle management uses the
         * <code>LifecycleConfiguration</code> object to identify when to move files
         * between storage classes. For a file system without a
         * <code>LifecycleConfiguration</code> object, the call returns an empty array in
         * the response.</p> <p>This operation requires permissions for the
         * <code>elasticfilesystem:DescribeLifecycleConfiguration</code>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/DescribeLifecycleConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLifecycleConfigurationOutcome DescribeLifecycleConfiguration(const Model::DescribeLifecycleConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeLifecycleConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeLifecycleConfigurationRequestT = Model::DescribeLifecycleConfigurationRequest>
        Model::DescribeLifecycleConfigurationOutcomeCallable DescribeLifecycleConfigurationCallable(const DescribeLifecycleConfigurationRequestT& request) const
        {
            return SubmitCallable(&EFSClient::DescribeLifecycleConfiguration, request);
        }

        /**
         * An Async wrapper for DescribeLifecycleConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeLifecycleConfigurationRequestT = Model::DescribeLifecycleConfigurationRequest>
        void DescribeLifecycleConfigurationAsync(const DescribeLifecycleConfigurationRequestT& request, const DescribeLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EFSClient::DescribeLifecycleConfiguration, request, handler, context);
        }

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
        template<typename DescribeMountTargetSecurityGroupsRequestT = Model::DescribeMountTargetSecurityGroupsRequest>
        Model::DescribeMountTargetSecurityGroupsOutcomeCallable DescribeMountTargetSecurityGroupsCallable(const DescribeMountTargetSecurityGroupsRequestT& request) const
        {
            return SubmitCallable(&EFSClient::DescribeMountTargetSecurityGroups, request);
        }

        /**
         * An Async wrapper for DescribeMountTargetSecurityGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeMountTargetSecurityGroupsRequestT = Model::DescribeMountTargetSecurityGroupsRequest>
        void DescribeMountTargetSecurityGroupsAsync(const DescribeMountTargetSecurityGroupsRequestT& request, const DescribeMountTargetSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EFSClient::DescribeMountTargetSecurityGroups, request, handler, context);
        }

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
        template<typename DescribeMountTargetsRequestT = Model::DescribeMountTargetsRequest>
        Model::DescribeMountTargetsOutcomeCallable DescribeMountTargetsCallable(const DescribeMountTargetsRequestT& request) const
        {
            return SubmitCallable(&EFSClient::DescribeMountTargets, request);
        }

        /**
         * An Async wrapper for DescribeMountTargets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeMountTargetsRequestT = Model::DescribeMountTargetsRequest>
        void DescribeMountTargetsAsync(const DescribeMountTargetsRequestT& request, const DescribeMountTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EFSClient::DescribeMountTargets, request, handler, context);
        }

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
        template<typename DescribeReplicationConfigurationsRequestT = Model::DescribeReplicationConfigurationsRequest>
        Model::DescribeReplicationConfigurationsOutcomeCallable DescribeReplicationConfigurationsCallable(const DescribeReplicationConfigurationsRequestT& request) const
        {
            return SubmitCallable(&EFSClient::DescribeReplicationConfigurations, request);
        }

        /**
         * An Async wrapper for DescribeReplicationConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeReplicationConfigurationsRequestT = Model::DescribeReplicationConfigurationsRequest>
        void DescribeReplicationConfigurationsAsync(const DescribeReplicationConfigurationsRequestT& request, const DescribeReplicationConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EFSClient::DescribeReplicationConfigurations, request, handler, context);
        }

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
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&EFSClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EFSClient::ListTagsForResource, request, handler, context);
        }

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
        template<typename ModifyMountTargetSecurityGroupsRequestT = Model::ModifyMountTargetSecurityGroupsRequest>
        Model::ModifyMountTargetSecurityGroupsOutcomeCallable ModifyMountTargetSecurityGroupsCallable(const ModifyMountTargetSecurityGroupsRequestT& request) const
        {
            return SubmitCallable(&EFSClient::ModifyMountTargetSecurityGroups, request);
        }

        /**
         * An Async wrapper for ModifyMountTargetSecurityGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ModifyMountTargetSecurityGroupsRequestT = Model::ModifyMountTargetSecurityGroupsRequest>
        void ModifyMountTargetSecurityGroupsAsync(const ModifyMountTargetSecurityGroupsRequestT& request, const ModifyMountTargetSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EFSClient::ModifyMountTargetSecurityGroups, request, handler, context);
        }

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
        template<typename PutAccountPreferencesRequestT = Model::PutAccountPreferencesRequest>
        Model::PutAccountPreferencesOutcomeCallable PutAccountPreferencesCallable(const PutAccountPreferencesRequestT& request) const
        {
            return SubmitCallable(&EFSClient::PutAccountPreferences, request);
        }

        /**
         * An Async wrapper for PutAccountPreferences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutAccountPreferencesRequestT = Model::PutAccountPreferencesRequest>
        void PutAccountPreferencesAsync(const PutAccountPreferencesRequestT& request, const PutAccountPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EFSClient::PutAccountPreferences, request, handler, context);
        }

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
        template<typename PutBackupPolicyRequestT = Model::PutBackupPolicyRequest>
        Model::PutBackupPolicyOutcomeCallable PutBackupPolicyCallable(const PutBackupPolicyRequestT& request) const
        {
            return SubmitCallable(&EFSClient::PutBackupPolicy, request);
        }

        /**
         * An Async wrapper for PutBackupPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutBackupPolicyRequestT = Model::PutBackupPolicyRequest>
        void PutBackupPolicyAsync(const PutBackupPolicyRequestT& request, const PutBackupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EFSClient::PutBackupPolicy, request, handler, context);
        }

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
        template<typename PutFileSystemPolicyRequestT = Model::PutFileSystemPolicyRequest>
        Model::PutFileSystemPolicyOutcomeCallable PutFileSystemPolicyCallable(const PutFileSystemPolicyRequestT& request) const
        {
            return SubmitCallable(&EFSClient::PutFileSystemPolicy, request);
        }

        /**
         * An Async wrapper for PutFileSystemPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutFileSystemPolicyRequestT = Model::PutFileSystemPolicyRequest>
        void PutFileSystemPolicyAsync(const PutFileSystemPolicyRequestT& request, const PutFileSystemPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EFSClient::PutFileSystemPolicy, request, handler, context);
        }

        /**
         * <p>Use this action to manage storage for your file system. A
         * <code>LifecycleConfiguration</code> consists of one or more
         * <code>LifecyclePolicy</code> objects that define the following:</p> <ul> <li>
         * <p> <b> <code>TransitionToIA</code> </b> – When to move files in the file system
         * from primary storage (Standard storage class) into the Infrequent Access (IA)
         * storage.</p> </li> <li> <p> <b> <code>TransitionToArchive</code> </b> – When to
         * move files in the file system from their current storage class (either IA or
         * Standard storage) into the Archive storage.</p> <p>File systems cannot
         * transition into Archive storage before transitioning into IA storage. Therefore,
         * TransitionToArchive must either not be set or must be later than
         * TransitionToIA.</p>  <p> The Archive storage class is available only for
         * file systems that use the Elastic Throughput mode and the General Purpose
         * Performance mode. </p>  </li> </ul> <ul> <li> <p> <b>
         * <code>TransitionToPrimaryStorageClass</code> </b> – Whether to move files in the
         * file system back to primary storage (Standard storage class) after they are
         * accessed in IA or Archive storage.</p> </li> </ul> <p>For more information, see
         * <a
         * href="https://docs.aws.amazon.com/efs/latest/ug/lifecycle-management-efs.html">
         * Managing file system storage</a>.</p> <p>Each Amazon EFS file system supports
         * one lifecycle configuration, which applies to all files in the file system. If a
         * <code>LifecycleConfiguration</code> object already exists for the specified file
         * system, a <code>PutLifecycleConfiguration</code> call modifies the existing
         * configuration. A <code>PutLifecycleConfiguration</code> call with an empty
         * <code>LifecyclePolicies</code> array in the request body deletes any existing
         * <code>LifecycleConfiguration</code>. In the request, specify the following: </p>
         * <ul> <li> <p>The ID for the file system for which you are enabling, disabling,
         * or modifying Lifecycle management.</p> </li> <li> <p>A
         * <code>LifecyclePolicies</code> array of <code>LifecyclePolicy</code> objects
         * that define when to move files to IA storage, to Archive storage, and back to
         * primary storage.</p>  <p>Amazon EFS requires that each
         * <code>LifecyclePolicy</code> object have only have a single transition, so the
         * <code>LifecyclePolicies</code> array needs to be structured with separate
         * <code>LifecyclePolicy</code> objects. See the example requests in the following
         * section for more information.</p>  </li> </ul> <p>This operation requires
         * permissions for the <code>elasticfilesystem:PutLifecycleConfiguration</code>
         * operation.</p> <p>To apply a <code>LifecycleConfiguration</code> object to an
         * encrypted file system, you need the same Key Management Service permissions as
         * when you created the encrypted file system.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/PutLifecycleConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutLifecycleConfigurationOutcome PutLifecycleConfiguration(const Model::PutLifecycleConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutLifecycleConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutLifecycleConfigurationRequestT = Model::PutLifecycleConfigurationRequest>
        Model::PutLifecycleConfigurationOutcomeCallable PutLifecycleConfigurationCallable(const PutLifecycleConfigurationRequestT& request) const
        {
            return SubmitCallable(&EFSClient::PutLifecycleConfiguration, request);
        }

        /**
         * An Async wrapper for PutLifecycleConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutLifecycleConfigurationRequestT = Model::PutLifecycleConfigurationRequest>
        void PutLifecycleConfigurationAsync(const PutLifecycleConfigurationRequestT& request, const PutLifecycleConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EFSClient::PutLifecycleConfiguration, request, handler, context);
        }

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
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&EFSClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EFSClient::TagResource, request, handler, context);
        }

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
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&EFSClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EFSClient::UntagResource, request, handler, context);
        }

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
        template<typename UpdateFileSystemRequestT = Model::UpdateFileSystemRequest>
        Model::UpdateFileSystemOutcomeCallable UpdateFileSystemCallable(const UpdateFileSystemRequestT& request) const
        {
            return SubmitCallable(&EFSClient::UpdateFileSystem, request);
        }

        /**
         * An Async wrapper for UpdateFileSystem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFileSystemRequestT = Model::UpdateFileSystemRequest>
        void UpdateFileSystemAsync(const UpdateFileSystemRequestT& request, const UpdateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EFSClient::UpdateFileSystem, request, handler, context);
        }

        /**
         * <p>Updates protection on the file system.</p> <p>This operation requires
         * permissions for the <code>elasticfilesystem:UpdateFileSystemProtection</code>
         * action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/UpdateFileSystemProtection">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFileSystemProtectionOutcome UpdateFileSystemProtection(const Model::UpdateFileSystemProtectionRequest& request) const;

        /**
         * A Callable wrapper for UpdateFileSystemProtection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFileSystemProtectionRequestT = Model::UpdateFileSystemProtectionRequest>
        Model::UpdateFileSystemProtectionOutcomeCallable UpdateFileSystemProtectionCallable(const UpdateFileSystemProtectionRequestT& request) const
        {
            return SubmitCallable(&EFSClient::UpdateFileSystemProtection, request);
        }

        /**
         * An Async wrapper for UpdateFileSystemProtection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFileSystemProtectionRequestT = Model::UpdateFileSystemProtectionRequest>
        void UpdateFileSystemProtectionAsync(const UpdateFileSystemProtectionRequestT& request, const UpdateFileSystemProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EFSClient::UpdateFileSystemProtection, request, handler, context);
        }


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
