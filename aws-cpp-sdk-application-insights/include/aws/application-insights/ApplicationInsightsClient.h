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

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/application-insights/ApplicationInsightsErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/application-insights/model/CreateApplicationResult.h>
#include <aws/application-insights/model/CreateComponentResult.h>
#include <aws/application-insights/model/DeleteApplicationResult.h>
#include <aws/application-insights/model/DeleteComponentResult.h>
#include <aws/application-insights/model/DescribeApplicationResult.h>
#include <aws/application-insights/model/DescribeComponentResult.h>
#include <aws/application-insights/model/DescribeComponentConfigurationResult.h>
#include <aws/application-insights/model/DescribeComponentConfigurationRecommendationResult.h>
#include <aws/application-insights/model/DescribeObservationResult.h>
#include <aws/application-insights/model/DescribeProblemResult.h>
#include <aws/application-insights/model/DescribeProblemObservationsResult.h>
#include <aws/application-insights/model/ListApplicationsResult.h>
#include <aws/application-insights/model/ListComponentsResult.h>
#include <aws/application-insights/model/ListProblemsResult.h>
#include <aws/application-insights/model/UpdateComponentResult.h>
#include <aws/application-insights/model/UpdateComponentConfigurationResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace ApplicationInsights
{

namespace Model
{
        class CreateApplicationRequest;
        class CreateComponentRequest;
        class DeleteApplicationRequest;
        class DeleteComponentRequest;
        class DescribeApplicationRequest;
        class DescribeComponentRequest;
        class DescribeComponentConfigurationRequest;
        class DescribeComponentConfigurationRecommendationRequest;
        class DescribeObservationRequest;
        class DescribeProblemRequest;
        class DescribeProblemObservationsRequest;
        class ListApplicationsRequest;
        class ListComponentsRequest;
        class ListProblemsRequest;
        class UpdateComponentRequest;
        class UpdateComponentConfigurationRequest;

        typedef Aws::Utils::Outcome<CreateApplicationResult, Aws::Client::AWSError<ApplicationInsightsErrors>> CreateApplicationOutcome;
        typedef Aws::Utils::Outcome<CreateComponentResult, Aws::Client::AWSError<ApplicationInsightsErrors>> CreateComponentOutcome;
        typedef Aws::Utils::Outcome<DeleteApplicationResult, Aws::Client::AWSError<ApplicationInsightsErrors>> DeleteApplicationOutcome;
        typedef Aws::Utils::Outcome<DeleteComponentResult, Aws::Client::AWSError<ApplicationInsightsErrors>> DeleteComponentOutcome;
        typedef Aws::Utils::Outcome<DescribeApplicationResult, Aws::Client::AWSError<ApplicationInsightsErrors>> DescribeApplicationOutcome;
        typedef Aws::Utils::Outcome<DescribeComponentResult, Aws::Client::AWSError<ApplicationInsightsErrors>> DescribeComponentOutcome;
        typedef Aws::Utils::Outcome<DescribeComponentConfigurationResult, Aws::Client::AWSError<ApplicationInsightsErrors>> DescribeComponentConfigurationOutcome;
        typedef Aws::Utils::Outcome<DescribeComponentConfigurationRecommendationResult, Aws::Client::AWSError<ApplicationInsightsErrors>> DescribeComponentConfigurationRecommendationOutcome;
        typedef Aws::Utils::Outcome<DescribeObservationResult, Aws::Client::AWSError<ApplicationInsightsErrors>> DescribeObservationOutcome;
        typedef Aws::Utils::Outcome<DescribeProblemResult, Aws::Client::AWSError<ApplicationInsightsErrors>> DescribeProblemOutcome;
        typedef Aws::Utils::Outcome<DescribeProblemObservationsResult, Aws::Client::AWSError<ApplicationInsightsErrors>> DescribeProblemObservationsOutcome;
        typedef Aws::Utils::Outcome<ListApplicationsResult, Aws::Client::AWSError<ApplicationInsightsErrors>> ListApplicationsOutcome;
        typedef Aws::Utils::Outcome<ListComponentsResult, Aws::Client::AWSError<ApplicationInsightsErrors>> ListComponentsOutcome;
        typedef Aws::Utils::Outcome<ListProblemsResult, Aws::Client::AWSError<ApplicationInsightsErrors>> ListProblemsOutcome;
        typedef Aws::Utils::Outcome<UpdateComponentResult, Aws::Client::AWSError<ApplicationInsightsErrors>> UpdateComponentOutcome;
        typedef Aws::Utils::Outcome<UpdateComponentConfigurationResult, Aws::Client::AWSError<ApplicationInsightsErrors>> UpdateComponentConfigurationOutcome;

        typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
        typedef std::future<CreateComponentOutcome> CreateComponentOutcomeCallable;
        typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
        typedef std::future<DeleteComponentOutcome> DeleteComponentOutcomeCallable;
        typedef std::future<DescribeApplicationOutcome> DescribeApplicationOutcomeCallable;
        typedef std::future<DescribeComponentOutcome> DescribeComponentOutcomeCallable;
        typedef std::future<DescribeComponentConfigurationOutcome> DescribeComponentConfigurationOutcomeCallable;
        typedef std::future<DescribeComponentConfigurationRecommendationOutcome> DescribeComponentConfigurationRecommendationOutcomeCallable;
        typedef std::future<DescribeObservationOutcome> DescribeObservationOutcomeCallable;
        typedef std::future<DescribeProblemOutcome> DescribeProblemOutcomeCallable;
        typedef std::future<DescribeProblemObservationsOutcome> DescribeProblemObservationsOutcomeCallable;
        typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
        typedef std::future<ListComponentsOutcome> ListComponentsOutcomeCallable;
        typedef std::future<ListProblemsOutcome> ListProblemsOutcomeCallable;
        typedef std::future<UpdateComponentOutcome> UpdateComponentOutcomeCallable;
        typedef std::future<UpdateComponentConfigurationOutcome> UpdateComponentConfigurationOutcomeCallable;
} // namespace Model

  class ApplicationInsightsClient;

    typedef std::function<void(const ApplicationInsightsClient*, const Model::CreateApplicationRequest&, const Model::CreateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::CreateComponentRequest&, const Model::CreateComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateComponentResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::DeleteApplicationRequest&, const Model::DeleteApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::DeleteComponentRequest&, const Model::DeleteComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteComponentResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::DescribeApplicationRequest&, const Model::DescribeApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeApplicationResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::DescribeComponentRequest&, const Model::DescribeComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeComponentResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::DescribeComponentConfigurationRequest&, const Model::DescribeComponentConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeComponentConfigurationResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::DescribeComponentConfigurationRecommendationRequest&, const Model::DescribeComponentConfigurationRecommendationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeComponentConfigurationRecommendationResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::DescribeObservationRequest&, const Model::DescribeObservationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeObservationResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::DescribeProblemRequest&, const Model::DescribeProblemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProblemResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::DescribeProblemObservationsRequest&, const Model::DescribeProblemObservationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProblemObservationsResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::ListApplicationsRequest&, const Model::ListApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationsResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::ListComponentsRequest&, const Model::ListComponentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListComponentsResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::ListProblemsRequest&, const Model::ListProblemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProblemsResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::UpdateComponentRequest&, const Model::UpdateComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateComponentResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::UpdateComponentConfigurationRequest&, const Model::UpdateComponentConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateComponentConfigurationResponseReceivedHandler;

  /**
   * <fullname>Amazon CloudWatch Application Insights for .NET and SQL
   * Server</fullname> <p> Amazon CloudWatch Application Insights for .NET and SQL
   * Server is a service that helps you detect common problems with your .NET and SQL
   * Server-based applications. It enables you to pinpoint the source of issues in
   * your applications (built with technologies such as Microsoft IIS, .NET, and
   * Microsoft SQL Server), by providing key insights into detected problems.</p>
   * <p>After you onboard your application, CloudWatch Application Insights for .NET
   * and SQL Server identifies, recommends, and sets up metrics and logs. It
   * continuously analyzes and correlates your metrics and logs for unusual behavior
   * to surface actionable problems with your application. For example, if your
   * application is slow and unresponsive and leading to HTTP 500 errors in your
   * Application Load Balancer (ALB), Application Insights informs you that a memory
   * pressure problem with your SQL Server database is occurring. It bases this
   * analysis on impactful metrics and log errors. </p>
   */
  class AWS_APPLICATIONINSIGHTS_API ApplicationInsightsClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApplicationInsightsClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApplicationInsightsClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ApplicationInsightsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ApplicationInsightsClient();

        inline virtual const char* GetServiceClientName() const override { return "Application Insights"; }


        /**
         * <p>Adds an application that is created from a resource group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/CreateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request) const;

        /**
         * <p>Adds an application that is created from a resource group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/CreateApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const Model::CreateApplicationRequest& request) const;

        /**
         * <p>Adds an application that is created from a resource group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/CreateApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateApplicationAsync(const Model::CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a custom component by grouping similar standalone instances to
         * monitor.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/CreateComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateComponentOutcome CreateComponent(const Model::CreateComponentRequest& request) const;

        /**
         * <p>Creates a custom component by grouping similar standalone instances to
         * monitor.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/CreateComponent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateComponentOutcomeCallable CreateComponentCallable(const Model::CreateComponentRequest& request) const;

        /**
         * <p>Creates a custom component by grouping similar standalone instances to
         * monitor.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/CreateComponent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateComponentAsync(const Model::CreateComponentRequest& request, const CreateComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified application from monitoring. Does not delete the
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DeleteApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;

        /**
         * <p>Removes the specified application from monitoring. Does not delete the
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DeleteApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApplicationOutcomeCallable DeleteApplicationCallable(const Model::DeleteApplicationRequest& request) const;

        /**
         * <p>Removes the specified application from monitoring. Does not delete the
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DeleteApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApplicationAsync(const Model::DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Ungroups a custom component. When you ungroup custom components, all
         * applicable monitors that are set up for the component are removed and the
         * instances revert to their standalone status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DeleteComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteComponentOutcome DeleteComponent(const Model::DeleteComponentRequest& request) const;

        /**
         * <p>Ungroups a custom component. When you ungroup custom components, all
         * applicable monitors that are set up for the component are removed and the
         * instances revert to their standalone status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DeleteComponent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteComponentOutcomeCallable DeleteComponentCallable(const Model::DeleteComponentRequest& request) const;

        /**
         * <p>Ungroups a custom component. When you ungroup custom components, all
         * applicable monitors that are set up for the component are removed and the
         * instances revert to their standalone status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DeleteComponent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteComponentAsync(const Model::DeleteComponentRequest& request, const DeleteComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeApplicationOutcome DescribeApplication(const Model::DescribeApplicationRequest& request) const;

        /**
         * <p>Describes the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeApplicationOutcomeCallable DescribeApplicationCallable(const Model::DescribeApplicationRequest& request) const;

        /**
         * <p>Describes the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeApplicationAsync(const Model::DescribeApplicationRequest& request, const DescribeApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a component and lists the resources that are grouped together in a
         * component.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeComponentOutcome DescribeComponent(const Model::DescribeComponentRequest& request) const;

        /**
         * <p>Describes a component and lists the resources that are grouped together in a
         * component.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeComponent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeComponentOutcomeCallable DescribeComponentCallable(const Model::DescribeComponentRequest& request) const;

        /**
         * <p>Describes a component and lists the resources that are grouped together in a
         * component.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeComponent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeComponentAsync(const Model::DescribeComponentRequest& request, const DescribeComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the monitoring configuration of the component.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeComponentConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeComponentConfigurationOutcome DescribeComponentConfiguration(const Model::DescribeComponentConfigurationRequest& request) const;

        /**
         * <p>Describes the monitoring configuration of the component.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeComponentConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeComponentConfigurationOutcomeCallable DescribeComponentConfigurationCallable(const Model::DescribeComponentConfigurationRequest& request) const;

        /**
         * <p>Describes the monitoring configuration of the component.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeComponentConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeComponentConfigurationAsync(const Model::DescribeComponentConfigurationRequest& request, const DescribeComponentConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the recommended monitoring configuration of the
         * component.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeComponentConfigurationRecommendation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeComponentConfigurationRecommendationOutcome DescribeComponentConfigurationRecommendation(const Model::DescribeComponentConfigurationRecommendationRequest& request) const;

        /**
         * <p>Describes the recommended monitoring configuration of the
         * component.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeComponentConfigurationRecommendation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeComponentConfigurationRecommendationOutcomeCallable DescribeComponentConfigurationRecommendationCallable(const Model::DescribeComponentConfigurationRecommendationRequest& request) const;

        /**
         * <p>Describes the recommended monitoring configuration of the
         * component.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeComponentConfigurationRecommendation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeComponentConfigurationRecommendationAsync(const Model::DescribeComponentConfigurationRecommendationRequest& request, const DescribeComponentConfigurationRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an anomaly or error with the application.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeObservation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeObservationOutcome DescribeObservation(const Model::DescribeObservationRequest& request) const;

        /**
         * <p>Describes an anomaly or error with the application.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeObservation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeObservationOutcomeCallable DescribeObservationCallable(const Model::DescribeObservationRequest& request) const;

        /**
         * <p>Describes an anomaly or error with the application.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeObservation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeObservationAsync(const Model::DescribeObservationRequest& request, const DescribeObservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an application problem.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeProblem">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProblemOutcome DescribeProblem(const Model::DescribeProblemRequest& request) const;

        /**
         * <p>Describes an application problem.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeProblem">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProblemOutcomeCallable DescribeProblemCallable(const Model::DescribeProblemRequest& request) const;

        /**
         * <p>Describes an application problem.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeProblem">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProblemAsync(const Model::DescribeProblemRequest& request, const DescribeProblemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the anomalies or errors associated with the problem.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeProblemObservations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProblemObservationsOutcome DescribeProblemObservations(const Model::DescribeProblemObservationsRequest& request) const;

        /**
         * <p>Describes the anomalies or errors associated with the problem.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeProblemObservations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProblemObservationsOutcomeCallable DescribeProblemObservationsCallable(const Model::DescribeProblemObservationsRequest& request) const;

        /**
         * <p>Describes the anomalies or errors associated with the problem.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeProblemObservations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProblemObservationsAsync(const Model::DescribeProblemObservationsRequest& request, const DescribeProblemObservationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the IDs of the applications that you are monitoring. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/ListApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationsOutcome ListApplications(const Model::ListApplicationsRequest& request) const;

        /**
         * <p>Lists the IDs of the applications that you are monitoring. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/ListApplications">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListApplicationsOutcomeCallable ListApplicationsCallable(const Model::ListApplicationsRequest& request) const;

        /**
         * <p>Lists the IDs of the applications that you are monitoring. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/ListApplications">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListApplicationsAsync(const Model::ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the auto-grouped, standalone, and custom components of the
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/ListComponents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListComponentsOutcome ListComponents(const Model::ListComponentsRequest& request) const;

        /**
         * <p>Lists the auto-grouped, standalone, and custom components of the
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/ListComponents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListComponentsOutcomeCallable ListComponentsCallable(const Model::ListComponentsRequest& request) const;

        /**
         * <p>Lists the auto-grouped, standalone, and custom components of the
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/ListComponents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListComponentsAsync(const Model::ListComponentsRequest& request, const ListComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the problems with your application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/ListProblems">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProblemsOutcome ListProblems(const Model::ListProblemsRequest& request) const;

        /**
         * <p>Lists the problems with your application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/ListProblems">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProblemsOutcomeCallable ListProblemsCallable(const Model::ListProblemsRequest& request) const;

        /**
         * <p>Lists the problems with your application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/ListProblems">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProblemsAsync(const Model::ListProblemsRequest& request, const ListProblemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the custom component name and/or the list of resources that make up
         * the component.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/UpdateComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateComponentOutcome UpdateComponent(const Model::UpdateComponentRequest& request) const;

        /**
         * <p>Updates the custom component name and/or the list of resources that make up
         * the component.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/UpdateComponent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateComponentOutcomeCallable UpdateComponentCallable(const Model::UpdateComponentRequest& request) const;

        /**
         * <p>Updates the custom component name and/or the list of resources that make up
         * the component.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/UpdateComponent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateComponentAsync(const Model::UpdateComponentRequest& request, const UpdateComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the monitoring configurations for the component. The configuration
         * input parameter is an escaped JSON of the configuration and should match the
         * schema of what is returned by
         * <code>DescribeComponentConfigurationRecommendation</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/UpdateComponentConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateComponentConfigurationOutcome UpdateComponentConfiguration(const Model::UpdateComponentConfigurationRequest& request) const;

        /**
         * <p>Updates the monitoring configurations for the component. The configuration
         * input parameter is an escaped JSON of the configuration and should match the
         * schema of what is returned by
         * <code>DescribeComponentConfigurationRecommendation</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/UpdateComponentConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateComponentConfigurationOutcomeCallable UpdateComponentConfigurationCallable(const Model::UpdateComponentConfigurationRequest& request) const;

        /**
         * <p>Updates the monitoring configurations for the component. The configuration
         * input parameter is an escaped JSON of the configuration and should match the
         * schema of what is returned by
         * <code>DescribeComponentConfigurationRecommendation</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/UpdateComponentConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateComponentConfigurationAsync(const Model::UpdateComponentConfigurationRequest& request, const UpdateComponentConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateApplicationAsyncHelper(const Model::CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateComponentAsyncHelper(const Model::CreateComponentRequest& request, const CreateComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApplicationAsyncHelper(const Model::DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteComponentAsyncHelper(const Model::DeleteComponentRequest& request, const DeleteComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeApplicationAsyncHelper(const Model::DescribeApplicationRequest& request, const DescribeApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeComponentAsyncHelper(const Model::DescribeComponentRequest& request, const DescribeComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeComponentConfigurationAsyncHelper(const Model::DescribeComponentConfigurationRequest& request, const DescribeComponentConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeComponentConfigurationRecommendationAsyncHelper(const Model::DescribeComponentConfigurationRecommendationRequest& request, const DescribeComponentConfigurationRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeObservationAsyncHelper(const Model::DescribeObservationRequest& request, const DescribeObservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProblemAsyncHelper(const Model::DescribeProblemRequest& request, const DescribeProblemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProblemObservationsAsyncHelper(const Model::DescribeProblemObservationsRequest& request, const DescribeProblemObservationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListApplicationsAsyncHelper(const Model::ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListComponentsAsyncHelper(const Model::ListComponentsRequest& request, const ListComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListProblemsAsyncHelper(const Model::ListProblemsRequest& request, const ListProblemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateComponentAsyncHelper(const Model::UpdateComponentRequest& request, const UpdateComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateComponentConfigurationAsyncHelper(const Model::UpdateComponentConfigurationRequest& request, const UpdateComponentConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ApplicationInsights
} // namespace Aws
