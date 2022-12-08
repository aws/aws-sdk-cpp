/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/AwsJobRateIncreaseCriteria.h>
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
   * <p>The rate of increase for a job rollout. This parameter allows you to define
   * an exponential rate increase for a job rollout.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AwsJobExponentialRolloutRate">AWS
   * API Reference</a></p>
   */
  class AwsJobExponentialRolloutRate
  {
  public:
    AWS_IOT_API AwsJobExponentialRolloutRate();
    AWS_IOT_API AwsJobExponentialRolloutRate(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API AwsJobExponentialRolloutRate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The minimum number of things that will be notified of a pending job, per
     * minute, at the start of the job rollout. This is the initial rate of the
     * rollout.</p>
     */
    inline int GetBaseRatePerMinute() const{ return m_baseRatePerMinute; }

    /**
     * <p>The minimum number of things that will be notified of a pending job, per
     * minute, at the start of the job rollout. This is the initial rate of the
     * rollout.</p>
     */
    inline bool BaseRatePerMinuteHasBeenSet() const { return m_baseRatePerMinuteHasBeenSet; }

    /**
     * <p>The minimum number of things that will be notified of a pending job, per
     * minute, at the start of the job rollout. This is the initial rate of the
     * rollout.</p>
     */
    inline void SetBaseRatePerMinute(int value) { m_baseRatePerMinuteHasBeenSet = true; m_baseRatePerMinute = value; }

    /**
     * <p>The minimum number of things that will be notified of a pending job, per
     * minute, at the start of the job rollout. This is the initial rate of the
     * rollout.</p>
     */
    inline AwsJobExponentialRolloutRate& WithBaseRatePerMinute(int value) { SetBaseRatePerMinute(value); return *this;}


    /**
     * <p>The rate of increase for a job rollout. The number of things notified is
     * multiplied by this factor.</p>
     */
    inline double GetIncrementFactor() const{ return m_incrementFactor; }

    /**
     * <p>The rate of increase for a job rollout. The number of things notified is
     * multiplied by this factor.</p>
     */
    inline bool IncrementFactorHasBeenSet() const { return m_incrementFactorHasBeenSet; }

    /**
     * <p>The rate of increase for a job rollout. The number of things notified is
     * multiplied by this factor.</p>
     */
    inline void SetIncrementFactor(double value) { m_incrementFactorHasBeenSet = true; m_incrementFactor = value; }

    /**
     * <p>The rate of increase for a job rollout. The number of things notified is
     * multiplied by this factor.</p>
     */
    inline AwsJobExponentialRolloutRate& WithIncrementFactor(double value) { SetIncrementFactor(value); return *this;}


    /**
     * <p>The criteria to initiate the increase in rate of rollout for a job.</p>
     * <p>Amazon Web Services IoT Core supports up to one digit after the decimal (for
     * example, 1.5, but not 1.55).</p>
     */
    inline const AwsJobRateIncreaseCriteria& GetRateIncreaseCriteria() const{ return m_rateIncreaseCriteria; }

    /**
     * <p>The criteria to initiate the increase in rate of rollout for a job.</p>
     * <p>Amazon Web Services IoT Core supports up to one digit after the decimal (for
     * example, 1.5, but not 1.55).</p>
     */
    inline bool RateIncreaseCriteriaHasBeenSet() const { return m_rateIncreaseCriteriaHasBeenSet; }

    /**
     * <p>The criteria to initiate the increase in rate of rollout for a job.</p>
     * <p>Amazon Web Services IoT Core supports up to one digit after the decimal (for
     * example, 1.5, but not 1.55).</p>
     */
    inline void SetRateIncreaseCriteria(const AwsJobRateIncreaseCriteria& value) { m_rateIncreaseCriteriaHasBeenSet = true; m_rateIncreaseCriteria = value; }

    /**
     * <p>The criteria to initiate the increase in rate of rollout for a job.</p>
     * <p>Amazon Web Services IoT Core supports up to one digit after the decimal (for
     * example, 1.5, but not 1.55).</p>
     */
    inline void SetRateIncreaseCriteria(AwsJobRateIncreaseCriteria&& value) { m_rateIncreaseCriteriaHasBeenSet = true; m_rateIncreaseCriteria = std::move(value); }

    /**
     * <p>The criteria to initiate the increase in rate of rollout for a job.</p>
     * <p>Amazon Web Services IoT Core supports up to one digit after the decimal (for
     * example, 1.5, but not 1.55).</p>
     */
    inline AwsJobExponentialRolloutRate& WithRateIncreaseCriteria(const AwsJobRateIncreaseCriteria& value) { SetRateIncreaseCriteria(value); return *this;}

    /**
     * <p>The criteria to initiate the increase in rate of rollout for a job.</p>
     * <p>Amazon Web Services IoT Core supports up to one digit after the decimal (for
     * example, 1.5, but not 1.55).</p>
     */
    inline AwsJobExponentialRolloutRate& WithRateIncreaseCriteria(AwsJobRateIncreaseCriteria&& value) { SetRateIncreaseCriteria(std::move(value)); return *this;}

  private:

    int m_baseRatePerMinute;
    bool m_baseRatePerMinuteHasBeenSet = false;

    double m_incrementFactor;
    bool m_incrementFactorHasBeenSet = false;

    AwsJobRateIncreaseCriteria m_rateIncreaseCriteria;
    bool m_rateIncreaseCriteriaHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
