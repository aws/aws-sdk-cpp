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

#include <aws/resiliencehub/ResilienceHubClient.h>
#include <aws/resiliencehub/ResilienceHubEndpoint.h>
#include <aws/resiliencehub/ResilienceHubErrorMarshaller.h>
#include <aws/resiliencehub/model/AddDraftAppVersionResourceMappingsRequest.h>
#include <aws/resiliencehub/model/CreateAppRequest.h>
#include <aws/resiliencehub/model/CreateRecommendationTemplateRequest.h>
#include <aws/resiliencehub/model/CreateResiliencyPolicyRequest.h>
#include <aws/resiliencehub/model/DeleteAppRequest.h>
#include <aws/resiliencehub/model/DeleteAppAssessmentRequest.h>
#include <aws/resiliencehub/model/DeleteRecommendationTemplateRequest.h>
#include <aws/resiliencehub/model/DeleteResiliencyPolicyRequest.h>
#include <aws/resiliencehub/model/DescribeAppRequest.h>
#include <aws/resiliencehub/model/DescribeAppAssessmentRequest.h>
#include <aws/resiliencehub/model/DescribeAppVersionResourcesResolutionStatusRequest.h>
#include <aws/resiliencehub/model/DescribeAppVersionTemplateRequest.h>
#include <aws/resiliencehub/model/DescribeDraftAppVersionResourcesImportStatusRequest.h>
#include <aws/resiliencehub/model/DescribeResiliencyPolicyRequest.h>
#include <aws/resiliencehub/model/ImportResourcesToDraftAppVersionRequest.h>
#include <aws/resiliencehub/model/ListAlarmRecommendationsRequest.h>
#include <aws/resiliencehub/model/ListAppAssessmentsRequest.h>
#include <aws/resiliencehub/model/ListAppComponentCompliancesRequest.h>
#include <aws/resiliencehub/model/ListAppComponentRecommendationsRequest.h>
#include <aws/resiliencehub/model/ListAppVersionResourceMappingsRequest.h>
#include <aws/resiliencehub/model/ListAppVersionResourcesRequest.h>
#include <aws/resiliencehub/model/ListAppVersionsRequest.h>
#include <aws/resiliencehub/model/ListAppsRequest.h>
#include <aws/resiliencehub/model/ListRecommendationTemplatesRequest.h>
#include <aws/resiliencehub/model/ListResiliencyPoliciesRequest.h>
#include <aws/resiliencehub/model/ListSopRecommendationsRequest.h>
#include <aws/resiliencehub/model/ListSuggestedResiliencyPoliciesRequest.h>
#include <aws/resiliencehub/model/ListTagsForResourceRequest.h>
#include <aws/resiliencehub/model/ListTestRecommendationsRequest.h>
#include <aws/resiliencehub/model/ListUnsupportedAppVersionResourcesRequest.h>
#include <aws/resiliencehub/model/PublishAppVersionRequest.h>
#include <aws/resiliencehub/model/PutDraftAppVersionTemplateRequest.h>
#include <aws/resiliencehub/model/RemoveDraftAppVersionResourceMappingsRequest.h>
#include <aws/resiliencehub/model/ResolveAppVersionResourcesRequest.h>
#include <aws/resiliencehub/model/StartAppAssessmentRequest.h>
#include <aws/resiliencehub/model/TagResourceRequest.h>
#include <aws/resiliencehub/model/UntagResourceRequest.h>
#include <aws/resiliencehub/model/UpdateAppRequest.h>
#include <aws/resiliencehub/model/UpdateResiliencyPolicyRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ResilienceHub;
using namespace Aws::ResilienceHub::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

const char* ResilienceHubClient::SERVICE_NAME = "resiliencehub";
const char* ResilienceHubClient::ALLOCATION_TAG = "ResilienceHubClient";

ResilienceHubClient::ResilienceHubClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ResilienceHubErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ResilienceHubClient::ResilienceHubClient(const AWSCredentials& credentials,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ResilienceHubErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ResilienceHubClient::ResilienceHubClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ResilienceHubErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ResilienceHubClient::~ResilienceHubClient()
{
}

void ResilienceHubClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("resiliencehub");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ResilienceHubEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ResilienceHubClient::OverrideEndpoint(const Aws::String& endpoint)
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

AddDraftAppVersionResourceMappingsOutcome ResilienceHubClient::AddDraftAppVersionResourceMappings(const AddDraftAppVersionResourceMappingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/add-draft-app-version-resource-mappings");
  return AddDraftAppVersionResourceMappingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddDraftAppVersionResourceMappingsOutcomeCallable ResilienceHubClient::AddDraftAppVersionResourceMappingsCallable(const AddDraftAppVersionResourceMappingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddDraftAppVersionResourceMappingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddDraftAppVersionResourceMappings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResilienceHubClient::AddDraftAppVersionResourceMappingsAsync(const AddDraftAppVersionResourceMappingsRequest& request, const AddDraftAppVersionResourceMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AddDraftAppVersionResourceMappings(request), context);
    } );
}

CreateAppOutcome ResilienceHubClient::CreateApp(const CreateAppRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/create-app");
  return CreateAppOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAppOutcomeCallable ResilienceHubClient::CreateAppCallable(const CreateAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResilienceHubClient::CreateAppAsync(const CreateAppRequest& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateApp(request), context);
    } );
}

CreateRecommendationTemplateOutcome ResilienceHubClient::CreateRecommendationTemplate(const CreateRecommendationTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/create-recommendation-template");
  return CreateRecommendationTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRecommendationTemplateOutcomeCallable ResilienceHubClient::CreateRecommendationTemplateCallable(const CreateRecommendationTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRecommendationTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRecommendationTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResilienceHubClient::CreateRecommendationTemplateAsync(const CreateRecommendationTemplateRequest& request, const CreateRecommendationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateRecommendationTemplate(request), context);
    } );
}

CreateResiliencyPolicyOutcome ResilienceHubClient::CreateResiliencyPolicy(const CreateResiliencyPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/create-resiliency-policy");
  return CreateResiliencyPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateResiliencyPolicyOutcomeCallable ResilienceHubClient::CreateResiliencyPolicyCallable(const CreateResiliencyPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateResiliencyPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateResiliencyPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResilienceHubClient::CreateResiliencyPolicyAsync(const CreateResiliencyPolicyRequest& request, const CreateResiliencyPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateResiliencyPolicy(request), context);
    } );
}

DeleteAppOutcome ResilienceHubClient::DeleteApp(const DeleteAppRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/delete-app");
  return DeleteAppOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAppOutcomeCallable ResilienceHubClient::DeleteAppCallable(const DeleteAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResilienceHubClient::DeleteAppAsync(const DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteApp(request), context);
    } );
}

DeleteAppAssessmentOutcome ResilienceHubClient::DeleteAppAssessment(const DeleteAppAssessmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/delete-app-assessment");
  return DeleteAppAssessmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAppAssessmentOutcomeCallable ResilienceHubClient::DeleteAppAssessmentCallable(const DeleteAppAssessmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAppAssessmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAppAssessment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResilienceHubClient::DeleteAppAssessmentAsync(const DeleteAppAssessmentRequest& request, const DeleteAppAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAppAssessment(request), context);
    } );
}

DeleteRecommendationTemplateOutcome ResilienceHubClient::DeleteRecommendationTemplate(const DeleteRecommendationTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/delete-recommendation-template");
  return DeleteRecommendationTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRecommendationTemplateOutcomeCallable ResilienceHubClient::DeleteRecommendationTemplateCallable(const DeleteRecommendationTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRecommendationTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRecommendationTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResilienceHubClient::DeleteRecommendationTemplateAsync(const DeleteRecommendationTemplateRequest& request, const DeleteRecommendationTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteRecommendationTemplate(request), context);
    } );
}

DeleteResiliencyPolicyOutcome ResilienceHubClient::DeleteResiliencyPolicy(const DeleteResiliencyPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/delete-resiliency-policy");
  return DeleteResiliencyPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteResiliencyPolicyOutcomeCallable ResilienceHubClient::DeleteResiliencyPolicyCallable(const DeleteResiliencyPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResiliencyPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResiliencyPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResilienceHubClient::DeleteResiliencyPolicyAsync(const DeleteResiliencyPolicyRequest& request, const DeleteResiliencyPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteResiliencyPolicy(request), context);
    } );
}

DescribeAppOutcome ResilienceHubClient::DescribeApp(const DescribeAppRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/describe-app");
  return DescribeAppOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAppOutcomeCallable ResilienceHubClient::DescribeAppCallable(const DescribeAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResilienceHubClient::DescribeAppAsync(const DescribeAppRequest& request, const DescribeAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeApp(request), context);
    } );
}

DescribeAppAssessmentOutcome ResilienceHubClient::DescribeAppAssessment(const DescribeAppAssessmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/describe-app-assessment");
  return DescribeAppAssessmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAppAssessmentOutcomeCallable ResilienceHubClient::DescribeAppAssessmentCallable(const DescribeAppAssessmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAppAssessmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAppAssessment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResilienceHubClient::DescribeAppAssessmentAsync(const DescribeAppAssessmentRequest& request, const DescribeAppAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAppAssessment(request), context);
    } );
}

DescribeAppVersionResourcesResolutionStatusOutcome ResilienceHubClient::DescribeAppVersionResourcesResolutionStatus(const DescribeAppVersionResourcesResolutionStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/describe-app-version-resources-resolution-status");
  return DescribeAppVersionResourcesResolutionStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAppVersionResourcesResolutionStatusOutcomeCallable ResilienceHubClient::DescribeAppVersionResourcesResolutionStatusCallable(const DescribeAppVersionResourcesResolutionStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAppVersionResourcesResolutionStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAppVersionResourcesResolutionStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResilienceHubClient::DescribeAppVersionResourcesResolutionStatusAsync(const DescribeAppVersionResourcesResolutionStatusRequest& request, const DescribeAppVersionResourcesResolutionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAppVersionResourcesResolutionStatus(request), context);
    } );
}

DescribeAppVersionTemplateOutcome ResilienceHubClient::DescribeAppVersionTemplate(const DescribeAppVersionTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/describe-app-version-template");
  return DescribeAppVersionTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAppVersionTemplateOutcomeCallable ResilienceHubClient::DescribeAppVersionTemplateCallable(const DescribeAppVersionTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAppVersionTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAppVersionTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResilienceHubClient::DescribeAppVersionTemplateAsync(const DescribeAppVersionTemplateRequest& request, const DescribeAppVersionTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAppVersionTemplate(request), context);
    } );
}

DescribeDraftAppVersionResourcesImportStatusOutcome ResilienceHubClient::DescribeDraftAppVersionResourcesImportStatus(const DescribeDraftAppVersionResourcesImportStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/describe-draft-app-version-resources-import-status");
  return DescribeDraftAppVersionResourcesImportStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDraftAppVersionResourcesImportStatusOutcomeCallable ResilienceHubClient::DescribeDraftAppVersionResourcesImportStatusCallable(const DescribeDraftAppVersionResourcesImportStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDraftAppVersionResourcesImportStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDraftAppVersionResourcesImportStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResilienceHubClient::DescribeDraftAppVersionResourcesImportStatusAsync(const DescribeDraftAppVersionResourcesImportStatusRequest& request, const DescribeDraftAppVersionResourcesImportStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDraftAppVersionResourcesImportStatus(request), context);
    } );
}

DescribeResiliencyPolicyOutcome ResilienceHubClient::DescribeResiliencyPolicy(const DescribeResiliencyPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/describe-resiliency-policy");
  return DescribeResiliencyPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeResiliencyPolicyOutcomeCallable ResilienceHubClient::DescribeResiliencyPolicyCallable(const DescribeResiliencyPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeResiliencyPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeResiliencyPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResilienceHubClient::DescribeResiliencyPolicyAsync(const DescribeResiliencyPolicyRequest& request, const DescribeResiliencyPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeResiliencyPolicy(request), context);
    } );
}

ImportResourcesToDraftAppVersionOutcome ResilienceHubClient::ImportResourcesToDraftAppVersion(const ImportResourcesToDraftAppVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/import-resources-to-draft-app-version");
  return ImportResourcesToDraftAppVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportResourcesToDraftAppVersionOutcomeCallable ResilienceHubClient::ImportResourcesToDraftAppVersionCallable(const ImportResourcesToDraftAppVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportResourcesToDraftAppVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportResourcesToDraftAppVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResilienceHubClient::ImportResourcesToDraftAppVersionAsync(const ImportResourcesToDraftAppVersionRequest& request, const ImportResourcesToDraftAppVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ImportResourcesToDraftAppVersion(request), context);
    } );
}

ListAlarmRecommendationsOutcome ResilienceHubClient::ListAlarmRecommendations(const ListAlarmRecommendationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/list-alarm-recommendations");
  return ListAlarmRecommendationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAlarmRecommendationsOutcomeCallable ResilienceHubClient::ListAlarmRecommendationsCallable(const ListAlarmRecommendationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAlarmRecommendationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAlarmRecommendations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResilienceHubClient::ListAlarmRecommendationsAsync(const ListAlarmRecommendationsRequest& request, const ListAlarmRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAlarmRecommendations(request), context);
    } );
}

ListAppAssessmentsOutcome ResilienceHubClient::ListAppAssessments(const ListAppAssessmentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/list-app-assessments");
  return ListAppAssessmentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAppAssessmentsOutcomeCallable ResilienceHubClient::ListAppAssessmentsCallable(const ListAppAssessmentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAppAssessmentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAppAssessments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResilienceHubClient::ListAppAssessmentsAsync(const ListAppAssessmentsRequest& request, const ListAppAssessmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAppAssessments(request), context);
    } );
}

ListAppComponentCompliancesOutcome ResilienceHubClient::ListAppComponentCompliances(const ListAppComponentCompliancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/list-app-component-compliances");
  return ListAppComponentCompliancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAppComponentCompliancesOutcomeCallable ResilienceHubClient::ListAppComponentCompliancesCallable(const ListAppComponentCompliancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAppComponentCompliancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAppComponentCompliances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResilienceHubClient::ListAppComponentCompliancesAsync(const ListAppComponentCompliancesRequest& request, const ListAppComponentCompliancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAppComponentCompliances(request), context);
    } );
}

ListAppComponentRecommendationsOutcome ResilienceHubClient::ListAppComponentRecommendations(const ListAppComponentRecommendationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/list-app-component-recommendations");
  return ListAppComponentRecommendationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAppComponentRecommendationsOutcomeCallable ResilienceHubClient::ListAppComponentRecommendationsCallable(const ListAppComponentRecommendationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAppComponentRecommendationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAppComponentRecommendations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResilienceHubClient::ListAppComponentRecommendationsAsync(const ListAppComponentRecommendationsRequest& request, const ListAppComponentRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAppComponentRecommendations(request), context);
    } );
}

ListAppVersionResourceMappingsOutcome ResilienceHubClient::ListAppVersionResourceMappings(const ListAppVersionResourceMappingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/list-app-version-resource-mappings");
  return ListAppVersionResourceMappingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAppVersionResourceMappingsOutcomeCallable ResilienceHubClient::ListAppVersionResourceMappingsCallable(const ListAppVersionResourceMappingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAppVersionResourceMappingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAppVersionResourceMappings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResilienceHubClient::ListAppVersionResourceMappingsAsync(const ListAppVersionResourceMappingsRequest& request, const ListAppVersionResourceMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAppVersionResourceMappings(request), context);
    } );
}

ListAppVersionResourcesOutcome ResilienceHubClient::ListAppVersionResources(const ListAppVersionResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/list-app-version-resources");
  return ListAppVersionResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAppVersionResourcesOutcomeCallable ResilienceHubClient::ListAppVersionResourcesCallable(const ListAppVersionResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAppVersionResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAppVersionResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResilienceHubClient::ListAppVersionResourcesAsync(const ListAppVersionResourcesRequest& request, const ListAppVersionResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAppVersionResources(request), context);
    } );
}

ListAppVersionsOutcome ResilienceHubClient::ListAppVersions(const ListAppVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/list-app-versions");
  return ListAppVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAppVersionsOutcomeCallable ResilienceHubClient::ListAppVersionsCallable(const ListAppVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAppVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAppVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResilienceHubClient::ListAppVersionsAsync(const ListAppVersionsRequest& request, const ListAppVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAppVersions(request), context);
    } );
}

ListAppsOutcome ResilienceHubClient::ListApps(const ListAppsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/list-apps");
  return ListAppsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAppsOutcomeCallable ResilienceHubClient::ListAppsCallable(const ListAppsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAppsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApps(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResilienceHubClient::ListAppsAsync(const ListAppsRequest& request, const ListAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListApps(request), context);
    } );
}

ListRecommendationTemplatesOutcome ResilienceHubClient::ListRecommendationTemplates(const ListRecommendationTemplatesRequest& request) const
{
  if (!request.AssessmentArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRecommendationTemplates", "Required field: AssessmentArn, is not set");
    return ListRecommendationTemplatesOutcome(Aws::Client::AWSError<ResilienceHubErrors>(ResilienceHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssessmentArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/list-recommendation-templates");
  return ListRecommendationTemplatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListRecommendationTemplatesOutcomeCallable ResilienceHubClient::ListRecommendationTemplatesCallable(const ListRecommendationTemplatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRecommendationTemplatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRecommendationTemplates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResilienceHubClient::ListRecommendationTemplatesAsync(const ListRecommendationTemplatesRequest& request, const ListRecommendationTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListRecommendationTemplates(request), context);
    } );
}

ListResiliencyPoliciesOutcome ResilienceHubClient::ListResiliencyPolicies(const ListResiliencyPoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/list-resiliency-policies");
  return ListResiliencyPoliciesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListResiliencyPoliciesOutcomeCallable ResilienceHubClient::ListResiliencyPoliciesCallable(const ListResiliencyPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResiliencyPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResiliencyPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResilienceHubClient::ListResiliencyPoliciesAsync(const ListResiliencyPoliciesRequest& request, const ListResiliencyPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListResiliencyPolicies(request), context);
    } );
}

ListSopRecommendationsOutcome ResilienceHubClient::ListSopRecommendations(const ListSopRecommendationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/list-sop-recommendations");
  return ListSopRecommendationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSopRecommendationsOutcomeCallable ResilienceHubClient::ListSopRecommendationsCallable(const ListSopRecommendationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSopRecommendationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSopRecommendations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResilienceHubClient::ListSopRecommendationsAsync(const ListSopRecommendationsRequest& request, const ListSopRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSopRecommendations(request), context);
    } );
}

ListSuggestedResiliencyPoliciesOutcome ResilienceHubClient::ListSuggestedResiliencyPolicies(const ListSuggestedResiliencyPoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/list-suggested-resiliency-policies");
  return ListSuggestedResiliencyPoliciesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSuggestedResiliencyPoliciesOutcomeCallable ResilienceHubClient::ListSuggestedResiliencyPoliciesCallable(const ListSuggestedResiliencyPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSuggestedResiliencyPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSuggestedResiliencyPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResilienceHubClient::ListSuggestedResiliencyPoliciesAsync(const ListSuggestedResiliencyPoliciesRequest& request, const ListSuggestedResiliencyPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSuggestedResiliencyPolicies(request), context);
    } );
}

ListTagsForResourceOutcome ResilienceHubClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<ResilienceHubErrors>(ResilienceHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable ResilienceHubClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResilienceHubClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

ListTestRecommendationsOutcome ResilienceHubClient::ListTestRecommendations(const ListTestRecommendationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/list-test-recommendations");
  return ListTestRecommendationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTestRecommendationsOutcomeCallable ResilienceHubClient::ListTestRecommendationsCallable(const ListTestRecommendationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTestRecommendationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTestRecommendations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResilienceHubClient::ListTestRecommendationsAsync(const ListTestRecommendationsRequest& request, const ListTestRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTestRecommendations(request), context);
    } );
}

ListUnsupportedAppVersionResourcesOutcome ResilienceHubClient::ListUnsupportedAppVersionResources(const ListUnsupportedAppVersionResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/list-unsupported-app-version-resources");
  return ListUnsupportedAppVersionResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListUnsupportedAppVersionResourcesOutcomeCallable ResilienceHubClient::ListUnsupportedAppVersionResourcesCallable(const ListUnsupportedAppVersionResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListUnsupportedAppVersionResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListUnsupportedAppVersionResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResilienceHubClient::ListUnsupportedAppVersionResourcesAsync(const ListUnsupportedAppVersionResourcesRequest& request, const ListUnsupportedAppVersionResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListUnsupportedAppVersionResources(request), context);
    } );
}

PublishAppVersionOutcome ResilienceHubClient::PublishAppVersion(const PublishAppVersionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/publish-app-version");
  return PublishAppVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PublishAppVersionOutcomeCallable ResilienceHubClient::PublishAppVersionCallable(const PublishAppVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PublishAppVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PublishAppVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResilienceHubClient::PublishAppVersionAsync(const PublishAppVersionRequest& request, const PublishAppVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PublishAppVersion(request), context);
    } );
}

PutDraftAppVersionTemplateOutcome ResilienceHubClient::PutDraftAppVersionTemplate(const PutDraftAppVersionTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/put-draft-app-version-template");
  return PutDraftAppVersionTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutDraftAppVersionTemplateOutcomeCallable ResilienceHubClient::PutDraftAppVersionTemplateCallable(const PutDraftAppVersionTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutDraftAppVersionTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutDraftAppVersionTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResilienceHubClient::PutDraftAppVersionTemplateAsync(const PutDraftAppVersionTemplateRequest& request, const PutDraftAppVersionTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutDraftAppVersionTemplate(request), context);
    } );
}

RemoveDraftAppVersionResourceMappingsOutcome ResilienceHubClient::RemoveDraftAppVersionResourceMappings(const RemoveDraftAppVersionResourceMappingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/remove-draft-app-version-resource-mappings");
  return RemoveDraftAppVersionResourceMappingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveDraftAppVersionResourceMappingsOutcomeCallable ResilienceHubClient::RemoveDraftAppVersionResourceMappingsCallable(const RemoveDraftAppVersionResourceMappingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveDraftAppVersionResourceMappingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveDraftAppVersionResourceMappings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResilienceHubClient::RemoveDraftAppVersionResourceMappingsAsync(const RemoveDraftAppVersionResourceMappingsRequest& request, const RemoveDraftAppVersionResourceMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RemoveDraftAppVersionResourceMappings(request), context);
    } );
}

ResolveAppVersionResourcesOutcome ResilienceHubClient::ResolveAppVersionResources(const ResolveAppVersionResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/resolve-app-version-resources");
  return ResolveAppVersionResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ResolveAppVersionResourcesOutcomeCallable ResilienceHubClient::ResolveAppVersionResourcesCallable(const ResolveAppVersionResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResolveAppVersionResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResolveAppVersionResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResilienceHubClient::ResolveAppVersionResourcesAsync(const ResolveAppVersionResourcesRequest& request, const ResolveAppVersionResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ResolveAppVersionResources(request), context);
    } );
}

StartAppAssessmentOutcome ResilienceHubClient::StartAppAssessment(const StartAppAssessmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/start-app-assessment");
  return StartAppAssessmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartAppAssessmentOutcomeCallable ResilienceHubClient::StartAppAssessmentCallable(const StartAppAssessmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartAppAssessmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartAppAssessment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResilienceHubClient::StartAppAssessmentAsync(const StartAppAssessmentRequest& request, const StartAppAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartAppAssessment(request), context);
    } );
}

TagResourceOutcome ResilienceHubClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<ResilienceHubErrors>(ResilienceHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable ResilienceHubClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResilienceHubClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome ResilienceHubClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ResilienceHubErrors>(ResilienceHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ResilienceHubErrors>(ResilienceHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable ResilienceHubClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResilienceHubClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateAppOutcome ResilienceHubClient::UpdateApp(const UpdateAppRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/update-app");
  return UpdateAppOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAppOutcomeCallable ResilienceHubClient::UpdateAppCallable(const UpdateAppRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAppOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResilienceHubClient::UpdateAppAsync(const UpdateAppRequest& request, const UpdateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateApp(request), context);
    } );
}

UpdateResiliencyPolicyOutcome ResilienceHubClient::UpdateResiliencyPolicy(const UpdateResiliencyPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/update-resiliency-policy");
  return UpdateResiliencyPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateResiliencyPolicyOutcomeCallable ResilienceHubClient::UpdateResiliencyPolicyCallable(const UpdateResiliencyPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateResiliencyPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateResiliencyPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ResilienceHubClient::UpdateResiliencyPolicyAsync(const UpdateResiliencyPolicyRequest& request, const UpdateResiliencyPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateResiliencyPolicy(request), context);
    } );
}

