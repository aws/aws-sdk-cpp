/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/WidgetStatus.h>
#include <aws/quicksight/model/VisualCustomActionTrigger.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/VisualCustomActionOperation.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A custom action defined on a visual.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/VisualCustomAction">AWS
   * API Reference</a></p>
   */
  class VisualCustomAction
  {
  public:
    AWS_QUICKSIGHT_API VisualCustomAction();
    AWS_QUICKSIGHT_API VisualCustomAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API VisualCustomAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the <code>VisualCustomAction</code>.</p>
     */
    inline const Aws::String& GetCustomActionId() const{ return m_customActionId; }

    /**
     * <p>The ID of the <code>VisualCustomAction</code>.</p>
     */
    inline bool CustomActionIdHasBeenSet() const { return m_customActionIdHasBeenSet; }

    /**
     * <p>The ID of the <code>VisualCustomAction</code>.</p>
     */
    inline void SetCustomActionId(const Aws::String& value) { m_customActionIdHasBeenSet = true; m_customActionId = value; }

    /**
     * <p>The ID of the <code>VisualCustomAction</code>.</p>
     */
    inline void SetCustomActionId(Aws::String&& value) { m_customActionIdHasBeenSet = true; m_customActionId = std::move(value); }

    /**
     * <p>The ID of the <code>VisualCustomAction</code>.</p>
     */
    inline void SetCustomActionId(const char* value) { m_customActionIdHasBeenSet = true; m_customActionId.assign(value); }

    /**
     * <p>The ID of the <code>VisualCustomAction</code>.</p>
     */
    inline VisualCustomAction& WithCustomActionId(const Aws::String& value) { SetCustomActionId(value); return *this;}

    /**
     * <p>The ID of the <code>VisualCustomAction</code>.</p>
     */
    inline VisualCustomAction& WithCustomActionId(Aws::String&& value) { SetCustomActionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the <code>VisualCustomAction</code>.</p>
     */
    inline VisualCustomAction& WithCustomActionId(const char* value) { SetCustomActionId(value); return *this;}


    /**
     * <p>The name of the <code>VisualCustomAction</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the <code>VisualCustomAction</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the <code>VisualCustomAction</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the <code>VisualCustomAction</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the <code>VisualCustomAction</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the <code>VisualCustomAction</code>.</p>
     */
    inline VisualCustomAction& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the <code>VisualCustomAction</code>.</p>
     */
    inline VisualCustomAction& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the <code>VisualCustomAction</code>.</p>
     */
    inline VisualCustomAction& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status of the <code>VisualCustomAction</code>.</p>
     */
    inline const WidgetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the <code>VisualCustomAction</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the <code>VisualCustomAction</code>.</p>
     */
    inline void SetStatus(const WidgetStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the <code>VisualCustomAction</code>.</p>
     */
    inline void SetStatus(WidgetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the <code>VisualCustomAction</code>.</p>
     */
    inline VisualCustomAction& WithStatus(const WidgetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the <code>VisualCustomAction</code>.</p>
     */
    inline VisualCustomAction& WithStatus(WidgetStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The trigger of the <code>VisualCustomAction</code>.</p> <p>Valid values are
     * defined as follows:</p> <ul> <li> <p> <code>DATA_POINT_CLICK</code>: Initiates a
     * custom action by a left pointer click on a data point.</p> </li> <li> <p>
     * <code>DATA_POINT_MENU</code>: Initiates a custom action by right pointer click
     * from the menu.</p> </li> </ul>
     */
    inline const VisualCustomActionTrigger& GetTrigger() const{ return m_trigger; }

    /**
     * <p>The trigger of the <code>VisualCustomAction</code>.</p> <p>Valid values are
     * defined as follows:</p> <ul> <li> <p> <code>DATA_POINT_CLICK</code>: Initiates a
     * custom action by a left pointer click on a data point.</p> </li> <li> <p>
     * <code>DATA_POINT_MENU</code>: Initiates a custom action by right pointer click
     * from the menu.</p> </li> </ul>
     */
    inline bool TriggerHasBeenSet() const { return m_triggerHasBeenSet; }

    /**
     * <p>The trigger of the <code>VisualCustomAction</code>.</p> <p>Valid values are
     * defined as follows:</p> <ul> <li> <p> <code>DATA_POINT_CLICK</code>: Initiates a
     * custom action by a left pointer click on a data point.</p> </li> <li> <p>
     * <code>DATA_POINT_MENU</code>: Initiates a custom action by right pointer click
     * from the menu.</p> </li> </ul>
     */
    inline void SetTrigger(const VisualCustomActionTrigger& value) { m_triggerHasBeenSet = true; m_trigger = value; }

    /**
     * <p>The trigger of the <code>VisualCustomAction</code>.</p> <p>Valid values are
     * defined as follows:</p> <ul> <li> <p> <code>DATA_POINT_CLICK</code>: Initiates a
     * custom action by a left pointer click on a data point.</p> </li> <li> <p>
     * <code>DATA_POINT_MENU</code>: Initiates a custom action by right pointer click
     * from the menu.</p> </li> </ul>
     */
    inline void SetTrigger(VisualCustomActionTrigger&& value) { m_triggerHasBeenSet = true; m_trigger = std::move(value); }

    /**
     * <p>The trigger of the <code>VisualCustomAction</code>.</p> <p>Valid values are
     * defined as follows:</p> <ul> <li> <p> <code>DATA_POINT_CLICK</code>: Initiates a
     * custom action by a left pointer click on a data point.</p> </li> <li> <p>
     * <code>DATA_POINT_MENU</code>: Initiates a custom action by right pointer click
     * from the menu.</p> </li> </ul>
     */
    inline VisualCustomAction& WithTrigger(const VisualCustomActionTrigger& value) { SetTrigger(value); return *this;}

    /**
     * <p>The trigger of the <code>VisualCustomAction</code>.</p> <p>Valid values are
     * defined as follows:</p> <ul> <li> <p> <code>DATA_POINT_CLICK</code>: Initiates a
     * custom action by a left pointer click on a data point.</p> </li> <li> <p>
     * <code>DATA_POINT_MENU</code>: Initiates a custom action by right pointer click
     * from the menu.</p> </li> </ul>
     */
    inline VisualCustomAction& WithTrigger(VisualCustomActionTrigger&& value) { SetTrigger(std::move(value)); return *this;}


    /**
     * <p>A list of <code>VisualCustomActionOperations</code>.</p> <p>This is a union
     * type structure. For this structure to be valid, only one of the attributes can
     * be defined.</p>
     */
    inline const Aws::Vector<VisualCustomActionOperation>& GetActionOperations() const{ return m_actionOperations; }

    /**
     * <p>A list of <code>VisualCustomActionOperations</code>.</p> <p>This is a union
     * type structure. For this structure to be valid, only one of the attributes can
     * be defined.</p>
     */
    inline bool ActionOperationsHasBeenSet() const { return m_actionOperationsHasBeenSet; }

    /**
     * <p>A list of <code>VisualCustomActionOperations</code>.</p> <p>This is a union
     * type structure. For this structure to be valid, only one of the attributes can
     * be defined.</p>
     */
    inline void SetActionOperations(const Aws::Vector<VisualCustomActionOperation>& value) { m_actionOperationsHasBeenSet = true; m_actionOperations = value; }

    /**
     * <p>A list of <code>VisualCustomActionOperations</code>.</p> <p>This is a union
     * type structure. For this structure to be valid, only one of the attributes can
     * be defined.</p>
     */
    inline void SetActionOperations(Aws::Vector<VisualCustomActionOperation>&& value) { m_actionOperationsHasBeenSet = true; m_actionOperations = std::move(value); }

    /**
     * <p>A list of <code>VisualCustomActionOperations</code>.</p> <p>This is a union
     * type structure. For this structure to be valid, only one of the attributes can
     * be defined.</p>
     */
    inline VisualCustomAction& WithActionOperations(const Aws::Vector<VisualCustomActionOperation>& value) { SetActionOperations(value); return *this;}

    /**
     * <p>A list of <code>VisualCustomActionOperations</code>.</p> <p>This is a union
     * type structure. For this structure to be valid, only one of the attributes can
     * be defined.</p>
     */
    inline VisualCustomAction& WithActionOperations(Aws::Vector<VisualCustomActionOperation>&& value) { SetActionOperations(std::move(value)); return *this;}

    /**
     * <p>A list of <code>VisualCustomActionOperations</code>.</p> <p>This is a union
     * type structure. For this structure to be valid, only one of the attributes can
     * be defined.</p>
     */
    inline VisualCustomAction& AddActionOperations(const VisualCustomActionOperation& value) { m_actionOperationsHasBeenSet = true; m_actionOperations.push_back(value); return *this; }

    /**
     * <p>A list of <code>VisualCustomActionOperations</code>.</p> <p>This is a union
     * type structure. For this structure to be valid, only one of the attributes can
     * be defined.</p>
     */
    inline VisualCustomAction& AddActionOperations(VisualCustomActionOperation&& value) { m_actionOperationsHasBeenSet = true; m_actionOperations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_customActionId;
    bool m_customActionIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    WidgetStatus m_status;
    bool m_statusHasBeenSet = false;

    VisualCustomActionTrigger m_trigger;
    bool m_triggerHasBeenSet = false;

    Aws::Vector<VisualCustomActionOperation> m_actionOperations;
    bool m_actionOperationsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
