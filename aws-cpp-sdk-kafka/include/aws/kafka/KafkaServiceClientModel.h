/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/kafka/KafkaErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/kafka/KafkaEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in KafkaClient header */
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
#include <aws/kafka/model/UpdateStorageResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in KafkaClient header */

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
    using KafkaClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using KafkaEndpointProviderBase = Aws::Kafka::Endpoint::KafkaEndpointProviderBase;
    using KafkaEndpointProvider = Aws::Kafka::Endpoint::KafkaEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in KafkaClient header */
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
      class UpdateStorageRequest;
      /* End of service model forward declarations required in KafkaClient header */

      /* Service model Outcome class definitions */
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
      typedef Aws::Utils::Outcome<UpdateStorageResult, KafkaError> UpdateStorageOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
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
      typedef std::future<UpdateStorageOutcome> UpdateStorageOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class KafkaClient;

    /* Service model async handlers definitions */
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
    typedef std::function<void(const KafkaClient*, const Model::UpdateStorageRequest&, const Model::UpdateStorageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStorageResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Kafka
} // namespace Aws
