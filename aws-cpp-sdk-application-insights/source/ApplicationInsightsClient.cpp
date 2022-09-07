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

#include <aws/application-insights/ApplicationInsightsClient.h>
#include <aws/application-insights/ApplicationInsightsEndpoint.h>
#include <aws/application-insights/ApplicationInsightsErrorMarshaller.h>
#include <aws/application-insights/model/CreateApplicationRequest.h>
#include <aws/application-insights/model/CreateComponentRequest.h>
#include <aws/application-insights/model/CreateLogPatternRequest.h>
#include <aws/application-insights/model/DeleteApplicationRequest.h>
#include <aws/application-insights/model/DeleteComponentRequest.h>
#include <aws/application-insights/model/DeleteLogPatternRequest.h>
#include <aws/application-insights/model/DescribeApplicationRequest.h>
#include <aws/application-insights/model/DescribeComponentRequest.h>
#include <aws/application-insights/model/DescribeComponentConfigurationRequest.h>
#include <aws/application-insights/model/DescribeComponentConfigurationRecommendationRequest.h>
#include <aws/application-insights/model/DescribeLogPatternRequest.h>
#include <aws/application-insights/model/DescribeObservationRequest.h>
#include <aws/application-insights/model/DescribeProblemRequest.h>
#include <aws/application-insights/model/DescribeProblemObservationsRequest.h>
#include <aws/application-insights/model/ListApplicationsRequest.h>
#include <aws/application-insights/model/ListComponentsRequest.h>
#include <aws/application-insights/model/ListConfigurationHistoryRequest.h>
#include <aws/application-insights/model/ListLogPatternSetsRequest.h>
#include <aws/application-insights/model/ListLogPatternsRequest.h>
#include <aws/application-insights/model/ListProblemsRequest.h>
#include <aws/application-insights/model/ListTagsForResourceRequest.h>
#include <aws/application-insights/model/TagResourceRequest.h>
#include <aws/application-insights/model/UntagResourceRequest.h>
#include <aws/application-insights/model/UpdateApplicationRequest.h>
#include <aws/application-insights/model/UpdateComponentRequest.h>
#include <aws/application-insights/model/UpdateComponentConfigurationRequest.h>
#include <aws/application-insights/model/UpdateLogPatternRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ApplicationInsights;
using namespace Aws::ApplicationInsights::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "applicationinsights";
static const char* ALLOCATION_TAG = "ApplicationInsightsClient";

ApplicationInsightsClient::ApplicationInsightsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ApplicationInsightsErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ApplicationInsightsClient::ApplicationInsightsClient(const AWSCredentials& credentials,
                                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ApplicationInsightsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ApplicationInsightsClient::ApplicationInsightsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ApplicationInsightsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ApplicationInsightsClient::~ApplicationInsightsClient()
{
}

void ApplicationInsightsClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Application Insights");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ApplicationInsightsEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ApplicationInsightsClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateApplicationOutcome ApplicationInsightsClient::CreateApplication(const CreateApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateApplicationOutcomeCallable ApplicationInsightsClient::CreateApplicationCallable(const CreateApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClientCreateApplicationAsyncHelper(ApplicationInsightsClient const * const clientThis, const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateApplication(request), context);
}

void ApplicationInsightsClient::CreateApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationInsightsClientCreateApplicationAsyncHelper( this, request, handler, context ); } );
}

CreateComponentOutcome ApplicationInsightsClient::CreateComponent(const CreateComponentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateComponentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateComponentOutcomeCallable ApplicationInsightsClient::CreateComponentCallable(const CreateComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClientCreateComponentAsyncHelper(ApplicationInsightsClient const * const clientThis, const CreateComponentRequest& request, const CreateComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateComponent(request), context);
}

void ApplicationInsightsClient::CreateComponentAsync(const CreateComponentRequest& request, const CreateComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationInsightsClientCreateComponentAsyncHelper( this, request, handler, context ); } );
}

CreateLogPatternOutcome ApplicationInsightsClient::CreateLogPattern(const CreateLogPatternRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateLogPatternOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLogPatternOutcomeCallable ApplicationInsightsClient::CreateLogPatternCallable(const CreateLogPatternRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLogPatternOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLogPattern(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClientCreateLogPatternAsyncHelper(ApplicationInsightsClient const * const clientThis, const CreateLogPatternRequest& request, const CreateLogPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateLogPattern(request), context);
}

void ApplicationInsightsClient::CreateLogPatternAsync(const CreateLogPatternRequest& request, const CreateLogPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationInsightsClientCreateLogPatternAsyncHelper( this, request, handler, context ); } );
}

DeleteApplicationOutcome ApplicationInsightsClient::DeleteApplication(const DeleteApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteApplicationOutcomeCallable ApplicationInsightsClient::DeleteApplicationCallable(const DeleteApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClientDeleteApplicationAsyncHelper(ApplicationInsightsClient const * const clientThis, const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteApplication(request), context);
}

void ApplicationInsightsClient::DeleteApplicationAsync(const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationInsightsClientDeleteApplicationAsyncHelper( this, request, handler, context ); } );
}

DeleteComponentOutcome ApplicationInsightsClient::DeleteComponent(const DeleteComponentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteComponentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteComponentOutcomeCallable ApplicationInsightsClient::DeleteComponentCallable(const DeleteComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClientDeleteComponentAsyncHelper(ApplicationInsightsClient const * const clientThis, const DeleteComponentRequest& request, const DeleteComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteComponent(request), context);
}

void ApplicationInsightsClient::DeleteComponentAsync(const DeleteComponentRequest& request, const DeleteComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationInsightsClientDeleteComponentAsyncHelper( this, request, handler, context ); } );
}

DeleteLogPatternOutcome ApplicationInsightsClient::DeleteLogPattern(const DeleteLogPatternRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteLogPatternOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteLogPatternOutcomeCallable ApplicationInsightsClient::DeleteLogPatternCallable(const DeleteLogPatternRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLogPatternOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLogPattern(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClientDeleteLogPatternAsyncHelper(ApplicationInsightsClient const * const clientThis, const DeleteLogPatternRequest& request, const DeleteLogPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteLogPattern(request), context);
}

void ApplicationInsightsClient::DeleteLogPatternAsync(const DeleteLogPatternRequest& request, const DeleteLogPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationInsightsClientDeleteLogPatternAsyncHelper( this, request, handler, context ); } );
}

DescribeApplicationOutcome ApplicationInsightsClient::DescribeApplication(const DescribeApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeApplicationOutcomeCallable ApplicationInsightsClient::DescribeApplicationCallable(const DescribeApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClientDescribeApplicationAsyncHelper(ApplicationInsightsClient const * const clientThis, const DescribeApplicationRequest& request, const DescribeApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeApplication(request), context);
}

void ApplicationInsightsClient::DescribeApplicationAsync(const DescribeApplicationRequest& request, const DescribeApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationInsightsClientDescribeApplicationAsyncHelper( this, request, handler, context ); } );
}

DescribeComponentOutcome ApplicationInsightsClient::DescribeComponent(const DescribeComponentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeComponentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeComponentOutcomeCallable ApplicationInsightsClient::DescribeComponentCallable(const DescribeComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClientDescribeComponentAsyncHelper(ApplicationInsightsClient const * const clientThis, const DescribeComponentRequest& request, const DescribeComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeComponent(request), context);
}

void ApplicationInsightsClient::DescribeComponentAsync(const DescribeComponentRequest& request, const DescribeComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationInsightsClientDescribeComponentAsyncHelper( this, request, handler, context ); } );
}

DescribeComponentConfigurationOutcome ApplicationInsightsClient::DescribeComponentConfiguration(const DescribeComponentConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeComponentConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeComponentConfigurationOutcomeCallable ApplicationInsightsClient::DescribeComponentConfigurationCallable(const DescribeComponentConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeComponentConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeComponentConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClientDescribeComponentConfigurationAsyncHelper(ApplicationInsightsClient const * const clientThis, const DescribeComponentConfigurationRequest& request, const DescribeComponentConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeComponentConfiguration(request), context);
}

void ApplicationInsightsClient::DescribeComponentConfigurationAsync(const DescribeComponentConfigurationRequest& request, const DescribeComponentConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationInsightsClientDescribeComponentConfigurationAsyncHelper( this, request, handler, context ); } );
}

DescribeComponentConfigurationRecommendationOutcome ApplicationInsightsClient::DescribeComponentConfigurationRecommendation(const DescribeComponentConfigurationRecommendationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeComponentConfigurationRecommendationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeComponentConfigurationRecommendationOutcomeCallable ApplicationInsightsClient::DescribeComponentConfigurationRecommendationCallable(const DescribeComponentConfigurationRecommendationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeComponentConfigurationRecommendationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeComponentConfigurationRecommendation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClientDescribeComponentConfigurationRecommendationAsyncHelper(ApplicationInsightsClient const * const clientThis, const DescribeComponentConfigurationRecommendationRequest& request, const DescribeComponentConfigurationRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeComponentConfigurationRecommendation(request), context);
}

void ApplicationInsightsClient::DescribeComponentConfigurationRecommendationAsync(const DescribeComponentConfigurationRecommendationRequest& request, const DescribeComponentConfigurationRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationInsightsClientDescribeComponentConfigurationRecommendationAsyncHelper( this, request, handler, context ); } );
}

DescribeLogPatternOutcome ApplicationInsightsClient::DescribeLogPattern(const DescribeLogPatternRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeLogPatternOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeLogPatternOutcomeCallable ApplicationInsightsClient::DescribeLogPatternCallable(const DescribeLogPatternRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLogPatternOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLogPattern(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClientDescribeLogPatternAsyncHelper(ApplicationInsightsClient const * const clientThis, const DescribeLogPatternRequest& request, const DescribeLogPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeLogPattern(request), context);
}

void ApplicationInsightsClient::DescribeLogPatternAsync(const DescribeLogPatternRequest& request, const DescribeLogPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationInsightsClientDescribeLogPatternAsyncHelper( this, request, handler, context ); } );
}

DescribeObservationOutcome ApplicationInsightsClient::DescribeObservation(const DescribeObservationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeObservationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeObservationOutcomeCallable ApplicationInsightsClient::DescribeObservationCallable(const DescribeObservationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeObservationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeObservation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClientDescribeObservationAsyncHelper(ApplicationInsightsClient const * const clientThis, const DescribeObservationRequest& request, const DescribeObservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeObservation(request), context);
}

void ApplicationInsightsClient::DescribeObservationAsync(const DescribeObservationRequest& request, const DescribeObservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationInsightsClientDescribeObservationAsyncHelper( this, request, handler, context ); } );
}

DescribeProblemOutcome ApplicationInsightsClient::DescribeProblem(const DescribeProblemRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeProblemOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeProblemOutcomeCallable ApplicationInsightsClient::DescribeProblemCallable(const DescribeProblemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProblemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProblem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClientDescribeProblemAsyncHelper(ApplicationInsightsClient const * const clientThis, const DescribeProblemRequest& request, const DescribeProblemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeProblem(request), context);
}

void ApplicationInsightsClient::DescribeProblemAsync(const DescribeProblemRequest& request, const DescribeProblemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationInsightsClientDescribeProblemAsyncHelper( this, request, handler, context ); } );
}

DescribeProblemObservationsOutcome ApplicationInsightsClient::DescribeProblemObservations(const DescribeProblemObservationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeProblemObservationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeProblemObservationsOutcomeCallable ApplicationInsightsClient::DescribeProblemObservationsCallable(const DescribeProblemObservationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProblemObservationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProblemObservations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClientDescribeProblemObservationsAsyncHelper(ApplicationInsightsClient const * const clientThis, const DescribeProblemObservationsRequest& request, const DescribeProblemObservationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeProblemObservations(request), context);
}

void ApplicationInsightsClient::DescribeProblemObservationsAsync(const DescribeProblemObservationsRequest& request, const DescribeProblemObservationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationInsightsClientDescribeProblemObservationsAsyncHelper( this, request, handler, context ); } );
}

ListApplicationsOutcome ApplicationInsightsClient::ListApplications(const ListApplicationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListApplicationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListApplicationsOutcomeCallable ApplicationInsightsClient::ListApplicationsCallable(const ListApplicationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListApplicationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApplications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClientListApplicationsAsyncHelper(ApplicationInsightsClient const * const clientThis, const ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListApplications(request), context);
}

void ApplicationInsightsClient::ListApplicationsAsync(const ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationInsightsClientListApplicationsAsyncHelper( this, request, handler, context ); } );
}

ListComponentsOutcome ApplicationInsightsClient::ListComponents(const ListComponentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListComponentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListComponentsOutcomeCallable ApplicationInsightsClient::ListComponentsCallable(const ListComponentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListComponentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListComponents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClientListComponentsAsyncHelper(ApplicationInsightsClient const * const clientThis, const ListComponentsRequest& request, const ListComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListComponents(request), context);
}

void ApplicationInsightsClient::ListComponentsAsync(const ListComponentsRequest& request, const ListComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationInsightsClientListComponentsAsyncHelper( this, request, handler, context ); } );
}

ListConfigurationHistoryOutcome ApplicationInsightsClient::ListConfigurationHistory(const ListConfigurationHistoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListConfigurationHistoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListConfigurationHistoryOutcomeCallable ApplicationInsightsClient::ListConfigurationHistoryCallable(const ListConfigurationHistoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListConfigurationHistoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListConfigurationHistory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClientListConfigurationHistoryAsyncHelper(ApplicationInsightsClient const * const clientThis, const ListConfigurationHistoryRequest& request, const ListConfigurationHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListConfigurationHistory(request), context);
}

void ApplicationInsightsClient::ListConfigurationHistoryAsync(const ListConfigurationHistoryRequest& request, const ListConfigurationHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationInsightsClientListConfigurationHistoryAsyncHelper( this, request, handler, context ); } );
}

ListLogPatternSetsOutcome ApplicationInsightsClient::ListLogPatternSets(const ListLogPatternSetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListLogPatternSetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLogPatternSetsOutcomeCallable ApplicationInsightsClient::ListLogPatternSetsCallable(const ListLogPatternSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLogPatternSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLogPatternSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClientListLogPatternSetsAsyncHelper(ApplicationInsightsClient const * const clientThis, const ListLogPatternSetsRequest& request, const ListLogPatternSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListLogPatternSets(request), context);
}

void ApplicationInsightsClient::ListLogPatternSetsAsync(const ListLogPatternSetsRequest& request, const ListLogPatternSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationInsightsClientListLogPatternSetsAsyncHelper( this, request, handler, context ); } );
}

ListLogPatternsOutcome ApplicationInsightsClient::ListLogPatterns(const ListLogPatternsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListLogPatternsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLogPatternsOutcomeCallable ApplicationInsightsClient::ListLogPatternsCallable(const ListLogPatternsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLogPatternsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLogPatterns(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClientListLogPatternsAsyncHelper(ApplicationInsightsClient const * const clientThis, const ListLogPatternsRequest& request, const ListLogPatternsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListLogPatterns(request), context);
}

void ApplicationInsightsClient::ListLogPatternsAsync(const ListLogPatternsRequest& request, const ListLogPatternsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationInsightsClientListLogPatternsAsyncHelper( this, request, handler, context ); } );
}

ListProblemsOutcome ApplicationInsightsClient::ListProblems(const ListProblemsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListProblemsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListProblemsOutcomeCallable ApplicationInsightsClient::ListProblemsCallable(const ListProblemsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProblemsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProblems(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClientListProblemsAsyncHelper(ApplicationInsightsClient const * const clientThis, const ListProblemsRequest& request, const ListProblemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListProblems(request), context);
}

void ApplicationInsightsClient::ListProblemsAsync(const ListProblemsRequest& request, const ListProblemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationInsightsClientListProblemsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome ApplicationInsightsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable ApplicationInsightsClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClientListTagsForResourceAsyncHelper(ApplicationInsightsClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void ApplicationInsightsClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationInsightsClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome ApplicationInsightsClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable ApplicationInsightsClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClientTagResourceAsyncHelper(ApplicationInsightsClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void ApplicationInsightsClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationInsightsClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome ApplicationInsightsClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable ApplicationInsightsClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClientUntagResourceAsyncHelper(ApplicationInsightsClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void ApplicationInsightsClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationInsightsClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateApplicationOutcome ApplicationInsightsClient::UpdateApplication(const UpdateApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateApplicationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateApplicationOutcomeCallable ApplicationInsightsClient::UpdateApplicationCallable(const UpdateApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClientUpdateApplicationAsyncHelper(ApplicationInsightsClient const * const clientThis, const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateApplication(request), context);
}

void ApplicationInsightsClient::UpdateApplicationAsync(const UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationInsightsClientUpdateApplicationAsyncHelper( this, request, handler, context ); } );
}

UpdateComponentOutcome ApplicationInsightsClient::UpdateComponent(const UpdateComponentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateComponentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateComponentOutcomeCallable ApplicationInsightsClient::UpdateComponentCallable(const UpdateComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClientUpdateComponentAsyncHelper(ApplicationInsightsClient const * const clientThis, const UpdateComponentRequest& request, const UpdateComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateComponent(request), context);
}

void ApplicationInsightsClient::UpdateComponentAsync(const UpdateComponentRequest& request, const UpdateComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationInsightsClientUpdateComponentAsyncHelper( this, request, handler, context ); } );
}

UpdateComponentConfigurationOutcome ApplicationInsightsClient::UpdateComponentConfiguration(const UpdateComponentConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateComponentConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateComponentConfigurationOutcomeCallable ApplicationInsightsClient::UpdateComponentConfigurationCallable(const UpdateComponentConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateComponentConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateComponentConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClientUpdateComponentConfigurationAsyncHelper(ApplicationInsightsClient const * const clientThis, const UpdateComponentConfigurationRequest& request, const UpdateComponentConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateComponentConfiguration(request), context);
}

void ApplicationInsightsClient::UpdateComponentConfigurationAsync(const UpdateComponentConfigurationRequest& request, const UpdateComponentConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationInsightsClientUpdateComponentConfigurationAsyncHelper( this, request, handler, context ); } );
}

UpdateLogPatternOutcome ApplicationInsightsClient::UpdateLogPattern(const UpdateLogPatternRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateLogPatternOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateLogPatternOutcomeCallable ApplicationInsightsClient::UpdateLogPatternCallable(const UpdateLogPatternRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLogPatternOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLogPattern(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClientUpdateLogPatternAsyncHelper(ApplicationInsightsClient const * const clientThis, const UpdateLogPatternRequest& request, const UpdateLogPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateLogPattern(request), context);
}

void ApplicationInsightsClient::UpdateLogPatternAsync(const UpdateLogPatternRequest& request, const UpdateLogPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationInsightsClientUpdateLogPatternAsyncHelper( this, request, handler, context ); } );
}

