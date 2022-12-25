/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/storagegateway/StorageGatewayServiceClientModel.h>

namespace Aws
{
namespace StorageGateway
{
  /**
   * <fullname>Storage Gateway Service</fullname> <p>Storage Gateway is the service
   * that connects an on-premises software appliance with cloud-based storage to
   * provide seamless and secure integration between an organization's on-premises IT
   * environment and the Amazon Web Services storage infrastructure. The service
   * enables you to securely upload data to the Amazon Web Services Cloud for cost
   * effective backup and rapid disaster recovery.</p> <p>Use the following links to
   * get started using the <i>Storage Gateway Service API Reference</i>:</p> <ul>
   * <li> <p> <a
   * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/AWSStorageGatewayAPI.html#AWSStorageGatewayHTTPRequestsHeaders">Storage
   * Gateway required request headers</a>: Describes the required headers that you
   * must send with every POST request to Storage Gateway.</p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/AWSStorageGatewayAPI.html#AWSStorageGatewaySigningRequests">Signing
   * requests</a>: Storage Gateway requires that you authenticate every request you
   * send; this topic describes how sign such a request.</p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/AWSStorageGatewayAPI.html#APIErrorResponses">Error
   * responses</a>: Provides reference information about Storage Gateway errors.</p>
   * </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/storagegateway/latest/APIReference/API_Operations.html">Operations
   * in Storage Gateway</a>: Contains detailed descriptions of all Storage Gateway
   * operations, their request parameters, response elements, possible errors, and
   * examples of requests and responses.</p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/general/latest/gr/sg.html">Storage Gateway
   * endpoints and quotas</a>: Provides a list of each Amazon Web Services Region and
   * the endpoints available for use with Storage Gateway.</p> </li> </ul> 
   * <p>Storage Gateway resource IDs are in uppercase. When you use these resource
   * IDs with the Amazon EC2 API, EC2 expects resource IDs in lowercase. You must
   * change your resource ID to lowercase to use it with the EC2 API. For example, in
   * Storage Gateway the ID for a volume might be
   * <code>vol-AA22BB012345DAF670</code>. When you use this ID with the EC2 API, you
   * must change it to <code>vol-aa22bb012345daf670</code>. Otherwise, the EC2 API
   * might not behave as expected.</p>   <p>IDs for Storage Gateway
   * volumes and Amazon EBS snapshots created from gateway volumes are changing to a
   * longer format. Starting in December 2016, all new volumes and snapshots will be
   * created with a 17-character string. Starting in April 2016, you will be able to
   * use these longer IDs so you can test your systems with the new format. For more
   * information, see <a href="http://aws.amazon.com/ec2/faqs/#longer-ids">Longer EC2
   * and EBS resource IDs</a>.</p> <p>For example, a volume Amazon Resource Name
   * (ARN) with the longer volume ID format looks like the following:</p> <p>
   * <code>arn:aws:storagegateway:us-west-2:111122223333:gateway/sgw-12A3456B/volume/vol-1122AABBCCDDEEFFG</code>.</p>
   * <p>A snapshot ID with the longer ID format looks like the following:
   * <code>snap-78e226633445566ee</code>.</p> <p>For more information, see <a
   * href="http://forums.aws.amazon.com/ann.jspa?annID=3557">Announcement: Heads-up –
   * Longer Storage Gateway volume and snapshot IDs coming in 2016</a>.</p>
   * 
   */
  class AWS_STORAGEGATEWAY_API StorageGatewayClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<StorageGatewayClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        StorageGatewayClient(const Aws::StorageGateway::StorageGatewayClientConfiguration& clientConfiguration = Aws::StorageGateway::StorageGatewayClientConfiguration(),
                             std::shared_ptr<StorageGatewayEndpointProviderBase> endpointProvider = Aws::MakeShared<StorageGatewayEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        StorageGatewayClient(const Aws::Auth::AWSCredentials& credentials,
                             std::shared_ptr<StorageGatewayEndpointProviderBase> endpointProvider = Aws::MakeShared<StorageGatewayEndpointProvider>(ALLOCATION_TAG),
                             const Aws::StorageGateway::StorageGatewayClientConfiguration& clientConfiguration = Aws::StorageGateway::StorageGatewayClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        StorageGatewayClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<StorageGatewayEndpointProviderBase> endpointProvider = Aws::MakeShared<StorageGatewayEndpointProvider>(ALLOCATION_TAG),
                             const Aws::StorageGateway::StorageGatewayClientConfiguration& clientConfiguration = Aws::StorageGateway::StorageGatewayClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        StorageGatewayClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        StorageGatewayClient(const Aws::Auth::AWSCredentials& credentials,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        StorageGatewayClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~StorageGatewayClient();

        /**
         * <p>Activates the gateway you previously deployed on your host. In the activation
         * process, you specify information such as the Amazon Web Services Region that you
         * want to use for storing snapshots or tapes, the time zone for scheduled
         * snapshots the gateway snapshot schedule window, an activation key, and a name
         * for your gateway. The activation process also associates your gateway with your
         * account. For more information, see <a>UpdateGatewayInformation</a>.</p> 
         * <p>You must turn on the gateway VM before you can activate your gateway.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/ActivateGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::ActivateGatewayOutcome ActivateGateway(const Model::ActivateGatewayRequest& request) const;

        /**
         * A Callable wrapper for ActivateGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ActivateGatewayOutcomeCallable ActivateGatewayCallable(const Model::ActivateGatewayRequest& request) const;

        /**
         * An Async wrapper for ActivateGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ActivateGatewayAsync(const Model::ActivateGatewayRequest& request, const ActivateGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Configures one or more gateway local disks as cache for a gateway. This
         * operation is only supported in the cached volume, tape, and file gateway type
         * (see <a
         * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/StorageGatewayConcepts.html">How
         * Storage Gateway works (architecture)</a>.</p> <p>In the request, you specify the
         * gateway Amazon Resource Name (ARN) to which you want to add cache, and one or
         * more disk IDs that you want to configure as cache.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/AddCache">AWS
         * API Reference</a></p>
         */
        virtual Model::AddCacheOutcome AddCache(const Model::AddCacheRequest& request) const;

        /**
         * A Callable wrapper for AddCache that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddCacheOutcomeCallable AddCacheCallable(const Model::AddCacheRequest& request) const;

        /**
         * An Async wrapper for AddCache that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddCacheAsync(const Model::AddCacheRequest& request, const AddCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more tags to the specified resource. You use tags to add metadata
         * to resources, which you can use to categorize these resources. For example, you
         * can categorize resources by purpose, owner, environment, or team. Each tag
         * consists of a key and a value, which you define. You can add tags to the
         * following Storage Gateway resources:</p> <ul> <li> <p>Storage gateways of all
         * types</p> </li> <li> <p>Storage volumes</p> </li> <li> <p>Virtual tapes</p>
         * </li> <li> <p>NFS and SMB file shares</p> </li> <li> <p>File System
         * associations</p> </li> </ul> <p>You can create a maximum of 50 tags for each
         * resource. Virtual tapes and storage volumes that are recovered to a new gateway
         * maintain their tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/AddTagsToResource">AWS
         * API Reference</a></p>
         */
        virtual Model::AddTagsToResourceOutcome AddTagsToResource(const Model::AddTagsToResourceRequest& request) const;

        /**
         * A Callable wrapper for AddTagsToResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddTagsToResourceOutcomeCallable AddTagsToResourceCallable(const Model::AddTagsToResourceRequest& request) const;

        /**
         * An Async wrapper for AddTagsToResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddTagsToResourceAsync(const Model::AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Configures one or more gateway local disks as upload buffer for a specified
         * gateway. This operation is supported for the stored volume, cached volume, and
         * tape gateway types.</p> <p>In the request, you specify the gateway Amazon
         * Resource Name (ARN) to which you want to add upload buffer, and one or more disk
         * IDs that you want to configure as upload buffer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/AddUploadBuffer">AWS
         * API Reference</a></p>
         */
        virtual Model::AddUploadBufferOutcome AddUploadBuffer(const Model::AddUploadBufferRequest& request) const;

        /**
         * A Callable wrapper for AddUploadBuffer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddUploadBufferOutcomeCallable AddUploadBufferCallable(const Model::AddUploadBufferRequest& request) const;

        /**
         * An Async wrapper for AddUploadBuffer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddUploadBufferAsync(const Model::AddUploadBufferRequest& request, const AddUploadBufferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Configures one or more gateway local disks as working storage for a gateway.
         * This operation is only supported in the stored volume gateway type. This
         * operation is deprecated in cached volume API version 20120630. Use
         * <a>AddUploadBuffer</a> instead.</p>  <p>Working storage is also referred
         * to as upload buffer. You can also use the <a>AddUploadBuffer</a> operation to
         * add upload buffer to a stored volume gateway.</p>  <p>In the request, you
         * specify the gateway Amazon Resource Name (ARN) to which you want to add working
         * storage, and one or more disk IDs that you want to configure as working
         * storage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/AddWorkingStorage">AWS
         * API Reference</a></p>
         */
        virtual Model::AddWorkingStorageOutcome AddWorkingStorage(const Model::AddWorkingStorageRequest& request) const;

        /**
         * A Callable wrapper for AddWorkingStorage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddWorkingStorageOutcomeCallable AddWorkingStorageCallable(const Model::AddWorkingStorageRequest& request) const;

        /**
         * An Async wrapper for AddWorkingStorage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddWorkingStorageAsync(const Model::AddWorkingStorageRequest& request, const AddWorkingStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns a tape to a tape pool for archiving. The tape assigned to a pool is
         * archived in the S3 storage class that is associated with the pool. When you use
         * your backup application to eject the tape, the tape is archived directly into
         * the S3 storage class (S3 Glacier or S3 Glacier Deep Archive) that corresponds to
         * the pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/AssignTapePool">AWS
         * API Reference</a></p>
         */
        virtual Model::AssignTapePoolOutcome AssignTapePool(const Model::AssignTapePoolRequest& request) const;

        /**
         * A Callable wrapper for AssignTapePool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssignTapePoolOutcomeCallable AssignTapePoolCallable(const Model::AssignTapePoolRequest& request) const;

        /**
         * An Async wrapper for AssignTapePool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssignTapePoolAsync(const Model::AssignTapePoolRequest& request, const AssignTapePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associate an Amazon FSx file system with the FSx File Gateway. After the
         * association process is complete, the file shares on the Amazon FSx file system
         * are available for access through the gateway. This operation only supports the
         * FSx File Gateway type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/AssociateFileSystem">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateFileSystemOutcome AssociateFileSystem(const Model::AssociateFileSystemRequest& request) const;

        /**
         * A Callable wrapper for AssociateFileSystem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateFileSystemOutcomeCallable AssociateFileSystemCallable(const Model::AssociateFileSystemRequest& request) const;

        /**
         * An Async wrapper for AssociateFileSystem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateFileSystemAsync(const Model::AssociateFileSystemRequest& request, const AssociateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Connects a volume to an iSCSI connection and then attaches the volume to the
         * specified gateway. Detaching and attaching a volume enables you to recover your
         * data from one gateway to a different gateway without creating a snapshot. It
         * also makes it easier to move your volumes from an on-premises gateway to a
         * gateway hosted on an Amazon EC2 instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/AttachVolume">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachVolumeOutcome AttachVolume(const Model::AttachVolumeRequest& request) const;

        /**
         * A Callable wrapper for AttachVolume that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachVolumeOutcomeCallable AttachVolumeCallable(const Model::AttachVolumeRequest& request) const;

        /**
         * An Async wrapper for AttachVolume that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachVolumeAsync(const Model::AttachVolumeRequest& request, const AttachVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels archiving of a virtual tape to the virtual tape shelf (VTS) after the
         * archiving process is initiated. This operation is only supported in the tape
         * gateway type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/CancelArchival">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelArchivalOutcome CancelArchival(const Model::CancelArchivalRequest& request) const;

        /**
         * A Callable wrapper for CancelArchival that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelArchivalOutcomeCallable CancelArchivalCallable(const Model::CancelArchivalRequest& request) const;

        /**
         * An Async wrapper for CancelArchival that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelArchivalAsync(const Model::CancelArchivalRequest& request, const CancelArchivalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels retrieval of a virtual tape from the virtual tape shelf (VTS) to a
         * gateway after the retrieval process is initiated. The virtual tape is returned
         * to the VTS. This operation is only supported in the tape gateway
         * type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/CancelRetrieval">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelRetrievalOutcome CancelRetrieval(const Model::CancelRetrievalRequest& request) const;

        /**
         * A Callable wrapper for CancelRetrieval that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelRetrievalOutcomeCallable CancelRetrievalCallable(const Model::CancelRetrievalRequest& request) const;

        /**
         * An Async wrapper for CancelRetrieval that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelRetrievalAsync(const Model::CancelRetrievalRequest& request, const CancelRetrievalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a cached volume on a specified cached volume gateway. This operation
         * is only supported in the cached volume gateway type.</p>  <p>Cache storage
         * must be allocated to the gateway before you can create a cached volume. Use the
         * <a>AddCache</a> operation to add cache storage to a gateway.</p>  <p>In
         * the request, you must specify the gateway, size of the volume in bytes, the
         * iSCSI target name, an IP address on which to expose the target, and a unique
         * client token. In response, the gateway creates the volume and returns
         * information about it. This information includes the volume Amazon Resource Name
         * (ARN), its size, and the iSCSI target ARN that initiators can use to connect to
         * the volume target.</p> <p>Optionally, you can provide the ARN for an existing
         * volume as the <code>SourceVolumeARN</code> for this cached volume, which creates
         * an exact copy of the existing volume’s latest recovery point. The
         * <code>VolumeSizeInBytes</code> value must be equal to or larger than the size of
         * the copied volume, in bytes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/CreateCachediSCSIVolume">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCachediSCSIVolumeOutcome CreateCachediSCSIVolume(const Model::CreateCachediSCSIVolumeRequest& request) const;

        /**
         * A Callable wrapper for CreateCachediSCSIVolume that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCachediSCSIVolumeOutcomeCallable CreateCachediSCSIVolumeCallable(const Model::CreateCachediSCSIVolumeRequest& request) const;

        /**
         * An Async wrapper for CreateCachediSCSIVolume that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCachediSCSIVolumeAsync(const Model::CreateCachediSCSIVolumeRequest& request, const CreateCachediSCSIVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Network File System (NFS) file share on an existing S3 File
         * Gateway. In Storage Gateway, a file share is a file system mount point backed by
         * Amazon S3 cloud storage. Storage Gateway exposes file shares using an NFS
         * interface. This operation is only supported for S3 File Gateways.</p>
         *  <p>S3 File gateway requires Security Token Service (Amazon Web
         * Services STS) to be activated to enable you to create a file share. Make sure
         * Amazon Web Services STS is activated in the Amazon Web Services Region you are
         * creating your S3 File Gateway in. If Amazon Web Services STS is not activated in
         * the Amazon Web Services Region, activate it. For information about how to
         * activate Amazon Web Services STS, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_enable-regions.html">Activating
         * and deactivating Amazon Web Services STS in an Amazon Web Services Region</a> in
         * the <i>Identity and Access Management User Guide</i>.</p> <p>S3 File Gateways do
         * not support creating hard or symbolic links on a file share.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/CreateNFSFileShare">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNFSFileShareOutcome CreateNFSFileShare(const Model::CreateNFSFileShareRequest& request) const;

        /**
         * A Callable wrapper for CreateNFSFileShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNFSFileShareOutcomeCallable CreateNFSFileShareCallable(const Model::CreateNFSFileShareRequest& request) const;

        /**
         * An Async wrapper for CreateNFSFileShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNFSFileShareAsync(const Model::CreateNFSFileShareRequest& request, const CreateNFSFileShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Server Message Block (SMB) file share on an existing S3 File
         * Gateway. In Storage Gateway, a file share is a file system mount point backed by
         * Amazon S3 cloud storage. Storage Gateway exposes file shares using an SMB
         * interface. This operation is only supported for S3 File Gateways.</p>
         *  <p>S3 File Gateways require Security Token Service (Amazon Web
         * Services STS) to be activated to enable you to create a file share. Make sure
         * that Amazon Web Services STS is activated in the Amazon Web Services Region you
         * are creating your S3 File Gateway in. If Amazon Web Services STS is not
         * activated in this Amazon Web Services Region, activate it. For information about
         * how to activate Amazon Web Services STS, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_enable-regions.html">Activating
         * and deactivating Amazon Web Services STS in an Amazon Web Services Region</a> in
         * the <i>Identity and Access Management User Guide</i>.</p> <p>File gateways don't
         * support creating hard or symbolic links on a file share.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/CreateSMBFileShare">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSMBFileShareOutcome CreateSMBFileShare(const Model::CreateSMBFileShareRequest& request) const;

        /**
         * A Callable wrapper for CreateSMBFileShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSMBFileShareOutcomeCallable CreateSMBFileShareCallable(const Model::CreateSMBFileShareRequest& request) const;

        /**
         * An Async wrapper for CreateSMBFileShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSMBFileShareAsync(const Model::CreateSMBFileShareRequest& request, const CreateSMBFileShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Initiates a snapshot of a volume.</p> <p>Storage Gateway provides the ability
         * to back up point-in-time snapshots of your data to Amazon Simple Storage (Amazon
         * S3) for durable off-site recovery, and also import the data to an Amazon Elastic
         * Block Store (EBS) volume in Amazon Elastic Compute Cloud (EC2). You can take
         * snapshots of your gateway volume on a scheduled or ad hoc basis. This API
         * enables you to take an ad hoc snapshot. For more information, see <a
         * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/managing-volumes.html#SchedulingSnapshot">Editing
         * a snapshot schedule</a>.</p> <p>In the <code>CreateSnapshot</code> request, you
         * identify the volume by providing its Amazon Resource Name (ARN). You must also
         * provide description for the snapshot. When Storage Gateway takes the snapshot of
         * specified volume, the snapshot and description appears in the Storage Gateway
         * console. In response, Storage Gateway returns you a snapshot ID. You can use
         * this snapshot ID to check the snapshot progress or later use it when you want to
         * create a volume from a snapshot. This operation is only supported in stored and
         * cached volume gateway type.</p>  <p>To list or delete a snapshot, you must
         * use the Amazon EC2 API. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeSnapshots.html">DescribeSnapshots</a>
         * or <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DeleteSnapshot.html">DeleteSnapshot</a>
         * in the <i>Amazon Elastic Compute Cloud API Reference</i>.</p> 
         *  <p>Volume and snapshot IDs are changing to a longer length ID
         * format. For more information, see the important note on the <a
         * href="https://docs.aws.amazon.com/storagegateway/latest/APIReference/Welcome.html">Welcome</a>
         * page.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/CreateSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSnapshotOutcome CreateSnapshot(const Model::CreateSnapshotRequest& request) const;

        /**
         * A Callable wrapper for CreateSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSnapshotOutcomeCallable CreateSnapshotCallable(const Model::CreateSnapshotRequest& request) const;

        /**
         * An Async wrapper for CreateSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSnapshotAsync(const Model::CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Initiates a snapshot of a gateway from a volume recovery point. This
         * operation is only supported in the cached volume gateway type.</p> <p>A volume
         * recovery point is a point in time at which all data of the volume is consistent
         * and from which you can create a snapshot. To get a list of volume recovery point
         * for cached volume gateway, use <a>ListVolumeRecoveryPoints</a>.</p> <p>In the
         * <code>CreateSnapshotFromVolumeRecoveryPoint</code> request, you identify the
         * volume by providing its Amazon Resource Name (ARN). You must also provide a
         * description for the snapshot. When the gateway takes a snapshot of the specified
         * volume, the snapshot and its description appear in the Storage Gateway console.
         * In response, the gateway returns you a snapshot ID. You can use this snapshot ID
         * to check the snapshot progress or later use it when you want to create a volume
         * from a snapshot.</p>  <p>To list or delete a snapshot, you must use the
         * Amazon EC2 API. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeSnapshots.html">DescribeSnapshots</a>
         * or <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DeleteSnapshot.html">DeleteSnapshot</a>
         * in the <i>Amazon Elastic Compute Cloud API Reference</i>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/CreateSnapshotFromVolumeRecoveryPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSnapshotFromVolumeRecoveryPointOutcome CreateSnapshotFromVolumeRecoveryPoint(const Model::CreateSnapshotFromVolumeRecoveryPointRequest& request) const;

        /**
         * A Callable wrapper for CreateSnapshotFromVolumeRecoveryPoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSnapshotFromVolumeRecoveryPointOutcomeCallable CreateSnapshotFromVolumeRecoveryPointCallable(const Model::CreateSnapshotFromVolumeRecoveryPointRequest& request) const;

        /**
         * An Async wrapper for CreateSnapshotFromVolumeRecoveryPoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSnapshotFromVolumeRecoveryPointAsync(const Model::CreateSnapshotFromVolumeRecoveryPointRequest& request, const CreateSnapshotFromVolumeRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a volume on a specified gateway. This operation is only supported in
         * the stored volume gateway type.</p> <p>The size of the volume to create is
         * inferred from the disk size. You can choose to preserve existing data on the
         * disk, create volume from an existing snapshot, or create an empty volume. If you
         * choose to create an empty gateway volume, then any existing data on the disk is
         * erased.</p> <p>In the request, you must specify the gateway and the disk
         * information on which you are creating the volume. In response, the gateway
         * creates the volume and returns volume information such as the volume Amazon
         * Resource Name (ARN), its size, and the iSCSI target ARN that initiators can use
         * to connect to the volume target.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/CreateStorediSCSIVolume">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStorediSCSIVolumeOutcome CreateStorediSCSIVolume(const Model::CreateStorediSCSIVolumeRequest& request) const;

        /**
         * A Callable wrapper for CreateStorediSCSIVolume that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStorediSCSIVolumeOutcomeCallable CreateStorediSCSIVolumeCallable(const Model::CreateStorediSCSIVolumeRequest& request) const;

        /**
         * An Async wrapper for CreateStorediSCSIVolume that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStorediSCSIVolumeAsync(const Model::CreateStorediSCSIVolumeRequest& request, const CreateStorediSCSIVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new custom tape pool. You can use custom tape pool to enable tape
         * retention lock on tapes that are archived in the custom pool.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/CreateTapePool">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTapePoolOutcome CreateTapePool(const Model::CreateTapePoolRequest& request) const;

        /**
         * A Callable wrapper for CreateTapePool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTapePoolOutcomeCallable CreateTapePoolCallable(const Model::CreateTapePoolRequest& request) const;

        /**
         * An Async wrapper for CreateTapePool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTapePoolAsync(const Model::CreateTapePoolRequest& request, const CreateTapePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a virtual tape by using your own barcode. You write data to the
         * virtual tape and then archive the tape. A barcode is unique and cannot be reused
         * if it has already been used on a tape. This applies to barcodes used on deleted
         * tapes. This operation is only supported in the tape gateway type.</p> 
         * <p>Cache storage must be allocated to the gateway before you can create a
         * virtual tape. Use the <a>AddCache</a> operation to add cache storage to a
         * gateway.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/CreateTapeWithBarcode">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTapeWithBarcodeOutcome CreateTapeWithBarcode(const Model::CreateTapeWithBarcodeRequest& request) const;

        /**
         * A Callable wrapper for CreateTapeWithBarcode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTapeWithBarcodeOutcomeCallable CreateTapeWithBarcodeCallable(const Model::CreateTapeWithBarcodeRequest& request) const;

        /**
         * An Async wrapper for CreateTapeWithBarcode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTapeWithBarcodeAsync(const Model::CreateTapeWithBarcodeRequest& request, const CreateTapeWithBarcodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates one or more virtual tapes. You write data to the virtual tapes and
         * then archive the tapes. This operation is only supported in the tape gateway
         * type.</p>  <p>Cache storage must be allocated to the gateway before you
         * can create virtual tapes. Use the <a>AddCache</a> operation to add cache storage
         * to a gateway.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/CreateTapes">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTapesOutcome CreateTapes(const Model::CreateTapesRequest& request) const;

        /**
         * A Callable wrapper for CreateTapes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTapesOutcomeCallable CreateTapesCallable(const Model::CreateTapesRequest& request) const;

        /**
         * An Async wrapper for CreateTapes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTapesAsync(const Model::CreateTapesRequest& request, const CreateTapesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the automatic tape creation policy of a gateway. If you delete this
         * policy, new virtual tapes must be created manually. Use the Amazon Resource Name
         * (ARN) of the gateway in your request to remove the policy.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DeleteAutomaticTapeCreationPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAutomaticTapeCreationPolicyOutcome DeleteAutomaticTapeCreationPolicy(const Model::DeleteAutomaticTapeCreationPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteAutomaticTapeCreationPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAutomaticTapeCreationPolicyOutcomeCallable DeleteAutomaticTapeCreationPolicyCallable(const Model::DeleteAutomaticTapeCreationPolicyRequest& request) const;

        /**
         * An Async wrapper for DeleteAutomaticTapeCreationPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAutomaticTapeCreationPolicyAsync(const Model::DeleteAutomaticTapeCreationPolicyRequest& request, const DeleteAutomaticTapeCreationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the bandwidth rate limits of a gateway. You can delete either the
         * upload and download bandwidth rate limit, or you can delete both. If you delete
         * only one of the limits, the other limit remains unchanged. To specify which
         * gateway to work with, use the Amazon Resource Name (ARN) of the gateway in your
         * request. This operation is supported only for the stored volume, cached volume,
         * and tape gateway types.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DeleteBandwidthRateLimit">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBandwidthRateLimitOutcome DeleteBandwidthRateLimit(const Model::DeleteBandwidthRateLimitRequest& request) const;

        /**
         * A Callable wrapper for DeleteBandwidthRateLimit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBandwidthRateLimitOutcomeCallable DeleteBandwidthRateLimitCallable(const Model::DeleteBandwidthRateLimitRequest& request) const;

        /**
         * An Async wrapper for DeleteBandwidthRateLimit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBandwidthRateLimitAsync(const Model::DeleteBandwidthRateLimitRequest& request, const DeleteBandwidthRateLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes Challenge-Handshake Authentication Protocol (CHAP) credentials for a
         * specified iSCSI target and initiator pair. This operation is supported in volume
         * and tape gateway types.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DeleteChapCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChapCredentialsOutcome DeleteChapCredentials(const Model::DeleteChapCredentialsRequest& request) const;

        /**
         * A Callable wrapper for DeleteChapCredentials that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteChapCredentialsOutcomeCallable DeleteChapCredentialsCallable(const Model::DeleteChapCredentialsRequest& request) const;

        /**
         * An Async wrapper for DeleteChapCredentials that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteChapCredentialsAsync(const Model::DeleteChapCredentialsRequest& request, const DeleteChapCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a file share from an S3 File Gateway. This operation is only
         * supported for S3 File Gateways.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DeleteFileShare">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFileShareOutcome DeleteFileShare(const Model::DeleteFileShareRequest& request) const;

        /**
         * A Callable wrapper for DeleteFileShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFileShareOutcomeCallable DeleteFileShareCallable(const Model::DeleteFileShareRequest& request) const;

        /**
         * An Async wrapper for DeleteFileShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFileShareAsync(const Model::DeleteFileShareRequest& request, const DeleteFileShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a gateway. To specify which gateway to delete, use the Amazon
         * Resource Name (ARN) of the gateway in your request. The operation deletes the
         * gateway; however, it does not delete the gateway virtual machine (VM) from your
         * host computer.</p> <p>After you delete a gateway, you cannot reactivate it.
         * Completed snapshots of the gateway volumes are not deleted upon deleting the
         * gateway, however, pending snapshots will not complete. After you delete a
         * gateway, your next step is to remove it from your environment.</p> 
         * <p>You no longer pay software charges after the gateway is deleted; however,
         * your existing Amazon EBS snapshots persist and you will continue to be billed
         * for these snapshots. You can choose to remove all remaining Amazon EBS snapshots
         * by canceling your Amazon EC2 subscription.  If you prefer not to cancel your
         * Amazon EC2 subscription, you can delete your snapshots using the Amazon EC2
         * console. For more information, see the <a
         * href="http://aws.amazon.com/storagegateway">Storage Gateway detail page</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DeleteGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGatewayOutcome DeleteGateway(const Model::DeleteGatewayRequest& request) const;

        /**
         * A Callable wrapper for DeleteGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGatewayOutcomeCallable DeleteGatewayCallable(const Model::DeleteGatewayRequest& request) const;

        /**
         * An Async wrapper for DeleteGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGatewayAsync(const Model::DeleteGatewayRequest& request, const DeleteGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a snapshot of a volume.</p> <p>You can take snapshots of your gateway
         * volumes on a scheduled or ad hoc basis. This API action enables you to delete a
         * snapshot schedule for a volume. For more information, see <a
         * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/backing-up-volumes.html">Backing
         * up your volumes</a>. In the <code>DeleteSnapshotSchedule</code> request, you
         * identify the volume by providing its Amazon Resource Name (ARN). This operation
         * is only supported for cached volume gateway types.</p>  <p>To list or
         * delete a snapshot, you must use the Amazon EC2 API. For more information, go to
         * <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeSnapshots.html">DescribeSnapshots</a>
         * in the <i>Amazon Elastic Compute Cloud API Reference</i>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DeleteSnapshotSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSnapshotScheduleOutcome DeleteSnapshotSchedule(const Model::DeleteSnapshotScheduleRequest& request) const;

        /**
         * A Callable wrapper for DeleteSnapshotSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSnapshotScheduleOutcomeCallable DeleteSnapshotScheduleCallable(const Model::DeleteSnapshotScheduleRequest& request) const;

        /**
         * An Async wrapper for DeleteSnapshotSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSnapshotScheduleAsync(const Model::DeleteSnapshotScheduleRequest& request, const DeleteSnapshotScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified virtual tape. This operation is only supported in the
         * tape gateway type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DeleteTape">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTapeOutcome DeleteTape(const Model::DeleteTapeRequest& request) const;

        /**
         * A Callable wrapper for DeleteTape that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTapeOutcomeCallable DeleteTapeCallable(const Model::DeleteTapeRequest& request) const;

        /**
         * An Async wrapper for DeleteTape that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTapeAsync(const Model::DeleteTapeRequest& request, const DeleteTapeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified virtual tape from the virtual tape shelf (VTS). This
         * operation is only supported in the tape gateway type.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DeleteTapeArchive">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTapeArchiveOutcome DeleteTapeArchive(const Model::DeleteTapeArchiveRequest& request) const;

        /**
         * A Callable wrapper for DeleteTapeArchive that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTapeArchiveOutcomeCallable DeleteTapeArchiveCallable(const Model::DeleteTapeArchiveRequest& request) const;

        /**
         * An Async wrapper for DeleteTapeArchive that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTapeArchiveAsync(const Model::DeleteTapeArchiveRequest& request, const DeleteTapeArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete a custom tape pool. A custom tape pool can only be deleted if there
         * are no tapes in the pool and if there are no automatic tape creation policies
         * that reference the custom tape pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DeleteTapePool">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTapePoolOutcome DeleteTapePool(const Model::DeleteTapePoolRequest& request) const;

        /**
         * A Callable wrapper for DeleteTapePool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTapePoolOutcomeCallable DeleteTapePoolCallable(const Model::DeleteTapePoolRequest& request) const;

        /**
         * An Async wrapper for DeleteTapePool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTapePoolAsync(const Model::DeleteTapePoolRequest& request, const DeleteTapePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified storage volume that you previously created using the
         * <a>CreateCachediSCSIVolume</a> or <a>CreateStorediSCSIVolume</a> API. This
         * operation is only supported in the cached volume and stored volume types. For
         * stored volume gateways, the local disk that was configured as the storage volume
         * is not deleted. You can reuse the local disk to create another storage
         * volume.</p> <p>Before you delete a volume, make sure there are no iSCSI
         * connections to the volume you are deleting. You should also make sure there is
         * no snapshot in progress. You can use the Amazon Elastic Compute Cloud (Amazon
         * EC2) API to query snapshots on the volume you are deleting and check the
         * snapshot status. For more information, go to <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/ApiReference-query-DescribeSnapshots.html">DescribeSnapshots</a>
         * in the <i>Amazon Elastic Compute Cloud API Reference</i>.</p> <p>In the request,
         * you must provide the Amazon Resource Name (ARN) of the storage volume you want
         * to delete.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DeleteVolume">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVolumeOutcome DeleteVolume(const Model::DeleteVolumeRequest& request) const;

        /**
         * A Callable wrapper for DeleteVolume that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVolumeOutcomeCallable DeleteVolumeCallable(const Model::DeleteVolumeRequest& request) const;

        /**
         * An Async wrapper for DeleteVolume that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVolumeAsync(const Model::DeleteVolumeRequest& request, const DeleteVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the most recent high availability monitoring test
         * that was performed on the host in a cluster. If a test isn't performed, the
         * status and start time in the response would be null.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeAvailabilityMonitorTest">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAvailabilityMonitorTestOutcome DescribeAvailabilityMonitorTest(const Model::DescribeAvailabilityMonitorTestRequest& request) const;

        /**
         * A Callable wrapper for DescribeAvailabilityMonitorTest that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAvailabilityMonitorTestOutcomeCallable DescribeAvailabilityMonitorTestCallable(const Model::DescribeAvailabilityMonitorTestRequest& request) const;

        /**
         * An Async wrapper for DescribeAvailabilityMonitorTest that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAvailabilityMonitorTestAsync(const Model::DescribeAvailabilityMonitorTestRequest& request, const DescribeAvailabilityMonitorTestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the bandwidth rate limits of a gateway. By default, these limits are
         * not set, which means no bandwidth rate limiting is in effect. This operation is
         * supported only for the stored volume, cached volume, and tape gateway types. To
         * describe bandwidth rate limits for S3 file gateways, use
         * <a>DescribeBandwidthRateLimitSchedule</a>.</p> <p>This operation returns a value
         * for a bandwidth rate limit only if the limit is set. If no limits are set for
         * the gateway, then this operation returns only the gateway ARN in the response
         * body. To specify which gateway to describe, use the Amazon Resource Name (ARN)
         * of the gateway in your request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeBandwidthRateLimit">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBandwidthRateLimitOutcome DescribeBandwidthRateLimit(const Model::DescribeBandwidthRateLimitRequest& request) const;

        /**
         * A Callable wrapper for DescribeBandwidthRateLimit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBandwidthRateLimitOutcomeCallable DescribeBandwidthRateLimitCallable(const Model::DescribeBandwidthRateLimitRequest& request) const;

        /**
         * An Async wrapper for DescribeBandwidthRateLimit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBandwidthRateLimitAsync(const Model::DescribeBandwidthRateLimitRequest& request, const DescribeBandwidthRateLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns information about the bandwidth rate limit schedule of a gateway. By
         * default, gateways do not have bandwidth rate limit schedules, which means no
         * bandwidth rate limiting is in effect. This operation is supported only for
         * volume, tape and S3 file gateways. FSx file gateways do not support bandwidth
         * rate limits.</p> <p>This operation returns information about a gateway's
         * bandwidth rate limit schedule. A bandwidth rate limit schedule consists of one
         * or more bandwidth rate limit intervals. A bandwidth rate limit interval defines
         * a period of time on one or more days of the week, during which bandwidth rate
         * limits are specified for uploading, downloading, or both. </p> <p> A bandwidth
         * rate limit interval consists of one or more days of the week, a start hour and
         * minute, an ending hour and minute, and bandwidth rate limits for uploading and
         * downloading </p> <p> If no bandwidth rate limit schedule intervals are set for
         * the gateway, this operation returns an empty response. To specify which gateway
         * to describe, use the Amazon Resource Name (ARN) of the gateway in your
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeBandwidthRateLimitSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBandwidthRateLimitScheduleOutcome DescribeBandwidthRateLimitSchedule(const Model::DescribeBandwidthRateLimitScheduleRequest& request) const;

        /**
         * A Callable wrapper for DescribeBandwidthRateLimitSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBandwidthRateLimitScheduleOutcomeCallable DescribeBandwidthRateLimitScheduleCallable(const Model::DescribeBandwidthRateLimitScheduleRequest& request) const;

        /**
         * An Async wrapper for DescribeBandwidthRateLimitSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBandwidthRateLimitScheduleAsync(const Model::DescribeBandwidthRateLimitScheduleRequest& request, const DescribeBandwidthRateLimitScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the cache of a gateway. This operation is only
         * supported in the cached volume, tape, and file gateway types.</p> <p>The
         * response includes disk IDs that are configured as cache, and it includes the
         * amount of cache allocated and used.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeCache">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCacheOutcome DescribeCache(const Model::DescribeCacheRequest& request) const;

        /**
         * A Callable wrapper for DescribeCache that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCacheOutcomeCallable DescribeCacheCallable(const Model::DescribeCacheRequest& request) const;

        /**
         * An Async wrapper for DescribeCache that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCacheAsync(const Model::DescribeCacheRequest& request, const DescribeCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a description of the gateway volumes specified in the request. This
         * operation is only supported in the cached volume gateway types.</p> <p>The list
         * of gateway volumes in the request must be from one gateway. In the response,
         * Storage Gateway returns volume information sorted by volume Amazon Resource Name
         * (ARN).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeCachediSCSIVolumes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCachediSCSIVolumesOutcome DescribeCachediSCSIVolumes(const Model::DescribeCachediSCSIVolumesRequest& request) const;

        /**
         * A Callable wrapper for DescribeCachediSCSIVolumes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCachediSCSIVolumesOutcomeCallable DescribeCachediSCSIVolumesCallable(const Model::DescribeCachediSCSIVolumesRequest& request) const;

        /**
         * An Async wrapper for DescribeCachediSCSIVolumes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCachediSCSIVolumesAsync(const Model::DescribeCachediSCSIVolumesRequest& request, const DescribeCachediSCSIVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an array of Challenge-Handshake Authentication Protocol (CHAP)
         * credentials information for a specified iSCSI target, one for each
         * target-initiator pair. This operation is supported in the volume and tape
         * gateway types.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeChapCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChapCredentialsOutcome DescribeChapCredentials(const Model::DescribeChapCredentialsRequest& request) const;

        /**
         * A Callable wrapper for DescribeChapCredentials that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeChapCredentialsOutcomeCallable DescribeChapCredentialsCallable(const Model::DescribeChapCredentialsRequest& request) const;

        /**
         * An Async wrapper for DescribeChapCredentials that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeChapCredentialsAsync(const Model::DescribeChapCredentialsRequest& request, const DescribeChapCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the file system association information. This operation is only
         * supported for FSx File Gateways.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeFileSystemAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFileSystemAssociationsOutcome DescribeFileSystemAssociations(const Model::DescribeFileSystemAssociationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeFileSystemAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFileSystemAssociationsOutcomeCallable DescribeFileSystemAssociationsCallable(const Model::DescribeFileSystemAssociationsRequest& request) const;

        /**
         * An Async wrapper for DescribeFileSystemAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFileSystemAssociationsAsync(const Model::DescribeFileSystemAssociationsRequest& request, const DescribeFileSystemAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns metadata about a gateway such as its name, network interfaces,
         * configured time zone, and the state (whether the gateway is running or not). To
         * specify which gateway to describe, use the Amazon Resource Name (ARN) of the
         * gateway in your request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeGatewayInformation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGatewayInformationOutcome DescribeGatewayInformation(const Model::DescribeGatewayInformationRequest& request) const;

        /**
         * A Callable wrapper for DescribeGatewayInformation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeGatewayInformationOutcomeCallable DescribeGatewayInformationCallable(const Model::DescribeGatewayInformationRequest& request) const;

        /**
         * An Async wrapper for DescribeGatewayInformation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGatewayInformationAsync(const Model::DescribeGatewayInformationRequest& request, const DescribeGatewayInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns your gateway's weekly maintenance start time including the day and
         * time of the week. Note that values are in terms of the gateway's time
         * zone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeMaintenanceStartTime">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMaintenanceStartTimeOutcome DescribeMaintenanceStartTime(const Model::DescribeMaintenanceStartTimeRequest& request) const;

        /**
         * A Callable wrapper for DescribeMaintenanceStartTime that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMaintenanceStartTimeOutcomeCallable DescribeMaintenanceStartTimeCallable(const Model::DescribeMaintenanceStartTimeRequest& request) const;

        /**
         * An Async wrapper for DescribeMaintenanceStartTime that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMaintenanceStartTimeAsync(const Model::DescribeMaintenanceStartTimeRequest& request, const DescribeMaintenanceStartTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a description for one or more Network File System (NFS) file shares from
         * an S3 File Gateway. This operation is only supported for S3 File
         * Gateways.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeNFSFileShares">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNFSFileSharesOutcome DescribeNFSFileShares(const Model::DescribeNFSFileSharesRequest& request) const;

        /**
         * A Callable wrapper for DescribeNFSFileShares that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeNFSFileSharesOutcomeCallable DescribeNFSFileSharesCallable(const Model::DescribeNFSFileSharesRequest& request) const;

        /**
         * An Async wrapper for DescribeNFSFileShares that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeNFSFileSharesAsync(const Model::DescribeNFSFileSharesRequest& request, const DescribeNFSFileSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a description for one or more Server Message Block (SMB) file shares
         * from a S3 File Gateway. This operation is only supported for S3 File
         * Gateways.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeSMBFileShares">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSMBFileSharesOutcome DescribeSMBFileShares(const Model::DescribeSMBFileSharesRequest& request) const;

        /**
         * A Callable wrapper for DescribeSMBFileShares that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSMBFileSharesOutcomeCallable DescribeSMBFileSharesCallable(const Model::DescribeSMBFileSharesRequest& request) const;

        /**
         * An Async wrapper for DescribeSMBFileShares that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSMBFileSharesAsync(const Model::DescribeSMBFileSharesRequest& request, const DescribeSMBFileSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a description of a Server Message Block (SMB) file share settings from a
         * file gateway. This operation is only supported for file gateways.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeSMBSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSMBSettingsOutcome DescribeSMBSettings(const Model::DescribeSMBSettingsRequest& request) const;

        /**
         * A Callable wrapper for DescribeSMBSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSMBSettingsOutcomeCallable DescribeSMBSettingsCallable(const Model::DescribeSMBSettingsRequest& request) const;

        /**
         * An Async wrapper for DescribeSMBSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSMBSettingsAsync(const Model::DescribeSMBSettingsRequest& request, const DescribeSMBSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the snapshot schedule for the specified gateway volume. The
         * snapshot schedule information includes intervals at which snapshots are
         * automatically initiated on the volume. This operation is only supported in the
         * cached volume and stored volume types.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeSnapshotSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSnapshotScheduleOutcome DescribeSnapshotSchedule(const Model::DescribeSnapshotScheduleRequest& request) const;

        /**
         * A Callable wrapper for DescribeSnapshotSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSnapshotScheduleOutcomeCallable DescribeSnapshotScheduleCallable(const Model::DescribeSnapshotScheduleRequest& request) const;

        /**
         * An Async wrapper for DescribeSnapshotSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSnapshotScheduleAsync(const Model::DescribeSnapshotScheduleRequest& request, const DescribeSnapshotScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the description of the gateway volumes specified in the request. The
         * list of gateway volumes in the request must be from one gateway. In the
         * response, Storage Gateway returns volume information sorted by volume ARNs. This
         * operation is only supported in stored volume gateway type.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeStorediSCSIVolumes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStorediSCSIVolumesOutcome DescribeStorediSCSIVolumes(const Model::DescribeStorediSCSIVolumesRequest& request) const;

        /**
         * A Callable wrapper for DescribeStorediSCSIVolumes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStorediSCSIVolumesOutcomeCallable DescribeStorediSCSIVolumesCallable(const Model::DescribeStorediSCSIVolumesRequest& request) const;

        /**
         * An Async wrapper for DescribeStorediSCSIVolumes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStorediSCSIVolumesAsync(const Model::DescribeStorediSCSIVolumesRequest& request, const DescribeStorediSCSIVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a description of specified virtual tapes in the virtual tape shelf
         * (VTS). This operation is only supported in the tape gateway type.</p> <p>If a
         * specific <code>TapeARN</code> is not specified, Storage Gateway returns a
         * description of all virtual tapes found in the VTS associated with your
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeTapeArchives">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTapeArchivesOutcome DescribeTapeArchives(const Model::DescribeTapeArchivesRequest& request) const;

        /**
         * A Callable wrapper for DescribeTapeArchives that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTapeArchivesOutcomeCallable DescribeTapeArchivesCallable(const Model::DescribeTapeArchivesRequest& request) const;

        /**
         * An Async wrapper for DescribeTapeArchives that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTapeArchivesAsync(const Model::DescribeTapeArchivesRequest& request, const DescribeTapeArchivesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of virtual tape recovery points that are available for the
         * specified tape gateway.</p> <p>A recovery point is a point-in-time view of a
         * virtual tape at which all the data on the virtual tape is consistent. If your
         * gateway crashes, virtual tapes that have recovery points can be recovered to a
         * new gateway. This operation is only supported in the tape gateway
         * type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeTapeRecoveryPoints">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTapeRecoveryPointsOutcome DescribeTapeRecoveryPoints(const Model::DescribeTapeRecoveryPointsRequest& request) const;

        /**
         * A Callable wrapper for DescribeTapeRecoveryPoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTapeRecoveryPointsOutcomeCallable DescribeTapeRecoveryPointsCallable(const Model::DescribeTapeRecoveryPointsRequest& request) const;

        /**
         * An Async wrapper for DescribeTapeRecoveryPoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTapeRecoveryPointsAsync(const Model::DescribeTapeRecoveryPointsRequest& request, const DescribeTapeRecoveryPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a description of the specified Amazon Resource Name (ARN) of virtual
         * tapes. If a <code>TapeARN</code> is not specified, returns a description of all
         * virtual tapes associated with the specified gateway. This operation is only
         * supported in the tape gateway type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeTapes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTapesOutcome DescribeTapes(const Model::DescribeTapesRequest& request) const;

        /**
         * A Callable wrapper for DescribeTapes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTapesOutcomeCallable DescribeTapesCallable(const Model::DescribeTapesRequest& request) const;

        /**
         * An Async wrapper for DescribeTapes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTapesAsync(const Model::DescribeTapesRequest& request, const DescribeTapesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the upload buffer of a gateway. This operation is
         * supported for the stored volume, cached volume, and tape gateway types.</p>
         * <p>The response includes disk IDs that are configured as upload buffer space,
         * and it includes the amount of upload buffer space allocated and
         * used.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeUploadBuffer">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUploadBufferOutcome DescribeUploadBuffer(const Model::DescribeUploadBufferRequest& request) const;

        /**
         * A Callable wrapper for DescribeUploadBuffer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUploadBufferOutcomeCallable DescribeUploadBufferCallable(const Model::DescribeUploadBufferRequest& request) const;

        /**
         * An Async wrapper for DescribeUploadBuffer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUploadBufferAsync(const Model::DescribeUploadBufferRequest& request, const DescribeUploadBufferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a description of virtual tape library (VTL) devices for the specified
         * tape gateway. In the response, Storage Gateway returns VTL device
         * information.</p> <p>This operation is only supported in the tape gateway
         * type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeVTLDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVTLDevicesOutcome DescribeVTLDevices(const Model::DescribeVTLDevicesRequest& request) const;

        /**
         * A Callable wrapper for DescribeVTLDevices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVTLDevicesOutcomeCallable DescribeVTLDevicesCallable(const Model::DescribeVTLDevicesRequest& request) const;

        /**
         * An Async wrapper for DescribeVTLDevices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVTLDevicesAsync(const Model::DescribeVTLDevicesRequest& request, const DescribeVTLDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the working storage of a gateway. This operation is
         * only supported in the stored volumes gateway type. This operation is deprecated
         * in cached volumes API version (20120630). Use DescribeUploadBuffer instead.</p>
         *  <p>Working storage is also referred to as upload buffer. You can also use
         * the DescribeUploadBuffer operation to add upload buffer to a stored volume
         * gateway.</p>  <p>The response includes disk IDs that are configured as
         * working storage, and it includes the amount of working storage allocated and
         * used.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeWorkingStorage">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkingStorageOutcome DescribeWorkingStorage(const Model::DescribeWorkingStorageRequest& request) const;

        /**
         * A Callable wrapper for DescribeWorkingStorage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeWorkingStorageOutcomeCallable DescribeWorkingStorageCallable(const Model::DescribeWorkingStorageRequest& request) const;

        /**
         * An Async wrapper for DescribeWorkingStorage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeWorkingStorageAsync(const Model::DescribeWorkingStorageRequest& request, const DescribeWorkingStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disconnects a volume from an iSCSI connection and then detaches the volume
         * from the specified gateway. Detaching and attaching a volume enables you to
         * recover your data from one gateway to a different gateway without creating a
         * snapshot. It also makes it easier to move your volumes from an on-premises
         * gateway to a gateway hosted on an Amazon EC2 instance. This operation is only
         * supported in the volume gateway type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DetachVolume">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachVolumeOutcome DetachVolume(const Model::DetachVolumeRequest& request) const;

        /**
         * A Callable wrapper for DetachVolume that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachVolumeOutcomeCallable DetachVolumeCallable(const Model::DetachVolumeRequest& request) const;

        /**
         * An Async wrapper for DetachVolume that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachVolumeAsync(const Model::DetachVolumeRequest& request, const DetachVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables a tape gateway when the gateway is no longer functioning. For
         * example, if your gateway VM is damaged, you can disable the gateway so you can
         * recover virtual tapes.</p> <p>Use this operation for a tape gateway that is not
         * reachable or not functioning. This operation is only supported in the tape
         * gateway type.</p>  <p>After a gateway is disabled, it cannot be
         * enabled.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DisableGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableGatewayOutcome DisableGateway(const Model::DisableGatewayRequest& request) const;

        /**
         * A Callable wrapper for DisableGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableGatewayOutcomeCallable DisableGatewayCallable(const Model::DisableGatewayRequest& request) const;

        /**
         * An Async wrapper for DisableGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableGatewayAsync(const Model::DisableGatewayRequest& request, const DisableGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates an Amazon FSx file system from the specified gateway. After the
         * disassociation process finishes, the gateway can no longer access the Amazon FSx
         * file system. This operation is only supported in the FSx File Gateway
         * type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DisassociateFileSystem">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateFileSystemOutcome DisassociateFileSystem(const Model::DisassociateFileSystemRequest& request) const;

        /**
         * A Callable wrapper for DisassociateFileSystem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateFileSystemOutcomeCallable DisassociateFileSystemCallable(const Model::DisassociateFileSystemRequest& request) const;

        /**
         * An Async wrapper for DisassociateFileSystem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateFileSystemAsync(const Model::DisassociateFileSystemRequest& request, const DisassociateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a file gateway to an Active Directory domain. This operation is only
         * supported for file gateways that support the SMB file protocol.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/JoinDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::JoinDomainOutcome JoinDomain(const Model::JoinDomainRequest& request) const;

        /**
         * A Callable wrapper for JoinDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::JoinDomainOutcomeCallable JoinDomainCallable(const Model::JoinDomainRequest& request) const;

        /**
         * An Async wrapper for JoinDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void JoinDomainAsync(const Model::JoinDomainRequest& request, const JoinDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the automatic tape creation policies for a gateway. If there are no
         * automatic tape creation policies for the gateway, it returns an empty list.</p>
         * <p>This operation is only supported for tape gateways.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/ListAutomaticTapeCreationPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAutomaticTapeCreationPoliciesOutcome ListAutomaticTapeCreationPolicies(const Model::ListAutomaticTapeCreationPoliciesRequest& request) const;

        /**
         * A Callable wrapper for ListAutomaticTapeCreationPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAutomaticTapeCreationPoliciesOutcomeCallable ListAutomaticTapeCreationPoliciesCallable(const Model::ListAutomaticTapeCreationPoliciesRequest& request) const;

        /**
         * An Async wrapper for ListAutomaticTapeCreationPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAutomaticTapeCreationPoliciesAsync(const Model::ListAutomaticTapeCreationPoliciesRequest& request, const ListAutomaticTapeCreationPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of the file shares for a specific S3 File Gateway, or the list of
         * file shares that belong to the calling user account. This operation is only
         * supported for S3 File Gateways.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/ListFileShares">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFileSharesOutcome ListFileShares(const Model::ListFileSharesRequest& request) const;

        /**
         * A Callable wrapper for ListFileShares that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFileSharesOutcomeCallable ListFileSharesCallable(const Model::ListFileSharesRequest& request) const;

        /**
         * An Async wrapper for ListFileShares that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFileSharesAsync(const Model::ListFileSharesRequest& request, const ListFileSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of <code>FileSystemAssociationSummary</code> objects. Each object
         * contains a summary of a file system association. This operation is only
         * supported for FSx File Gateways.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/ListFileSystemAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFileSystemAssociationsOutcome ListFileSystemAssociations(const Model::ListFileSystemAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListFileSystemAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFileSystemAssociationsOutcomeCallable ListFileSystemAssociationsCallable(const Model::ListFileSystemAssociationsRequest& request) const;

        /**
         * An Async wrapper for ListFileSystemAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFileSystemAssociationsAsync(const Model::ListFileSystemAssociationsRequest& request, const ListFileSystemAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists gateways owned by an Amazon Web Services account in an Amazon Web
         * Services Region specified in the request. The returned list is ordered by
         * gateway Amazon Resource Name (ARN).</p> <p>By default, the operation returns a
         * maximum of 100 gateways. This operation supports pagination that allows you to
         * optionally reduce the number of gateways returned in a response.</p> <p>If you
         * have more gateways than are returned in a response (that is, the response
         * returns only a truncated list of your gateways), the response contains a marker
         * that you can specify in your next request to fetch the next page of
         * gateways.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/ListGateways">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGatewaysOutcome ListGateways(const Model::ListGatewaysRequest& request) const;

        /**
         * A Callable wrapper for ListGateways that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGatewaysOutcomeCallable ListGatewaysCallable(const Model::ListGatewaysRequest& request) const;

        /**
         * An Async wrapper for ListGateways that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGatewaysAsync(const Model::ListGatewaysRequest& request, const ListGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the gateway's local disks. To specify which gateway to
         * describe, you use the Amazon Resource Name (ARN) of the gateway in the body of
         * the request.</p> <p>The request returns a list of all disks, specifying which
         * are configured as working storage, cache storage, or stored volume or not
         * configured at all. The response includes a <code>DiskStatus</code> field. This
         * field can have a value of present (the disk is available to use), missing (the
         * disk is no longer connected to the gateway), or mismatch (the disk node is
         * occupied by a disk that has incorrect metadata or the disk content is
         * corrupted).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/ListLocalDisks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLocalDisksOutcome ListLocalDisks(const Model::ListLocalDisksRequest& request) const;

        /**
         * A Callable wrapper for ListLocalDisks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLocalDisksOutcomeCallable ListLocalDisksCallable(const Model::ListLocalDisksRequest& request) const;

        /**
         * An Async wrapper for ListLocalDisks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLocalDisksAsync(const Model::ListLocalDisksRequest& request, const ListLocalDisksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags that have been added to the specified resource. This operation
         * is supported in storage gateways of all types.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/ListTagsForResource">AWS
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
         * <p>Lists custom tape pools. You specify custom tape pools to list by specifying
         * one or more custom tape pool Amazon Resource Names (ARNs). If you don't specify
         * a custom tape pool ARN, the operation lists all custom tape pools.</p> <p>This
         * operation supports pagination. You can optionally specify the <code>Limit</code>
         * parameter in the body to limit the number of tape pools in the response. If the
         * number of tape pools returned in the response is truncated, the response
         * includes a <code>Marker</code> element that you can use in your subsequent
         * request to retrieve the next set of tape pools.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/ListTapePools">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTapePoolsOutcome ListTapePools(const Model::ListTapePoolsRequest& request) const;

        /**
         * A Callable wrapper for ListTapePools that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTapePoolsOutcomeCallable ListTapePoolsCallable(const Model::ListTapePoolsRequest& request) const;

        /**
         * An Async wrapper for ListTapePools that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTapePoolsAsync(const Model::ListTapePoolsRequest& request, const ListTapePoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists virtual tapes in your virtual tape library (VTL) and your virtual tape
         * shelf (VTS). You specify the tapes to list by specifying one or more tape Amazon
         * Resource Names (ARNs). If you don't specify a tape ARN, the operation lists all
         * virtual tapes in both your VTL and VTS.</p> <p>This operation supports
         * pagination. By default, the operation returns a maximum of up to 100 tapes. You
         * can optionally specify the <code>Limit</code> parameter in the body to limit the
         * number of tapes in the response. If the number of tapes returned in the response
         * is truncated, the response includes a <code>Marker</code> element that you can
         * use in your subsequent request to retrieve the next set of tapes. This operation
         * is only supported in the tape gateway type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/ListTapes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTapesOutcome ListTapes(const Model::ListTapesRequest& request) const;

        /**
         * A Callable wrapper for ListTapes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTapesOutcomeCallable ListTapesCallable(const Model::ListTapesRequest& request) const;

        /**
         * An Async wrapper for ListTapes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTapesAsync(const Model::ListTapesRequest& request, const ListTapesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists iSCSI initiators that are connected to a volume. You can use this
         * operation to determine whether a volume is being used or not. This operation is
         * only supported in the cached volume and stored volume gateway
         * types.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/ListVolumeInitiators">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVolumeInitiatorsOutcome ListVolumeInitiators(const Model::ListVolumeInitiatorsRequest& request) const;

        /**
         * A Callable wrapper for ListVolumeInitiators that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVolumeInitiatorsOutcomeCallable ListVolumeInitiatorsCallable(const Model::ListVolumeInitiatorsRequest& request) const;

        /**
         * An Async wrapper for ListVolumeInitiators that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVolumeInitiatorsAsync(const Model::ListVolumeInitiatorsRequest& request, const ListVolumeInitiatorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the recovery points for a specified gateway. This operation is only
         * supported in the cached volume gateway type.</p> <p>Each cache volume has one
         * recovery point. A volume recovery point is a point in time at which all data of
         * the volume is consistent and from which you can create a snapshot or clone a new
         * cached volume from a source volume. To create a snapshot from a volume recovery
         * point use the <a>CreateSnapshotFromVolumeRecoveryPoint</a>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/ListVolumeRecoveryPoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVolumeRecoveryPointsOutcome ListVolumeRecoveryPoints(const Model::ListVolumeRecoveryPointsRequest& request) const;

        /**
         * A Callable wrapper for ListVolumeRecoveryPoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVolumeRecoveryPointsOutcomeCallable ListVolumeRecoveryPointsCallable(const Model::ListVolumeRecoveryPointsRequest& request) const;

        /**
         * An Async wrapper for ListVolumeRecoveryPoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVolumeRecoveryPointsAsync(const Model::ListVolumeRecoveryPointsRequest& request, const ListVolumeRecoveryPointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the iSCSI stored volumes of a gateway. Results are sorted by volume
         * ARN. The response includes only the volume ARNs. If you want additional volume
         * information, use the <a>DescribeStorediSCSIVolumes</a> or the
         * <a>DescribeCachediSCSIVolumes</a> API.</p> <p>The operation supports pagination.
         * By default, the operation returns a maximum of up to 100 volumes. You can
         * optionally specify the <code>Limit</code> field in the body to limit the number
         * of volumes in the response. If the number of volumes returned in the response is
         * truncated, the response includes a Marker field. You can use this Marker value
         * in your subsequent request to retrieve the next set of volumes. This operation
         * is only supported in the cached volume and stored volume gateway
         * types.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/ListVolumes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVolumesOutcome ListVolumes(const Model::ListVolumesRequest& request) const;

        /**
         * A Callable wrapper for ListVolumes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVolumesOutcomeCallable ListVolumesCallable(const Model::ListVolumesRequest& request) const;

        /**
         * An Async wrapper for ListVolumes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVolumesAsync(const Model::ListVolumesRequest& request, const ListVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends you notification through CloudWatch Events when all files written to
         * your file share have been uploaded to S3. Amazon S3.</p> <p>Storage Gateway can
         * send a notification through Amazon CloudWatch Events when all files written to
         * your file share up to that point in time have been uploaded to Amazon S3. These
         * files include files written to the file share up to the time that you make a
         * request for notification. When the upload is done, Storage Gateway sends you
         * notification through an Amazon CloudWatch Event. You can configure CloudWatch
         * Events to send the notification through event targets such as Amazon SNS or
         * Lambda function. This operation is only supported for S3 File Gateways.</p>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/monitoring-file-gateway.html#get-upload-notification">Getting
         * file upload notification</a> in the <i>Storage Gateway User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/NotifyWhenUploaded">AWS
         * API Reference</a></p>
         */
        virtual Model::NotifyWhenUploadedOutcome NotifyWhenUploaded(const Model::NotifyWhenUploadedRequest& request) const;

        /**
         * A Callable wrapper for NotifyWhenUploaded that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::NotifyWhenUploadedOutcomeCallable NotifyWhenUploadedCallable(const Model::NotifyWhenUploadedRequest& request) const;

        /**
         * An Async wrapper for NotifyWhenUploaded that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void NotifyWhenUploadedAsync(const Model::NotifyWhenUploadedRequest& request, const NotifyWhenUploadedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Refreshes the cached inventory of objects for the specified file share. This
         * operation finds objects in the Amazon S3 bucket that were added, removed, or
         * replaced since the gateway last listed the bucket's contents and cached the
         * results. This operation does not import files into the S3 File Gateway cache
         * storage. It only updates the cached inventory to reflect changes in the
         * inventory of the objects in the S3 bucket. This operation is only supported in
         * the S3 File Gateway types.</p> <p>You can subscribe to be notified through an
         * Amazon CloudWatch event when your <code>RefreshCache</code> operation completes.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/monitoring-file-gateway.html#get-notification">Getting
         * notified about file operations</a> in the <i>Storage Gateway User Guide</i>.
         * This operation is Only supported for S3 File Gateways.</p> <p>When this API is
         * called, it only initiates the refresh operation. When the API call completes and
         * returns a success code, it doesn't necessarily mean that the file refresh has
         * completed. You should use the refresh-complete notification to determine that
         * the operation has completed before you check for new files on the gateway file
         * share. You can subscribe to be notified through a CloudWatch event when your
         * <code>RefreshCache</code> operation completes.</p> <p>Throttle limit: This API
         * is asynchronous, so the gateway will accept no more than two refreshes at any
         * time. We recommend using the refresh-complete CloudWatch event notification
         * before issuing additional requests. For more information, see <a
         * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/monitoring-file-gateway.html#get-notification">Getting
         * notified about file operations</a> in the <i>Storage Gateway User Guide</i>.</p>
         *  <ul> <li> <p>Wait at least 60 seconds between consecutive
         * RefreshCache API requests.</p> </li> <li> <p>RefreshCache does not evict cache
         * entries if invoked consecutively within 60 seconds of a previous RefreshCache
         * request.</p> </li> <li> <p>If you invoke the RefreshCache API when two requests
         * are already being processed, any new request will cause an
         * <code>InvalidGatewayRequestException</code> error because too many requests were
         * sent to the server.</p> </li> </ul>   <p>The S3 bucket name
         * does not need to be included when entering the list of folders in the FolderList
         * parameter.</p>  <p>For more information, see <a
         * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/monitoring-file-gateway.html#get-notification">Getting
         * notified about file operations</a> in the <i>Storage Gateway User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/RefreshCache">AWS
         * API Reference</a></p>
         */
        virtual Model::RefreshCacheOutcome RefreshCache(const Model::RefreshCacheRequest& request) const;

        /**
         * A Callable wrapper for RefreshCache that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RefreshCacheOutcomeCallable RefreshCacheCallable(const Model::RefreshCacheRequest& request) const;

        /**
         * An Async wrapper for RefreshCache that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RefreshCacheAsync(const Model::RefreshCacheRequest& request, const RefreshCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes one or more tags from the specified resource. This operation is
         * supported in storage gateways of all types.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/RemoveTagsFromResource">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveTagsFromResourceOutcome RemoveTagsFromResource(const Model::RemoveTagsFromResourceRequest& request) const;

        /**
         * A Callable wrapper for RemoveTagsFromResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveTagsFromResourceOutcomeCallable RemoveTagsFromResourceCallable(const Model::RemoveTagsFromResourceRequest& request) const;

        /**
         * An Async wrapper for RemoveTagsFromResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveTagsFromResourceAsync(const Model::RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Resets all cache disks that have encountered an error and makes the disks
         * available for reconfiguration as cache storage. If your cache disk encounters an
         * error, the gateway prevents read and write operations on virtual tapes in the
         * gateway. For example, an error can occur when a disk is corrupted or removed
         * from the gateway. When a cache is reset, the gateway loses its cache storage. At
         * this point, you can reconfigure the disks as cache disks. This operation is only
         * supported in the cached volume and tape types.</p>  <p>If the cache
         * disk you are resetting contains data that has not been uploaded to Amazon S3
         * yet, that data can be lost. After you reset cache disks, there will be no
         * configured cache disks left in the gateway, so you must configure at least one
         * new cache disk for your gateway to function properly.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/ResetCache">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetCacheOutcome ResetCache(const Model::ResetCacheRequest& request) const;

        /**
         * A Callable wrapper for ResetCache that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetCacheOutcomeCallable ResetCacheCallable(const Model::ResetCacheRequest& request) const;

        /**
         * An Async wrapper for ResetCache that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetCacheAsync(const Model::ResetCacheRequest& request, const ResetCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves an archived virtual tape from the virtual tape shelf (VTS) to a
         * tape gateway. Virtual tapes archived in the VTS are not associated with any
         * gateway. However after a tape is retrieved, it is associated with a gateway,
         * even though it is also listed in the VTS, that is, archive. This operation is
         * only supported in the tape gateway type.</p> <p>Once a tape is successfully
         * retrieved to a gateway, it cannot be retrieved again to another gateway. You
         * must archive the tape again before you can retrieve it to another gateway. This
         * operation is only supported in the tape gateway type.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/RetrieveTapeArchive">AWS
         * API Reference</a></p>
         */
        virtual Model::RetrieveTapeArchiveOutcome RetrieveTapeArchive(const Model::RetrieveTapeArchiveRequest& request) const;

        /**
         * A Callable wrapper for RetrieveTapeArchive that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RetrieveTapeArchiveOutcomeCallable RetrieveTapeArchiveCallable(const Model::RetrieveTapeArchiveRequest& request) const;

        /**
         * An Async wrapper for RetrieveTapeArchive that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RetrieveTapeArchiveAsync(const Model::RetrieveTapeArchiveRequest& request, const RetrieveTapeArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the recovery point for the specified virtual tape. This operation
         * is only supported in the tape gateway type.</p> <p>A recovery point is a point
         * in time view of a virtual tape at which all the data on the tape is consistent.
         * If your gateway crashes, virtual tapes that have recovery points can be
         * recovered to a new gateway.</p>  <p>The virtual tape can be retrieved to
         * only one gateway. The retrieved tape is read-only. The virtual tape can be
         * retrieved to only a tape gateway. There is no charge for retrieving recovery
         * points.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/RetrieveTapeRecoveryPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::RetrieveTapeRecoveryPointOutcome RetrieveTapeRecoveryPoint(const Model::RetrieveTapeRecoveryPointRequest& request) const;

        /**
         * A Callable wrapper for RetrieveTapeRecoveryPoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RetrieveTapeRecoveryPointOutcomeCallable RetrieveTapeRecoveryPointCallable(const Model::RetrieveTapeRecoveryPointRequest& request) const;

        /**
         * An Async wrapper for RetrieveTapeRecoveryPoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RetrieveTapeRecoveryPointAsync(const Model::RetrieveTapeRecoveryPointRequest& request, const RetrieveTapeRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the password for your VM local console. When you log in to the local
         * console for the first time, you log in to the VM with the default credentials.
         * We recommend that you set a new password. You don't need to know the default
         * password to set a new password.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/SetLocalConsolePassword">AWS
         * API Reference</a></p>
         */
        virtual Model::SetLocalConsolePasswordOutcome SetLocalConsolePassword(const Model::SetLocalConsolePasswordRequest& request) const;

        /**
         * A Callable wrapper for SetLocalConsolePassword that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetLocalConsolePasswordOutcomeCallable SetLocalConsolePasswordCallable(const Model::SetLocalConsolePasswordRequest& request) const;

        /**
         * An Async wrapper for SetLocalConsolePassword that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetLocalConsolePasswordAsync(const Model::SetLocalConsolePasswordRequest& request, const SetLocalConsolePasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the password for the guest user <code>smbguest</code>. The
         * <code>smbguest</code> user is the user when the authentication method for the
         * file share is set to <code>GuestAccess</code>. This operation only supported for
         * S3 File Gateways</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/SetSMBGuestPassword">AWS
         * API Reference</a></p>
         */
        virtual Model::SetSMBGuestPasswordOutcome SetSMBGuestPassword(const Model::SetSMBGuestPasswordRequest& request) const;

        /**
         * A Callable wrapper for SetSMBGuestPassword that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetSMBGuestPasswordOutcomeCallable SetSMBGuestPasswordCallable(const Model::SetSMBGuestPasswordRequest& request) const;

        /**
         * An Async wrapper for SetSMBGuestPassword that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetSMBGuestPasswordAsync(const Model::SetSMBGuestPasswordRequest& request, const SetSMBGuestPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Shuts down a gateway. To specify which gateway to shut down, use the Amazon
         * Resource Name (ARN) of the gateway in the body of your request.</p> <p>The
         * operation shuts down the gateway service component running in the gateway's
         * virtual machine (VM) and not the host VM.</p>  <p>If you want to shut down
         * the VM, it is recommended that you first shut down the gateway component in the
         * VM to avoid unpredictable conditions.</p>  <p>After the gateway is
         * shutdown, you cannot call any other API except <a>StartGateway</a>,
         * <a>DescribeGatewayInformation</a>, and <a>ListGateways</a>. For more
         * information, see <a>ActivateGateway</a>. Your applications cannot read from or
         * write to the gateway's storage volumes, and there are no snapshots taken.</p>
         *  <p>When you make a shutdown request, you will get a <code>200 OK</code>
         * success response immediately. However, it might take some time for the gateway
         * to shut down. You can call the <a>DescribeGatewayInformation</a> API to check
         * the status. For more information, see <a>ActivateGateway</a>.</p>  <p>If
         * do not intend to use the gateway again, you must delete the gateway (using
         * <a>DeleteGateway</a>) to no longer pay software charges associated with the
         * gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/ShutdownGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::ShutdownGatewayOutcome ShutdownGateway(const Model::ShutdownGatewayRequest& request) const;

        /**
         * A Callable wrapper for ShutdownGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ShutdownGatewayOutcomeCallable ShutdownGatewayCallable(const Model::ShutdownGatewayRequest& request) const;

        /**
         * An Async wrapper for ShutdownGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ShutdownGatewayAsync(const Model::ShutdownGatewayRequest& request, const ShutdownGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Start a test that verifies that the specified gateway is configured for High
         * Availability monitoring in your host environment. This request only initiates
         * the test and that a successful response only indicates that the test was
         * started. It doesn't indicate that the test passed. For the status of the test,
         * invoke the <code>DescribeAvailabilityMonitorTest</code> API.</p> 
         * <p>Starting this test will cause your gateway to go offline for a brief
         * period.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/StartAvailabilityMonitorTest">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAvailabilityMonitorTestOutcome StartAvailabilityMonitorTest(const Model::StartAvailabilityMonitorTestRequest& request) const;

        /**
         * A Callable wrapper for StartAvailabilityMonitorTest that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartAvailabilityMonitorTestOutcomeCallable StartAvailabilityMonitorTestCallable(const Model::StartAvailabilityMonitorTestRequest& request) const;

        /**
         * An Async wrapper for StartAvailabilityMonitorTest that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartAvailabilityMonitorTestAsync(const Model::StartAvailabilityMonitorTestRequest& request, const StartAvailabilityMonitorTestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a gateway that you previously shut down (see <a>ShutdownGateway</a>).
         * After the gateway starts, you can then make other API calls, your applications
         * can read from or write to the gateway's storage volumes and you will be able to
         * take snapshot backups.</p>  <p>When you make a request, you will get a 200
         * OK success response immediately. However, it might take some time for the
         * gateway to be ready. You should call <a>DescribeGatewayInformation</a> and check
         * the status before making any additional API calls. For more information, see
         * <a>ActivateGateway</a>.</p>  <p>To specify which gateway to start, use
         * the Amazon Resource Name (ARN) of the gateway in your request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/StartGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::StartGatewayOutcome StartGateway(const Model::StartGatewayRequest& request) const;

        /**
         * A Callable wrapper for StartGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartGatewayOutcomeCallable StartGatewayCallable(const Model::StartGatewayRequest& request) const;

        /**
         * An Async wrapper for StartGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartGatewayAsync(const Model::StartGatewayRequest& request, const StartGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the automatic tape creation policy of a gateway. Use this to update
         * the policy with a new set of automatic tape creation rules. This is only
         * supported for tape gateways.</p> <p>By default, there is no automatic tape
         * creation policy.</p>  <p>A gateway can have only one automatic tape
         * creation policy.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/UpdateAutomaticTapeCreationPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAutomaticTapeCreationPolicyOutcome UpdateAutomaticTapeCreationPolicy(const Model::UpdateAutomaticTapeCreationPolicyRequest& request) const;

        /**
         * A Callable wrapper for UpdateAutomaticTapeCreationPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAutomaticTapeCreationPolicyOutcomeCallable UpdateAutomaticTapeCreationPolicyCallable(const Model::UpdateAutomaticTapeCreationPolicyRequest& request) const;

        /**
         * An Async wrapper for UpdateAutomaticTapeCreationPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAutomaticTapeCreationPolicyAsync(const Model::UpdateAutomaticTapeCreationPolicyRequest& request, const UpdateAutomaticTapeCreationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the bandwidth rate limits of a gateway. You can update both the
         * upload and download bandwidth rate limit or specify only one of the two. If you
         * don't set a bandwidth rate limit, the existing rate limit remains. This
         * operation is supported only for the stored volume, cached volume, and tape
         * gateway types. To update bandwidth rate limits for S3 file gateways, use
         * <a>UpdateBandwidthRateLimitSchedule</a>.</p> <p>By default, a gateway's
         * bandwidth rate limits are not set. If you don't set any limit, the gateway does
         * not have any limitations on its bandwidth usage and could potentially use the
         * maximum available bandwidth.</p> <p>To specify which gateway to update, use the
         * Amazon Resource Name (ARN) of the gateway in your request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/UpdateBandwidthRateLimit">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBandwidthRateLimitOutcome UpdateBandwidthRateLimit(const Model::UpdateBandwidthRateLimitRequest& request) const;

        /**
         * A Callable wrapper for UpdateBandwidthRateLimit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBandwidthRateLimitOutcomeCallable UpdateBandwidthRateLimitCallable(const Model::UpdateBandwidthRateLimitRequest& request) const;

        /**
         * An Async wrapper for UpdateBandwidthRateLimit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBandwidthRateLimitAsync(const Model::UpdateBandwidthRateLimitRequest& request, const UpdateBandwidthRateLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Updates the bandwidth rate limit schedule for a specified gateway. By
         * default, gateways do not have bandwidth rate limit schedules, which means no
         * bandwidth rate limiting is in effect. Use this to initiate or update a gateway's
         * bandwidth rate limit schedule. This operation is supported only for volume, tape
         * and S3 file gateways. FSx file gateways do not support bandwidth rate
         * limits.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/UpdateBandwidthRateLimitSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBandwidthRateLimitScheduleOutcome UpdateBandwidthRateLimitSchedule(const Model::UpdateBandwidthRateLimitScheduleRequest& request) const;

        /**
         * A Callable wrapper for UpdateBandwidthRateLimitSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBandwidthRateLimitScheduleOutcomeCallable UpdateBandwidthRateLimitScheduleCallable(const Model::UpdateBandwidthRateLimitScheduleRequest& request) const;

        /**
         * An Async wrapper for UpdateBandwidthRateLimitSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBandwidthRateLimitScheduleAsync(const Model::UpdateBandwidthRateLimitScheduleRequest& request, const UpdateBandwidthRateLimitScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the Challenge-Handshake Authentication Protocol (CHAP) credentials
         * for a specified iSCSI target. By default, a gateway does not have CHAP enabled;
         * however, for added security, you might use it. This operation is supported in
         * the volume and tape gateway types.</p>  <p>When you update CHAP
         * credentials, all existing connections on the target are closed and initiators
         * must reconnect with the new credentials.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/UpdateChapCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChapCredentialsOutcome UpdateChapCredentials(const Model::UpdateChapCredentialsRequest& request) const;

        /**
         * A Callable wrapper for UpdateChapCredentials that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateChapCredentialsOutcomeCallable UpdateChapCredentialsCallable(const Model::UpdateChapCredentialsRequest& request) const;

        /**
         * An Async wrapper for UpdateChapCredentials that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateChapCredentialsAsync(const Model::UpdateChapCredentialsRequest& request, const UpdateChapCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a file system association. This operation is only supported in the
         * FSx File Gateways.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/UpdateFileSystemAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFileSystemAssociationOutcome UpdateFileSystemAssociation(const Model::UpdateFileSystemAssociationRequest& request) const;

        /**
         * A Callable wrapper for UpdateFileSystemAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFileSystemAssociationOutcomeCallable UpdateFileSystemAssociationCallable(const Model::UpdateFileSystemAssociationRequest& request) const;

        /**
         * An Async wrapper for UpdateFileSystemAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFileSystemAssociationAsync(const Model::UpdateFileSystemAssociationRequest& request, const UpdateFileSystemAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a gateway's metadata, which includes the gateway's name and time
         * zone. To specify which gateway to update, use the Amazon Resource Name (ARN) of
         * the gateway in your request.</p>  <p>For gateways activated after
         * September 2, 2015, the gateway's ARN contains the gateway ID rather than the
         * gateway name. However, changing the name of the gateway has no effect on the
         * gateway's ARN.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/UpdateGatewayInformation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGatewayInformationOutcome UpdateGatewayInformation(const Model::UpdateGatewayInformationRequest& request) const;

        /**
         * A Callable wrapper for UpdateGatewayInformation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGatewayInformationOutcomeCallable UpdateGatewayInformationCallable(const Model::UpdateGatewayInformationRequest& request) const;

        /**
         * An Async wrapper for UpdateGatewayInformation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGatewayInformationAsync(const Model::UpdateGatewayInformationRequest& request, const UpdateGatewayInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the gateway virtual machine (VM) software. The request immediately
         * triggers the software update.</p>  <p>When you make this request, you get
         * a <code>200 OK</code> success response immediately. However, it might take some
         * time for the update to complete. You can call <a>DescribeGatewayInformation</a>
         * to verify the gateway is in the <code>STATE_RUNNING</code> state.</p> 
         *  <p>A software update forces a system restart of your gateway. You
         * can minimize the chance of any disruption to your applications by increasing
         * your iSCSI Initiators' timeouts. For more information about increasing iSCSI
         * Initiator timeouts for Windows and Linux, see <a
         * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/ConfiguringiSCSIClientInitiatorWindowsClient.html#CustomizeWindowsiSCSISettings">Customizing
         * your Windows iSCSI settings</a> and <a
         * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/ConfiguringiSCSIClientInitiatorRedHatClient.html#CustomizeLinuxiSCSISettings">Customizing
         * your Linux iSCSI settings</a>, respectively.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/UpdateGatewaySoftwareNow">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGatewaySoftwareNowOutcome UpdateGatewaySoftwareNow(const Model::UpdateGatewaySoftwareNowRequest& request) const;

        /**
         * A Callable wrapper for UpdateGatewaySoftwareNow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGatewaySoftwareNowOutcomeCallable UpdateGatewaySoftwareNowCallable(const Model::UpdateGatewaySoftwareNowRequest& request) const;

        /**
         * An Async wrapper for UpdateGatewaySoftwareNow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGatewaySoftwareNowAsync(const Model::UpdateGatewaySoftwareNowRequest& request, const UpdateGatewaySoftwareNowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a gateway's weekly maintenance start time information, including day
         * and time of the week. The maintenance time is the time in your gateway's time
         * zone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/UpdateMaintenanceStartTime">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMaintenanceStartTimeOutcome UpdateMaintenanceStartTime(const Model::UpdateMaintenanceStartTimeRequest& request) const;

        /**
         * A Callable wrapper for UpdateMaintenanceStartTime that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMaintenanceStartTimeOutcomeCallable UpdateMaintenanceStartTimeCallable(const Model::UpdateMaintenanceStartTimeRequest& request) const;

        /**
         * An Async wrapper for UpdateMaintenanceStartTime that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMaintenanceStartTimeAsync(const Model::UpdateMaintenanceStartTimeRequest& request, const UpdateMaintenanceStartTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a Network File System (NFS) file share. This operation is only
         * supported in S3 File Gateways.</p>  <p>To leave a file share field
         * unchanged, set the corresponding input field to null.</p>  <p>Updates the
         * following file share settings:</p> <ul> <li> <p>Default storage class for your
         * S3 bucket</p> </li> <li> <p>Metadata defaults for your S3 bucket</p> </li> <li>
         * <p>Allowed NFS clients for your file share</p> </li> <li> <p>Squash settings</p>
         * </li> <li> <p>Write status of your file share</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/UpdateNFSFileShare">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNFSFileShareOutcome UpdateNFSFileShare(const Model::UpdateNFSFileShareRequest& request) const;

        /**
         * A Callable wrapper for UpdateNFSFileShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateNFSFileShareOutcomeCallable UpdateNFSFileShareCallable(const Model::UpdateNFSFileShareRequest& request) const;

        /**
         * An Async wrapper for UpdateNFSFileShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateNFSFileShareAsync(const Model::UpdateNFSFileShareRequest& request, const UpdateNFSFileShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a Server Message Block (SMB) file share. This operation is only
         * supported for S3 File Gateways.</p>  <p>To leave a file share field
         * unchanged, set the corresponding input field to null.</p>  
         * <p>File gateways require Security Token Service (Amazon Web Services STS) to be
         * activated to enable you to create a file share. Make sure that Amazon Web
         * Services STS is activated in the Amazon Web Services Region you are creating
         * your file gateway in. If Amazon Web Services STS is not activated in this Amazon
         * Web Services Region, activate it. For information about how to activate Amazon
         * Web Services STS, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_enable-regions.html">Activating
         * and deactivating Amazon Web Services STS in an Amazon Web Services Region</a> in
         * the <i>Identity and Access Management User Guide</i>.</p> <p>File gateways don't
         * support creating hard or symbolic links on a file share.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/UpdateSMBFileShare">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSMBFileShareOutcome UpdateSMBFileShare(const Model::UpdateSMBFileShareRequest& request) const;

        /**
         * A Callable wrapper for UpdateSMBFileShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSMBFileShareOutcomeCallable UpdateSMBFileShareCallable(const Model::UpdateSMBFileShareRequest& request) const;

        /**
         * An Async wrapper for UpdateSMBFileShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSMBFileShareAsync(const Model::UpdateSMBFileShareRequest& request, const UpdateSMBFileShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Controls whether the shares on an S3 File Gateway are visible in a net view
         * or browse list. The operation is only supported for S3 File
         * Gateways.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/UpdateSMBFileShareVisibility">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSMBFileShareVisibilityOutcome UpdateSMBFileShareVisibility(const Model::UpdateSMBFileShareVisibilityRequest& request) const;

        /**
         * A Callable wrapper for UpdateSMBFileShareVisibility that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSMBFileShareVisibilityOutcomeCallable UpdateSMBFileShareVisibilityCallable(const Model::UpdateSMBFileShareVisibilityRequest& request) const;

        /**
         * An Async wrapper for UpdateSMBFileShareVisibility that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSMBFileShareVisibilityAsync(const Model::UpdateSMBFileShareVisibilityRequest& request, const UpdateSMBFileShareVisibilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the list of Active Directory users and groups that have special
         * permissions for SMB file shares on the gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/UpdateSMBLocalGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSMBLocalGroupsOutcome UpdateSMBLocalGroups(const Model::UpdateSMBLocalGroupsRequest& request) const;

        /**
         * A Callable wrapper for UpdateSMBLocalGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSMBLocalGroupsOutcomeCallable UpdateSMBLocalGroupsCallable(const Model::UpdateSMBLocalGroupsRequest& request) const;

        /**
         * An Async wrapper for UpdateSMBLocalGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSMBLocalGroupsAsync(const Model::UpdateSMBLocalGroupsRequest& request, const UpdateSMBLocalGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the SMB security strategy on a file gateway. This action is only
         * supported in file gateways.</p>  <p>This API is called Security level in
         * the User Guide.</p> <p>A higher security level can affect performance of the
         * gateway.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/UpdateSMBSecurityStrategy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSMBSecurityStrategyOutcome UpdateSMBSecurityStrategy(const Model::UpdateSMBSecurityStrategyRequest& request) const;

        /**
         * A Callable wrapper for UpdateSMBSecurityStrategy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSMBSecurityStrategyOutcomeCallable UpdateSMBSecurityStrategyCallable(const Model::UpdateSMBSecurityStrategyRequest& request) const;

        /**
         * An Async wrapper for UpdateSMBSecurityStrategy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSMBSecurityStrategyAsync(const Model::UpdateSMBSecurityStrategyRequest& request, const UpdateSMBSecurityStrategyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a snapshot schedule configured for a gateway volume. This operation
         * is only supported in the cached volume and stored volume gateway types.</p>
         * <p>The default snapshot schedule for volume is once every 24 hours, starting at
         * the creation time of the volume. You can use this API to change the snapshot
         * schedule configured for the volume.</p> <p>In the request you must identify the
         * gateway volume whose snapshot schedule you want to update, and the schedule
         * information, including when you want the snapshot to begin on a day and the
         * frequency (in hours) of snapshots.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/UpdateSnapshotSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSnapshotScheduleOutcome UpdateSnapshotSchedule(const Model::UpdateSnapshotScheduleRequest& request) const;

        /**
         * A Callable wrapper for UpdateSnapshotSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSnapshotScheduleOutcomeCallable UpdateSnapshotScheduleCallable(const Model::UpdateSnapshotScheduleRequest& request) const;

        /**
         * An Async wrapper for UpdateSnapshotSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSnapshotScheduleAsync(const Model::UpdateSnapshotScheduleRequest& request, const UpdateSnapshotScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the type of medium changer in a tape gateway. When you activate a
         * tape gateway, you select a medium changer type for the tape gateway. This
         * operation enables you to select a different type of medium changer after a tape
         * gateway is activated. This operation is only supported in the tape gateway
         * type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/UpdateVTLDeviceType">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVTLDeviceTypeOutcome UpdateVTLDeviceType(const Model::UpdateVTLDeviceTypeRequest& request) const;

        /**
         * A Callable wrapper for UpdateVTLDeviceType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateVTLDeviceTypeOutcomeCallable UpdateVTLDeviceTypeCallable(const Model::UpdateVTLDeviceTypeRequest& request) const;

        /**
         * An Async wrapper for UpdateVTLDeviceType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateVTLDeviceTypeAsync(const Model::UpdateVTLDeviceTypeRequest& request, const UpdateVTLDeviceTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<StorageGatewayEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<StorageGatewayClient>;
      void init(const StorageGatewayClientConfiguration& clientConfiguration);

      StorageGatewayClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<StorageGatewayEndpointProviderBase> m_endpointProvider;
  };

} // namespace StorageGateway
} // namespace Aws
