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
    AWS_CONNECT_API ActionSummary() = default;
    AWS_CONNECT_API ActionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ActionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action type.</p>
     */
    inline ActionType GetActionType() const { return m_actionType; }
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }
    inline void SetActionType(ActionType value) { m_actionTypeHasBeenSet = true; m_actionType = value; }
    inline ActionSummary& WithActionType(ActionType value) { SetActionType(value); return *this;}
    ///@}
  private:

    ActionType m_actionType{ActionType::NOT_SET};
    bool m_actionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
