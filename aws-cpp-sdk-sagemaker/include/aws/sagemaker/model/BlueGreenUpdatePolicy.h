/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/TrafficRoutingConfig.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Update policy for a blue/green deployment. If this update policy is
   * specified, SageMaker creates a new fleet during the deployment while maintaining
   * the old fleet. SageMaker flips traffic to the new fleet according to the
   * specified traffic routing configuration. Only one update policy should be used
   * in the deployment configuration. If no update policy is specified, SageMaker
   * uses a blue/green deployment strategy with all at once traffic shifting by
   * default.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/BlueGreenUpdatePolicy">AWS
   * API Reference</a></p>
   */
  class BlueGreenUpdatePolicy
  {
  public:
    AWS_SAGEMAKER_API BlueGreenUpdatePolicy();
    AWS_SAGEMAKER_API BlueGreenUpdatePolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API BlueGreenUpdatePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines the traffic routing strategy to shift traffic from the old fleet to
     * the new fleet during an endpoint deployment.</p>
     */
    inline const TrafficRoutingConfig& GetTrafficRoutingConfiguration() const{ return m_trafficRoutingConfiguration; }

    /**
     * <p>Defines the traffic routing strategy to shift traffic from the old fleet to
     * the new fleet during an endpoint deployment.</p>
     */
    inline bool TrafficRoutingConfigurationHasBeenSet() const { return m_trafficRoutingConfigurationHasBeenSet; }

    /**
     * <p>Defines the traffic routing strategy to shift traffic from the old fleet to
     * the new fleet during an endpoint deployment.</p>
     */
    inline void SetTrafficRoutingConfiguration(const TrafficRoutingConfig& value) { m_trafficRoutingConfigurationHasBeenSet = true; m_trafficRoutingConfiguration = value; }

    /**
     * <p>Defines the traffic routing strategy to shift traffic from the old fleet to
     * the new fleet during an endpoint deployment.</p>
     */
    inline void SetTrafficRoutingConfiguration(TrafficRoutingConfig&& value) { m_trafficRoutingConfigurationHasBeenSet = true; m_trafficRoutingConfiguration = std::move(value); }

    /**
     * <p>Defines the traffic routing strategy to shift traffic from the old fleet to
     * the new fleet during an endpoint deployment.</p>
     */
    inline BlueGreenUpdatePolicy& WithTrafficRoutingConfiguration(const TrafficRoutingConfig& value) { SetTrafficRoutingConfiguration(value); return *this;}

    /**
     * <p>Defines the traffic routing strategy to shift traffic from the old fleet to
     * the new fleet during an endpoint deployment.</p>
     */
    inline BlueGreenUpdatePolicy& WithTrafficRoutingConfiguration(TrafficRoutingConfig&& value) { SetTrafficRoutingConfiguration(std::move(value)); return *this;}


    /**
     * <p>Additional waiting time in seconds after the completion of an endpoint
     * deployment before terminating the old endpoint fleet. Default is 0.</p>
     */
    inline int GetTerminationWaitInSeconds() const{ return m_terminationWaitInSeconds; }

    /**
     * <p>Additional waiting time in seconds after the completion of an endpoint
     * deployment before terminating the old endpoint fleet. Default is 0.</p>
     */
    inline bool TerminationWaitInSecondsHasBeenSet() const { return m_terminationWaitInSecondsHasBeenSet; }

    /**
     * <p>Additional waiting time in seconds after the completion of an endpoint
     * deployment before terminating the old endpoint fleet. Default is 0.</p>
     */
    inline void SetTerminationWaitInSeconds(int value) { m_terminationWaitInSecondsHasBeenSet = true; m_terminationWaitInSeconds = value; }

    /**
     * <p>Additional waiting time in seconds after the completion of an endpoint
     * deployment before terminating the old endpoint fleet. Default is 0.</p>
     */
    inline BlueGreenUpdatePolicy& WithTerminationWaitInSeconds(int value) { SetTerminationWaitInSeconds(value); return *this;}


    /**
     * <p>Maximum execution timeout for the deployment. Note that the timeout value
     * should be larger than the total waiting time specified in
     * <code>TerminationWaitInSeconds</code> and
     * <code>WaitIntervalInSeconds</code>.</p>
     */
    inline int GetMaximumExecutionTimeoutInSeconds() const{ return m_maximumExecutionTimeoutInSeconds; }

    /**
     * <p>Maximum execution timeout for the deployment. Note that the timeout value
     * should be larger than the total waiting time specified in
     * <code>TerminationWaitInSeconds</code> and
     * <code>WaitIntervalInSeconds</code>.</p>
     */
    inline bool MaximumExecutionTimeoutInSecondsHasBeenSet() const { return m_maximumExecutionTimeoutInSecondsHasBeenSet; }

    /**
     * <p>Maximum execution timeout for the deployment. Note that the timeout value
     * should be larger than the total waiting time specified in
     * <code>TerminationWaitInSeconds</code> and
     * <code>WaitIntervalInSeconds</code>.</p>
     */
    inline void SetMaximumExecutionTimeoutInSeconds(int value) { m_maximumExecutionTimeoutInSecondsHasBeenSet = true; m_maximumExecutionTimeoutInSeconds = value; }

    /**
     * <p>Maximum execution timeout for the deployment. Note that the timeout value
     * should be larger than the total waiting time specified in
     * <code>TerminationWaitInSeconds</code> and
     * <code>WaitIntervalInSeconds</code>.</p>
     */
    inline BlueGreenUpdatePolicy& WithMaximumExecutionTimeoutInSeconds(int value) { SetMaximumExecutionTimeoutInSeconds(value); return *this;}

  private:

    TrafficRoutingConfig m_trafficRoutingConfiguration;
    bool m_trafficRoutingConfigurationHasBeenSet = false;

    int m_terminationWaitInSeconds;
    bool m_terminationWaitInSecondsHasBeenSet = false;

    int m_maximumExecutionTimeoutInSeconds;
    bool m_maximumExecutionTimeoutInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
