/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/application-autoscaling/ApplicationAutoScalingErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/application-autoscaling/ApplicationAutoScalingEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ApplicationAutoScalingClient header */
#include <aws/application-autoscaling/model/DeleteScalingPolicyResult.h>
#include <aws/application-autoscaling/model/DeleteScheduledActionResult.h>
#include <aws/application-autoscaling/model/DeregisterScalableTargetResult.h>
#include <aws/application-autoscaling/model/DescribeScalableTargetsResult.h>
#include <aws/application-autoscaling/model/DescribeScalingActivitiesResult.h>
#include <aws/application-autoscaling/model/DescribeScalingPoliciesResult.h>
#include <aws/application-autoscaling/model/DescribeScheduledActionsResult.h>
#include <aws/application-autoscaling/model/PutScalingPolicyResult.h>
#include <aws/application-autoscaling/model/PutScheduledActionResult.h>
#include <aws/application-autoscaling/model/RegisterScalableTargetResult.h>
/* End of service model headers required in ApplicationAutoScalingClient header */

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

  namespace ApplicationAutoScaling
  {
    using ApplicationAutoScalingClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ApplicationAutoScalingEndpointProviderBase = Aws::ApplicationAutoScaling::Endpoint::ApplicationAutoScalingEndpointProviderBase;
    using ApplicationAutoScalingEndpointProvider = Aws::ApplicationAutoScaling::Endpoint::ApplicationAutoScalingEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ApplicationAutoScalingClient header */
      class DeleteScalingPolicyRequest;
      class DeleteScheduledActionRequest;
      class DeregisterScalableTargetRequest;
      class DescribeScalableTargetsRequest;
      class DescribeScalingActivitiesRequest;
      class DescribeScalingPoliciesRequest;
      class DescribeScheduledActionsRequest;
      class PutScalingPolicyRequest;
      class PutScheduledActionRequest;
      class RegisterScalableTargetRequest;
      /* End of service model forward declarations required in ApplicationAutoScalingClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<DeleteScalingPolicyResult, ApplicationAutoScalingError> DeleteScalingPolicyOutcome;
      typedef Aws::Utils::Outcome<DeleteScheduledActionResult, ApplicationAutoScalingError> DeleteScheduledActionOutcome;
      typedef Aws::Utils::Outcome<DeregisterScalableTargetResult, ApplicationAutoScalingError> DeregisterScalableTargetOutcome;
      typedef Aws::Utils::Outcome<DescribeScalableTargetsResult, ApplicationAutoScalingError> DescribeScalableTargetsOutcome;
      typedef Aws::Utils::Outcome<DescribeScalingActivitiesResult, ApplicationAutoScalingError> DescribeScalingActivitiesOutcome;
      typedef Aws::Utils::Outcome<DescribeScalingPoliciesResult, ApplicationAutoScalingError> DescribeScalingPoliciesOutcome;
      typedef Aws::Utils::Outcome<DescribeScheduledActionsResult, ApplicationAutoScalingError> DescribeScheduledActionsOutcome;
      typedef Aws::Utils::Outcome<PutScalingPolicyResult, ApplicationAutoScalingError> PutScalingPolicyOutcome;
      typedef Aws::Utils::Outcome<PutScheduledActionResult, ApplicationAutoScalingError> PutScheduledActionOutcome;
      typedef Aws::Utils::Outcome<RegisterScalableTargetResult, ApplicationAutoScalingError> RegisterScalableTargetOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<DeleteScalingPolicyOutcome> DeleteScalingPolicyOutcomeCallable;
      typedef std::future<DeleteScheduledActionOutcome> DeleteScheduledActionOutcomeCallable;
      typedef std::future<DeregisterScalableTargetOutcome> DeregisterScalableTargetOutcomeCallable;
      typedef std::future<DescribeScalableTargetsOutcome> DescribeScalableTargetsOutcomeCallable;
      typedef std::future<DescribeScalingActivitiesOutcome> DescribeScalingActivitiesOutcomeCallable;
      typedef std::future<DescribeScalingPoliciesOutcome> DescribeScalingPoliciesOutcomeCallable;
      typedef std::future<DescribeScheduledActionsOutcome> DescribeScheduledActionsOutcomeCallable;
      typedef std::future<PutScalingPolicyOutcome> PutScalingPolicyOutcomeCallable;
      typedef std::future<PutScheduledActionOutcome> PutScheduledActionOutcomeCallable;
      typedef std::future<RegisterScalableTargetOutcome> RegisterScalableTargetOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ApplicationAutoScalingClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ApplicationAutoScalingClient*, const Model::DeleteScalingPolicyRequest&, const Model::DeleteScalingPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteScalingPolicyResponseReceivedHandler;
    typedef std::function<void(const ApplicationAutoScalingClient*, const Model::DeleteScheduledActionRequest&, const Model::DeleteScheduledActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteScheduledActionResponseReceivedHandler;
    typedef std::function<void(const ApplicationAutoScalingClient*, const Model::DeregisterScalableTargetRequest&, const Model::DeregisterScalableTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterScalableTargetResponseReceivedHandler;
    typedef std::function<void(const ApplicationAutoScalingClient*, const Model::DescribeScalableTargetsRequest&, const Model::DescribeScalableTargetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeScalableTargetsResponseReceivedHandler;
    typedef std::function<void(const ApplicationAutoScalingClient*, const Model::DescribeScalingActivitiesRequest&, const Model::DescribeScalingActivitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeScalingActivitiesResponseReceivedHandler;
    typedef std::function<void(const ApplicationAutoScalingClient*, const Model::DescribeScalingPoliciesRequest&, const Model::DescribeScalingPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeScalingPoliciesResponseReceivedHandler;
    typedef std::function<void(const ApplicationAutoScalingClient*, const Model::DescribeScheduledActionsRequest&, const Model::DescribeScheduledActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeScheduledActionsResponseReceivedHandler;
    typedef std::function<void(const ApplicationAutoScalingClient*, const Model::PutScalingPolicyRequest&, const Model::PutScalingPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutScalingPolicyResponseReceivedHandler;
    typedef std::function<void(const ApplicationAutoScalingClient*, const Model::PutScheduledActionRequest&, const Model::PutScheduledActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutScheduledActionResponseReceivedHandler;
    typedef std::function<void(const ApplicationAutoScalingClient*, const Model::RegisterScalableTargetRequest&, const Model::RegisterScalableTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterScalableTargetResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ApplicationAutoScaling
} // namespace Aws
