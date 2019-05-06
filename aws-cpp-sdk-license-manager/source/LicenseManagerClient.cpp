/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

#include <aws/license-manager/LicenseManagerClient.h>
#include <aws/license-manager/LicenseManagerEndpoint.h>
#include <aws/license-manager/LicenseManagerErrorMarshaller.h>
#include <aws/license-manager/model/CreateLicenseConfigurationRequest.h>
#include <aws/license-manager/model/DeleteLicenseConfigurationRequest.h>
#include <aws/license-manager/model/GetLicenseConfigurationRequest.h>
#include <aws/license-manager/model/GetServiceSettingsRequest.h>
#include <aws/license-manager/model/ListAssociationsForLicenseConfigurationRequest.h>
#include <aws/license-manager/model/ListLicenseConfigurationsRequest.h>
#include <aws/license-manager/model/ListLicenseSpecificationsForResourceRequest.h>
#include <aws/license-manager/model/ListResourceInventoryRequest.h>
#include <aws/license-manager/model/ListTagsForResourceRequest.h>
#include <aws/license-manager/model/ListUsageForLicenseConfigurationRequest.h>
#include <aws/license-manager/model/TagResourceRequest.h>
#include <aws/license-manager/model/UntagResourceRequest.h>
#include <aws/license-manager/model/UpdateLicenseConfigurationRequest.h>
#include <aws/license-manager/model/UpdateLicenseSpecificationsForResourceRequest.h>
#include <aws/license-manager/model/UpdateServiceSettingsRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::LicenseManager;
using namespace Aws::LicenseManager::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "license-manager";
static const char* ALLOCATION_TAG = "LicenseManagerClient";


LicenseManagerClient::LicenseManagerClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<LicenseManagerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LicenseManagerClient::LicenseManagerClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<LicenseManagerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LicenseManagerClient::LicenseManagerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<LicenseManagerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LicenseManagerClient::~LicenseManagerClient()
{
}

void LicenseManagerClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + LicenseManagerEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void LicenseManagerClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateLicenseConfigurationOutcome LicenseManagerClient::CreateLicenseConfiguration(const CreateLicenseConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateLicenseConfigurationOutcome(CreateLicenseConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return CreateLicenseConfigurationOutcome(outcome.GetError());
  }
}

CreateLicenseConfigurationOutcomeCallable LicenseManagerClient::CreateLicenseConfigurationCallable(const CreateLicenseConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLicenseConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLicenseConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::CreateLicenseConfigurationAsync(const CreateLicenseConfigurationRequest& request, const CreateLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateLicenseConfigurationAsyncHelper( request, handler, context ); } );
}

void LicenseManagerClient::CreateLicenseConfigurationAsyncHelper(const CreateLicenseConfigurationRequest& request, const CreateLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateLicenseConfiguration(request), context);
}

DeleteLicenseConfigurationOutcome LicenseManagerClient::DeleteLicenseConfiguration(const DeleteLicenseConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteLicenseConfigurationOutcome(DeleteLicenseConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return DeleteLicenseConfigurationOutcome(outcome.GetError());
  }
}

DeleteLicenseConfigurationOutcomeCallable LicenseManagerClient::DeleteLicenseConfigurationCallable(const DeleteLicenseConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLicenseConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLicenseConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::DeleteLicenseConfigurationAsync(const DeleteLicenseConfigurationRequest& request, const DeleteLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteLicenseConfigurationAsyncHelper( request, handler, context ); } );
}

void LicenseManagerClient::DeleteLicenseConfigurationAsyncHelper(const DeleteLicenseConfigurationRequest& request, const DeleteLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteLicenseConfiguration(request), context);
}

GetLicenseConfigurationOutcome LicenseManagerClient::GetLicenseConfiguration(const GetLicenseConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetLicenseConfigurationOutcome(GetLicenseConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return GetLicenseConfigurationOutcome(outcome.GetError());
  }
}

GetLicenseConfigurationOutcomeCallable LicenseManagerClient::GetLicenseConfigurationCallable(const GetLicenseConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLicenseConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLicenseConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::GetLicenseConfigurationAsync(const GetLicenseConfigurationRequest& request, const GetLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetLicenseConfigurationAsyncHelper( request, handler, context ); } );
}

void LicenseManagerClient::GetLicenseConfigurationAsyncHelper(const GetLicenseConfigurationRequest& request, const GetLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetLicenseConfiguration(request), context);
}

GetServiceSettingsOutcome LicenseManagerClient::GetServiceSettings(const GetServiceSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetServiceSettingsOutcome(GetServiceSettingsResult(outcome.GetResult()));
  }
  else
  {
    return GetServiceSettingsOutcome(outcome.GetError());
  }
}

GetServiceSettingsOutcomeCallable LicenseManagerClient::GetServiceSettingsCallable(const GetServiceSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetServiceSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetServiceSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::GetServiceSettingsAsync(const GetServiceSettingsRequest& request, const GetServiceSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetServiceSettingsAsyncHelper( request, handler, context ); } );
}

void LicenseManagerClient::GetServiceSettingsAsyncHelper(const GetServiceSettingsRequest& request, const GetServiceSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetServiceSettings(request), context);
}

ListAssociationsForLicenseConfigurationOutcome LicenseManagerClient::ListAssociationsForLicenseConfiguration(const ListAssociationsForLicenseConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListAssociationsForLicenseConfigurationOutcome(ListAssociationsForLicenseConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return ListAssociationsForLicenseConfigurationOutcome(outcome.GetError());
  }
}

ListAssociationsForLicenseConfigurationOutcomeCallable LicenseManagerClient::ListAssociationsForLicenseConfigurationCallable(const ListAssociationsForLicenseConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAssociationsForLicenseConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAssociationsForLicenseConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::ListAssociationsForLicenseConfigurationAsync(const ListAssociationsForLicenseConfigurationRequest& request, const ListAssociationsForLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAssociationsForLicenseConfigurationAsyncHelper( request, handler, context ); } );
}

void LicenseManagerClient::ListAssociationsForLicenseConfigurationAsyncHelper(const ListAssociationsForLicenseConfigurationRequest& request, const ListAssociationsForLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAssociationsForLicenseConfiguration(request), context);
}

ListLicenseConfigurationsOutcome LicenseManagerClient::ListLicenseConfigurations(const ListLicenseConfigurationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListLicenseConfigurationsOutcome(ListLicenseConfigurationsResult(outcome.GetResult()));
  }
  else
  {
    return ListLicenseConfigurationsOutcome(outcome.GetError());
  }
}

ListLicenseConfigurationsOutcomeCallable LicenseManagerClient::ListLicenseConfigurationsCallable(const ListLicenseConfigurationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLicenseConfigurationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLicenseConfigurations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::ListLicenseConfigurationsAsync(const ListLicenseConfigurationsRequest& request, const ListLicenseConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListLicenseConfigurationsAsyncHelper( request, handler, context ); } );
}

void LicenseManagerClient::ListLicenseConfigurationsAsyncHelper(const ListLicenseConfigurationsRequest& request, const ListLicenseConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListLicenseConfigurations(request), context);
}

ListLicenseSpecificationsForResourceOutcome LicenseManagerClient::ListLicenseSpecificationsForResource(const ListLicenseSpecificationsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListLicenseSpecificationsForResourceOutcome(ListLicenseSpecificationsForResourceResult(outcome.GetResult()));
  }
  else
  {
    return ListLicenseSpecificationsForResourceOutcome(outcome.GetError());
  }
}

ListLicenseSpecificationsForResourceOutcomeCallable LicenseManagerClient::ListLicenseSpecificationsForResourceCallable(const ListLicenseSpecificationsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLicenseSpecificationsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLicenseSpecificationsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::ListLicenseSpecificationsForResourceAsync(const ListLicenseSpecificationsForResourceRequest& request, const ListLicenseSpecificationsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListLicenseSpecificationsForResourceAsyncHelper( request, handler, context ); } );
}

void LicenseManagerClient::ListLicenseSpecificationsForResourceAsyncHelper(const ListLicenseSpecificationsForResourceRequest& request, const ListLicenseSpecificationsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListLicenseSpecificationsForResource(request), context);
}

ListResourceInventoryOutcome LicenseManagerClient::ListResourceInventory(const ListResourceInventoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListResourceInventoryOutcome(ListResourceInventoryResult(outcome.GetResult()));
  }
  else
  {
    return ListResourceInventoryOutcome(outcome.GetError());
  }
}

ListResourceInventoryOutcomeCallable LicenseManagerClient::ListResourceInventoryCallable(const ListResourceInventoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResourceInventoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResourceInventory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::ListResourceInventoryAsync(const ListResourceInventoryRequest& request, const ListResourceInventoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListResourceInventoryAsyncHelper( request, handler, context ); } );
}

void LicenseManagerClient::ListResourceInventoryAsyncHelper(const ListResourceInventoryRequest& request, const ListResourceInventoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListResourceInventory(request), context);
}

ListTagsForResourceOutcome LicenseManagerClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTagsForResourceOutcome(ListTagsForResourceResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsForResourceOutcome(outcome.GetError());
  }
}

ListTagsForResourceOutcomeCallable LicenseManagerClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void LicenseManagerClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

ListUsageForLicenseConfigurationOutcome LicenseManagerClient::ListUsageForLicenseConfiguration(const ListUsageForLicenseConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListUsageForLicenseConfigurationOutcome(ListUsageForLicenseConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return ListUsageForLicenseConfigurationOutcome(outcome.GetError());
  }
}

ListUsageForLicenseConfigurationOutcomeCallable LicenseManagerClient::ListUsageForLicenseConfigurationCallable(const ListUsageForLicenseConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUsageForLicenseConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUsageForLicenseConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::ListUsageForLicenseConfigurationAsync(const ListUsageForLicenseConfigurationRequest& request, const ListUsageForLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListUsageForLicenseConfigurationAsyncHelper( request, handler, context ); } );
}

void LicenseManagerClient::ListUsageForLicenseConfigurationAsyncHelper(const ListUsageForLicenseConfigurationRequest& request, const ListUsageForLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListUsageForLicenseConfiguration(request), context);
}

TagResourceOutcome LicenseManagerClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TagResourceOutcome(TagResourceResult(outcome.GetResult()));
  }
  else
  {
    return TagResourceOutcome(outcome.GetError());
  }
}

TagResourceOutcomeCallable LicenseManagerClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void LicenseManagerClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome LicenseManagerClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UntagResourceOutcome(UntagResourceResult(outcome.GetResult()));
  }
  else
  {
    return UntagResourceOutcome(outcome.GetError());
  }
}

UntagResourceOutcomeCallable LicenseManagerClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void LicenseManagerClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateLicenseConfigurationOutcome LicenseManagerClient::UpdateLicenseConfiguration(const UpdateLicenseConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateLicenseConfigurationOutcome(UpdateLicenseConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return UpdateLicenseConfigurationOutcome(outcome.GetError());
  }
}

UpdateLicenseConfigurationOutcomeCallable LicenseManagerClient::UpdateLicenseConfigurationCallable(const UpdateLicenseConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLicenseConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLicenseConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::UpdateLicenseConfigurationAsync(const UpdateLicenseConfigurationRequest& request, const UpdateLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateLicenseConfigurationAsyncHelper( request, handler, context ); } );
}

void LicenseManagerClient::UpdateLicenseConfigurationAsyncHelper(const UpdateLicenseConfigurationRequest& request, const UpdateLicenseConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateLicenseConfiguration(request), context);
}

UpdateLicenseSpecificationsForResourceOutcome LicenseManagerClient::UpdateLicenseSpecificationsForResource(const UpdateLicenseSpecificationsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateLicenseSpecificationsForResourceOutcome(UpdateLicenseSpecificationsForResourceResult(outcome.GetResult()));
  }
  else
  {
    return UpdateLicenseSpecificationsForResourceOutcome(outcome.GetError());
  }
}

UpdateLicenseSpecificationsForResourceOutcomeCallable LicenseManagerClient::UpdateLicenseSpecificationsForResourceCallable(const UpdateLicenseSpecificationsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLicenseSpecificationsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLicenseSpecificationsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::UpdateLicenseSpecificationsForResourceAsync(const UpdateLicenseSpecificationsForResourceRequest& request, const UpdateLicenseSpecificationsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateLicenseSpecificationsForResourceAsyncHelper( request, handler, context ); } );
}

void LicenseManagerClient::UpdateLicenseSpecificationsForResourceAsyncHelper(const UpdateLicenseSpecificationsForResourceRequest& request, const UpdateLicenseSpecificationsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateLicenseSpecificationsForResource(request), context);
}

UpdateServiceSettingsOutcome LicenseManagerClient::UpdateServiceSettings(const UpdateServiceSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateServiceSettingsOutcome(UpdateServiceSettingsResult(outcome.GetResult()));
  }
  else
  {
    return UpdateServiceSettingsOutcome(outcome.GetError());
  }
}

UpdateServiceSettingsOutcomeCallable LicenseManagerClient::UpdateServiceSettingsCallable(const UpdateServiceSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateServiceSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateServiceSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LicenseManagerClient::UpdateServiceSettingsAsync(const UpdateServiceSettingsRequest& request, const UpdateServiceSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateServiceSettingsAsyncHelper( request, handler, context ); } );
}

void LicenseManagerClient::UpdateServiceSettingsAsyncHelper(const UpdateServiceSettingsRequest& request, const UpdateServiceSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateServiceSettings(request), context);
}

