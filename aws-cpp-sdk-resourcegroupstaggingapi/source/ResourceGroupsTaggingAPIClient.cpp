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

#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIClient.h>
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIEndpoint.h>
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPIErrorMarshaller.h>
#include <aws/resourcegroupstaggingapi/model/DescribeReportCreationRequest.h>
#include <aws/resourcegroupstaggingapi/model/GetComplianceSummaryRequest.h>
#include <aws/resourcegroupstaggingapi/model/GetResourcesRequest.h>
#include <aws/resourcegroupstaggingapi/model/GetTagKeysRequest.h>
#include <aws/resourcegroupstaggingapi/model/GetTagValuesRequest.h>
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
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ResourceGroupsTaggingAPIErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ResourceGroupsTaggingAPIClient::ResourceGroupsTaggingAPIClient(const AWSCredentials& credentials,
                                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ResourceGroupsTaggingAPIErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ResourceGroupsTaggingAPIClient::ResourceGroupsTaggingAPIClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ResourceGroupsTaggingAPIErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ResourceGroupsTaggingAPIClient::~ResourceGroupsTaggingAPIClient()
{
}

void ResourceGroupsTaggingAPIClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Resource Groups Tagging API");
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

DescribeReportCreationOutcome ResourceGroupsTaggingAPIClient::DescribeReportCreation(const DescribeReportCreationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeReportCreationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeReportCreationOutcomeCallable ResourceGroupsTaggingAPIClient::DescribeReportCreationCallable(const DescribeReportCreationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReportCreationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReportCreation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceGroupsTaggingAPIClientDescribeReportCreationAsyncHelper(ResourceGroupsTaggingAPIClient const * const clientThis, const DescribeReportCreationRequest& request, const DescribeReportCreationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeReportCreation(request), context);
}

void ResourceGroupsTaggingAPIClient::DescribeReportCreationAsync(const DescribeReportCreationRequest& request, const DescribeReportCreationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ResourceGroupsTaggingAPIClientDescribeReportCreationAsyncHelper( this, request, handler, context ); } );
}

GetComplianceSummaryOutcome ResourceGroupsTaggingAPIClient::GetComplianceSummary(const GetComplianceSummaryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetComplianceSummaryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetComplianceSummaryOutcomeCallable ResourceGroupsTaggingAPIClient::GetComplianceSummaryCallable(const GetComplianceSummaryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetComplianceSummaryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetComplianceSummary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceGroupsTaggingAPIClientGetComplianceSummaryAsyncHelper(ResourceGroupsTaggingAPIClient const * const clientThis, const GetComplianceSummaryRequest& request, const GetComplianceSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetComplianceSummary(request), context);
}

void ResourceGroupsTaggingAPIClient::GetComplianceSummaryAsync(const GetComplianceSummaryRequest& request, const GetComplianceSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ResourceGroupsTaggingAPIClientGetComplianceSummaryAsyncHelper( this, request, handler, context ); } );
}

GetResourcesOutcome ResourceGroupsTaggingAPIClient::GetResources(const GetResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetResourcesOutcomeCallable ResourceGroupsTaggingAPIClient::GetResourcesCallable(const GetResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceGroupsTaggingAPIClientGetResourcesAsyncHelper(ResourceGroupsTaggingAPIClient const * const clientThis, const GetResourcesRequest& request, const GetResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetResources(request), context);
}

void ResourceGroupsTaggingAPIClient::GetResourcesAsync(const GetResourcesRequest& request, const GetResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ResourceGroupsTaggingAPIClientGetResourcesAsyncHelper( this, request, handler, context ); } );
}

GetTagKeysOutcome ResourceGroupsTaggingAPIClient::GetTagKeys(const GetTagKeysRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetTagKeysOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTagKeysOutcomeCallable ResourceGroupsTaggingAPIClient::GetTagKeysCallable(const GetTagKeysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTagKeysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTagKeys(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceGroupsTaggingAPIClientGetTagKeysAsyncHelper(ResourceGroupsTaggingAPIClient const * const clientThis, const GetTagKeysRequest& request, const GetTagKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTagKeys(request), context);
}

void ResourceGroupsTaggingAPIClient::GetTagKeysAsync(const GetTagKeysRequest& request, const GetTagKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ResourceGroupsTaggingAPIClientGetTagKeysAsyncHelper( this, request, handler, context ); } );
}

GetTagValuesOutcome ResourceGroupsTaggingAPIClient::GetTagValues(const GetTagValuesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetTagValuesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTagValuesOutcomeCallable ResourceGroupsTaggingAPIClient::GetTagValuesCallable(const GetTagValuesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTagValuesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTagValues(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceGroupsTaggingAPIClientGetTagValuesAsyncHelper(ResourceGroupsTaggingAPIClient const * const clientThis, const GetTagValuesRequest& request, const GetTagValuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTagValues(request), context);
}

void ResourceGroupsTaggingAPIClient::GetTagValuesAsync(const GetTagValuesRequest& request, const GetTagValuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ResourceGroupsTaggingAPIClientGetTagValuesAsyncHelper( this, request, handler, context ); } );
}

StartReportCreationOutcome ResourceGroupsTaggingAPIClient::StartReportCreation(const StartReportCreationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartReportCreationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartReportCreationOutcomeCallable ResourceGroupsTaggingAPIClient::StartReportCreationCallable(const StartReportCreationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartReportCreationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartReportCreation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceGroupsTaggingAPIClientStartReportCreationAsyncHelper(ResourceGroupsTaggingAPIClient const * const clientThis, const StartReportCreationRequest& request, const StartReportCreationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartReportCreation(request), context);
}

void ResourceGroupsTaggingAPIClient::StartReportCreationAsync(const StartReportCreationRequest& request, const StartReportCreationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ResourceGroupsTaggingAPIClientStartReportCreationAsyncHelper( this, request, handler, context ); } );
}

TagResourcesOutcome ResourceGroupsTaggingAPIClient::TagResources(const TagResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourcesOutcomeCallable ResourceGroupsTaggingAPIClient::TagResourcesCallable(const TagResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceGroupsTaggingAPIClientTagResourcesAsyncHelper(ResourceGroupsTaggingAPIClient const * const clientThis, const TagResourcesRequest& request, const TagResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResources(request), context);
}

void ResourceGroupsTaggingAPIClient::TagResourcesAsync(const TagResourcesRequest& request, const TagResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ResourceGroupsTaggingAPIClientTagResourcesAsyncHelper( this, request, handler, context ); } );
}

UntagResourcesOutcome ResourceGroupsTaggingAPIClient::UntagResources(const UntagResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourcesOutcomeCallable ResourceGroupsTaggingAPIClient::UntagResourcesCallable(const UntagResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResourceGroupsTaggingAPIClientUntagResourcesAsyncHelper(ResourceGroupsTaggingAPIClient const * const clientThis, const UntagResourcesRequest& request, const UntagResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResources(request), context);
}

void ResourceGroupsTaggingAPIClient::UntagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ResourceGroupsTaggingAPIClientUntagResourcesAsyncHelper( this, request, handler, context ); } );
}

