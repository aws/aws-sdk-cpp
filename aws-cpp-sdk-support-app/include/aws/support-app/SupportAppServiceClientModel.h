/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/support-app/SupportAppErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/support-app/SupportAppEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in SupportAppClient header */
#include <aws/support-app/model/CreateSlackChannelConfigurationResult.h>
#include <aws/support-app/model/DeleteAccountAliasResult.h>
#include <aws/support-app/model/DeleteSlackChannelConfigurationResult.h>
#include <aws/support-app/model/DeleteSlackWorkspaceConfigurationResult.h>
#include <aws/support-app/model/GetAccountAliasResult.h>
#include <aws/support-app/model/ListSlackChannelConfigurationsResult.h>
#include <aws/support-app/model/ListSlackWorkspaceConfigurationsResult.h>
#include <aws/support-app/model/PutAccountAliasResult.h>
#include <aws/support-app/model/RegisterSlackWorkspaceForOrganizationResult.h>
#include <aws/support-app/model/UpdateSlackChannelConfigurationResult.h>
/* End of service model headers required in SupportAppClient header */

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

  namespace SupportApp
  {
    using SupportAppClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using SupportAppEndpointProviderBase = Aws::SupportApp::Endpoint::SupportAppEndpointProviderBase;
    using SupportAppEndpointProvider = Aws::SupportApp::Endpoint::SupportAppEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in SupportAppClient header */
      class CreateSlackChannelConfigurationRequest;
      class DeleteAccountAliasRequest;
      class DeleteSlackChannelConfigurationRequest;
      class DeleteSlackWorkspaceConfigurationRequest;
      class GetAccountAliasRequest;
      class ListSlackChannelConfigurationsRequest;
      class ListSlackWorkspaceConfigurationsRequest;
      class PutAccountAliasRequest;
      class RegisterSlackWorkspaceForOrganizationRequest;
      class UpdateSlackChannelConfigurationRequest;
      /* End of service model forward declarations required in SupportAppClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateSlackChannelConfigurationResult, SupportAppError> CreateSlackChannelConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteAccountAliasResult, SupportAppError> DeleteAccountAliasOutcome;
      typedef Aws::Utils::Outcome<DeleteSlackChannelConfigurationResult, SupportAppError> DeleteSlackChannelConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeleteSlackWorkspaceConfigurationResult, SupportAppError> DeleteSlackWorkspaceConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetAccountAliasResult, SupportAppError> GetAccountAliasOutcome;
      typedef Aws::Utils::Outcome<ListSlackChannelConfigurationsResult, SupportAppError> ListSlackChannelConfigurationsOutcome;
      typedef Aws::Utils::Outcome<ListSlackWorkspaceConfigurationsResult, SupportAppError> ListSlackWorkspaceConfigurationsOutcome;
      typedef Aws::Utils::Outcome<PutAccountAliasResult, SupportAppError> PutAccountAliasOutcome;
      typedef Aws::Utils::Outcome<RegisterSlackWorkspaceForOrganizationResult, SupportAppError> RegisterSlackWorkspaceForOrganizationOutcome;
      typedef Aws::Utils::Outcome<UpdateSlackChannelConfigurationResult, SupportAppError> UpdateSlackChannelConfigurationOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateSlackChannelConfigurationOutcome> CreateSlackChannelConfigurationOutcomeCallable;
      typedef std::future<DeleteAccountAliasOutcome> DeleteAccountAliasOutcomeCallable;
      typedef std::future<DeleteSlackChannelConfigurationOutcome> DeleteSlackChannelConfigurationOutcomeCallable;
      typedef std::future<DeleteSlackWorkspaceConfigurationOutcome> DeleteSlackWorkspaceConfigurationOutcomeCallable;
      typedef std::future<GetAccountAliasOutcome> GetAccountAliasOutcomeCallable;
      typedef std::future<ListSlackChannelConfigurationsOutcome> ListSlackChannelConfigurationsOutcomeCallable;
      typedef std::future<ListSlackWorkspaceConfigurationsOutcome> ListSlackWorkspaceConfigurationsOutcomeCallable;
      typedef std::future<PutAccountAliasOutcome> PutAccountAliasOutcomeCallable;
      typedef std::future<RegisterSlackWorkspaceForOrganizationOutcome> RegisterSlackWorkspaceForOrganizationOutcomeCallable;
      typedef std::future<UpdateSlackChannelConfigurationOutcome> UpdateSlackChannelConfigurationOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class SupportAppClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const SupportAppClient*, const Model::CreateSlackChannelConfigurationRequest&, const Model::CreateSlackChannelConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSlackChannelConfigurationResponseReceivedHandler;
    typedef std::function<void(const SupportAppClient*, const Model::DeleteAccountAliasRequest&, const Model::DeleteAccountAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccountAliasResponseReceivedHandler;
    typedef std::function<void(const SupportAppClient*, const Model::DeleteSlackChannelConfigurationRequest&, const Model::DeleteSlackChannelConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSlackChannelConfigurationResponseReceivedHandler;
    typedef std::function<void(const SupportAppClient*, const Model::DeleteSlackWorkspaceConfigurationRequest&, const Model::DeleteSlackWorkspaceConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSlackWorkspaceConfigurationResponseReceivedHandler;
    typedef std::function<void(const SupportAppClient*, const Model::GetAccountAliasRequest&, const Model::GetAccountAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccountAliasResponseReceivedHandler;
    typedef std::function<void(const SupportAppClient*, const Model::ListSlackChannelConfigurationsRequest&, const Model::ListSlackChannelConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSlackChannelConfigurationsResponseReceivedHandler;
    typedef std::function<void(const SupportAppClient*, const Model::ListSlackWorkspaceConfigurationsRequest&, const Model::ListSlackWorkspaceConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSlackWorkspaceConfigurationsResponseReceivedHandler;
    typedef std::function<void(const SupportAppClient*, const Model::PutAccountAliasRequest&, const Model::PutAccountAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAccountAliasResponseReceivedHandler;
    typedef std::function<void(const SupportAppClient*, const Model::RegisterSlackWorkspaceForOrganizationRequest&, const Model::RegisterSlackWorkspaceForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterSlackWorkspaceForOrganizationResponseReceivedHandler;
    typedef std::function<void(const SupportAppClient*, const Model::UpdateSlackChannelConfigurationRequest&, const Model::UpdateSlackChannelConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSlackChannelConfigurationResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace SupportApp
} // namespace Aws
