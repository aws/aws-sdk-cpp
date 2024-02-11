/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/NumericQuestionPropertyAutomationLabel.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about the property value used in automation of a numeric
   * questions. Label values are associated with minimum and maximum values for the
   * numeric question.</p> <ul> <li> <p>Sentiment scores have a minimum value of -5
   * and maximum value of 5.</p> </li> <li> <p> Duration labels, such as
   * <code>NON_TALK_TIME</code>, <code>CONTACT_DURATION</code>,
   * <code>AGENT_INTERACTION_DURATION</code>, <code>CUSTOMER_HOLD_TIME</code> have a
   * minimum value of 0 and maximum value of 28800.</p> </li> <li> <p>Percentages
   * have a minimum value of 0 and maximum value of 100. </p> </li> <li> <p>
   * <code>NUMBER_OF_INTERRUPTIONS</code> has a minimum value of 0 and maximum value
   * of 1000.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/NumericQuestionPropertyValueAutomation">AWS
   * API Reference</a></p>
   */
  class NumericQuestionPropertyValueAutomation
  {
  public:
    AWS_CONNECT_API NumericQuestionPropertyValueAutomation();
    AWS_CONNECT_API NumericQuestionPropertyValueAutomation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API NumericQuestionPropertyValueAutomation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The property label of the automation.</p>
     */
    inline const NumericQuestionPropertyAutomationLabel& GetLabel() const{ return m_label; }

    /**
     * <p>The property label of the automation.</p>
     */
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }

    /**
     * <p>The property label of the automation.</p>
     */
    inline void SetLabel(const NumericQuestionPropertyAutomationLabel& value) { m_labelHasBeenSet = true; m_label = value; }

    /**
     * <p>The property label of the automation.</p>
     */
    inline void SetLabel(NumericQuestionPropertyAutomationLabel&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }

    /**
     * <p>The property label of the automation.</p>
     */
    inline NumericQuestionPropertyValueAutomation& WithLabel(const NumericQuestionPropertyAutomationLabel& value) { SetLabel(value); return *this;}

    /**
     * <p>The property label of the automation.</p>
     */
    inline NumericQuestionPropertyValueAutomation& WithLabel(NumericQuestionPropertyAutomationLabel&& value) { SetLabel(std::move(value)); return *this;}

  private:

    NumericQuestionPropertyAutomationLabel m_label;
    bool m_labelHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
