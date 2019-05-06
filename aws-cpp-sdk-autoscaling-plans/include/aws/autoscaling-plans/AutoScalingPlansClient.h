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
#include <aws/autoscaling-plans/AutoScalingPlans_EXPORTS.h>
#include <aws/autoscaling-plans/AutoScalingPlansErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/autoscaling-plans/model/CreateScalingPlanResult.h>
#include <aws/autoscaling-plans/model/DeleteScalingPlanResult.h>
#include <aws/autoscaling-plans/model/DescribeScalingPlanResourcesResult.h>
#include <aws/autoscaling-plans/model/DescribeScalingPlansResult.h>
#include <aws/autoscaling-plans/model/GetScalingPlanResourceForecastDataResult.h>
#include <aws/autoscaling-plans/model/UpdateScalingPlanResult.h>
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

namespace AutoScalingPlans
{

namespace Model
{
        class CreateScalingPlanRequest;
        class DeleteScalingPlanRequest;
        class DescribeScalingPlanResourcesRequest;
        class DescribeScalingPlansRequest;
        class GetScalingPlanResourceForecastDataRequest;
        class UpdateScalingPlanRequest;

        typedef Aws::Utils::Outcome<CreateScalingPlanResult, Aws::Client::AWSError<AutoScalingPlansErrors>> CreateScalingPlanOutcome;
        typedef Aws::Utils::Outcome<DeleteScalingPlanResult, Aws::Client::AWSError<AutoScalingPlansErrors>> DeleteScalingPlanOutcome;
        typedef Aws::Utils::Outcome<DescribeScalingPlanResourcesResult, Aws::Client::AWSError<AutoScalingPlansErrors>> DescribeScalingPlanResourcesOutcome;
        typedef Aws::Utils::Outcome<DescribeScalingPlansResult, Aws::Client::AWSError<AutoScalingPlansErrors>> DescribeScalingPlansOutcome;
        typedef Aws::Utils::Outcome<GetScalingPlanResourceForecastDataResult, Aws::Client::AWSError<AutoScalingPlansErrors>> GetScalingPlanResourceForecastDataOutcome;
        typedef Aws::Utils::Outcome<UpdateScalingPlanResult, Aws::Client::AWSError<AutoScalingPlansErrors>> UpdateScalingPlanOutcome;

        typedef std::future<CreateScalingPlanOutcome> CreateScalingPlanOutcomeCallable;
        typedef std::future<DeleteScalingPlanOutcome> DeleteScalingPlanOutcomeCallable;
        typedef std::future<DescribeScalingPlanResourcesOutcome> DescribeScalingPlanResourcesOutcomeCallable;
        typedef std::future<DescribeScalingPlansOutcome> DescribeScalingPlansOutcomeCallable;
        typedef std::future<GetScalingPlanResourceForecastDataOutcome> GetScalingPlanResourceForecastDataOutcomeCallable;
        typedef std::future<UpdateScalingPlanOutcome> UpdateScalingPlanOutcomeCallable;
} // namespace Model

  class AutoScalingPlansClient;

    typedef std::function<void(const AutoScalingPlansClient*, const Model::CreateScalingPlanRequest&, const Model::CreateScalingPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateScalingPlanResponseReceivedHandler;
    typedef std::function<void(const AutoScalingPlansClient*, const Model::DeleteScalingPlanRequest&, const Model::DeleteScalingPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteScalingPlanResponseReceivedHandler;
    typedef std::function<void(const AutoScalingPlansClient*, const Model::DescribeScalingPlanResourcesRequest&, const Model::DescribeScalingPlanResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeScalingPlanResourcesResponseReceivedHandler;
    typedef std::function<void(const AutoScalingPlansClient*, const Model::DescribeScalingPlansRequest&, const Model::DescribeScalingPlansOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeScalingPlansResponseReceivedHandler;
    typedef std::function<void(const AutoScalingPlansClient*, const Model::GetScalingPlanResourceForecastDataRequest&, const Model::GetScalingPlanResourceForecastDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetScalingPlanResourceForecastDataResponseReceivedHandler;
    typedef std::function<void(const AutoScalingPlansClient*, const Model::UpdateScalingPlanRequest&, const Model::UpdateScalingPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateScalingPlanResponseReceivedHandler;

  /**
   * <fullname>AWS Auto Scaling</fullname> <p>Use AWS Auto Scaling to quickly
   * discover all the scalable AWS resources for your application and configure
   * dynamic scaling and predictive scaling for your resources using scaling plans.
   * Use this service in conjunction with the Amazon EC2 Auto Scaling, Application
   * Auto Scaling, Amazon CloudWatch, and AWS CloudFormation services. </p>
   * <p>Currently, predictive scaling is only available for Amazon EC2 Auto Scaling
   * groups.</p> <p>For more information about AWS Auto Scaling, including
   * information about granting IAM users required permissions for AWS Auto Scaling
   * actions, see the <a
   * href="https://docs.aws.amazon.com/autoscaling/plans/userguide/what-is-aws-auto-scaling.html">AWS
   * Auto Scaling User Guide</a>.</p>
   */
  class AWS_AUTOSCALINGPLANS_API AutoScalingPlansClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AutoScalingPlansClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AutoScalingPlansClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AutoScalingPlansClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~AutoScalingPlansClient();

        inline virtual const char* GetServiceClientName() const override { return "Auto Scaling Plans"; }


        /**
         * <p>Creates a scaling plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-plans-2018-01-06/CreateScalingPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateScalingPlanOutcome CreateScalingPlan(const Model::CreateScalingPlanRequest& request) const;

        /**
         * <p>Creates a scaling plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-plans-2018-01-06/CreateScalingPlan">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateScalingPlanOutcomeCallable CreateScalingPlanCallable(const Model::CreateScalingPlanRequest& request) const;

        /**
         * <p>Creates a scaling plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-plans-2018-01-06/CreateScalingPlan">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateScalingPlanAsync(const Model::CreateScalingPlanRequest& request, const CreateScalingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified scaling plan.</p> <p>Deleting a scaling plan deletes
         * the underlying <a>ScalingInstruction</a> for all of the scalable resources that
         * are covered by the plan.</p> <p>If the plan has launched resources or has
         * scaling activities in progress, you must delete those resources
         * separately.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-plans-2018-01-06/DeleteScalingPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteScalingPlanOutcome DeleteScalingPlan(const Model::DeleteScalingPlanRequest& request) const;

        /**
         * <p>Deletes the specified scaling plan.</p> <p>Deleting a scaling plan deletes
         * the underlying <a>ScalingInstruction</a> for all of the scalable resources that
         * are covered by the plan.</p> <p>If the plan has launched resources or has
         * scaling activities in progress, you must delete those resources
         * separately.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-plans-2018-01-06/DeleteScalingPlan">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteScalingPlanOutcomeCallable DeleteScalingPlanCallable(const Model::DeleteScalingPlanRequest& request) const;

        /**
         * <p>Deletes the specified scaling plan.</p> <p>Deleting a scaling plan deletes
         * the underlying <a>ScalingInstruction</a> for all of the scalable resources that
         * are covered by the plan.</p> <p>If the plan has launched resources or has
         * scaling activities in progress, you must delete those resources
         * separately.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-plans-2018-01-06/DeleteScalingPlan">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteScalingPlanAsync(const Model::DeleteScalingPlanRequest& request, const DeleteScalingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the scalable resources in the specified scaling plan.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-plans-2018-01-06/DescribeScalingPlanResources">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScalingPlanResourcesOutcome DescribeScalingPlanResources(const Model::DescribeScalingPlanResourcesRequest& request) const;

        /**
         * <p>Describes the scalable resources in the specified scaling plan.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-plans-2018-01-06/DescribeScalingPlanResources">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeScalingPlanResourcesOutcomeCallable DescribeScalingPlanResourcesCallable(const Model::DescribeScalingPlanResourcesRequest& request) const;

        /**
         * <p>Describes the scalable resources in the specified scaling plan.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-plans-2018-01-06/DescribeScalingPlanResources">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeScalingPlanResourcesAsync(const Model::DescribeScalingPlanResourcesRequest& request, const DescribeScalingPlanResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your scaling plans.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-plans-2018-01-06/DescribeScalingPlans">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScalingPlansOutcome DescribeScalingPlans(const Model::DescribeScalingPlansRequest& request) const;

        /**
         * <p>Describes one or more of your scaling plans.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-plans-2018-01-06/DescribeScalingPlans">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeScalingPlansOutcomeCallable DescribeScalingPlansCallable(const Model::DescribeScalingPlansRequest& request) const;

        /**
         * <p>Describes one or more of your scaling plans.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-plans-2018-01-06/DescribeScalingPlans">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeScalingPlansAsync(const Model::DescribeScalingPlansRequest& request, const DescribeScalingPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the forecast data for a scalable resource.</p> <p>Capacity
         * forecasts are represented as predicted values, or data points, that are
         * calculated using historical data points from a specified CloudWatch load metric.
         * Data points are available for up to 56 days. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-plans-2018-01-06/GetScalingPlanResourceForecastData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetScalingPlanResourceForecastDataOutcome GetScalingPlanResourceForecastData(const Model::GetScalingPlanResourceForecastDataRequest& request) const;

        /**
         * <p>Retrieves the forecast data for a scalable resource.</p> <p>Capacity
         * forecasts are represented as predicted values, or data points, that are
         * calculated using historical data points from a specified CloudWatch load metric.
         * Data points are available for up to 56 days. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-plans-2018-01-06/GetScalingPlanResourceForecastData">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetScalingPlanResourceForecastDataOutcomeCallable GetScalingPlanResourceForecastDataCallable(const Model::GetScalingPlanResourceForecastDataRequest& request) const;

        /**
         * <p>Retrieves the forecast data for a scalable resource.</p> <p>Capacity
         * forecasts are represented as predicted values, or data points, that are
         * calculated using historical data points from a specified CloudWatch load metric.
         * Data points are available for up to 56 days. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-plans-2018-01-06/GetScalingPlanResourceForecastData">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetScalingPlanResourceForecastDataAsync(const Model::GetScalingPlanResourceForecastDataRequest& request, const GetScalingPlanResourceForecastDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified scaling plan.</p> <p>You cannot update a scaling plan
         * if it is in the process of being created, updated, or deleted.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-plans-2018-01-06/UpdateScalingPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateScalingPlanOutcome UpdateScalingPlan(const Model::UpdateScalingPlanRequest& request) const;

        /**
         * <p>Updates the specified scaling plan.</p> <p>You cannot update a scaling plan
         * if it is in the process of being created, updated, or deleted.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-plans-2018-01-06/UpdateScalingPlan">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateScalingPlanOutcomeCallable UpdateScalingPlanCallable(const Model::UpdateScalingPlanRequest& request) const;

        /**
         * <p>Updates the specified scaling plan.</p> <p>You cannot update a scaling plan
         * if it is in the process of being created, updated, or deleted.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-plans-2018-01-06/UpdateScalingPlan">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateScalingPlanAsync(const Model::UpdateScalingPlanRequest& request, const UpdateScalingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateScalingPlanAsyncHelper(const Model::CreateScalingPlanRequest& request, const CreateScalingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteScalingPlanAsyncHelper(const Model::DeleteScalingPlanRequest& request, const DeleteScalingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeScalingPlanResourcesAsyncHelper(const Model::DescribeScalingPlanResourcesRequest& request, const DescribeScalingPlanResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeScalingPlansAsyncHelper(const Model::DescribeScalingPlansRequest& request, const DescribeScalingPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetScalingPlanResourceForecastDataAsyncHelper(const Model::GetScalingPlanResourceForecastDataRequest& request, const GetScalingPlanResourceForecastDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateScalingPlanAsyncHelper(const Model::UpdateScalingPlanRequest& request, const UpdateScalingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace AutoScalingPlans
} // namespace Aws
