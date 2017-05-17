/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
#include <aws/xray/XRayClient.h>
#include <aws/xray/XRayEndpoint.h>
#include <aws/xray/XRayErrorMarshaller.h>
#include <aws/xray/model/BatchGetTracesRequest.h>
#include <aws/xray/model/GetServiceGraphRequest.h>
#include <aws/xray/model/GetTraceGraphRequest.h>
#include <aws/xray/model/GetTraceSummariesRequest.h>
#include <aws/xray/model/PutTelemetryRecordsRequest.h>
#include <aws/xray/model/PutTraceSegmentsRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::XRay;
using namespace Aws::XRay::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "xray";
static const char* ALLOCATION_TAG = "XRayClient";


XRayClient::XRayClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<XRayErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

XRayClient::XRayClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<XRayErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

XRayClient::XRayClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<XRayErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

XRayClient::~XRayClient()
{
}

void XRayClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << XRayEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

BatchGetTracesOutcome XRayClient::BatchGetTraces(const BatchGetTracesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/Traces";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return BatchGetTracesOutcome(BatchGetTracesResult(outcome.GetResult()));
  }
  else
  {
    return BatchGetTracesOutcome(outcome.GetError());
  }
}

BatchGetTracesOutcomeCallable XRayClient::BatchGetTracesCallable(const BatchGetTracesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetTracesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetTraces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClient::BatchGetTracesAsync(const BatchGetTracesRequest& request, const BatchGetTracesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchGetTracesAsyncHelper( request, handler, context ); } );
}

void XRayClient::BatchGetTracesAsyncHelper(const BatchGetTracesRequest& request, const BatchGetTracesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchGetTraces(request), context);
}

GetServiceGraphOutcome XRayClient::GetServiceGraph(const GetServiceGraphRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/ServiceGraph";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetServiceGraphOutcome(GetServiceGraphResult(outcome.GetResult()));
  }
  else
  {
    return GetServiceGraphOutcome(outcome.GetError());
  }
}

GetServiceGraphOutcomeCallable XRayClient::GetServiceGraphCallable(const GetServiceGraphRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetServiceGraphOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetServiceGraph(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClient::GetServiceGraphAsync(const GetServiceGraphRequest& request, const GetServiceGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetServiceGraphAsyncHelper( request, handler, context ); } );
}

void XRayClient::GetServiceGraphAsyncHelper(const GetServiceGraphRequest& request, const GetServiceGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetServiceGraph(request), context);
}

GetTraceGraphOutcome XRayClient::GetTraceGraph(const GetTraceGraphRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/TraceGraph";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetTraceGraphOutcome(GetTraceGraphResult(outcome.GetResult()));
  }
  else
  {
    return GetTraceGraphOutcome(outcome.GetError());
  }
}

GetTraceGraphOutcomeCallable XRayClient::GetTraceGraphCallable(const GetTraceGraphRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTraceGraphOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTraceGraph(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClient::GetTraceGraphAsync(const GetTraceGraphRequest& request, const GetTraceGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTraceGraphAsyncHelper( request, handler, context ); } );
}

void XRayClient::GetTraceGraphAsyncHelper(const GetTraceGraphRequest& request, const GetTraceGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTraceGraph(request), context);
}

GetTraceSummariesOutcome XRayClient::GetTraceSummaries(const GetTraceSummariesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/TraceSummaries";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetTraceSummariesOutcome(GetTraceSummariesResult(outcome.GetResult()));
  }
  else
  {
    return GetTraceSummariesOutcome(outcome.GetError());
  }
}

GetTraceSummariesOutcomeCallable XRayClient::GetTraceSummariesCallable(const GetTraceSummariesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTraceSummariesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTraceSummaries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClient::GetTraceSummariesAsync(const GetTraceSummariesRequest& request, const GetTraceSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTraceSummariesAsyncHelper( request, handler, context ); } );
}

void XRayClient::GetTraceSummariesAsyncHelper(const GetTraceSummariesRequest& request, const GetTraceSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTraceSummaries(request), context);
}

PutTelemetryRecordsOutcome XRayClient::PutTelemetryRecords(const PutTelemetryRecordsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/TelemetryRecords";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutTelemetryRecordsOutcome(PutTelemetryRecordsResult(outcome.GetResult()));
  }
  else
  {
    return PutTelemetryRecordsOutcome(outcome.GetError());
  }
}

PutTelemetryRecordsOutcomeCallable XRayClient::PutTelemetryRecordsCallable(const PutTelemetryRecordsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutTelemetryRecordsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutTelemetryRecords(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClient::PutTelemetryRecordsAsync(const PutTelemetryRecordsRequest& request, const PutTelemetryRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutTelemetryRecordsAsyncHelper( request, handler, context ); } );
}

void XRayClient::PutTelemetryRecordsAsyncHelper(const PutTelemetryRecordsRequest& request, const PutTelemetryRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutTelemetryRecords(request), context);
}

PutTraceSegmentsOutcome XRayClient::PutTraceSegments(const PutTraceSegmentsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/TraceSegments";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return PutTraceSegmentsOutcome(PutTraceSegmentsResult(outcome.GetResult()));
  }
  else
  {
    return PutTraceSegmentsOutcome(outcome.GetError());
  }
}

PutTraceSegmentsOutcomeCallable XRayClient::PutTraceSegmentsCallable(const PutTraceSegmentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutTraceSegmentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutTraceSegments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void XRayClient::PutTraceSegmentsAsync(const PutTraceSegmentsRequest& request, const PutTraceSegmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutTraceSegmentsAsyncHelper( request, handler, context ); } );
}

void XRayClient::PutTraceSegmentsAsyncHelper(const PutTraceSegmentsRequest& request, const PutTraceSegmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutTraceSegments(request), context);
}

