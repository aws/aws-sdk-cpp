/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/support-app/SupportAppClient.h>
#include <aws/support-app/SupportAppErrorMarshaller.h>
#include <aws/support-app/SupportAppEndpointProvider.h>
#include <aws/support-app/model/CreateSlackChannelConfigurationRequest.h>
#include <aws/support-app/model/DeleteAccountAliasRequest.h>
#include <aws/support-app/model/DeleteSlackChannelConfigurationRequest.h>
#include <aws/support-app/model/DeleteSlackWorkspaceConfigurationRequest.h>
#include <aws/support-app/model/GetAccountAliasRequest.h>
#include <aws/support-app/model/ListSlackChannelConfigurationsRequest.h>
#include <aws/support-app/model/ListSlackWorkspaceConfigurationsRequest.h>
#include <aws/support-app/model/PutAccountAliasRequest.h>
#include <aws/support-app/model/RegisterSlackWorkspaceForOrganizationRequest.h>
#include <aws/support-app/model/UpdateSlackChannelConfigurationRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SupportApp;
using namespace Aws::SupportApp::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* SupportAppClient::SERVICE_NAME = "supportapp";
const char* SupportAppClient::ALLOCATION_TAG = "SupportAppClient";

SupportAppClient::SupportAppClient(const SupportApp::SupportAppClientConfiguration& clientConfiguration,
                                   std::shared_ptr<SupportAppEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SupportAppErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

SupportAppClient::SupportAppClient(const AWSCredentials& credentials,
                                   std::shared_ptr<SupportAppEndpointProviderBase> endpointProvider,
                                   const SupportApp::SupportAppClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SupportAppErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

SupportAppClient::SupportAppClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<SupportAppEndpointProviderBase> endpointProvider,
                                   const SupportApp::SupportAppClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SupportAppErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  SupportAppClient::SupportAppClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SupportAppErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<SupportAppEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SupportAppClient::SupportAppClient(const AWSCredentials& credentials,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SupportAppErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SupportAppEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SupportAppClient::SupportAppClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SupportAppErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SupportAppEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
SupportAppClient::~SupportAppClient()
{
}

std::shared_ptr<SupportAppEndpointProviderBase>& SupportAppClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void SupportAppClient::init(const SupportApp::SupportAppClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Support App");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void SupportAppClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateSlackChannelConfigurationOutcome SupportAppClient::CreateSlackChannelConfiguration(const CreateSlackChannelConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSlackChannelConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSlackChannelConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/control/create-slack-channel-configuration");
  return CreateSlackChannelConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSlackChannelConfigurationOutcomeCallable SupportAppClient::CreateSlackChannelConfigurationCallable(const CreateSlackChannelConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSlackChannelConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSlackChannelConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SupportAppClient::CreateSlackChannelConfigurationAsync(const CreateSlackChannelConfigurationRequest& request, const CreateSlackChannelConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSlackChannelConfiguration(request), context);
    } );
}

DeleteAccountAliasOutcome SupportAppClient::DeleteAccountAlias(const DeleteAccountAliasRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAccountAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAccountAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/control/delete-account-alias");
  return DeleteAccountAliasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAccountAliasOutcomeCallable SupportAppClient::DeleteAccountAliasCallable(const DeleteAccountAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAccountAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAccountAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SupportAppClient::DeleteAccountAliasAsync(const DeleteAccountAliasRequest& request, const DeleteAccountAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAccountAlias(request), context);
    } );
}

DeleteSlackChannelConfigurationOutcome SupportAppClient::DeleteSlackChannelConfiguration(const DeleteSlackChannelConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSlackChannelConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSlackChannelConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/control/delete-slack-channel-configuration");
  return DeleteSlackChannelConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSlackChannelConfigurationOutcomeCallable SupportAppClient::DeleteSlackChannelConfigurationCallable(const DeleteSlackChannelConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSlackChannelConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSlackChannelConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SupportAppClient::DeleteSlackChannelConfigurationAsync(const DeleteSlackChannelConfigurationRequest& request, const DeleteSlackChannelConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSlackChannelConfiguration(request), context);
    } );
}

DeleteSlackWorkspaceConfigurationOutcome SupportAppClient::DeleteSlackWorkspaceConfiguration(const DeleteSlackWorkspaceConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSlackWorkspaceConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSlackWorkspaceConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/control/delete-slack-workspace-configuration");
  return DeleteSlackWorkspaceConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSlackWorkspaceConfigurationOutcomeCallable SupportAppClient::DeleteSlackWorkspaceConfigurationCallable(const DeleteSlackWorkspaceConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSlackWorkspaceConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSlackWorkspaceConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SupportAppClient::DeleteSlackWorkspaceConfigurationAsync(const DeleteSlackWorkspaceConfigurationRequest& request, const DeleteSlackWorkspaceConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSlackWorkspaceConfiguration(request), context);
    } );
}

GetAccountAliasOutcome SupportAppClient::GetAccountAlias(const GetAccountAliasRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAccountAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAccountAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/control/get-account-alias");
  return GetAccountAliasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAccountAliasOutcomeCallable SupportAppClient::GetAccountAliasCallable(const GetAccountAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccountAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccountAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SupportAppClient::GetAccountAliasAsync(const GetAccountAliasRequest& request, const GetAccountAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAccountAlias(request), context);
    } );
}

ListSlackChannelConfigurationsOutcome SupportAppClient::ListSlackChannelConfigurations(const ListSlackChannelConfigurationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSlackChannelConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSlackChannelConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/control/list-slack-channel-configurations");
  return ListSlackChannelConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSlackChannelConfigurationsOutcomeCallable SupportAppClient::ListSlackChannelConfigurationsCallable(const ListSlackChannelConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSlackChannelConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSlackChannelConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SupportAppClient::ListSlackChannelConfigurationsAsync(const ListSlackChannelConfigurationsRequest& request, const ListSlackChannelConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSlackChannelConfigurations(request), context);
    } );
}

ListSlackWorkspaceConfigurationsOutcome SupportAppClient::ListSlackWorkspaceConfigurations(const ListSlackWorkspaceConfigurationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSlackWorkspaceConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSlackWorkspaceConfigurations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/control/list-slack-workspace-configurations");
  return ListSlackWorkspaceConfigurationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSlackWorkspaceConfigurationsOutcomeCallable SupportAppClient::ListSlackWorkspaceConfigurationsCallable(const ListSlackWorkspaceConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSlackWorkspaceConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSlackWorkspaceConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SupportAppClient::ListSlackWorkspaceConfigurationsAsync(const ListSlackWorkspaceConfigurationsRequest& request, const ListSlackWorkspaceConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSlackWorkspaceConfigurations(request), context);
    } );
}

PutAccountAliasOutcome SupportAppClient::PutAccountAlias(const PutAccountAliasRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutAccountAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutAccountAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/control/put-account-alias");
  return PutAccountAliasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutAccountAliasOutcomeCallable SupportAppClient::PutAccountAliasCallable(const PutAccountAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAccountAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAccountAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SupportAppClient::PutAccountAliasAsync(const PutAccountAliasRequest& request, const PutAccountAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutAccountAlias(request), context);
    } );
}

RegisterSlackWorkspaceForOrganizationOutcome SupportAppClient::RegisterSlackWorkspaceForOrganization(const RegisterSlackWorkspaceForOrganizationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterSlackWorkspaceForOrganization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterSlackWorkspaceForOrganization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/control/register-slack-workspace-for-organization");
  return RegisterSlackWorkspaceForOrganizationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterSlackWorkspaceForOrganizationOutcomeCallable SupportAppClient::RegisterSlackWorkspaceForOrganizationCallable(const RegisterSlackWorkspaceForOrganizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterSlackWorkspaceForOrganizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterSlackWorkspaceForOrganization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SupportAppClient::RegisterSlackWorkspaceForOrganizationAsync(const RegisterSlackWorkspaceForOrganizationRequest& request, const RegisterSlackWorkspaceForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RegisterSlackWorkspaceForOrganization(request), context);
    } );
}

UpdateSlackChannelConfigurationOutcome SupportAppClient::UpdateSlackChannelConfiguration(const UpdateSlackChannelConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSlackChannelConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSlackChannelConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/control/update-slack-channel-configuration");
  return UpdateSlackChannelConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSlackChannelConfigurationOutcomeCallable SupportAppClient::UpdateSlackChannelConfigurationCallable(const UpdateSlackChannelConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSlackChannelConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSlackChannelConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SupportAppClient::UpdateSlackChannelConfigurationAsync(const UpdateSlackChannelConfigurationRequest& request, const UpdateSlackChannelConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateSlackChannelConfiguration(request), context);
    } );
}

