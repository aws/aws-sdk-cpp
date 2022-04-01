/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/application-insights/model/CreateLogPatternResult.h>
#include <aws/application-insights/model/DeleteApplicationResult.h>
#include <aws/application-insights/model/DeleteComponentResult.h>
#include <aws/application-insights/model/DeleteLogPatternResult.h>
#include <aws/application-insights/model/DescribeApplicationResult.h>
#include <aws/application-insights/model/DescribeComponentResult.h>
#include <aws/application-insights/model/DescribeComponentConfigurationResult.h>
#include <aws/application-insights/model/DescribeComponentConfigurationRecommendationResult.h>
#include <aws/application-insights/model/DescribeLogPatternResult.h>
#include <aws/application-insights/model/DescribeObservationResult.h>
#include <aws/application-insights/model/DescribeProblemResult.h>
#include <aws/application-insights/model/DescribeProblemObservationsResult.h>
#include <aws/application-insights/model/ListApplicationsResult.h>
#include <aws/application-insights/model/ListComponentsResult.h>
#include <aws/application-insights/model/ListConfigurationHistoryResult.h>
#include <aws/application-insights/model/ListLogPatternSetsResult.h>
#include <aws/application-insights/model/ListLogPatternsResult.h>
#include <aws/application-insights/model/ListProblemsResult.h>
#include <aws/application-insights/model/ListTagsForResourceResult.h>
#include <aws/application-insights/model/TagResourceResult.h>
#include <aws/application-insights/model/UntagResourceResult.h>
#include <aws/application-insights/model/UpdateApplicationResult.h>
#include <aws/application-insights/model/UpdateComponentResult.h>
#include <aws/application-insights/model/UpdateComponentConfigurationResult.h>
#include <aws/application-insights/model/UpdateLogPatternResult.h>
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
        class CreateLogPatternRequest;
        class DeleteApplicationRequest;
        class DeleteComponentRequest;
        class DeleteLogPatternRequest;
        class DescribeApplicationRequest;
        class DescribeComponentRequest;
        class DescribeComponentConfigurationRequest;
        class DescribeComponentConfigurationRecommendationRequest;
        class DescribeLogPatternRequest;
        class DescribeObservationRequest;
        class DescribeProblemRequest;
        class DescribeProblemObservationsRequest;
        class ListApplicationsRequest;
        class ListComponentsRequest;
        class ListConfigurationHistoryRequest;
        class ListLogPatternSetsRequest;
        class ListLogPatternsRequest;
        class ListProblemsRequest;
        class ListTagsForResourceRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateApplicationRequest;
        class UpdateComponentRequest;
        class UpdateComponentConfigurationRequest;
        class UpdateLogPatternRequest;

        typedef Aws::Utils::Outcome<CreateApplicationResult, ApplicationInsightsError> CreateApplicationOutcome;
        typedef Aws::Utils::Outcome<CreateComponentResult, ApplicationInsightsError> CreateComponentOutcome;
        typedef Aws::Utils::Outcome<CreateLogPatternResult, ApplicationInsightsError> CreateLogPatternOutcome;
        typedef Aws::Utils::Outcome<DeleteApplicationResult, ApplicationInsightsError> DeleteApplicationOutcome;
        typedef Aws::Utils::Outcome<DeleteComponentResult, ApplicationInsightsError> DeleteComponentOutcome;
        typedef Aws::Utils::Outcome<DeleteLogPatternResult, ApplicationInsightsError> DeleteLogPatternOutcome;
        typedef Aws::Utils::Outcome<DescribeApplicationResult, ApplicationInsightsError> DescribeApplicationOutcome;
        typedef Aws::Utils::Outcome<DescribeComponentResult, ApplicationInsightsError> DescribeComponentOutcome;
        typedef Aws::Utils::Outcome<DescribeComponentConfigurationResult, ApplicationInsightsError> DescribeComponentConfigurationOutcome;
        typedef Aws::Utils::Outcome<DescribeComponentConfigurationRecommendationResult, ApplicationInsightsError> DescribeComponentConfigurationRecommendationOutcome;
        typedef Aws::Utils::Outcome<DescribeLogPatternResult, ApplicationInsightsError> DescribeLogPatternOutcome;
        typedef Aws::Utils::Outcome<DescribeObservationResult, ApplicationInsightsError> DescribeObservationOutcome;
        typedef Aws::Utils::Outcome<DescribeProblemResult, ApplicationInsightsError> DescribeProblemOutcome;
        typedef Aws::Utils::Outcome<DescribeProblemObservationsResult, ApplicationInsightsError> DescribeProblemObservationsOutcome;
        typedef Aws::Utils::Outcome<ListApplicationsResult, ApplicationInsightsError> ListApplicationsOutcome;
        typedef Aws::Utils::Outcome<ListComponentsResult, ApplicationInsightsError> ListComponentsOutcome;
        typedef Aws::Utils::Outcome<ListConfigurationHistoryResult, ApplicationInsightsError> ListConfigurationHistoryOutcome;
        typedef Aws::Utils::Outcome<ListLogPatternSetsResult, ApplicationInsightsError> ListLogPatternSetsOutcome;
        typedef Aws::Utils::Outcome<ListLogPatternsResult, ApplicationInsightsError> ListLogPatternsOutcome;
        typedef Aws::Utils::Outcome<ListProblemsResult, ApplicationInsightsError> ListProblemsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, ApplicationInsightsError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, ApplicationInsightsError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, ApplicationInsightsError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateApplicationResult, ApplicationInsightsError> UpdateApplicationOutcome;
        typedef Aws::Utils::Outcome<UpdateComponentResult, ApplicationInsightsError> UpdateComponentOutcome;
        typedef Aws::Utils::Outcome<UpdateComponentConfigurationResult, ApplicationInsightsError> UpdateComponentConfigurationOutcome;
        typedef Aws::Utils::Outcome<UpdateLogPatternResult, ApplicationInsightsError> UpdateLogPatternOutcome;

        typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
        typedef std::future<CreateComponentOutcome> CreateComponentOutcomeCallable;
        typedef std::future<CreateLogPatternOutcome> CreateLogPatternOutcomeCallable;
        typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
        typedef std::future<DeleteComponentOutcome> DeleteComponentOutcomeCallable;
        typedef std::future<DeleteLogPatternOutcome> DeleteLogPatternOutcomeCallable;
        typedef std::future<DescribeApplicationOutcome> DescribeApplicationOutcomeCallable;
        typedef std::future<DescribeComponentOutcome> DescribeComponentOutcomeCallable;
        typedef std::future<DescribeComponentConfigurationOutcome> DescribeComponentConfigurationOutcomeCallable;
        typedef std::future<DescribeComponentConfigurationRecommendationOutcome> DescribeComponentConfigurationRecommendationOutcomeCallable;
        typedef std::future<DescribeLogPatternOutcome> DescribeLogPatternOutcomeCallable;
        typedef std::future<DescribeObservationOutcome> DescribeObservationOutcomeCallable;
        typedef std::future<DescribeProblemOutcome> DescribeProblemOutcomeCallable;
        typedef std::future<DescribeProblemObservationsOutcome> DescribeProblemObservationsOutcomeCallable;
        typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
        typedef std::future<ListComponentsOutcome> ListComponentsOutcomeCallable;
        typedef std::future<ListConfigurationHistoryOutcome> ListConfigurationHistoryOutcomeCallable;
        typedef std::future<ListLogPatternSetsOutcome> ListLogPatternSetsOutcomeCallable;
        typedef std::future<ListLogPatternsOutcome> ListLogPatternsOutcomeCallable;
        typedef std::future<ListProblemsOutcome> ListProblemsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateApplicationOutcome> UpdateApplicationOutcomeCallable;
        typedef std::future<UpdateComponentOutcome> UpdateComponentOutcomeCallable;
        typedef std::future<UpdateComponentConfigurationOutcome> UpdateComponentConfigurationOutcomeCallable;
        typedef std::future<UpdateLogPatternOutcome> UpdateLogPatternOutcomeCallable;
} // namespace Model

  class ApplicationInsightsClient;

    typedef std::function<void(const ApplicationInsightsClient*, const Model::CreateApplicationRequest&, const Model::CreateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::CreateComponentRequest&, const Model::CreateComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateComponentResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::CreateLogPatternRequest&, const Model::CreateLogPatternOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLogPatternResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::DeleteApplicationRequest&, const Model::DeleteApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::DeleteComponentRequest&, const Model::DeleteComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteComponentResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::DeleteLogPatternRequest&, const Model::DeleteLogPatternOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLogPatternResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::DescribeApplicationRequest&, const Model::DescribeApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeApplicationResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::DescribeComponentRequest&, const Model::DescribeComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeComponentResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::DescribeComponentConfigurationRequest&, const Model::DescribeComponentConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeComponentConfigurationResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::DescribeComponentConfigurationRecommendationRequest&, const Model::DescribeComponentConfigurationRecommendationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeComponentConfigurationRecommendationResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::DescribeLogPatternRequest&, const Model::DescribeLogPatternOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLogPatternResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::DescribeObservationRequest&, const Model::DescribeObservationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeObservationResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::DescribeProblemRequest&, const Model::DescribeProblemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProblemResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::DescribeProblemObservationsRequest&, const Model::DescribeProblemObservationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProblemObservationsResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::ListApplicationsRequest&, const Model::ListApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationsResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::ListComponentsRequest&, const Model::ListComponentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListComponentsResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::ListConfigurationHistoryRequest&, const Model::ListConfigurationHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConfigurationHistoryResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::ListLogPatternSetsRequest&, const Model::ListLogPatternSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLogPatternSetsResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::ListLogPatternsRequest&, const Model::ListLogPatternsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLogPatternsResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::ListProblemsRequest&, const Model::ListProblemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProblemsResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::UpdateApplicationRequest&, const Model::UpdateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApplicationResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::UpdateComponentRequest&, const Model::UpdateComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateComponentResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::UpdateComponentConfigurationRequest&, const Model::UpdateComponentConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateComponentConfigurationResponseReceivedHandler;
    typedef std::function<void(const ApplicationInsightsClient*, const Model::UpdateLogPatternRequest&, const Model::UpdateLogPatternOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLogPatternResponseReceivedHandler;

  /**
   * <fullname>Amazon CloudWatch Application Insights</fullname> <p> Amazon
   * CloudWatch Application Insights is a service that helps you detect common
   * problems with your applications. It enables you to pinpoint the source of issues
   * in your applications (built with technologies such as Microsoft IIS, .NET, and
   * Microsoft SQL Server), by providing key insights into detected problems.</p>
   * <p>After you onboard your application, CloudWatch Application Insights
   * identifies, recommends, and sets up metrics and logs. It continuously analyzes
   * and correlates your metrics and logs for unusual behavior to surface actionable
   * problems with your application. For example, if your application is slow and
   * unresponsive and leading to HTTP 500 errors in your Application Load Balancer
   * (ALB), Application Insights informs you that a memory pressure problem with your
   * SQL Server database is occurring. It bases this analysis on impactful metrics
   * and log errors. </p>
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
         * <p>Adds an log pattern to a <code>LogPatternSet</code>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/CreateLogPattern">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLogPatternOutcome CreateLogPattern(const Model::CreateLogPatternRequest& request) const;

        /**
         * <p>Adds an log pattern to a <code>LogPatternSet</code>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/CreateLogPattern">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLogPatternOutcomeCallable CreateLogPatternCallable(const Model::CreateLogPatternRequest& request) const;

        /**
         * <p>Adds an log pattern to a <code>LogPatternSet</code>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/CreateLogPattern">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLogPatternAsync(const Model::CreateLogPatternRequest& request, const CreateLogPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Removes the specified log pattern from a
         * <code>LogPatternSet</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DeleteLogPattern">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLogPatternOutcome DeleteLogPattern(const Model::DeleteLogPatternRequest& request) const;

        /**
         * <p>Removes the specified log pattern from a
         * <code>LogPatternSet</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DeleteLogPattern">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLogPatternOutcomeCallable DeleteLogPatternCallable(const Model::DeleteLogPatternRequest& request) const;

        /**
         * <p>Removes the specified log pattern from a
         * <code>LogPatternSet</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DeleteLogPattern">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLogPatternAsync(const Model::DeleteLogPatternRequest& request, const DeleteLogPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Describe a specific log pattern from a
         * <code>LogPatternSet</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeLogPattern">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLogPatternOutcome DescribeLogPattern(const Model::DescribeLogPatternRequest& request) const;

        /**
         * <p>Describe a specific log pattern from a
         * <code>LogPatternSet</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeLogPattern">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLogPatternOutcomeCallable DescribeLogPatternCallable(const Model::DescribeLogPatternRequest& request) const;

        /**
         * <p>Describe a specific log pattern from a
         * <code>LogPatternSet</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeLogPattern">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLogPatternAsync(const Model::DescribeLogPatternRequest& request, const DescribeLogPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p> Lists the INFO, WARN, and ERROR events for periodic configuration updates
         * performed by Application Insights. Examples of events represented are: </p> <ul>
         * <li> <p>INFO: creating a new alarm or updating an alarm threshold.</p> </li>
         * <li> <p>WARN: alarm not created due to insufficient data points used to predict
         * thresholds.</p> </li> <li> <p>ERROR: alarm not created due to permission errors
         * or exceeding quotas. </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/ListConfigurationHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConfigurationHistoryOutcome ListConfigurationHistory(const Model::ListConfigurationHistoryRequest& request) const;

        /**
         * <p> Lists the INFO, WARN, and ERROR events for periodic configuration updates
         * performed by Application Insights. Examples of events represented are: </p> <ul>
         * <li> <p>INFO: creating a new alarm or updating an alarm threshold.</p> </li>
         * <li> <p>WARN: alarm not created due to insufficient data points used to predict
         * thresholds.</p> </li> <li> <p>ERROR: alarm not created due to permission errors
         * or exceeding quotas. </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/ListConfigurationHistory">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListConfigurationHistoryOutcomeCallable ListConfigurationHistoryCallable(const Model::ListConfigurationHistoryRequest& request) const;

        /**
         * <p> Lists the INFO, WARN, and ERROR events for periodic configuration updates
         * performed by Application Insights. Examples of events represented are: </p> <ul>
         * <li> <p>INFO: creating a new alarm or updating an alarm threshold.</p> </li>
         * <li> <p>WARN: alarm not created due to insufficient data points used to predict
         * thresholds.</p> </li> <li> <p>ERROR: alarm not created due to permission errors
         * or exceeding quotas. </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/ListConfigurationHistory">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListConfigurationHistoryAsync(const Model::ListConfigurationHistoryRequest& request, const ListConfigurationHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the log pattern sets in the specific application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/ListLogPatternSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLogPatternSetsOutcome ListLogPatternSets(const Model::ListLogPatternSetsRequest& request) const;

        /**
         * <p>Lists the log pattern sets in the specific application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/ListLogPatternSets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLogPatternSetsOutcomeCallable ListLogPatternSetsCallable(const Model::ListLogPatternSetsRequest& request) const;

        /**
         * <p>Lists the log pattern sets in the specific application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/ListLogPatternSets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLogPatternSetsAsync(const Model::ListLogPatternSetsRequest& request, const ListLogPatternSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the log patterns in the specific log
         * <code>LogPatternSet</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/ListLogPatterns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLogPatternsOutcome ListLogPatterns(const Model::ListLogPatternsRequest& request) const;

        /**
         * <p>Lists the log patterns in the specific log
         * <code>LogPatternSet</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/ListLogPatterns">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLogPatternsOutcomeCallable ListLogPatternsCallable(const Model::ListLogPatternsRequest& request) const;

        /**
         * <p>Lists the log patterns in the specific log
         * <code>LogPatternSet</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/ListLogPatterns">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLogPatternsAsync(const Model::ListLogPatternsRequest& request, const ListLogPatternsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Retrieve a list of the tags (keys and values) that are associated with a
         * specified application. A <i>tag</i> is a label that you optionally define and
         * associate with an application. Each tag consists of a required <i>tag key</i>
         * and an optional associated <i>tag value</i>. A tag key is a general label that
         * acts as a category for more specific tag values. A tag value acts as a
         * descriptor within a tag key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Retrieve a list of the tags (keys and values) that are associated with a
         * specified application. A <i>tag</i> is a label that you optionally define and
         * associate with an application. Each tag consists of a required <i>tag key</i>
         * and an optional associated <i>tag value</i>. A tag key is a general label that
         * acts as a category for more specific tag values. A tag value acts as a
         * descriptor within a tag key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Retrieve a list of the tags (keys and values) that are associated with a
         * specified application. A <i>tag</i> is a label that you optionally define and
         * associate with an application. Each tag consists of a required <i>tag key</i>
         * and an optional associated <i>tag value</i>. A tag key is a general label that
         * acts as a category for more specific tag values. A tag value acts as a
         * descriptor within a tag key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Add one or more tags (keys and values) to a specified application. A
         * <i>tag</i> is a label that you optionally define and associate with an
         * application. Tags can help you categorize and manage application in different
         * ways, such as by purpose, owner, environment, or other criteria. </p> <p>Each
         * tag consists of a required <i>tag key</i> and an associated <i>tag value</i>,
         * both of which you define. A tag key is a general label that acts as a category
         * for more specific tag values. A tag value acts as a descriptor within a tag
         * key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Add one or more tags (keys and values) to a specified application. A
         * <i>tag</i> is a label that you optionally define and associate with an
         * application. Tags can help you categorize and manage application in different
         * ways, such as by purpose, owner, environment, or other criteria. </p> <p>Each
         * tag consists of a required <i>tag key</i> and an associated <i>tag value</i>,
         * both of which you define. A tag key is a general label that acts as a category
         * for more specific tag values. A tag value acts as a descriptor within a tag
         * key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Add one or more tags (keys and values) to a specified application. A
         * <i>tag</i> is a label that you optionally define and associate with an
         * application. Tags can help you categorize and manage application in different
         * ways, such as by purpose, owner, environment, or other criteria. </p> <p>Each
         * tag consists of a required <i>tag key</i> and an associated <i>tag value</i>,
         * both of which you define. A tag key is a general label that acts as a category
         * for more specific tag values. A tag value acts as a descriptor within a tag
         * key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Remove one or more tags (keys and values) from a specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Remove one or more tags (keys and values) from a specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Remove one or more tags (keys and values) from a specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/UpdateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;

        /**
         * <p>Updates the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/UpdateApplication">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApplicationOutcomeCallable UpdateApplicationCallable(const Model::UpdateApplicationRequest& request) const;

        /**
         * <p>Updates the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/UpdateApplication">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApplicationAsync(const Model::UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <code>DescribeComponentConfigurationRecommendation</code>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/UpdateComponentConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateComponentConfigurationOutcome UpdateComponentConfiguration(const Model::UpdateComponentConfigurationRequest& request) const;

        /**
         * <p>Updates the monitoring configurations for the component. The configuration
         * input parameter is an escaped JSON of the configuration and should match the
         * schema of what is returned by
         * <code>DescribeComponentConfigurationRecommendation</code>. </p><p><h3>See
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
         * <code>DescribeComponentConfigurationRecommendation</code>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/UpdateComponentConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateComponentConfigurationAsync(const Model::UpdateComponentConfigurationRequest& request, const UpdateComponentConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a log pattern to a <code>LogPatternSet</code>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/UpdateLogPattern">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLogPatternOutcome UpdateLogPattern(const Model::UpdateLogPatternRequest& request) const;

        /**
         * <p>Adds a log pattern to a <code>LogPatternSet</code>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/UpdateLogPattern">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLogPatternOutcomeCallable UpdateLogPatternCallable(const Model::UpdateLogPatternRequest& request) const;

        /**
         * <p>Adds a log pattern to a <code>LogPatternSet</code>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/UpdateLogPattern">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLogPatternAsync(const Model::UpdateLogPatternRequest& request, const UpdateLogPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateApplicationAsyncHelper(const Model::CreateApplicationRequest& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateComponentAsyncHelper(const Model::CreateComponentRequest& request, const CreateComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLogPatternAsyncHelper(const Model::CreateLogPatternRequest& request, const CreateLogPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApplicationAsyncHelper(const Model::DeleteApplicationRequest& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteComponentAsyncHelper(const Model::DeleteComponentRequest& request, const DeleteComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLogPatternAsyncHelper(const Model::DeleteLogPatternRequest& request, const DeleteLogPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeApplicationAsyncHelper(const Model::DescribeApplicationRequest& request, const DescribeApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeComponentAsyncHelper(const Model::DescribeComponentRequest& request, const DescribeComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeComponentConfigurationAsyncHelper(const Model::DescribeComponentConfigurationRequest& request, const DescribeComponentConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeComponentConfigurationRecommendationAsyncHelper(const Model::DescribeComponentConfigurationRecommendationRequest& request, const DescribeComponentConfigurationRecommendationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLogPatternAsyncHelper(const Model::DescribeLogPatternRequest& request, const DescribeLogPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeObservationAsyncHelper(const Model::DescribeObservationRequest& request, const DescribeObservationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProblemAsyncHelper(const Model::DescribeProblemRequest& request, const DescribeProblemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProblemObservationsAsyncHelper(const Model::DescribeProblemObservationsRequest& request, const DescribeProblemObservationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListApplicationsAsyncHelper(const Model::ListApplicationsRequest& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListComponentsAsyncHelper(const Model::ListComponentsRequest& request, const ListComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListConfigurationHistoryAsyncHelper(const Model::ListConfigurationHistoryRequest& request, const ListConfigurationHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLogPatternSetsAsyncHelper(const Model::ListLogPatternSetsRequest& request, const ListLogPatternSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLogPatternsAsyncHelper(const Model::ListLogPatternsRequest& request, const ListLogPatternsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListProblemsAsyncHelper(const Model::ListProblemsRequest& request, const ListProblemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateApplicationAsyncHelper(const Model::UpdateApplicationRequest& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateComponentAsyncHelper(const Model::UpdateComponentRequest& request, const UpdateComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateComponentConfigurationAsyncHelper(const Model::UpdateComponentConfigurationRequest& request, const UpdateComponentConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateLogPatternAsyncHelper(const Model::UpdateLogPatternRequest& request, const UpdateLogPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ApplicationInsights
} // namespace Aws
