/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoTEvents
{
namespace Model
{

  /**
   * <p>Contains a summary of an alarm model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/AlarmModelSummary">AWS
   * API Reference</a></p>
   */
  class AlarmModelSummary
  {
  public:
    AWS_IOTEVENTS_API AlarmModelSummary();
    AWS_IOTEVENTS_API AlarmModelSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API AlarmModelSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time the alarm model was created, in the Unix epoch format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time the alarm model was created, in the Unix epoch format.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time the alarm model was created, in the Unix epoch format.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time the alarm model was created, in the Unix epoch format.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time the alarm model was created, in the Unix epoch format.</p>
     */
    inline AlarmModelSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time the alarm model was created, in the Unix epoch format.</p>
     */
    inline AlarmModelSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The description of the alarm model.</p>
     */
    inline const Aws::String& GetAlarmModelDescription() const{ return m_alarmModelDescription; }

    /**
     * <p>The description of the alarm model.</p>
     */
    inline bool AlarmModelDescriptionHasBeenSet() const { return m_alarmModelDescriptionHasBeenSet; }

    /**
     * <p>The description of the alarm model.</p>
     */
    inline void SetAlarmModelDescription(const Aws::String& value) { m_alarmModelDescriptionHasBeenSet = true; m_alarmModelDescription = value; }

    /**
     * <p>The description of the alarm model.</p>
     */
    inline void SetAlarmModelDescription(Aws::String&& value) { m_alarmModelDescriptionHasBeenSet = true; m_alarmModelDescription = std::move(value); }

    /**
     * <p>The description of the alarm model.</p>
     */
    inline void SetAlarmModelDescription(const char* value) { m_alarmModelDescriptionHasBeenSet = true; m_alarmModelDescription.assign(value); }

    /**
     * <p>The description of the alarm model.</p>
     */
    inline AlarmModelSummary& WithAlarmModelDescription(const Aws::String& value) { SetAlarmModelDescription(value); return *this;}

    /**
     * <p>The description of the alarm model.</p>
     */
    inline AlarmModelSummary& WithAlarmModelDescription(Aws::String&& value) { SetAlarmModelDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the alarm model.</p>
     */
    inline AlarmModelSummary& WithAlarmModelDescription(const char* value) { SetAlarmModelDescription(value); return *this;}


    /**
     * <p>The name of the alarm model.</p>
     */
    inline const Aws::String& GetAlarmModelName() const{ return m_alarmModelName; }

    /**
     * <p>The name of the alarm model.</p>
     */
    inline bool AlarmModelNameHasBeenSet() const { return m_alarmModelNameHasBeenSet; }

    /**
     * <p>The name of the alarm model.</p>
     */
    inline void SetAlarmModelName(const Aws::String& value) { m_alarmModelNameHasBeenSet = true; m_alarmModelName = value; }

    /**
     * <p>The name of the alarm model.</p>
     */
    inline void SetAlarmModelName(Aws::String&& value) { m_alarmModelNameHasBeenSet = true; m_alarmModelName = std::move(value); }

    /**
     * <p>The name of the alarm model.</p>
     */
    inline void SetAlarmModelName(const char* value) { m_alarmModelNameHasBeenSet = true; m_alarmModelName.assign(value); }

    /**
     * <p>The name of the alarm model.</p>
     */
    inline AlarmModelSummary& WithAlarmModelName(const Aws::String& value) { SetAlarmModelName(value); return *this;}

    /**
     * <p>The name of the alarm model.</p>
     */
    inline AlarmModelSummary& WithAlarmModelName(Aws::String&& value) { SetAlarmModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the alarm model.</p>
     */
    inline AlarmModelSummary& WithAlarmModelName(const char* value) { SetAlarmModelName(value); return *this;}

  private:

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_alarmModelDescription;
    bool m_alarmModelDescriptionHasBeenSet = false;

    Aws::String m_alarmModelName;
    bool m_alarmModelNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
