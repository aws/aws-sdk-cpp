/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/controlcatalog/ControlCatalogErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/controlcatalog/ControlCatalogEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ControlCatalogClient header */
#include <aws/controlcatalog/model/GetControlResult.h>
#include <aws/controlcatalog/model/ListCommonControlsResult.h>
#include <aws/controlcatalog/model/ListControlMappingsResult.h>
#include <aws/controlcatalog/model/ListControlsResult.h>
#include <aws/controlcatalog/model/ListDomainsResult.h>
#include <aws/controlcatalog/model/ListObjectivesResult.h>
#include <aws/controlcatalog/model/ListControlMappingsRequest.h>
#include <aws/controlcatalog/model/ListCommonControlsRequest.h>
#include <aws/controlcatalog/model/ListDomainsRequest.h>
#include <aws/controlcatalog/model/ListControlsRequest.h>
#include <aws/controlcatalog/model/ListObjectivesRequest.h>
/* End of service model headers required in ControlCatalogClient header */

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

  namespace ControlCatalog
  {
    using ControlCatalogClientConfiguration = Aws::Client::GenericClientConfiguration;
    using ControlCatalogEndpointProviderBase = Aws::ControlCatalog::Endpoint::ControlCatalogEndpointProviderBase;
    using ControlCatalogEndpointProvider = Aws::ControlCatalog::Endpoint::ControlCatalogEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ControlCatalogClient header */
      class GetControlRequest;
      class ListCommonControlsRequest;
      class ListControlMappingsRequest;
      class ListControlsRequest;
      class ListDomainsRequest;
      class ListObjectivesRequest;
      /* End of service model forward declarations required in ControlCatalogClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<GetControlResult, ControlCatalogError> GetControlOutcome;
      typedef Aws::Utils::Outcome<ListCommonControlsResult, ControlCatalogError> ListCommonControlsOutcome;
      typedef Aws::Utils::Outcome<ListControlMappingsResult, ControlCatalogError> ListControlMappingsOutcome;
      typedef Aws::Utils::Outcome<ListControlsResult, ControlCatalogError> ListControlsOutcome;
      typedef Aws::Utils::Outcome<ListDomainsResult, ControlCatalogError> ListDomainsOutcome;
      typedef Aws::Utils::Outcome<ListObjectivesResult, ControlCatalogError> ListObjectivesOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<GetControlOutcome> GetControlOutcomeCallable;
      typedef std::future<ListCommonControlsOutcome> ListCommonControlsOutcomeCallable;
      typedef std::future<ListControlMappingsOutcome> ListControlMappingsOutcomeCallable;
      typedef std::future<ListControlsOutcome> ListControlsOutcomeCallable;
      typedef std::future<ListDomainsOutcome> ListDomainsOutcomeCallable;
      typedef std::future<ListObjectivesOutcome> ListObjectivesOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ControlCatalogClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ControlCatalogClient*, const Model::GetControlRequest&, const Model::GetControlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetControlResponseReceivedHandler;
    typedef std::function<void(const ControlCatalogClient*, const Model::ListCommonControlsRequest&, const Model::ListCommonControlsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCommonControlsResponseReceivedHandler;
    typedef std::function<void(const ControlCatalogClient*, const Model::ListControlMappingsRequest&, const Model::ListControlMappingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListControlMappingsResponseReceivedHandler;
    typedef std::function<void(const ControlCatalogClient*, const Model::ListControlsRequest&, const Model::ListControlsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListControlsResponseReceivedHandler;
    typedef std::function<void(const ControlCatalogClient*, const Model::ListDomainsRequest&, const Model::ListDomainsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDomainsResponseReceivedHandler;
    typedef std::function<void(const ControlCatalogClient*, const Model::ListObjectivesRequest&, const Model::ListObjectivesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListObjectivesResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ControlCatalog
} // namespace Aws
