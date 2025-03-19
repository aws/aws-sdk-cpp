/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace LookoutEquipment
{
namespace Model
{

  /**
   * <p>Contains information about the specific inference event, including start and
   * end time, diagnostics information, event duration and so on.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/InferenceEventSummary">AWS
   * API Reference</a></p>
   */
  class InferenceEventSummary
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API InferenceEventSummary() = default;
    AWS_LOOKOUTEQUIPMENT_API InferenceEventSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API InferenceEventSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the inference scheduler being used for the
     * inference event. </p>
     */
    inline const Aws::String& GetInferenceSchedulerArn() const { return m_inferenceSchedulerArn; }
    inline bool InferenceSchedulerArnHasBeenSet() const { return m_inferenceSchedulerArnHasBeenSet; }
    template<typename InferenceSchedulerArnT = Aws::String>
    void SetInferenceSchedulerArn(InferenceSchedulerArnT&& value) { m_inferenceSchedulerArnHasBeenSet = true; m_inferenceSchedulerArn = std::forward<InferenceSchedulerArnT>(value); }
    template<typename InferenceSchedulerArnT = Aws::String>
    InferenceEventSummary& WithInferenceSchedulerArn(InferenceSchedulerArnT&& value) { SetInferenceSchedulerArn(std::forward<InferenceSchedulerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the inference scheduler being used for the inference events. </p>
     */
    inline const Aws::String& GetInferenceSchedulerName() const { return m_inferenceSchedulerName; }
    inline bool InferenceSchedulerNameHasBeenSet() const { return m_inferenceSchedulerNameHasBeenSet; }
    template<typename InferenceSchedulerNameT = Aws::String>
    void SetInferenceSchedulerName(InferenceSchedulerNameT&& value) { m_inferenceSchedulerNameHasBeenSet = true; m_inferenceSchedulerName = std::forward<InferenceSchedulerNameT>(value); }
    template<typename InferenceSchedulerNameT = Aws::String>
    InferenceEventSummary& WithInferenceSchedulerName(InferenceSchedulerNameT&& value) { SetInferenceSchedulerName(std::forward<InferenceSchedulerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the starting time of an inference event. </p>
     */
    inline const Aws::Utils::DateTime& GetEventStartTime() const { return m_eventStartTime; }
    inline bool EventStartTimeHasBeenSet() const { return m_eventStartTimeHasBeenSet; }
    template<typename EventStartTimeT = Aws::Utils::DateTime>
    void SetEventStartTime(EventStartTimeT&& value) { m_eventStartTimeHasBeenSet = true; m_eventStartTime = std::forward<EventStartTimeT>(value); }
    template<typename EventStartTimeT = Aws::Utils::DateTime>
    InferenceEventSummary& WithEventStartTime(EventStartTimeT&& value) { SetEventStartTime(std::forward<EventStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the ending time of an inference event. </p>
     */
    inline const Aws::Utils::DateTime& GetEventEndTime() const { return m_eventEndTime; }
    inline bool EventEndTimeHasBeenSet() const { return m_eventEndTimeHasBeenSet; }
    template<typename EventEndTimeT = Aws::Utils::DateTime>
    void SetEventEndTime(EventEndTimeT&& value) { m_eventEndTimeHasBeenSet = true; m_eventEndTime = std::forward<EventEndTimeT>(value); }
    template<typename EventEndTimeT = Aws::Utils::DateTime>
    InferenceEventSummary& WithEventEndTime(EventEndTimeT&& value) { SetEventEndTime(std::forward<EventEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array which specifies the names and values of all sensors contributing to
     * an inference event.</p>
     */
    inline const Aws::String& GetDiagnostics() const { return m_diagnostics; }
    inline bool DiagnosticsHasBeenSet() const { return m_diagnosticsHasBeenSet; }
    template<typename DiagnosticsT = Aws::String>
    void SetDiagnostics(DiagnosticsT&& value) { m_diagnosticsHasBeenSet = true; m_diagnostics = std::forward<DiagnosticsT>(value); }
    template<typename DiagnosticsT = Aws::String>
    InferenceEventSummary& WithDiagnostics(DiagnosticsT&& value) { SetDiagnostics(std::forward<DiagnosticsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the size of an inference event in seconds. </p>
     */
    inline long long GetEventDurationInSeconds() const { return m_eventDurationInSeconds; }
    inline bool EventDurationInSecondsHasBeenSet() const { return m_eventDurationInSecondsHasBeenSet; }
    inline void SetEventDurationInSeconds(long long value) { m_eventDurationInSecondsHasBeenSet = true; m_eventDurationInSeconds = value; }
    inline InferenceEventSummary& WithEventDurationInSeconds(long long value) { SetEventDurationInSeconds(value); return *this;}
    ///@}
  private:

    Aws::String m_inferenceSchedulerArn;
    bool m_inferenceSchedulerArnHasBeenSet = false;

    Aws::String m_inferenceSchedulerName;
    bool m_inferenceSchedulerNameHasBeenSet = false;

    Aws::Utils::DateTime m_eventStartTime{};
    bool m_eventStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_eventEndTime{};
    bool m_eventEndTimeHasBeenSet = false;

    Aws::String m_diagnostics;
    bool m_diagnosticsHasBeenSet = false;

    long long m_eventDurationInSeconds{0};
    bool m_eventDurationInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
