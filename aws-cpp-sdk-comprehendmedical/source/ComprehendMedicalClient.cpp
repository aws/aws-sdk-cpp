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

#include <aws/comprehendmedical/ComprehendMedicalClient.h>
#include <aws/comprehendmedical/ComprehendMedicalEndpoint.h>
#include <aws/comprehendmedical/ComprehendMedicalErrorMarshaller.h>
#include <aws/comprehendmedical/model/DescribeEntitiesDetectionV2JobRequest.h>
#include <aws/comprehendmedical/model/DescribeICD10CMInferenceJobRequest.h>
#include <aws/comprehendmedical/model/DescribePHIDetectionJobRequest.h>
#include <aws/comprehendmedical/model/DescribeRxNormInferenceJobRequest.h>
#include <aws/comprehendmedical/model/DescribeSNOMEDCTInferenceJobRequest.h>
#include <aws/comprehendmedical/model/DetectEntitiesV2Request.h>
#include <aws/comprehendmedical/model/DetectPHIRequest.h>
#include <aws/comprehendmedical/model/InferICD10CMRequest.h>
#include <aws/comprehendmedical/model/InferRxNormRequest.h>
#include <aws/comprehendmedical/model/InferSNOMEDCTRequest.h>
#include <aws/comprehendmedical/model/ListEntitiesDetectionV2JobsRequest.h>
#include <aws/comprehendmedical/model/ListICD10CMInferenceJobsRequest.h>
#include <aws/comprehendmedical/model/ListPHIDetectionJobsRequest.h>
#include <aws/comprehendmedical/model/ListRxNormInferenceJobsRequest.h>
#include <aws/comprehendmedical/model/ListSNOMEDCTInferenceJobsRequest.h>
#include <aws/comprehendmedical/model/StartEntitiesDetectionV2JobRequest.h>
#include <aws/comprehendmedical/model/StartICD10CMInferenceJobRequest.h>
#include <aws/comprehendmedical/model/StartPHIDetectionJobRequest.h>
#include <aws/comprehendmedical/model/StartRxNormInferenceJobRequest.h>
#include <aws/comprehendmedical/model/StartSNOMEDCTInferenceJobRequest.h>
#include <aws/comprehendmedical/model/StopEntitiesDetectionV2JobRequest.h>
#include <aws/comprehendmedical/model/StopICD10CMInferenceJobRequest.h>
#include <aws/comprehendmedical/model/StopPHIDetectionJobRequest.h>
#include <aws/comprehendmedical/model/StopRxNormInferenceJobRequest.h>
#include <aws/comprehendmedical/model/StopSNOMEDCTInferenceJobRequest.h>

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
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ComprehendMedicalErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ComprehendMedicalClient::ComprehendMedicalClient(const AWSCredentials& credentials,
                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ComprehendMedicalErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ComprehendMedicalClient::ComprehendMedicalClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ComprehendMedicalErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ComprehendMedicalClient::~ComprehendMedicalClient()
{
}

void ComprehendMedicalClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("ComprehendMedical");
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
  return DescribeEntitiesDetectionV2JobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEntitiesDetectionV2JobOutcomeCallable ComprehendMedicalClient::DescribeEntitiesDetectionV2JobCallable(const DescribeEntitiesDetectionV2JobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEntitiesDetectionV2JobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEntitiesDetectionV2Job(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendMedicalClientDescribeEntitiesDetectionV2JobAsyncHelper(ComprehendMedicalClient const * const clientThis, const DescribeEntitiesDetectionV2JobRequest& request, const DescribeEntitiesDetectionV2JobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEntitiesDetectionV2Job(request), context);
}

void ComprehendMedicalClient::DescribeEntitiesDetectionV2JobAsync(const DescribeEntitiesDetectionV2JobRequest& request, const DescribeEntitiesDetectionV2JobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendMedicalClientDescribeEntitiesDetectionV2JobAsyncHelper( this, request, handler, context ); } );
}

DescribeICD10CMInferenceJobOutcome ComprehendMedicalClient::DescribeICD10CMInferenceJob(const DescribeICD10CMInferenceJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeICD10CMInferenceJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeICD10CMInferenceJobOutcomeCallable ComprehendMedicalClient::DescribeICD10CMInferenceJobCallable(const DescribeICD10CMInferenceJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeICD10CMInferenceJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeICD10CMInferenceJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendMedicalClientDescribeICD10CMInferenceJobAsyncHelper(ComprehendMedicalClient const * const clientThis, const DescribeICD10CMInferenceJobRequest& request, const DescribeICD10CMInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeICD10CMInferenceJob(request), context);
}

void ComprehendMedicalClient::DescribeICD10CMInferenceJobAsync(const DescribeICD10CMInferenceJobRequest& request, const DescribeICD10CMInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendMedicalClientDescribeICD10CMInferenceJobAsyncHelper( this, request, handler, context ); } );
}

DescribePHIDetectionJobOutcome ComprehendMedicalClient::DescribePHIDetectionJob(const DescribePHIDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribePHIDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePHIDetectionJobOutcomeCallable ComprehendMedicalClient::DescribePHIDetectionJobCallable(const DescribePHIDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePHIDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePHIDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendMedicalClientDescribePHIDetectionJobAsyncHelper(ComprehendMedicalClient const * const clientThis, const DescribePHIDetectionJobRequest& request, const DescribePHIDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePHIDetectionJob(request), context);
}

void ComprehendMedicalClient::DescribePHIDetectionJobAsync(const DescribePHIDetectionJobRequest& request, const DescribePHIDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendMedicalClientDescribePHIDetectionJobAsyncHelper( this, request, handler, context ); } );
}

DescribeRxNormInferenceJobOutcome ComprehendMedicalClient::DescribeRxNormInferenceJob(const DescribeRxNormInferenceJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeRxNormInferenceJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeRxNormInferenceJobOutcomeCallable ComprehendMedicalClient::DescribeRxNormInferenceJobCallable(const DescribeRxNormInferenceJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRxNormInferenceJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRxNormInferenceJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendMedicalClientDescribeRxNormInferenceJobAsyncHelper(ComprehendMedicalClient const * const clientThis, const DescribeRxNormInferenceJobRequest& request, const DescribeRxNormInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeRxNormInferenceJob(request), context);
}

void ComprehendMedicalClient::DescribeRxNormInferenceJobAsync(const DescribeRxNormInferenceJobRequest& request, const DescribeRxNormInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendMedicalClientDescribeRxNormInferenceJobAsyncHelper( this, request, handler, context ); } );
}

DescribeSNOMEDCTInferenceJobOutcome ComprehendMedicalClient::DescribeSNOMEDCTInferenceJob(const DescribeSNOMEDCTInferenceJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeSNOMEDCTInferenceJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSNOMEDCTInferenceJobOutcomeCallable ComprehendMedicalClient::DescribeSNOMEDCTInferenceJobCallable(const DescribeSNOMEDCTInferenceJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSNOMEDCTInferenceJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSNOMEDCTInferenceJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendMedicalClientDescribeSNOMEDCTInferenceJobAsyncHelper(ComprehendMedicalClient const * const clientThis, const DescribeSNOMEDCTInferenceJobRequest& request, const DescribeSNOMEDCTInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeSNOMEDCTInferenceJob(request), context);
}

void ComprehendMedicalClient::DescribeSNOMEDCTInferenceJobAsync(const DescribeSNOMEDCTInferenceJobRequest& request, const DescribeSNOMEDCTInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendMedicalClientDescribeSNOMEDCTInferenceJobAsyncHelper( this, request, handler, context ); } );
}

DetectEntitiesV2Outcome ComprehendMedicalClient::DetectEntitiesV2(const DetectEntitiesV2Request& request) const
{
  Aws::Http::URI uri = m_uri;
  return DetectEntitiesV2Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetectEntitiesV2OutcomeCallable ComprehendMedicalClient::DetectEntitiesV2Callable(const DetectEntitiesV2Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetectEntitiesV2Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetectEntitiesV2(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendMedicalClientDetectEntitiesV2AsyncHelper(ComprehendMedicalClient const * const clientThis, const DetectEntitiesV2Request& request, const DetectEntitiesV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DetectEntitiesV2(request), context);
}

void ComprehendMedicalClient::DetectEntitiesV2Async(const DetectEntitiesV2Request& request, const DetectEntitiesV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendMedicalClientDetectEntitiesV2AsyncHelper( this, request, handler, context ); } );
}

DetectPHIOutcome ComprehendMedicalClient::DetectPHI(const DetectPHIRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DetectPHIOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetectPHIOutcomeCallable ComprehendMedicalClient::DetectPHICallable(const DetectPHIRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetectPHIOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetectPHI(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendMedicalClientDetectPHIAsyncHelper(ComprehendMedicalClient const * const clientThis, const DetectPHIRequest& request, const DetectPHIResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DetectPHI(request), context);
}

void ComprehendMedicalClient::DetectPHIAsync(const DetectPHIRequest& request, const DetectPHIResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendMedicalClientDetectPHIAsyncHelper( this, request, handler, context ); } );
}

InferICD10CMOutcome ComprehendMedicalClient::InferICD10CM(const InferICD10CMRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return InferICD10CMOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

InferICD10CMOutcomeCallable ComprehendMedicalClient::InferICD10CMCallable(const InferICD10CMRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< InferICD10CMOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->InferICD10CM(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendMedicalClientInferICD10CMAsyncHelper(ComprehendMedicalClient const * const clientThis, const InferICD10CMRequest& request, const InferICD10CMResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->InferICD10CM(request), context);
}

void ComprehendMedicalClient::InferICD10CMAsync(const InferICD10CMRequest& request, const InferICD10CMResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendMedicalClientInferICD10CMAsyncHelper( this, request, handler, context ); } );
}

InferRxNormOutcome ComprehendMedicalClient::InferRxNorm(const InferRxNormRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return InferRxNormOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

InferRxNormOutcomeCallable ComprehendMedicalClient::InferRxNormCallable(const InferRxNormRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< InferRxNormOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->InferRxNorm(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendMedicalClientInferRxNormAsyncHelper(ComprehendMedicalClient const * const clientThis, const InferRxNormRequest& request, const InferRxNormResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->InferRxNorm(request), context);
}

void ComprehendMedicalClient::InferRxNormAsync(const InferRxNormRequest& request, const InferRxNormResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendMedicalClientInferRxNormAsyncHelper( this, request, handler, context ); } );
}

InferSNOMEDCTOutcome ComprehendMedicalClient::InferSNOMEDCT(const InferSNOMEDCTRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return InferSNOMEDCTOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

InferSNOMEDCTOutcomeCallable ComprehendMedicalClient::InferSNOMEDCTCallable(const InferSNOMEDCTRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< InferSNOMEDCTOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->InferSNOMEDCT(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendMedicalClientInferSNOMEDCTAsyncHelper(ComprehendMedicalClient const * const clientThis, const InferSNOMEDCTRequest& request, const InferSNOMEDCTResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->InferSNOMEDCT(request), context);
}

void ComprehendMedicalClient::InferSNOMEDCTAsync(const InferSNOMEDCTRequest& request, const InferSNOMEDCTResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendMedicalClientInferSNOMEDCTAsyncHelper( this, request, handler, context ); } );
}

ListEntitiesDetectionV2JobsOutcome ComprehendMedicalClient::ListEntitiesDetectionV2Jobs(const ListEntitiesDetectionV2JobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListEntitiesDetectionV2JobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEntitiesDetectionV2JobsOutcomeCallable ComprehendMedicalClient::ListEntitiesDetectionV2JobsCallable(const ListEntitiesDetectionV2JobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEntitiesDetectionV2JobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEntitiesDetectionV2Jobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendMedicalClientListEntitiesDetectionV2JobsAsyncHelper(ComprehendMedicalClient const * const clientThis, const ListEntitiesDetectionV2JobsRequest& request, const ListEntitiesDetectionV2JobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListEntitiesDetectionV2Jobs(request), context);
}

void ComprehendMedicalClient::ListEntitiesDetectionV2JobsAsync(const ListEntitiesDetectionV2JobsRequest& request, const ListEntitiesDetectionV2JobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendMedicalClientListEntitiesDetectionV2JobsAsyncHelper( this, request, handler, context ); } );
}

ListICD10CMInferenceJobsOutcome ComprehendMedicalClient::ListICD10CMInferenceJobs(const ListICD10CMInferenceJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListICD10CMInferenceJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListICD10CMInferenceJobsOutcomeCallable ComprehendMedicalClient::ListICD10CMInferenceJobsCallable(const ListICD10CMInferenceJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListICD10CMInferenceJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListICD10CMInferenceJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendMedicalClientListICD10CMInferenceJobsAsyncHelper(ComprehendMedicalClient const * const clientThis, const ListICD10CMInferenceJobsRequest& request, const ListICD10CMInferenceJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListICD10CMInferenceJobs(request), context);
}

void ComprehendMedicalClient::ListICD10CMInferenceJobsAsync(const ListICD10CMInferenceJobsRequest& request, const ListICD10CMInferenceJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendMedicalClientListICD10CMInferenceJobsAsyncHelper( this, request, handler, context ); } );
}

ListPHIDetectionJobsOutcome ComprehendMedicalClient::ListPHIDetectionJobs(const ListPHIDetectionJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListPHIDetectionJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPHIDetectionJobsOutcomeCallable ComprehendMedicalClient::ListPHIDetectionJobsCallable(const ListPHIDetectionJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPHIDetectionJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPHIDetectionJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendMedicalClientListPHIDetectionJobsAsyncHelper(ComprehendMedicalClient const * const clientThis, const ListPHIDetectionJobsRequest& request, const ListPHIDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPHIDetectionJobs(request), context);
}

void ComprehendMedicalClient::ListPHIDetectionJobsAsync(const ListPHIDetectionJobsRequest& request, const ListPHIDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendMedicalClientListPHIDetectionJobsAsyncHelper( this, request, handler, context ); } );
}

ListRxNormInferenceJobsOutcome ComprehendMedicalClient::ListRxNormInferenceJobs(const ListRxNormInferenceJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListRxNormInferenceJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRxNormInferenceJobsOutcomeCallable ComprehendMedicalClient::ListRxNormInferenceJobsCallable(const ListRxNormInferenceJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRxNormInferenceJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRxNormInferenceJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendMedicalClientListRxNormInferenceJobsAsyncHelper(ComprehendMedicalClient const * const clientThis, const ListRxNormInferenceJobsRequest& request, const ListRxNormInferenceJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListRxNormInferenceJobs(request), context);
}

void ComprehendMedicalClient::ListRxNormInferenceJobsAsync(const ListRxNormInferenceJobsRequest& request, const ListRxNormInferenceJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendMedicalClientListRxNormInferenceJobsAsyncHelper( this, request, handler, context ); } );
}

ListSNOMEDCTInferenceJobsOutcome ComprehendMedicalClient::ListSNOMEDCTInferenceJobs(const ListSNOMEDCTInferenceJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListSNOMEDCTInferenceJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSNOMEDCTInferenceJobsOutcomeCallable ComprehendMedicalClient::ListSNOMEDCTInferenceJobsCallable(const ListSNOMEDCTInferenceJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSNOMEDCTInferenceJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSNOMEDCTInferenceJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendMedicalClientListSNOMEDCTInferenceJobsAsyncHelper(ComprehendMedicalClient const * const clientThis, const ListSNOMEDCTInferenceJobsRequest& request, const ListSNOMEDCTInferenceJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSNOMEDCTInferenceJobs(request), context);
}

void ComprehendMedicalClient::ListSNOMEDCTInferenceJobsAsync(const ListSNOMEDCTInferenceJobsRequest& request, const ListSNOMEDCTInferenceJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendMedicalClientListSNOMEDCTInferenceJobsAsyncHelper( this, request, handler, context ); } );
}

StartEntitiesDetectionV2JobOutcome ComprehendMedicalClient::StartEntitiesDetectionV2Job(const StartEntitiesDetectionV2JobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartEntitiesDetectionV2JobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartEntitiesDetectionV2JobOutcomeCallable ComprehendMedicalClient::StartEntitiesDetectionV2JobCallable(const StartEntitiesDetectionV2JobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartEntitiesDetectionV2JobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartEntitiesDetectionV2Job(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendMedicalClientStartEntitiesDetectionV2JobAsyncHelper(ComprehendMedicalClient const * const clientThis, const StartEntitiesDetectionV2JobRequest& request, const StartEntitiesDetectionV2JobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartEntitiesDetectionV2Job(request), context);
}

void ComprehendMedicalClient::StartEntitiesDetectionV2JobAsync(const StartEntitiesDetectionV2JobRequest& request, const StartEntitiesDetectionV2JobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendMedicalClientStartEntitiesDetectionV2JobAsyncHelper( this, request, handler, context ); } );
}

StartICD10CMInferenceJobOutcome ComprehendMedicalClient::StartICD10CMInferenceJob(const StartICD10CMInferenceJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartICD10CMInferenceJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartICD10CMInferenceJobOutcomeCallable ComprehendMedicalClient::StartICD10CMInferenceJobCallable(const StartICD10CMInferenceJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartICD10CMInferenceJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartICD10CMInferenceJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendMedicalClientStartICD10CMInferenceJobAsyncHelper(ComprehendMedicalClient const * const clientThis, const StartICD10CMInferenceJobRequest& request, const StartICD10CMInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartICD10CMInferenceJob(request), context);
}

void ComprehendMedicalClient::StartICD10CMInferenceJobAsync(const StartICD10CMInferenceJobRequest& request, const StartICD10CMInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendMedicalClientStartICD10CMInferenceJobAsyncHelper( this, request, handler, context ); } );
}

StartPHIDetectionJobOutcome ComprehendMedicalClient::StartPHIDetectionJob(const StartPHIDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartPHIDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartPHIDetectionJobOutcomeCallable ComprehendMedicalClient::StartPHIDetectionJobCallable(const StartPHIDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartPHIDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartPHIDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendMedicalClientStartPHIDetectionJobAsyncHelper(ComprehendMedicalClient const * const clientThis, const StartPHIDetectionJobRequest& request, const StartPHIDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartPHIDetectionJob(request), context);
}

void ComprehendMedicalClient::StartPHIDetectionJobAsync(const StartPHIDetectionJobRequest& request, const StartPHIDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendMedicalClientStartPHIDetectionJobAsyncHelper( this, request, handler, context ); } );
}

StartRxNormInferenceJobOutcome ComprehendMedicalClient::StartRxNormInferenceJob(const StartRxNormInferenceJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartRxNormInferenceJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartRxNormInferenceJobOutcomeCallable ComprehendMedicalClient::StartRxNormInferenceJobCallable(const StartRxNormInferenceJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartRxNormInferenceJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartRxNormInferenceJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendMedicalClientStartRxNormInferenceJobAsyncHelper(ComprehendMedicalClient const * const clientThis, const StartRxNormInferenceJobRequest& request, const StartRxNormInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartRxNormInferenceJob(request), context);
}

void ComprehendMedicalClient::StartRxNormInferenceJobAsync(const StartRxNormInferenceJobRequest& request, const StartRxNormInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendMedicalClientStartRxNormInferenceJobAsyncHelper( this, request, handler, context ); } );
}

StartSNOMEDCTInferenceJobOutcome ComprehendMedicalClient::StartSNOMEDCTInferenceJob(const StartSNOMEDCTInferenceJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartSNOMEDCTInferenceJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartSNOMEDCTInferenceJobOutcomeCallable ComprehendMedicalClient::StartSNOMEDCTInferenceJobCallable(const StartSNOMEDCTInferenceJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartSNOMEDCTInferenceJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartSNOMEDCTInferenceJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendMedicalClientStartSNOMEDCTInferenceJobAsyncHelper(ComprehendMedicalClient const * const clientThis, const StartSNOMEDCTInferenceJobRequest& request, const StartSNOMEDCTInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartSNOMEDCTInferenceJob(request), context);
}

void ComprehendMedicalClient::StartSNOMEDCTInferenceJobAsync(const StartSNOMEDCTInferenceJobRequest& request, const StartSNOMEDCTInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendMedicalClientStartSNOMEDCTInferenceJobAsyncHelper( this, request, handler, context ); } );
}

StopEntitiesDetectionV2JobOutcome ComprehendMedicalClient::StopEntitiesDetectionV2Job(const StopEntitiesDetectionV2JobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopEntitiesDetectionV2JobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopEntitiesDetectionV2JobOutcomeCallable ComprehendMedicalClient::StopEntitiesDetectionV2JobCallable(const StopEntitiesDetectionV2JobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopEntitiesDetectionV2JobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopEntitiesDetectionV2Job(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendMedicalClientStopEntitiesDetectionV2JobAsyncHelper(ComprehendMedicalClient const * const clientThis, const StopEntitiesDetectionV2JobRequest& request, const StopEntitiesDetectionV2JobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopEntitiesDetectionV2Job(request), context);
}

void ComprehendMedicalClient::StopEntitiesDetectionV2JobAsync(const StopEntitiesDetectionV2JobRequest& request, const StopEntitiesDetectionV2JobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendMedicalClientStopEntitiesDetectionV2JobAsyncHelper( this, request, handler, context ); } );
}

StopICD10CMInferenceJobOutcome ComprehendMedicalClient::StopICD10CMInferenceJob(const StopICD10CMInferenceJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopICD10CMInferenceJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopICD10CMInferenceJobOutcomeCallable ComprehendMedicalClient::StopICD10CMInferenceJobCallable(const StopICD10CMInferenceJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopICD10CMInferenceJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopICD10CMInferenceJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendMedicalClientStopICD10CMInferenceJobAsyncHelper(ComprehendMedicalClient const * const clientThis, const StopICD10CMInferenceJobRequest& request, const StopICD10CMInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopICD10CMInferenceJob(request), context);
}

void ComprehendMedicalClient::StopICD10CMInferenceJobAsync(const StopICD10CMInferenceJobRequest& request, const StopICD10CMInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendMedicalClientStopICD10CMInferenceJobAsyncHelper( this, request, handler, context ); } );
}

StopPHIDetectionJobOutcome ComprehendMedicalClient::StopPHIDetectionJob(const StopPHIDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopPHIDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopPHIDetectionJobOutcomeCallable ComprehendMedicalClient::StopPHIDetectionJobCallable(const StopPHIDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopPHIDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopPHIDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendMedicalClientStopPHIDetectionJobAsyncHelper(ComprehendMedicalClient const * const clientThis, const StopPHIDetectionJobRequest& request, const StopPHIDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopPHIDetectionJob(request), context);
}

void ComprehendMedicalClient::StopPHIDetectionJobAsync(const StopPHIDetectionJobRequest& request, const StopPHIDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendMedicalClientStopPHIDetectionJobAsyncHelper( this, request, handler, context ); } );
}

StopRxNormInferenceJobOutcome ComprehendMedicalClient::StopRxNormInferenceJob(const StopRxNormInferenceJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopRxNormInferenceJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopRxNormInferenceJobOutcomeCallable ComprehendMedicalClient::StopRxNormInferenceJobCallable(const StopRxNormInferenceJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopRxNormInferenceJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopRxNormInferenceJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendMedicalClientStopRxNormInferenceJobAsyncHelper(ComprehendMedicalClient const * const clientThis, const StopRxNormInferenceJobRequest& request, const StopRxNormInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopRxNormInferenceJob(request), context);
}

void ComprehendMedicalClient::StopRxNormInferenceJobAsync(const StopRxNormInferenceJobRequest& request, const StopRxNormInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendMedicalClientStopRxNormInferenceJobAsyncHelper( this, request, handler, context ); } );
}

StopSNOMEDCTInferenceJobOutcome ComprehendMedicalClient::StopSNOMEDCTInferenceJob(const StopSNOMEDCTInferenceJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopSNOMEDCTInferenceJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopSNOMEDCTInferenceJobOutcomeCallable ComprehendMedicalClient::StopSNOMEDCTInferenceJobCallable(const StopSNOMEDCTInferenceJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopSNOMEDCTInferenceJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopSNOMEDCTInferenceJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendMedicalClientStopSNOMEDCTInferenceJobAsyncHelper(ComprehendMedicalClient const * const clientThis, const StopSNOMEDCTInferenceJobRequest& request, const StopSNOMEDCTInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopSNOMEDCTInferenceJob(request), context);
}

void ComprehendMedicalClient::StopSNOMEDCTInferenceJobAsync(const StopSNOMEDCTInferenceJobRequest& request, const StopSNOMEDCTInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ComprehendMedicalClientStopSNOMEDCTInferenceJobAsyncHelper( this, request, handler, context ); } );
}

