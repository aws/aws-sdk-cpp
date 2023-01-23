/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ActionType.h>
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
   * <p>Information about an action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ActionSummary">AWS
   * API Reference</a></p>
   */
  class ActionSummary
  {
  public:
    AWS_CONNECT_API ActionSummary();
    AWS_CONNECT_API ActionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ActionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The action type.</p>
     */
    inline const ActionType& GetActionType() const{ return m_actionType; }

    /**
     * <p>The action type.</p>
     */
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }

    /**
     * <p>The action type.</p>
     */
    inline void SetActionType(const ActionType& value) { m_actionTypeHasBeenSet = true; m_actionType = value; }

    /**
     * <p>The action type.</p>
     */
    inline void SetActionType(ActionType&& value) { m_actionTypeHasBeenSet = true; m_actionType = std::move(value); }

    /**
     * <p>The action type.</p>
     */
    inline ActionSummary& WithActionType(const ActionType& value) { SetActionType(value); return *this;}

    /**
     * <p>The action type.</p>
     */
    inline ActionSummary& WithActionType(ActionType&& value) { SetActionType(std::move(value)); return *this;}

  private:

    ActionType m_actionType;
    bool m_actionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
