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

#include <aws/application-insights/ApplicationInsightsClient.h>
#include <aws/application-insights/ApplicationInsightsEndpoint.h>
#include <aws/application-insights/ApplicationInsightsErrorMarshaller.h>
#include <aws/application-insights/model/CreateApplicationRequest.h>
#include <aws/application-insights/model/CreateComponentRequest.h>
#include <aws/application-insights/model/DeleteApplicationRequest.h>
#include <aws/application-insights/model/DeleteComponentRequest.h>
#include <aws/application-insights/model/DescribeApplicationRequest.h>
#include <aws/application-insights/model/DescribeComponentRequest.h>
#include <aws/application-insights/model/DescribeComponentConfigurationRequest.h>
#include <aws/application-insights/model/DescribeComponentConfigurationRecommendationRequest.h>
#include <aws/application-insights/model/DescribeObservationRequest.h>
#include <aws/application-insights/model/DescribeProblemRequest.h>
#include <aws/application-insights/model/DescribeProblemObservationsRequest.h>
#include <aws/application-insights/model/ListApplicationsRequest.h>
#include <aws/application-insights/model/ListComponentsRequest.h>
#include <aws/application-insights/model/ListProblemsRequest.h>
#include <aws/application-insights/model/UpdateComponentRequest.h>
#include <aws/application-insights/model/UpdateComponentConfigurationRequest.h>

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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ApplicationInsightsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ApplicationInsightsClient::ApplicationInsightsClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ApplicationInsightsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ApplicationInsightsClient::ApplicationInsightsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ApplicationInsightsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ApplicationInsightsClient::~ApplicationInsightsClient()
{
}

void ApplicationInsightsClient::init(const ClientConfiguration& config)
{
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
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateApplicationOutcome(CreateApplicationResult(outcome.GetResult()));
  }
  else
  {
    return CreateApplicationOutcome(outcome.GetError());
  }
}

CreateApplicationOutcomeCallable ApplicationInsightsClient::CreateApplicationCallable(const CreateApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClient::CreateApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateApplicationAsyncHelper( request, handler, context ); } );
}

void ApplicationInsightsClient::CreateApplicationAsyncHelper(const CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateApplication(request), context);
}

CreateComponentOutcome ApplicationInsightsClient::CreateComponent(const CreateComponentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateComponentOutcome(CreateComponentResult(outcome.GetResult()));
  }
  else
  {
    return CreateComponentOutcome(outcome.GetError());
  }
}

CreateComponentOutcomeCallable ApplicationInsightsClient::CreateComponentCallable(const CreateComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClient::CreateComponentAsync(const CreateComponentRequest& request, const CreateComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateComponentAsyncHelper( request, handler, context ); } );
}

void ApplicationInsightsClient::CreateComponentAsyncHelper(const CreateComponentRequest& request, const CreateComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateComponent(request), context);
}

DeleteApplicationOutcome ApplicationInsightsClient::DeleteApplication(const DeleteApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteApplicationOutcome(DeleteApplicationResult(outcome.GetResult()));
  }
  else
  {
    return DeleteApplicationOutcome(outcome.GetError());
  }
}

DeleteApplicationOutcomeCallable ApplicationInsightsClient::DeleteApplicationCallable(const DeleteApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClient::DeleteApplicationAsync(const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteApplicationAsyncHelper( request, handler, context ); } );
}

void ApplicationInsightsClient::DeleteApplicationAsyncHelper(const DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteApplication(request), context);
}

DeleteComponentOutcome ApplicationInsightsClient::DeleteComponent(const DeleteComponentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteComponentOutcome(DeleteComponentResult(outcome.GetResult()));
  }
  else
  {
    return DeleteComponentOutcome(outcome.GetError());
  }
}

DeleteComponentOutcomeCallable ApplicationInsightsClient::DeleteComponentCallable(const DeleteComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClient::DeleteComponentAsync(const DeleteComponentRequest& request, const DeleteComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteComponentAsyncHelper( request, handler, context ); } );
}

void ApplicationInsightsClient::DeleteComponentAsyncHelper(const DeleteComponentRequest& request, const DeleteComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteComponent(request), context);
}

DescribeApplicationOutcome ApplicationInsightsClient::DescribeApplication(const DescribeApplicationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeApplicationOutcome(DescribeApplicationResult(outcome.GetResult()));
  }
  else
  {
    return DescribeApplicationOutcome(outcome.GetError());
  }
}

DescribeApplicationOutcomeCallable ApplicationInsightsClient::DescribeApplicationCallable(const DescribeApplicationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeApplicationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeApplication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClient::DescribeApplicationAsync(const DescribeApplicationRequest& request, const DescribeApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeApplicationAsyncHelper( request, handler, context ); } );
}

void ApplicationInsightsClient::DescribeApplicationAsyncHelper(const DescribeApplicationRequest& request, const DescribeApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeApplication(request), context);
}

DescribeComponentOutcome ApplicationInsightsClient::DescribeComponent(const DescribeComponentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeComponentOutcome(DescribeComponentResult(outcome.GetResult()));
  }
  else
  {
    return DescribeComponentOutcome(outcome.GetError());
  }
}

DescribeComponentOutcomeCallable ApplicationInsightsClient::DescribeComponentCallable(const DescribeComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClient::DescribeComponentAsync(const DescribeComponentRequest& request, const DescribeComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeComponentAsyncHelper( request, handler, context ); } );
}

void ApplicationInsightsClient::DescribeComponentAsyncHelper(const DescribeComponentRequest& request, const DescribeComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeComponent(request), context);
}

DescribeComponentConfigurationOutcome ApplicationInsightsClient::DescribeComponentConfiguration(const DescribeComponentConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeComponentConfigurationOutcome(DescribeComponentConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return DescribeComponentConfigurationOutcome(outcome.GetError());
  }
}

DescribeComponentConfigurationOutcomeCallable ApplicationInsightsClient::DescribeComponentConfigurationCallable(const DescribeComponentConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeComponentConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeComponentConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClient::DescribeComponentConfigurationAsync(const DescribeComponentConfigurationRequest& request, const DescribeComponentConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeComponentConfigurationAsyncHelper( request, handler, context ); } );
}

void ApplicationInsightsClient::DescribeComponentConfigurationAsyncHelper(const DescribeComponentConfigurationRequest& request, const DescribeComponentConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeComponentConfiguration(request), context);
}

DescribeComponentConfigurationRecommendationOutcome ApplicationInsightsClient::DescribeComponentConfigurationRecommendation(const DescribeComponentConfigurationRecommendationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeComponentConfigurationRecommendationOutcome(DescribeComponentConfigurationRecommendationResult(outcome.GetResult()));
  }
  else
  {
    return DescribeComponentConfigurationRecommendationOutcome(outcome.GetError());
  }
}

DescribeComponentConfigurationRecommendationOutcomeCallable ApplicationInsightsClient::DescribeComponentConfigurationRecommendationCallable(const DescribeComponentConfigurationRecommendationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeComponentConfigurationRecommendationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeComponentConfigurationRecommendation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClient::DescribeComponentConfigurationRecommendationAsync(const DescribeComponentConfigurationRecommendationRequest& request, const DescribeComponentConfigurationRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeComponentConfigurationRecommendationAsyncHelper( request, handler, context ); } );
}

void ApplicationInsightsClient::DescribeComponentConfigurationRecommendationAsyncHelper(const DescribeComponentConfigurationRecommendationRequest& request, const DescribeComponentConfigurationRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeComponentConfigurationRecommendation(request), context);
}

DescribeObservationOutcome ApplicationInsightsClient::DescribeObservation(const DescribeObservationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeObservationOutcome(DescribeObservationResult(outcome.GetResult()));
  }
  else
  {
    return DescribeObservationOutcome(outcome.GetError());
  }
}

DescribeObservationOutcomeCallable ApplicationInsightsClient::DescribeObservationCallable(const DescribeObservationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeObservationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeObservation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClient::DescribeObservationAsync(const DescribeObservationRequest& request, const DescribeObservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeObservationAsyncHelper( request, handler, context ); } );
}

void ApplicationInsightsClient::DescribeObservationAsyncHelper(const DescribeObservationRequest& request, const DescribeObservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeObservation(request), context);
}

DescribeProblemOutcome ApplicationInsightsClient::DescribeProblem(const DescribeProblemRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeProblemOutcome(DescribeProblemResult(outcome.GetResult()));
  }
  else
  {
    return DescribeProblemOutcome(outcome.GetError());
  }
}

DescribeProblemOutcomeCallable ApplicationInsightsClient::DescribeProblemCallable(const DescribeProblemRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProblemOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProblem(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClient::DescribeProblemAsync(const DescribeProblemRequest& request, const DescribeProblemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeProblemAsyncHelper( request, handler, context ); } );
}

void ApplicationInsightsClient::DescribeProblemAsyncHelper(const DescribeProblemRequest& request, const DescribeProblemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeProblem(request), context);
}

DescribeProblemObservationsOutcome ApplicationInsightsClient::DescribeProblemObservations(const DescribeProblemObservationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeProblemObservationsOutcome(DescribeProblemObservationsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeProblemObservationsOutcome(outcome.GetError());
  }
}

DescribeProblemObservationsOutcomeCallable ApplicationInsightsClient::DescribeProblemObservationsCallable(const DescribeProblemObservationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProblemObservationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProblemObservations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClient::DescribeProblemObservationsAsync(const DescribeProblemObservationsRequest& request, const DescribeProblemObservationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeProblemObservationsAsyncHelper( request, handler, context ); } );
}

void ApplicationInsightsClient::DescribeProblemObservationsAsyncHelper(const DescribeProblemObservationsRequest& request, const DescribeProblemObservationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeProblemObservations(request), context);
}

ListApplicationsOutcome ApplicationInsightsClient::ListApplications(const ListApplicationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListApplicationsOutcome(ListApplicationsResult(outcome.GetResult()));
  }
  else
  {
    return ListApplicationsOutcome(outcome.GetError());
  }
}

ListApplicationsOutcomeCallable ApplicationInsightsClient::ListApplicationsCallable(const ListApplicationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListApplicationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApplications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClient::ListApplicationsAsync(const ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListApplicationsAsyncHelper( request, handler, context ); } );
}

void ApplicationInsightsClient::ListApplicationsAsyncHelper(const ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListApplications(request), context);
}

ListComponentsOutcome ApplicationInsightsClient::ListComponents(const ListComponentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListComponentsOutcome(ListComponentsResult(outcome.GetResult()));
  }
  else
  {
    return ListComponentsOutcome(outcome.GetError());
  }
}

ListComponentsOutcomeCallable ApplicationInsightsClient::ListComponentsCallable(const ListComponentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListComponentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListComponents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClient::ListComponentsAsync(const ListComponentsRequest& request, const ListComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListComponentsAsyncHelper( request, handler, context ); } );
}

void ApplicationInsightsClient::ListComponentsAsyncHelper(const ListComponentsRequest& request, const ListComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListComponents(request), context);
}

ListProblemsOutcome ApplicationInsightsClient::ListProblems(const ListProblemsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListProblemsOutcome(ListProblemsResult(outcome.GetResult()));
  }
  else
  {
    return ListProblemsOutcome(outcome.GetError());
  }
}

ListProblemsOutcomeCallable ApplicationInsightsClient::ListProblemsCallable(const ListProblemsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProblemsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProblems(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClient::ListProblemsAsync(const ListProblemsRequest& request, const ListProblemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListProblemsAsyncHelper( request, handler, context ); } );
}

void ApplicationInsightsClient::ListProblemsAsyncHelper(const ListProblemsRequest& request, const ListProblemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListProblems(request), context);
}

UpdateComponentOutcome ApplicationInsightsClient::UpdateComponent(const UpdateComponentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateComponentOutcome(UpdateComponentResult(outcome.GetResult()));
  }
  else
  {
    return UpdateComponentOutcome(outcome.GetError());
  }
}

UpdateComponentOutcomeCallable ApplicationInsightsClient::UpdateComponentCallable(const UpdateComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClient::UpdateComponentAsync(const UpdateComponentRequest& request, const UpdateComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateComponentAsyncHelper( request, handler, context ); } );
}

void ApplicationInsightsClient::UpdateComponentAsyncHelper(const UpdateComponentRequest& request, const UpdateComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateComponent(request), context);
}

UpdateComponentConfigurationOutcome ApplicationInsightsClient::UpdateComponentConfiguration(const UpdateComponentConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateComponentConfigurationOutcome(UpdateComponentConfigurationResult(outcome.GetResult()));
  }
  else
  {
    return UpdateComponentConfigurationOutcome(outcome.GetError());
  }
}

UpdateComponentConfigurationOutcomeCallable ApplicationInsightsClient::UpdateComponentConfigurationCallable(const UpdateComponentConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateComponentConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateComponentConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationInsightsClient::UpdateComponentConfigurationAsync(const UpdateComponentConfigurationRequest& request, const UpdateComponentConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateComponentConfigurationAsyncHelper( request, handler, context ); } );
}

void ApplicationInsightsClient::UpdateComponentConfigurationAsyncHelper(const UpdateComponentConfigurationRequest& request, const UpdateComponentConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateComponentConfiguration(request), context);
}

