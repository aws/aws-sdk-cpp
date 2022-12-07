/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling-plans/AutoScalingPlans_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/autoscaling-plans/AutoScalingPlansServiceClientModel.h>

namespace Aws
{
namespace AutoScalingPlans
{
  /**
   * <fullname>AWS Auto Scaling</fullname> <p>Use AWS Auto Scaling to create scaling
   * plans for your applications to automatically scale your scalable AWS resources.
   * </p> <p> <b>API Summary</b> </p> <p>You can use the AWS Auto Scaling service API
   * to accomplish the following tasks:</p> <ul> <li> <p>Create and manage scaling
   * plans</p> </li> <li> <p>Define target tracking scaling policies to dynamically
   * scale your resources based on utilization</p> </li> <li> <p>Scale Amazon EC2
   * Auto Scaling groups using predictive scaling and dynamic scaling to scale your
   * Amazon EC2 capacity faster</p> </li> <li> <p>Set minimum and maximum capacity
   * limits</p> </li> <li> <p>Retrieve information on existing scaling plans</p>
   * </li> <li> <p>Access current forecast data and historical forecast data for up
   * to 56 days previous</p> </li> </ul> <p>To learn more about AWS Auto Scaling,
   * including information about granting IAM users required permissions for AWS Auto
   * Scaling actions, see the <a
   * href="https://docs.aws.amazon.com/autoscaling/plans/userguide/what-is-aws-auto-scaling.html">AWS
   * Auto Scaling User Guide</a>. </p>
   */
  class AWS_AUTOSCALINGPLANS_API AutoScalingPlansClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<AutoScalingPlansClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AutoScalingPlansClient(const Aws::AutoScalingPlans::AutoScalingPlansClientConfiguration& clientConfiguration = Aws::AutoScalingPlans::AutoScalingPlansClientConfiguration(),
                               std::shared_ptr<AutoScalingPlansEndpointProviderBase> endpointProvider = Aws::MakeShared<AutoScalingPlansEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AutoScalingPlansClient(const Aws::Auth::AWSCredentials& credentials,
                               std::shared_ptr<AutoScalingPlansEndpointProviderBase> endpointProvider = Aws::MakeShared<AutoScalingPlansEndpointProvider>(ALLOCATION_TAG),
                               const Aws::AutoScalingPlans::AutoScalingPlansClientConfiguration& clientConfiguration = Aws::AutoScalingPlans::AutoScalingPlansClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AutoScalingPlansClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<AutoScalingPlansEndpointProviderBase> endpointProvider = Aws::MakeShared<AutoScalingPlansEndpointProvider>(ALLOCATION_TAG),
                               const Aws::AutoScalingPlans::AutoScalingPlansClientConfiguration& clientConfiguration = Aws::AutoScalingPlans::AutoScalingPlansClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AutoScalingPlansClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AutoScalingPlansClient(const Aws::Auth::AWSCredentials& credentials,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AutoScalingPlansClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~AutoScalingPlansClient();

        /**
         * <p>Creates a scaling plan. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-plans-2018-01-06/CreateScalingPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateScalingPlanOutcome CreateScalingPlan(const Model::CreateScalingPlanRequest& request) const;

        /**
         * A Callable wrapper for CreateScalingPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateScalingPlanOutcomeCallable CreateScalingPlanCallable(const Model::CreateScalingPlanRequest& request) const;

        /**
         * An Async wrapper for CreateScalingPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DeleteScalingPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteScalingPlanOutcomeCallable DeleteScalingPlanCallable(const Model::DeleteScalingPlanRequest& request) const;

        /**
         * An Async wrapper for DeleteScalingPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeScalingPlanResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeScalingPlanResourcesOutcomeCallable DescribeScalingPlanResourcesCallable(const Model::DescribeScalingPlanResourcesRequest& request) const;

        /**
         * An Async wrapper for DescribeScalingPlanResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeScalingPlanResourcesAsync(const Model::DescribeScalingPlanResourcesRequest& request, const DescribeScalingPlanResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more of your scaling plans.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-plans-2018-01-06/DescribeScalingPlans">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScalingPlansOutcome DescribeScalingPlans(const Model::DescribeScalingPlansRequest& request) const;

        /**
         * A Callable wrapper for DescribeScalingPlans that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeScalingPlansOutcomeCallable DescribeScalingPlansCallable(const Model::DescribeScalingPlansRequest& request) const;

        /**
         * An Async wrapper for DescribeScalingPlans that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for GetScalingPlanResourceForecastData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetScalingPlanResourceForecastDataOutcomeCallable GetScalingPlanResourceForecastDataCallable(const Model::GetScalingPlanResourceForecastDataRequest& request) const;

        /**
         * An Async wrapper for GetScalingPlanResourceForecastData that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for UpdateScalingPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateScalingPlanOutcomeCallable UpdateScalingPlanCallable(const Model::UpdateScalingPlanRequest& request) const;

        /**
         * An Async wrapper for UpdateScalingPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateScalingPlanAsync(const Model::UpdateScalingPlanRequest& request, const UpdateScalingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<AutoScalingPlansEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<AutoScalingPlansClient>;
      void init(const AutoScalingPlansClientConfiguration& clientConfiguration);

      AutoScalingPlansClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<AutoScalingPlansEndpointProviderBase> m_endpointProvider;
  };

} // namespace AutoScalingPlans
} // namespace Aws
