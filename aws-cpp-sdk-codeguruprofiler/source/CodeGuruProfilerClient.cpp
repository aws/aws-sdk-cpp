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

#include <aws/codeguruprofiler/CodeGuruProfilerClient.h>
#include <aws/codeguruprofiler/CodeGuruProfilerErrorMarshaller.h>
#include <aws/codeguruprofiler/CodeGuruProfilerEndpointProvider.h>
#include <aws/codeguruprofiler/model/AddNotificationChannelsRequest.h>
#include <aws/codeguruprofiler/model/BatchGetFrameMetricDataRequest.h>
#include <aws/codeguruprofiler/model/ConfigureAgentRequest.h>
#include <aws/codeguruprofiler/model/CreateProfilingGroupRequest.h>
#include <aws/codeguruprofiler/model/DeleteProfilingGroupRequest.h>
#include <aws/codeguruprofiler/model/DescribeProfilingGroupRequest.h>
#include <aws/codeguruprofiler/model/GetFindingsReportAccountSummaryRequest.h>
#include <aws/codeguruprofiler/model/GetNotificationConfigurationRequest.h>
#include <aws/codeguruprofiler/model/GetPolicyRequest.h>
#include <aws/codeguruprofiler/model/GetProfileRequest.h>
#include <aws/codeguruprofiler/model/GetRecommendationsRequest.h>
#include <aws/codeguruprofiler/model/ListFindingsReportsRequest.h>
#include <aws/codeguruprofiler/model/ListProfileTimesRequest.h>
#include <aws/codeguruprofiler/model/ListProfilingGroupsRequest.h>
#include <aws/codeguruprofiler/model/ListTagsForResourceRequest.h>
#include <aws/codeguruprofiler/model/PostAgentProfileRequest.h>
#include <aws/codeguruprofiler/model/PutPermissionRequest.h>
#include <aws/codeguruprofiler/model/RemoveNotificationChannelRequest.h>
#include <aws/codeguruprofiler/model/RemovePermissionRequest.h>
#include <aws/codeguruprofiler/model/SubmitFeedbackRequest.h>
#include <aws/codeguruprofiler/model/TagResourceRequest.h>
#include <aws/codeguruprofiler/model/UntagResourceRequest.h>
#include <aws/codeguruprofiler/model/UpdateProfilingGroupRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CodeGuruProfiler;
using namespace Aws::CodeGuruProfiler::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* CodeGuruProfilerClient::SERVICE_NAME = "codeguru-profiler";
const char* CodeGuruProfilerClient::ALLOCATION_TAG = "CodeGuruProfilerClient";

CodeGuruProfilerClient::CodeGuruProfilerClient(const CodeGuruProfiler::CodeGuruProfilerClientConfiguration& clientConfiguration,
                                               std::shared_ptr<CodeGuruProfilerEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeGuruProfilerErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

CodeGuruProfilerClient::CodeGuruProfilerClient(const AWSCredentials& credentials,
                                               std::shared_ptr<CodeGuruProfilerEndpointProviderBase> endpointProvider,
                                               const CodeGuruProfiler::CodeGuruProfilerClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeGuruProfilerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

CodeGuruProfilerClient::CodeGuruProfilerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               std::shared_ptr<CodeGuruProfilerEndpointProviderBase> endpointProvider,
                                               const CodeGuruProfiler::CodeGuruProfilerClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  credentialsProvider,
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeGuruProfilerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  CodeGuruProfilerClient::CodeGuruProfilerClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeGuruProfilerErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<CodeGuruProfilerEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CodeGuruProfilerClient::CodeGuruProfilerClient(const AWSCredentials& credentials,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeGuruProfilerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CodeGuruProfilerEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CodeGuruProfilerClient::CodeGuruProfilerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  credentialsProvider,
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeGuruProfilerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CodeGuruProfilerEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
CodeGuruProfilerClient::~CodeGuruProfilerClient()
{
}

std::shared_ptr<CodeGuruProfilerEndpointProviderBase>& CodeGuruProfilerClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void CodeGuruProfilerClient::init(const CodeGuruProfiler::CodeGuruProfilerClientConfiguration& config)
{
  AWSClient::SetServiceClientName("CodeGuruProfiler");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void CodeGuruProfilerClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AddNotificationChannelsOutcome CodeGuruProfilerClient::AddNotificationChannels(const AddNotificationChannelsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddNotificationChannels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProfilingGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AddNotificationChannels", "Required field: ProfilingGroupName, is not set");
    return AddNotificationChannelsOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfilingGroupName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddNotificationChannels, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/profilingGroups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfilingGroupName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/notificationConfiguration");
  return AddNotificationChannelsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddNotificationChannelsOutcomeCallable CodeGuruProfilerClient::AddNotificationChannelsCallable(const AddNotificationChannelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddNotificationChannelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddNotificationChannels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruProfilerClient::AddNotificationChannelsAsync(const AddNotificationChannelsRequest& request, const AddNotificationChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AddNotificationChannels(request), context);
    } );
}

BatchGetFrameMetricDataOutcome CodeGuruProfilerClient::BatchGetFrameMetricData(const BatchGetFrameMetricDataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetFrameMetricData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProfilingGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchGetFrameMetricData", "Required field: ProfilingGroupName, is not set");
    return BatchGetFrameMetricDataOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfilingGroupName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchGetFrameMetricData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/profilingGroups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfilingGroupName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/frames/-/metrics");
  return BatchGetFrameMetricDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetFrameMetricDataOutcomeCallable CodeGuruProfilerClient::BatchGetFrameMetricDataCallable(const BatchGetFrameMetricDataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetFrameMetricDataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetFrameMetricData(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruProfilerClient::BatchGetFrameMetricDataAsync(const BatchGetFrameMetricDataRequest& request, const BatchGetFrameMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchGetFrameMetricData(request), context);
    } );
}

ConfigureAgentOutcome CodeGuruProfilerClient::ConfigureAgent(const ConfigureAgentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ConfigureAgent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProfilingGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ConfigureAgent", "Required field: ProfilingGroupName, is not set");
    return ConfigureAgentOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfilingGroupName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ConfigureAgent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/profilingGroups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfilingGroupName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/configureAgent");
  return ConfigureAgentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ConfigureAgentOutcomeCallable CodeGuruProfilerClient::ConfigureAgentCallable(const ConfigureAgentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ConfigureAgentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ConfigureAgent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruProfilerClient::ConfigureAgentAsync(const ConfigureAgentRequest& request, const ConfigureAgentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ConfigureAgent(request), context);
    } );
}

CreateProfilingGroupOutcome CodeGuruProfilerClient::CreateProfilingGroup(const CreateProfilingGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateProfilingGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ClientTokenHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateProfilingGroup", "Required field: ClientToken, is not set");
    return CreateProfilingGroupOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClientToken]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateProfilingGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/profilingGroups");
  return CreateProfilingGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProfilingGroupOutcomeCallable CodeGuruProfilerClient::CreateProfilingGroupCallable(const CreateProfilingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProfilingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProfilingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruProfilerClient::CreateProfilingGroupAsync(const CreateProfilingGroupRequest& request, const CreateProfilingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateProfilingGroup(request), context);
    } );
}

DeleteProfilingGroupOutcome CodeGuruProfilerClient::DeleteProfilingGroup(const DeleteProfilingGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteProfilingGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProfilingGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProfilingGroup", "Required field: ProfilingGroupName, is not set");
    return DeleteProfilingGroupOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfilingGroupName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteProfilingGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/profilingGroups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfilingGroupName());
  return DeleteProfilingGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteProfilingGroupOutcomeCallable CodeGuruProfilerClient::DeleteProfilingGroupCallable(const DeleteProfilingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProfilingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProfilingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruProfilerClient::DeleteProfilingGroupAsync(const DeleteProfilingGroupRequest& request, const DeleteProfilingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteProfilingGroup(request), context);
    } );
}

DescribeProfilingGroupOutcome CodeGuruProfilerClient::DescribeProfilingGroup(const DescribeProfilingGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeProfilingGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProfilingGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeProfilingGroup", "Required field: ProfilingGroupName, is not set");
    return DescribeProfilingGroupOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfilingGroupName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeProfilingGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/profilingGroups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfilingGroupName());
  return DescribeProfilingGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeProfilingGroupOutcomeCallable CodeGuruProfilerClient::DescribeProfilingGroupCallable(const DescribeProfilingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProfilingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProfilingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruProfilerClient::DescribeProfilingGroupAsync(const DescribeProfilingGroupRequest& request, const DescribeProfilingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeProfilingGroup(request), context);
    } );
}

GetFindingsReportAccountSummaryOutcome CodeGuruProfilerClient::GetFindingsReportAccountSummary(const GetFindingsReportAccountSummaryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFindingsReportAccountSummary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetFindingsReportAccountSummary, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/internal/findingsReports");
  return GetFindingsReportAccountSummaryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetFindingsReportAccountSummaryOutcomeCallable CodeGuruProfilerClient::GetFindingsReportAccountSummaryCallable(const GetFindingsReportAccountSummaryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFindingsReportAccountSummaryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFindingsReportAccountSummary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruProfilerClient::GetFindingsReportAccountSummaryAsync(const GetFindingsReportAccountSummaryRequest& request, const GetFindingsReportAccountSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetFindingsReportAccountSummary(request), context);
    } );
}

GetNotificationConfigurationOutcome CodeGuruProfilerClient::GetNotificationConfiguration(const GetNotificationConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetNotificationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProfilingGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetNotificationConfiguration", "Required field: ProfilingGroupName, is not set");
    return GetNotificationConfigurationOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfilingGroupName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetNotificationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/profilingGroups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfilingGroupName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/notificationConfiguration");
  return GetNotificationConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetNotificationConfigurationOutcomeCallable CodeGuruProfilerClient::GetNotificationConfigurationCallable(const GetNotificationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetNotificationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetNotificationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruProfilerClient::GetNotificationConfigurationAsync(const GetNotificationConfigurationRequest& request, const GetNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetNotificationConfiguration(request), context);
    } );
}

GetPolicyOutcome CodeGuruProfilerClient::GetPolicy(const GetPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProfilingGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPolicy", "Required field: ProfilingGroupName, is not set");
    return GetPolicyOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfilingGroupName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/profilingGroups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfilingGroupName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy");
  return GetPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetPolicyOutcomeCallable CodeGuruProfilerClient::GetPolicyCallable(const GetPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruProfilerClient::GetPolicyAsync(const GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetPolicy(request), context);
    } );
}

GetProfileOutcome CodeGuruProfilerClient::GetProfile(const GetProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProfilingGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetProfile", "Required field: ProfilingGroupName, is not set");
    return GetProfileOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfilingGroupName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/profilingGroups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfilingGroupName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/profile");
  return GetProfileOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetProfileOutcomeCallable CodeGuruProfilerClient::GetProfileCallable(const GetProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruProfilerClient::GetProfileAsync(const GetProfileRequest& request, const GetProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetProfile(request), context);
    } );
}

GetRecommendationsOutcome CodeGuruProfilerClient::GetRecommendations(const GetRecommendationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EndTimeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRecommendations", "Required field: EndTime, is not set");
    return GetRecommendationsOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndTime]", false));
  }
  if (!request.ProfilingGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRecommendations", "Required field: ProfilingGroupName, is not set");
    return GetRecommendationsOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfilingGroupName]", false));
  }
  if (!request.StartTimeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRecommendations", "Required field: StartTime, is not set");
    return GetRecommendationsOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartTime]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/internal/profilingGroups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfilingGroupName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/recommendations");
  return GetRecommendationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetRecommendationsOutcomeCallable CodeGuruProfilerClient::GetRecommendationsCallable(const GetRecommendationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRecommendationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRecommendations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruProfilerClient::GetRecommendationsAsync(const GetRecommendationsRequest& request, const GetRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRecommendations(request), context);
    } );
}

ListFindingsReportsOutcome CodeGuruProfilerClient::ListFindingsReports(const ListFindingsReportsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFindingsReports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EndTimeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFindingsReports", "Required field: EndTime, is not set");
    return ListFindingsReportsOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndTime]", false));
  }
  if (!request.ProfilingGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFindingsReports", "Required field: ProfilingGroupName, is not set");
    return ListFindingsReportsOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfilingGroupName]", false));
  }
  if (!request.StartTimeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFindingsReports", "Required field: StartTime, is not set");
    return ListFindingsReportsOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartTime]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFindingsReports, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/internal/profilingGroups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfilingGroupName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/findingsReports");
  return ListFindingsReportsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListFindingsReportsOutcomeCallable CodeGuruProfilerClient::ListFindingsReportsCallable(const ListFindingsReportsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFindingsReportsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFindingsReports(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruProfilerClient::ListFindingsReportsAsync(const ListFindingsReportsRequest& request, const ListFindingsReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListFindingsReports(request), context);
    } );
}

ListProfileTimesOutcome CodeGuruProfilerClient::ListProfileTimes(const ListProfileTimesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListProfileTimes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EndTimeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListProfileTimes", "Required field: EndTime, is not set");
    return ListProfileTimesOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndTime]", false));
  }
  if (!request.PeriodHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListProfileTimes", "Required field: Period, is not set");
    return ListProfileTimesOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Period]", false));
  }
  if (!request.ProfilingGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListProfileTimes", "Required field: ProfilingGroupName, is not set");
    return ListProfileTimesOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfilingGroupName]", false));
  }
  if (!request.StartTimeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListProfileTimes", "Required field: StartTime, is not set");
    return ListProfileTimesOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartTime]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListProfileTimes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/profilingGroups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfilingGroupName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/profileTimes");
  return ListProfileTimesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListProfileTimesOutcomeCallable CodeGuruProfilerClient::ListProfileTimesCallable(const ListProfileTimesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProfileTimesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProfileTimes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruProfilerClient::ListProfileTimesAsync(const ListProfileTimesRequest& request, const ListProfileTimesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListProfileTimes(request), context);
    } );
}

ListProfilingGroupsOutcome CodeGuruProfilerClient::ListProfilingGroups(const ListProfilingGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListProfilingGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListProfilingGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/profilingGroups");
  return ListProfilingGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListProfilingGroupsOutcomeCallable CodeGuruProfilerClient::ListProfilingGroupsCallable(const ListProfilingGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProfilingGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProfilingGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruProfilerClient::ListProfilingGroupsAsync(const ListProfilingGroupsRequest& request, const ListProfilingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListProfilingGroups(request), context);
    } );
}

ListTagsForResourceOutcome CodeGuruProfilerClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable CodeGuruProfilerClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruProfilerClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

PostAgentProfileOutcome CodeGuruProfilerClient::PostAgentProfile(const PostAgentProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PostAgentProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProfilingGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PostAgentProfile", "Required field: ProfilingGroupName, is not set");
    return PostAgentProfileOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfilingGroupName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PostAgentProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/profilingGroups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfilingGroupName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/agentProfile");
  return PostAgentProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PostAgentProfileOutcomeCallable CodeGuruProfilerClient::PostAgentProfileCallable(const PostAgentProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PostAgentProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PostAgentProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruProfilerClient::PostAgentProfileAsync(const PostAgentProfileRequest& request, const PostAgentProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PostAgentProfile(request), context);
    } );
}

PutPermissionOutcome CodeGuruProfilerClient::PutPermission(const PutPermissionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutPermission, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ActionGroupHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutPermission", "Required field: ActionGroup, is not set");
    return PutPermissionOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ActionGroup]", false));
  }
  if (!request.ProfilingGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutPermission", "Required field: ProfilingGroupName, is not set");
    return PutPermissionOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfilingGroupName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutPermission, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/profilingGroups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfilingGroupName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy/");
  endpointResolutionOutcome.GetResult().AddPathSegment(ActionGroupMapper::GetNameForActionGroup(request.GetActionGroup()));
  return PutPermissionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutPermissionOutcomeCallable CodeGuruProfilerClient::PutPermissionCallable(const PutPermissionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutPermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutPermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruProfilerClient::PutPermissionAsync(const PutPermissionRequest& request, const PutPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutPermission(request), context);
    } );
}

RemoveNotificationChannelOutcome CodeGuruProfilerClient::RemoveNotificationChannel(const RemoveNotificationChannelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveNotificationChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveNotificationChannel", "Required field: ChannelId, is not set");
    return RemoveNotificationChannelOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelId]", false));
  }
  if (!request.ProfilingGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveNotificationChannel", "Required field: ProfilingGroupName, is not set");
    return RemoveNotificationChannelOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfilingGroupName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveNotificationChannel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/profilingGroups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfilingGroupName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/notificationConfiguration/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChannelId());
  return RemoveNotificationChannelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

RemoveNotificationChannelOutcomeCallable CodeGuruProfilerClient::RemoveNotificationChannelCallable(const RemoveNotificationChannelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveNotificationChannelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveNotificationChannel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruProfilerClient::RemoveNotificationChannelAsync(const RemoveNotificationChannelRequest& request, const RemoveNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RemoveNotificationChannel(request), context);
    } );
}

RemovePermissionOutcome CodeGuruProfilerClient::RemovePermission(const RemovePermissionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemovePermission, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ActionGroupHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemovePermission", "Required field: ActionGroup, is not set");
    return RemovePermissionOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ActionGroup]", false));
  }
  if (!request.ProfilingGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemovePermission", "Required field: ProfilingGroupName, is not set");
    return RemovePermissionOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfilingGroupName]", false));
  }
  if (!request.RevisionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemovePermission", "Required field: RevisionId, is not set");
    return RemovePermissionOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RevisionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemovePermission, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/profilingGroups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfilingGroupName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy/");
  endpointResolutionOutcome.GetResult().AddPathSegment(ActionGroupMapper::GetNameForActionGroup(request.GetActionGroup()));
  return RemovePermissionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

RemovePermissionOutcomeCallable CodeGuruProfilerClient::RemovePermissionCallable(const RemovePermissionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemovePermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemovePermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruProfilerClient::RemovePermissionAsync(const RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RemovePermission(request), context);
    } );
}

SubmitFeedbackOutcome CodeGuruProfilerClient::SubmitFeedback(const SubmitFeedbackRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SubmitFeedback, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AnomalyInstanceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SubmitFeedback", "Required field: AnomalyInstanceId, is not set");
    return SubmitFeedbackOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnomalyInstanceId]", false));
  }
  if (!request.ProfilingGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SubmitFeedback", "Required field: ProfilingGroupName, is not set");
    return SubmitFeedbackOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfilingGroupName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SubmitFeedback, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/internal/profilingGroups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfilingGroupName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/anomalies/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnomalyInstanceId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/feedback");
  return SubmitFeedbackOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SubmitFeedbackOutcomeCallable CodeGuruProfilerClient::SubmitFeedbackCallable(const SubmitFeedbackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SubmitFeedbackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SubmitFeedback(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruProfilerClient::SubmitFeedbackAsync(const SubmitFeedbackRequest& request, const SubmitFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SubmitFeedback(request), context);
    } );
}

TagResourceOutcome CodeGuruProfilerClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable CodeGuruProfilerClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruProfilerClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome CodeGuruProfilerClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable CodeGuruProfilerClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruProfilerClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateProfilingGroupOutcome CodeGuruProfilerClient::UpdateProfilingGroup(const UpdateProfilingGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateProfilingGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProfilingGroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateProfilingGroup", "Required field: ProfilingGroupName, is not set");
    return UpdateProfilingGroupOutcome(Aws::Client::AWSError<CodeGuruProfilerErrors>(CodeGuruProfilerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfilingGroupName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateProfilingGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/profilingGroups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfilingGroupName());
  return UpdateProfilingGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateProfilingGroupOutcomeCallable CodeGuruProfilerClient::UpdateProfilingGroupCallable(const UpdateProfilingGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProfilingGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProfilingGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruProfilerClient::UpdateProfilingGroupAsync(const UpdateProfilingGroupRequest& request, const UpdateProfilingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateProfilingGroup(request), context);
    } );
}

