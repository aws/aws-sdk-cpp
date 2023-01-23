/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/AwsJobAbortCriteriaFailureType.h>
#include <aws/iot/model/AwsJobAbortCriteriaAbortAction.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AwsJobAbortCriteria">AWS
   * API Reference</a></p>
   */
  class AwsJobAbortCriteria
  {
  public:
    AWS_IOT_API AwsJobAbortCriteria();
    AWS_IOT_API AwsJobAbortCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API AwsJobAbortCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of job execution failures that can initiate a job abort.</p>
     */
    inline const AwsJobAbortCriteriaFailureType& GetFailureType() const{ return m_failureType; }

    /**
     * <p>The type of job execution failures that can initiate a job abort.</p>
     */
    inline bool FailureTypeHasBeenSet() const { return m_failureTypeHasBeenSet; }

    /**
     * <p>The type of job execution failures that can initiate a job abort.</p>
     */
    inline void SetFailureType(const AwsJobAbortCriteriaFailureType& value) { m_failureTypeHasBeenSet = true; m_failureType = value; }

    /**
     * <p>The type of job execution failures that can initiate a job abort.</p>
     */
    inline void SetFailureType(AwsJobAbortCriteriaFailureType&& value) { m_failureTypeHasBeenSet = true; m_failureType = std::move(value); }

    /**
     * <p>The type of job execution failures that can initiate a job abort.</p>
     */
    inline AwsJobAbortCriteria& WithFailureType(const AwsJobAbortCriteriaFailureType& value) { SetFailureType(value); return *this;}

    /**
     * <p>The type of job execution failures that can initiate a job abort.</p>
     */
    inline AwsJobAbortCriteria& WithFailureType(AwsJobAbortCriteriaFailureType&& value) { SetFailureType(std::move(value)); return *this;}


    /**
     * <p>The type of job action to take to initiate the job abort.</p>
     */
    inline const AwsJobAbortCriteriaAbortAction& GetAction() const{ return m_action; }

    /**
     * <p>The type of job action to take to initiate the job abort.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The type of job action to take to initiate the job abort.</p>
     */
    inline void SetAction(const AwsJobAbortCriteriaAbortAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The type of job action to take to initiate the job abort.</p>
     */
    inline void SetAction(AwsJobAbortCriteriaAbortAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The type of job action to take to initiate the job abort.</p>
     */
    inline AwsJobAbortCriteria& WithAction(const AwsJobAbortCriteriaAbortAction& value) { SetAction(value); return *this;}

    /**
     * <p>The type of job action to take to initiate the job abort.</p>
     */
    inline AwsJobAbortCriteria& WithAction(AwsJobAbortCriteriaAbortAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The minimum percentage of job execution failures that must occur to initiate
     * the job abort.</p> <p>Amazon Web Services IoT Core supports up to two digits
     * after the decimal (for example, 10.9 and 10.99, but not 10.999).</p>
     */
    inline double GetThresholdPercentage() const{ return m_thresholdPercentage; }

    /**
     * <p>The minimum percentage of job execution failures that must occur to initiate
     * the job abort.</p> <p>Amazon Web Services IoT Core supports up to two digits
     * after the decimal (for example, 10.9 and 10.99, but not 10.999).</p>
     */
    inline bool ThresholdPercentageHasBeenSet() const { return m_thresholdPercentageHasBeenSet; }

    /**
     * <p>The minimum percentage of job execution failures that must occur to initiate
     * the job abort.</p> <p>Amazon Web Services IoT Core supports up to two digits
     * after the decimal (for example, 10.9 and 10.99, but not 10.999).</p>
     */
    inline void SetThresholdPercentage(double value) { m_thresholdPercentageHasBeenSet = true; m_thresholdPercentage = value; }

    /**
     * <p>The minimum percentage of job execution failures that must occur to initiate
     * the job abort.</p> <p>Amazon Web Services IoT Core supports up to two digits
     * after the decimal (for example, 10.9 and 10.99, but not 10.999).</p>
     */
    inline AwsJobAbortCriteria& WithThresholdPercentage(double value) { SetThresholdPercentage(value); return *this;}


    /**
     * <p>The minimum number of things which must receive job execution notifications
     * before the job can be aborted.</p>
     */
    inline int GetMinNumberOfExecutedThings() const{ return m_minNumberOfExecutedThings; }

    /**
     * <p>The minimum number of things which must receive job execution notifications
     * before the job can be aborted.</p>
     */
    inline bool MinNumberOfExecutedThingsHasBeenSet() const { return m_minNumberOfExecutedThingsHasBeenSet; }

    /**
     * <p>The minimum number of things which must receive job execution notifications
     * before the job can be aborted.</p>
     */
    inline void SetMinNumberOfExecutedThings(int value) { m_minNumberOfExecutedThingsHasBeenSet = true; m_minNumberOfExecutedThings = value; }

    /**
     * <p>The minimum number of things which must receive job execution notifications
     * before the job can be aborted.</p>
     */
    inline AwsJobAbortCriteria& WithMinNumberOfExecutedThings(int value) { SetMinNumberOfExecutedThings(value); return *this;}

  private:

    AwsJobAbortCriteriaFailureType m_failureType;
    bool m_failureTypeHasBeenSet = false;

    AwsJobAbortCriteriaAbortAction m_action;
    bool m_actionHasBeenSet = false;

    double m_thresholdPercentage;
    bool m_thresholdPercentageHasBeenSet = false;

    int m_minNumberOfExecutedThings;
    bool m_minNumberOfExecutedThingsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
