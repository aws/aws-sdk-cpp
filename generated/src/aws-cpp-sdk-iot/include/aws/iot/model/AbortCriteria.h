/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/JobExecutionFailureType.h>
#include <aws/iot/model/AbortAction.h>
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
   * <p>The criteria that determine when and how a job abort takes
   * place.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AbortCriteria">AWS
   * API Reference</a></p>
   */
  class AbortCriteria
  {
  public:
    AWS_IOT_API AbortCriteria();
    AWS_IOT_API AbortCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API AbortCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of job execution failures that can initiate a job abort.</p>
     */
    inline const JobExecutionFailureType& GetFailureType() const{ return m_failureType; }
    inline bool FailureTypeHasBeenSet() const { return m_failureTypeHasBeenSet; }
    inline void SetFailureType(const JobExecutionFailureType& value) { m_failureTypeHasBeenSet = true; m_failureType = value; }
    inline void SetFailureType(JobExecutionFailureType&& value) { m_failureTypeHasBeenSet = true; m_failureType = std::move(value); }
    inline AbortCriteria& WithFailureType(const JobExecutionFailureType& value) { SetFailureType(value); return *this;}
    inline AbortCriteria& WithFailureType(JobExecutionFailureType&& value) { SetFailureType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of job action to take to initiate the job abort.</p>
     */
    inline const AbortAction& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const AbortAction& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(AbortAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline AbortCriteria& WithAction(const AbortAction& value) { SetAction(value); return *this;}
    inline AbortCriteria& WithAction(AbortAction&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum percentage of job execution failures that must occur to initiate
     * the job abort.</p> <p>Amazon Web Services IoT Core supports up to two digits
     * after the decimal (for example, 10.9 and 10.99, but not 10.999).</p>
     */
    inline double GetThresholdPercentage() const{ return m_thresholdPercentage; }
    inline bool ThresholdPercentageHasBeenSet() const { return m_thresholdPercentageHasBeenSet; }
    inline void SetThresholdPercentage(double value) { m_thresholdPercentageHasBeenSet = true; m_thresholdPercentage = value; }
    inline AbortCriteria& WithThresholdPercentage(double value) { SetThresholdPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of things which must receive job execution notifications
     * before the job can be aborted.</p>
     */
    inline int GetMinNumberOfExecutedThings() const{ return m_minNumberOfExecutedThings; }
    inline bool MinNumberOfExecutedThingsHasBeenSet() const { return m_minNumberOfExecutedThingsHasBeenSet; }
    inline void SetMinNumberOfExecutedThings(int value) { m_minNumberOfExecutedThingsHasBeenSet = true; m_minNumberOfExecutedThings = value; }
    inline AbortCriteria& WithMinNumberOfExecutedThings(int value) { SetMinNumberOfExecutedThings(value); return *this;}
    ///@}
  private:

    JobExecutionFailureType m_failureType;
    bool m_failureTypeHasBeenSet = false;

    AbortAction m_action;
    bool m_actionHasBeenSet = false;

    double m_thresholdPercentage;
    bool m_thresholdPercentageHasBeenSet = false;

    int m_minNumberOfExecutedThings;
    bool m_minNumberOfExecutedThingsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
