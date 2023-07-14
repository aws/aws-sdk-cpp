﻿/**
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

#include <aws/iot-jobs-data/IoTJobsDataPlaneClient.h>
#include <aws/iot-jobs-data/IoTJobsDataPlaneEndpoint.h>
#include <aws/iot-jobs-data/IoTJobsDataPlaneErrorMarshaller.h>
#include <aws/iot-jobs-data/model/DescribeJobExecutionRequest.h>
#include <aws/iot-jobs-data/model/GetPendingJobExecutionsRequest.h>
#include <aws/iot-jobs-data/model/StartNextPendingJobExecutionRequest.h>
#include <aws/iot-jobs-data/model/UpdateJobExecutionRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::IoTJobsDataPlane;
using namespace Aws::IoTJobsDataPlane::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "iot-jobs-data";
static const char* ALLOCATION_TAG = "IoTJobsDataPlaneClient";


IoTJobsDataPlaneClient::IoTJobsDataPlaneClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<IoTJobsDataPlaneErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoTJobsDataPlaneClient::IoTJobsDataPlaneClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<IoTJobsDataPlaneErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoTJobsDataPlaneClient::IoTJobsDataPlaneClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<IoTJobsDataPlaneErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

IoTJobsDataPlaneClient::~IoTJobsDataPlaneClient()
{
}

void IoTJobsDataPlaneClient::init(const Client::ClientConfiguration& config)
{
  SetServiceClientName("IoT Jobs Data Plane");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + IoTJobsDataPlaneEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void IoTJobsDataPlaneClient::OverrideEndpoint(const Aws::String& endpoint)
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

DescribeJobExecutionOutcome IoTJobsDataPlaneClient::DescribeJobExecution(const DescribeJobExecutionRequest& request) const
{
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeJobExecution", "Required field: JobId, is not set");
    return DescribeJobExecutionOutcome(Aws::Client::AWSError<IoTJobsDataPlaneErrors>(IoTJobsDataPlaneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  if (!request.ThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeJobExecution", "Required field: ThingName, is not set");
    return DescribeJobExecutionOutcome(Aws::Client::AWSError<IoTJobsDataPlaneErrors>(IoTJobsDataPlaneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/things/");
  uri.AddPathSegment(request.GetThingName());
  uri.AddPathSegments("/jobs/");
  uri.AddPathSegment(request.GetJobId());
  return DescribeJobExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeJobExecutionOutcomeCallable IoTJobsDataPlaneClient::DescribeJobExecutionCallable(const DescribeJobExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeJobExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeJobExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTJobsDataPlaneClient::DescribeJobExecutionAsync(const DescribeJobExecutionRequest& request, const DescribeJobExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeJobExecutionAsyncHelper( request, handler, context ); } );
}

void IoTJobsDataPlaneClient::DescribeJobExecutionAsyncHelper(const DescribeJobExecutionRequest& request, const DescribeJobExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeJobExecution(request), context);
}

GetPendingJobExecutionsOutcome IoTJobsDataPlaneClient::GetPendingJobExecutions(const GetPendingJobExecutionsRequest& request) const
{
  if (!request.ThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPendingJobExecutions", "Required field: ThingName, is not set");
    return GetPendingJobExecutionsOutcome(Aws::Client::AWSError<IoTJobsDataPlaneErrors>(IoTJobsDataPlaneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/things/");
  uri.AddPathSegment(request.GetThingName());
  uri.AddPathSegments("/jobs");
  return GetPendingJobExecutionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetPendingJobExecutionsOutcomeCallable IoTJobsDataPlaneClient::GetPendingJobExecutionsCallable(const GetPendingJobExecutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPendingJobExecutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPendingJobExecutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTJobsDataPlaneClient::GetPendingJobExecutionsAsync(const GetPendingJobExecutionsRequest& request, const GetPendingJobExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetPendingJobExecutionsAsyncHelper( request, handler, context ); } );
}

void IoTJobsDataPlaneClient::GetPendingJobExecutionsAsyncHelper(const GetPendingJobExecutionsRequest& request, const GetPendingJobExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPendingJobExecutions(request), context);
}

StartNextPendingJobExecutionOutcome IoTJobsDataPlaneClient::StartNextPendingJobExecution(const StartNextPendingJobExecutionRequest& request) const
{
  if (!request.ThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartNextPendingJobExecution", "Required field: ThingName, is not set");
    return StartNextPendingJobExecutionOutcome(Aws::Client::AWSError<IoTJobsDataPlaneErrors>(IoTJobsDataPlaneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/things/");
  uri.AddPathSegment(request.GetThingName());
  uri.AddPathSegments("/jobs/$next");
  return StartNextPendingJobExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

StartNextPendingJobExecutionOutcomeCallable IoTJobsDataPlaneClient::StartNextPendingJobExecutionCallable(const StartNextPendingJobExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartNextPendingJobExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartNextPendingJobExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTJobsDataPlaneClient::StartNextPendingJobExecutionAsync(const StartNextPendingJobExecutionRequest& request, const StartNextPendingJobExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartNextPendingJobExecutionAsyncHelper( request, handler, context ); } );
}

void IoTJobsDataPlaneClient::StartNextPendingJobExecutionAsyncHelper(const StartNextPendingJobExecutionRequest& request, const StartNextPendingJobExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartNextPendingJobExecution(request), context);
}

UpdateJobExecutionOutcome IoTJobsDataPlaneClient::UpdateJobExecution(const UpdateJobExecutionRequest& request) const
{
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateJobExecution", "Required field: JobId, is not set");
    return UpdateJobExecutionOutcome(Aws::Client::AWSError<IoTJobsDataPlaneErrors>(IoTJobsDataPlaneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  if (!request.ThingNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateJobExecution", "Required field: ThingName, is not set");
    return UpdateJobExecutionOutcome(Aws::Client::AWSError<IoTJobsDataPlaneErrors>(IoTJobsDataPlaneErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/things/");
  uri.AddPathSegment(request.GetThingName());
  uri.AddPathSegments("/jobs/");
  uri.AddPathSegment(request.GetJobId());
  return UpdateJobExecutionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateJobExecutionOutcomeCallable IoTJobsDataPlaneClient::UpdateJobExecutionCallable(const UpdateJobExecutionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateJobExecutionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateJobExecution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void IoTJobsDataPlaneClient::UpdateJobExecutionAsync(const UpdateJobExecutionRequest& request, const UpdateJobExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateJobExecutionAsyncHelper( request, handler, context ); } );
}

void IoTJobsDataPlaneClient::UpdateJobExecutionAsyncHelper(const UpdateJobExecutionRequest& request, const UpdateJobExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateJobExecution(request), context);
}

