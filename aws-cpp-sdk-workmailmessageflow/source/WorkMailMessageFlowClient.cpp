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

#include <aws/workmailmessageflow/WorkMailMessageFlowClient.h>
#include <aws/workmailmessageflow/WorkMailMessageFlowEndpoint.h>
#include <aws/workmailmessageflow/WorkMailMessageFlowErrorMarshaller.h>
#include <aws/workmailmessageflow/model/GetRawMessageContentRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::WorkMailMessageFlow;
using namespace Aws::WorkMailMessageFlow::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "workmailmessageflow";
static const char* ALLOCATION_TAG = "WorkMailMessageFlowClient";


WorkMailMessageFlowClient::WorkMailMessageFlowClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<WorkMailMessageFlowErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WorkMailMessageFlowClient::WorkMailMessageFlowClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<WorkMailMessageFlowErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WorkMailMessageFlowClient::WorkMailMessageFlowClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<WorkMailMessageFlowErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

WorkMailMessageFlowClient::~WorkMailMessageFlowClient()
{
}

void WorkMailMessageFlowClient::init(const ClientConfiguration& config)
{
  SetServiceClientName("WorkMailMessageFlow");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + WorkMailMessageFlowEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void WorkMailMessageFlowClient::OverrideEndpoint(const Aws::String& endpoint)
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

GetRawMessageContentOutcome WorkMailMessageFlowClient::GetRawMessageContent(const GetRawMessageContentRequest& request) const
{
  if (!request.MessageIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRawMessageContent", "Required field: MessageId, is not set");
    return GetRawMessageContentOutcome(Aws::Client::AWSError<WorkMailMessageFlowErrors>(WorkMailMessageFlowErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MessageId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/messages/";
  ss << request.GetMessageId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetRawMessageContentOutcome(MakeRequestWithUnparsedResponse(uri, request, Aws::Http::HttpMethod::HTTP_GET));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetRawMessageContentAsyncHelper( request, handler, context ); } );
}

void WorkMailMessageFlowClient::GetRawMessageContentAsyncHelper(const GetRawMessageContentRequest& request, const GetRawMessageContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRawMessageContent(request), context);
}

