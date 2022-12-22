/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/TriggerType.h>
#include <aws/glue/model/Predicate.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/glue/model/EventBatchingCondition.h>
#include <aws/glue/model/Action.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class CreateTriggerRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API CreateTriggerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTrigger"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the trigger.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the trigger.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the trigger.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the trigger.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the trigger.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the trigger.</p>
     */
    inline CreateTriggerRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the trigger.</p>
     */
    inline CreateTriggerRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the trigger.</p>
     */
    inline CreateTriggerRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The name of the workflow associated with the trigger.</p>
     */
    inline const Aws::String& GetWorkflowName() const{ return m_workflowName; }

    /**
     * <p>The name of the workflow associated with the trigger.</p>
     */
    inline bool WorkflowNameHasBeenSet() const { return m_workflowNameHasBeenSet; }

    /**
     * <p>The name of the workflow associated with the trigger.</p>
     */
    inline void SetWorkflowName(const Aws::String& value) { m_workflowNameHasBeenSet = true; m_workflowName = value; }

    /**
     * <p>The name of the workflow associated with the trigger.</p>
     */
    inline void SetWorkflowName(Aws::String&& value) { m_workflowNameHasBeenSet = true; m_workflowName = std::move(value); }

    /**
     * <p>The name of the workflow associated with the trigger.</p>
     */
    inline void SetWorkflowName(const char* value) { m_workflowNameHasBeenSet = true; m_workflowName.assign(value); }

    /**
     * <p>The name of the workflow associated with the trigger.</p>
     */
    inline CreateTriggerRequest& WithWorkflowName(const Aws::String& value) { SetWorkflowName(value); return *this;}

    /**
     * <p>The name of the workflow associated with the trigger.</p>
     */
    inline CreateTriggerRequest& WithWorkflowName(Aws::String&& value) { SetWorkflowName(std::move(value)); return *this;}

    /**
     * <p>The name of the workflow associated with the trigger.</p>
     */
    inline CreateTriggerRequest& WithWorkflowName(const char* value) { SetWorkflowName(value); return *this;}


    /**
     * <p>The type of the new trigger.</p>
     */
    inline const TriggerType& GetType() const{ return m_type; }

    /**
     * <p>The type of the new trigger.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the new trigger.</p>
     */
    inline void SetType(const TriggerType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the new trigger.</p>
     */
    inline void SetType(TriggerType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the new trigger.</p>
     */
    inline CreateTriggerRequest& WithType(const TriggerType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the new trigger.</p>
     */
    inline CreateTriggerRequest& WithType(TriggerType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>A <code>cron</code> expression used to specify the schedule (see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-data-warehouse-schedule.html">Time-Based
     * Schedules for Jobs and Crawlers</a>. For example, to run something every day at
     * 12:15 UTC, you would specify: <code>cron(15 12 * * ? *)</code>.</p> <p>This
     * field is required when the trigger type is SCHEDULED.</p>
     */
    inline const Aws::String& GetSchedule() const{ return m_schedule; }

    /**
     * <p>A <code>cron</code> expression used to specify the schedule (see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-data-warehouse-schedule.html">Time-Based
     * Schedules for Jobs and Crawlers</a>. For example, to run something every day at
     * 12:15 UTC, you would specify: <code>cron(15 12 * * ? *)</code>.</p> <p>This
     * field is required when the trigger type is SCHEDULED.</p>
     */
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }

    /**
     * <p>A <code>cron</code> expression used to specify the schedule (see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-data-warehouse-schedule.html">Time-Based
     * Schedules for Jobs and Crawlers</a>. For example, to run something every day at
     * 12:15 UTC, you would specify: <code>cron(15 12 * * ? *)</code>.</p> <p>This
     * field is required when the trigger type is SCHEDULED.</p>
     */
    inline void SetSchedule(const Aws::String& value) { m_scheduleHasBeenSet = true; m_schedule = value; }

    /**
     * <p>A <code>cron</code> expression used to specify the schedule (see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-data-warehouse-schedule.html">Time-Based
     * Schedules for Jobs and Crawlers</a>. For example, to run something every day at
     * 12:15 UTC, you would specify: <code>cron(15 12 * * ? *)</code>.</p> <p>This
     * field is required when the trigger type is SCHEDULED.</p>
     */
    inline void SetSchedule(Aws::String&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }

    /**
     * <p>A <code>cron</code> expression used to specify the schedule (see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-data-warehouse-schedule.html">Time-Based
     * Schedules for Jobs and Crawlers</a>. For example, to run something every day at
     * 12:15 UTC, you would specify: <code>cron(15 12 * * ? *)</code>.</p> <p>This
     * field is required when the trigger type is SCHEDULED.</p>
     */
    inline void SetSchedule(const char* value) { m_scheduleHasBeenSet = true; m_schedule.assign(value); }

    /**
     * <p>A <code>cron</code> expression used to specify the schedule (see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-data-warehouse-schedule.html">Time-Based
     * Schedules for Jobs and Crawlers</a>. For example, to run something every day at
     * 12:15 UTC, you would specify: <code>cron(15 12 * * ? *)</code>.</p> <p>This
     * field is required when the trigger type is SCHEDULED.</p>
     */
    inline CreateTriggerRequest& WithSchedule(const Aws::String& value) { SetSchedule(value); return *this;}

    /**
     * <p>A <code>cron</code> expression used to specify the schedule (see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-data-warehouse-schedule.html">Time-Based
     * Schedules for Jobs and Crawlers</a>. For example, to run something every day at
     * 12:15 UTC, you would specify: <code>cron(15 12 * * ? *)</code>.</p> <p>This
     * field is required when the trigger type is SCHEDULED.</p>
     */
    inline CreateTriggerRequest& WithSchedule(Aws::String&& value) { SetSchedule(std::move(value)); return *this;}

    /**
     * <p>A <code>cron</code> expression used to specify the schedule (see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-data-warehouse-schedule.html">Time-Based
     * Schedules for Jobs and Crawlers</a>. For example, to run something every day at
     * 12:15 UTC, you would specify: <code>cron(15 12 * * ? *)</code>.</p> <p>This
     * field is required when the trigger type is SCHEDULED.</p>
     */
    inline CreateTriggerRequest& WithSchedule(const char* value) { SetSchedule(value); return *this;}


    /**
     * <p>A predicate to specify when the new trigger should fire.</p> <p>This field is
     * required when the trigger type is <code>CONDITIONAL</code>.</p>
     */
    inline const Predicate& GetPredicate() const{ return m_predicate; }

    /**
     * <p>A predicate to specify when the new trigger should fire.</p> <p>This field is
     * required when the trigger type is <code>CONDITIONAL</code>.</p>
     */
    inline bool PredicateHasBeenSet() const { return m_predicateHasBeenSet; }

    /**
     * <p>A predicate to specify when the new trigger should fire.</p> <p>This field is
     * required when the trigger type is <code>CONDITIONAL</code>.</p>
     */
    inline void SetPredicate(const Predicate& value) { m_predicateHasBeenSet = true; m_predicate = value; }

    /**
     * <p>A predicate to specify when the new trigger should fire.</p> <p>This field is
     * required when the trigger type is <code>CONDITIONAL</code>.</p>
     */
    inline void SetPredicate(Predicate&& value) { m_predicateHasBeenSet = true; m_predicate = std::move(value); }

    /**
     * <p>A predicate to specify when the new trigger should fire.</p> <p>This field is
     * required when the trigger type is <code>CONDITIONAL</code>.</p>
     */
    inline CreateTriggerRequest& WithPredicate(const Predicate& value) { SetPredicate(value); return *this;}

    /**
     * <p>A predicate to specify when the new trigger should fire.</p> <p>This field is
     * required when the trigger type is <code>CONDITIONAL</code>.</p>
     */
    inline CreateTriggerRequest& WithPredicate(Predicate&& value) { SetPredicate(std::move(value)); return *this;}


    /**
     * <p>The actions initiated by this trigger when it fires.</p>
     */
    inline const Aws::Vector<Action>& GetActions() const{ return m_actions; }

    /**
     * <p>The actions initiated by this trigger when it fires.</p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p>The actions initiated by this trigger when it fires.</p>
     */
    inline void SetActions(const Aws::Vector<Action>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>The actions initiated by this trigger when it fires.</p>
     */
    inline void SetActions(Aws::Vector<Action>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>The actions initiated by this trigger when it fires.</p>
     */
    inline CreateTriggerRequest& WithActions(const Aws::Vector<Action>& value) { SetActions(value); return *this;}

    /**
     * <p>The actions initiated by this trigger when it fires.</p>
     */
    inline CreateTriggerRequest& WithActions(Aws::Vector<Action>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>The actions initiated by this trigger when it fires.</p>
     */
    inline CreateTriggerRequest& AddActions(const Action& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p>The actions initiated by this trigger when it fires.</p>
     */
    inline CreateTriggerRequest& AddActions(Action&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }


    /**
     * <p>A description of the new trigger.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the new trigger.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the new trigger.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the new trigger.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the new trigger.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the new trigger.</p>
     */
    inline CreateTriggerRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the new trigger.</p>
     */
    inline CreateTriggerRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the new trigger.</p>
     */
    inline CreateTriggerRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Set to <code>true</code> to start <code>SCHEDULED</code> and
     * <code>CONDITIONAL</code> triggers when created. True is not supported for
     * <code>ON_DEMAND</code> triggers.</p>
     */
    inline bool GetStartOnCreation() const{ return m_startOnCreation; }

    /**
     * <p>Set to <code>true</code> to start <code>SCHEDULED</code> and
     * <code>CONDITIONAL</code> triggers when created. True is not supported for
     * <code>ON_DEMAND</code> triggers.</p>
     */
    inline bool StartOnCreationHasBeenSet() const { return m_startOnCreationHasBeenSet; }

    /**
     * <p>Set to <code>true</code> to start <code>SCHEDULED</code> and
     * <code>CONDITIONAL</code> triggers when created. True is not supported for
     * <code>ON_DEMAND</code> triggers.</p>
     */
    inline void SetStartOnCreation(bool value) { m_startOnCreationHasBeenSet = true; m_startOnCreation = value; }

    /**
     * <p>Set to <code>true</code> to start <code>SCHEDULED</code> and
     * <code>CONDITIONAL</code> triggers when created. True is not supported for
     * <code>ON_DEMAND</code> triggers.</p>
     */
    inline CreateTriggerRequest& WithStartOnCreation(bool value) { SetStartOnCreation(value); return *this;}


    /**
     * <p>The tags to use with this trigger. You may use tags to limit access to the
     * trigger. For more information about tags in Glue, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
     * Services Tags in Glue</a> in the developer guide. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to use with this trigger. You may use tags to limit access to the
     * trigger. For more information about tags in Glue, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
     * Services Tags in Glue</a> in the developer guide. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to use with this trigger. You may use tags to limit access to the
     * trigger. For more information about tags in Glue, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
     * Services Tags in Glue</a> in the developer guide. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to use with this trigger. You may use tags to limit access to the
     * trigger. For more information about tags in Glue, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
     * Services Tags in Glue</a> in the developer guide. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to use with this trigger. You may use tags to limit access to the
     * trigger. For more information about tags in Glue, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
     * Services Tags in Glue</a> in the developer guide. </p>
     */
    inline CreateTriggerRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to use with this trigger. You may use tags to limit access to the
     * trigger. For more information about tags in Glue, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
     * Services Tags in Glue</a> in the developer guide. </p>
     */
    inline CreateTriggerRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to use with this trigger. You may use tags to limit access to the
     * trigger. For more information about tags in Glue, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
     * Services Tags in Glue</a> in the developer guide. </p>
     */
    inline CreateTriggerRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags to use with this trigger. You may use tags to limit access to the
     * trigger. For more information about tags in Glue, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
     * Services Tags in Glue</a> in the developer guide. </p>
     */
    inline CreateTriggerRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to use with this trigger. You may use tags to limit access to the
     * trigger. For more information about tags in Glue, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
     * Services Tags in Glue</a> in the developer guide. </p>
     */
    inline CreateTriggerRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to use with this trigger. You may use tags to limit access to the
     * trigger. For more information about tags in Glue, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
     * Services Tags in Glue</a> in the developer guide. </p>
     */
    inline CreateTriggerRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags to use with this trigger. You may use tags to limit access to the
     * trigger. For more information about tags in Glue, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
     * Services Tags in Glue</a> in the developer guide. </p>
     */
    inline CreateTriggerRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to use with this trigger. You may use tags to limit access to the
     * trigger. For more information about tags in Glue, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
     * Services Tags in Glue</a> in the developer guide. </p>
     */
    inline CreateTriggerRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to use with this trigger. You may use tags to limit access to the
     * trigger. For more information about tags in Glue, see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
     * Services Tags in Glue</a> in the developer guide. </p>
     */
    inline CreateTriggerRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>Batch condition that must be met (specified number of events received or
     * batch time window expired) before EventBridge event trigger fires.</p>
     */
    inline const EventBatchingCondition& GetEventBatchingCondition() const{ return m_eventBatchingCondition; }

    /**
     * <p>Batch condition that must be met (specified number of events received or
     * batch time window expired) before EventBridge event trigger fires.</p>
     */
    inline bool EventBatchingConditionHasBeenSet() const { return m_eventBatchingConditionHasBeenSet; }

    /**
     * <p>Batch condition that must be met (specified number of events received or
     * batch time window expired) before EventBridge event trigger fires.</p>
     */
    inline void SetEventBatchingCondition(const EventBatchingCondition& value) { m_eventBatchingConditionHasBeenSet = true; m_eventBatchingCondition = value; }

    /**
     * <p>Batch condition that must be met (specified number of events received or
     * batch time window expired) before EventBridge event trigger fires.</p>
     */
    inline void SetEventBatchingCondition(EventBatchingCondition&& value) { m_eventBatchingConditionHasBeenSet = true; m_eventBatchingCondition = std::move(value); }

    /**
     * <p>Batch condition that must be met (specified number of events received or
     * batch time window expired) before EventBridge event trigger fires.</p>
     */
    inline CreateTriggerRequest& WithEventBatchingCondition(const EventBatchingCondition& value) { SetEventBatchingCondition(value); return *this;}

    /**
     * <p>Batch condition that must be met (specified number of events received or
     * batch time window expired) before EventBridge event trigger fires.</p>
     */
    inline CreateTriggerRequest& WithEventBatchingCondition(EventBatchingCondition&& value) { SetEventBatchingCondition(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_workflowName;
    bool m_workflowNameHasBeenSet = false;

    TriggerType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_schedule;
    bool m_scheduleHasBeenSet = false;

    Predicate m_predicate;
    bool m_predicateHasBeenSet = false;

    Aws::Vector<Action> m_actions;
    bool m_actionsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_startOnCreation;
    bool m_startOnCreationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    EventBatchingCondition m_eventBatchingCondition;
    bool m_eventBatchingConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
