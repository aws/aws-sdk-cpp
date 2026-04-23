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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/RateIncreaseCriteria.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Allows you to create an exponential rate of rollout for a job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ExponentialRolloutRate">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API ExponentialRolloutRate
  {
  public:
    ExponentialRolloutRate();
    ExponentialRolloutRate(Aws::Utils::Json::JsonView jsonValue);
    ExponentialRolloutRate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The minimum number of things that will be notified of a pending job, per
     * minute at the start of job rollout. This parameter allows you to define the
     * initial rate of rollout.</p>
     */
    inline int GetBaseRatePerMinute() const{ return m_baseRatePerMinute; }

    /**
     * <p>The minimum number of things that will be notified of a pending job, per
     * minute at the start of job rollout. This parameter allows you to define the
     * initial rate of rollout.</p>
     */
    inline bool BaseRatePerMinuteHasBeenSet() const { return m_baseRatePerMinuteHasBeenSet; }

    /**
     * <p>The minimum number of things that will be notified of a pending job, per
     * minute at the start of job rollout. This parameter allows you to define the
     * initial rate of rollout.</p>
     */
    inline void SetBaseRatePerMinute(int value) { m_baseRatePerMinuteHasBeenSet = true; m_baseRatePerMinute = value; }

    /**
     * <p>The minimum number of things that will be notified of a pending job, per
     * minute at the start of job rollout. This parameter allows you to define the
     * initial rate of rollout.</p>
     */
    inline ExponentialRolloutRate& WithBaseRatePerMinute(int value) { SetBaseRatePerMinute(value); return *this;}


    /**
     * <p>The exponential factor to increase the rate of rollout for a job.</p>
     */
    inline double GetIncrementFactor() const{ return m_incrementFactor; }

    /**
     * <p>The exponential factor to increase the rate of rollout for a job.</p>
     */
    inline bool IncrementFactorHasBeenSet() const { return m_incrementFactorHasBeenSet; }

    /**
     * <p>The exponential factor to increase the rate of rollout for a job.</p>
     */
    inline void SetIncrementFactor(double value) { m_incrementFactorHasBeenSet = true; m_incrementFactor = value; }

    /**
     * <p>The exponential factor to increase the rate of rollout for a job.</p>
     */
    inline ExponentialRolloutRate& WithIncrementFactor(double value) { SetIncrementFactor(value); return *this;}


    /**
     * <p>The criteria to initiate the increase in rate of rollout for a job.</p>
     * <p>AWS IoT supports up to one digit after the decimal (for example, 1.5, but not
     * 1.55).</p>
     */
    inline const RateIncreaseCriteria& GetRateIncreaseCriteria() const{ return m_rateIncreaseCriteria; }

    /**
     * <p>The criteria to initiate the increase in rate of rollout for a job.</p>
     * <p>AWS IoT supports up to one digit after the decimal (for example, 1.5, but not
     * 1.55).</p>
     */
    inline bool RateIncreaseCriteriaHasBeenSet() const { return m_rateIncreaseCriteriaHasBeenSet; }

    /**
     * <p>The criteria to initiate the increase in rate of rollout for a job.</p>
     * <p>AWS IoT supports up to one digit after the decimal (for example, 1.5, but not
     * 1.55).</p>
     */
    inline void SetRateIncreaseCriteria(const RateIncreaseCriteria& value) { m_rateIncreaseCriteriaHasBeenSet = true; m_rateIncreaseCriteria = value; }

    /**
     * <p>The criteria to initiate the increase in rate of rollout for a job.</p>
     * <p>AWS IoT supports up to one digit after the decimal (for example, 1.5, but not
     * 1.55).</p>
     */
    inline void SetRateIncreaseCriteria(RateIncreaseCriteria&& value) { m_rateIncreaseCriteriaHasBeenSet = true; m_rateIncreaseCriteria = std::move(value); }

    /**
     * <p>The criteria to initiate the increase in rate of rollout for a job.</p>
     * <p>AWS IoT supports up to one digit after the decimal (for example, 1.5, but not
     * 1.55).</p>
     */
    inline ExponentialRolloutRate& WithRateIncreaseCriteria(const RateIncreaseCriteria& value) { SetRateIncreaseCriteria(value); return *this;}

    /**
     * <p>The criteria to initiate the increase in rate of rollout for a job.</p>
     * <p>AWS IoT supports up to one digit after the decimal (for example, 1.5, but not
     * 1.55).</p>
     */
    inline ExponentialRolloutRate& WithRateIncreaseCriteria(RateIncreaseCriteria&& value) { SetRateIncreaseCriteria(std::move(value)); return *this;}

  private:

    int m_baseRatePerMinute;
    bool m_baseRatePerMinuteHasBeenSet;

    double m_incrementFactor;
    bool m_incrementFactorHasBeenSet;

    RateIncreaseCriteria m_rateIncreaseCriteria;
    bool m_rateIncreaseCriteriaHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
