/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/arc-zonal-shift/ARCZonalShiftErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/arc-zonal-shift/ARCZonalShiftEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ARCZonalShiftClient header */
#include <aws/arc-zonal-shift/model/CancelZonalShiftResult.h>
#include <aws/arc-zonal-shift/model/GetManagedResourceResult.h>
#include <aws/arc-zonal-shift/model/ListManagedResourcesResult.h>
#include <aws/arc-zonal-shift/model/ListZonalShiftsResult.h>
#include <aws/arc-zonal-shift/model/StartZonalShiftResult.h>
#include <aws/arc-zonal-shift/model/UpdateZonalShiftResult.h>
/* End of service model headers required in ARCZonalShiftClient header */

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

  namespace ARCZonalShift
  {
    using ARCZonalShiftClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ARCZonalShiftEndpointProviderBase = Aws::ARCZonalShift::Endpoint::ARCZonalShiftEndpointProviderBase;
    using ARCZonalShiftEndpointProvider = Aws::ARCZonalShift::Endpoint::ARCZonalShiftEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ARCZonalShiftClient header */
      class CancelZonalShiftRequest;
      class GetManagedResourceRequest;
      class ListManagedResourcesRequest;
      class ListZonalShiftsRequest;
      class StartZonalShiftRequest;
      class UpdateZonalShiftRequest;
      /* End of service model forward declarations required in ARCZonalShiftClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CancelZonalShiftResult, ARCZonalShiftError> CancelZonalShiftOutcome;
      typedef Aws::Utils::Outcome<GetManagedResourceResult, ARCZonalShiftError> GetManagedResourceOutcome;
      typedef Aws::Utils::Outcome<ListManagedResourcesResult, ARCZonalShiftError> ListManagedResourcesOutcome;
      typedef Aws::Utils::Outcome<ListZonalShiftsResult, ARCZonalShiftError> ListZonalShiftsOutcome;
      typedef Aws::Utils::Outcome<StartZonalShiftResult, ARCZonalShiftError> StartZonalShiftOutcome;
      typedef Aws::Utils::Outcome<UpdateZonalShiftResult, ARCZonalShiftError> UpdateZonalShiftOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CancelZonalShiftOutcome> CancelZonalShiftOutcomeCallable;
      typedef std::future<GetManagedResourceOutcome> GetManagedResourceOutcomeCallable;
      typedef std::future<ListManagedResourcesOutcome> ListManagedResourcesOutcomeCallable;
      typedef std::future<ListZonalShiftsOutcome> ListZonalShiftsOutcomeCallable;
      typedef std::future<StartZonalShiftOutcome> StartZonalShiftOutcomeCallable;
      typedef std::future<UpdateZonalShiftOutcome> UpdateZonalShiftOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ARCZonalShiftClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ARCZonalShiftClient*, const Model::CancelZonalShiftRequest&, const Model::CancelZonalShiftOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelZonalShiftResponseReceivedHandler;
    typedef std::function<void(const ARCZonalShiftClient*, const Model::GetManagedResourceRequest&, const Model::GetManagedResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetManagedResourceResponseReceivedHandler;
    typedef std::function<void(const ARCZonalShiftClient*, const Model::ListManagedResourcesRequest&, const Model::ListManagedResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListManagedResourcesResponseReceivedHandler;
    typedef std::function<void(const ARCZonalShiftClient*, const Model::ListZonalShiftsRequest&, const Model::ListZonalShiftsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListZonalShiftsResponseReceivedHandler;
    typedef std::function<void(const ARCZonalShiftClient*, const Model::StartZonalShiftRequest&, const Model::StartZonalShiftOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartZonalShiftResponseReceivedHandler;
    typedef std::function<void(const ARCZonalShiftClient*, const Model::UpdateZonalShiftRequest&, const Model::UpdateZonalShiftOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateZonalShiftResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ARCZonalShift
} // namespace Aws
