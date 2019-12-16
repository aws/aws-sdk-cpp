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
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/comprehendmedical/ComprehendMedicalClient.h>
#include <aws/comprehendmedical/ComprehendMedicalEndpoint.h>
#include <aws/comprehendmedical/ComprehendMedicalErrorMarshaller.h>
#include <aws/comprehendmedical/model/DescribeEntitiesDetectionV2JobRequest.h>
#include <aws/comprehendmedical/model/DescribePHIDetectionJobRequest.h>
#include <aws/comprehendmedical/model/DetectEntitiesV2Request.h>
#include <aws/comprehendmedical/model/DetectPHIRequest.h>
#include <aws/comprehendmedical/model/InferICD10CMRequest.h>
#include <aws/comprehendmedical/model/InferRxNormRequest.h>
#include <aws/comprehendmedical/model/ListEntitiesDetectionV2JobsRequest.h>
#include <aws/comprehendmedical/model/ListPHIDetectionJobsRequest.h>
#include <aws/comprehendmedical/model/StartEntitiesDetectionV2JobRequest.h>
#include <aws/comprehendmedical/model/StartPHIDetectionJobRequest.h>
#include <aws/comprehendmedical/model/StopEntitiesDetectionV2JobRequest.h>
#include <aws/comprehendmedical/model/StopPHIDetectionJobRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ComprehendMedical;
using namespace Aws::ComprehendMedical::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "comprehendmedical";
static const char* ALLOCATION_TAG = "ComprehendMedicalClient";


ComprehendMedicalClient::ComprehendMedicalClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ComprehendMedicalErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ComprehendMedicalClient::ComprehendMedicalClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ComprehendMedicalErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ComprehendMedicalClient::ComprehendMedicalClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ComprehendMedicalErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ComprehendMedicalClient::~ComprehendMedicalClient()
{
}

void ComprehendMedicalClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ComprehendMedicalEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ComprehendMedicalClient::OverrideEndpoint(const Aws::String& endpoint)
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

DescribeEntitiesDetectionV2JobOutcome ComprehendMedicalClient::DescribeEntitiesDetectionV2Job(const DescribeEntitiesDetectionV2JobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeEntitiesDetectionV2JobOutcome(DescribeEntitiesDetectionV2JobResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEntitiesDetectionV2JobOutcome(outcome.GetError());
  }
}

DescribeEntitiesDetectionV2JobOutcomeCallable ComprehendMedicalClient::DescribeEntitiesDetectionV2JobCallable(const DescribeEntitiesDetectionV2JobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEntitiesDetectionV2JobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEntitiesDetectionV2Job(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendMedicalClient::DescribeEntitiesDetectionV2JobAsync(const DescribeEntitiesDetectionV2JobRequest& request, const DescribeEntitiesDetectionV2JobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEntitiesDetectionV2JobAsyncHelper( request, handler, context ); } );
}

void ComprehendMedicalClient::DescribeEntitiesDetectionV2JobAsyncHelper(const DescribeEntitiesDetectionV2JobRequest& request, const DescribeEntitiesDetectionV2JobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEntitiesDetectionV2Job(request), context);
}

DescribePHIDetectionJobOutcome ComprehendMedicalClient::DescribePHIDetectionJob(const DescribePHIDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribePHIDetectionJobOutcome(DescribePHIDetectionJobResult(outcome.GetResult()));
  }
  else
  {
    return DescribePHIDetectionJobOutcome(outcome.GetError());
  }
}

DescribePHIDetectionJobOutcomeCallable ComprehendMedicalClient::DescribePHIDetectionJobCallable(const DescribePHIDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePHIDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePHIDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendMedicalClient::DescribePHIDetectionJobAsync(const DescribePHIDetectionJobRequest& request, const DescribePHIDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribePHIDetectionJobAsyncHelper( request, handler, context ); } );
}

void ComprehendMedicalClient::DescribePHIDetectionJobAsyncHelper(const DescribePHIDetectionJobRequest& request, const DescribePHIDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribePHIDetectionJob(request), context);
}

DetectEntitiesV2Outcome ComprehendMedicalClient::DetectEntitiesV2(const DetectEntitiesV2Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DetectEntitiesV2Outcome(DetectEntitiesV2Result(outcome.GetResult()));
  }
  else
  {
    return DetectEntitiesV2Outcome(outcome.GetError());
  }
}

DetectEntitiesV2OutcomeCallable ComprehendMedicalClient::DetectEntitiesV2Callable(const DetectEntitiesV2Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetectEntitiesV2Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetectEntitiesV2(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendMedicalClient::DetectEntitiesV2Async(const DetectEntitiesV2Request& request, const DetectEntitiesV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DetectEntitiesV2AsyncHelper( request, handler, context ); } );
}

void ComprehendMedicalClient::DetectEntitiesV2AsyncHelper(const DetectEntitiesV2Request& request, const DetectEntitiesV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetectEntitiesV2(request), context);
}

DetectPHIOutcome ComprehendMedicalClient::DetectPHI(const DetectPHIRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DetectPHIOutcome(DetectPHIResult(outcome.GetResult()));
  }
  else
  {
    return DetectPHIOutcome(outcome.GetError());
  }
}

DetectPHIOutcomeCallable ComprehendMedicalClient::DetectPHICallable(const DetectPHIRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetectPHIOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetectPHI(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendMedicalClient::DetectPHIAsync(const DetectPHIRequest& request, const DetectPHIResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DetectPHIAsyncHelper( request, handler, context ); } );
}

void ComprehendMedicalClient::DetectPHIAsyncHelper(const DetectPHIRequest& request, const DetectPHIResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetectPHI(request), context);
}

InferICD10CMOutcome ComprehendMedicalClient::InferICD10CM(const InferICD10CMRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return InferICD10CMOutcome(InferICD10CMResult(outcome.GetResult()));
  }
  else
  {
    return InferICD10CMOutcome(outcome.GetError());
  }
}

InferICD10CMOutcomeCallable ComprehendMedicalClient::InferICD10CMCallable(const InferICD10CMRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< InferICD10CMOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->InferICD10CM(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendMedicalClient::InferICD10CMAsync(const InferICD10CMRequest& request, const InferICD10CMResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->InferICD10CMAsyncHelper( request, handler, context ); } );
}

void ComprehendMedicalClient::InferICD10CMAsyncHelper(const InferICD10CMRequest& request, const InferICD10CMResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, InferICD10CM(request), context);
}

InferRxNormOutcome ComprehendMedicalClient::InferRxNorm(const InferRxNormRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return InferRxNormOutcome(InferRxNormResult(outcome.GetResult()));
  }
  else
  {
    return InferRxNormOutcome(outcome.GetError());
  }
}

InferRxNormOutcomeCallable ComprehendMedicalClient::InferRxNormCallable(const InferRxNormRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< InferRxNormOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->InferRxNorm(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendMedicalClient::InferRxNormAsync(const InferRxNormRequest& request, const InferRxNormResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->InferRxNormAsyncHelper( request, handler, context ); } );
}

void ComprehendMedicalClient::InferRxNormAsyncHelper(const InferRxNormRequest& request, const InferRxNormResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, InferRxNorm(request), context);
}

ListEntitiesDetectionV2JobsOutcome ComprehendMedicalClient::ListEntitiesDetectionV2Jobs(const ListEntitiesDetectionV2JobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListEntitiesDetectionV2JobsOutcome(ListEntitiesDetectionV2JobsResult(outcome.GetResult()));
  }
  else
  {
    return ListEntitiesDetectionV2JobsOutcome(outcome.GetError());
  }
}

ListEntitiesDetectionV2JobsOutcomeCallable ComprehendMedicalClient::ListEntitiesDetectionV2JobsCallable(const ListEntitiesDetectionV2JobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEntitiesDetectionV2JobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEntitiesDetectionV2Jobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendMedicalClient::ListEntitiesDetectionV2JobsAsync(const ListEntitiesDetectionV2JobsRequest& request, const ListEntitiesDetectionV2JobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListEntitiesDetectionV2JobsAsyncHelper( request, handler, context ); } );
}

void ComprehendMedicalClient::ListEntitiesDetectionV2JobsAsyncHelper(const ListEntitiesDetectionV2JobsRequest& request, const ListEntitiesDetectionV2JobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListEntitiesDetectionV2Jobs(request), context);
}

ListPHIDetectionJobsOutcome ComprehendMedicalClient::ListPHIDetectionJobs(const ListPHIDetectionJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListPHIDetectionJobsOutcome(ListPHIDetectionJobsResult(outcome.GetResult()));
  }
  else
  {
    return ListPHIDetectionJobsOutcome(outcome.GetError());
  }
}

ListPHIDetectionJobsOutcomeCallable ComprehendMedicalClient::ListPHIDetectionJobsCallable(const ListPHIDetectionJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPHIDetectionJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPHIDetectionJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendMedicalClient::ListPHIDetectionJobsAsync(const ListPHIDetectionJobsRequest& request, const ListPHIDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPHIDetectionJobsAsyncHelper( request, handler, context ); } );
}

void ComprehendMedicalClient::ListPHIDetectionJobsAsyncHelper(const ListPHIDetectionJobsRequest& request, const ListPHIDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPHIDetectionJobs(request), context);
}

StartEntitiesDetectionV2JobOutcome ComprehendMedicalClient::StartEntitiesDetectionV2Job(const StartEntitiesDetectionV2JobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartEntitiesDetectionV2JobOutcome(StartEntitiesDetectionV2JobResult(outcome.GetResult()));
  }
  else
  {
    return StartEntitiesDetectionV2JobOutcome(outcome.GetError());
  }
}

StartEntitiesDetectionV2JobOutcomeCallable ComprehendMedicalClient::StartEntitiesDetectionV2JobCallable(const StartEntitiesDetectionV2JobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartEntitiesDetectionV2JobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartEntitiesDetectionV2Job(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendMedicalClient::StartEntitiesDetectionV2JobAsync(const StartEntitiesDetectionV2JobRequest& request, const StartEntitiesDetectionV2JobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartEntitiesDetectionV2JobAsyncHelper( request, handler, context ); } );
}

void ComprehendMedicalClient::StartEntitiesDetectionV2JobAsyncHelper(const StartEntitiesDetectionV2JobRequest& request, const StartEntitiesDetectionV2JobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartEntitiesDetectionV2Job(request), context);
}

StartPHIDetectionJobOutcome ComprehendMedicalClient::StartPHIDetectionJob(const StartPHIDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartPHIDetectionJobOutcome(StartPHIDetectionJobResult(outcome.GetResult()));
  }
  else
  {
    return StartPHIDetectionJobOutcome(outcome.GetError());
  }
}

StartPHIDetectionJobOutcomeCallable ComprehendMedicalClient::StartPHIDetectionJobCallable(const StartPHIDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartPHIDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartPHIDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendMedicalClient::StartPHIDetectionJobAsync(const StartPHIDetectionJobRequest& request, const StartPHIDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartPHIDetectionJobAsyncHelper( request, handler, context ); } );
}

void ComprehendMedicalClient::StartPHIDetectionJobAsyncHelper(const StartPHIDetectionJobRequest& request, const StartPHIDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartPHIDetectionJob(request), context);
}

StopEntitiesDetectionV2JobOutcome ComprehendMedicalClient::StopEntitiesDetectionV2Job(const StopEntitiesDetectionV2JobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopEntitiesDetectionV2JobOutcome(StopEntitiesDetectionV2JobResult(outcome.GetResult()));
  }
  else
  {
    return StopEntitiesDetectionV2JobOutcome(outcome.GetError());
  }
}

StopEntitiesDetectionV2JobOutcomeCallable ComprehendMedicalClient::StopEntitiesDetectionV2JobCallable(const StopEntitiesDetectionV2JobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopEntitiesDetectionV2JobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopEntitiesDetectionV2Job(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendMedicalClient::StopEntitiesDetectionV2JobAsync(const StopEntitiesDetectionV2JobRequest& request, const StopEntitiesDetectionV2JobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopEntitiesDetectionV2JobAsyncHelper( request, handler, context ); } );
}

void ComprehendMedicalClient::StopEntitiesDetectionV2JobAsyncHelper(const StopEntitiesDetectionV2JobRequest& request, const StopEntitiesDetectionV2JobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopEntitiesDetectionV2Job(request), context);
}

StopPHIDetectionJobOutcome ComprehendMedicalClient::StopPHIDetectionJob(const StopPHIDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopPHIDetectionJobOutcome(StopPHIDetectionJobResult(outcome.GetResult()));
  }
  else
  {
    return StopPHIDetectionJobOutcome(outcome.GetError());
  }
}

StopPHIDetectionJobOutcomeCallable ComprehendMedicalClient::StopPHIDetectionJobCallable(const StopPHIDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopPHIDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopPHIDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendMedicalClient::StopPHIDetectionJobAsync(const StopPHIDetectionJobRequest& request, const StopPHIDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopPHIDetectionJobAsyncHelper( request, handler, context ); } );
}

void ComprehendMedicalClient::StopPHIDetectionJobAsyncHelper(const StopPHIDetectionJobRequest& request, const StopPHIDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopPHIDetectionJob(request), context);
}

