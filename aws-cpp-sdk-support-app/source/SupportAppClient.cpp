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

#include <aws/support-app/SupportAppClient.h>
#include <aws/support-app/SupportAppEndpoint.h>
#include <aws/support-app/SupportAppErrorMarshaller.h>
#include <aws/support-app/model/CreateSlackChannelConfigurationRequest.h>
#include <aws/support-app/model/DeleteAccountAliasRequest.h>
#include <aws/support-app/model/DeleteSlackChannelConfigurationRequest.h>
#include <aws/support-app/model/DeleteSlackWorkspaceConfigurationRequest.h>
#include <aws/support-app/model/GetAccountAliasRequest.h>
#include <aws/support-app/model/ListSlackChannelConfigurationsRequest.h>
#include <aws/support-app/model/ListSlackWorkspaceConfigurationsRequest.h>
#include <aws/support-app/model/PutAccountAliasRequest.h>
#include <aws/support-app/model/UpdateSlackChannelConfigurationRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SupportApp;
using namespace Aws::SupportApp::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "supportapp";
static const char* ALLOCATION_TAG = "SupportAppClient";

SupportAppClient::SupportAppClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SupportAppErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SupportAppClient::SupportAppClient(const AWSCredentials& credentials,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SupportAppErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SupportAppClient::SupportAppClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SupportAppErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SupportAppClient::~SupportAppClient()
{
}

void SupportAppClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Support App");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + SupportAppEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void SupportAppClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

CreateSlackChannelConfigurationOutcome SupportAppClient::CreateSlackChannelConfiguration(const CreateSlackChannelConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/control/create-slack-channel-configuration");
  return CreateSlackChannelConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/control/delete-account-alias");
  return DeleteAccountAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/control/delete-slack-channel-configuration");
  return DeleteSlackChannelConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/control/delete-slack-workspace-configuration");
  return DeleteSlackWorkspaceConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/control/get-account-alias");
  return GetAccountAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/control/list-slack-channel-configurations");
  return ListSlackChannelConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/control/list-slack-workspace-configurations");
  return ListSlackWorkspaceConfigurationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/control/put-account-alias");
  return PutAccountAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

UpdateSlackChannelConfigurationOutcome SupportAppClient::UpdateSlackChannelConfiguration(const UpdateSlackChannelConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/control/update-slack-channel-configuration");
  return UpdateSlackChannelConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

