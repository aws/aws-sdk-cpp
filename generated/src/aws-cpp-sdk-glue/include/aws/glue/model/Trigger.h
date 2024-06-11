/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/TriggerType.h>
#include <aws/glue/model/TriggerState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/Predicate.h>
#include <aws/glue/model/EventBatchingCondition.h>
#include <aws/glue/model/Action.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Information about a specific trigger.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Trigger">AWS API
   * Reference</a></p>
   */
  class Trigger
  {
  public:
    AWS_GLUE_API Trigger();
    AWS_GLUE_API Trigger(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Trigger& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the trigger.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Trigger& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Trigger& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Trigger& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the workflow associated with the trigger.</p>
     */
    inline const Aws::String& GetWorkflowName() const{ return m_workflowName; }
    inline bool WorkflowNameHasBeenSet() const { return m_workflowNameHasBeenSet; }
    inline void SetWorkflowName(const Aws::String& value) { m_workflowNameHasBeenSet = true; m_workflowName = value; }
    inline void SetWorkflowName(Aws::String&& value) { m_workflowNameHasBeenSet = true; m_workflowName = std::move(value); }
    inline void SetWorkflowName(const char* value) { m_workflowNameHasBeenSet = true; m_workflowName.assign(value); }
    inline Trigger& WithWorkflowName(const Aws::String& value) { SetWorkflowName(value); return *this;}
    inline Trigger& WithWorkflowName(Aws::String&& value) { SetWorkflowName(std::move(value)); return *this;}
    inline Trigger& WithWorkflowName(const char* value) { SetWorkflowName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Trigger& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Trigger& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Trigger& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of trigger that this is.</p>
     */
    inline const TriggerType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const TriggerType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(TriggerType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Trigger& WithType(const TriggerType& value) { SetType(value); return *this;}
    inline Trigger& WithType(TriggerType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the trigger.</p>
     */
    inline const TriggerState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const TriggerState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(TriggerState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline Trigger& WithState(const TriggerState& value) { SetState(value); return *this;}
    inline Trigger& WithState(TriggerState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of this trigger.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Trigger& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Trigger& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Trigger& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>cron</code> expression used to specify the schedule (see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-data-warehouse-schedule.html">Time-Based
     * Schedules for Jobs and Crawlers</a>. For example, to run something every day at
     * 12:15 UTC, you would specify: <code>cron(15 12 * * ? *)</code>.</p>
     */
    inline const Aws::String& GetSchedule() const{ return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    inline void SetSchedule(const Aws::String& value) { m_scheduleHasBeenSet = true; m_schedule = value; }
    inline void SetSchedule(Aws::String&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }
    inline void SetSchedule(const char* value) { m_scheduleHasBeenSet = true; m_schedule.assign(value); }
    inline Trigger& WithSchedule(const Aws::String& value) { SetSchedule(value); return *this;}
    inline Trigger& WithSchedule(Aws::String&& value) { SetSchedule(std::move(value)); return *this;}
    inline Trigger& WithSchedule(const char* value) { SetSchedule(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actions initiated by this trigger.</p>
     */
    inline const Aws::Vector<Action>& GetActions() const{ return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    inline void SetActions(const Aws::Vector<Action>& value) { m_actionsHasBeenSet = true; m_actions = value; }
    inline void SetActions(Aws::Vector<Action>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }
    inline Trigger& WithActions(const Aws::Vector<Action>& value) { SetActions(value); return *this;}
    inline Trigger& WithActions(Aws::Vector<Action>&& value) { SetActions(std::move(value)); return *this;}
    inline Trigger& AddActions(const Action& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }
    inline Trigger& AddActions(Action&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The predicate of this trigger, which defines when it will fire.</p>
     */
    inline const Predicate& GetPredicate() const{ return m_predicate; }
    inline bool PredicateHasBeenSet() const { return m_predicateHasBeenSet; }
    inline void SetPredicate(const Predicate& value) { m_predicateHasBeenSet = true; m_predicate = value; }
    inline void SetPredicate(Predicate&& value) { m_predicateHasBeenSet = true; m_predicate = std::move(value); }
    inline Trigger& WithPredicate(const Predicate& value) { SetPredicate(value); return *this;}
    inline Trigger& WithPredicate(Predicate&& value) { SetPredicate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Batch condition that must be met (specified number of events received or
     * batch time window expired) before EventBridge event trigger fires.</p>
     */
    inline const EventBatchingCondition& GetEventBatchingCondition() const{ return m_eventBatchingCondition; }
    inline bool EventBatchingConditionHasBeenSet() const { return m_eventBatchingConditionHasBeenSet; }
    inline void SetEventBatchingCondition(const EventBatchingCondition& value) { m_eventBatchingConditionHasBeenSet = true; m_eventBatchingCondition = value; }
    inline void SetEventBatchingCondition(EventBatchingCondition&& value) { m_eventBatchingConditionHasBeenSet = true; m_eventBatchingCondition = std::move(value); }
    inline Trigger& WithEventBatchingCondition(const EventBatchingCondition& value) { SetEventBatchingCondition(value); return *this;}
    inline Trigger& WithEventBatchingCondition(EventBatchingCondition&& value) { SetEventBatchingCondition(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_workflowName;
    bool m_workflowNameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    TriggerType m_type;
    bool m_typeHasBeenSet = false;

    TriggerState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_schedule;
    bool m_scheduleHasBeenSet = false;

    Aws::Vector<Action> m_actions;
    bool m_actionsHasBeenSet = false;

    Predicate m_predicate;
    bool m_predicateHasBeenSet = false;

    EventBatchingCondition m_eventBatchingCondition;
    bool m_eventBatchingConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
