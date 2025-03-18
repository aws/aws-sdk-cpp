/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/model/ExponentialRolloutRate.h>
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
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   * <p>Over-the-air (OTA) task rollout config.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/OtaTaskExecutionRolloutConfig">AWS
   * API Reference</a></p>
   */
  class OtaTaskExecutionRolloutConfig
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API OtaTaskExecutionRolloutConfig() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API OtaTaskExecutionRolloutConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API OtaTaskExecutionRolloutConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Structure representing exponential rate of rollout for an over-the-air (OTA)
     * task.</p>
     */
    inline const ExponentialRolloutRate& GetExponentialRolloutRate() const { return m_exponentialRolloutRate; }
    inline bool ExponentialRolloutRateHasBeenSet() const { return m_exponentialRolloutRateHasBeenSet; }
    template<typename ExponentialRolloutRateT = ExponentialRolloutRate>
    void SetExponentialRolloutRate(ExponentialRolloutRateT&& value) { m_exponentialRolloutRateHasBeenSet = true; m_exponentialRolloutRate = std::forward<ExponentialRolloutRateT>(value); }
    template<typename ExponentialRolloutRateT = ExponentialRolloutRate>
    OtaTaskExecutionRolloutConfig& WithExponentialRolloutRate(ExponentialRolloutRateT&& value) { SetExponentialRolloutRate(std::forward<ExponentialRolloutRateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of things that will be notified of a pending task, per
     * minute.</p>
     */
    inline int GetMaximumPerMinute() const { return m_maximumPerMinute; }
    inline bool MaximumPerMinuteHasBeenSet() const { return m_maximumPerMinuteHasBeenSet; }
    inline void SetMaximumPerMinute(int value) { m_maximumPerMinuteHasBeenSet = true; m_maximumPerMinute = value; }
    inline OtaTaskExecutionRolloutConfig& WithMaximumPerMinute(int value) { SetMaximumPerMinute(value); return *this;}
    ///@}
  private:

    ExponentialRolloutRate m_exponentialRolloutRate;
    bool m_exponentialRolloutRateHasBeenSet = false;

    int m_maximumPerMinute{0};
    bool m_maximumPerMinuteHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
