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
    AWS_GREENGRASSV2_API IoTJobAbortCriteria() = default;
    AWS_GREENGRASSV2_API IoTJobAbortCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API IoTJobAbortCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of job deployment failure that can cancel a job.</p>
     */
    inline IoTJobExecutionFailureType GetFailureType() const { return m_failureType; }
    inline bool FailureTypeHasBeenSet() const { return m_failureTypeHasBeenSet; }
    inline void SetFailureType(IoTJobExecutionFailureType value) { m_failureTypeHasBeenSet = true; m_failureType = value; }
    inline IoTJobAbortCriteria& WithFailureType(IoTJobExecutionFailureType value) { SetFailureType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to perform when the criteria are met.</p>
     */
    inline IoTJobAbortAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(IoTJobAbortAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline IoTJobAbortCriteria& WithAction(IoTJobAbortAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum percentage of <code>failureType</code> failures that occur before
     * the job can cancel.</p> <p>This parameter supports up to two digits after the
     * decimal (for example, you can specify <code>10.9</code> or <code>10.99</code>,
     * but not <code>10.999</code>).</p>
     */
    inline double GetThresholdPercentage() const { return m_thresholdPercentage; }
    inline bool ThresholdPercentageHasBeenSet() const { return m_thresholdPercentageHasBeenSet; }
    inline void SetThresholdPercentage(double value) { m_thresholdPercentageHasBeenSet = true; m_thresholdPercentage = value; }
    inline IoTJobAbortCriteria& WithThresholdPercentage(double value) { SetThresholdPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of things that receive the configuration before the job
     * can cancel.</p>
     */
    inline int GetMinNumberOfExecutedThings() const { return m_minNumberOfExecutedThings; }
    inline bool MinNumberOfExecutedThingsHasBeenSet() const { return m_minNumberOfExecutedThingsHasBeenSet; }
    inline void SetMinNumberOfExecutedThings(int value) { m_minNumberOfExecutedThingsHasBeenSet = true; m_minNumberOfExecutedThings = value; }
    inline IoTJobAbortCriteria& WithMinNumberOfExecutedThings(int value) { SetMinNumberOfExecutedThings(value); return *this;}
    ///@}
  private:

    IoTJobExecutionFailureType m_failureType{IoTJobExecutionFailureType::NOT_SET};
    bool m_failureTypeHasBeenSet = false;

    IoTJobAbortAction m_action{IoTJobAbortAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    double m_thresholdPercentage{0.0};
    bool m_thresholdPercentageHasBeenSet = false;

    int m_minNumberOfExecutedThings{0};
    bool m_minNumberOfExecutedThingsHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
