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
#include <aws/ebs/EBS_EXPORTS.h>
#include <aws/ebs/EBSErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ebs/model/GetSnapshotBlockResult.h>
#include <aws/ebs/model/ListChangedBlocksResult.h>
#include <aws/ebs/model/ListSnapshotBlocksResult.h>
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

namespace EBS
{

namespace Model
{
        class GetSnapshotBlockRequest;
        class ListChangedBlocksRequest;
        class ListSnapshotBlocksRequest;

        typedef Aws::Utils::Outcome<GetSnapshotBlockResult, Aws::Client::AWSError<EBSErrors>> GetSnapshotBlockOutcome;
        typedef Aws::Utils::Outcome<ListChangedBlocksResult, Aws::Client::AWSError<EBSErrors>> ListChangedBlocksOutcome;
        typedef Aws::Utils::Outcome<ListSnapshotBlocksResult, Aws::Client::AWSError<EBSErrors>> ListSnapshotBlocksOutcome;

        typedef std::future<GetSnapshotBlockOutcome> GetSnapshotBlockOutcomeCallable;
        typedef std::future<ListChangedBlocksOutcome> ListChangedBlocksOutcomeCallable;
        typedef std::future<ListSnapshotBlocksOutcome> ListSnapshotBlocksOutcomeCallable;
} // namespace Model

  class EBSClient;

    typedef std::function<void(const EBSClient*, const Model::GetSnapshotBlockRequest&, Model::GetSnapshotBlockOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSnapshotBlockResponseReceivedHandler;
    typedef std::function<void(const EBSClient*, const Model::ListChangedBlocksRequest&, const Model::ListChangedBlocksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChangedBlocksResponseReceivedHandler;
    typedef std::function<void(const EBSClient*, const Model::ListSnapshotBlocksRequest&, const Model::ListSnapshotBlocksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSnapshotBlocksResponseReceivedHandler;

  /**
   * <p>You can use the Amazon Elastic Block Store (EBS) direct APIs to directly read
   * the data on your EBS snapshots, and identify the difference between two
   * snapshots. You can view the details of blocks in an EBS snapshot, compare the
   * block difference between two snapshots, and directly access the data in a
   * snapshot. If you’re an independent software vendor (ISV) who offers backup
   * services for EBS, the EBS direct APIs make it easier and more cost-effective to
   * track incremental changes on your EBS volumes via EBS snapshots. This can be
   * done without having to create new volumes from EBS snapshots.</p> <p>This API
   * reference provides detailed information about the actions, data types,
   * parameters, and errors of the EBS direct APIs. For more information about the
   * elements that make up the EBS direct APIs, and examples of how to use them
   * effectively, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-accessing-snapshot.html">Accessing
   * the Contents of an EBS Snapshot</a> in the <i>Amazon Elastic Compute Cloud User
   * Guide</i>. For more information about the supported AWS Regions, endpoints, and
   * service quotas for the EBS direct APIs, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/ebs-service.html">Amazon
   * Elastic Block Store Endpoints and Quotas</a> in the <i>AWS General
   * Reference</i>.</p>
   */
  class AWS_EBS_API EBSClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EBSClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EBSClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        EBSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~EBSClient();

        inline virtual const char* GetServiceClientName() const override { return "EBS"; }


        /**
         * <p>Returns the data in a block in an Amazon Elastic Block Store
         * snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ebs-2019-11-02/GetSnapshotBlock">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSnapshotBlockOutcome GetSnapshotBlock(const Model::GetSnapshotBlockRequest& request) const;

        /**
         * <p>Returns the data in a block in an Amazon Elastic Block Store
         * snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ebs-2019-11-02/GetSnapshotBlock">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSnapshotBlockOutcomeCallable GetSnapshotBlockCallable(const Model::GetSnapshotBlockRequest& request) const;

        /**
         * <p>Returns the data in a block in an Amazon Elastic Block Store
         * snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ebs-2019-11-02/GetSnapshotBlock">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSnapshotBlockAsync(const Model::GetSnapshotBlockRequest& request, const GetSnapshotBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the block indexes and block tokens for blocks that are different
         * between two Amazon Elastic Block Store snapshots of the same volume/snapshot
         * lineage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ebs-2019-11-02/ListChangedBlocks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChangedBlocksOutcome ListChangedBlocks(const Model::ListChangedBlocksRequest& request) const;

        /**
         * <p>Returns the block indexes and block tokens for blocks that are different
         * between two Amazon Elastic Block Store snapshots of the same volume/snapshot
         * lineage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ebs-2019-11-02/ListChangedBlocks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListChangedBlocksOutcomeCallable ListChangedBlocksCallable(const Model::ListChangedBlocksRequest& request) const;

        /**
         * <p>Returns the block indexes and block tokens for blocks that are different
         * between two Amazon Elastic Block Store snapshots of the same volume/snapshot
         * lineage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ebs-2019-11-02/ListChangedBlocks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChangedBlocksAsync(const Model::ListChangedBlocksRequest& request, const ListChangedBlocksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the block indexes and block tokens for blocks in an Amazon Elastic
         * Block Store snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ebs-2019-11-02/ListSnapshotBlocks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSnapshotBlocksOutcome ListSnapshotBlocks(const Model::ListSnapshotBlocksRequest& request) const;

        /**
         * <p>Returns the block indexes and block tokens for blocks in an Amazon Elastic
         * Block Store snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ebs-2019-11-02/ListSnapshotBlocks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSnapshotBlocksOutcomeCallable ListSnapshotBlocksCallable(const Model::ListSnapshotBlocksRequest& request) const;

        /**
         * <p>Returns the block indexes and block tokens for blocks in an Amazon Elastic
         * Block Store snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ebs-2019-11-02/ListSnapshotBlocks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSnapshotBlocksAsync(const Model::ListSnapshotBlocksRequest& request, const ListSnapshotBlocksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void GetSnapshotBlockAsyncHelper(const Model::GetSnapshotBlockRequest& request, const GetSnapshotBlockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListChangedBlocksAsyncHelper(const Model::ListChangedBlocksRequest& request, const ListChangedBlocksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSnapshotBlocksAsyncHelper(const Model::ListSnapshotBlocksRequest& request, const ListSnapshotBlocksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace EBS
} // namespace Aws
