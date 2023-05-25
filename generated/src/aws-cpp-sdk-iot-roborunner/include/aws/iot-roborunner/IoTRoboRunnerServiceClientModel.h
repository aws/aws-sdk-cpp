/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/iot-roborunner/IoTRoboRunnerErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/iot-roborunner/IoTRoboRunnerEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in IoTRoboRunnerClient header */
#include <aws/iot-roborunner/model/CreateDestinationResult.h>
#include <aws/iot-roborunner/model/CreateSiteResult.h>
#include <aws/iot-roborunner/model/CreateWorkerResult.h>
#include <aws/iot-roborunner/model/CreateWorkerFleetResult.h>
#include <aws/iot-roborunner/model/DeleteDestinationResult.h>
#include <aws/iot-roborunner/model/DeleteSiteResult.h>
#include <aws/iot-roborunner/model/DeleteWorkerResult.h>
#include <aws/iot-roborunner/model/DeleteWorkerFleetResult.h>
#include <aws/iot-roborunner/model/GetDestinationResult.h>
#include <aws/iot-roborunner/model/GetSiteResult.h>
#include <aws/iot-roborunner/model/GetWorkerResult.h>
#include <aws/iot-roborunner/model/GetWorkerFleetResult.h>
#include <aws/iot-roborunner/model/ListDestinationsResult.h>
#include <aws/iot-roborunner/model/ListSitesResult.h>
#include <aws/iot-roborunner/model/ListWorkerFleetsResult.h>
#include <aws/iot-roborunner/model/ListWorkersResult.h>
#include <aws/iot-roborunner/model/UpdateDestinationResult.h>
#include <aws/iot-roborunner/model/UpdateSiteResult.h>
#include <aws/iot-roborunner/model/UpdateWorkerResult.h>
#include <aws/iot-roborunner/model/UpdateWorkerFleetResult.h>
/* End of service model headers required in IoTRoboRunnerClient header */

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

  namespace IoTRoboRunner
  {
    using IoTRoboRunnerClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using IoTRoboRunnerEndpointProviderBase = Aws::IoTRoboRunner::Endpoint::IoTRoboRunnerEndpointProviderBase;
    using IoTRoboRunnerEndpointProvider = Aws::IoTRoboRunner::Endpoint::IoTRoboRunnerEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in IoTRoboRunnerClient header */
      class CreateDestinationRequest;
      class CreateSiteRequest;
      class CreateWorkerRequest;
      class CreateWorkerFleetRequest;
      class DeleteDestinationRequest;
      class DeleteSiteRequest;
      class DeleteWorkerRequest;
      class DeleteWorkerFleetRequest;
      class GetDestinationRequest;
      class GetSiteRequest;
      class GetWorkerRequest;
      class GetWorkerFleetRequest;
      class ListDestinationsRequest;
      class ListSitesRequest;
      class ListWorkerFleetsRequest;
      class ListWorkersRequest;
      class UpdateDestinationRequest;
      class UpdateSiteRequest;
      class UpdateWorkerRequest;
      class UpdateWorkerFleetRequest;
      /* End of service model forward declarations required in IoTRoboRunnerClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateDestinationResult, IoTRoboRunnerError> CreateDestinationOutcome;
      typedef Aws::Utils::Outcome<CreateSiteResult, IoTRoboRunnerError> CreateSiteOutcome;
      typedef Aws::Utils::Outcome<CreateWorkerResult, IoTRoboRunnerError> CreateWorkerOutcome;
      typedef Aws::Utils::Outcome<CreateWorkerFleetResult, IoTRoboRunnerError> CreateWorkerFleetOutcome;
      typedef Aws::Utils::Outcome<DeleteDestinationResult, IoTRoboRunnerError> DeleteDestinationOutcome;
      typedef Aws::Utils::Outcome<DeleteSiteResult, IoTRoboRunnerError> DeleteSiteOutcome;
      typedef Aws::Utils::Outcome<DeleteWorkerResult, IoTRoboRunnerError> DeleteWorkerOutcome;
      typedef Aws::Utils::Outcome<DeleteWorkerFleetResult, IoTRoboRunnerError> DeleteWorkerFleetOutcome;
      typedef Aws::Utils::Outcome<GetDestinationResult, IoTRoboRunnerError> GetDestinationOutcome;
      typedef Aws::Utils::Outcome<GetSiteResult, IoTRoboRunnerError> GetSiteOutcome;
      typedef Aws::Utils::Outcome<GetWorkerResult, IoTRoboRunnerError> GetWorkerOutcome;
      typedef Aws::Utils::Outcome<GetWorkerFleetResult, IoTRoboRunnerError> GetWorkerFleetOutcome;
      typedef Aws::Utils::Outcome<ListDestinationsResult, IoTRoboRunnerError> ListDestinationsOutcome;
      typedef Aws::Utils::Outcome<ListSitesResult, IoTRoboRunnerError> ListSitesOutcome;
      typedef Aws::Utils::Outcome<ListWorkerFleetsResult, IoTRoboRunnerError> ListWorkerFleetsOutcome;
      typedef Aws::Utils::Outcome<ListWorkersResult, IoTRoboRunnerError> ListWorkersOutcome;
      typedef Aws::Utils::Outcome<UpdateDestinationResult, IoTRoboRunnerError> UpdateDestinationOutcome;
      typedef Aws::Utils::Outcome<UpdateSiteResult, IoTRoboRunnerError> UpdateSiteOutcome;
      typedef Aws::Utils::Outcome<UpdateWorkerResult, IoTRoboRunnerError> UpdateWorkerOutcome;
      typedef Aws::Utils::Outcome<UpdateWorkerFleetResult, IoTRoboRunnerError> UpdateWorkerFleetOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateDestinationOutcome> CreateDestinationOutcomeCallable;
      typedef std::future<CreateSiteOutcome> CreateSiteOutcomeCallable;
      typedef std::future<CreateWorkerOutcome> CreateWorkerOutcomeCallable;
      typedef std::future<CreateWorkerFleetOutcome> CreateWorkerFleetOutcomeCallable;
      typedef std::future<DeleteDestinationOutcome> DeleteDestinationOutcomeCallable;
      typedef std::future<DeleteSiteOutcome> DeleteSiteOutcomeCallable;
      typedef std::future<DeleteWorkerOutcome> DeleteWorkerOutcomeCallable;
      typedef std::future<DeleteWorkerFleetOutcome> DeleteWorkerFleetOutcomeCallable;
      typedef std::future<GetDestinationOutcome> GetDestinationOutcomeCallable;
      typedef std::future<GetSiteOutcome> GetSiteOutcomeCallable;
      typedef std::future<GetWorkerOutcome> GetWorkerOutcomeCallable;
      typedef std::future<GetWorkerFleetOutcome> GetWorkerFleetOutcomeCallable;
      typedef std::future<ListDestinationsOutcome> ListDestinationsOutcomeCallable;
      typedef std::future<ListSitesOutcome> ListSitesOutcomeCallable;
      typedef std::future<ListWorkerFleetsOutcome> ListWorkerFleetsOutcomeCallable;
      typedef std::future<ListWorkersOutcome> ListWorkersOutcomeCallable;
      typedef std::future<UpdateDestinationOutcome> UpdateDestinationOutcomeCallable;
      typedef std::future<UpdateSiteOutcome> UpdateSiteOutcomeCallable;
      typedef std::future<UpdateWorkerOutcome> UpdateWorkerOutcomeCallable;
      typedef std::future<UpdateWorkerFleetOutcome> UpdateWorkerFleetOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class IoTRoboRunnerClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const IoTRoboRunnerClient*, const Model::CreateDestinationRequest&, const Model::CreateDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDestinationResponseReceivedHandler;
    typedef std::function<void(const IoTRoboRunnerClient*, const Model::CreateSiteRequest&, const Model::CreateSiteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSiteResponseReceivedHandler;
    typedef std::function<void(const IoTRoboRunnerClient*, const Model::CreateWorkerRequest&, const Model::CreateWorkerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkerResponseReceivedHandler;
    typedef std::function<void(const IoTRoboRunnerClient*, const Model::CreateWorkerFleetRequest&, const Model::CreateWorkerFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkerFleetResponseReceivedHandler;
    typedef std::function<void(const IoTRoboRunnerClient*, const Model::DeleteDestinationRequest&, const Model::DeleteDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDestinationResponseReceivedHandler;
    typedef std::function<void(const IoTRoboRunnerClient*, const Model::DeleteSiteRequest&, const Model::DeleteSiteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSiteResponseReceivedHandler;
    typedef std::function<void(const IoTRoboRunnerClient*, const Model::DeleteWorkerRequest&, const Model::DeleteWorkerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkerResponseReceivedHandler;
    typedef std::function<void(const IoTRoboRunnerClient*, const Model::DeleteWorkerFleetRequest&, const Model::DeleteWorkerFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkerFleetResponseReceivedHandler;
    typedef std::function<void(const IoTRoboRunnerClient*, const Model::GetDestinationRequest&, const Model::GetDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDestinationResponseReceivedHandler;
    typedef std::function<void(const IoTRoboRunnerClient*, const Model::GetSiteRequest&, const Model::GetSiteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSiteResponseReceivedHandler;
    typedef std::function<void(const IoTRoboRunnerClient*, const Model::GetWorkerRequest&, const Model::GetWorkerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkerResponseReceivedHandler;
    typedef std::function<void(const IoTRoboRunnerClient*, const Model::GetWorkerFleetRequest&, const Model::GetWorkerFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkerFleetResponseReceivedHandler;
    typedef std::function<void(const IoTRoboRunnerClient*, const Model::ListDestinationsRequest&, const Model::ListDestinationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDestinationsResponseReceivedHandler;
    typedef std::function<void(const IoTRoboRunnerClient*, const Model::ListSitesRequest&, const Model::ListSitesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSitesResponseReceivedHandler;
    typedef std::function<void(const IoTRoboRunnerClient*, const Model::ListWorkerFleetsRequest&, const Model::ListWorkerFleetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorkerFleetsResponseReceivedHandler;
    typedef std::function<void(const IoTRoboRunnerClient*, const Model::ListWorkersRequest&, const Model::ListWorkersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorkersResponseReceivedHandler;
    typedef std::function<void(const IoTRoboRunnerClient*, const Model::UpdateDestinationRequest&, const Model::UpdateDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDestinationResponseReceivedHandler;
    typedef std::function<void(const IoTRoboRunnerClient*, const Model::UpdateSiteRequest&, const Model::UpdateSiteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSiteResponseReceivedHandler;
    typedef std::function<void(const IoTRoboRunnerClient*, const Model::UpdateWorkerRequest&, const Model::UpdateWorkerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWorkerResponseReceivedHandler;
    typedef std::function<void(const IoTRoboRunnerClient*, const Model::UpdateWorkerFleetRequest&, const Model::UpdateWorkerFleetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWorkerFleetResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace IoTRoboRunner
} // namespace Aws
