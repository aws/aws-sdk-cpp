﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/ExponentialRolloutRate.h>
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
   * <p>Allows you to create a staged rollout of a job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/JobExecutionsRolloutConfig">AWS
   * API Reference</a></p>
   */
  class JobExecutionsRolloutConfig
  {
  public:
    AWS_IOT_API JobExecutionsRolloutConfig() = default;
    AWS_IOT_API JobExecutionsRolloutConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API JobExecutionsRolloutConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum number of things that will be notified of a pending job, per
     * minute. This parameter allows you to create a staged rollout.</p>
     */
    inline int GetMaximumPerMinute() const { return m_maximumPerMinute; }
    inline bool MaximumPerMinuteHasBeenSet() const { return m_maximumPerMinuteHasBeenSet; }
    inline void SetMaximumPerMinute(int value) { m_maximumPerMinuteHasBeenSet = true; m_maximumPerMinute = value; }
    inline JobExecutionsRolloutConfig& WithMaximumPerMinute(int value) { SetMaximumPerMinute(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rate of increase for a job rollout. This parameter allows you to define
     * an exponential rate for a job rollout.</p>
     */
    inline const ExponentialRolloutRate& GetExponentialRate() const { return m_exponentialRate; }
    inline bool ExponentialRateHasBeenSet() const { return m_exponentialRateHasBeenSet; }
    template<typename ExponentialRateT = ExponentialRolloutRate>
    void SetExponentialRate(ExponentialRateT&& value) { m_exponentialRateHasBeenSet = true; m_exponentialRate = std::forward<ExponentialRateT>(value); }
    template<typename ExponentialRateT = ExponentialRolloutRate>
    JobExecutionsRolloutConfig& WithExponentialRate(ExponentialRateT&& value) { SetExponentialRate(std::forward<ExponentialRateT>(value)); return *this;}
    ///@}
  private:

    int m_maximumPerMinute{0};
    bool m_maximumPerMinuteHasBeenSet = false;

    ExponentialRolloutRate m_exponentialRate;
    bool m_exponentialRateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
