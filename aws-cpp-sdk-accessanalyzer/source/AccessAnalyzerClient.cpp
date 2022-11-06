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

#include <aws/accessanalyzer/AccessAnalyzerClient.h>
#include <aws/accessanalyzer/AccessAnalyzerErrorMarshaller.h>
#include <aws/accessanalyzer/AccessAnalyzerEndpointProvider.h>
#include <aws/accessanalyzer/model/ApplyArchiveRuleRequest.h>
#include <aws/accessanalyzer/model/CancelPolicyGenerationRequest.h>
#include <aws/accessanalyzer/model/CreateAccessPreviewRequest.h>
#include <aws/accessanalyzer/model/CreateAnalyzerRequest.h>
#include <aws/accessanalyzer/model/CreateArchiveRuleRequest.h>
#include <aws/accessanalyzer/model/DeleteAnalyzerRequest.h>
#include <aws/accessanalyzer/model/DeleteArchiveRuleRequest.h>
#include <aws/accessanalyzer/model/GetAccessPreviewRequest.h>
#include <aws/accessanalyzer/model/GetAnalyzedResourceRequest.h>
#include <aws/accessanalyzer/model/GetAnalyzerRequest.h>
#include <aws/accessanalyzer/model/GetArchiveRuleRequest.h>
#include <aws/accessanalyzer/model/GetFindingRequest.h>
#include <aws/accessanalyzer/model/GetGeneratedPolicyRequest.h>
#include <aws/accessanalyzer/model/ListAccessPreviewFindingsRequest.h>
#include <aws/accessanalyzer/model/ListAccessPreviewsRequest.h>
#include <aws/accessanalyzer/model/ListAnalyzedResourcesRequest.h>
#include <aws/accessanalyzer/model/ListAnalyzersRequest.h>
#include <aws/accessanalyzer/model/ListArchiveRulesRequest.h>
#include <aws/accessanalyzer/model/ListFindingsRequest.h>
#include <aws/accessanalyzer/model/ListPolicyGenerationsRequest.h>
#include <aws/accessanalyzer/model/ListTagsForResourceRequest.h>
#include <aws/accessanalyzer/model/StartPolicyGenerationRequest.h>
#include <aws/accessanalyzer/model/StartResourceScanRequest.h>
#include <aws/accessanalyzer/model/TagResourceRequest.h>
#include <aws/accessanalyzer/model/UntagResourceRequest.h>
#include <aws/accessanalyzer/model/UpdateArchiveRuleRequest.h>
#include <aws/accessanalyzer/model/UpdateFindingsRequest.h>
#include <aws/accessanalyzer/model/ValidatePolicyRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::AccessAnalyzer;
using namespace Aws::AccessAnalyzer::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* AccessAnalyzerClient::SERVICE_NAME = "access-analyzer";
const char* AccessAnalyzerClient::ALLOCATION_TAG = "AccessAnalyzerClient";

AccessAnalyzerClient::AccessAnalyzerClient(const AccessAnalyzer::AccessAnalyzerClientConfiguration& clientConfiguration,
                                           std::shared_ptr<AccessAnalyzerEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AccessAnalyzerErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

AccessAnalyzerClient::AccessAnalyzerClient(const AWSCredentials& credentials,
                                           std::shared_ptr<AccessAnalyzerEndpointProviderBase> endpointProvider,
                                           const AccessAnalyzer::AccessAnalyzerClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AccessAnalyzerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

AccessAnalyzerClient::AccessAnalyzerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           std::shared_ptr<AccessAnalyzerEndpointProviderBase> endpointProvider,
                                           const AccessAnalyzer::AccessAnalyzerClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AccessAnalyzerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  AccessAnalyzerClient::AccessAnalyzerClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AccessAnalyzerErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<AccessAnalyzerEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

AccessAnalyzerClient::AccessAnalyzerClient(const AWSCredentials& credentials,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AccessAnalyzerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<AccessAnalyzerEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

AccessAnalyzerClient::AccessAnalyzerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AccessAnalyzerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<AccessAnalyzerEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
AccessAnalyzerClient::~AccessAnalyzerClient()
{
}

std::shared_ptr<AccessAnalyzerEndpointProviderBase>& AccessAnalyzerClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void AccessAnalyzerClient::init(const AccessAnalyzer::AccessAnalyzerClientConfiguration& config)
{
  AWSClient::SetServiceClientName("AccessAnalyzer");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void AccessAnalyzerClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

ApplyArchiveRuleOutcome AccessAnalyzerClient::ApplyArchiveRule(const ApplyArchiveRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ApplyArchiveRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ApplyArchiveRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/archive-rule");
  return ApplyArchiveRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

ApplyArchiveRuleOutcomeCallable AccessAnalyzerClient::ApplyArchiveRuleCallable(const ApplyArchiveRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ApplyArchiveRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ApplyArchiveRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::ApplyArchiveRuleAsync(const ApplyArchiveRuleRequest& request, const ApplyArchiveRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ApplyArchiveRule(request), context);
    } );
}

CancelPolicyGenerationOutcome AccessAnalyzerClient::CancelPolicyGeneration(const CancelPolicyGenerationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelPolicyGeneration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelPolicyGeneration", "Required field: JobId, is not set");
    return CancelPolicyGenerationOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelPolicyGeneration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy/generation/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  return CancelPolicyGenerationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CancelPolicyGenerationOutcomeCallable AccessAnalyzerClient::CancelPolicyGenerationCallable(const CancelPolicyGenerationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelPolicyGenerationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelPolicyGeneration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::CancelPolicyGenerationAsync(const CancelPolicyGenerationRequest& request, const CancelPolicyGenerationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CancelPolicyGeneration(request), context);
    } );
}

CreateAccessPreviewOutcome AccessAnalyzerClient::CreateAccessPreview(const CreateAccessPreviewRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAccessPreview, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAccessPreview, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/access-preview");
  return CreateAccessPreviewOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateAccessPreviewOutcomeCallable AccessAnalyzerClient::CreateAccessPreviewCallable(const CreateAccessPreviewRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAccessPreviewOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAccessPreview(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::CreateAccessPreviewAsync(const CreateAccessPreviewRequest& request, const CreateAccessPreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAccessPreview(request), context);
    } );
}

CreateAnalyzerOutcome AccessAnalyzerClient::CreateAnalyzer(const CreateAnalyzerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateAnalyzer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateAnalyzer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/analyzer");
  return CreateAnalyzerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateAnalyzerOutcomeCallable AccessAnalyzerClient::CreateAnalyzerCallable(const CreateAnalyzerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAnalyzerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAnalyzer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::CreateAnalyzerAsync(const CreateAnalyzerRequest& request, const CreateAnalyzerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateAnalyzer(request), context);
    } );
}

CreateArchiveRuleOutcome AccessAnalyzerClient::CreateArchiveRule(const CreateArchiveRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateArchiveRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AnalyzerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateArchiveRule", "Required field: AnalyzerName, is not set");
    return CreateArchiveRuleOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalyzerName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateArchiveRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/analyzer/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalyzerName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/archive-rule");
  return CreateArchiveRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateArchiveRuleOutcomeCallable AccessAnalyzerClient::CreateArchiveRuleCallable(const CreateArchiveRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateArchiveRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateArchiveRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::CreateArchiveRuleAsync(const CreateArchiveRuleRequest& request, const CreateArchiveRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateArchiveRule(request), context);
    } );
}

DeleteAnalyzerOutcome AccessAnalyzerClient::DeleteAnalyzer(const DeleteAnalyzerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAnalyzer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AnalyzerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAnalyzer", "Required field: AnalyzerName, is not set");
    return DeleteAnalyzerOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalyzerName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAnalyzer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/analyzer/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalyzerName());
  return DeleteAnalyzerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAnalyzerOutcomeCallable AccessAnalyzerClient::DeleteAnalyzerCallable(const DeleteAnalyzerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAnalyzerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAnalyzer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::DeleteAnalyzerAsync(const DeleteAnalyzerRequest& request, const DeleteAnalyzerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAnalyzer(request), context);
    } );
}

DeleteArchiveRuleOutcome AccessAnalyzerClient::DeleteArchiveRule(const DeleteArchiveRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteArchiveRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AnalyzerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteArchiveRule", "Required field: AnalyzerName, is not set");
    return DeleteArchiveRuleOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalyzerName]", false));
  }
  if (!request.RuleNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteArchiveRule", "Required field: RuleName, is not set");
    return DeleteArchiveRuleOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RuleName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteArchiveRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/analyzer/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalyzerName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/archive-rule/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRuleName());
  return DeleteArchiveRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteArchiveRuleOutcomeCallable AccessAnalyzerClient::DeleteArchiveRuleCallable(const DeleteArchiveRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteArchiveRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteArchiveRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::DeleteArchiveRuleAsync(const DeleteArchiveRuleRequest& request, const DeleteArchiveRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteArchiveRule(request), context);
    } );
}

GetAccessPreviewOutcome AccessAnalyzerClient::GetAccessPreview(const GetAccessPreviewRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAccessPreview, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccessPreviewIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAccessPreview", "Required field: AccessPreviewId, is not set");
    return GetAccessPreviewOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccessPreviewId]", false));
  }
  if (!request.AnalyzerArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAccessPreview", "Required field: AnalyzerArn, is not set");
    return GetAccessPreviewOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalyzerArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAccessPreview, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/access-preview/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccessPreviewId());
  return GetAccessPreviewOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAccessPreviewOutcomeCallable AccessAnalyzerClient::GetAccessPreviewCallable(const GetAccessPreviewRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccessPreviewOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccessPreview(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::GetAccessPreviewAsync(const GetAccessPreviewRequest& request, const GetAccessPreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAccessPreview(request), context);
    } );
}

GetAnalyzedResourceOutcome AccessAnalyzerClient::GetAnalyzedResource(const GetAnalyzedResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAnalyzedResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AnalyzerArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAnalyzedResource", "Required field: AnalyzerArn, is not set");
    return GetAnalyzedResourceOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalyzerArn]", false));
  }
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAnalyzedResource", "Required field: ResourceArn, is not set");
    return GetAnalyzedResourceOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAnalyzedResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/analyzed-resource");
  return GetAnalyzedResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAnalyzedResourceOutcomeCallable AccessAnalyzerClient::GetAnalyzedResourceCallable(const GetAnalyzedResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAnalyzedResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAnalyzedResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::GetAnalyzedResourceAsync(const GetAnalyzedResourceRequest& request, const GetAnalyzedResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAnalyzedResource(request), context);
    } );
}

GetAnalyzerOutcome AccessAnalyzerClient::GetAnalyzer(const GetAnalyzerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAnalyzer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AnalyzerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAnalyzer", "Required field: AnalyzerName, is not set");
    return GetAnalyzerOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalyzerName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAnalyzer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/analyzer/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalyzerName());
  return GetAnalyzerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAnalyzerOutcomeCallable AccessAnalyzerClient::GetAnalyzerCallable(const GetAnalyzerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAnalyzerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAnalyzer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::GetAnalyzerAsync(const GetAnalyzerRequest& request, const GetAnalyzerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAnalyzer(request), context);
    } );
}

GetArchiveRuleOutcome AccessAnalyzerClient::GetArchiveRule(const GetArchiveRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetArchiveRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AnalyzerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetArchiveRule", "Required field: AnalyzerName, is not set");
    return GetArchiveRuleOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalyzerName]", false));
  }
  if (!request.RuleNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetArchiveRule", "Required field: RuleName, is not set");
    return GetArchiveRuleOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RuleName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetArchiveRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/analyzer/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalyzerName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/archive-rule/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRuleName());
  return GetArchiveRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetArchiveRuleOutcomeCallable AccessAnalyzerClient::GetArchiveRuleCallable(const GetArchiveRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetArchiveRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetArchiveRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::GetArchiveRuleAsync(const GetArchiveRuleRequest& request, const GetArchiveRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetArchiveRule(request), context);
    } );
}

GetFindingOutcome AccessAnalyzerClient::GetFinding(const GetFindingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFinding, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AnalyzerArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFinding", "Required field: AnalyzerArn, is not set");
    return GetFindingOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalyzerArn]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFinding", "Required field: Id, is not set");
    return GetFindingOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetFinding, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/finding/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetFindingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetFindingOutcomeCallable AccessAnalyzerClient::GetFindingCallable(const GetFindingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFindingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFinding(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::GetFindingAsync(const GetFindingRequest& request, const GetFindingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetFinding(request), context);
    } );
}

GetGeneratedPolicyOutcome AccessAnalyzerClient::GetGeneratedPolicy(const GetGeneratedPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetGeneratedPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetGeneratedPolicy", "Required field: JobId, is not set");
    return GetGeneratedPolicyOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetGeneratedPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy/generation/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  return GetGeneratedPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetGeneratedPolicyOutcomeCallable AccessAnalyzerClient::GetGeneratedPolicyCallable(const GetGeneratedPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGeneratedPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGeneratedPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::GetGeneratedPolicyAsync(const GetGeneratedPolicyRequest& request, const GetGeneratedPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetGeneratedPolicy(request), context);
    } );
}

ListAccessPreviewFindingsOutcome AccessAnalyzerClient::ListAccessPreviewFindings(const ListAccessPreviewFindingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAccessPreviewFindings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AccessPreviewIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAccessPreviewFindings", "Required field: AccessPreviewId, is not set");
    return ListAccessPreviewFindingsOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccessPreviewId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAccessPreviewFindings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/access-preview/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccessPreviewId());
  return ListAccessPreviewFindingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAccessPreviewFindingsOutcomeCallable AccessAnalyzerClient::ListAccessPreviewFindingsCallable(const ListAccessPreviewFindingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAccessPreviewFindingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAccessPreviewFindings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::ListAccessPreviewFindingsAsync(const ListAccessPreviewFindingsRequest& request, const ListAccessPreviewFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAccessPreviewFindings(request), context);
    } );
}

ListAccessPreviewsOutcome AccessAnalyzerClient::ListAccessPreviews(const ListAccessPreviewsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAccessPreviews, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AnalyzerArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAccessPreviews", "Required field: AnalyzerArn, is not set");
    return ListAccessPreviewsOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalyzerArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAccessPreviews, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/access-preview");
  return ListAccessPreviewsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAccessPreviewsOutcomeCallable AccessAnalyzerClient::ListAccessPreviewsCallable(const ListAccessPreviewsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAccessPreviewsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAccessPreviews(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::ListAccessPreviewsAsync(const ListAccessPreviewsRequest& request, const ListAccessPreviewsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAccessPreviews(request), context);
    } );
}

ListAnalyzedResourcesOutcome AccessAnalyzerClient::ListAnalyzedResources(const ListAnalyzedResourcesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAnalyzedResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAnalyzedResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/analyzed-resource");
  return ListAnalyzedResourcesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAnalyzedResourcesOutcomeCallable AccessAnalyzerClient::ListAnalyzedResourcesCallable(const ListAnalyzedResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAnalyzedResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAnalyzedResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::ListAnalyzedResourcesAsync(const ListAnalyzedResourcesRequest& request, const ListAnalyzedResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAnalyzedResources(request), context);
    } );
}

ListAnalyzersOutcome AccessAnalyzerClient::ListAnalyzers(const ListAnalyzersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAnalyzers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAnalyzers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/analyzer");
  return ListAnalyzersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAnalyzersOutcomeCallable AccessAnalyzerClient::ListAnalyzersCallable(const ListAnalyzersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAnalyzersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAnalyzers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::ListAnalyzersAsync(const ListAnalyzersRequest& request, const ListAnalyzersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAnalyzers(request), context);
    } );
}

ListArchiveRulesOutcome AccessAnalyzerClient::ListArchiveRules(const ListArchiveRulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListArchiveRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AnalyzerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListArchiveRules", "Required field: AnalyzerName, is not set");
    return ListArchiveRulesOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalyzerName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListArchiveRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/analyzer/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalyzerName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/archive-rule");
  return ListArchiveRulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListArchiveRulesOutcomeCallable AccessAnalyzerClient::ListArchiveRulesCallable(const ListArchiveRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListArchiveRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListArchiveRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::ListArchiveRulesAsync(const ListArchiveRulesRequest& request, const ListArchiveRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListArchiveRules(request), context);
    } );
}

ListFindingsOutcome AccessAnalyzerClient::ListFindings(const ListFindingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFindings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFindings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/finding");
  return ListFindingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFindingsOutcomeCallable AccessAnalyzerClient::ListFindingsCallable(const ListFindingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFindingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFindings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::ListFindingsAsync(const ListFindingsRequest& request, const ListFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListFindings(request), context);
    } );
}

ListPolicyGenerationsOutcome AccessAnalyzerClient::ListPolicyGenerations(const ListPolicyGenerationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPolicyGenerations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPolicyGenerations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy/generation");
  return ListPolicyGenerationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPolicyGenerationsOutcomeCallable AccessAnalyzerClient::ListPolicyGenerationsCallable(const ListPolicyGenerationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPolicyGenerationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPolicyGenerations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::ListPolicyGenerationsAsync(const ListPolicyGenerationsRequest& request, const ListPolicyGenerationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListPolicyGenerations(request), context);
    } );
}

ListTagsForResourceOutcome AccessAnalyzerClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable AccessAnalyzerClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

StartPolicyGenerationOutcome AccessAnalyzerClient::StartPolicyGeneration(const StartPolicyGenerationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartPolicyGeneration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartPolicyGeneration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy/generation");
  return StartPolicyGenerationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

StartPolicyGenerationOutcomeCallable AccessAnalyzerClient::StartPolicyGenerationCallable(const StartPolicyGenerationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartPolicyGenerationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartPolicyGeneration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::StartPolicyGenerationAsync(const StartPolicyGenerationRequest& request, const StartPolicyGenerationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartPolicyGeneration(request), context);
    } );
}

StartResourceScanOutcome AccessAnalyzerClient::StartResourceScan(const StartResourceScanRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartResourceScan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartResourceScan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/resource/scan");
  return StartResourceScanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartResourceScanOutcomeCallable AccessAnalyzerClient::StartResourceScanCallable(const StartResourceScanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartResourceScanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartResourceScan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::StartResourceScanAsync(const StartResourceScanRequest& request, const StartResourceScanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartResourceScan(request), context);
    } );
}

TagResourceOutcome AccessAnalyzerClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable AccessAnalyzerClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome AccessAnalyzerClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable AccessAnalyzerClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateArchiveRuleOutcome AccessAnalyzerClient::UpdateArchiveRule(const UpdateArchiveRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateArchiveRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AnalyzerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateArchiveRule", "Required field: AnalyzerName, is not set");
    return UpdateArchiveRuleOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalyzerName]", false));
  }
  if (!request.RuleNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateArchiveRule", "Required field: RuleName, is not set");
    return UpdateArchiveRuleOutcome(Aws::Client::AWSError<AccessAnalyzerErrors>(AccessAnalyzerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RuleName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateArchiveRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/analyzer/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalyzerName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/archive-rule/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRuleName());
  return UpdateArchiveRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateArchiveRuleOutcomeCallable AccessAnalyzerClient::UpdateArchiveRuleCallable(const UpdateArchiveRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateArchiveRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateArchiveRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::UpdateArchiveRuleAsync(const UpdateArchiveRuleRequest& request, const UpdateArchiveRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateArchiveRule(request), context);
    } );
}

UpdateFindingsOutcome AccessAnalyzerClient::UpdateFindings(const UpdateFindingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFindings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFindings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/finding");
  return UpdateFindingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateFindingsOutcomeCallable AccessAnalyzerClient::UpdateFindingsCallable(const UpdateFindingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFindingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFindings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::UpdateFindingsAsync(const UpdateFindingsRequest& request, const UpdateFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateFindings(request), context);
    } );
}

ValidatePolicyOutcome AccessAnalyzerClient::ValidatePolicy(const ValidatePolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ValidatePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ValidatePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/policy/validation");
  return ValidatePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ValidatePolicyOutcomeCallable AccessAnalyzerClient::ValidatePolicyCallable(const ValidatePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ValidatePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ValidatePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AccessAnalyzerClient::ValidatePolicyAsync(const ValidatePolicyRequest& request, const ValidatePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ValidatePolicy(request), context);
    } );
}

