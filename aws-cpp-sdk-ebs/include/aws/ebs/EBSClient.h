/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ebs/EBS_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ebs/EBSServiceClientModel.h>

namespace Aws
{
namespace EBS
{
  /**
   * <p>You can use the Amazon Elastic Block Store (Amazon EBS) direct APIs to create
   * Amazon EBS snapshots, write data directly to your snapshots, read data on your
   * snapshots, and identify the differences or changes between two snapshots. If
   * you’re an independent software vendor (ISV) who offers backup services for
   * Amazon EBS, the EBS direct APIs make it more efficient and cost-effective to
   * track incremental changes on your Amazon EBS volumes through snapshots. This can
   * be done without having to create new volumes from snapshots, and then use Amazon
   * Elastic Compute Cloud (Amazon EC2) instances to compare the differences.</p>
   * <p>You can create incremental snapshots directly from data on-premises into
   * volumes and the cloud to use for quick disaster recovery. With the ability to
   * write and read snapshots, you can write your on-premises data to an snapshot
   * during a disaster. Then after recovery, you can restore it back to Amazon Web
   * Services or on-premises from the snapshot. You no longer need to build and
   * maintain complex mechanisms to copy data to and from Amazon EBS.</p> <p>This API
   * reference provides detailed information about the actions, data types,
   * parameters, and errors of the EBS direct APIs. For more information about the
   * elements that make up the EBS direct APIs, and examples of how to use them
   * effectively, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-accessing-snapshot.html">Accessing
   * the Contents of an Amazon EBS Snapshot</a> in the <i>Amazon Elastic Compute
   * Cloud User Guide</i>. For more information about the supported Amazon Web
   * Services Regions, endpoints, and service quotas for the EBS direct APIs, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/ebs-service.html">Amazon
   * Elastic Block Store Endpoints and Quotas</a> in the <i>Amazon Web Services
   * General Reference</i>.</p>
   */
  class AWS_EBS_API EBSClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<EBSClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EBSClient(const Aws::EBS::EBSClientConfiguration& clientConfiguration = Aws::EBS::EBSClientConfiguration(),
                  std::shared_ptr<EBSEndpointProviderBase> endpointProvider = Aws::MakeShared<EBSEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EBSClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<EBSEndpointProviderBase> endpointProvider = Aws::MakeShared<EBSEndpointProvider>(ALLOCATION_TAG),
                  const Aws::EBS::EBSClientConfiguration& clientConfiguration = Aws::EBS::EBSClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        EBSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<EBSEndpointProviderBase> endpointProvider = Aws::MakeShared<EBSEndpointProvider>(ALLOCATION_TAG),
                  const Aws::EBS::EBSClientConfiguration& clientConfiguration = Aws::EBS::EBSClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EBSClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EBSClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        EBSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~EBSClient();

        /**
         * <p>Seals and completes the snapshot after all of the required blocks of data
         * have been written to it. Completing the snapshot changes the status to
         * <code>completed</code>. You cannot write new blocks to a snapshot after it has
         * been completed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ebs-2019-11-02/CompleteSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CompleteSnapshotOutcome CompleteSnapshot(const Model::CompleteSnapshotRequest& request) const;

        /**
         * A Callable wrapper for CompleteSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CompleteSnapshotOutcomeCallable CompleteSnapshotCallable(const Model::CompleteSnapshotRequest& request) const;

        /**
         * An Async wrapper for CompleteSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CompleteSnapshotAsync(const Model::CompleteSnapshotRequest& request, const CompleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the data in a block in an Amazon Elastic Block Store
         * snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ebs-2019-11-02/GetSnapshotBlock">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSnapshotBlockOutcome GetSnapshotBlock(const Model::GetSnapshotBlockRequest& request) const;

        /**
         * A Callable wrapper for GetSnapshotBlock that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSnapshotBlockOutcomeCallable GetSnapshotBlockCallable(const Model::GetSnapshotBlockRequest& request) const;

        /**
         * An Async wrapper for GetSnapshotBlock that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSnapshotBlockAsync(const Model::GetSnapshotBlockRequest& request, const GetSnapshotBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the blocks that are different between two Amazon
         * Elastic Block Store snapshots of the same volume/snapshot lineage.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ebs-2019-11-02/ListChangedBlocks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChangedBlocksOutcome ListChangedBlocks(const Model::ListChangedBlocksRequest& request) const;

        /**
         * A Callable wrapper for ListChangedBlocks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListChangedBlocksOutcomeCallable ListChangedBlocksCallable(const Model::ListChangedBlocksRequest& request) const;

        /**
         * An Async wrapper for ListChangedBlocks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChangedBlocksAsync(const Model::ListChangedBlocksRequest& request, const ListChangedBlocksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the blocks in an Amazon Elastic Block Store
         * snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ebs-2019-11-02/ListSnapshotBlocks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSnapshotBlocksOutcome ListSnapshotBlocks(const Model::ListSnapshotBlocksRequest& request) const;

        /**
         * A Callable wrapper for ListSnapshotBlocks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSnapshotBlocksOutcomeCallable ListSnapshotBlocksCallable(const Model::ListSnapshotBlocksRequest& request) const;

        /**
         * An Async wrapper for ListSnapshotBlocks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSnapshotBlocksAsync(const Model::ListSnapshotBlocksRequest& request, const ListSnapshotBlocksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Writes a block of data to a snapshot. If the specified block contains data,
         * the existing data is overwritten. The target snapshot must be in the
         * <code>pending</code> state.</p> <p>Data written to a snapshot must be aligned
         * with 512-KiB sectors.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ebs-2019-11-02/PutSnapshotBlock">AWS
         * API Reference</a></p>
         */
        virtual Model::PutSnapshotBlockOutcome PutSnapshotBlock(const Model::PutSnapshotBlockRequest& request) const;

        /**
         * A Callable wrapper for PutSnapshotBlock that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutSnapshotBlockOutcomeCallable PutSnapshotBlockCallable(const Model::PutSnapshotBlockRequest& request) const;

        /**
         * An Async wrapper for PutSnapshotBlock that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutSnapshotBlockAsync(const Model::PutSnapshotBlockRequest& request, const PutSnapshotBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new Amazon EBS snapshot. The new snapshot enters the
         * <code>pending</code> state after the request completes. </p> <p>After creating
         * the snapshot, use <a
         * href="https://docs.aws.amazon.com/ebs/latest/APIReference/API_PutSnapshotBlock.html">
         * PutSnapshotBlock</a> to write blocks of data to the snapshot.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ebs-2019-11-02/StartSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSnapshotOutcome StartSnapshot(const Model::StartSnapshotRequest& request) const;

        /**
         * A Callable wrapper for StartSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartSnapshotOutcomeCallable StartSnapshotCallable(const Model::StartSnapshotRequest& request) const;

        /**
         * An Async wrapper for StartSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartSnapshotAsync(const Model::StartSnapshotRequest& request, const StartSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<EBSEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<EBSClient>;
      void init(const EBSClientConfiguration& clientConfiguration);

      EBSClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<EBSEndpointProviderBase> m_endpointProvider;
  };

} // namespace EBS
} // namespace Aws
