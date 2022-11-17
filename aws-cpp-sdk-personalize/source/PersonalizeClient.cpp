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

#include <aws/personalize/PersonalizeClient.h>
#include <aws/personalize/PersonalizeErrorMarshaller.h>
#include <aws/personalize/PersonalizeEndpointProvider.h>
#include <aws/personalize/model/CreateBatchInferenceJobRequest.h>
#include <aws/personalize/model/CreateBatchSegmentJobRequest.h>
#include <aws/personalize/model/CreateCampaignRequest.h>
#include <aws/personalize/model/CreateDatasetRequest.h>
#include <aws/personalize/model/CreateDatasetExportJobRequest.h>
#include <aws/personalize/model/CreateDatasetGroupRequest.h>
#include <aws/personalize/model/CreateDatasetImportJobRequest.h>
#include <aws/personalize/model/CreateEventTrackerRequest.h>
#include <aws/personalize/model/CreateFilterRequest.h>
#include <aws/personalize/model/CreateMetricAttributionRequest.h>
#include <aws/personalize/model/CreateRecommenderRequest.h>
#include <aws/personalize/model/CreateSchemaRequest.h>
#include <aws/personalize/model/CreateSolutionRequest.h>
#include <aws/personalize/model/CreateSolutionVersionRequest.h>
#include <aws/personalize/model/DeleteCampaignRequest.h>
#include <aws/personalize/model/DeleteDatasetRequest.h>
#include <aws/personalize/model/DeleteDatasetGroupRequest.h>
#include <aws/personalize/model/DeleteEventTrackerRequest.h>
#include <aws/personalize/model/DeleteFilterRequest.h>
#include <aws/personalize/model/DeleteMetricAttributionRequest.h>
#include <aws/personalize/model/DeleteRecommenderRequest.h>
#include <aws/personalize/model/DeleteSchemaRequest.h>
#include <aws/personalize/model/DeleteSolutionRequest.h>
#include <aws/personalize/model/DescribeAlgorithmRequest.h>
#include <aws/personalize/model/DescribeBatchInferenceJobRequest.h>
#include <aws/personalize/model/DescribeBatchSegmentJobRequest.h>
#include <aws/personalize/model/DescribeCampaignRequest.h>
#include <aws/personalize/model/DescribeDatasetRequest.h>
#include <aws/personalize/model/DescribeDatasetExportJobRequest.h>
#include <aws/personalize/model/DescribeDatasetGroupRequest.h>
#include <aws/personalize/model/DescribeDatasetImportJobRequest.h>
#include <aws/personalize/model/DescribeEventTrackerRequest.h>
#include <aws/personalize/model/DescribeFeatureTransformationRequest.h>
#include <aws/personalize/model/DescribeFilterRequest.h>
#include <aws/personalize/model/DescribeMetricAttributionRequest.h>
#include <aws/personalize/model/DescribeRecipeRequest.h>
#include <aws/personalize/model/DescribeRecommenderRequest.h>
#include <aws/personalize/model/DescribeSchemaRequest.h>
#include <aws/personalize/model/DescribeSolutionRequest.h>
#include <aws/personalize/model/DescribeSolutionVersionRequest.h>
#include <aws/personalize/model/GetSolutionMetricsRequest.h>
#include <aws/personalize/model/ListBatchInferenceJobsRequest.h>
#include <aws/personalize/model/ListBatchSegmentJobsRequest.h>
#include <aws/personalize/model/ListCampaignsRequest.h>
#include <aws/personalize/model/ListDatasetExportJobsRequest.h>
#include <aws/personalize/model/ListDatasetGroupsRequest.h>
#include <aws/personalize/model/ListDatasetImportJobsRequest.h>
#include <aws/personalize/model/ListDatasetsRequest.h>
#include <aws/personalize/model/ListEventTrackersRequest.h>
#include <aws/personalize/model/ListFiltersRequest.h>
#include <aws/personalize/model/ListMetricAttributionMetricsRequest.h>
#include <aws/personalize/model/ListMetricAttributionsRequest.h>
#include <aws/personalize/model/ListRecipesRequest.h>
#include <aws/personalize/model/ListRecommendersRequest.h>
#include <aws/personalize/model/ListSchemasRequest.h>
#include <aws/personalize/model/ListSolutionVersionsRequest.h>
#include <aws/personalize/model/ListSolutionsRequest.h>
#include <aws/personalize/model/ListTagsForResourceRequest.h>
#include <aws/personalize/model/StartRecommenderRequest.h>
#include <aws/personalize/model/StopRecommenderRequest.h>
#include <aws/personalize/model/StopSolutionVersionCreationRequest.h>
#include <aws/personalize/model/TagResourceRequest.h>
#include <aws/personalize/model/UntagResourceRequest.h>
#include <aws/personalize/model/UpdateCampaignRequest.h>
#include <aws/personalize/model/UpdateMetricAttributionRequest.h>
#include <aws/personalize/model/UpdateRecommenderRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Personalize;
using namespace Aws::Personalize::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* PersonalizeClient::SERVICE_NAME = "personalize";
const char* PersonalizeClient::ALLOCATION_TAG = "PersonalizeClient";

PersonalizeClient::PersonalizeClient(const Personalize::PersonalizeClientConfiguration& clientConfiguration,
                                     std::shared_ptr<PersonalizeEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PersonalizeErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

PersonalizeClient::PersonalizeClient(const AWSCredentials& credentials,
                                     std::shared_ptr<PersonalizeEndpointProviderBase> endpointProvider,
                                     const Personalize::PersonalizeClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PersonalizeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

PersonalizeClient::PersonalizeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<PersonalizeEndpointProviderBase> endpointProvider,
                                     const Personalize::PersonalizeClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PersonalizeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  PersonalizeClient::PersonalizeClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PersonalizeErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<PersonalizeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

PersonalizeClient::PersonalizeClient(const AWSCredentials& credentials,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PersonalizeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<PersonalizeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

PersonalizeClient::PersonalizeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PersonalizeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<PersonalizeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
PersonalizeClient::~PersonalizeClient()
{
}

std::shared_ptr<PersonalizeEndpointProviderBase>& PersonalizeClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void PersonalizeClient::init(const Personalize::PersonalizeClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Personalize");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void PersonalizeClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateBatchInferenceJobOutcome PersonalizeClient::CreateBatchInferenceJob(const CreateBatchInferenceJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBatchInferenceJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBatchInferenceJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateBatchInferenceJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBatchInferenceJobOutcomeCallable PersonalizeClient::CreateBatchInferenceJobCallable(const CreateBatchInferenceJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBatchInferenceJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBatchInferenceJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::CreateBatchInferenceJobAsync(const CreateBatchInferenceJobRequest& request, const CreateBatchInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateBatchInferenceJob(request), context);
    } );
}

CreateBatchSegmentJobOutcome PersonalizeClient::CreateBatchSegmentJob(const CreateBatchSegmentJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBatchSegmentJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBatchSegmentJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateBatchSegmentJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBatchSegmentJobOutcomeCallable PersonalizeClient::CreateBatchSegmentJobCallable(const CreateBatchSegmentJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBatchSegmentJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBatchSegmentJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::CreateBatchSegmentJobAsync(const CreateBatchSegmentJobRequest& request, const CreateBatchSegmentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateBatchSegmentJob(request), context);
    } );
}

CreateCampaignOutcome PersonalizeClient::CreateCampaign(const CreateCampaignRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCampaign, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCampaign, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateCampaignOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCampaignOutcomeCallable PersonalizeClient::CreateCampaignCallable(const CreateCampaignRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCampaignOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCampaign(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::CreateCampaignAsync(const CreateCampaignRequest& request, const CreateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateCampaign(request), context);
    } );
}

CreateDatasetOutcome PersonalizeClient::CreateDataset(const CreateDatasetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDatasetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDatasetOutcomeCallable PersonalizeClient::CreateDatasetCallable(const CreateDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::CreateDatasetAsync(const CreateDatasetRequest& request, const CreateDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDataset(request), context);
    } );
}

CreateDatasetExportJobOutcome PersonalizeClient::CreateDatasetExportJob(const CreateDatasetExportJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDatasetExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDatasetExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDatasetExportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDatasetExportJobOutcomeCallable PersonalizeClient::CreateDatasetExportJobCallable(const CreateDatasetExportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDatasetExportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDatasetExportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::CreateDatasetExportJobAsync(const CreateDatasetExportJobRequest& request, const CreateDatasetExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDatasetExportJob(request), context);
    } );
}

CreateDatasetGroupOutcome PersonalizeClient::CreateDatasetGroup(const CreateDatasetGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDatasetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDatasetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDatasetGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDatasetGroupOutcomeCallable PersonalizeClient::CreateDatasetGroupCallable(const CreateDatasetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDatasetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDatasetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::CreateDatasetGroupAsync(const CreateDatasetGroupRequest& request, const CreateDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDatasetGroup(request), context);
    } );
}

CreateDatasetImportJobOutcome PersonalizeClient::CreateDatasetImportJob(const CreateDatasetImportJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDatasetImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDatasetImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDatasetImportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDatasetImportJobOutcomeCallable PersonalizeClient::CreateDatasetImportJobCallable(const CreateDatasetImportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDatasetImportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDatasetImportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::CreateDatasetImportJobAsync(const CreateDatasetImportJobRequest& request, const CreateDatasetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDatasetImportJob(request), context);
    } );
}

CreateEventTrackerOutcome PersonalizeClient::CreateEventTracker(const CreateEventTrackerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateEventTracker, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateEventTracker, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateEventTrackerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEventTrackerOutcomeCallable PersonalizeClient::CreateEventTrackerCallable(const CreateEventTrackerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEventTrackerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEventTracker(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::CreateEventTrackerAsync(const CreateEventTrackerRequest& request, const CreateEventTrackerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateEventTracker(request), context);
    } );
}

CreateFilterOutcome PersonalizeClient::CreateFilter(const CreateFilterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateFilterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFilterOutcomeCallable PersonalizeClient::CreateFilterCallable(const CreateFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::CreateFilterAsync(const CreateFilterRequest& request, const CreateFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateFilter(request), context);
    } );
}

CreateMetricAttributionOutcome PersonalizeClient::CreateMetricAttribution(const CreateMetricAttributionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMetricAttribution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateMetricAttribution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateMetricAttributionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMetricAttributionOutcomeCallable PersonalizeClient::CreateMetricAttributionCallable(const CreateMetricAttributionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMetricAttributionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMetricAttribution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::CreateMetricAttributionAsync(const CreateMetricAttributionRequest& request, const CreateMetricAttributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateMetricAttribution(request), context);
    } );
}

CreateRecommenderOutcome PersonalizeClient::CreateRecommender(const CreateRecommenderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRecommender, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRecommender, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateRecommenderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRecommenderOutcomeCallable PersonalizeClient::CreateRecommenderCallable(const CreateRecommenderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRecommenderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRecommender(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::CreateRecommenderAsync(const CreateRecommenderRequest& request, const CreateRecommenderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateRecommender(request), context);
    } );
}

CreateSchemaOutcome PersonalizeClient::CreateSchema(const CreateSchemaRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSchema, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSchema, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateSchemaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSchemaOutcomeCallable PersonalizeClient::CreateSchemaCallable(const CreateSchemaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSchemaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSchema(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::CreateSchemaAsync(const CreateSchemaRequest& request, const CreateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSchema(request), context);
    } );
}

CreateSolutionOutcome PersonalizeClient::CreateSolution(const CreateSolutionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSolution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSolution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateSolutionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSolutionOutcomeCallable PersonalizeClient::CreateSolutionCallable(const CreateSolutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSolutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSolution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::CreateSolutionAsync(const CreateSolutionRequest& request, const CreateSolutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSolution(request), context);
    } );
}

CreateSolutionVersionOutcome PersonalizeClient::CreateSolutionVersion(const CreateSolutionVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSolutionVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSolutionVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateSolutionVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSolutionVersionOutcomeCallable PersonalizeClient::CreateSolutionVersionCallable(const CreateSolutionVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSolutionVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSolutionVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::CreateSolutionVersionAsync(const CreateSolutionVersionRequest& request, const CreateSolutionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateSolutionVersion(request), context);
    } );
}

DeleteCampaignOutcome PersonalizeClient::DeleteCampaign(const DeleteCampaignRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCampaign, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCampaign, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteCampaignOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteCampaignOutcomeCallable PersonalizeClient::DeleteCampaignCallable(const DeleteCampaignRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCampaignOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCampaign(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DeleteCampaignAsync(const DeleteCampaignRequest& request, const DeleteCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteCampaign(request), context);
    } );
}

DeleteDatasetOutcome PersonalizeClient::DeleteDataset(const DeleteDatasetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDatasetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDatasetOutcomeCallable PersonalizeClient::DeleteDatasetCallable(const DeleteDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DeleteDatasetAsync(const DeleteDatasetRequest& request, const DeleteDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDataset(request), context);
    } );
}

DeleteDatasetGroupOutcome PersonalizeClient::DeleteDatasetGroup(const DeleteDatasetGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDatasetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDatasetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDatasetGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDatasetGroupOutcomeCallable PersonalizeClient::DeleteDatasetGroupCallable(const DeleteDatasetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDatasetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDatasetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DeleteDatasetGroupAsync(const DeleteDatasetGroupRequest& request, const DeleteDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDatasetGroup(request), context);
    } );
}

DeleteEventTrackerOutcome PersonalizeClient::DeleteEventTracker(const DeleteEventTrackerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEventTracker, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEventTracker, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteEventTrackerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEventTrackerOutcomeCallable PersonalizeClient::DeleteEventTrackerCallable(const DeleteEventTrackerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEventTrackerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEventTracker(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DeleteEventTrackerAsync(const DeleteEventTrackerRequest& request, const DeleteEventTrackerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteEventTracker(request), context);
    } );
}

DeleteFilterOutcome PersonalizeClient::DeleteFilter(const DeleteFilterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteFilterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteFilterOutcomeCallable PersonalizeClient::DeleteFilterCallable(const DeleteFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DeleteFilterAsync(const DeleteFilterRequest& request, const DeleteFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteFilter(request), context);
    } );
}

DeleteMetricAttributionOutcome PersonalizeClient::DeleteMetricAttribution(const DeleteMetricAttributionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMetricAttribution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteMetricAttribution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteMetricAttributionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteMetricAttributionOutcomeCallable PersonalizeClient::DeleteMetricAttributionCallable(const DeleteMetricAttributionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMetricAttributionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMetricAttribution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DeleteMetricAttributionAsync(const DeleteMetricAttributionRequest& request, const DeleteMetricAttributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteMetricAttribution(request), context);
    } );
}

DeleteRecommenderOutcome PersonalizeClient::DeleteRecommender(const DeleteRecommenderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRecommender, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRecommender, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteRecommenderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRecommenderOutcomeCallable PersonalizeClient::DeleteRecommenderCallable(const DeleteRecommenderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRecommenderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRecommender(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DeleteRecommenderAsync(const DeleteRecommenderRequest& request, const DeleteRecommenderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteRecommender(request), context);
    } );
}

DeleteSchemaOutcome PersonalizeClient::DeleteSchema(const DeleteSchemaRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSchema, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSchema, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteSchemaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSchemaOutcomeCallable PersonalizeClient::DeleteSchemaCallable(const DeleteSchemaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSchemaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSchema(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DeleteSchemaAsync(const DeleteSchemaRequest& request, const DeleteSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSchema(request), context);
    } );
}

DeleteSolutionOutcome PersonalizeClient::DeleteSolution(const DeleteSolutionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSolution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSolution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteSolutionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSolutionOutcomeCallable PersonalizeClient::DeleteSolutionCallable(const DeleteSolutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSolutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSolution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DeleteSolutionAsync(const DeleteSolutionRequest& request, const DeleteSolutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteSolution(request), context);
    } );
}

DescribeAlgorithmOutcome PersonalizeClient::DescribeAlgorithm(const DescribeAlgorithmRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeAlgorithm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeAlgorithm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeAlgorithmOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAlgorithmOutcomeCallable PersonalizeClient::DescribeAlgorithmCallable(const DescribeAlgorithmRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAlgorithmOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAlgorithm(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DescribeAlgorithmAsync(const DescribeAlgorithmRequest& request, const DescribeAlgorithmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeAlgorithm(request), context);
    } );
}

DescribeBatchInferenceJobOutcome PersonalizeClient::DescribeBatchInferenceJob(const DescribeBatchInferenceJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeBatchInferenceJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeBatchInferenceJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeBatchInferenceJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeBatchInferenceJobOutcomeCallable PersonalizeClient::DescribeBatchInferenceJobCallable(const DescribeBatchInferenceJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeBatchInferenceJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeBatchInferenceJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DescribeBatchInferenceJobAsync(const DescribeBatchInferenceJobRequest& request, const DescribeBatchInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeBatchInferenceJob(request), context);
    } );
}

DescribeBatchSegmentJobOutcome PersonalizeClient::DescribeBatchSegmentJob(const DescribeBatchSegmentJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeBatchSegmentJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeBatchSegmentJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeBatchSegmentJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeBatchSegmentJobOutcomeCallable PersonalizeClient::DescribeBatchSegmentJobCallable(const DescribeBatchSegmentJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeBatchSegmentJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeBatchSegmentJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DescribeBatchSegmentJobAsync(const DescribeBatchSegmentJobRequest& request, const DescribeBatchSegmentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeBatchSegmentJob(request), context);
    } );
}

DescribeCampaignOutcome PersonalizeClient::DescribeCampaign(const DescribeCampaignRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCampaign, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeCampaign, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeCampaignOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCampaignOutcomeCallable PersonalizeClient::DescribeCampaignCallable(const DescribeCampaignRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCampaignOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCampaign(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DescribeCampaignAsync(const DescribeCampaignRequest& request, const DescribeCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeCampaign(request), context);
    } );
}

DescribeDatasetOutcome PersonalizeClient::DescribeDataset(const DescribeDatasetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDataset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeDatasetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDatasetOutcomeCallable PersonalizeClient::DescribeDatasetCallable(const DescribeDatasetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDatasetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDataset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DescribeDatasetAsync(const DescribeDatasetRequest& request, const DescribeDatasetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDataset(request), context);
    } );
}

DescribeDatasetExportJobOutcome PersonalizeClient::DescribeDatasetExportJob(const DescribeDatasetExportJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDatasetExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDatasetExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeDatasetExportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDatasetExportJobOutcomeCallable PersonalizeClient::DescribeDatasetExportJobCallable(const DescribeDatasetExportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDatasetExportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDatasetExportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DescribeDatasetExportJobAsync(const DescribeDatasetExportJobRequest& request, const DescribeDatasetExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDatasetExportJob(request), context);
    } );
}

DescribeDatasetGroupOutcome PersonalizeClient::DescribeDatasetGroup(const DescribeDatasetGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDatasetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDatasetGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeDatasetGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDatasetGroupOutcomeCallable PersonalizeClient::DescribeDatasetGroupCallable(const DescribeDatasetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDatasetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDatasetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DescribeDatasetGroupAsync(const DescribeDatasetGroupRequest& request, const DescribeDatasetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDatasetGroup(request), context);
    } );
}

DescribeDatasetImportJobOutcome PersonalizeClient::DescribeDatasetImportJob(const DescribeDatasetImportJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDatasetImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDatasetImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeDatasetImportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDatasetImportJobOutcomeCallable PersonalizeClient::DescribeDatasetImportJobCallable(const DescribeDatasetImportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDatasetImportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDatasetImportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DescribeDatasetImportJobAsync(const DescribeDatasetImportJobRequest& request, const DescribeDatasetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDatasetImportJob(request), context);
    } );
}

DescribeEventTrackerOutcome PersonalizeClient::DescribeEventTracker(const DescribeEventTrackerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEventTracker, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEventTracker, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeEventTrackerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEventTrackerOutcomeCallable PersonalizeClient::DescribeEventTrackerCallable(const DescribeEventTrackerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventTrackerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEventTracker(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DescribeEventTrackerAsync(const DescribeEventTrackerRequest& request, const DescribeEventTrackerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeEventTracker(request), context);
    } );
}

DescribeFeatureTransformationOutcome PersonalizeClient::DescribeFeatureTransformation(const DescribeFeatureTransformationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFeatureTransformation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFeatureTransformation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeFeatureTransformationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFeatureTransformationOutcomeCallable PersonalizeClient::DescribeFeatureTransformationCallable(const DescribeFeatureTransformationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFeatureTransformationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFeatureTransformation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DescribeFeatureTransformationAsync(const DescribeFeatureTransformationRequest& request, const DescribeFeatureTransformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeFeatureTransformation(request), context);
    } );
}

DescribeFilterOutcome PersonalizeClient::DescribeFilter(const DescribeFilterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeFilterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFilterOutcomeCallable PersonalizeClient::DescribeFilterCallable(const DescribeFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DescribeFilterAsync(const DescribeFilterRequest& request, const DescribeFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeFilter(request), context);
    } );
}

DescribeMetricAttributionOutcome PersonalizeClient::DescribeMetricAttribution(const DescribeMetricAttributionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeMetricAttribution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeMetricAttribution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeMetricAttributionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeMetricAttributionOutcomeCallable PersonalizeClient::DescribeMetricAttributionCallable(const DescribeMetricAttributionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMetricAttributionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMetricAttribution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DescribeMetricAttributionAsync(const DescribeMetricAttributionRequest& request, const DescribeMetricAttributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeMetricAttribution(request), context);
    } );
}

DescribeRecipeOutcome PersonalizeClient::DescribeRecipe(const DescribeRecipeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeRecipe, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeRecipe, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeRecipeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeRecipeOutcomeCallable PersonalizeClient::DescribeRecipeCallable(const DescribeRecipeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRecipeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRecipe(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DescribeRecipeAsync(const DescribeRecipeRequest& request, const DescribeRecipeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeRecipe(request), context);
    } );
}

DescribeRecommenderOutcome PersonalizeClient::DescribeRecommender(const DescribeRecommenderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeRecommender, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeRecommender, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeRecommenderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeRecommenderOutcomeCallable PersonalizeClient::DescribeRecommenderCallable(const DescribeRecommenderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRecommenderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRecommender(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DescribeRecommenderAsync(const DescribeRecommenderRequest& request, const DescribeRecommenderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeRecommender(request), context);
    } );
}

DescribeSchemaOutcome PersonalizeClient::DescribeSchema(const DescribeSchemaRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSchema, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSchema, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSchemaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSchemaOutcomeCallable PersonalizeClient::DescribeSchemaCallable(const DescribeSchemaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSchemaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSchema(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DescribeSchemaAsync(const DescribeSchemaRequest& request, const DescribeSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeSchema(request), context);
    } );
}

DescribeSolutionOutcome PersonalizeClient::DescribeSolution(const DescribeSolutionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSolution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSolution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSolutionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSolutionOutcomeCallable PersonalizeClient::DescribeSolutionCallable(const DescribeSolutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSolutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSolution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DescribeSolutionAsync(const DescribeSolutionRequest& request, const DescribeSolutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeSolution(request), context);
    } );
}

DescribeSolutionVersionOutcome PersonalizeClient::DescribeSolutionVersion(const DescribeSolutionVersionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeSolutionVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeSolutionVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeSolutionVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSolutionVersionOutcomeCallable PersonalizeClient::DescribeSolutionVersionCallable(const DescribeSolutionVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSolutionVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSolutionVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::DescribeSolutionVersionAsync(const DescribeSolutionVersionRequest& request, const DescribeSolutionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeSolutionVersion(request), context);
    } );
}

GetSolutionMetricsOutcome PersonalizeClient::GetSolutionMetrics(const GetSolutionMetricsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSolutionMetrics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSolutionMetrics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetSolutionMetricsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSolutionMetricsOutcomeCallable PersonalizeClient::GetSolutionMetricsCallable(const GetSolutionMetricsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSolutionMetricsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSolutionMetrics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::GetSolutionMetricsAsync(const GetSolutionMetricsRequest& request, const GetSolutionMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSolutionMetrics(request), context);
    } );
}

ListBatchInferenceJobsOutcome PersonalizeClient::ListBatchInferenceJobs(const ListBatchInferenceJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBatchInferenceJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBatchInferenceJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListBatchInferenceJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListBatchInferenceJobsOutcomeCallable PersonalizeClient::ListBatchInferenceJobsCallable(const ListBatchInferenceJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBatchInferenceJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBatchInferenceJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::ListBatchInferenceJobsAsync(const ListBatchInferenceJobsRequest& request, const ListBatchInferenceJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListBatchInferenceJobs(request), context);
    } );
}

ListBatchSegmentJobsOutcome PersonalizeClient::ListBatchSegmentJobs(const ListBatchSegmentJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBatchSegmentJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBatchSegmentJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListBatchSegmentJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListBatchSegmentJobsOutcomeCallable PersonalizeClient::ListBatchSegmentJobsCallable(const ListBatchSegmentJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBatchSegmentJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBatchSegmentJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::ListBatchSegmentJobsAsync(const ListBatchSegmentJobsRequest& request, const ListBatchSegmentJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListBatchSegmentJobs(request), context);
    } );
}

ListCampaignsOutcome PersonalizeClient::ListCampaigns(const ListCampaignsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCampaigns, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCampaigns, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListCampaignsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCampaignsOutcomeCallable PersonalizeClient::ListCampaignsCallable(const ListCampaignsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCampaignsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCampaigns(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::ListCampaignsAsync(const ListCampaignsRequest& request, const ListCampaignsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListCampaigns(request), context);
    } );
}

ListDatasetExportJobsOutcome PersonalizeClient::ListDatasetExportJobs(const ListDatasetExportJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDatasetExportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDatasetExportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListDatasetExportJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDatasetExportJobsOutcomeCallable PersonalizeClient::ListDatasetExportJobsCallable(const ListDatasetExportJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDatasetExportJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDatasetExportJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::ListDatasetExportJobsAsync(const ListDatasetExportJobsRequest& request, const ListDatasetExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDatasetExportJobs(request), context);
    } );
}

ListDatasetGroupsOutcome PersonalizeClient::ListDatasetGroups(const ListDatasetGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDatasetGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDatasetGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListDatasetGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDatasetGroupsOutcomeCallable PersonalizeClient::ListDatasetGroupsCallable(const ListDatasetGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDatasetGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDatasetGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::ListDatasetGroupsAsync(const ListDatasetGroupsRequest& request, const ListDatasetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDatasetGroups(request), context);
    } );
}

ListDatasetImportJobsOutcome PersonalizeClient::ListDatasetImportJobs(const ListDatasetImportJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDatasetImportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDatasetImportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListDatasetImportJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDatasetImportJobsOutcomeCallable PersonalizeClient::ListDatasetImportJobsCallable(const ListDatasetImportJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDatasetImportJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDatasetImportJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::ListDatasetImportJobsAsync(const ListDatasetImportJobsRequest& request, const ListDatasetImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDatasetImportJobs(request), context);
    } );
}

ListDatasetsOutcome PersonalizeClient::ListDatasets(const ListDatasetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDatasets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDatasets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListDatasetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDatasetsOutcomeCallable PersonalizeClient::ListDatasetsCallable(const ListDatasetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDatasetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDatasets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::ListDatasetsAsync(const ListDatasetsRequest& request, const ListDatasetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDatasets(request), context);
    } );
}

ListEventTrackersOutcome PersonalizeClient::ListEventTrackers(const ListEventTrackersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEventTrackers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListEventTrackers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListEventTrackersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEventTrackersOutcomeCallable PersonalizeClient::ListEventTrackersCallable(const ListEventTrackersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEventTrackersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEventTrackers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::ListEventTrackersAsync(const ListEventTrackersRequest& request, const ListEventTrackersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListEventTrackers(request), context);
    } );
}

ListFiltersOutcome PersonalizeClient::ListFilters(const ListFiltersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFilters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFilters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListFiltersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFiltersOutcomeCallable PersonalizeClient::ListFiltersCallable(const ListFiltersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFiltersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFilters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::ListFiltersAsync(const ListFiltersRequest& request, const ListFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListFilters(request), context);
    } );
}

ListMetricAttributionMetricsOutcome PersonalizeClient::ListMetricAttributionMetrics(const ListMetricAttributionMetricsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMetricAttributionMetrics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMetricAttributionMetrics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListMetricAttributionMetricsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListMetricAttributionMetricsOutcomeCallable PersonalizeClient::ListMetricAttributionMetricsCallable(const ListMetricAttributionMetricsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMetricAttributionMetricsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMetricAttributionMetrics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::ListMetricAttributionMetricsAsync(const ListMetricAttributionMetricsRequest& request, const ListMetricAttributionMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListMetricAttributionMetrics(request), context);
    } );
}

ListMetricAttributionsOutcome PersonalizeClient::ListMetricAttributions(const ListMetricAttributionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMetricAttributions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMetricAttributions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListMetricAttributionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListMetricAttributionsOutcomeCallable PersonalizeClient::ListMetricAttributionsCallable(const ListMetricAttributionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMetricAttributionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMetricAttributions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::ListMetricAttributionsAsync(const ListMetricAttributionsRequest& request, const ListMetricAttributionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListMetricAttributions(request), context);
    } );
}

ListRecipesOutcome PersonalizeClient::ListRecipes(const ListRecipesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRecipes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRecipes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListRecipesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRecipesOutcomeCallable PersonalizeClient::ListRecipesCallable(const ListRecipesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRecipesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRecipes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::ListRecipesAsync(const ListRecipesRequest& request, const ListRecipesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListRecipes(request), context);
    } );
}

ListRecommendersOutcome PersonalizeClient::ListRecommenders(const ListRecommendersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRecommenders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRecommenders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListRecommendersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRecommendersOutcomeCallable PersonalizeClient::ListRecommendersCallable(const ListRecommendersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRecommendersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRecommenders(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::ListRecommendersAsync(const ListRecommendersRequest& request, const ListRecommendersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListRecommenders(request), context);
    } );
}

ListSchemasOutcome PersonalizeClient::ListSchemas(const ListSchemasRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSchemas, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSchemas, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListSchemasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSchemasOutcomeCallable PersonalizeClient::ListSchemasCallable(const ListSchemasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSchemasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSchemas(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::ListSchemasAsync(const ListSchemasRequest& request, const ListSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSchemas(request), context);
    } );
}

ListSolutionVersionsOutcome PersonalizeClient::ListSolutionVersions(const ListSolutionVersionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSolutionVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSolutionVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListSolutionVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSolutionVersionsOutcomeCallable PersonalizeClient::ListSolutionVersionsCallable(const ListSolutionVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSolutionVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSolutionVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::ListSolutionVersionsAsync(const ListSolutionVersionsRequest& request, const ListSolutionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSolutionVersions(request), context);
    } );
}

ListSolutionsOutcome PersonalizeClient::ListSolutions(const ListSolutionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSolutions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSolutions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListSolutionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSolutionsOutcomeCallable PersonalizeClient::ListSolutionsCallable(const ListSolutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSolutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSolutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::ListSolutionsAsync(const ListSolutionsRequest& request, const ListSolutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSolutions(request), context);
    } );
}

ListTagsForResourceOutcome PersonalizeClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable PersonalizeClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

StartRecommenderOutcome PersonalizeClient::StartRecommender(const StartRecommenderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartRecommender, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartRecommender, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartRecommenderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartRecommenderOutcomeCallable PersonalizeClient::StartRecommenderCallable(const StartRecommenderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartRecommenderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartRecommender(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::StartRecommenderAsync(const StartRecommenderRequest& request, const StartRecommenderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartRecommender(request), context);
    } );
}

StopRecommenderOutcome PersonalizeClient::StopRecommender(const StopRecommenderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopRecommender, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopRecommender, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopRecommenderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopRecommenderOutcomeCallable PersonalizeClient::StopRecommenderCallable(const StopRecommenderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopRecommenderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopRecommender(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::StopRecommenderAsync(const StopRecommenderRequest& request, const StopRecommenderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopRecommender(request), context);
    } );
}

StopSolutionVersionCreationOutcome PersonalizeClient::StopSolutionVersionCreation(const StopSolutionVersionCreationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopSolutionVersionCreation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopSolutionVersionCreation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopSolutionVersionCreationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopSolutionVersionCreationOutcomeCallable PersonalizeClient::StopSolutionVersionCreationCallable(const StopSolutionVersionCreationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopSolutionVersionCreationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopSolutionVersionCreation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::StopSolutionVersionCreationAsync(const StopSolutionVersionCreationRequest& request, const StopSolutionVersionCreationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopSolutionVersionCreation(request), context);
    } );
}

TagResourceOutcome PersonalizeClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable PersonalizeClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome PersonalizeClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable PersonalizeClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateCampaignOutcome PersonalizeClient::UpdateCampaign(const UpdateCampaignRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateCampaign, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateCampaign, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateCampaignOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateCampaignOutcomeCallable PersonalizeClient::UpdateCampaignCallable(const UpdateCampaignRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCampaignOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCampaign(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::UpdateCampaignAsync(const UpdateCampaignRequest& request, const UpdateCampaignResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateCampaign(request), context);
    } );
}

UpdateMetricAttributionOutcome PersonalizeClient::UpdateMetricAttribution(const UpdateMetricAttributionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateMetricAttribution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateMetricAttribution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateMetricAttributionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateMetricAttributionOutcomeCallable PersonalizeClient::UpdateMetricAttributionCallable(const UpdateMetricAttributionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMetricAttributionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMetricAttribution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::UpdateMetricAttributionAsync(const UpdateMetricAttributionRequest& request, const UpdateMetricAttributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateMetricAttribution(request), context);
    } );
}

UpdateRecommenderOutcome PersonalizeClient::UpdateRecommender(const UpdateRecommenderRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRecommender, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRecommender, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateRecommenderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRecommenderOutcomeCallable PersonalizeClient::UpdateRecommenderCallable(const UpdateRecommenderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRecommenderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRecommender(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeClient::UpdateRecommenderAsync(const UpdateRecommenderRequest& request, const UpdateRecommenderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateRecommender(request), context);
    } );
}

