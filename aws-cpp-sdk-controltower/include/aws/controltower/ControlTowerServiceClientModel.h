/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/controltower/ControlTowerErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/controltower/ControlTowerEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ControlTowerClient header */
#include <aws/controltower/model/DisableControlResult.h>
#include <aws/controltower/model/EnableControlResult.h>
#include <aws/controltower/model/GetControlOperationResult.h>
#include <aws/controltower/model/ListEnabledControlsResult.h>
/* End of service model headers required in ControlTowerClient header */

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

  namespace ControlTower
  {
    using ControlTowerClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ControlTowerEndpointProviderBase = Aws::ControlTower::Endpoint::ControlTowerEndpointProviderBase;
    using ControlTowerEndpointProvider = Aws::ControlTower::Endpoint::ControlTowerEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ControlTowerClient header */
      class DisableControlRequest;
      class EnableControlRequest;
      class GetControlOperationRequest;
      class ListEnabledControlsRequest;
      /* End of service model forward declarations required in ControlTowerClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<DisableControlResult, ControlTowerError> DisableControlOutcome;
      typedef Aws::Utils::Outcome<EnableControlResult, ControlTowerError> EnableControlOutcome;
      typedef Aws::Utils::Outcome<GetControlOperationResult, ControlTowerError> GetControlOperationOutcome;
      typedef Aws::Utils::Outcome<ListEnabledControlsResult, ControlTowerError> ListEnabledControlsOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<DisableControlOutcome> DisableControlOutcomeCallable;
      typedef std::future<EnableControlOutcome> EnableControlOutcomeCallable;
      typedef std::future<GetControlOperationOutcome> GetControlOperationOutcomeCallable;
      typedef std::future<ListEnabledControlsOutcome> ListEnabledControlsOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ControlTowerClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ControlTowerClient*, const Model::DisableControlRequest&, const Model::DisableControlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableControlResponseReceivedHandler;
    typedef std::function<void(const ControlTowerClient*, const Model::EnableControlRequest&, const Model::EnableControlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableControlResponseReceivedHandler;
    typedef std::function<void(const ControlTowerClient*, const Model::GetControlOperationRequest&, const Model::GetControlOperationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetControlOperationResponseReceivedHandler;
    typedef std::function<void(const ControlTowerClient*, const Model::ListEnabledControlsRequest&, const Model::ListEnabledControlsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEnabledControlsResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ControlTower
} // namespace Aws
