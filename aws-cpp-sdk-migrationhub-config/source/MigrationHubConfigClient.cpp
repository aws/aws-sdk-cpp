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

#include <aws/migrationhub-config/MigrationHubConfigClient.h>
#include <aws/migrationhub-config/MigrationHubConfigEndpoint.h>
#include <aws/migrationhub-config/MigrationHubConfigErrorMarshaller.h>
#include <aws/migrationhub-config/model/CreateHomeRegionControlRequest.h>
#include <aws/migrationhub-config/model/DescribeHomeRegionControlsRequest.h>
#include <aws/migrationhub-config/model/GetHomeRegionRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MigrationHubConfig;
using namespace Aws::MigrationHubConfig::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "mgh";
static const char* ALLOCATION_TAG = "MigrationHubConfigClient";


MigrationHubConfigClient::MigrationHubConfigClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<MigrationHubConfigErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MigrationHubConfigClient::MigrationHubConfigClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<MigrationHubConfigErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MigrationHubConfigClient::MigrationHubConfigClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<MigrationHubConfigErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MigrationHubConfigClient::~MigrationHubConfigClient()
{
}

void MigrationHubConfigClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + MigrationHubConfigEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void MigrationHubConfigClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateHomeRegionControlOutcome MigrationHubConfigClient::CreateHomeRegionControl(const CreateHomeRegionControlRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateHomeRegionControlOutcome(CreateHomeRegionControlResult(outcome.GetResult()));
  }
  else
  {
    return CreateHomeRegionControlOutcome(outcome.GetError());
  }
}

CreateHomeRegionControlOutcomeCallable MigrationHubConfigClient::CreateHomeRegionControlCallable(const CreateHomeRegionControlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateHomeRegionControlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateHomeRegionControl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubConfigClient::CreateHomeRegionControlAsync(const CreateHomeRegionControlRequest& request, const CreateHomeRegionControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateHomeRegionControlAsyncHelper( request, handler, context ); } );
}

void MigrationHubConfigClient::CreateHomeRegionControlAsyncHelper(const CreateHomeRegionControlRequest& request, const CreateHomeRegionControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateHomeRegionControl(request), context);
}

DescribeHomeRegionControlsOutcome MigrationHubConfigClient::DescribeHomeRegionControls(const DescribeHomeRegionControlsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeHomeRegionControlsOutcome(DescribeHomeRegionControlsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeHomeRegionControlsOutcome(outcome.GetError());
  }
}

DescribeHomeRegionControlsOutcomeCallable MigrationHubConfigClient::DescribeHomeRegionControlsCallable(const DescribeHomeRegionControlsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeHomeRegionControlsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeHomeRegionControls(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubConfigClient::DescribeHomeRegionControlsAsync(const DescribeHomeRegionControlsRequest& request, const DescribeHomeRegionControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeHomeRegionControlsAsyncHelper( request, handler, context ); } );
}

void MigrationHubConfigClient::DescribeHomeRegionControlsAsyncHelper(const DescribeHomeRegionControlsRequest& request, const DescribeHomeRegionControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeHomeRegionControls(request), context);
}

GetHomeRegionOutcome MigrationHubConfigClient::GetHomeRegion(const GetHomeRegionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetHomeRegionOutcome(GetHomeRegionResult(outcome.GetResult()));
  }
  else
  {
    return GetHomeRegionOutcome(outcome.GetError());
  }
}

GetHomeRegionOutcomeCallable MigrationHubConfigClient::GetHomeRegionCallable(const GetHomeRegionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetHomeRegionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetHomeRegion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubConfigClient::GetHomeRegionAsync(const GetHomeRegionRequest& request, const GetHomeRegionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetHomeRegionAsyncHelper( request, handler, context ); } );
}

void MigrationHubConfigClient::GetHomeRegionAsyncHelper(const GetHomeRegionRequest& request, const GetHomeRegionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetHomeRegion(request), context);
}

