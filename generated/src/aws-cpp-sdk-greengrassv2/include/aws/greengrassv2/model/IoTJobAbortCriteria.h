/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/greengrassv2/model/IoTJobExecutionFailureType.h>
#include <aws/greengrassv2/model/IoTJobAbortAction.h>
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
   * <p>Contains criteria that define when and how to cancel a job.</p> <p>The
   * deployment stops if the following conditions are true:</p> <ol> <li> <p>The
   * number of things that receive the deployment exceeds the
   * <code>minNumberOfExecutedThings</code>.</p> </li> <li> <p>The percentage of
   * failures with type <code>failureType</code> exceeds the
   * <code>thresholdPercentage</code>.</p> </li> </ol><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/IoTJobAbortCriteria">AWS
   * API Reference</a></p>
   */
  class IoTJobAbortCriteria
  {
  public:
    AWS_GREENGRASSV2_API IoTJobAbortCriteria();
    AWS_GREENGRASSV2_API IoTJobAbortCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API IoTJobAbortCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of job deployment failure that can cancel a job.</p>
     */
    inline const IoTJobExecutionFailureType& GetFailureType() const{ return m_failureType; }

    /**
     * <p>The type of job deployment failure that can cancel a job.</p>
     */
    inline bool FailureTypeHasBeenSet() const { return m_failureTypeHasBeenSet; }

    /**
     * <p>The type of job deployment failure that can cancel a job.</p>
     */
    inline void SetFailureType(const IoTJobExecutionFailureType& value) { m_failureTypeHasBeenSet = true; m_failureType = value; }

    /**
     * <p>The type of job deployment failure that can cancel a job.</p>
     */
    inline void SetFailureType(IoTJobExecutionFailureType&& value) { m_failureTypeHasBeenSet = true; m_failureType = std::move(value); }

    /**
     * <p>The type of job deployment failure that can cancel a job.</p>
     */
    inline IoTJobAbortCriteria& WithFailureType(const IoTJobExecutionFailureType& value) { SetFailureType(value); return *this;}

    /**
     * <p>The type of job deployment failure that can cancel a job.</p>
     */
    inline IoTJobAbortCriteria& WithFailureType(IoTJobExecutionFailureType&& value) { SetFailureType(std::move(value)); return *this;}


    /**
     * <p>The action to perform when the criteria are met.</p>
     */
    inline const IoTJobAbortAction& GetAction() const{ return m_action; }

    /**
     * <p>The action to perform when the criteria are met.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action to perform when the criteria are met.</p>
     */
    inline void SetAction(const IoTJobAbortAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action to perform when the criteria are met.</p>
     */
    inline void SetAction(IoTJobAbortAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action to perform when the criteria are met.</p>
     */
    inline IoTJobAbortCriteria& WithAction(const IoTJobAbortAction& value) { SetAction(value); return *this;}

    /**
     * <p>The action to perform when the criteria are met.</p>
     */
    inline IoTJobAbortCriteria& WithAction(IoTJobAbortAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The minimum percentage of <code>failureType</code> failures that occur before
     * the job can cancel.</p> <p>This parameter supports up to two digits after the
     * decimal (for example, you can specify <code>10.9</code> or <code>10.99</code>,
     * but not <code>10.999</code>).</p>
     */
    inline double GetThresholdPercentage() const{ return m_thresholdPercentage; }

    /**
     * <p>The minimum percentage of <code>failureType</code> failures that occur before
     * the job can cancel.</p> <p>This parameter supports up to two digits after the
     * decimal (for example, you can specify <code>10.9</code> or <code>10.99</code>,
     * but not <code>10.999</code>).</p>
     */
    inline bool ThresholdPercentageHasBeenSet() const { return m_thresholdPercentageHasBeenSet; }

    /**
     * <p>The minimum percentage of <code>failureType</code> failures that occur before
     * the job can cancel.</p> <p>This parameter supports up to two digits after the
     * decimal (for example, you can specify <code>10.9</code> or <code>10.99</code>,
     * but not <code>10.999</code>).</p>
     */
    inline void SetThresholdPercentage(double value) { m_thresholdPercentageHasBeenSet = true; m_thresholdPercentage = value; }

    /**
     * <p>The minimum percentage of <code>failureType</code> failures that occur before
     * the job can cancel.</p> <p>This parameter supports up to two digits after the
     * decimal (for example, you can specify <code>10.9</code> or <code>10.99</code>,
     * but not <code>10.999</code>).</p>
     */
    inline IoTJobAbortCriteria& WithThresholdPercentage(double value) { SetThresholdPercentage(value); return *this;}


    /**
     * <p>The minimum number of things that receive the configuration before the job
     * can cancel.</p>
     */
    inline int GetMinNumberOfExecutedThings() const{ return m_minNumberOfExecutedThings; }

    /**
     * <p>The minimum number of things that receive the configuration before the job
     * can cancel.</p>
     */
    inline bool MinNumberOfExecutedThingsHasBeenSet() const { return m_minNumberOfExecutedThingsHasBeenSet; }

    /**
     * <p>The minimum number of things that receive the configuration before the job
     * can cancel.</p>
     */
    inline void SetMinNumberOfExecutedThings(int value) { m_minNumberOfExecutedThingsHasBeenSet = true; m_minNumberOfExecutedThings = value; }

    /**
     * <p>The minimum number of things that receive the configuration before the job
     * can cancel.</p>
     */
    inline IoTJobAbortCriteria& WithMinNumberOfExecutedThings(int value) { SetMinNumberOfExecutedThings(value); return *this;}

  private:

    IoTJobExecutionFailureType m_failureType;
    bool m_failureTypeHasBeenSet = false;

    IoTJobAbortAction m_action;
    bool m_actionHasBeenSet = false;

    double m_thresholdPercentage;
    bool m_thresholdPercentageHasBeenSet = false;

    int m_minNumberOfExecutedThings;
    bool m_minNumberOfExecutedThingsHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
