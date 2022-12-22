/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/scheduler/Scheduler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/scheduler/model/ScheduleGroupState.h>
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
   * <p>The details of a schedule group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/scheduler-2021-06-30/ScheduleGroupSummary">AWS
   * API Reference</a></p>
   */
  class ScheduleGroupSummary
  {
  public:
    AWS_SCHEDULER_API ScheduleGroupSummary();
    AWS_SCHEDULER_API ScheduleGroupSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEDULER_API ScheduleGroupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEDULER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the schedule group.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule group.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule group.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule group.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule group.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule group.</p>
     */
    inline ScheduleGroupSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule group.</p>
     */
    inline ScheduleGroupSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the schedule group.</p>
     */
    inline ScheduleGroupSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The time at which the schedule group was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The time at which the schedule group was created.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The time at which the schedule group was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The time at which the schedule group was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The time at which the schedule group was created.</p>
     */
    inline ScheduleGroupSummary& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The time at which the schedule group was created.</p>
     */
    inline ScheduleGroupSummary& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The time at which the schedule group was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationDate() const{ return m_lastModificationDate; }

    /**
     * <p>The time at which the schedule group was last modified.</p>
     */
    inline bool LastModificationDateHasBeenSet() const { return m_lastModificationDateHasBeenSet; }

    /**
     * <p>The time at which the schedule group was last modified.</p>
     */
    inline void SetLastModificationDate(const Aws::Utils::DateTime& value) { m_lastModificationDateHasBeenSet = true; m_lastModificationDate = value; }

    /**
     * <p>The time at which the schedule group was last modified.</p>
     */
    inline void SetLastModificationDate(Aws::Utils::DateTime&& value) { m_lastModificationDateHasBeenSet = true; m_lastModificationDate = std::move(value); }

    /**
     * <p>The time at which the schedule group was last modified.</p>
     */
    inline ScheduleGroupSummary& WithLastModificationDate(const Aws::Utils::DateTime& value) { SetLastModificationDate(value); return *this;}

    /**
     * <p>The time at which the schedule group was last modified.</p>
     */
    inline ScheduleGroupSummary& WithLastModificationDate(Aws::Utils::DateTime&& value) { SetLastModificationDate(std::move(value)); return *this;}


    /**
     * <p>The name of the schedule group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the schedule group.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the schedule group.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the schedule group.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the schedule group.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the schedule group.</p>
     */
    inline ScheduleGroupSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the schedule group.</p>
     */
    inline ScheduleGroupSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the schedule group.</p>
     */
    inline ScheduleGroupSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies the state of the schedule group.</p>
     */
    inline const ScheduleGroupState& GetState() const{ return m_state; }

    /**
     * <p>Specifies the state of the schedule group.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>Specifies the state of the schedule group.</p>
     */
    inline void SetState(const ScheduleGroupState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Specifies the state of the schedule group.</p>
     */
    inline void SetState(ScheduleGroupState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>Specifies the state of the schedule group.</p>
     */
    inline ScheduleGroupSummary& WithState(const ScheduleGroupState& value) { SetState(value); return *this;}

    /**
     * <p>Specifies the state of the schedule group.</p>
     */
    inline ScheduleGroupSummary& WithState(ScheduleGroupState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastModificationDate;
    bool m_lastModificationDateHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ScheduleGroupState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace Scheduler
} // namespace Aws
