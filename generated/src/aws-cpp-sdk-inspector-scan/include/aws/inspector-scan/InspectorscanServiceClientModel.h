/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/inspector-scan/InspectorscanErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/inspector-scan/InspectorscanEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in InspectorscanClient header */
#include <aws/inspector-scan/model/ScanSbomResult.h>
/* End of service model headers required in InspectorscanClient header */

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

  namespace inspectorscan
  {
    using InspectorscanClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using InspectorscanEndpointProviderBase = Aws::inspectorscan::Endpoint::InspectorscanEndpointProviderBase;
    using InspectorscanEndpointProvider = Aws::inspectorscan::Endpoint::InspectorscanEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in InspectorscanClient header */
      class ScanSbomRequest;
      /* End of service model forward declarations required in InspectorscanClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<ScanSbomResult, InspectorscanError> ScanSbomOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<ScanSbomOutcome> ScanSbomOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class InspectorscanClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const InspectorscanClient*, const Model::ScanSbomRequest&, const Model::ScanSbomOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ScanSbomResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace inspectorscan
} // namespace Aws
