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

#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntimeClient.h>
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntimeErrorMarshaller.h>
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntimeEndpointProvider.h>
#include <aws/sagemaker-a2i-runtime/model/DeleteHumanLoopRequest.h>
#include <aws/sagemaker-a2i-runtime/model/DescribeHumanLoopRequest.h>
#include <aws/sagemaker-a2i-runtime/model/ListHumanLoopsRequest.h>
#include <aws/sagemaker-a2i-runtime/model/StartHumanLoopRequest.h>
#include <aws/sagemaker-a2i-runtime/model/StopHumanLoopRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::AugmentedAIRuntime;
using namespace Aws::AugmentedAIRuntime::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* AugmentedAIRuntimeClient::SERVICE_NAME = "sagemaker";
const char* AugmentedAIRuntimeClient::ALLOCATION_TAG = "AugmentedAIRuntimeClient";

AugmentedAIRuntimeClient::AugmentedAIRuntimeClient(const AugmentedAIRuntime::AugmentedAIRuntimeClientConfiguration& clientConfiguration,
                                                   std::shared_ptr<AugmentedAIRuntimeEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AugmentedAIRuntimeErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

AugmentedAIRuntimeClient::AugmentedAIRuntimeClient(const AWSCredentials& credentials,
                                                   std::shared_ptr<AugmentedAIRuntimeEndpointProviderBase> endpointProvider,
                                                   const AugmentedAIRuntime::AugmentedAIRuntimeClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AugmentedAIRuntimeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

AugmentedAIRuntimeClient::AugmentedAIRuntimeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   std::shared_ptr<AugmentedAIRuntimeEndpointProviderBase> endpointProvider,
                                                   const AugmentedAIRuntime::AugmentedAIRuntimeClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AugmentedAIRuntimeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  AugmentedAIRuntimeClient::AugmentedAIRuntimeClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AugmentedAIRuntimeErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<AugmentedAIRuntimeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

AugmentedAIRuntimeClient::AugmentedAIRuntimeClient(const AWSCredentials& credentials,
                                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AugmentedAIRuntimeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<AugmentedAIRuntimeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

AugmentedAIRuntimeClient::AugmentedAIRuntimeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AugmentedAIRuntimeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<AugmentedAIRuntimeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
AugmentedAIRuntimeClient::~AugmentedAIRuntimeClient()
{
}

std::shared_ptr<AugmentedAIRuntimeEndpointProviderBase>& AugmentedAIRuntimeClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void AugmentedAIRuntimeClient::init(const AugmentedAIRuntime::AugmentedAIRuntimeClientConfiguration& config)
{
  AWSClient::SetServiceClientName("SageMaker A2I Runtime");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void AugmentedAIRuntimeClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

DeleteHumanLoopOutcome AugmentedAIRuntimeClient::DeleteHumanLoop(const DeleteHumanLoopRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteHumanLoop, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.HumanLoopNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteHumanLoop", "Required field: HumanLoopName, is not set");
    return DeleteHumanLoopOutcome(Aws::Client::AWSError<AugmentedAIRuntimeErrors>(AugmentedAIRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HumanLoopName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteHumanLoop, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/human-loops/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHumanLoopName());
  return DeleteHumanLoopOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteHumanLoopOutcomeCallable AugmentedAIRuntimeClient::DeleteHumanLoopCallable(const DeleteHumanLoopRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteHumanLoopOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteHumanLoop(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AugmentedAIRuntimeClient::DeleteHumanLoopAsync(const DeleteHumanLoopRequest& request, const DeleteHumanLoopResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteHumanLoop(request), context);
    } );
}

DescribeHumanLoopOutcome AugmentedAIRuntimeClient::DescribeHumanLoop(const DescribeHumanLoopRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeHumanLoop, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.HumanLoopNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeHumanLoop", "Required field: HumanLoopName, is not set");
    return DescribeHumanLoopOutcome(Aws::Client::AWSError<AugmentedAIRuntimeErrors>(AugmentedAIRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HumanLoopName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeHumanLoop, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/human-loops/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetHumanLoopName());
  return DescribeHumanLoopOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeHumanLoopOutcomeCallable AugmentedAIRuntimeClient::DescribeHumanLoopCallable(const DescribeHumanLoopRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeHumanLoopOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeHumanLoop(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AugmentedAIRuntimeClient::DescribeHumanLoopAsync(const DescribeHumanLoopRequest& request, const DescribeHumanLoopResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeHumanLoop(request), context);
    } );
}

ListHumanLoopsOutcome AugmentedAIRuntimeClient::ListHumanLoops(const ListHumanLoopsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListHumanLoops, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FlowDefinitionArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListHumanLoops", "Required field: FlowDefinitionArn, is not set");
    return ListHumanLoopsOutcome(Aws::Client::AWSError<AugmentedAIRuntimeErrors>(AugmentedAIRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowDefinitionArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListHumanLoops, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/human-loops");
  return ListHumanLoopsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListHumanLoopsOutcomeCallable AugmentedAIRuntimeClient::ListHumanLoopsCallable(const ListHumanLoopsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListHumanLoopsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListHumanLoops(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AugmentedAIRuntimeClient::ListHumanLoopsAsync(const ListHumanLoopsRequest& request, const ListHumanLoopsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListHumanLoops(request), context);
    } );
}

StartHumanLoopOutcome AugmentedAIRuntimeClient::StartHumanLoop(const StartHumanLoopRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartHumanLoop, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartHumanLoop, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/human-loops");
  return StartHumanLoopOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartHumanLoopOutcomeCallable AugmentedAIRuntimeClient::StartHumanLoopCallable(const StartHumanLoopRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartHumanLoopOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartHumanLoop(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AugmentedAIRuntimeClient::StartHumanLoopAsync(const StartHumanLoopRequest& request, const StartHumanLoopResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartHumanLoop(request), context);
    } );
}

StopHumanLoopOutcome AugmentedAIRuntimeClient::StopHumanLoop(const StopHumanLoopRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopHumanLoop, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopHumanLoop, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/human-loops/stop");
  return StopHumanLoopOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopHumanLoopOutcomeCallable AugmentedAIRuntimeClient::StopHumanLoopCallable(const StopHumanLoopRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopHumanLoopOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopHumanLoop(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AugmentedAIRuntimeClient::StopHumanLoopAsync(const StopHumanLoopRequest& request, const StopHumanLoopResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopHumanLoop(request), context);
    } );
}

