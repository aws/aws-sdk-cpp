/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/model/RolloutRateIncreaseCriteria.h>
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
   * <p>Structure representing exponential rate of rollout for an over-the-air (OTA)
   * task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/ExponentialRolloutRate">AWS
   * API Reference</a></p>
   */
  class ExponentialRolloutRate
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API ExponentialRolloutRate() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API ExponentialRolloutRate(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API ExponentialRolloutRate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The base rate per minute for the rollout of an over-the-air (OTA) task.</p>
     */
    inline int GetBaseRatePerMinute() const { return m_baseRatePerMinute; }
    inline bool BaseRatePerMinuteHasBeenSet() const { return m_baseRatePerMinuteHasBeenSet; }
    inline void SetBaseRatePerMinute(int value) { m_baseRatePerMinuteHasBeenSet = true; m_baseRatePerMinute = value; }
    inline ExponentialRolloutRate& WithBaseRatePerMinute(int value) { SetBaseRatePerMinute(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The incremental factor for increasing the rollout rate of an over-the-air
     * (OTA) task.</p>
     */
    inline double GetIncrementFactor() const { return m_incrementFactor; }
    inline bool IncrementFactorHasBeenSet() const { return m_incrementFactorHasBeenSet; }
    inline void SetIncrementFactor(double value) { m_incrementFactorHasBeenSet = true; m_incrementFactor = value; }
    inline ExponentialRolloutRate& WithIncrementFactor(double value) { SetIncrementFactor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The criteria for increasing the rollout rate of an over-the-air (OTA)
     * task.</p>
     */
    inline const RolloutRateIncreaseCriteria& GetRateIncreaseCriteria() const { return m_rateIncreaseCriteria; }
    inline bool RateIncreaseCriteriaHasBeenSet() const { return m_rateIncreaseCriteriaHasBeenSet; }
    template<typename RateIncreaseCriteriaT = RolloutRateIncreaseCriteria>
    void SetRateIncreaseCriteria(RateIncreaseCriteriaT&& value) { m_rateIncreaseCriteriaHasBeenSet = true; m_rateIncreaseCriteria = std::forward<RateIncreaseCriteriaT>(value); }
    template<typename RateIncreaseCriteriaT = RolloutRateIncreaseCriteria>
    ExponentialRolloutRate& WithRateIncreaseCriteria(RateIncreaseCriteriaT&& value) { SetRateIncreaseCriteria(std::forward<RateIncreaseCriteriaT>(value)); return *this;}
    ///@}
  private:

    int m_baseRatePerMinute{0};
    bool m_baseRatePerMinuteHasBeenSet = false;

    double m_incrementFactor{0.0};
    bool m_incrementFactorHasBeenSet = false;

    RolloutRateIncreaseCriteria m_rateIncreaseCriteria;
    bool m_rateIncreaseCriteriaHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
