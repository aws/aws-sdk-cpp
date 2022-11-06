/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/sagemaker-edge/SagemakerEdgeManagerErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/sagemaker-edge/SagemakerEdgeManagerEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in SagemakerEdgeManagerClient header */
#include <aws/sagemaker-edge/model/GetDeploymentsResult.h>
#include <aws/sagemaker-edge/model/GetDeviceRegistrationResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in SagemakerEdgeManagerClient header */

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

  namespace SagemakerEdgeManager
  {
    using SagemakerEdgeManagerClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using SagemakerEdgeManagerEndpointProviderBase = Aws::SagemakerEdgeManager::Endpoint::SagemakerEdgeManagerEndpointProviderBase;
    using SagemakerEdgeManagerEndpointProvider = Aws::SagemakerEdgeManager::Endpoint::SagemakerEdgeManagerEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in SagemakerEdgeManagerClient header */
      class GetDeploymentsRequest;
      class GetDeviceRegistrationRequest;
      class SendHeartbeatRequest;
      /* End of service model forward declarations required in SagemakerEdgeManagerClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<GetDeploymentsResult, SagemakerEdgeManagerError> GetDeploymentsOutcome;
      typedef Aws::Utils::Outcome<GetDeviceRegistrationResult, SagemakerEdgeManagerError> GetDeviceRegistrationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SagemakerEdgeManagerError> SendHeartbeatOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<GetDeploymentsOutcome> GetDeploymentsOutcomeCallable;
      typedef std::future<GetDeviceRegistrationOutcome> GetDeviceRegistrationOutcomeCallable;
      typedef std::future<SendHeartbeatOutcome> SendHeartbeatOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class SagemakerEdgeManagerClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const SagemakerEdgeManagerClient*, const Model::GetDeploymentsRequest&, const Model::GetDeploymentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeploymentsResponseReceivedHandler;
    typedef std::function<void(const SagemakerEdgeManagerClient*, const Model::GetDeviceRegistrationRequest&, const Model::GetDeviceRegistrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeviceRegistrationResponseReceivedHandler;
    typedef std::function<void(const SagemakerEdgeManagerClient*, const Model::SendHeartbeatRequest&, const Model::SendHeartbeatOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendHeartbeatResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace SagemakerEdgeManager
} // namespace Aws
