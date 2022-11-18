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

#include <aws/sagemaker-runtime/SageMakerRuntimeClient.h>
#include <aws/sagemaker-runtime/SageMakerRuntimeErrorMarshaller.h>
#include <aws/sagemaker-runtime/SageMakerRuntimeEndpointProvider.h>
#include <aws/sagemaker-runtime/model/InvokeEndpointRequest.h>
#include <aws/sagemaker-runtime/model/InvokeEndpointAsyncRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SageMakerRuntime;
using namespace Aws::SageMakerRuntime::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* SageMakerRuntimeClient::SERVICE_NAME = "sagemaker";
const char* SageMakerRuntimeClient::ALLOCATION_TAG = "SageMakerRuntimeClient";

SageMakerRuntimeClient::SageMakerRuntimeClient(const SageMakerRuntime::SageMakerRuntimeClientConfiguration& clientConfiguration,
                                               std::shared_ptr<SageMakerRuntimeEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SageMakerRuntimeErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

SageMakerRuntimeClient::SageMakerRuntimeClient(const AWSCredentials& credentials,
                                               std::shared_ptr<SageMakerRuntimeEndpointProviderBase> endpointProvider,
                                               const SageMakerRuntime::SageMakerRuntimeClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SageMakerRuntimeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

SageMakerRuntimeClient::SageMakerRuntimeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               std::shared_ptr<SageMakerRuntimeEndpointProviderBase> endpointProvider,
                                               const SageMakerRuntime::SageMakerRuntimeClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  credentialsProvider,
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SageMakerRuntimeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  SageMakerRuntimeClient::SageMakerRuntimeClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SageMakerRuntimeErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<SageMakerRuntimeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SageMakerRuntimeClient::SageMakerRuntimeClient(const AWSCredentials& credentials,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SageMakerRuntimeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SageMakerRuntimeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

SageMakerRuntimeClient::SageMakerRuntimeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG,
                                                                  credentialsProvider,
                                                                  SERVICE_NAME,
                                                                  Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<SageMakerRuntimeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<SageMakerRuntimeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
SageMakerRuntimeClient::~SageMakerRuntimeClient()
{
}

std::shared_ptr<SageMakerRuntimeEndpointProviderBase>& SageMakerRuntimeClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void SageMakerRuntimeClient::init(const SageMakerRuntime::SageMakerRuntimeClientConfiguration& config)
{
  AWSClient::SetServiceClientName("SageMaker Runtime");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void SageMakerRuntimeClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

InvokeEndpointOutcome SageMakerRuntimeClient::InvokeEndpoint(const InvokeEndpointRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, InvokeEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EndpointNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InvokeEndpoint", "Required field: EndpointName, is not set");
    return InvokeEndpointOutcome(Aws::Client::AWSError<SageMakerRuntimeErrors>(SageMakerRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndpointName]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, InvokeEndpoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/endpoints/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEndpointName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/invocations");
  return InvokeEndpointOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

InvokeEndpointOutcomeCallable SageMakerRuntimeClient::InvokeEndpointCallable(const InvokeEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< InvokeEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->InvokeEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerRuntimeClient::InvokeEndpointAsync(const InvokeEndpointRequest& request, const InvokeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, InvokeEndpoint(request), context);
    } );
}

InvokeEndpointAsyncOutcome SageMakerRuntimeClient::InvokeEndpointAsync(const InvokeEndpointAsyncRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, InvokeEndpointAsync, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EndpointNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InvokeEndpointAsync", "Required field: EndpointName, is not set");
    return InvokeEndpointAsyncOutcome(Aws::Client::AWSError<SageMakerRuntimeErrors>(SageMakerRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndpointName]", false));
  }
  if (!request.InputLocationHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InvokeEndpointAsync", "Required field: InputLocation, is not set");
    return InvokeEndpointAsyncOutcome(Aws::Client::AWSError<SageMakerRuntimeErrors>(SageMakerRuntimeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InputLocation]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, InvokeEndpointAsync, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/endpoints/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEndpointName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/async-invocations");
  return InvokeEndpointAsyncOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

InvokeEndpointAsyncOutcomeCallable SageMakerRuntimeClient::InvokeEndpointAsyncCallable(const InvokeEndpointAsyncRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< InvokeEndpointAsyncOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->InvokeEndpointAsync(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SageMakerRuntimeClient::InvokeEndpointAsyncAsync(const InvokeEndpointAsyncRequest& request, const InvokeEndpointAsyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, InvokeEndpointAsync(request), context);
    } );
}

