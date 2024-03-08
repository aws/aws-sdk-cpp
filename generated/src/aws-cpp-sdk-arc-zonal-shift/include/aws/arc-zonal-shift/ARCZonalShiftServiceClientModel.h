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
#include <aws/arc-zonal-shift/model/CreatePracticeRunConfigurationResult.h>
#include <aws/arc-zonal-shift/model/DeletePracticeRunConfigurationResult.h>
#include <aws/arc-zonal-shift/model/GetManagedResourceResult.h>
#include <aws/arc-zonal-shift/model/ListAutoshiftsResult.h>
#include <aws/arc-zonal-shift/model/ListManagedResourcesResult.h>
#include <aws/arc-zonal-shift/model/ListZonalShiftsResult.h>
#include <aws/arc-zonal-shift/model/StartZonalShiftResult.h>
#include <aws/arc-zonal-shift/model/UpdatePracticeRunConfigurationResult.h>
#include <aws/arc-zonal-shift/model/UpdateZonalAutoshiftConfigurationResult.h>
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
      class CreatePracticeRunConfigurationRequest;
      class DeletePracticeRunConfigurationRequest;
      class GetManagedResourceRequest;
      class ListAutoshiftsRequest;
      class ListManagedResourcesRequest;
      class ListZonalShiftsRequest;
      class StartZonalShiftRequest;
      class UpdatePracticeRunConfigurationRequest;
      class UpdateZonalAutoshiftConfigurationRequest;
      class UpdateZonalShiftRequest;
      /* End of service model forward declarations required in ARCZonalShiftClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CancelZonalShiftResult, ARCZonalShiftError> CancelZonalShiftOutcome;
      typedef Aws::Utils::Outcome<CreatePracticeRunConfigurationResult, ARCZonalShiftError> CreatePracticeRunConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeletePracticeRunConfigurationResult, ARCZonalShiftError> DeletePracticeRunConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetManagedResourceResult, ARCZonalShiftError> GetManagedResourceOutcome;
      typedef Aws::Utils::Outcome<ListAutoshiftsResult, ARCZonalShiftError> ListAutoshiftsOutcome;
      typedef Aws::Utils::Outcome<ListManagedResourcesResult, ARCZonalShiftError> ListManagedResourcesOutcome;
      typedef Aws::Utils::Outcome<ListZonalShiftsResult, ARCZonalShiftError> ListZonalShiftsOutcome;
      typedef Aws::Utils::Outcome<StartZonalShiftResult, ARCZonalShiftError> StartZonalShiftOutcome;
      typedef Aws::Utils::Outcome<UpdatePracticeRunConfigurationResult, ARCZonalShiftError> UpdatePracticeRunConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateZonalAutoshiftConfigurationResult, ARCZonalShiftError> UpdateZonalAutoshiftConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateZonalShiftResult, ARCZonalShiftError> UpdateZonalShiftOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CancelZonalShiftOutcome> CancelZonalShiftOutcomeCallable;
      typedef std::future<CreatePracticeRunConfigurationOutcome> CreatePracticeRunConfigurationOutcomeCallable;
      typedef std::future<DeletePracticeRunConfigurationOutcome> DeletePracticeRunConfigurationOutcomeCallable;
      typedef std::future<GetManagedResourceOutcome> GetManagedResourceOutcomeCallable;
      typedef std::future<ListAutoshiftsOutcome> ListAutoshiftsOutcomeCallable;
      typedef std::future<ListManagedResourcesOutcome> ListManagedResourcesOutcomeCallable;
      typedef std::future<ListZonalShiftsOutcome> ListZonalShiftsOutcomeCallable;
      typedef std::future<StartZonalShiftOutcome> StartZonalShiftOutcomeCallable;
      typedef std::future<UpdatePracticeRunConfigurationOutcome> UpdatePracticeRunConfigurationOutcomeCallable;
      typedef std::future<UpdateZonalAutoshiftConfigurationOutcome> UpdateZonalAutoshiftConfigurationOutcomeCallable;
      typedef std::future<UpdateZonalShiftOutcome> UpdateZonalShiftOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ARCZonalShiftClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ARCZonalShiftClient*, const Model::CancelZonalShiftRequest&, const Model::CancelZonalShiftOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelZonalShiftResponseReceivedHandler;
    typedef std::function<void(const ARCZonalShiftClient*, const Model::CreatePracticeRunConfigurationRequest&, const Model::CreatePracticeRunConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePracticeRunConfigurationResponseReceivedHandler;
    typedef std::function<void(const ARCZonalShiftClient*, const Model::DeletePracticeRunConfigurationRequest&, const Model::DeletePracticeRunConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePracticeRunConfigurationResponseReceivedHandler;
    typedef std::function<void(const ARCZonalShiftClient*, const Model::GetManagedResourceRequest&, const Model::GetManagedResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetManagedResourceResponseReceivedHandler;
    typedef std::function<void(const ARCZonalShiftClient*, const Model::ListAutoshiftsRequest&, const Model::ListAutoshiftsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAutoshiftsResponseReceivedHandler;
    typedef std::function<void(const ARCZonalShiftClient*, const Model::ListManagedResourcesRequest&, const Model::ListManagedResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListManagedResourcesResponseReceivedHandler;
    typedef std::function<void(const ARCZonalShiftClient*, const Model::ListZonalShiftsRequest&, const Model::ListZonalShiftsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListZonalShiftsResponseReceivedHandler;
    typedef std::function<void(const ARCZonalShiftClient*, const Model::StartZonalShiftRequest&, const Model::StartZonalShiftOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartZonalShiftResponseReceivedHandler;
    typedef std::function<void(const ARCZonalShiftClient*, const Model::UpdatePracticeRunConfigurationRequest&, const Model::UpdatePracticeRunConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePracticeRunConfigurationResponseReceivedHandler;
    typedef std::function<void(const ARCZonalShiftClient*, const Model::UpdateZonalAutoshiftConfigurationRequest&, const Model::UpdateZonalAutoshiftConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateZonalAutoshiftConfigurationResponseReceivedHandler;
    typedef std::function<void(const ARCZonalShiftClient*, const Model::UpdateZonalShiftRequest&, const Model::UpdateZonalShiftOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateZonalShiftResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ARCZonalShift
} // namespace Aws
