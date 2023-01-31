/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/cloudtrail-data/CloudTrailDataErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/cloudtrail-data/CloudTrailDataEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in CloudTrailDataClient header */
#include <aws/cloudtrail-data/model/PutAuditEventsResult.h>
/* End of service model headers required in CloudTrailDataClient header */

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

  namespace CloudTrailData
  {
    using CloudTrailDataClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using CloudTrailDataEndpointProviderBase = Aws::CloudTrailData::Endpoint::CloudTrailDataEndpointProviderBase;
    using CloudTrailDataEndpointProvider = Aws::CloudTrailData::Endpoint::CloudTrailDataEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in CloudTrailDataClient header */
      class PutAuditEventsRequest;
      /* End of service model forward declarations required in CloudTrailDataClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<PutAuditEventsResult, CloudTrailDataError> PutAuditEventsOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<PutAuditEventsOutcome> PutAuditEventsOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class CloudTrailDataClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const CloudTrailDataClient*, const Model::PutAuditEventsRequest&, const Model::PutAuditEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAuditEventsResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace CloudTrailData
} // namespace Aws
