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
    AWS_BUDGETS_API ActionHistoryDetails();
    AWS_BUDGETS_API ActionHistoryDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API ActionHistoryDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ActionHistoryDetails& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ActionHistoryDetails& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ActionHistoryDetails& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The budget action resource. </p>
     */
    inline const Action& GetAction() const{ return m_action; }

    /**
     * <p>The budget action resource. </p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The budget action resource. </p>
     */
    inline void SetAction(const Action& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The budget action resource. </p>
     */
    inline void SetAction(Action&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The budget action resource. </p>
     */
    inline ActionHistoryDetails& WithAction(const Action& value) { SetAction(value); return *this;}

    /**
     * <p>The budget action resource. </p>
     */
    inline ActionHistoryDetails& WithAction(Action&& value) { SetAction(std::move(value)); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Action m_action;
    bool m_actionHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
