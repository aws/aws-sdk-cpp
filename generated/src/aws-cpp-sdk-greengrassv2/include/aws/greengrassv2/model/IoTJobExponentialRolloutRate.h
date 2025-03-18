/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/greengrassv2/model/IoTJobRateIncreaseCriteria.h>
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
   * <p>Contains information about an exponential rollout rate for a configuration
   * deployment job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/IoTJobExponentialRolloutRate">AWS
   * API Reference</a></p>
   */
  class IoTJobExponentialRolloutRate
  {
  public:
    AWS_GREENGRASSV2_API IoTJobExponentialRolloutRate() = default;
    AWS_GREENGRASSV2_API IoTJobExponentialRolloutRate(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API IoTJobExponentialRolloutRate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The minimum number of devices that receive a pending job notification, per
     * minute, when the job starts. This parameter defines the initial rollout rate of
     * the job.</p>
     */
    inline int GetBaseRatePerMinute() const { return m_baseRatePerMinute; }
    inline bool BaseRatePerMinuteHasBeenSet() const { return m_baseRatePerMinuteHasBeenSet; }
    inline void SetBaseRatePerMinute(int value) { m_baseRatePerMinuteHasBeenSet = true; m_baseRatePerMinute = value; }
    inline IoTJobExponentialRolloutRate& WithBaseRatePerMinute(int value) { SetBaseRatePerMinute(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exponential factor to increase the rollout rate for the job.</p> <p>This
     * parameter supports up to one digit after the decimal (for example, you can
     * specify <code>1.5</code>, but not <code>1.55</code>).</p>
     */
    inline double GetIncrementFactor() const { return m_incrementFactor; }
    inline bool IncrementFactorHasBeenSet() const { return m_incrementFactorHasBeenSet; }
    inline void SetIncrementFactor(double value) { m_incrementFactorHasBeenSet = true; m_incrementFactor = value; }
    inline IoTJobExponentialRolloutRate& WithIncrementFactor(double value) { SetIncrementFactor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The criteria to increase the rollout rate for the job.</p>
     */
    inline const IoTJobRateIncreaseCriteria& GetRateIncreaseCriteria() const { return m_rateIncreaseCriteria; }
    inline bool RateIncreaseCriteriaHasBeenSet() const { return m_rateIncreaseCriteriaHasBeenSet; }
    template<typename RateIncreaseCriteriaT = IoTJobRateIncreaseCriteria>
    void SetRateIncreaseCriteria(RateIncreaseCriteriaT&& value) { m_rateIncreaseCriteriaHasBeenSet = true; m_rateIncreaseCriteria = std::forward<RateIncreaseCriteriaT>(value); }
    template<typename RateIncreaseCriteriaT = IoTJobRateIncreaseCriteria>
    IoTJobExponentialRolloutRate& WithRateIncreaseCriteria(RateIncreaseCriteriaT&& value) { SetRateIncreaseCriteria(std::forward<RateIncreaseCriteriaT>(value)); return *this;}
    ///@}
  private:

    int m_baseRatePerMinute{0};
    bool m_baseRatePerMinuteHasBeenSet = false;

    double m_incrementFactor{0.0};
    bool m_incrementFactorHasBeenSet = false;

    IoTJobRateIncreaseCriteria m_rateIncreaseCriteria;
    bool m_rateIncreaseCriteriaHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
