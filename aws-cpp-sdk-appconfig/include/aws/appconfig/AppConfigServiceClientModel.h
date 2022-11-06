/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/appconfig/AppConfigErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/appconfig/AppConfigEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in AppConfigClient header */
#include <aws/appconfig/model/CreateApplicationResult.h>
#include <aws/appconfig/model/CreateConfigurationProfileResult.h>
#include <aws/appconfig/model/CreateDeploymentStrategyResult.h>
#include <aws/appconfig/model/CreateEnvironmentResult.h>
#include <aws/appconfig/model/CreateExtensionResult.h>
#include <aws/appconfig/model/CreateExtensionAssociationResult.h>
#include <aws/appconfig/model/CreateHostedConfigurationVersionResult.h>
#include <aws/appconfig/model/GetApplicationResult.h>
#include <aws/appconfig/model/GetConfigurationProfileResult.h>
#include <aws/appconfig/model/GetDeploymentResult.h>
#include <aws/appconfig/model/GetDeploymentStrategyResult.h>
#include <aws/appconfig/model/GetEnvironmentResult.h>
#include <aws/appconfig/model/GetExtensionResult.h>
#include <aws/appconfig/model/GetExtensionAssociationResult.h>
#include <aws/appconfig/model/GetHostedConfigurationVersionResult.h>
#include <aws/appconfig/model/ListApplicationsResult.h>
#include <aws/appconfig/model/ListConfigurationProfilesResult.h>
#include <aws/appconfig/model/ListDeploymentStrategiesResult.h>
#include <aws/appconfig/model/ListDeploymentsResult.h>
#include <aws/appconfig/model/ListEnvironmentsResult.h>
#include <aws/appconfig/model/ListExtensionAssociationsResult.h>
#include <aws/appconfig/model/ListExtensionsResult.h>
#include <aws/appconfig/model/ListHostedConfigurationVersionsResult.h>
#include <aws/appconfig/model/ListTagsForResourceResult.h>
#include <aws/appconfig/model/StartDeploymentResult.h>
#include <aws/appconfig/model/StopDeploymentResult.h>
#include <aws/appconfig/model/UpdateApplicationResult.h>
#include <aws/appconfig/model/UpdateConfigurationProfileResult.h>
#include <aws/appconfig/model/UpdateDeploymentStrategyResult.h>
#include <aws/appconfig/model/UpdateEnvironmentResult.h>
#include <aws/appconfig/model/UpdateExtensionResult.h>
#include <aws/appconfig/model/UpdateExtensionAssociationResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in AppConfigClient header */

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

  namespace AppConfig
  {
    using AppConfigClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using AppConfigEndpointProviderBase = Aws::AppConfig::Endpoint::AppConfigEndpointProviderBase;
    using AppConfigEndpointProvider = Aws::AppConfig::Endpoint::AppConfigEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in AppConfigClient header */
      class CreateApplicationRequest;
      class CreateConfigurationProfileRequest;
      class CreateDeploymentStrategyRequest;
      class CreateEnvironmentRequest;
      class CreateExtensionRequest;
      class CreateExtensionAssociationRequest;
      class CreateHostedConfigurationVersionRequest;
      class DeleteApplicationRequest;
      class DeleteConfigurationProfileRequest;
      class DeleteDeploymentStrategyRequest;
      class DeleteEnvironmentRequest;
      class DeleteExtensionRequest;
      class DeleteExtensionAssociationRequest;
      class DeleteHostedConfigurationVersionRequest;
      class GetApplicationRequest;
      class GetConfigurationProfileRequest;
      class GetDeploymentRequest;
      class GetDeploymentStrategyRequest;
      class GetEnvironmentRequest;
      class GetExtensionRequest;
      class GetExtensionAssociationRequest;
      class GetHostedConfigurationVersionRequest;
      class ListApplicationsRequest;
      class ListConfigurationProfilesRequest;
      class ListDeploymentStrategiesRequest;
      class ListDeploymentsRequest;
      class ListEnvironmentsRequest;
      class ListExtensionAssociationsRequest;
      class ListExtensionsRequest;
      class ListHostedConfigurationVersionsRequest;
      class ListTagsForResourceRequest;
      class StartDeploymentRequest;
      class StopDeploymentRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateApplicationRequest;
      class UpdateConfigurationProfileRequest;
      class UpdateDeploymentStrategyRequest;
      class UpdateEnvironmentRequest;
      class UpdateExtensionRequest;
      class UpdateExtensionAssociationRequest;
      class ValidateConfigurationRequest;
      /* End of service model forward declarations required in AppConfigClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateApplicationResult, AppConfigError> CreateApplicationOutcome;
      typedef Aws::Utils::Outcome<CreateConfigurationProfileResult, AppConfigError> CreateConfigurationProfileOutcome;
      typedef Aws::Utils::Outcome<CreateDeploymentStrategyResult, AppConfigError> CreateDeploymentStrategyOutcome;
      typedef Aws::Utils::Outcome<CreateEnvironmentResult, AppConfigError> CreateEnvironmentOutcome;
      typedef Aws::Utils::Outcome<CreateExtensionResult, AppConfigError> CreateExtensionOutcome;
      typedef Aws::Utils::Outcome<CreateExtensionAssociationResult, AppConfigError> CreateExtensionAssociationOutcome;
      typedef Aws::Utils::Outcome<CreateHostedConfigurationVersionResult, AppConfigError> CreateHostedConfigurationVersionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AppConfigError> DeleteApplicationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AppConfigError> DeleteConfigurationProfileOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AppConfigError> DeleteDeploymentStrategyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AppConfigError> DeleteEnvironmentOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AppConfigError> DeleteExtensionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AppConfigError> DeleteExtensionAssociationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AppConfigError> DeleteHostedConfigurationVersionOutcome;
      typedef Aws::Utils::Outcome<GetApplicationResult, AppConfigError> GetApplicationOutcome;
      typedef Aws::Utils::Outcome<GetConfigurationProfileResult, AppConfigError> GetConfigurationProfileOutcome;
      typedef Aws::Utils::Outcome<GetDeploymentResult, AppConfigError> GetDeploymentOutcome;
      typedef Aws::Utils::Outcome<GetDeploymentStrategyResult, AppConfigError> GetDeploymentStrategyOutcome;
      typedef Aws::Utils::Outcome<GetEnvironmentResult, AppConfigError> GetEnvironmentOutcome;
      typedef Aws::Utils::Outcome<GetExtensionResult, AppConfigError> GetExtensionOutcome;
      typedef Aws::Utils::Outcome<GetExtensionAssociationResult, AppConfigError> GetExtensionAssociationOutcome;
      typedef Aws::Utils::Outcome<GetHostedConfigurationVersionResult, AppConfigError> GetHostedConfigurationVersionOutcome;
      typedef Aws::Utils::Outcome<ListApplicationsResult, AppConfigError> ListApplicationsOutcome;
      typedef Aws::Utils::Outcome<ListConfigurationProfilesResult, AppConfigError> ListConfigurationProfilesOutcome;
      typedef Aws::Utils::Outcome<ListDeploymentStrategiesResult, AppConfigError> ListDeploymentStrategiesOutcome;
      typedef Aws::Utils::Outcome<ListDeploymentsResult, AppConfigError> ListDeploymentsOutcome;
      typedef Aws::Utils::Outcome<ListEnvironmentsResult, AppConfigError> ListEnvironmentsOutcome;
      typedef Aws::Utils::Outcome<ListExtensionAssociationsResult, AppConfigError> ListExtensionAssociationsOutcome;
      typedef Aws::Utils::Outcome<ListExtensionsResult, AppConfigError> ListExtensionsOutcome;
      typedef Aws::Utils::Outcome<ListHostedConfigurationVersionsResult, AppConfigError> ListHostedConfigurationVersionsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, AppConfigError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<StartDeploymentResult, AppConfigError> StartDeploymentOutcome;
      typedef Aws::Utils::Outcome<StopDeploymentResult, AppConfigError> StopDeploymentOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AppConfigError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AppConfigError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateApplicationResult, AppConfigError> UpdateApplicationOutcome;
      typedef Aws::Utils::Outcome<UpdateConfigurationProfileResult, AppConfigError> UpdateConfigurationProfileOutcome;
      typedef Aws::Utils::Outcome<UpdateDeploymentStrategyResult, AppConfigError> UpdateDeploymentStrategyOutcome;
      typedef Aws::Utils::Outcome<UpdateEnvironmentResult, AppConfigError> UpdateEnvironmentOutcome;
      typedef Aws::Utils::Outcome<UpdateExtensionResult, AppConfigError> UpdateExtensionOutcome;
      typedef Aws::Utils::Outcome<UpdateExtensionAssociationResult, AppConfigError> UpdateExtensionAssociationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AppConfigError> ValidateConfigurationOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
      typedef std::future<CreateConfigurationProfileOutcome> CreateConfigurationProfileOutcomeCallable;
      typedef std::future<CreateDeploymentStrategyOutcome> CreateDeploymentStrategyOutcomeCallable;
      typedef std::future<CreateEnvironmentOutcome> CreateEnvironmentOutcomeCallable;
      typedef std::future<CreateExtensionOutcome> CreateExtensionOutcomeCallable;
      typedef std::future<CreateExtensionAssociationOutcome> CreateExtensionAssociationOutcomeCallable;
      typedef std::future<CreateHostedConfigurationVersionOutcome> CreateHostedConfigurationVersionOutcomeCallable;
      typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
      typedef std::future<DeleteConfigurationProfileOutcome> DeleteConfigurationProfileOutcomeCallable;
      typedef std::future<DeleteDeploymentStrategyOutcome> DeleteDeploymentStrategyOutcomeCallable;
      typedef std::future<DeleteEnvironmentOutcome> DeleteEnvironmentOutcomeCallable;
      typedef std::future<DeleteExtensionOutcome> DeleteExtensionOutcomeCallable;
      typedef std::future<DeleteExtensionAssociationOutcome> DeleteExtensionAssociationOutcomeCallable;
      typedef std::future<DeleteHostedConfigurationVersionOutcome> DeleteHostedConfigurationVersionOutcomeCallable;
      typedef std::future<GetApplicationOutcome> GetApplicationOutcomeCallable;
      typedef std::future<GetConfigurationProfileOutcome> GetConfigurationProfileOutcomeCallable;
      typedef std::future<GetDeploymentOutcome> GetDeploymentOutcomeCallable;
      typedef std::future<GetDeploymentStrategyOutcome> GetDeploymentStrategyOutcomeCallable;
      typedef std::future<GetEnvironmentOutcome> GetEnvironmentOutcomeCallable;
      typedef std::future<GetExtensionOutcome> GetExtensionOutcomeCallable;
      typedef std::future<GetExtensionAssociationOutcome> GetExtensionAssociationOutcomeCallable;
      typedef std::future<GetHostedConfigurationVersionOutcome> GetHostedConfigurationVersionOutcomeCallable;
      typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
      typedef std::future<ListConfigurationProfilesOutcome> ListConfigurationProfilesOutcomeCallable;
      typedef std::future<ListDeploymentStrategiesOutcome> ListDeploymentStrategiesOutcomeCallable;
      typedef std::future<ListDeploymentsOutcome> ListDeploymentsOutcomeCallable;
      typedef std::future<ListEnvironmentsOutcome> ListEnvironmentsOutcomeCallable;
      typedef std::future<ListExtensionAssociationsOutcome> ListExtensionAssociationsOutcomeCallable;
      typedef std::future<ListExtensionsOutcome> ListExtensionsOutcomeCallable;
      typedef std::future<ListHostedConfigurationVersionsOutcome> ListHostedConfigurationVersionsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<StartDeploymentOutcome> StartDeploymentOutcomeCallable;
      typedef std::future<StopDeploymentOutcome> StopDeploymentOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateApplicationOutcome> UpdateApplicationOutcomeCallable;
      typedef std::future<UpdateConfigurationProfileOutcome> UpdateConfigurationProfileOutcomeCallable;
      typedef std::future<UpdateDeploymentStrategyOutcome> UpdateDeploymentStrategyOutcomeCallable;
      typedef std::future<UpdateEnvironmentOutcome> UpdateEnvironmentOutcomeCallable;
      typedef std::future<UpdateExtensionOutcome> UpdateExtensionOutcomeCallable;
      typedef std::future<UpdateExtensionAssociationOutcome> UpdateExtensionAssociationOutcomeCallable;
      typedef std::future<ValidateConfigurationOutcome> ValidateConfigurationOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class AppConfigClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const AppConfigClient*, const Model::CreateApplicationRequest&, const Model::CreateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::CreateConfigurationProfileRequest&, const Model::CreateConfigurationProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConfigurationProfileResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::CreateDeploymentStrategyRequest&, const Model::CreateDeploymentStrategyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDeploymentStrategyResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::CreateEnvironmentRequest&, const Model::CreateEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEnvironmentResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::CreateExtensionRequest&, const Model::CreateExtensionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateExtensionResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::CreateExtensionAssociationRequest&, const Model::CreateExtensionAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateExtensionAssociationResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::CreateHostedConfigurationVersionRequest&, Model::CreateHostedConfigurationVersionOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateHostedConfigurationVersionResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::DeleteApplicationRequest&, const Model::DeleteApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::DeleteConfigurationProfileRequest&, const Model::DeleteConfigurationProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfigurationProfileResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::DeleteDeploymentStrategyRequest&, const Model::DeleteDeploymentStrategyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDeploymentStrategyResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::DeleteEnvironmentRequest&, const Model::DeleteEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEnvironmentResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::DeleteExtensionRequest&, const Model::DeleteExtensionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteExtensionResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::DeleteExtensionAssociationRequest&, const Model::DeleteExtensionAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteExtensionAssociationResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::DeleteHostedConfigurationVersionRequest&, const Model::DeleteHostedConfigurationVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteHostedConfigurationVersionResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::GetApplicationRequest&, const Model::GetApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApplicationResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::GetConfigurationProfileRequest&, const Model::GetConfigurationProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConfigurationProfileResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::GetDeploymentRequest&, const Model::GetDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeploymentResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::GetDeploymentStrategyRequest&, const Model::GetDeploymentStrategyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeploymentStrategyResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::GetEnvironmentRequest&, const Model::GetEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEnvironmentResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::GetExtensionRequest&, const Model::GetExtensionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetExtensionResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::GetExtensionAssociationRequest&, const Model::GetExtensionAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetExtensionAssociationResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::GetHostedConfigurationVersionRequest&, Model::GetHostedConfigurationVersionOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetHostedConfigurationVersionResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::ListApplicationsRequest&, const Model::ListApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationsResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::ListConfigurationProfilesRequest&, const Model::ListConfigurationProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConfigurationProfilesResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::ListDeploymentStrategiesRequest&, const Model::ListDeploymentStrategiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeploymentStrategiesResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::ListDeploymentsRequest&, const Model::ListDeploymentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeploymentsResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::ListEnvironmentsRequest&, const Model::ListEnvironmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEnvironmentsResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::ListExtensionAssociationsRequest&, const Model::ListExtensionAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListExtensionAssociationsResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::ListExtensionsRequest&, const Model::ListExtensionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListExtensionsResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::ListHostedConfigurationVersionsRequest&, const Model::ListHostedConfigurationVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListHostedConfigurationVersionsResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::StartDeploymentRequest&, const Model::StartDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDeploymentResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::StopDeploymentRequest&, const Model::StopDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopDeploymentResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::UpdateApplicationRequest&, const Model::UpdateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApplicationResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::UpdateConfigurationProfileRequest&, const Model::UpdateConfigurationProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConfigurationProfileResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::UpdateDeploymentStrategyRequest&, const Model::UpdateDeploymentStrategyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDeploymentStrategyResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::UpdateEnvironmentRequest&, const Model::UpdateEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEnvironmentResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::UpdateExtensionRequest&, const Model::UpdateExtensionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateExtensionResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::UpdateExtensionAssociationRequest&, const Model::UpdateExtensionAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateExtensionAssociationResponseReceivedHandler;
    typedef std::function<void(const AppConfigClient*, const Model::ValidateConfigurationRequest&, const Model::ValidateConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ValidateConfigurationResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace AppConfig
} // namespace Aws
