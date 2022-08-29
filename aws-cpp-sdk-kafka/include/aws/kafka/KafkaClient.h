/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/KafkaErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/BatchAssociateScramSecretResult.h>
#include <aws/kafka/model/CreateClusterResult.h>
#include <aws/kafka/model/CreateClusterV2Result.h>
#include <aws/kafka/model/CreateConfigurationResult.h>
#include <aws/kafka/model/DeleteClusterResult.h>
#include <aws/kafka/model/DeleteConfigurationResult.h>
#include <aws/kafka/model/DescribeClusterResult.h>
#include <aws/kafka/model/DescribeClusterV2Result.h>
#include <aws/kafka/model/DescribeClusterOperationResult.h>
#include <aws/kafka/model/DescribeConfigurationResult.h>
#include <aws/kafka/model/DescribeConfigurationRevisionResult.h>
#include <aws/kafka/model/BatchDisassociateScramSecretResult.h>
#include <aws/kafka/model/GetBootstrapBrokersResult.h>
#include <aws/kafka/model/GetCompatibleKafkaVersionsResult.h>
#include <aws/kafka/model/ListClusterOperationsResult.h>
#include <aws/kafka/model/ListClustersResult.h>
#include <aws/kafka/model/ListClustersV2Result.h>
#include <aws/kafka/model/ListConfigurationRevisionsResult.h>
#include <aws/kafka/model/ListConfigurationsResult.h>
#include <aws/kafka/model/ListKafkaVersionsResult.h>
#include <aws/kafka/model/ListNodesResult.h>
#include <aws/kafka/model/ListScramSecretsResult.h>
#include <aws/kafka/model/ListTagsForResourceResult.h>
#include <aws/kafka/model/RebootBrokerResult.h>
#include <aws/kafka/model/UpdateBrokerCountResult.h>
#include <aws/kafka/model/UpdateBrokerTypeResult.h>
#include <aws/kafka/model/UpdateBrokerStorageResult.h>
#include <aws/kafka/model/UpdateConfigurationResult.h>
#include <aws/kafka/model/UpdateConnectivityResult.h>
#include <aws/kafka/model/UpdateClusterConfigurationResult.h>
#include <aws/kafka/model/UpdateClusterKafkaVersionResult.h>
#include <aws/kafka/model/UpdateMonitoringResult.h>
#include <aws/kafka/model/UpdateSecurityResult.h>
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

namespace Kafka
{

namespace Model
{
        class BatchAssociateScramSecretRequest;
        class CreateClusterRequest;
        class CreateClusterV2Request;
        class CreateConfigurationRequest;
        class DeleteClusterRequest;
        class DeleteConfigurationRequest;
        class DescribeClusterRequest;
        class DescribeClusterV2Request;
        class DescribeClusterOperationRequest;
        class DescribeConfigurationRequest;
        class DescribeConfigurationRevisionRequest;
        class BatchDisassociateScramSecretRequest;
        class GetBootstrapBrokersRequest;
        class GetCompatibleKafkaVersionsRequest;
        class ListClusterOperationsRequest;
        class ListClustersRequest;
        class ListClustersV2Request;
        class ListConfigurationRevisionsRequest;
        class ListConfigurationsRequest;
        class ListKafkaVersionsRequest;
        class ListNodesRequest;
        class ListScramSecretsRequest;
        class ListTagsForResourceRequest;
        class RebootBrokerRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateBrokerCountRequest;
        class UpdateBrokerTypeRequest;
        class UpdateBrokerStorageRequest;
        class UpdateConfigurationRequest;
        class UpdateConnectivityRequest;
        class UpdateClusterConfigurationRequest;
        class UpdateClusterKafkaVersionRequest;
        class UpdateMonitoringRequest;
        class UpdateSecurityRequest;

        typedef Aws::Utils::Outcome<BatchAssociateScramSecretResult, KafkaError> BatchAssociateScramSecretOutcome;
        typedef Aws::Utils::Outcome<CreateClusterResult, KafkaError> CreateClusterOutcome;
        typedef Aws::Utils::Outcome<CreateClusterV2Result, KafkaError> CreateClusterV2Outcome;
        typedef Aws::Utils::Outcome<CreateConfigurationResult, KafkaError> CreateConfigurationOutcome;
        typedef Aws::Utils::Outcome<DeleteClusterResult, KafkaError> DeleteClusterOutcome;
        typedef Aws::Utils::Outcome<DeleteConfigurationResult, KafkaError> DeleteConfigurationOutcome;
        typedef Aws::Utils::Outcome<DescribeClusterResult, KafkaError> DescribeClusterOutcome;
        typedef Aws::Utils::Outcome<DescribeClusterV2Result, KafkaError> DescribeClusterV2Outcome;
        typedef Aws::Utils::Outcome<DescribeClusterOperationResult, KafkaError> DescribeClusterOperationOutcome;
        typedef Aws::Utils::Outcome<DescribeConfigurationResult, KafkaError> DescribeConfigurationOutcome;
        typedef Aws::Utils::Outcome<DescribeConfigurationRevisionResult, KafkaError> DescribeConfigurationRevisionOutcome;
        typedef Aws::Utils::Outcome<BatchDisassociateScramSecretResult, KafkaError> BatchDisassociateScramSecretOutcome;
        typedef Aws::Utils::Outcome<GetBootstrapBrokersResult, KafkaError> GetBootstrapBrokersOutcome;
        typedef Aws::Utils::Outcome<GetCompatibleKafkaVersionsResult, KafkaError> GetCompatibleKafkaVersionsOutcome;
        typedef Aws::Utils::Outcome<ListClusterOperationsResult, KafkaError> ListClusterOperationsOutcome;
        typedef Aws::Utils::Outcome<ListClustersResult, KafkaError> ListClustersOutcome;
        typedef Aws::Utils::Outcome<ListClustersV2Result, KafkaError> ListClustersV2Outcome;
        typedef Aws::Utils::Outcome<ListConfigurationRevisionsResult, KafkaError> ListConfigurationRevisionsOutcome;
        typedef Aws::Utils::Outcome<ListConfigurationsResult, KafkaError> ListConfigurationsOutcome;
        typedef Aws::Utils::Outcome<ListKafkaVersionsResult, KafkaError> ListKafkaVersionsOutcome;
        typedef Aws::Utils::Outcome<ListNodesResult, KafkaError> ListNodesOutcome;
        typedef Aws::Utils::Outcome<ListScramSecretsResult, KafkaError> ListScramSecretsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, KafkaError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<RebootBrokerResult, KafkaError> RebootBrokerOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, KafkaError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, KafkaError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateBrokerCountResult, KafkaError> UpdateBrokerCountOutcome;
        typedef Aws::Utils::Outcome<UpdateBrokerTypeResult, KafkaError> UpdateBrokerTypeOutcome;
        typedef Aws::Utils::Outcome<UpdateBrokerStorageResult, KafkaError> UpdateBrokerStorageOutcome;
        typedef Aws::Utils::Outcome<UpdateConfigurationResult, KafkaError> UpdateConfigurationOutcome;
        typedef Aws::Utils::Outcome<UpdateConnectivityResult, KafkaError> UpdateConnectivityOutcome;
        typedef Aws::Utils::Outcome<UpdateClusterConfigurationResult, KafkaError> UpdateClusterConfigurationOutcome;
        typedef Aws::Utils::Outcome<UpdateClusterKafkaVersionResult, KafkaError> UpdateClusterKafkaVersionOutcome;
        typedef Aws::Utils::Outcome<UpdateMonitoringResult, KafkaError> UpdateMonitoringOutcome;
        typedef Aws::Utils::Outcome<UpdateSecurityResult, KafkaError> UpdateSecurityOutcome;

        typedef std::future<BatchAssociateScramSecretOutcome> BatchAssociateScramSecretOutcomeCallable;
        typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
        typedef std::future<CreateClusterV2Outcome> CreateClusterV2OutcomeCallable;
        typedef std::future<CreateConfigurationOutcome> CreateConfigurationOutcomeCallable;
        typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
        typedef std::future<DeleteConfigurationOutcome> DeleteConfigurationOutcomeCallable;
        typedef std::future<DescribeClusterOutcome> DescribeClusterOutcomeCallable;
        typedef std::future<DescribeClusterV2Outcome> DescribeClusterV2OutcomeCallable;
        typedef std::future<DescribeClusterOperationOutcome> DescribeClusterOperationOutcomeCallable;
        typedef std::future<DescribeConfigurationOutcome> DescribeConfigurationOutcomeCallable;
        typedef std::future<DescribeConfigurationRevisionOutcome> DescribeConfigurationRevisionOutcomeCallable;
        typedef std::future<BatchDisassociateScramSecretOutcome> BatchDisassociateScramSecretOutcomeCallable;
        typedef std::future<GetBootstrapBrokersOutcome> GetBootstrapBrokersOutcomeCallable;
        typedef std::future<GetCompatibleKafkaVersionsOutcome> GetCompatibleKafkaVersionsOutcomeCallable;
        typedef std::future<ListClusterOperationsOutcome> ListClusterOperationsOutcomeCallable;
        typedef std::future<ListClustersOutcome> ListClustersOutcomeCallable;
        typedef std::future<ListClustersV2Outcome> ListClustersV2OutcomeCallable;
        typedef std::future<ListConfigurationRevisionsOutcome> ListConfigurationRevisionsOutcomeCallable;
        typedef std::future<ListConfigurationsOutcome> ListConfigurationsOutcomeCallable;
        typedef std::future<ListKafkaVersionsOutcome> ListKafkaVersionsOutcomeCallable;
        typedef std::future<ListNodesOutcome> ListNodesOutcomeCallable;
        typedef std::future<ListScramSecretsOutcome> ListScramSecretsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<RebootBrokerOutcome> RebootBrokerOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateBrokerCountOutcome> UpdateBrokerCountOutcomeCallable;
        typedef std::future<UpdateBrokerTypeOutcome> UpdateBrokerTypeOutcomeCallable;
        typedef std::future<UpdateBrokerStorageOutcome> UpdateBrokerStorageOutcomeCallable;
        typedef std::future<UpdateConfigurationOutcome> UpdateConfigurationOutcomeCallable;
        typedef std::future<UpdateConnectivityOutcome> UpdateConnectivityOutcomeCallable;
        typedef std::future<UpdateClusterConfigurationOutcome> UpdateClusterConfigurationOutcomeCallable;
        typedef std::future<UpdateClusterKafkaVersionOutcome> UpdateClusterKafkaVersionOutcomeCallable;
        typedef std::future<UpdateMonitoringOutcome> UpdateMonitoringOutcomeCallable;
        typedef std::future<UpdateSecurityOutcome> UpdateSecurityOutcomeCallable;
} // namespace Model

  class KafkaClient;

    typedef std::function<void(const KafkaClient*, const Model::BatchAssociateScramSecretRequest&, const Model::BatchAssociateScramSecretOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchAssociateScramSecretResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::CreateClusterRequest&, const Model::CreateClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClusterResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::CreateClusterV2Request&, const Model::CreateClusterV2Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClusterV2ResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::CreateConfigurationRequest&, const Model::CreateConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConfigurationResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::DeleteClusterRequest&, const Model::DeleteClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteClusterResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::DeleteConfigurationRequest&, const Model::DeleteConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfigurationResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::DescribeClusterRequest&, const Model::DescribeClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClusterResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::DescribeClusterV2Request&, const Model::DescribeClusterV2Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClusterV2ResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::DescribeClusterOperationRequest&, const Model::DescribeClusterOperationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClusterOperationResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::DescribeConfigurationRequest&, const Model::DescribeConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConfigurationResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::DescribeConfigurationRevisionRequest&, const Model::DescribeConfigurationRevisionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConfigurationRevisionResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::BatchDisassociateScramSecretRequest&, const Model::BatchDisassociateScramSecretOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDisassociateScramSecretResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::GetBootstrapBrokersRequest&, const Model::GetBootstrapBrokersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBootstrapBrokersResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::GetCompatibleKafkaVersionsRequest&, const Model::GetCompatibleKafkaVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCompatibleKafkaVersionsResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::ListClusterOperationsRequest&, const Model::ListClusterOperationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListClusterOperationsResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::ListClustersRequest&, const Model::ListClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListClustersResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::ListClustersV2Request&, const Model::ListClustersV2Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListClustersV2ResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::ListConfigurationRevisionsRequest&, const Model::ListConfigurationRevisionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConfigurationRevisionsResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::ListConfigurationsRequest&, const Model::ListConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConfigurationsResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::ListKafkaVersionsRequest&, const Model::ListKafkaVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListKafkaVersionsResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::ListNodesRequest&, const Model::ListNodesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNodesResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::ListScramSecretsRequest&, const Model::ListScramSecretsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListScramSecretsResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::RebootBrokerRequest&, const Model::RebootBrokerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RebootBrokerResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::UpdateBrokerCountRequest&, const Model::UpdateBrokerCountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBrokerCountResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::UpdateBrokerTypeRequest&, const Model::UpdateBrokerTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBrokerTypeResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::UpdateBrokerStorageRequest&, const Model::UpdateBrokerStorageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBrokerStorageResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::UpdateConfigurationRequest&, const Model::UpdateConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConfigurationResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::UpdateConnectivityRequest&, const Model::UpdateConnectivityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConnectivityResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::UpdateClusterConfigurationRequest&, const Model::UpdateClusterConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateClusterConfigurationResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::UpdateClusterKafkaVersionRequest&, const Model::UpdateClusterKafkaVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateClusterKafkaVersionResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::UpdateMonitoringRequest&, const Model::UpdateMonitoringOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMonitoringResponseReceivedHandler;
    typedef std::function<void(const KafkaClient*, const Model::UpdateSecurityRequest&, const Model::UpdateSecurityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSecurityResponseReceivedHandler;

  /**
   * 
               <p>The operations for managing an Amazon MSK cluster.</p>
      
   *      
   */
  class AWS_KAFKA_API KafkaClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KafkaClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KafkaClient(const Aws::Auth::AWSCredentials& credentials,
                    const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KafkaClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                    const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~KafkaClient();


        /**
         * 
            <p>Associates one or more Scram Secrets with an Amazon MSK
         * cluster.</p>
         <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/BatchAssociateScramSecret">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchAssociateScramSecretOutcome BatchAssociateScramSecret(const Model::BatchAssociateScramSecretRequest& request) const;

        /**
         * A Callable wrapper for BatchAssociateScramSecret that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchAssociateScramSecretOutcomeCallable BatchAssociateScramSecretCallable(const Model::BatchAssociateScramSecretRequest& request) const;

        /**
         * An Async wrapper for BatchAssociateScramSecret that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchAssociateScramSecretAsync(const Model::BatchAssociateScramSecretRequest& request, const BatchAssociateScramSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Creates a new MSK cluster.</p>
         <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/CreateCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest& request) const;

        /**
         * A Callable wrapper for CreateCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateClusterOutcomeCallable CreateClusterCallable(const Model::CreateClusterRequest& request) const;

        /**
         * An Async wrapper for CreateCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Creates a new MSK cluster.</p>
         <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/CreateClusterV2">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateClusterV2Outcome CreateClusterV2(const Model::CreateClusterV2Request& request) const;

        /**
         * A Callable wrapper for CreateClusterV2 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateClusterV2OutcomeCallable CreateClusterV2Callable(const Model::CreateClusterV2Request& request) const;

        /**
         * An Async wrapper for CreateClusterV2 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateClusterV2Async(const Model::CreateClusterV2Request& request, const CreateClusterV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Creates a new MSK configuration.</p>
         <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/CreateConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConfigurationOutcome CreateConfiguration(const Model::CreateConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConfigurationOutcomeCallable CreateConfigurationCallable(const Model::CreateConfigurationRequest& request) const;

        /**
         * An Async wrapper for CreateConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConfigurationAsync(const Model::CreateConfigurationRequest& request, const CreateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Deletes the MSK cluster specified by the Amazon Resource Name
         * (ARN) in the request.</p>
         <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/DeleteCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteClusterOutcome DeleteCluster(const Model::DeleteClusterRequest& request) const;

        /**
         * A Callable wrapper for DeleteCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteClusterOutcomeCallable DeleteClusterCallable(const Model::DeleteClusterRequest& request) const;

        /**
         * An Async wrapper for DeleteCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteClusterAsync(const Model::DeleteClusterRequest& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Deletes an MSK Configuration.</p>
         <p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/DeleteConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfigurationOutcome DeleteConfiguration(const Model::DeleteConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConfigurationOutcomeCallable DeleteConfigurationCallable(const Model::DeleteConfigurationRequest& request) const;

        /**
         * An Async wrapper for DeleteConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConfigurationAsync(const Model::DeleteConfigurationRequest& request, const DeleteConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Returns a description of the MSK cluster whose Amazon Resource
         * Name (ARN) is specified in the request.</p>
         <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/DescribeCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClusterOutcome DescribeCluster(const Model::DescribeClusterRequest& request) const;

        /**
         * A Callable wrapper for DescribeCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClusterOutcomeCallable DescribeClusterCallable(const Model::DescribeClusterRequest& request) const;

        /**
         * An Async wrapper for DescribeCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClusterAsync(const Model::DescribeClusterRequest& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Returns a description of the MSK cluster whose Amazon Resource
         * Name (ARN) is specified in the request.</p>
         <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/DescribeClusterV2">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClusterV2Outcome DescribeClusterV2(const Model::DescribeClusterV2Request& request) const;

        /**
         * A Callable wrapper for DescribeClusterV2 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClusterV2OutcomeCallable DescribeClusterV2Callable(const Model::DescribeClusterV2Request& request) const;

        /**
         * An Async wrapper for DescribeClusterV2 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClusterV2Async(const Model::DescribeClusterV2Request& request, const DescribeClusterV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Returns a description of the cluster operation specified by the
         * ARN.</p>
         <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/DescribeClusterOperation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClusterOperationOutcome DescribeClusterOperation(const Model::DescribeClusterOperationRequest& request) const;

        /**
         * A Callable wrapper for DescribeClusterOperation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeClusterOperationOutcomeCallable DescribeClusterOperationCallable(const Model::DescribeClusterOperationRequest& request) const;

        /**
         * An Async wrapper for DescribeClusterOperation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeClusterOperationAsync(const Model::DescribeClusterOperationRequest& request, const DescribeClusterOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Returns a description of this MSK configuration.</p>
        
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/DescribeConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConfigurationOutcome DescribeConfiguration(const Model::DescribeConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConfigurationOutcomeCallable DescribeConfigurationCallable(const Model::DescribeConfigurationRequest& request) const;

        /**
         * An Async wrapper for DescribeConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConfigurationAsync(const Model::DescribeConfigurationRequest& request, const DescribeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Returns a description of this revision of the
         * configuration.</p>
         <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/DescribeConfigurationRevision">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConfigurationRevisionOutcome DescribeConfigurationRevision(const Model::DescribeConfigurationRevisionRequest& request) const;

        /**
         * A Callable wrapper for DescribeConfigurationRevision that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConfigurationRevisionOutcomeCallable DescribeConfigurationRevisionCallable(const Model::DescribeConfigurationRevisionRequest& request) const;

        /**
         * An Async wrapper for DescribeConfigurationRevision that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConfigurationRevisionAsync(const Model::DescribeConfigurationRevisionRequest& request, const DescribeConfigurationRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Disassociates one or more Scram Secrets from an Amazon MSK
         * cluster.</p>
         <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/BatchDisassociateScramSecret">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDisassociateScramSecretOutcome BatchDisassociateScramSecret(const Model::BatchDisassociateScramSecretRequest& request) const;

        /**
         * A Callable wrapper for BatchDisassociateScramSecret that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDisassociateScramSecretOutcomeCallable BatchDisassociateScramSecretCallable(const Model::BatchDisassociateScramSecretRequest& request) const;

        /**
         * An Async wrapper for BatchDisassociateScramSecret that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDisassociateScramSecretAsync(const Model::BatchDisassociateScramSecretRequest& request, const BatchDisassociateScramSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>A list of brokers that a client application can use to
         * bootstrap.</p>
         <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/GetBootstrapBrokers">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBootstrapBrokersOutcome GetBootstrapBrokers(const Model::GetBootstrapBrokersRequest& request) const;

        /**
         * A Callable wrapper for GetBootstrapBrokers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBootstrapBrokersOutcomeCallable GetBootstrapBrokersCallable(const Model::GetBootstrapBrokersRequest& request) const;

        /**
         * An Async wrapper for GetBootstrapBrokers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBootstrapBrokersAsync(const Model::GetBootstrapBrokersRequest& request, const GetBootstrapBrokersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Gets the Apache Kafka versions to which you can update the MSK
         * cluster.</p>
         <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/GetCompatibleKafkaVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCompatibleKafkaVersionsOutcome GetCompatibleKafkaVersions(const Model::GetCompatibleKafkaVersionsRequest& request) const;

        /**
         * A Callable wrapper for GetCompatibleKafkaVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCompatibleKafkaVersionsOutcomeCallable GetCompatibleKafkaVersionsCallable(const Model::GetCompatibleKafkaVersionsRequest& request) const;

        /**
         * An Async wrapper for GetCompatibleKafkaVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCompatibleKafkaVersionsAsync(const Model::GetCompatibleKafkaVersionsRequest& request, const GetCompatibleKafkaVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Returns a list of all the operations that have been performed on
         * the specified MSK cluster.</p>
         <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ListClusterOperations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListClusterOperationsOutcome ListClusterOperations(const Model::ListClusterOperationsRequest& request) const;

        /**
         * A Callable wrapper for ListClusterOperations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListClusterOperationsOutcomeCallable ListClusterOperationsCallable(const Model::ListClusterOperationsRequest& request) const;

        /**
         * An Async wrapper for ListClusterOperations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListClusterOperationsAsync(const Model::ListClusterOperationsRequest& request, const ListClusterOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Returns a list of all the MSK clusters in the current
         * Region.</p>
         <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ListClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListClustersOutcome ListClusters(const Model::ListClustersRequest& request) const;

        /**
         * A Callable wrapper for ListClusters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListClustersOutcomeCallable ListClustersCallable(const Model::ListClustersRequest& request) const;

        /**
         * An Async wrapper for ListClusters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListClustersAsync(const Model::ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Returns a list of all the MSK clusters in the current
         * Region.</p>
         <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ListClustersV2">AWS
         * API Reference</a></p>
         */
        virtual Model::ListClustersV2Outcome ListClustersV2(const Model::ListClustersV2Request& request) const;

        /**
         * A Callable wrapper for ListClustersV2 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListClustersV2OutcomeCallable ListClustersV2Callable(const Model::ListClustersV2Request& request) const;

        /**
         * An Async wrapper for ListClustersV2 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListClustersV2Async(const Model::ListClustersV2Request& request, const ListClustersV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Returns a list of all the MSK configurations in this
         * Region.</p>
         <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ListConfigurationRevisions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConfigurationRevisionsOutcome ListConfigurationRevisions(const Model::ListConfigurationRevisionsRequest& request) const;

        /**
         * A Callable wrapper for ListConfigurationRevisions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListConfigurationRevisionsOutcomeCallable ListConfigurationRevisionsCallable(const Model::ListConfigurationRevisionsRequest& request) const;

        /**
         * An Async wrapper for ListConfigurationRevisions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListConfigurationRevisionsAsync(const Model::ListConfigurationRevisionsRequest& request, const ListConfigurationRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Returns a list of all the MSK configurations in this
         * Region.</p>
         <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ListConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConfigurationsOutcome ListConfigurations(const Model::ListConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListConfigurationsOutcomeCallable ListConfigurationsCallable(const Model::ListConfigurationsRequest& request) const;

        /**
         * An Async wrapper for ListConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListConfigurationsAsync(const Model::ListConfigurationsRequest& request, const ListConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Returns a list of Apache Kafka versions.</p>
         <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ListKafkaVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListKafkaVersionsOutcome ListKafkaVersions(const Model::ListKafkaVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListKafkaVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListKafkaVersionsOutcomeCallable ListKafkaVersionsCallable(const Model::ListKafkaVersionsRequest& request) const;

        /**
         * An Async wrapper for ListKafkaVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListKafkaVersionsAsync(const Model::ListKafkaVersionsRequest& request, const ListKafkaVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Returns a list of the broker nodes in the cluster.</p>
        
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ListNodes">AWS API
         * Reference</a></p>
         */
        virtual Model::ListNodesOutcome ListNodes(const Model::ListNodesRequest& request) const;

        /**
         * A Callable wrapper for ListNodes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListNodesOutcomeCallable ListNodesCallable(const Model::ListNodesRequest& request) const;

        /**
         * An Async wrapper for ListNodes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListNodesAsync(const Model::ListNodesRequest& request, const ListNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Returns a list of the Scram Secrets associated with an Amazon
         * MSK cluster.</p>
         <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ListScramSecrets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListScramSecretsOutcome ListScramSecrets(const Model::ListScramSecretsRequest& request) const;

        /**
         * A Callable wrapper for ListScramSecrets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListScramSecretsOutcomeCallable ListScramSecretsCallable(const Model::ListScramSecretsRequest& request) const;

        /**
         * An Async wrapper for ListScramSecrets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListScramSecretsAsync(const Model::ListScramSecretsRequest& request, const ListScramSecretsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Returns a list of the tags associated with the specified
         * resource.</p>
         <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ListTagsForResource">AWS
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
         * Reboots brokers.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/RebootBroker">AWS
         * API Reference</a></p>
         */
        virtual Model::RebootBrokerOutcome RebootBroker(const Model::RebootBrokerRequest& request) const;

        /**
         * A Callable wrapper for RebootBroker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RebootBrokerOutcomeCallable RebootBrokerCallable(const Model::RebootBrokerRequest& request) const;

        /**
         * An Async wrapper for RebootBroker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RebootBrokerAsync(const Model::RebootBrokerRequest& request, const RebootBrokerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Adds tags to the specified MSK resource.</p>
         <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/TagResource">AWS
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
         * 
            <p>Removes the tags associated with the keys that are provided in
         * the query.</p>
         <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/UntagResource">AWS
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
         * 
            <p>Updates the number of broker nodes in the cluster.</p>
        
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/UpdateBrokerCount">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBrokerCountOutcome UpdateBrokerCount(const Model::UpdateBrokerCountRequest& request) const;

        /**
         * A Callable wrapper for UpdateBrokerCount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBrokerCountOutcomeCallable UpdateBrokerCountCallable(const Model::UpdateBrokerCountRequest& request) const;

        /**
         * An Async wrapper for UpdateBrokerCount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBrokerCountAsync(const Model::UpdateBrokerCountRequest& request, const UpdateBrokerCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Updates EC2 instance type.</p>
         <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/UpdateBrokerType">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBrokerTypeOutcome UpdateBrokerType(const Model::UpdateBrokerTypeRequest& request) const;

        /**
         * A Callable wrapper for UpdateBrokerType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBrokerTypeOutcomeCallable UpdateBrokerTypeCallable(const Model::UpdateBrokerTypeRequest& request) const;

        /**
         * An Async wrapper for UpdateBrokerType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBrokerTypeAsync(const Model::UpdateBrokerTypeRequest& request, const UpdateBrokerTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Updates the EBS storage associated with MSK brokers.</p>
       
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/UpdateBrokerStorage">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBrokerStorageOutcome UpdateBrokerStorage(const Model::UpdateBrokerStorageRequest& request) const;

        /**
         * A Callable wrapper for UpdateBrokerStorage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBrokerStorageOutcomeCallable UpdateBrokerStorageCallable(const Model::UpdateBrokerStorageRequest& request) const;

        /**
         * An Async wrapper for UpdateBrokerStorage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBrokerStorageAsync(const Model::UpdateBrokerStorageRequest& request, const UpdateBrokerStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Updates an MSK configuration.</p>
         <p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/UpdateConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConfigurationOutcome UpdateConfiguration(const Model::UpdateConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateConfigurationOutcomeCallable UpdateConfigurationCallable(const Model::UpdateConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateConfigurationAsync(const Model::UpdateConfigurationRequest& request, const UpdateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Updates the cluster's connectivity configuration.</p>
        
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/UpdateConnectivity">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConnectivityOutcome UpdateConnectivity(const Model::UpdateConnectivityRequest& request) const;

        /**
         * A Callable wrapper for UpdateConnectivity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateConnectivityOutcomeCallable UpdateConnectivityCallable(const Model::UpdateConnectivityRequest& request) const;

        /**
         * An Async wrapper for UpdateConnectivity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateConnectivityAsync(const Model::UpdateConnectivityRequest& request, const UpdateConnectivityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Updates the cluster with the configuration that is specified in
         * the request body.</p>
         <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/UpdateClusterConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateClusterConfigurationOutcome UpdateClusterConfiguration(const Model::UpdateClusterConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateClusterConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateClusterConfigurationOutcomeCallable UpdateClusterConfigurationCallable(const Model::UpdateClusterConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateClusterConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateClusterConfigurationAsync(const Model::UpdateClusterConfigurationRequest& request, const UpdateClusterConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Updates the Apache Kafka version for the cluster.</p>
        
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/UpdateClusterKafkaVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateClusterKafkaVersionOutcome UpdateClusterKafkaVersion(const Model::UpdateClusterKafkaVersionRequest& request) const;

        /**
         * A Callable wrapper for UpdateClusterKafkaVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateClusterKafkaVersionOutcomeCallable UpdateClusterKafkaVersionCallable(const Model::UpdateClusterKafkaVersionRequest& request) const;

        /**
         * An Async wrapper for UpdateClusterKafkaVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateClusterKafkaVersionAsync(const Model::UpdateClusterKafkaVersionRequest& request, const UpdateClusterKafkaVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Updates the monitoring settings for the cluster. You can use
         * this operation to specify which Apache Kafka metrics you want Amazon MSK to send
         * to Amazon CloudWatch. You can also specify settings for open monitoring with
         * Prometheus.</p>
         <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/UpdateMonitoring">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMonitoringOutcome UpdateMonitoring(const Model::UpdateMonitoringRequest& request) const;

        /**
         * A Callable wrapper for UpdateMonitoring that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMonitoringOutcomeCallable UpdateMonitoringCallable(const Model::UpdateMonitoringRequest& request) const;

        /**
         * An Async wrapper for UpdateMonitoring that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMonitoringAsync(const Model::UpdateMonitoringRequest& request, const UpdateMonitoringResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
            <p>Updates the security settings for the cluster. You can use this
         * operation to specify encryption and authentication on existing clusters.</p>
   
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/UpdateSecurity">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSecurityOutcome UpdateSecurity(const Model::UpdateSecurityRequest& request) const;

        /**
         * A Callable wrapper for UpdateSecurity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSecurityOutcomeCallable UpdateSecurityCallable(const Model::UpdateSecurityRequest& request) const;

        /**
         * An Async wrapper for UpdateSecurity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSecurityAsync(const Model::UpdateSecurityRequest& request, const UpdateSecurityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void BatchAssociateScramSecretAsyncHelper(const Model::BatchAssociateScramSecretRequest& request, const BatchAssociateScramSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateClusterAsyncHelper(const Model::CreateClusterRequest& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateClusterV2AsyncHelper(const Model::CreateClusterV2Request& request, const CreateClusterV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateConfigurationAsyncHelper(const Model::CreateConfigurationRequest& request, const CreateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteClusterAsyncHelper(const Model::DeleteClusterRequest& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteConfigurationAsyncHelper(const Model::DeleteConfigurationRequest& request, const DeleteConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeClusterAsyncHelper(const Model::DescribeClusterRequest& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeClusterV2AsyncHelper(const Model::DescribeClusterV2Request& request, const DescribeClusterV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeClusterOperationAsyncHelper(const Model::DescribeClusterOperationRequest& request, const DescribeClusterOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeConfigurationAsyncHelper(const Model::DescribeConfigurationRequest& request, const DescribeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeConfigurationRevisionAsyncHelper(const Model::DescribeConfigurationRevisionRequest& request, const DescribeConfigurationRevisionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchDisassociateScramSecretAsyncHelper(const Model::BatchDisassociateScramSecretRequest& request, const BatchDisassociateScramSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBootstrapBrokersAsyncHelper(const Model::GetBootstrapBrokersRequest& request, const GetBootstrapBrokersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCompatibleKafkaVersionsAsyncHelper(const Model::GetCompatibleKafkaVersionsRequest& request, const GetCompatibleKafkaVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListClusterOperationsAsyncHelper(const Model::ListClusterOperationsRequest& request, const ListClusterOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListClustersAsyncHelper(const Model::ListClustersRequest& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListClustersV2AsyncHelper(const Model::ListClustersV2Request& request, const ListClustersV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListConfigurationRevisionsAsyncHelper(const Model::ListConfigurationRevisionsRequest& request, const ListConfigurationRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListConfigurationsAsyncHelper(const Model::ListConfigurationsRequest& request, const ListConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListKafkaVersionsAsyncHelper(const Model::ListKafkaVersionsRequest& request, const ListKafkaVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListNodesAsyncHelper(const Model::ListNodesRequest& request, const ListNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListScramSecretsAsyncHelper(const Model::ListScramSecretsRequest& request, const ListScramSecretsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RebootBrokerAsyncHelper(const Model::RebootBrokerRequest& request, const RebootBrokerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateBrokerCountAsyncHelper(const Model::UpdateBrokerCountRequest& request, const UpdateBrokerCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateBrokerTypeAsyncHelper(const Model::UpdateBrokerTypeRequest& request, const UpdateBrokerTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateBrokerStorageAsyncHelper(const Model::UpdateBrokerStorageRequest& request, const UpdateBrokerStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateConfigurationAsyncHelper(const Model::UpdateConfigurationRequest& request, const UpdateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateConnectivityAsyncHelper(const Model::UpdateConnectivityRequest& request, const UpdateConnectivityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateClusterConfigurationAsyncHelper(const Model::UpdateClusterConfigurationRequest& request, const UpdateClusterConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateClusterKafkaVersionAsyncHelper(const Model::UpdateClusterKafkaVersionRequest& request, const UpdateClusterKafkaVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateMonitoringAsyncHelper(const Model::UpdateMonitoringRequest& request, const UpdateMonitoringResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSecurityAsyncHelper(const Model::UpdateSecurityRequest& request, const UpdateSecurityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Kafka
} // namespace Aws
