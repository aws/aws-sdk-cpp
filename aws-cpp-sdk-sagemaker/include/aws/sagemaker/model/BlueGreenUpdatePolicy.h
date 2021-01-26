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
   * <p>Currently, the <code>BlueGreenUpdatePolicy</code> API is not
   * supported.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/BlueGreenUpdatePolicy">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API BlueGreenUpdatePolicy
  {
  public:
    BlueGreenUpdatePolicy();
    BlueGreenUpdatePolicy(Aws::Utils::Json::JsonView jsonValue);
    BlueGreenUpdatePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const TrafficRoutingConfig& GetTrafficRoutingConfiguration() const{ return m_trafficRoutingConfiguration; }

    /**
     * <p/>
     */
    inline bool TrafficRoutingConfigurationHasBeenSet() const { return m_trafficRoutingConfigurationHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetTrafficRoutingConfiguration(const TrafficRoutingConfig& value) { m_trafficRoutingConfigurationHasBeenSet = true; m_trafficRoutingConfiguration = value; }

    /**
     * <p/>
     */
    inline void SetTrafficRoutingConfiguration(TrafficRoutingConfig&& value) { m_trafficRoutingConfigurationHasBeenSet = true; m_trafficRoutingConfiguration = std::move(value); }

    /**
     * <p/>
     */
    inline BlueGreenUpdatePolicy& WithTrafficRoutingConfiguration(const TrafficRoutingConfig& value) { SetTrafficRoutingConfiguration(value); return *this;}

    /**
     * <p/>
     */
    inline BlueGreenUpdatePolicy& WithTrafficRoutingConfiguration(TrafficRoutingConfig&& value) { SetTrafficRoutingConfiguration(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline int GetTerminationWaitInSeconds() const{ return m_terminationWaitInSeconds; }

    /**
     * <p/>
     */
    inline bool TerminationWaitInSecondsHasBeenSet() const { return m_terminationWaitInSecondsHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetTerminationWaitInSeconds(int value) { m_terminationWaitInSecondsHasBeenSet = true; m_terminationWaitInSeconds = value; }

    /**
     * <p/>
     */
    inline BlueGreenUpdatePolicy& WithTerminationWaitInSeconds(int value) { SetTerminationWaitInSeconds(value); return *this;}


    /**
     * <p/>
     */
    inline int GetMaximumExecutionTimeoutInSeconds() const{ return m_maximumExecutionTimeoutInSeconds; }

    /**
     * <p/>
     */
    inline bool MaximumExecutionTimeoutInSecondsHasBeenSet() const { return m_maximumExecutionTimeoutInSecondsHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetMaximumExecutionTimeoutInSeconds(int value) { m_maximumExecutionTimeoutInSecondsHasBeenSet = true; m_maximumExecutionTimeoutInSeconds = value; }

    /**
     * <p/>
     */
    inline BlueGreenUpdatePolicy& WithMaximumExecutionTimeoutInSeconds(int value) { SetMaximumExecutionTimeoutInSeconds(value); return *this;}

  private:

    TrafficRoutingConfig m_trafficRoutingConfiguration;
    bool m_trafficRoutingConfigurationHasBeenSet;

    int m_terminationWaitInSeconds;
    bool m_terminationWaitInSecondsHasBeenSet;

    int m_maximumExecutionTimeoutInSeconds;
    bool m_maximumExecutionTimeoutInSecondsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
