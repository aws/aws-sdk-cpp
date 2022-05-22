/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/ActionValue.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <p>A single action condition for a <a>Condition</a> in a logging
   * filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ActionCondition">AWS
   * API Reference</a></p>
   */
  class AWS_WAFV2_API ActionCondition
  {
  public:
    ActionCondition();
    ActionCondition(Aws::Utils::Json::JsonView jsonValue);
    ActionCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The action setting that a log record must contain in order to meet the
     * condition. </p>
     */
    inline const ActionValue& GetAction() const{ return m_action; }

    /**
     * <p>The action setting that a log record must contain in order to meet the
     * condition. </p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action setting that a log record must contain in order to meet the
     * condition. </p>
     */
    inline void SetAction(const ActionValue& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action setting that a log record must contain in order to meet the
     * condition. </p>
     */
    inline void SetAction(ActionValue&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action setting that a log record must contain in order to meet the
     * condition. </p>
     */
    inline ActionCondition& WithAction(const ActionValue& value) { SetAction(value); return *this;}

    /**
     * <p>The action setting that a log record must contain in order to meet the
     * condition. </p>
     */
    inline ActionCondition& WithAction(ActionValue&& value) { SetAction(std::move(value)); return *this;}

  private:

    ActionValue m_action;
    bool m_actionHasBeenSet;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
