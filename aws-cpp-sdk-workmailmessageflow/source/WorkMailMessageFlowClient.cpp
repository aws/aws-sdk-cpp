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

#include <aws/workmailmessageflow/WorkMailMessageFlowClient.h>
#include <aws/workmailmessageflow/WorkMailMessageFlowErrorMarshaller.h>
#include <aws/workmailmessageflow/WorkMailMessageFlowEndpointProvider.h>
#include <aws/workmailmessageflow/model/GetRawMessageContentRequest.h>
#include <aws/workmailmessageflow/model/PutRawMessageContentRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::WorkMailMessageFlow;
using namespace Aws::WorkMailMessageFlow::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* WorkMailMessageFlowClient::SERVICE_NAME = "workmailmessageflow";
const char* WorkMailMessageFlowClient::ALLOCATION_TAG = "WorkMailMessageFlowClient";

WorkMailMessageFlowClient::WorkMailMessageFlowClient(const WorkMailMessageFlow::WorkMailMessageFlowClientConfiguration& clientConfiguration,
                                                     std::shared_ptr<WorkMailMessageFlowEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkMailMessageFlowErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

WorkMailMessageFlowClient::WorkMailMessageFlowClient(const AWSCredentials& credentials,
                                                     std::shared_ptr<WorkMailMessageFlowEndpointProviderBase> endpointProvider,
                                                     const WorkMailMessageFlow::WorkMailMessageFlowClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkMailMessageFlowErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

WorkMailMessageFlowClient::WorkMailMessageFlowClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                     std::shared_ptr<WorkMailMessageFlowEndpointProviderBase> endpointProvider,
                                                     const WorkMailMessageFlow::WorkMailMessageFlowClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkMailMessageFlowErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  WorkMailMessageFlowClient::WorkMailMessageFlowClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkMailMessageFlowErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<WorkMailMessageFlowEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

WorkMailMessageFlowClient::WorkMailMessageFlowClient(const AWSCredentials& credentials,
                                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkMailMessageFlowErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<WorkMailMessageFlowEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

WorkMailMessageFlowClient::WorkMailMessageFlowClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<WorkMailMessageFlowErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<WorkMailMessageFlowEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
WorkMailMessageFlowClient::~WorkMailMessageFlowClient()
{
}

std::shared_ptr<WorkMailMessageFlowEndpointProviderBase>& WorkMailMessageFlowClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void WorkMailMessageFlowClient::init(const WorkMailMessageFlow::WorkMailMessageFlowClientConfiguration& config)
{
  AWSClient::SetServiceClientName("WorkMailMessageFlow");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void WorkMailMessageFlowClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

GetRawMessageContentOutcome WorkMailMessageFlowClient::GetRawMessageContent(const GetRawMessageContentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRawMessageContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MessageIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRawMessageContent", "Required field: MessageId, is not set");
    return GetRawMessageContentOutcome(Aws::Client::AWSError<WorkMailMessageFlowErrors>(WorkMailMessageFlowErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MessageId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRawMessageContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/messages/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMessageId());
  return GetRawMessageContentOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetRawMessageContentOutcomeCallable WorkMailMessageFlowClient::GetRawMessageContentCallable(const GetRawMessageContentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRawMessageContentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRawMessageContent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailMessageFlowClient::GetRawMessageContentAsync(const GetRawMessageContentRequest& request, const GetRawMessageContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRawMessageContent(request), context);
    } );
}

PutRawMessageContentOutcome WorkMailMessageFlowClient::PutRawMessageContent(const PutRawMessageContentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutRawMessageContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MessageIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutRawMessageContent", "Required field: MessageId, is not set");
    return PutRawMessageContentOutcome(Aws::Client::AWSError<WorkMailMessageFlowErrors>(WorkMailMessageFlowErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MessageId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutRawMessageContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/messages/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMessageId());
  return PutRawMessageContentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutRawMessageContentOutcomeCallable WorkMailMessageFlowClient::PutRawMessageContentCallable(const PutRawMessageContentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRawMessageContentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRawMessageContent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void WorkMailMessageFlowClient::PutRawMessageContentAsync(const PutRawMessageContentRequest& request, const PutRawMessageContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutRawMessageContent(request), context);
    } );
}

