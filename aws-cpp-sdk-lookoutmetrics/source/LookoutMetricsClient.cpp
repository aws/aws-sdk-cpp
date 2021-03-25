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

#include <aws/lookoutmetrics/LookoutMetricsClient.h>
#include <aws/lookoutmetrics/LookoutMetricsEndpoint.h>
#include <aws/lookoutmetrics/LookoutMetricsErrorMarshaller.h>
#include <aws/lookoutmetrics/model/ActivateAnomalyDetectorRequest.h>
#include <aws/lookoutmetrics/model/BackTestAnomalyDetectorRequest.h>
#include <aws/lookoutmetrics/model/CreateAlertRequest.h>
#include <aws/lookoutmetrics/model/CreateAnomalyDetectorRequest.h>
#include <aws/lookoutmetrics/model/CreateMetricSetRequest.h>
#include <aws/lookoutmetrics/model/DeleteAlertRequest.h>
#include <aws/lookoutmetrics/model/DeleteAnomalyDetectorRequest.h>
#include <aws/lookoutmetrics/model/DescribeAlertRequest.h>
#include <aws/lookoutmetrics/model/DescribeAnomalyDetectionExecutionsRequest.h>
#include <aws/lookoutmetrics/model/DescribeAnomalyDetectorRequest.h>
#include <aws/lookoutmetrics/model/DescribeMetricSetRequest.h>
#include <aws/lookoutmetrics/model/GetAnomalyGroupRequest.h>
#include <aws/lookoutmetrics/model/GetFeedbackRequest.h>
#include <aws/lookoutmetrics/model/GetSampleDataRequest.h>
#include <aws/lookoutmetrics/model/ListAlertsRequest.h>
#include <aws/lookoutmetrics/model/ListAnomalyDetectorsRequest.h>
#include <aws/lookoutmetrics/model/ListAnomalyGroupSummariesRequest.h>
#include <aws/lookoutmetrics/model/ListAnomalyGroupTimeSeriesRequest.h>
#include <aws/lookoutmetrics/model/ListMetricSetsRequest.h>
#include <aws/lookoutmetrics/model/ListTagsForResourceRequest.h>
#include <aws/lookoutmetrics/model/PutFeedbackRequest.h>
#include <aws/lookoutmetrics/model/TagResourceRequest.h>
#include <aws/lookoutmetrics/model/UntagResourceRequest.h>
#include <aws/lookoutmetrics/model/UpdateAnomalyDetectorRequest.h>
#include <aws/lookoutmetrics/model/UpdateMetricSetRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::LookoutMetrics;
using namespace Aws::LookoutMetrics::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "lookoutmetrics";
static const char* ALLOCATION_TAG = "LookoutMetricsClient";


LookoutMetricsClient::LookoutMetricsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<LookoutMetricsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LookoutMetricsClient::LookoutMetricsClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<LookoutMetricsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LookoutMetricsClient::LookoutMetricsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<LookoutMetricsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LookoutMetricsClient::~LookoutMetricsClient()
{
}

void LookoutMetricsClient::init(const ClientConfiguration& config)
{
  SetServiceClientName("LookoutMetrics");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + LookoutMetricsEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void LookoutMetricsClient::OverrideEndpoint(const Aws::String& endpoint)
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

ActivateAnomalyDetectorOutcome LookoutMetricsClient::ActivateAnomalyDetector(const ActivateAnomalyDetectorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/ActivateAnomalyDetector";
  uri.SetPath(uri.GetPath() + ss.str());
  return ActivateAnomalyDetectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ActivateAnomalyDetectorOutcomeCallable LookoutMetricsClient::ActivateAnomalyDetectorCallable(const ActivateAnomalyDetectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ActivateAnomalyDetectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ActivateAnomalyDetector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutMetricsClient::ActivateAnomalyDetectorAsync(const ActivateAnomalyDetectorRequest& request, const ActivateAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ActivateAnomalyDetectorAsyncHelper( request, handler, context ); } );
}

void LookoutMetricsClient::ActivateAnomalyDetectorAsyncHelper(const ActivateAnomalyDetectorRequest& request, const ActivateAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ActivateAnomalyDetector(request), context);
}

BackTestAnomalyDetectorOutcome LookoutMetricsClient::BackTestAnomalyDetector(const BackTestAnomalyDetectorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/BackTestAnomalyDetector";
  uri.SetPath(uri.GetPath() + ss.str());
  return BackTestAnomalyDetectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BackTestAnomalyDetectorOutcomeCallable LookoutMetricsClient::BackTestAnomalyDetectorCallable(const BackTestAnomalyDetectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BackTestAnomalyDetectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BackTestAnomalyDetector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutMetricsClient::BackTestAnomalyDetectorAsync(const BackTestAnomalyDetectorRequest& request, const BackTestAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BackTestAnomalyDetectorAsyncHelper( request, handler, context ); } );
}

void LookoutMetricsClient::BackTestAnomalyDetectorAsyncHelper(const BackTestAnomalyDetectorRequest& request, const BackTestAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BackTestAnomalyDetector(request), context);
}

CreateAlertOutcome LookoutMetricsClient::CreateAlert(const CreateAlertRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/CreateAlert";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateAlertOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAlertOutcomeCallable LookoutMetricsClient::CreateAlertCallable(const CreateAlertRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAlertOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAlert(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutMetricsClient::CreateAlertAsync(const CreateAlertRequest& request, const CreateAlertResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAlertAsyncHelper( request, handler, context ); } );
}

void LookoutMetricsClient::CreateAlertAsyncHelper(const CreateAlertRequest& request, const CreateAlertResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAlert(request), context);
}

CreateAnomalyDetectorOutcome LookoutMetricsClient::CreateAnomalyDetector(const CreateAnomalyDetectorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/CreateAnomalyDetector";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateAnomalyDetectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAnomalyDetectorOutcomeCallable LookoutMetricsClient::CreateAnomalyDetectorCallable(const CreateAnomalyDetectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAnomalyDetectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAnomalyDetector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutMetricsClient::CreateAnomalyDetectorAsync(const CreateAnomalyDetectorRequest& request, const CreateAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAnomalyDetectorAsyncHelper( request, handler, context ); } );
}

void LookoutMetricsClient::CreateAnomalyDetectorAsyncHelper(const CreateAnomalyDetectorRequest& request, const CreateAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAnomalyDetector(request), context);
}

CreateMetricSetOutcome LookoutMetricsClient::CreateMetricSet(const CreateMetricSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/CreateMetricSet";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateMetricSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMetricSetOutcomeCallable LookoutMetricsClient::CreateMetricSetCallable(const CreateMetricSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMetricSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMetricSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutMetricsClient::CreateMetricSetAsync(const CreateMetricSetRequest& request, const CreateMetricSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateMetricSetAsyncHelper( request, handler, context ); } );
}

void LookoutMetricsClient::CreateMetricSetAsyncHelper(const CreateMetricSetRequest& request, const CreateMetricSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateMetricSet(request), context);
}

DeleteAlertOutcome LookoutMetricsClient::DeleteAlert(const DeleteAlertRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/DeleteAlert";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteAlertOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAlertOutcomeCallable LookoutMetricsClient::DeleteAlertCallable(const DeleteAlertRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAlertOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAlert(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutMetricsClient::DeleteAlertAsync(const DeleteAlertRequest& request, const DeleteAlertResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAlertAsyncHelper( request, handler, context ); } );
}

void LookoutMetricsClient::DeleteAlertAsyncHelper(const DeleteAlertRequest& request, const DeleteAlertResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAlert(request), context);
}

DeleteAnomalyDetectorOutcome LookoutMetricsClient::DeleteAnomalyDetector(const DeleteAnomalyDetectorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/DeleteAnomalyDetector";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteAnomalyDetectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAnomalyDetectorOutcomeCallable LookoutMetricsClient::DeleteAnomalyDetectorCallable(const DeleteAnomalyDetectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAnomalyDetectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAnomalyDetector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutMetricsClient::DeleteAnomalyDetectorAsync(const DeleteAnomalyDetectorRequest& request, const DeleteAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAnomalyDetectorAsyncHelper( request, handler, context ); } );
}

void LookoutMetricsClient::DeleteAnomalyDetectorAsyncHelper(const DeleteAnomalyDetectorRequest& request, const DeleteAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAnomalyDetector(request), context);
}

DescribeAlertOutcome LookoutMetricsClient::DescribeAlert(const DescribeAlertRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/DescribeAlert";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeAlertOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAlertOutcomeCallable LookoutMetricsClient::DescribeAlertCallable(const DescribeAlertRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAlertOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAlert(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutMetricsClient::DescribeAlertAsync(const DescribeAlertRequest& request, const DescribeAlertResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAlertAsyncHelper( request, handler, context ); } );
}

void LookoutMetricsClient::DescribeAlertAsyncHelper(const DescribeAlertRequest& request, const DescribeAlertResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAlert(request), context);
}

DescribeAnomalyDetectionExecutionsOutcome LookoutMetricsClient::DescribeAnomalyDetectionExecutions(const DescribeAnomalyDetectionExecutionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/DescribeAnomalyDetectionExecutions";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeAnomalyDetectionExecutionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAnomalyDetectionExecutionsOutcomeCallable LookoutMetricsClient::DescribeAnomalyDetectionExecutionsCallable(const DescribeAnomalyDetectionExecutionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAnomalyDetectionExecutionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAnomalyDetectionExecutions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutMetricsClient::DescribeAnomalyDetectionExecutionsAsync(const DescribeAnomalyDetectionExecutionsRequest& request, const DescribeAnomalyDetectionExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAnomalyDetectionExecutionsAsyncHelper( request, handler, context ); } );
}

void LookoutMetricsClient::DescribeAnomalyDetectionExecutionsAsyncHelper(const DescribeAnomalyDetectionExecutionsRequest& request, const DescribeAnomalyDetectionExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAnomalyDetectionExecutions(request), context);
}

DescribeAnomalyDetectorOutcome LookoutMetricsClient::DescribeAnomalyDetector(const DescribeAnomalyDetectorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/DescribeAnomalyDetector";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeAnomalyDetectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeAnomalyDetectorOutcomeCallable LookoutMetricsClient::DescribeAnomalyDetectorCallable(const DescribeAnomalyDetectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAnomalyDetectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAnomalyDetector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutMetricsClient::DescribeAnomalyDetectorAsync(const DescribeAnomalyDetectorRequest& request, const DescribeAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAnomalyDetectorAsyncHelper( request, handler, context ); } );
}

void LookoutMetricsClient::DescribeAnomalyDetectorAsyncHelper(const DescribeAnomalyDetectorRequest& request, const DescribeAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAnomalyDetector(request), context);
}

DescribeMetricSetOutcome LookoutMetricsClient::DescribeMetricSet(const DescribeMetricSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/DescribeMetricSet";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeMetricSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeMetricSetOutcomeCallable LookoutMetricsClient::DescribeMetricSetCallable(const DescribeMetricSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMetricSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMetricSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutMetricsClient::DescribeMetricSetAsync(const DescribeMetricSetRequest& request, const DescribeMetricSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeMetricSetAsyncHelper( request, handler, context ); } );
}

void LookoutMetricsClient::DescribeMetricSetAsyncHelper(const DescribeMetricSetRequest& request, const DescribeMetricSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeMetricSet(request), context);
}

GetAnomalyGroupOutcome LookoutMetricsClient::GetAnomalyGroup(const GetAnomalyGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/GetAnomalyGroup";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetAnomalyGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAnomalyGroupOutcomeCallable LookoutMetricsClient::GetAnomalyGroupCallable(const GetAnomalyGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAnomalyGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAnomalyGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutMetricsClient::GetAnomalyGroupAsync(const GetAnomalyGroupRequest& request, const GetAnomalyGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAnomalyGroupAsyncHelper( request, handler, context ); } );
}

void LookoutMetricsClient::GetAnomalyGroupAsyncHelper(const GetAnomalyGroupRequest& request, const GetAnomalyGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAnomalyGroup(request), context);
}

GetFeedbackOutcome LookoutMetricsClient::GetFeedback(const GetFeedbackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/GetFeedback";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetFeedbackOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetFeedbackOutcomeCallable LookoutMetricsClient::GetFeedbackCallable(const GetFeedbackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFeedbackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFeedback(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutMetricsClient::GetFeedbackAsync(const GetFeedbackRequest& request, const GetFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFeedbackAsyncHelper( request, handler, context ); } );
}

void LookoutMetricsClient::GetFeedbackAsyncHelper(const GetFeedbackRequest& request, const GetFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFeedback(request), context);
}

GetSampleDataOutcome LookoutMetricsClient::GetSampleData(const GetSampleDataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/GetSampleData";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetSampleDataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSampleDataOutcomeCallable LookoutMetricsClient::GetSampleDataCallable(const GetSampleDataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSampleDataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSampleData(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutMetricsClient::GetSampleDataAsync(const GetSampleDataRequest& request, const GetSampleDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSampleDataAsyncHelper( request, handler, context ); } );
}

void LookoutMetricsClient::GetSampleDataAsyncHelper(const GetSampleDataRequest& request, const GetSampleDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSampleData(request), context);
}

ListAlertsOutcome LookoutMetricsClient::ListAlerts(const ListAlertsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/ListAlerts";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListAlertsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAlertsOutcomeCallable LookoutMetricsClient::ListAlertsCallable(const ListAlertsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAlertsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAlerts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutMetricsClient::ListAlertsAsync(const ListAlertsRequest& request, const ListAlertsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAlertsAsyncHelper( request, handler, context ); } );
}

void LookoutMetricsClient::ListAlertsAsyncHelper(const ListAlertsRequest& request, const ListAlertsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAlerts(request), context);
}

ListAnomalyDetectorsOutcome LookoutMetricsClient::ListAnomalyDetectors(const ListAnomalyDetectorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/ListAnomalyDetectors";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListAnomalyDetectorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAnomalyDetectorsOutcomeCallable LookoutMetricsClient::ListAnomalyDetectorsCallable(const ListAnomalyDetectorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAnomalyDetectorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAnomalyDetectors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutMetricsClient::ListAnomalyDetectorsAsync(const ListAnomalyDetectorsRequest& request, const ListAnomalyDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAnomalyDetectorsAsyncHelper( request, handler, context ); } );
}

void LookoutMetricsClient::ListAnomalyDetectorsAsyncHelper(const ListAnomalyDetectorsRequest& request, const ListAnomalyDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAnomalyDetectors(request), context);
}

ListAnomalyGroupSummariesOutcome LookoutMetricsClient::ListAnomalyGroupSummaries(const ListAnomalyGroupSummariesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/ListAnomalyGroupSummaries";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListAnomalyGroupSummariesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAnomalyGroupSummariesOutcomeCallable LookoutMetricsClient::ListAnomalyGroupSummariesCallable(const ListAnomalyGroupSummariesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAnomalyGroupSummariesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAnomalyGroupSummaries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutMetricsClient::ListAnomalyGroupSummariesAsync(const ListAnomalyGroupSummariesRequest& request, const ListAnomalyGroupSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAnomalyGroupSummariesAsyncHelper( request, handler, context ); } );
}

void LookoutMetricsClient::ListAnomalyGroupSummariesAsyncHelper(const ListAnomalyGroupSummariesRequest& request, const ListAnomalyGroupSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAnomalyGroupSummaries(request), context);
}

ListAnomalyGroupTimeSeriesOutcome LookoutMetricsClient::ListAnomalyGroupTimeSeries(const ListAnomalyGroupTimeSeriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/ListAnomalyGroupTimeSeries";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListAnomalyGroupTimeSeriesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAnomalyGroupTimeSeriesOutcomeCallable LookoutMetricsClient::ListAnomalyGroupTimeSeriesCallable(const ListAnomalyGroupTimeSeriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAnomalyGroupTimeSeriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAnomalyGroupTimeSeries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutMetricsClient::ListAnomalyGroupTimeSeriesAsync(const ListAnomalyGroupTimeSeriesRequest& request, const ListAnomalyGroupTimeSeriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAnomalyGroupTimeSeriesAsyncHelper( request, handler, context ); } );
}

void LookoutMetricsClient::ListAnomalyGroupTimeSeriesAsyncHelper(const ListAnomalyGroupTimeSeriesRequest& request, const ListAnomalyGroupTimeSeriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAnomalyGroupTimeSeries(request), context);
}

ListMetricSetsOutcome LookoutMetricsClient::ListMetricSets(const ListMetricSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/ListMetricSets";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListMetricSetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListMetricSetsOutcomeCallable LookoutMetricsClient::ListMetricSetsCallable(const ListMetricSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMetricSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMetricSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutMetricsClient::ListMetricSetsAsync(const ListMetricSetsRequest& request, const ListMetricSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListMetricSetsAsyncHelper( request, handler, context ); } );
}

void LookoutMetricsClient::ListMetricSetsAsyncHelper(const ListMetricSetsRequest& request, const ListMetricSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListMetricSets(request), context);
}

ListTagsForResourceOutcome LookoutMetricsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<LookoutMetricsErrors>(LookoutMetricsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable LookoutMetricsClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutMetricsClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void LookoutMetricsClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

PutFeedbackOutcome LookoutMetricsClient::PutFeedback(const PutFeedbackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/PutFeedback";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutFeedbackOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutFeedbackOutcomeCallable LookoutMetricsClient::PutFeedbackCallable(const PutFeedbackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutFeedbackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutFeedback(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutMetricsClient::PutFeedbackAsync(const PutFeedbackRequest& request, const PutFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutFeedbackAsyncHelper( request, handler, context ); } );
}

void LookoutMetricsClient::PutFeedbackAsyncHelper(const PutFeedbackRequest& request, const PutFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutFeedback(request), context);
}

TagResourceOutcome LookoutMetricsClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<LookoutMetricsErrors>(LookoutMetricsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable LookoutMetricsClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutMetricsClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void LookoutMetricsClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome LookoutMetricsClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<LookoutMetricsErrors>(LookoutMetricsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<LookoutMetricsErrors>(LookoutMetricsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable LookoutMetricsClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutMetricsClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void LookoutMetricsClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateAnomalyDetectorOutcome LookoutMetricsClient::UpdateAnomalyDetector(const UpdateAnomalyDetectorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/UpdateAnomalyDetector";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateAnomalyDetectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateAnomalyDetectorOutcomeCallable LookoutMetricsClient::UpdateAnomalyDetectorCallable(const UpdateAnomalyDetectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAnomalyDetectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAnomalyDetector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutMetricsClient::UpdateAnomalyDetectorAsync(const UpdateAnomalyDetectorRequest& request, const UpdateAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateAnomalyDetectorAsyncHelper( request, handler, context ); } );
}

void LookoutMetricsClient::UpdateAnomalyDetectorAsyncHelper(const UpdateAnomalyDetectorRequest& request, const UpdateAnomalyDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAnomalyDetector(request), context);
}

UpdateMetricSetOutcome LookoutMetricsClient::UpdateMetricSet(const UpdateMetricSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/UpdateMetricSet";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateMetricSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateMetricSetOutcomeCallable LookoutMetricsClient::UpdateMetricSetCallable(const UpdateMetricSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMetricSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMetricSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LookoutMetricsClient::UpdateMetricSetAsync(const UpdateMetricSetRequest& request, const UpdateMetricSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateMetricSetAsyncHelper( request, handler, context ); } );
}

void LookoutMetricsClient::UpdateMetricSetAsyncHelper(const UpdateMetricSetRequest& request, const UpdateMetricSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateMetricSet(request), context);
}

