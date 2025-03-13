/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/budgets/model/Action.h>
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
namespace Budgets
{
namespace Model
{

  /**
   * <p>The description of the details for the event. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/ActionHistoryDetails">AWS
   * API Reference</a></p>
   */
  class ActionHistoryDetails
  {
  public:
    AWS_BUDGETS_API ActionHistoryDetails() = default;
    AWS_BUDGETS_API ActionHistoryDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API ActionHistoryDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ActionHistoryDetails& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The budget action resource. </p>
     */
    inline const Action& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = Action>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = Action>
    ActionHistoryDetails& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Action m_action;
    bool m_actionHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
