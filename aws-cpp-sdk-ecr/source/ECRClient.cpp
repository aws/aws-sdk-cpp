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

#include <aws/ecr/ECRClient.h>
#include <aws/ecr/ECRErrorMarshaller.h>
#include <aws/ecr/ECREndpointProvider.h>
#include <aws/ecr/model/BatchCheckLayerAvailabilityRequest.h>
#include <aws/ecr/model/BatchDeleteImageRequest.h>
#include <aws/ecr/model/BatchGetImageRequest.h>
#include <aws/ecr/model/BatchGetRepositoryScanningConfigurationRequest.h>
#include <aws/ecr/model/CompleteLayerUploadRequest.h>
#include <aws/ecr/model/CreatePullThroughCacheRuleRequest.h>
#include <aws/ecr/model/CreateRepositoryRequest.h>
#include <aws/ecr/model/DeleteLifecyclePolicyRequest.h>
#include <aws/ecr/model/DeletePullThroughCacheRuleRequest.h>
#include <aws/ecr/model/DeleteRegistryPolicyRequest.h>
#include <aws/ecr/model/DeleteRepositoryRequest.h>
#include <aws/ecr/model/DeleteRepositoryPolicyRequest.h>
#include <aws/ecr/model/DescribeImageReplicationStatusRequest.h>
#include <aws/ecr/model/DescribeImageScanFindingsRequest.h>
#include <aws/ecr/model/DescribeImagesRequest.h>
#include <aws/ecr/model/DescribePullThroughCacheRulesRequest.h>
#include <aws/ecr/model/DescribeRegistryRequest.h>
#include <aws/ecr/model/DescribeRepositoriesRequest.h>
#include <aws/ecr/model/GetAuthorizationTokenRequest.h>
#include <aws/ecr/model/GetDownloadUrlForLayerRequest.h>
#include <aws/ecr/model/GetLifecyclePolicyRequest.h>
#include <aws/ecr/model/GetLifecyclePolicyPreviewRequest.h>
#include <aws/ecr/model/GetRegistryPolicyRequest.h>
#include <aws/ecr/model/GetRegistryScanningConfigurationRequest.h>
#include <aws/ecr/model/GetRepositoryPolicyRequest.h>
#include <aws/ecr/model/InitiateLayerUploadRequest.h>
#include <aws/ecr/model/ListImagesRequest.h>
#include <aws/ecr/model/ListTagsForResourceRequest.h>
#include <aws/ecr/model/PutImageRequest.h>
#include <aws/ecr/model/PutImageScanningConfigurationRequest.h>
#include <aws/ecr/model/PutImageTagMutabilityRequest.h>
#include <aws/ecr/model/PutLifecyclePolicyRequest.h>
#include <aws/ecr/model/PutRegistryPolicyRequest.h>
#include <aws/ecr/model/PutRegistryScanningConfigurationRequest.h>
#include <aws/ecr/model/PutReplicationConfigurationRequest.h>
#include <aws/ecr/model/SetRepositoryPolicyRequest.h>
#include <aws/ecr/model/StartImageScanRequest.h>
#include <aws/ecr/model/StartLifecyclePolicyPreviewRequest.h>
#include <aws/ecr/model/TagResourceRequest.h>
#include <aws/ecr/model/UntagResourceRequest.h>
#include <aws/ecr/model/UploadLayerPartRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ECR;
using namespace Aws::ECR::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* ECRClient::SERVICE_NAME = "ecr";
const char* ECRClient::ALLOCATION_TAG = "ECRClient";

ECRClient::ECRClient(const ECR::ECRClientConfiguration& clientConfiguration,
                     std::shared_ptr<ECREndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ECRErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ECRClient::ECRClient(const AWSCredentials& credentials,
                     std::shared_ptr<ECREndpointProviderBase> endpointProvider,
                     const ECR::ECRClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ECRErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ECRClient::ECRClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<ECREndpointProviderBase> endpointProvider,
                     const ECR::ECRClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ECRErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  ECRClient::ECRClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ECRErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<ECREndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ECRClient::ECRClient(const AWSCredentials& credentials,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ECRErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ECREndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ECRClient::ECRClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ECRErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ECREndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
ECRClient::~ECRClient()
{
}

std::shared_ptr<ECREndpointProviderBase>& ECRClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void ECRClient::init(const ECR::ECRClientConfiguration& config)
{
  AWSClient::SetServiceClientName("ECR");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void ECRClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

BatchCheckLayerAvailabilityOutcome ECRClient::BatchCheckLayerAvailability(const BatchCheckLayerAvailabilityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchCheckLayerAvailability, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchCheckLayerAvailability, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchCheckLayerAvailabilityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchCheckLayerAvailabilityOutcomeCallable ECRClient::BatchCheckLayerAvailabilityCallable(const BatchCheckLayerAvailabilityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchCheckLayerAvailabilityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchCheckLayerAvailability(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::BatchCheckLayerAvailabilityAsync(const BatchCheckLayerAvailabilityRequest& request, const BatchCheckLayerAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchCheckLayerAvailability(request), context);
    } );
}

BatchDeleteImageOutcome ECRClient::BatchDeleteImage(const BatchDeleteImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchDeleteImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchDeleteImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchDeleteImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDeleteImageOutcomeCallable ECRClient::BatchDeleteImageCallable(const BatchDeleteImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDeleteImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDeleteImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::BatchDeleteImageAsync(const BatchDeleteImageRequest& request, const BatchDeleteImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchDeleteImage(request), context);
    } );
}

BatchGetImageOutcome ECRClient::BatchGetImage(const BatchGetImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchGetImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchGetImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetImageOutcomeCallable ECRClient::BatchGetImageCallable(const BatchGetImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::BatchGetImageAsync(const BatchGetImageRequest& request, const BatchGetImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchGetImage(request), context);
    } );
}

BatchGetRepositoryScanningConfigurationOutcome ECRClient::BatchGetRepositoryScanningConfiguration(const BatchGetRepositoryScanningConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGetRepositoryScanningConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchGetRepositoryScanningConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return BatchGetRepositoryScanningConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetRepositoryScanningConfigurationOutcomeCallable ECRClient::BatchGetRepositoryScanningConfigurationCallable(const BatchGetRepositoryScanningConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetRepositoryScanningConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetRepositoryScanningConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::BatchGetRepositoryScanningConfigurationAsync(const BatchGetRepositoryScanningConfigurationRequest& request, const BatchGetRepositoryScanningConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchGetRepositoryScanningConfiguration(request), context);
    } );
}

CompleteLayerUploadOutcome ECRClient::CompleteLayerUpload(const CompleteLayerUploadRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CompleteLayerUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CompleteLayerUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CompleteLayerUploadOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CompleteLayerUploadOutcomeCallable ECRClient::CompleteLayerUploadCallable(const CompleteLayerUploadRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CompleteLayerUploadOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CompleteLayerUpload(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::CompleteLayerUploadAsync(const CompleteLayerUploadRequest& request, const CompleteLayerUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CompleteLayerUpload(request), context);
    } );
}

CreatePullThroughCacheRuleOutcome ECRClient::CreatePullThroughCacheRule(const CreatePullThroughCacheRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePullThroughCacheRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePullThroughCacheRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreatePullThroughCacheRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePullThroughCacheRuleOutcomeCallable ECRClient::CreatePullThroughCacheRuleCallable(const CreatePullThroughCacheRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePullThroughCacheRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePullThroughCacheRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::CreatePullThroughCacheRuleAsync(const CreatePullThroughCacheRuleRequest& request, const CreatePullThroughCacheRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreatePullThroughCacheRule(request), context);
    } );
}

CreateRepositoryOutcome ECRClient::CreateRepository(const CreateRepositoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateRepositoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRepositoryOutcomeCallable ECRClient::CreateRepositoryCallable(const CreateRepositoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRepositoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRepository(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::CreateRepositoryAsync(const CreateRepositoryRequest& request, const CreateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateRepository(request), context);
    } );
}

DeleteLifecyclePolicyOutcome ECRClient::DeleteLifecyclePolicy(const DeleteLifecyclePolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLifecyclePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLifecyclePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteLifecyclePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteLifecyclePolicyOutcomeCallable ECRClient::DeleteLifecyclePolicyCallable(const DeleteLifecyclePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLifecyclePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLifecyclePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::DeleteLifecyclePolicyAsync(const DeleteLifecyclePolicyRequest& request, const DeleteLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteLifecyclePolicy(request), context);
    } );
}

DeletePullThroughCacheRuleOutcome ECRClient::DeletePullThroughCacheRule(const DeletePullThroughCacheRuleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePullThroughCacheRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePullThroughCacheRule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeletePullThroughCacheRuleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePullThroughCacheRuleOutcomeCallable ECRClient::DeletePullThroughCacheRuleCallable(const DeletePullThroughCacheRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePullThroughCacheRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePullThroughCacheRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::DeletePullThroughCacheRuleAsync(const DeletePullThroughCacheRuleRequest& request, const DeletePullThroughCacheRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeletePullThroughCacheRule(request), context);
    } );
}

DeleteRegistryPolicyOutcome ECRClient::DeleteRegistryPolicy(const DeleteRegistryPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRegistryPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRegistryPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteRegistryPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRegistryPolicyOutcomeCallable ECRClient::DeleteRegistryPolicyCallable(const DeleteRegistryPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRegistryPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRegistryPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::DeleteRegistryPolicyAsync(const DeleteRegistryPolicyRequest& request, const DeleteRegistryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteRegistryPolicy(request), context);
    } );
}

DeleteRepositoryOutcome ECRClient::DeleteRepository(const DeleteRepositoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteRepositoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRepositoryOutcomeCallable ECRClient::DeleteRepositoryCallable(const DeleteRepositoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRepositoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRepository(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::DeleteRepositoryAsync(const DeleteRepositoryRequest& request, const DeleteRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteRepository(request), context);
    } );
}

DeleteRepositoryPolicyOutcome ECRClient::DeleteRepositoryPolicy(const DeleteRepositoryPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRepositoryPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRepositoryPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteRepositoryPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRepositoryPolicyOutcomeCallable ECRClient::DeleteRepositoryPolicyCallable(const DeleteRepositoryPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRepositoryPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRepositoryPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::DeleteRepositoryPolicyAsync(const DeleteRepositoryPolicyRequest& request, const DeleteRepositoryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteRepositoryPolicy(request), context);
    } );
}

DescribeImageReplicationStatusOutcome ECRClient::DescribeImageReplicationStatus(const DescribeImageReplicationStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeImageReplicationStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeImageReplicationStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeImageReplicationStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeImageReplicationStatusOutcomeCallable ECRClient::DescribeImageReplicationStatusCallable(const DescribeImageReplicationStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeImageReplicationStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeImageReplicationStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::DescribeImageReplicationStatusAsync(const DescribeImageReplicationStatusRequest& request, const DescribeImageReplicationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeImageReplicationStatus(request), context);
    } );
}

DescribeImageScanFindingsOutcome ECRClient::DescribeImageScanFindings(const DescribeImageScanFindingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeImageScanFindings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeImageScanFindings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeImageScanFindingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeImageScanFindingsOutcomeCallable ECRClient::DescribeImageScanFindingsCallable(const DescribeImageScanFindingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeImageScanFindingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeImageScanFindings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::DescribeImageScanFindingsAsync(const DescribeImageScanFindingsRequest& request, const DescribeImageScanFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeImageScanFindings(request), context);
    } );
}

DescribeImagesOutcome ECRClient::DescribeImages(const DescribeImagesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeImages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeImages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeImagesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeImagesOutcomeCallable ECRClient::DescribeImagesCallable(const DescribeImagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeImagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeImages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::DescribeImagesAsync(const DescribeImagesRequest& request, const DescribeImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeImages(request), context);
    } );
}

DescribePullThroughCacheRulesOutcome ECRClient::DescribePullThroughCacheRules(const DescribePullThroughCacheRulesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePullThroughCacheRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePullThroughCacheRules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribePullThroughCacheRulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePullThroughCacheRulesOutcomeCallable ECRClient::DescribePullThroughCacheRulesCallable(const DescribePullThroughCacheRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePullThroughCacheRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePullThroughCacheRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::DescribePullThroughCacheRulesAsync(const DescribePullThroughCacheRulesRequest& request, const DescribePullThroughCacheRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribePullThroughCacheRules(request), context);
    } );
}

DescribeRegistryOutcome ECRClient::DescribeRegistry(const DescribeRegistryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeRegistry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeRegistry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeRegistryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeRegistryOutcomeCallable ECRClient::DescribeRegistryCallable(const DescribeRegistryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRegistryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRegistry(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::DescribeRegistryAsync(const DescribeRegistryRequest& request, const DescribeRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeRegistry(request), context);
    } );
}

DescribeRepositoriesOutcome ECRClient::DescribeRepositories(const DescribeRepositoriesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeRepositories, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeRepositories, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeRepositoriesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeRepositoriesOutcomeCallable ECRClient::DescribeRepositoriesCallable(const DescribeRepositoriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRepositoriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRepositories(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::DescribeRepositoriesAsync(const DescribeRepositoriesRequest& request, const DescribeRepositoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeRepositories(request), context);
    } );
}

GetAuthorizationTokenOutcome ECRClient::GetAuthorizationToken(const GetAuthorizationTokenRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAuthorizationToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAuthorizationToken, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetAuthorizationTokenOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAuthorizationTokenOutcomeCallable ECRClient::GetAuthorizationTokenCallable(const GetAuthorizationTokenRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAuthorizationTokenOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAuthorizationToken(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::GetAuthorizationTokenAsync(const GetAuthorizationTokenRequest& request, const GetAuthorizationTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAuthorizationToken(request), context);
    } );
}

GetDownloadUrlForLayerOutcome ECRClient::GetDownloadUrlForLayer(const GetDownloadUrlForLayerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDownloadUrlForLayer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDownloadUrlForLayer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDownloadUrlForLayerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDownloadUrlForLayerOutcomeCallable ECRClient::GetDownloadUrlForLayerCallable(const GetDownloadUrlForLayerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDownloadUrlForLayerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDownloadUrlForLayer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::GetDownloadUrlForLayerAsync(const GetDownloadUrlForLayerRequest& request, const GetDownloadUrlForLayerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDownloadUrlForLayer(request), context);
    } );
}

GetLifecyclePolicyOutcome ECRClient::GetLifecyclePolicy(const GetLifecyclePolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLifecyclePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLifecyclePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetLifecyclePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLifecyclePolicyOutcomeCallable ECRClient::GetLifecyclePolicyCallable(const GetLifecyclePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLifecyclePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLifecyclePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::GetLifecyclePolicyAsync(const GetLifecyclePolicyRequest& request, const GetLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetLifecyclePolicy(request), context);
    } );
}

GetLifecyclePolicyPreviewOutcome ECRClient::GetLifecyclePolicyPreview(const GetLifecyclePolicyPreviewRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLifecyclePolicyPreview, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLifecyclePolicyPreview, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetLifecyclePolicyPreviewOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLifecyclePolicyPreviewOutcomeCallable ECRClient::GetLifecyclePolicyPreviewCallable(const GetLifecyclePolicyPreviewRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLifecyclePolicyPreviewOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLifecyclePolicyPreview(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::GetLifecyclePolicyPreviewAsync(const GetLifecyclePolicyPreviewRequest& request, const GetLifecyclePolicyPreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetLifecyclePolicyPreview(request), context);
    } );
}

GetRegistryPolicyOutcome ECRClient::GetRegistryPolicy(const GetRegistryPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRegistryPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRegistryPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRegistryPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRegistryPolicyOutcomeCallable ECRClient::GetRegistryPolicyCallable(const GetRegistryPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRegistryPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRegistryPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::GetRegistryPolicyAsync(const GetRegistryPolicyRequest& request, const GetRegistryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRegistryPolicy(request), context);
    } );
}

GetRegistryScanningConfigurationOutcome ECRClient::GetRegistryScanningConfiguration(const GetRegistryScanningConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRegistryScanningConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRegistryScanningConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRegistryScanningConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRegistryScanningConfigurationOutcomeCallable ECRClient::GetRegistryScanningConfigurationCallable(const GetRegistryScanningConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRegistryScanningConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRegistryScanningConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::GetRegistryScanningConfigurationAsync(const GetRegistryScanningConfigurationRequest& request, const GetRegistryScanningConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRegistryScanningConfiguration(request), context);
    } );
}

GetRepositoryPolicyOutcome ECRClient::GetRepositoryPolicy(const GetRepositoryPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRepositoryPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRepositoryPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRepositoryPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRepositoryPolicyOutcomeCallable ECRClient::GetRepositoryPolicyCallable(const GetRepositoryPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRepositoryPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRepositoryPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::GetRepositoryPolicyAsync(const GetRepositoryPolicyRequest& request, const GetRepositoryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRepositoryPolicy(request), context);
    } );
}

InitiateLayerUploadOutcome ECRClient::InitiateLayerUpload(const InitiateLayerUploadRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, InitiateLayerUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, InitiateLayerUpload, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return InitiateLayerUploadOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

InitiateLayerUploadOutcomeCallable ECRClient::InitiateLayerUploadCallable(const InitiateLayerUploadRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< InitiateLayerUploadOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->InitiateLayerUpload(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::InitiateLayerUploadAsync(const InitiateLayerUploadRequest& request, const InitiateLayerUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, InitiateLayerUpload(request), context);
    } );
}

ListImagesOutcome ECRClient::ListImages(const ListImagesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListImages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListImages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListImagesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListImagesOutcomeCallable ECRClient::ListImagesCallable(const ListImagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListImagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListImages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::ListImagesAsync(const ListImagesRequest& request, const ListImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListImages(request), context);
    } );
}

ListTagsForResourceOutcome ECRClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable ECRClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

PutImageOutcome ECRClient::PutImage(const PutImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutImageOutcomeCallable ECRClient::PutImageCallable(const PutImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::PutImageAsync(const PutImageRequest& request, const PutImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutImage(request), context);
    } );
}

PutImageScanningConfigurationOutcome ECRClient::PutImageScanningConfiguration(const PutImageScanningConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutImageScanningConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutImageScanningConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutImageScanningConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutImageScanningConfigurationOutcomeCallable ECRClient::PutImageScanningConfigurationCallable(const PutImageScanningConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutImageScanningConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutImageScanningConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::PutImageScanningConfigurationAsync(const PutImageScanningConfigurationRequest& request, const PutImageScanningConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutImageScanningConfiguration(request), context);
    } );
}

PutImageTagMutabilityOutcome ECRClient::PutImageTagMutability(const PutImageTagMutabilityRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutImageTagMutability, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutImageTagMutability, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutImageTagMutabilityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutImageTagMutabilityOutcomeCallable ECRClient::PutImageTagMutabilityCallable(const PutImageTagMutabilityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutImageTagMutabilityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutImageTagMutability(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::PutImageTagMutabilityAsync(const PutImageTagMutabilityRequest& request, const PutImageTagMutabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutImageTagMutability(request), context);
    } );
}

PutLifecyclePolicyOutcome ECRClient::PutLifecyclePolicy(const PutLifecyclePolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutLifecyclePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutLifecyclePolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutLifecyclePolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutLifecyclePolicyOutcomeCallable ECRClient::PutLifecyclePolicyCallable(const PutLifecyclePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutLifecyclePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutLifecyclePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::PutLifecyclePolicyAsync(const PutLifecyclePolicyRequest& request, const PutLifecyclePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutLifecyclePolicy(request), context);
    } );
}

PutRegistryPolicyOutcome ECRClient::PutRegistryPolicy(const PutRegistryPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutRegistryPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutRegistryPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutRegistryPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutRegistryPolicyOutcomeCallable ECRClient::PutRegistryPolicyCallable(const PutRegistryPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRegistryPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRegistryPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::PutRegistryPolicyAsync(const PutRegistryPolicyRequest& request, const PutRegistryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutRegistryPolicy(request), context);
    } );
}

PutRegistryScanningConfigurationOutcome ECRClient::PutRegistryScanningConfiguration(const PutRegistryScanningConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutRegistryScanningConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutRegistryScanningConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutRegistryScanningConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutRegistryScanningConfigurationOutcomeCallable ECRClient::PutRegistryScanningConfigurationCallable(const PutRegistryScanningConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRegistryScanningConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRegistryScanningConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::PutRegistryScanningConfigurationAsync(const PutRegistryScanningConfigurationRequest& request, const PutRegistryScanningConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutRegistryScanningConfiguration(request), context);
    } );
}

PutReplicationConfigurationOutcome ECRClient::PutReplicationConfiguration(const PutReplicationConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutReplicationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutReplicationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutReplicationConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutReplicationConfigurationOutcomeCallable ECRClient::PutReplicationConfigurationCallable(const PutReplicationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutReplicationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutReplicationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::PutReplicationConfigurationAsync(const PutReplicationConfigurationRequest& request, const PutReplicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutReplicationConfiguration(request), context);
    } );
}

SetRepositoryPolicyOutcome ECRClient::SetRepositoryPolicy(const SetRepositoryPolicyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetRepositoryPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetRepositoryPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SetRepositoryPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetRepositoryPolicyOutcomeCallable ECRClient::SetRepositoryPolicyCallable(const SetRepositoryPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetRepositoryPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetRepositoryPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::SetRepositoryPolicyAsync(const SetRepositoryPolicyRequest& request, const SetRepositoryPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SetRepositoryPolicy(request), context);
    } );
}

StartImageScanOutcome ECRClient::StartImageScan(const StartImageScanRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartImageScan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartImageScan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartImageScanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartImageScanOutcomeCallable ECRClient::StartImageScanCallable(const StartImageScanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartImageScanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartImageScan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::StartImageScanAsync(const StartImageScanRequest& request, const StartImageScanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartImageScan(request), context);
    } );
}

StartLifecyclePolicyPreviewOutcome ECRClient::StartLifecyclePolicyPreview(const StartLifecyclePolicyPreviewRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartLifecyclePolicyPreview, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartLifecyclePolicyPreview, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartLifecyclePolicyPreviewOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartLifecyclePolicyPreviewOutcomeCallable ECRClient::StartLifecyclePolicyPreviewCallable(const StartLifecyclePolicyPreviewRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartLifecyclePolicyPreviewOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartLifecyclePolicyPreview(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::StartLifecyclePolicyPreviewAsync(const StartLifecyclePolicyPreviewRequest& request, const StartLifecyclePolicyPreviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartLifecyclePolicyPreview(request), context);
    } );
}

TagResourceOutcome ECRClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable ECRClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome ECRClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable ECRClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UploadLayerPartOutcome ECRClient::UploadLayerPart(const UploadLayerPartRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UploadLayerPart, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UploadLayerPart, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UploadLayerPartOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UploadLayerPartOutcomeCallable ECRClient::UploadLayerPartCallable(const UploadLayerPartRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UploadLayerPartOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UploadLayerPart(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ECRClient::UploadLayerPartAsync(const UploadLayerPartRequest& request, const UploadLayerPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UploadLayerPart(request), context);
    } );
}

