/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/privatenetworks/PrivateNetworksErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/privatenetworks/PrivateNetworksEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in PrivateNetworksClient header */
#include <aws/privatenetworks/model/AcknowledgeOrderReceiptResult.h>
#include <aws/privatenetworks/model/ActivateDeviceIdentifierResult.h>
#include <aws/privatenetworks/model/ActivateNetworkSiteResult.h>
#include <aws/privatenetworks/model/ConfigureAccessPointResult.h>
#include <aws/privatenetworks/model/CreateNetworkResult.h>
#include <aws/privatenetworks/model/CreateNetworkSiteResult.h>
#include <aws/privatenetworks/model/DeactivateDeviceIdentifierResult.h>
#include <aws/privatenetworks/model/DeleteNetworkResult.h>
#include <aws/privatenetworks/model/DeleteNetworkSiteResult.h>
#include <aws/privatenetworks/model/GetDeviceIdentifierResult.h>
#include <aws/privatenetworks/model/GetNetworkResult.h>
#include <aws/privatenetworks/model/GetNetworkResourceResult.h>
#include <aws/privatenetworks/model/GetNetworkSiteResult.h>
#include <aws/privatenetworks/model/GetOrderResult.h>
#include <aws/privatenetworks/model/ListDeviceIdentifiersResult.h>
#include <aws/privatenetworks/model/ListNetworkResourcesResult.h>
#include <aws/privatenetworks/model/ListNetworkSitesResult.h>
#include <aws/privatenetworks/model/ListNetworksResult.h>
#include <aws/privatenetworks/model/ListOrdersResult.h>
#include <aws/privatenetworks/model/ListTagsForResourceResult.h>
#include <aws/privatenetworks/model/PingResult.h>
#include <aws/privatenetworks/model/TagResourceResult.h>
#include <aws/privatenetworks/model/UntagResourceResult.h>
#include <aws/privatenetworks/model/UpdateNetworkSiteResult.h>
#include <aws/privatenetworks/model/UpdateNetworkSitePlanResult.h>
/* End of service model headers required in PrivateNetworksClient header */

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

  namespace PrivateNetworks
  {
    using PrivateNetworksClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using PrivateNetworksEndpointProviderBase = Aws::PrivateNetworks::Endpoint::PrivateNetworksEndpointProviderBase;
    using PrivateNetworksEndpointProvider = Aws::PrivateNetworks::Endpoint::PrivateNetworksEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in PrivateNetworksClient header */
      class AcknowledgeOrderReceiptRequest;
      class ActivateDeviceIdentifierRequest;
      class ActivateNetworkSiteRequest;
      class ConfigureAccessPointRequest;
      class CreateNetworkRequest;
      class CreateNetworkSiteRequest;
      class DeactivateDeviceIdentifierRequest;
      class DeleteNetworkRequest;
      class DeleteNetworkSiteRequest;
      class GetDeviceIdentifierRequest;
      class GetNetworkRequest;
      class GetNetworkResourceRequest;
      class GetNetworkSiteRequest;
      class GetOrderRequest;
      class ListDeviceIdentifiersRequest;
      class ListNetworkResourcesRequest;
      class ListNetworkSitesRequest;
      class ListNetworksRequest;
      class ListOrdersRequest;
      class ListTagsForResourceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateNetworkSiteRequest;
      class UpdateNetworkSitePlanRequest;
      /* End of service model forward declarations required in PrivateNetworksClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AcknowledgeOrderReceiptResult, PrivateNetworksError> AcknowledgeOrderReceiptOutcome;
      typedef Aws::Utils::Outcome<ActivateDeviceIdentifierResult, PrivateNetworksError> ActivateDeviceIdentifierOutcome;
      typedef Aws::Utils::Outcome<ActivateNetworkSiteResult, PrivateNetworksError> ActivateNetworkSiteOutcome;
      typedef Aws::Utils::Outcome<ConfigureAccessPointResult, PrivateNetworksError> ConfigureAccessPointOutcome;
      typedef Aws::Utils::Outcome<CreateNetworkResult, PrivateNetworksError> CreateNetworkOutcome;
      typedef Aws::Utils::Outcome<CreateNetworkSiteResult, PrivateNetworksError> CreateNetworkSiteOutcome;
      typedef Aws::Utils::Outcome<DeactivateDeviceIdentifierResult, PrivateNetworksError> DeactivateDeviceIdentifierOutcome;
      typedef Aws::Utils::Outcome<DeleteNetworkResult, PrivateNetworksError> DeleteNetworkOutcome;
      typedef Aws::Utils::Outcome<DeleteNetworkSiteResult, PrivateNetworksError> DeleteNetworkSiteOutcome;
      typedef Aws::Utils::Outcome<GetDeviceIdentifierResult, PrivateNetworksError> GetDeviceIdentifierOutcome;
      typedef Aws::Utils::Outcome<GetNetworkResult, PrivateNetworksError> GetNetworkOutcome;
      typedef Aws::Utils::Outcome<GetNetworkResourceResult, PrivateNetworksError> GetNetworkResourceOutcome;
      typedef Aws::Utils::Outcome<GetNetworkSiteResult, PrivateNetworksError> GetNetworkSiteOutcome;
      typedef Aws::Utils::Outcome<GetOrderResult, PrivateNetworksError> GetOrderOutcome;
      typedef Aws::Utils::Outcome<ListDeviceIdentifiersResult, PrivateNetworksError> ListDeviceIdentifiersOutcome;
      typedef Aws::Utils::Outcome<ListNetworkResourcesResult, PrivateNetworksError> ListNetworkResourcesOutcome;
      typedef Aws::Utils::Outcome<ListNetworkSitesResult, PrivateNetworksError> ListNetworkSitesOutcome;
      typedef Aws::Utils::Outcome<ListNetworksResult, PrivateNetworksError> ListNetworksOutcome;
      typedef Aws::Utils::Outcome<ListOrdersResult, PrivateNetworksError> ListOrdersOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, PrivateNetworksError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PingResult, PrivateNetworksError> PingOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, PrivateNetworksError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, PrivateNetworksError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateNetworkSiteResult, PrivateNetworksError> UpdateNetworkSiteOutcome;
      typedef Aws::Utils::Outcome<UpdateNetworkSitePlanResult, PrivateNetworksError> UpdateNetworkSitePlanOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AcknowledgeOrderReceiptOutcome> AcknowledgeOrderReceiptOutcomeCallable;
      typedef std::future<ActivateDeviceIdentifierOutcome> ActivateDeviceIdentifierOutcomeCallable;
      typedef std::future<ActivateNetworkSiteOutcome> ActivateNetworkSiteOutcomeCallable;
      typedef std::future<ConfigureAccessPointOutcome> ConfigureAccessPointOutcomeCallable;
      typedef std::future<CreateNetworkOutcome> CreateNetworkOutcomeCallable;
      typedef std::future<CreateNetworkSiteOutcome> CreateNetworkSiteOutcomeCallable;
      typedef std::future<DeactivateDeviceIdentifierOutcome> DeactivateDeviceIdentifierOutcomeCallable;
      typedef std::future<DeleteNetworkOutcome> DeleteNetworkOutcomeCallable;
      typedef std::future<DeleteNetworkSiteOutcome> DeleteNetworkSiteOutcomeCallable;
      typedef std::future<GetDeviceIdentifierOutcome> GetDeviceIdentifierOutcomeCallable;
      typedef std::future<GetNetworkOutcome> GetNetworkOutcomeCallable;
      typedef std::future<GetNetworkResourceOutcome> GetNetworkResourceOutcomeCallable;
      typedef std::future<GetNetworkSiteOutcome> GetNetworkSiteOutcomeCallable;
      typedef std::future<GetOrderOutcome> GetOrderOutcomeCallable;
      typedef std::future<ListDeviceIdentifiersOutcome> ListDeviceIdentifiersOutcomeCallable;
      typedef std::future<ListNetworkResourcesOutcome> ListNetworkResourcesOutcomeCallable;
      typedef std::future<ListNetworkSitesOutcome> ListNetworkSitesOutcomeCallable;
      typedef std::future<ListNetworksOutcome> ListNetworksOutcomeCallable;
      typedef std::future<ListOrdersOutcome> ListOrdersOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PingOutcome> PingOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateNetworkSiteOutcome> UpdateNetworkSiteOutcomeCallable;
      typedef std::future<UpdateNetworkSitePlanOutcome> UpdateNetworkSitePlanOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class PrivateNetworksClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const PrivateNetworksClient*, const Model::AcknowledgeOrderReceiptRequest&, const Model::AcknowledgeOrderReceiptOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcknowledgeOrderReceiptResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::ActivateDeviceIdentifierRequest&, const Model::ActivateDeviceIdentifierOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ActivateDeviceIdentifierResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::ActivateNetworkSiteRequest&, const Model::ActivateNetworkSiteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ActivateNetworkSiteResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::ConfigureAccessPointRequest&, const Model::ConfigureAccessPointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConfigureAccessPointResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::CreateNetworkRequest&, const Model::CreateNetworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNetworkResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::CreateNetworkSiteRequest&, const Model::CreateNetworkSiteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNetworkSiteResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::DeactivateDeviceIdentifierRequest&, const Model::DeactivateDeviceIdentifierOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeactivateDeviceIdentifierResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::DeleteNetworkRequest&, const Model::DeleteNetworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNetworkResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::DeleteNetworkSiteRequest&, const Model::DeleteNetworkSiteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNetworkSiteResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::GetDeviceIdentifierRequest&, const Model::GetDeviceIdentifierOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeviceIdentifierResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::GetNetworkRequest&, const Model::GetNetworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetNetworkResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::GetNetworkResourceRequest&, const Model::GetNetworkResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetNetworkResourceResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::GetNetworkSiteRequest&, const Model::GetNetworkSiteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetNetworkSiteResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::GetOrderRequest&, const Model::GetOrderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOrderResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::ListDeviceIdentifiersRequest&, const Model::ListDeviceIdentifiersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeviceIdentifiersResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::ListNetworkResourcesRequest&, const Model::ListNetworkResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNetworkResourcesResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::ListNetworkSitesRequest&, const Model::ListNetworkSitesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNetworkSitesResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::ListNetworksRequest&, const Model::ListNetworksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNetworksResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::ListOrdersRequest&, const Model::ListOrdersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOrdersResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::PingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PingResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::UpdateNetworkSiteRequest&, const Model::UpdateNetworkSiteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateNetworkSiteResponseReceivedHandler;
    typedef std::function<void(const PrivateNetworksClient*, const Model::UpdateNetworkSitePlanRequest&, const Model::UpdateNetworkSitePlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateNetworkSitePlanResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace PrivateNetworks
} // namespace Aws
