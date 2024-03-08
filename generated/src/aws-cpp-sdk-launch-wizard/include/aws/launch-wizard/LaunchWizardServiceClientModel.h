/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/launch-wizard/LaunchWizardErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/launch-wizard/LaunchWizardEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in LaunchWizardClient header */
#include <aws/launch-wizard/model/CreateDeploymentResult.h>
#include <aws/launch-wizard/model/DeleteDeploymentResult.h>
#include <aws/launch-wizard/model/GetDeploymentResult.h>
#include <aws/launch-wizard/model/GetWorkloadResult.h>
#include <aws/launch-wizard/model/ListDeploymentEventsResult.h>
#include <aws/launch-wizard/model/ListDeploymentsResult.h>
#include <aws/launch-wizard/model/ListWorkloadDeploymentPatternsResult.h>
#include <aws/launch-wizard/model/ListWorkloadsResult.h>
/* End of service model headers required in LaunchWizardClient header */

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

  namespace LaunchWizard
  {
    using LaunchWizardClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using LaunchWizardEndpointProviderBase = Aws::LaunchWizard::Endpoint::LaunchWizardEndpointProviderBase;
    using LaunchWizardEndpointProvider = Aws::LaunchWizard::Endpoint::LaunchWizardEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in LaunchWizardClient header */
      class CreateDeploymentRequest;
      class DeleteDeploymentRequest;
      class GetDeploymentRequest;
      class GetWorkloadRequest;
      class ListDeploymentEventsRequest;
      class ListDeploymentsRequest;
      class ListWorkloadDeploymentPatternsRequest;
      class ListWorkloadsRequest;
      /* End of service model forward declarations required in LaunchWizardClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateDeploymentResult, LaunchWizardError> CreateDeploymentOutcome;
      typedef Aws::Utils::Outcome<DeleteDeploymentResult, LaunchWizardError> DeleteDeploymentOutcome;
      typedef Aws::Utils::Outcome<GetDeploymentResult, LaunchWizardError> GetDeploymentOutcome;
      typedef Aws::Utils::Outcome<GetWorkloadResult, LaunchWizardError> GetWorkloadOutcome;
      typedef Aws::Utils::Outcome<ListDeploymentEventsResult, LaunchWizardError> ListDeploymentEventsOutcome;
      typedef Aws::Utils::Outcome<ListDeploymentsResult, LaunchWizardError> ListDeploymentsOutcome;
      typedef Aws::Utils::Outcome<ListWorkloadDeploymentPatternsResult, LaunchWizardError> ListWorkloadDeploymentPatternsOutcome;
      typedef Aws::Utils::Outcome<ListWorkloadsResult, LaunchWizardError> ListWorkloadsOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateDeploymentOutcome> CreateDeploymentOutcomeCallable;
      typedef std::future<DeleteDeploymentOutcome> DeleteDeploymentOutcomeCallable;
      typedef std::future<GetDeploymentOutcome> GetDeploymentOutcomeCallable;
      typedef std::future<GetWorkloadOutcome> GetWorkloadOutcomeCallable;
      typedef std::future<ListDeploymentEventsOutcome> ListDeploymentEventsOutcomeCallable;
      typedef std::future<ListDeploymentsOutcome> ListDeploymentsOutcomeCallable;
      typedef std::future<ListWorkloadDeploymentPatternsOutcome> ListWorkloadDeploymentPatternsOutcomeCallable;
      typedef std::future<ListWorkloadsOutcome> ListWorkloadsOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class LaunchWizardClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const LaunchWizardClient*, const Model::CreateDeploymentRequest&, const Model::CreateDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDeploymentResponseReceivedHandler;
    typedef std::function<void(const LaunchWizardClient*, const Model::DeleteDeploymentRequest&, const Model::DeleteDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDeploymentResponseReceivedHandler;
    typedef std::function<void(const LaunchWizardClient*, const Model::GetDeploymentRequest&, const Model::GetDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeploymentResponseReceivedHandler;
    typedef std::function<void(const LaunchWizardClient*, const Model::GetWorkloadRequest&, const Model::GetWorkloadOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkloadResponseReceivedHandler;
    typedef std::function<void(const LaunchWizardClient*, const Model::ListDeploymentEventsRequest&, const Model::ListDeploymentEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeploymentEventsResponseReceivedHandler;
    typedef std::function<void(const LaunchWizardClient*, const Model::ListDeploymentsRequest&, const Model::ListDeploymentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeploymentsResponseReceivedHandler;
    typedef std::function<void(const LaunchWizardClient*, const Model::ListWorkloadDeploymentPatternsRequest&, const Model::ListWorkloadDeploymentPatternsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorkloadDeploymentPatternsResponseReceivedHandler;
    typedef std::function<void(const LaunchWizardClient*, const Model::ListWorkloadsRequest&, const Model::ListWorkloadsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorkloadsResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace LaunchWizard
} // namespace Aws
