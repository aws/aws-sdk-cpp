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

#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendationsClient.h>
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendationsEndpoint.h>
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendationsErrorMarshaller.h>
#include <aws/migrationhubstrategy/model/GetApplicationComponentDetailsRequest.h>
#include <aws/migrationhubstrategy/model/GetApplicationComponentStrategiesRequest.h>
#include <aws/migrationhubstrategy/model/GetAssessmentRequest.h>
#include <aws/migrationhubstrategy/model/GetImportFileTaskRequest.h>
#include <aws/migrationhubstrategy/model/GetPortfolioPreferencesRequest.h>
#include <aws/migrationhubstrategy/model/GetPortfolioSummaryRequest.h>
#include <aws/migrationhubstrategy/model/GetRecommendationReportDetailsRequest.h>
#include <aws/migrationhubstrategy/model/GetServerDetailsRequest.h>
#include <aws/migrationhubstrategy/model/GetServerStrategiesRequest.h>
#include <aws/migrationhubstrategy/model/ListApplicationComponentsRequest.h>
#include <aws/migrationhubstrategy/model/ListCollectorsRequest.h>
#include <aws/migrationhubstrategy/model/ListImportFileTaskRequest.h>
#include <aws/migrationhubstrategy/model/ListServersRequest.h>
#include <aws/migrationhubstrategy/model/PutPortfolioPreferencesRequest.h>
#include <aws/migrationhubstrategy/model/StartAssessmentRequest.h>
#include <aws/migrationhubstrategy/model/StartImportFileTaskRequest.h>
#include <aws/migrationhubstrategy/model/StartRecommendationReportGenerationRequest.h>
#include <aws/migrationhubstrategy/model/StopAssessmentRequest.h>
#include <aws/migrationhubstrategy/model/UpdateApplicationComponentConfigRequest.h>
#include <aws/migrationhubstrategy/model/UpdateServerConfigRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MigrationHubStrategyRecommendations;
using namespace Aws::MigrationHubStrategyRecommendations::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

const char* MigrationHubStrategyRecommendationsClient::SERVICE_NAME = "migrationhub-strategy";
const char* MigrationHubStrategyRecommendationsClient::ALLOCATION_TAG = "MigrationHubStrategyRecommendationsClient";

MigrationHubStrategyRecommendationsClient::MigrationHubStrategyRecommendationsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MigrationHubStrategyRecommendationsErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MigrationHubStrategyRecommendationsClient::MigrationHubStrategyRecommendationsClient(const AWSCredentials& credentials,
                                                                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MigrationHubStrategyRecommendationsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MigrationHubStrategyRecommendationsClient::MigrationHubStrategyRecommendationsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MigrationHubStrategyRecommendationsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MigrationHubStrategyRecommendationsClient::~MigrationHubStrategyRecommendationsClient()
{
}

void MigrationHubStrategyRecommendationsClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("MigrationHubStrategy");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + MigrationHubStrategyRecommendationsEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void MigrationHubStrategyRecommendationsClient::OverrideEndpoint(const Aws::String& endpoint)
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

GetApplicationComponentDetailsOutcome MigrationHubStrategyRecommendationsClient::GetApplicationComponentDetails(const GetApplicationComponentDetailsRequest& request) const
{
  if (!request.ApplicationComponentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApplicationComponentDetails", "Required field: ApplicationComponentId, is not set");
    return GetApplicationComponentDetailsOutcome(Aws::Client::AWSError<MigrationHubStrategyRecommendationsErrors>(MigrationHubStrategyRecommendationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationComponentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/get-applicationcomponent-details/");
  uri.AddPathSegment(request.GetApplicationComponentId());
  return GetApplicationComponentDetailsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetApplicationComponentDetailsOutcomeCallable MigrationHubStrategyRecommendationsClient::GetApplicationComponentDetailsCallable(const GetApplicationComponentDetailsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApplicationComponentDetailsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApplicationComponentDetails(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubStrategyRecommendationsClient::GetApplicationComponentDetailsAsync(const GetApplicationComponentDetailsRequest& request, const GetApplicationComponentDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetApplicationComponentDetails(request), context);
    } );
}

GetApplicationComponentStrategiesOutcome MigrationHubStrategyRecommendationsClient::GetApplicationComponentStrategies(const GetApplicationComponentStrategiesRequest& request) const
{
  if (!request.ApplicationComponentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApplicationComponentStrategies", "Required field: ApplicationComponentId, is not set");
    return GetApplicationComponentStrategiesOutcome(Aws::Client::AWSError<MigrationHubStrategyRecommendationsErrors>(MigrationHubStrategyRecommendationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationComponentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/get-applicationcomponent-strategies/");
  uri.AddPathSegment(request.GetApplicationComponentId());
  return GetApplicationComponentStrategiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetApplicationComponentStrategiesOutcomeCallable MigrationHubStrategyRecommendationsClient::GetApplicationComponentStrategiesCallable(const GetApplicationComponentStrategiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApplicationComponentStrategiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApplicationComponentStrategies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubStrategyRecommendationsClient::GetApplicationComponentStrategiesAsync(const GetApplicationComponentStrategiesRequest& request, const GetApplicationComponentStrategiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetApplicationComponentStrategies(request), context);
    } );
}

GetAssessmentOutcome MigrationHubStrategyRecommendationsClient::GetAssessment(const GetAssessmentRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAssessment", "Required field: Id, is not set");
    return GetAssessmentOutcome(Aws::Client::AWSError<MigrationHubStrategyRecommendationsErrors>(MigrationHubStrategyRecommendationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/get-assessment/");
  uri.AddPathSegment(request.GetId());
  return GetAssessmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAssessmentOutcomeCallable MigrationHubStrategyRecommendationsClient::GetAssessmentCallable(const GetAssessmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAssessmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAssessment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubStrategyRecommendationsClient::GetAssessmentAsync(const GetAssessmentRequest& request, const GetAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAssessment(request), context);
    } );
}

GetImportFileTaskOutcome MigrationHubStrategyRecommendationsClient::GetImportFileTask(const GetImportFileTaskRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetImportFileTask", "Required field: Id, is not set");
    return GetImportFileTaskOutcome(Aws::Client::AWSError<MigrationHubStrategyRecommendationsErrors>(MigrationHubStrategyRecommendationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/get-import-file-task/");
  uri.AddPathSegment(request.GetId());
  return GetImportFileTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetImportFileTaskOutcomeCallable MigrationHubStrategyRecommendationsClient::GetImportFileTaskCallable(const GetImportFileTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetImportFileTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetImportFileTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubStrategyRecommendationsClient::GetImportFileTaskAsync(const GetImportFileTaskRequest& request, const GetImportFileTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetImportFileTask(request), context);
    } );
}

GetPortfolioPreferencesOutcome MigrationHubStrategyRecommendationsClient::GetPortfolioPreferences(const GetPortfolioPreferencesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/get-portfolio-preferences");
  return GetPortfolioPreferencesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetPortfolioPreferencesOutcomeCallable MigrationHubStrategyRecommendationsClient::GetPortfolioPreferencesCallable(const GetPortfolioPreferencesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPortfolioPreferencesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPortfolioPreferences(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubStrategyRecommendationsClient::GetPortfolioPreferencesAsync(const GetPortfolioPreferencesRequest& request, const GetPortfolioPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetPortfolioPreferences(request), context);
    } );
}

GetPortfolioSummaryOutcome MigrationHubStrategyRecommendationsClient::GetPortfolioSummary(const GetPortfolioSummaryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/get-portfolio-summary");
  return GetPortfolioSummaryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetPortfolioSummaryOutcomeCallable MigrationHubStrategyRecommendationsClient::GetPortfolioSummaryCallable(const GetPortfolioSummaryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPortfolioSummaryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPortfolioSummary(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubStrategyRecommendationsClient::GetPortfolioSummaryAsync(const GetPortfolioSummaryRequest& request, const GetPortfolioSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetPortfolioSummary(request), context);
    } );
}

GetRecommendationReportDetailsOutcome MigrationHubStrategyRecommendationsClient::GetRecommendationReportDetails(const GetRecommendationReportDetailsRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRecommendationReportDetails", "Required field: Id, is not set");
    return GetRecommendationReportDetailsOutcome(Aws::Client::AWSError<MigrationHubStrategyRecommendationsErrors>(MigrationHubStrategyRecommendationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/get-recommendation-report-details/");
  uri.AddPathSegment(request.GetId());
  return GetRecommendationReportDetailsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetRecommendationReportDetailsOutcomeCallable MigrationHubStrategyRecommendationsClient::GetRecommendationReportDetailsCallable(const GetRecommendationReportDetailsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRecommendationReportDetailsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRecommendationReportDetails(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubStrategyRecommendationsClient::GetRecommendationReportDetailsAsync(const GetRecommendationReportDetailsRequest& request, const GetRecommendationReportDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRecommendationReportDetails(request), context);
    } );
}

GetServerDetailsOutcome MigrationHubStrategyRecommendationsClient::GetServerDetails(const GetServerDetailsRequest& request) const
{
  if (!request.ServerIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetServerDetails", "Required field: ServerId, is not set");
    return GetServerDetailsOutcome(Aws::Client::AWSError<MigrationHubStrategyRecommendationsErrors>(MigrationHubStrategyRecommendationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServerId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/get-server-details/");
  uri.AddPathSegment(request.GetServerId());
  return GetServerDetailsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetServerDetailsOutcomeCallable MigrationHubStrategyRecommendationsClient::GetServerDetailsCallable(const GetServerDetailsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetServerDetailsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetServerDetails(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubStrategyRecommendationsClient::GetServerDetailsAsync(const GetServerDetailsRequest& request, const GetServerDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetServerDetails(request), context);
    } );
}

GetServerStrategiesOutcome MigrationHubStrategyRecommendationsClient::GetServerStrategies(const GetServerStrategiesRequest& request) const
{
  if (!request.ServerIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetServerStrategies", "Required field: ServerId, is not set");
    return GetServerStrategiesOutcome(Aws::Client::AWSError<MigrationHubStrategyRecommendationsErrors>(MigrationHubStrategyRecommendationsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ServerId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/get-server-strategies/");
  uri.AddPathSegment(request.GetServerId());
  return GetServerStrategiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetServerStrategiesOutcomeCallable MigrationHubStrategyRecommendationsClient::GetServerStrategiesCallable(const GetServerStrategiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetServerStrategiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetServerStrategies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubStrategyRecommendationsClient::GetServerStrategiesAsync(const GetServerStrategiesRequest& request, const GetServerStrategiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetServerStrategies(request), context);
    } );
}

ListApplicationComponentsOutcome MigrationHubStrategyRecommendationsClient::ListApplicationComponents(const ListApplicationComponentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/list-applicationcomponents");
  return ListApplicationComponentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListApplicationComponentsOutcomeCallable MigrationHubStrategyRecommendationsClient::ListApplicationComponentsCallable(const ListApplicationComponentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListApplicationComponentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApplicationComponents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubStrategyRecommendationsClient::ListApplicationComponentsAsync(const ListApplicationComponentsRequest& request, const ListApplicationComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListApplicationComponents(request), context);
    } );
}

ListCollectorsOutcome MigrationHubStrategyRecommendationsClient::ListCollectors(const ListCollectorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/list-collectors");
  return ListCollectorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListCollectorsOutcomeCallable MigrationHubStrategyRecommendationsClient::ListCollectorsCallable(const ListCollectorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCollectorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCollectors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubStrategyRecommendationsClient::ListCollectorsAsync(const ListCollectorsRequest& request, const ListCollectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListCollectors(request), context);
    } );
}

ListImportFileTaskOutcome MigrationHubStrategyRecommendationsClient::ListImportFileTask(const ListImportFileTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/list-import-file-task");
  return ListImportFileTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListImportFileTaskOutcomeCallable MigrationHubStrategyRecommendationsClient::ListImportFileTaskCallable(const ListImportFileTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListImportFileTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListImportFileTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubStrategyRecommendationsClient::ListImportFileTaskAsync(const ListImportFileTaskRequest& request, const ListImportFileTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListImportFileTask(request), context);
    } );
}

ListServersOutcome MigrationHubStrategyRecommendationsClient::ListServers(const ListServersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/list-servers");
  return ListServersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListServersOutcomeCallable MigrationHubStrategyRecommendationsClient::ListServersCallable(const ListServersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListServersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListServers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubStrategyRecommendationsClient::ListServersAsync(const ListServersRequest& request, const ListServersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListServers(request), context);
    } );
}

PutPortfolioPreferencesOutcome MigrationHubStrategyRecommendationsClient::PutPortfolioPreferences(const PutPortfolioPreferencesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/put-portfolio-preferences");
  return PutPortfolioPreferencesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutPortfolioPreferencesOutcomeCallable MigrationHubStrategyRecommendationsClient::PutPortfolioPreferencesCallable(const PutPortfolioPreferencesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutPortfolioPreferencesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutPortfolioPreferences(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubStrategyRecommendationsClient::PutPortfolioPreferencesAsync(const PutPortfolioPreferencesRequest& request, const PutPortfolioPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutPortfolioPreferences(request), context);
    } );
}

StartAssessmentOutcome MigrationHubStrategyRecommendationsClient::StartAssessment(const StartAssessmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/start-assessment");
  return StartAssessmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartAssessmentOutcomeCallable MigrationHubStrategyRecommendationsClient::StartAssessmentCallable(const StartAssessmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartAssessmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartAssessment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubStrategyRecommendationsClient::StartAssessmentAsync(const StartAssessmentRequest& request, const StartAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartAssessment(request), context);
    } );
}

StartImportFileTaskOutcome MigrationHubStrategyRecommendationsClient::StartImportFileTask(const StartImportFileTaskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/start-import-file-task");
  return StartImportFileTaskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartImportFileTaskOutcomeCallable MigrationHubStrategyRecommendationsClient::StartImportFileTaskCallable(const StartImportFileTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartImportFileTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartImportFileTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubStrategyRecommendationsClient::StartImportFileTaskAsync(const StartImportFileTaskRequest& request, const StartImportFileTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartImportFileTask(request), context);
    } );
}

StartRecommendationReportGenerationOutcome MigrationHubStrategyRecommendationsClient::StartRecommendationReportGeneration(const StartRecommendationReportGenerationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/start-recommendation-report-generation");
  return StartRecommendationReportGenerationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartRecommendationReportGenerationOutcomeCallable MigrationHubStrategyRecommendationsClient::StartRecommendationReportGenerationCallable(const StartRecommendationReportGenerationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartRecommendationReportGenerationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartRecommendationReportGeneration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubStrategyRecommendationsClient::StartRecommendationReportGenerationAsync(const StartRecommendationReportGenerationRequest& request, const StartRecommendationReportGenerationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartRecommendationReportGeneration(request), context);
    } );
}

StopAssessmentOutcome MigrationHubStrategyRecommendationsClient::StopAssessment(const StopAssessmentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/stop-assessment");
  return StopAssessmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopAssessmentOutcomeCallable MigrationHubStrategyRecommendationsClient::StopAssessmentCallable(const StopAssessmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopAssessmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopAssessment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubStrategyRecommendationsClient::StopAssessmentAsync(const StopAssessmentRequest& request, const StopAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopAssessment(request), context);
    } );
}

UpdateApplicationComponentConfigOutcome MigrationHubStrategyRecommendationsClient::UpdateApplicationComponentConfig(const UpdateApplicationComponentConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/update-applicationcomponent-config/");
  return UpdateApplicationComponentConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateApplicationComponentConfigOutcomeCallable MigrationHubStrategyRecommendationsClient::UpdateApplicationComponentConfigCallable(const UpdateApplicationComponentConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApplicationComponentConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApplicationComponentConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubStrategyRecommendationsClient::UpdateApplicationComponentConfigAsync(const UpdateApplicationComponentConfigRequest& request, const UpdateApplicationComponentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateApplicationComponentConfig(request), context);
    } );
}

UpdateServerConfigOutcome MigrationHubStrategyRecommendationsClient::UpdateServerConfig(const UpdateServerConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/update-server-config/");
  return UpdateServerConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateServerConfigOutcomeCallable MigrationHubStrategyRecommendationsClient::UpdateServerConfigCallable(const UpdateServerConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateServerConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateServerConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MigrationHubStrategyRecommendationsClient::UpdateServerConfigAsync(const UpdateServerConfigRequest& request, const UpdateServerConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateServerConfig(request), context);
    } );
}

