/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/greengrassv2/model/IoTJobExponentialRolloutRate.h>
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
namespace GreengrassV2
{
namespace Model
{

  /**
   * <p>Contains information about the rollout configuration for a job. This
   * configuration defines the rate at which the job deploys a configuration to a
   * fleet of target devices.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/IoTJobExecutionsRolloutConfig">AWS
   * API Reference</a></p>
   */
  class IoTJobExecutionsRolloutConfig
  {
  public:
    AWS_GREENGRASSV2_API IoTJobExecutionsRolloutConfig() = default;
    AWS_GREENGRASSV2_API IoTJobExecutionsRolloutConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API IoTJobExecutionsRolloutConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The exponential rate to increase the job rollout rate.</p>
     */
    inline const IoTJobExponentialRolloutRate& GetExponentialRate() const { return m_exponentialRate; }
    inline bool ExponentialRateHasBeenSet() const { return m_exponentialRateHasBeenSet; }
    template<typename ExponentialRateT = IoTJobExponentialRolloutRate>
    void SetExponentialRate(ExponentialRateT&& value) { m_exponentialRateHasBeenSet = true; m_exponentialRate = std::forward<ExponentialRateT>(value); }
    template<typename ExponentialRateT = IoTJobExponentialRolloutRate>
    IoTJobExecutionsRolloutConfig& WithExponentialRate(ExponentialRateT&& value) { SetExponentialRate(std::forward<ExponentialRateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of devices that receive a pending job notification, per
     * minute.</p>
     */
    inline int GetMaximumPerMinute() const { return m_maximumPerMinute; }
    inline bool MaximumPerMinuteHasBeenSet() const { return m_maximumPerMinuteHasBeenSet; }
    inline void SetMaximumPerMinute(int value) { m_maximumPerMinuteHasBeenSet = true; m_maximumPerMinute = value; }
    inline IoTJobExecutionsRolloutConfig& WithMaximumPerMinute(int value) { SetMaximumPerMinute(value); return *this;}
    ///@}
  private:

    IoTJobExponentialRolloutRate m_exponentialRate;
    bool m_exponentialRateHasBeenSet = false;

    int m_maximumPerMinute{0};
    bool m_maximumPerMinuteHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
