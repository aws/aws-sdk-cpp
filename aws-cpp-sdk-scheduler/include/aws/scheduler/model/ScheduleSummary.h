/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/scheduler/Scheduler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/scheduler/model/ScheduleState.h>
#include <aws/scheduler/model/TargetSummary.h>
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
namespace Scheduler
{
namespace Model
{

  /**
   * <p>The details of a schedule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/scheduler-2021-06-30/ScheduleSummary">AWS
   * API Reference</a></p>
   */
  class ScheduleSummary
  {
  public:
    AWS_SCHEDULER_API ScheduleSummary();
    AWS_SCHEDULER_API ScheduleSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEDULER_API ScheduleSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEDULER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the schedule.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule.</p>
     */
    inline ScheduleSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule.</p>
     */
    inline ScheduleSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule.</p>
     */
    inline ScheduleSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The time at which the schedule was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The time at which the schedule was created.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The time at which the schedule was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The time at which the schedule was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The time at which the schedule was created.</p>
     */
    inline ScheduleSummary& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The time at which the schedule was created.</p>
     */
    inline ScheduleSummary& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The name of the schedule group associated with this schedule.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The name of the schedule group associated with this schedule.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>The name of the schedule group associated with this schedule.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the schedule group associated with this schedule.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>The name of the schedule group associated with this schedule.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The name of the schedule group associated with this schedule.</p>
     */
    inline ScheduleSummary& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the schedule group associated with this schedule.</p>
     */
    inline ScheduleSummary& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the schedule group associated with this schedule.</p>
     */
    inline ScheduleSummary& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>The time at which the schedule was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationDate() const{ return m_lastModificationDate; }

    /**
     * <p>The time at which the schedule was last modified.</p>
     */
    inline bool LastModificationDateHasBeenSet() const { return m_lastModificationDateHasBeenSet; }

    /**
     * <p>The time at which the schedule was last modified.</p>
     */
    inline void SetLastModificationDate(const Aws::Utils::DateTime& value) { m_lastModificationDateHasBeenSet = true; m_lastModificationDate = value; }

    /**
     * <p>The time at which the schedule was last modified.</p>
     */
    inline void SetLastModificationDate(Aws::Utils::DateTime&& value) { m_lastModificationDateHasBeenSet = true; m_lastModificationDate = std::move(value); }

    /**
     * <p>The time at which the schedule was last modified.</p>
     */
    inline ScheduleSummary& WithLastModificationDate(const Aws::Utils::DateTime& value) { SetLastModificationDate(value); return *this;}

    /**
     * <p>The time at which the schedule was last modified.</p>
     */
    inline ScheduleSummary& WithLastModificationDate(Aws::Utils::DateTime&& value) { SetLastModificationDate(std::move(value)); return *this;}


    /**
     * <p>The name of the schedule.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the schedule.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the schedule.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the schedule.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the schedule.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the schedule.</p>
     */
    inline ScheduleSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the schedule.</p>
     */
    inline ScheduleSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the schedule.</p>
     */
    inline ScheduleSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies whether the schedule is enabled or disabled.</p>
     */
    inline const ScheduleState& GetState() const{ return m_state; }

    /**
     * <p>Specifies whether the schedule is enabled or disabled.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>Specifies whether the schedule is enabled or disabled.</p>
     */
    inline void SetState(const ScheduleState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Specifies whether the schedule is enabled or disabled.</p>
     */
    inline void SetState(ScheduleState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>Specifies whether the schedule is enabled or disabled.</p>
     */
    inline ScheduleSummary& WithState(const ScheduleState& value) { SetState(value); return *this;}

    /**
     * <p>Specifies whether the schedule is enabled or disabled.</p>
     */
    inline ScheduleSummary& WithState(ScheduleState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The schedule's target details.</p>
     */
    inline const TargetSummary& GetTarget() const{ return m_target; }

    /**
     * <p>The schedule's target details.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>The schedule's target details.</p>
     */
    inline void SetTarget(const TargetSummary& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>The schedule's target details.</p>
     */
    inline void SetTarget(TargetSummary&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>The schedule's target details.</p>
     */
    inline ScheduleSummary& WithTarget(const TargetSummary& value) { SetTarget(value); return *this;}

    /**
     * <p>The schedule's target details.</p>
     */
    inline ScheduleSummary& WithTarget(TargetSummary&& value) { SetTarget(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::Utils::DateTime m_lastModificationDate;
    bool m_lastModificationDateHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ScheduleState m_state;
    bool m_stateHasBeenSet = false;

    TargetSummary m_target;
    bool m_targetHasBeenSet = false;
  };

} // namespace Model
} // namespace Scheduler
} // namespace Aws
