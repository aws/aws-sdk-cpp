/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A structure used to provide information used to update a trigger. This object
   * updates the previous trigger definition by overwriting it
   * completely.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/TriggerUpdate">AWS
   * API Reference</a></p>
   */
  class TriggerUpdate
  {
  public:
    AWS_GLUE_API TriggerUpdate();
    AWS_GLUE_API TriggerUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API TriggerUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline TriggerUpdate& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline TriggerUpdate& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline TriggerUpdate& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of this trigger.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of this trigger.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of this trigger.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of this trigger.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of this trigger.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of this trigger.</p>
     */
    inline TriggerUpdate& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of this trigger.</p>
     */
    inline TriggerUpdate& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of this trigger.</p>
     */
    inline TriggerUpdate& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A <code>cron</code> expression used to specify the schedule (see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-data-warehouse-schedule.html">Time-Based
     * Schedules for Jobs and Crawlers</a>. For example, to run something every day at
     * 12:15 UTC, you would specify: <code>cron(15 12 * * ? *)</code>.</p>
     */
    inline const Aws::String& GetSchedule() const{ return m_schedule; }

    /**
     * <p>A <code>cron</code> expression used to specify the schedule (see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-data-warehouse-schedule.html">Time-Based
     * Schedules for Jobs and Crawlers</a>. For example, to run something every day at
     * 12:15 UTC, you would specify: <code>cron(15 12 * * ? *)</code>.</p>
     */
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }

    /**
     * <p>A <code>cron</code> expression used to specify the schedule (see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-data-warehouse-schedule.html">Time-Based
     * Schedules for Jobs and Crawlers</a>. For example, to run something every day at
     * 12:15 UTC, you would specify: <code>cron(15 12 * * ? *)</code>.</p>
     */
    inline void SetSchedule(const Aws::String& value) { m_scheduleHasBeenSet = true; m_schedule = value; }

    /**
     * <p>A <code>cron</code> expression used to specify the schedule (see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-data-warehouse-schedule.html">Time-Based
     * Schedules for Jobs and Crawlers</a>. For example, to run something every day at
     * 12:15 UTC, you would specify: <code>cron(15 12 * * ? *)</code>.</p>
     */
    inline void SetSchedule(Aws::String&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }

    /**
     * <p>A <code>cron</code> expression used to specify the schedule (see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-data-warehouse-schedule.html">Time-Based
     * Schedules for Jobs and Crawlers</a>. For example, to run something every day at
     * 12:15 UTC, you would specify: <code>cron(15 12 * * ? *)</code>.</p>
     */
    inline void SetSchedule(const char* value) { m_scheduleHasBeenSet = true; m_schedule.assign(value); }

    /**
     * <p>A <code>cron</code> expression used to specify the schedule (see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-data-warehouse-schedule.html">Time-Based
     * Schedules for Jobs and Crawlers</a>. For example, to run something every day at
     * 12:15 UTC, you would specify: <code>cron(15 12 * * ? *)</code>.</p>
     */
    inline TriggerUpdate& WithSchedule(const Aws::String& value) { SetSchedule(value); return *this;}

    /**
     * <p>A <code>cron</code> expression used to specify the schedule (see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-data-warehouse-schedule.html">Time-Based
     * Schedules for Jobs and Crawlers</a>. For example, to run something every day at
     * 12:15 UTC, you would specify: <code>cron(15 12 * * ? *)</code>.</p>
     */
    inline TriggerUpdate& WithSchedule(Aws::String&& value) { SetSchedule(std::move(value)); return *this;}

    /**
     * <p>A <code>cron</code> expression used to specify the schedule (see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-data-warehouse-schedule.html">Time-Based
     * Schedules for Jobs and Crawlers</a>. For example, to run something every day at
     * 12:15 UTC, you would specify: <code>cron(15 12 * * ? *)</code>.</p>
     */
    inline TriggerUpdate& WithSchedule(const char* value) { SetSchedule(value); return *this;}


    /**
     * <p>The actions initiated by this trigger.</p>
     */
    inline const Aws::Vector<Action>& GetActions() const{ return m_actions; }

    /**
     * <p>The actions initiated by this trigger.</p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p>The actions initiated by this trigger.</p>
     */
    inline void SetActions(const Aws::Vector<Action>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>The actions initiated by this trigger.</p>
     */
    inline void SetActions(Aws::Vector<Action>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>The actions initiated by this trigger.</p>
     */
    inline TriggerUpdate& WithActions(const Aws::Vector<Action>& value) { SetActions(value); return *this;}

    /**
     * <p>The actions initiated by this trigger.</p>
     */
    inline TriggerUpdate& WithActions(Aws::Vector<Action>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>The actions initiated by this trigger.</p>
     */
    inline TriggerUpdate& AddActions(const Action& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p>The actions initiated by this trigger.</p>
     */
    inline TriggerUpdate& AddActions(Action&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }


    /**
     * <p>The predicate of this trigger, which defines when it will fire.</p>
     */
    inline const Predicate& GetPredicate() const{ return m_predicate; }

    /**
     * <p>The predicate of this trigger, which defines when it will fire.</p>
     */
    inline bool PredicateHasBeenSet() const { return m_predicateHasBeenSet; }

    /**
     * <p>The predicate of this trigger, which defines when it will fire.</p>
     */
    inline void SetPredicate(const Predicate& value) { m_predicateHasBeenSet = true; m_predicate = value; }

    /**
     * <p>The predicate of this trigger, which defines when it will fire.</p>
     */
    inline void SetPredicate(Predicate&& value) { m_predicateHasBeenSet = true; m_predicate = std::move(value); }

    /**
     * <p>The predicate of this trigger, which defines when it will fire.</p>
     */
    inline TriggerUpdate& WithPredicate(const Predicate& value) { SetPredicate(value); return *this;}

    /**
     * <p>The predicate of this trigger, which defines when it will fire.</p>
     */
    inline TriggerUpdate& WithPredicate(Predicate&& value) { SetPredicate(std::move(value)); return *this;}


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
    inline TriggerUpdate& WithEventBatchingCondition(const EventBatchingCondition& value) { SetEventBatchingCondition(value); return *this;}

    /**
     * <p>Batch condition that must be met (specified number of events received or
     * batch time window expired) before EventBridge event trigger fires.</p>
     */
    inline TriggerUpdate& WithEventBatchingCondition(EventBatchingCondition&& value) { SetEventBatchingCondition(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

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
