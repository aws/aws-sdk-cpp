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

#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIClient.h>
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIEndpoint.h>
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIErrorMarshaller.h>
#include <aws/resourcegroupstaggingapi/model/DeleteTagPolicyRequest.h>
#include <aws/resourcegroupstaggingapi/model/DescribeReportCreationRequest.h>
#include <aws/resourcegroupstaggingapi/model/DisableTagPoliciesRequest.h>
#include <aws/resourcegroupstaggingapi/model/EnableTagPoliciesRequest.h>
#include <aws/resourcegroupstaggingapi/model/GetComplianceSummaryRequest.h>
#include <aws/resourcegroupstaggingapi/model/GetEffectiveTagPolicyRequest.h>
#include <aws/resourcegroupstaggingapi/model/GetResourcesRequest.h>
#include <aws/resourcegroupstaggingapi/model/GetTagKeysRequest.h>
#include <aws/resourcegroupstaggingapi/model/GetTagPolicyRequest.h>
#include <aws/resourcegroupstaggingapi/model/GetTagValuesRequest.h>
#include <aws/resourcegroupstaggingapi/model/PutTagPolicyRequest.h>
#include <aws/resourcegroupstaggingapi/model/StartReportCreationRequest.h>
#include <aws/resourcegroupstaggingapi/model/TagResourcesRequest.h>
#include <aws/resourcegroupstaggingapi/model/UntagResourcesRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ResourceGroupsTaggingAPI;
using namespace Aws::ResourceGroupsTaggingAPI::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "tagging";
static const char* ALLOCATION_TAG = "ResourceGroupsTaggingAPIClient";


ResourceGroupsTaggingAPIClient::ResourceGroupsTaggingAPIClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ResourceGroupsTaggingAPIErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ResourceGroupsTaggingAPIClient::ResourceGroupsTaggingAPIClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ResourceGroupsTaggingAPIErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ResourceGroupsTaggingAPIClient::ResourceGroupsTaggingAPIClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ResourceGroupsTaggingAPIErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ResourceGroupsTaggingAPIClient::~ResourceGroupsTaggingAPIClient()
{
}

void ResourceGroupsTaggingAPIClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ResourceGroupsTaggingAPIEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ResourceGroupsTaggingAPIClient::OverrideEndpoint(const Aws::String& endpoint)
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

DeleteTagPolicyOutcome ResourceGroupsTaggingAPIClient::DeleteTagPolicy(const DeleteTagPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteTagPolicyOutcome(DeleteTagPolicyResult(outcome.GetResult()));
  }
  else
  {
    return DeleteTagPolicyOutcome(outcome.GetError());
  }
}

DeleteTagPolicyOutcomeCallable ResourceGroupsTaggingAPIClient::DeleteTagPolicyCallable(const DeleteTagPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTagPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTagPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceGroupsTaggingAPIClient::DeleteTagPolicyAsync(const DeleteTagPolicyRequest& request, const DeleteTagPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTagPolicyAsyncHelper( request, handler, context ); } );
}

void ResourceGroupsTaggingAPIClient::DeleteTagPolicyAsyncHelper(const DeleteTagPolicyRequest& request, const DeleteTagPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTagPolicy(request), context);
}

DescribeReportCreationOutcome ResourceGroupsTaggingAPIClient::DescribeReportCreation(const DescribeReportCreationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeReportCreationOutcome(DescribeReportCreationResult(outcome.GetResult()));
  }
  else
  {
    return DescribeReportCreationOutcome(outcome.GetError());
  }
}

DescribeReportCreationOutcomeCallable ResourceGroupsTaggingAPIClient::DescribeReportCreationCallable(const DescribeReportCreationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReportCreationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReportCreation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceGroupsTaggingAPIClient::DescribeReportCreationAsync(const DescribeReportCreationRequest& request, const DescribeReportCreationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeReportCreationAsyncHelper( request, handler, context ); } );
}

void ResourceGroupsTaggingAPIClient::DescribeReportCreationAsyncHelper(const DescribeReportCreationRequest& request, const DescribeReportCreationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeReportCreation(request), context);
}

DisableTagPoliciesOutcome ResourceGroupsTaggingAPIClient::DisableTagPolicies(const DisableTagPoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisableTagPoliciesOutcome(DisableTagPoliciesResult(outcome.GetResult()));
  }
  else
  {
    return DisableTagPoliciesOutcome(outcome.GetError());
  }
}

DisableTagPoliciesOutcomeCallable ResourceGroupsTaggingAPIClient::DisableTagPoliciesCallable(const DisableTagPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableTagPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableTagPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceGroupsTaggingAPIClient::DisableTagPoliciesAsync(const DisableTagPoliciesRequest& request, const DisableTagPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisableTagPoliciesAsyncHelper( request, handler, context ); } );
}

void ResourceGroupsTaggingAPIClient::DisableTagPoliciesAsyncHelper(const DisableTagPoliciesRequest& request, const DisableTagPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableTagPolicies(request), context);
}

EnableTagPoliciesOutcome ResourceGroupsTaggingAPIClient::EnableTagPolicies(const EnableTagPoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return EnableTagPoliciesOutcome(EnableTagPoliciesResult(outcome.GetResult()));
  }
  else
  {
    return EnableTagPoliciesOutcome(outcome.GetError());
  }
}

EnableTagPoliciesOutcomeCallable ResourceGroupsTaggingAPIClient::EnableTagPoliciesCallable(const EnableTagPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableTagPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableTagPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceGroupsTaggingAPIClient::EnableTagPoliciesAsync(const EnableTagPoliciesRequest& request, const EnableTagPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->EnableTagPoliciesAsyncHelper( request, handler, context ); } );
}

void ResourceGroupsTaggingAPIClient::EnableTagPoliciesAsyncHelper(const EnableTagPoliciesRequest& request, const EnableTagPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableTagPolicies(request), context);
}

GetComplianceSummaryOutcome ResourceGroupsTaggingAPIClient::GetComplianceSummary(const GetComplianceSummaryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetComplianceSummaryOutcome(GetComplianceSummaryResult(outcome.GetResult()));
  }
  else
  {
    return GetComplianceSummaryOutcome(outcome.GetError());
  }
}

GetComplianceSummaryOutcomeCallable ResourceGroupsTaggingAPIClient::GetComplianceSummaryCallable(const GetComplianceSummaryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetComplianceSummaryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetComplianceSummary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceGroupsTaggingAPIClient::GetComplianceSummaryAsync(const GetComplianceSummaryRequest& request, const GetComplianceSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetComplianceSummaryAsyncHelper( request, handler, context ); } );
}

void ResourceGroupsTaggingAPIClient::GetComplianceSummaryAsyncHelper(const GetComplianceSummaryRequest& request, const GetComplianceSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetComplianceSummary(request), context);
}

GetEffectiveTagPolicyOutcome ResourceGroupsTaggingAPIClient::GetEffectiveTagPolicy(const GetEffectiveTagPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetEffectiveTagPolicyOutcome(GetEffectiveTagPolicyResult(outcome.GetResult()));
  }
  else
  {
    return GetEffectiveTagPolicyOutcome(outcome.GetError());
  }
}

GetEffectiveTagPolicyOutcomeCallable ResourceGroupsTaggingAPIClient::GetEffectiveTagPolicyCallable(const GetEffectiveTagPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEffectiveTagPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEffectiveTagPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceGroupsTaggingAPIClient::GetEffectiveTagPolicyAsync(const GetEffectiveTagPolicyRequest& request, const GetEffectiveTagPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetEffectiveTagPolicyAsyncHelper( request, handler, context ); } );
}

void ResourceGroupsTaggingAPIClient::GetEffectiveTagPolicyAsyncHelper(const GetEffectiveTagPolicyRequest& request, const GetEffectiveTagPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetEffectiveTagPolicy(request), context);
}

GetResourcesOutcome ResourceGroupsTaggingAPIClient::GetResources(const GetResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetResourcesOutcome(GetResourcesResult(outcome.GetResult()));
  }
  else
  {
    return GetResourcesOutcome(outcome.GetError());
  }
}

GetResourcesOutcomeCallable ResourceGroupsTaggingAPIClient::GetResourcesCallable(const GetResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceGroupsTaggingAPIClient::GetResourcesAsync(const GetResourcesRequest& request, const GetResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetResourcesAsyncHelper( request, handler, context ); } );
}

void ResourceGroupsTaggingAPIClient::GetResourcesAsyncHelper(const GetResourcesRequest& request, const GetResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetResources(request), context);
}

GetTagKeysOutcome ResourceGroupsTaggingAPIClient::GetTagKeys(const GetTagKeysRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetTagKeysOutcome(GetTagKeysResult(outcome.GetResult()));
  }
  else
  {
    return GetTagKeysOutcome(outcome.GetError());
  }
}

GetTagKeysOutcomeCallable ResourceGroupsTaggingAPIClient::GetTagKeysCallable(const GetTagKeysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTagKeysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTagKeys(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceGroupsTaggingAPIClient::GetTagKeysAsync(const GetTagKeysRequest& request, const GetTagKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTagKeysAsyncHelper( request, handler, context ); } );
}

void ResourceGroupsTaggingAPIClient::GetTagKeysAsyncHelper(const GetTagKeysRequest& request, const GetTagKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTagKeys(request), context);
}

GetTagPolicyOutcome ResourceGroupsTaggingAPIClient::GetTagPolicy(const GetTagPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetTagPolicyOutcome(GetTagPolicyResult(outcome.GetResult()));
  }
  else
  {
    return GetTagPolicyOutcome(outcome.GetError());
  }
}

GetTagPolicyOutcomeCallable ResourceGroupsTaggingAPIClient::GetTagPolicyCallable(const GetTagPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTagPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTagPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceGroupsTaggingAPIClient::GetTagPolicyAsync(const GetTagPolicyRequest& request, const GetTagPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTagPolicyAsyncHelper( request, handler, context ); } );
}

void ResourceGroupsTaggingAPIClient::GetTagPolicyAsyncHelper(const GetTagPolicyRequest& request, const GetTagPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTagPolicy(request), context);
}

GetTagValuesOutcome ResourceGroupsTaggingAPIClient::GetTagValues(const GetTagValuesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetTagValuesOutcome(GetTagValuesResult(outcome.GetResult()));
  }
  else
  {
    return GetTagValuesOutcome(outcome.GetError());
  }
}

GetTagValuesOutcomeCallable ResourceGroupsTaggingAPIClient::GetTagValuesCallable(const GetTagValuesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTagValuesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTagValues(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceGroupsTaggingAPIClient::GetTagValuesAsync(const GetTagValuesRequest& request, const GetTagValuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTagValuesAsyncHelper( request, handler, context ); } );
}

void ResourceGroupsTaggingAPIClient::GetTagValuesAsyncHelper(const GetTagValuesRequest& request, const GetTagValuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTagValues(request), context);
}

PutTagPolicyOutcome ResourceGroupsTaggingAPIClient::PutTagPolicy(const PutTagPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutTagPolicyOutcome(PutTagPolicyResult(outcome.GetResult()));
  }
  else
  {
    return PutTagPolicyOutcome(outcome.GetError());
  }
}

PutTagPolicyOutcomeCallable ResourceGroupsTaggingAPIClient::PutTagPolicyCallable(const PutTagPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutTagPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutTagPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceGroupsTaggingAPIClient::PutTagPolicyAsync(const PutTagPolicyRequest& request, const PutTagPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutTagPolicyAsyncHelper( request, handler, context ); } );
}

void ResourceGroupsTaggingAPIClient::PutTagPolicyAsyncHelper(const PutTagPolicyRequest& request, const PutTagPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutTagPolicy(request), context);
}

StartReportCreationOutcome ResourceGroupsTaggingAPIClient::StartReportCreation(const StartReportCreationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartReportCreationOutcome(StartReportCreationResult(outcome.GetResult()));
  }
  else
  {
    return StartReportCreationOutcome(outcome.GetError());
  }
}

StartReportCreationOutcomeCallable ResourceGroupsTaggingAPIClient::StartReportCreationCallable(const StartReportCreationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartReportCreationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartReportCreation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceGroupsTaggingAPIClient::StartReportCreationAsync(const StartReportCreationRequest& request, const StartReportCreationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartReportCreationAsyncHelper( request, handler, context ); } );
}

void ResourceGroupsTaggingAPIClient::StartReportCreationAsyncHelper(const StartReportCreationRequest& request, const StartReportCreationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartReportCreation(request), context);
}

TagResourcesOutcome ResourceGroupsTaggingAPIClient::TagResources(const TagResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TagResourcesOutcome(TagResourcesResult(outcome.GetResult()));
  }
  else
  {
    return TagResourcesOutcome(outcome.GetError());
  }
}

TagResourcesOutcomeCallable ResourceGroupsTaggingAPIClient::TagResourcesCallable(const TagResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceGroupsTaggingAPIClient::TagResourcesAsync(const TagResourcesRequest& request, const TagResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourcesAsyncHelper( request, handler, context ); } );
}

void ResourceGroupsTaggingAPIClient::TagResourcesAsyncHelper(const TagResourcesRequest& request, const TagResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResources(request), context);
}

UntagResourcesOutcome ResourceGroupsTaggingAPIClient::UntagResources(const UntagResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UntagResourcesOutcome(UntagResourcesResult(outcome.GetResult()));
  }
  else
  {
    return UntagResourcesOutcome(outcome.GetError());
  }
}

UntagResourcesOutcomeCallable ResourceGroupsTaggingAPIClient::UntagResourcesCallable(const UntagResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceGroupsTaggingAPIClient::UntagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourcesAsyncHelper( request, handler, context ); } );
}

void ResourceGroupsTaggingAPIClient::UntagResourcesAsyncHelper(const UntagResourcesRequest& request, const UntagResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResources(request), context);
}

