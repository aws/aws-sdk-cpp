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
    AWS_IOTEVENTS_API AlarmModelSummary() = default;
    AWS_IOTEVENTS_API AlarmModelSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API AlarmModelSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time the alarm model was created, in the Unix epoch format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    AlarmModelSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the alarm model.</p>
     */
    inline const Aws::String& GetAlarmModelDescription() const { return m_alarmModelDescription; }
    inline bool AlarmModelDescriptionHasBeenSet() const { return m_alarmModelDescriptionHasBeenSet; }
    template<typename AlarmModelDescriptionT = Aws::String>
    void SetAlarmModelDescription(AlarmModelDescriptionT&& value) { m_alarmModelDescriptionHasBeenSet = true; m_alarmModelDescription = std::forward<AlarmModelDescriptionT>(value); }
    template<typename AlarmModelDescriptionT = Aws::String>
    AlarmModelSummary& WithAlarmModelDescription(AlarmModelDescriptionT&& value) { SetAlarmModelDescription(std::forward<AlarmModelDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the alarm model.</p>
     */
    inline const Aws::String& GetAlarmModelName() const { return m_alarmModelName; }
    inline bool AlarmModelNameHasBeenSet() const { return m_alarmModelNameHasBeenSet; }
    template<typename AlarmModelNameT = Aws::String>
    void SetAlarmModelName(AlarmModelNameT&& value) { m_alarmModelNameHasBeenSet = true; m_alarmModelName = std::forward<AlarmModelNameT>(value); }
    template<typename AlarmModelNameT = Aws::String>
    AlarmModelSummary& WithAlarmModelName(AlarmModelNameT&& value) { SetAlarmModelName(std::forward<AlarmModelNameT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_alarmModelDescription;
    bool m_alarmModelDescriptionHasBeenSet = false;

    Aws::String m_alarmModelName;
    bool m_alarmModelNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
