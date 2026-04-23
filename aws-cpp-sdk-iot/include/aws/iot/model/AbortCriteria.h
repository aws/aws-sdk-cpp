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
   * <p>Details of abort criteria to define rules to abort the job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AbortCriteria">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API AbortCriteria
  {
  public:
    AbortCriteria();
    AbortCriteria(Aws::Utils::Json::JsonView jsonValue);
    AbortCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of job execution failure to define a rule to initiate a job
     * abort.</p>
     */
    inline const JobExecutionFailureType& GetFailureType() const{ return m_failureType; }

    /**
     * <p>The type of job execution failure to define a rule to initiate a job
     * abort.</p>
     */
    inline bool FailureTypeHasBeenSet() const { return m_failureTypeHasBeenSet; }

    /**
     * <p>The type of job execution failure to define a rule to initiate a job
     * abort.</p>
     */
    inline void SetFailureType(const JobExecutionFailureType& value) { m_failureTypeHasBeenSet = true; m_failureType = value; }

    /**
     * <p>The type of job execution failure to define a rule to initiate a job
     * abort.</p>
     */
    inline void SetFailureType(JobExecutionFailureType&& value) { m_failureTypeHasBeenSet = true; m_failureType = std::move(value); }

    /**
     * <p>The type of job execution failure to define a rule to initiate a job
     * abort.</p>
     */
    inline AbortCriteria& WithFailureType(const JobExecutionFailureType& value) { SetFailureType(value); return *this;}

    /**
     * <p>The type of job execution failure to define a rule to initiate a job
     * abort.</p>
     */
    inline AbortCriteria& WithFailureType(JobExecutionFailureType&& value) { SetFailureType(std::move(value)); return *this;}


    /**
     * <p>The type of abort action to initiate a job abort.</p>
     */
    inline const AbortAction& GetAction() const{ return m_action; }

    /**
     * <p>The type of abort action to initiate a job abort.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The type of abort action to initiate a job abort.</p>
     */
    inline void SetAction(const AbortAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The type of abort action to initiate a job abort.</p>
     */
    inline void SetAction(AbortAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The type of abort action to initiate a job abort.</p>
     */
    inline AbortCriteria& WithAction(const AbortAction& value) { SetAction(value); return *this;}

    /**
     * <p>The type of abort action to initiate a job abort.</p>
     */
    inline AbortCriteria& WithAction(AbortAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The threshold as a percentage of the total number of executed things that
     * will initiate a job abort.</p> <p>AWS IoT supports up to two digits after the
     * decimal (for example, 10.9 and 10.99, but not 10.999).</p>
     */
    inline double GetThresholdPercentage() const{ return m_thresholdPercentage; }

    /**
     * <p>The threshold as a percentage of the total number of executed things that
     * will initiate a job abort.</p> <p>AWS IoT supports up to two digits after the
     * decimal (for example, 10.9 and 10.99, but not 10.999).</p>
     */
    inline bool ThresholdPercentageHasBeenSet() const { return m_thresholdPercentageHasBeenSet; }

    /**
     * <p>The threshold as a percentage of the total number of executed things that
     * will initiate a job abort.</p> <p>AWS IoT supports up to two digits after the
     * decimal (for example, 10.9 and 10.99, but not 10.999).</p>
     */
    inline void SetThresholdPercentage(double value) { m_thresholdPercentageHasBeenSet = true; m_thresholdPercentage = value; }

    /**
     * <p>The threshold as a percentage of the total number of executed things that
     * will initiate a job abort.</p> <p>AWS IoT supports up to two digits after the
     * decimal (for example, 10.9 and 10.99, but not 10.999).</p>
     */
    inline AbortCriteria& WithThresholdPercentage(double value) { SetThresholdPercentage(value); return *this;}


    /**
     * <p>Minimum number of executed things before evaluating an abort rule.</p>
     */
    inline int GetMinNumberOfExecutedThings() const{ return m_minNumberOfExecutedThings; }

    /**
     * <p>Minimum number of executed things before evaluating an abort rule.</p>
     */
    inline bool MinNumberOfExecutedThingsHasBeenSet() const { return m_minNumberOfExecutedThingsHasBeenSet; }

    /**
     * <p>Minimum number of executed things before evaluating an abort rule.</p>
     */
    inline void SetMinNumberOfExecutedThings(int value) { m_minNumberOfExecutedThingsHasBeenSet = true; m_minNumberOfExecutedThings = value; }

    /**
     * <p>Minimum number of executed things before evaluating an abort rule.</p>
     */
    inline AbortCriteria& WithMinNumberOfExecutedThings(int value) { SetMinNumberOfExecutedThings(value); return *this;}

  private:

    JobExecutionFailureType m_failureType;
    bool m_failureTypeHasBeenSet;

    AbortAction m_action;
    bool m_actionHasBeenSet;

    double m_thresholdPercentage;
    bool m_thresholdPercentageHasBeenSet;

    int m_minNumberOfExecutedThings;
    bool m_minNumberOfExecutedThingsHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
