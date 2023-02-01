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

#include <aws/kendra-ranking/KendraRankingClient.h>
#include <aws/kendra-ranking/KendraRankingErrorMarshaller.h>
#include <aws/kendra-ranking/KendraRankingEndpointProvider.h>
#include <aws/kendra-ranking/model/CreateRescoreExecutionPlanRequest.h>
#include <aws/kendra-ranking/model/DeleteRescoreExecutionPlanRequest.h>
#include <aws/kendra-ranking/model/DescribeRescoreExecutionPlanRequest.h>
#include <aws/kendra-ranking/model/ListRescoreExecutionPlansRequest.h>
#include <aws/kendra-ranking/model/ListTagsForResourceRequest.h>
#include <aws/kendra-ranking/model/RescoreRequest.h>
#include <aws/kendra-ranking/model/TagResourceRequest.h>
#include <aws/kendra-ranking/model/UntagResourceRequest.h>
#include <aws/kendra-ranking/model/UpdateRescoreExecutionPlanRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::KendraRanking;
using namespace Aws::KendraRanking::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* KendraRankingClient::SERVICE_NAME = "kendra-ranking";
const char* KendraRankingClient::ALLOCATION_TAG = "KendraRankingClient";

KendraRankingClient::KendraRankingClient(const KendraRanking::KendraRankingClientConfiguration& clientConfiguration,
                                         std::shared_ptr<KendraRankingEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KendraRankingErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

KendraRankingClient::KendraRankingClient(const AWSCredentials& credentials,
                                         std::shared_ptr<KendraRankingEndpointProviderBase> endpointProvider,
                                         const KendraRanking::KendraRankingClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KendraRankingErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

KendraRankingClient::KendraRankingClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<KendraRankingEndpointProviderBase> endpointProvider,
                                         const KendraRanking::KendraRankingClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KendraRankingErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  KendraRankingClient::KendraRankingClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KendraRankingErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<KendraRankingEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

KendraRankingClient::KendraRankingClient(const AWSCredentials& credentials,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KendraRankingErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<KendraRankingEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

KendraRankingClient::KendraRankingClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KendraRankingErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<KendraRankingEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
KendraRankingClient::~KendraRankingClient()
{
}

std::shared_ptr<KendraRankingEndpointProviderBase>& KendraRankingClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void KendraRankingClient::init(const KendraRanking::KendraRankingClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Kendra Ranking");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void KendraRankingClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateRescoreExecutionPlanOutcome KendraRankingClient::CreateRescoreExecutionPlan(const CreateRescoreExecutionPlanRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRescoreExecutionPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRescoreExecutionPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateRescoreExecutionPlanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRescoreExecutionPlanOutcome KendraRankingClient::DeleteRescoreExecutionPlan(const DeleteRescoreExecutionPlanRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRescoreExecutionPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRescoreExecutionPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteRescoreExecutionPlanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeRescoreExecutionPlanOutcome KendraRankingClient::DescribeRescoreExecutionPlan(const DescribeRescoreExecutionPlanRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeRescoreExecutionPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeRescoreExecutionPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeRescoreExecutionPlanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRescoreExecutionPlansOutcome KendraRankingClient::ListRescoreExecutionPlans(const ListRescoreExecutionPlansRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRescoreExecutionPlans, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRescoreExecutionPlans, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListRescoreExecutionPlansOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcome KendraRankingClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RescoreOutcome KendraRankingClient::Rescore(const RescoreRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, Rescore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, Rescore, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RescoreOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcome KendraRankingClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcome KendraRankingClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRescoreExecutionPlanOutcome KendraRankingClient::UpdateRescoreExecutionPlan(const UpdateRescoreExecutionPlanRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRescoreExecutionPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRescoreExecutionPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateRescoreExecutionPlanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

