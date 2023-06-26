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
    AWS_LOOKOUTEQUIPMENT_API InferenceEventSummary();
    AWS_LOOKOUTEQUIPMENT_API InferenceEventSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API InferenceEventSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon Resource Name (ARN) of the inference scheduler being used for the
     * inference event. </p>
     */
    inline const Aws::String& GetInferenceSchedulerArn() const{ return m_inferenceSchedulerArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the inference scheduler being used for the
     * inference event. </p>
     */
    inline bool InferenceSchedulerArnHasBeenSet() const { return m_inferenceSchedulerArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the inference scheduler being used for the
     * inference event. </p>
     */
    inline void SetInferenceSchedulerArn(const Aws::String& value) { m_inferenceSchedulerArnHasBeenSet = true; m_inferenceSchedulerArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the inference scheduler being used for the
     * inference event. </p>
     */
    inline void SetInferenceSchedulerArn(Aws::String&& value) { m_inferenceSchedulerArnHasBeenSet = true; m_inferenceSchedulerArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the inference scheduler being used for the
     * inference event. </p>
     */
    inline void SetInferenceSchedulerArn(const char* value) { m_inferenceSchedulerArnHasBeenSet = true; m_inferenceSchedulerArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the inference scheduler being used for the
     * inference event. </p>
     */
    inline InferenceEventSummary& WithInferenceSchedulerArn(const Aws::String& value) { SetInferenceSchedulerArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the inference scheduler being used for the
     * inference event. </p>
     */
    inline InferenceEventSummary& WithInferenceSchedulerArn(Aws::String&& value) { SetInferenceSchedulerArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the inference scheduler being used for the
     * inference event. </p>
     */
    inline InferenceEventSummary& WithInferenceSchedulerArn(const char* value) { SetInferenceSchedulerArn(value); return *this;}


    /**
     * <p>The name of the inference scheduler being used for the inference events. </p>
     */
    inline const Aws::String& GetInferenceSchedulerName() const{ return m_inferenceSchedulerName; }

    /**
     * <p>The name of the inference scheduler being used for the inference events. </p>
     */
    inline bool InferenceSchedulerNameHasBeenSet() const { return m_inferenceSchedulerNameHasBeenSet; }

    /**
     * <p>The name of the inference scheduler being used for the inference events. </p>
     */
    inline void SetInferenceSchedulerName(const Aws::String& value) { m_inferenceSchedulerNameHasBeenSet = true; m_inferenceSchedulerName = value; }

    /**
     * <p>The name of the inference scheduler being used for the inference events. </p>
     */
    inline void SetInferenceSchedulerName(Aws::String&& value) { m_inferenceSchedulerNameHasBeenSet = true; m_inferenceSchedulerName = std::move(value); }

    /**
     * <p>The name of the inference scheduler being used for the inference events. </p>
     */
    inline void SetInferenceSchedulerName(const char* value) { m_inferenceSchedulerNameHasBeenSet = true; m_inferenceSchedulerName.assign(value); }

    /**
     * <p>The name of the inference scheduler being used for the inference events. </p>
     */
    inline InferenceEventSummary& WithInferenceSchedulerName(const Aws::String& value) { SetInferenceSchedulerName(value); return *this;}

    /**
     * <p>The name of the inference scheduler being used for the inference events. </p>
     */
    inline InferenceEventSummary& WithInferenceSchedulerName(Aws::String&& value) { SetInferenceSchedulerName(std::move(value)); return *this;}

    /**
     * <p>The name of the inference scheduler being used for the inference events. </p>
     */
    inline InferenceEventSummary& WithInferenceSchedulerName(const char* value) { SetInferenceSchedulerName(value); return *this;}


    /**
     * <p>Indicates the starting time of an inference event. </p>
     */
    inline const Aws::Utils::DateTime& GetEventStartTime() const{ return m_eventStartTime; }

    /**
     * <p>Indicates the starting time of an inference event. </p>
     */
    inline bool EventStartTimeHasBeenSet() const { return m_eventStartTimeHasBeenSet; }

    /**
     * <p>Indicates the starting time of an inference event. </p>
     */
    inline void SetEventStartTime(const Aws::Utils::DateTime& value) { m_eventStartTimeHasBeenSet = true; m_eventStartTime = value; }

    /**
     * <p>Indicates the starting time of an inference event. </p>
     */
    inline void SetEventStartTime(Aws::Utils::DateTime&& value) { m_eventStartTimeHasBeenSet = true; m_eventStartTime = std::move(value); }

    /**
     * <p>Indicates the starting time of an inference event. </p>
     */
    inline InferenceEventSummary& WithEventStartTime(const Aws::Utils::DateTime& value) { SetEventStartTime(value); return *this;}

    /**
     * <p>Indicates the starting time of an inference event. </p>
     */
    inline InferenceEventSummary& WithEventStartTime(Aws::Utils::DateTime&& value) { SetEventStartTime(std::move(value)); return *this;}


    /**
     * <p>Indicates the ending time of an inference event. </p>
     */
    inline const Aws::Utils::DateTime& GetEventEndTime() const{ return m_eventEndTime; }

    /**
     * <p>Indicates the ending time of an inference event. </p>
     */
    inline bool EventEndTimeHasBeenSet() const { return m_eventEndTimeHasBeenSet; }

    /**
     * <p>Indicates the ending time of an inference event. </p>
     */
    inline void SetEventEndTime(const Aws::Utils::DateTime& value) { m_eventEndTimeHasBeenSet = true; m_eventEndTime = value; }

    /**
     * <p>Indicates the ending time of an inference event. </p>
     */
    inline void SetEventEndTime(Aws::Utils::DateTime&& value) { m_eventEndTimeHasBeenSet = true; m_eventEndTime = std::move(value); }

    /**
     * <p>Indicates the ending time of an inference event. </p>
     */
    inline InferenceEventSummary& WithEventEndTime(const Aws::Utils::DateTime& value) { SetEventEndTime(value); return *this;}

    /**
     * <p>Indicates the ending time of an inference event. </p>
     */
    inline InferenceEventSummary& WithEventEndTime(Aws::Utils::DateTime&& value) { SetEventEndTime(std::move(value)); return *this;}


    /**
     * <p> An array which specifies the names and values of all sensors contributing to
     * an inference event.</p>
     */
    inline const Aws::String& GetDiagnostics() const{ return m_diagnostics; }

    /**
     * <p> An array which specifies the names and values of all sensors contributing to
     * an inference event.</p>
     */
    inline bool DiagnosticsHasBeenSet() const { return m_diagnosticsHasBeenSet; }

    /**
     * <p> An array which specifies the names and values of all sensors contributing to
     * an inference event.</p>
     */
    inline void SetDiagnostics(const Aws::String& value) { m_diagnosticsHasBeenSet = true; m_diagnostics = value; }

    /**
     * <p> An array which specifies the names and values of all sensors contributing to
     * an inference event.</p>
     */
    inline void SetDiagnostics(Aws::String&& value) { m_diagnosticsHasBeenSet = true; m_diagnostics = std::move(value); }

    /**
     * <p> An array which specifies the names and values of all sensors contributing to
     * an inference event.</p>
     */
    inline void SetDiagnostics(const char* value) { m_diagnosticsHasBeenSet = true; m_diagnostics.assign(value); }

    /**
     * <p> An array which specifies the names and values of all sensors contributing to
     * an inference event.</p>
     */
    inline InferenceEventSummary& WithDiagnostics(const Aws::String& value) { SetDiagnostics(value); return *this;}

    /**
     * <p> An array which specifies the names and values of all sensors contributing to
     * an inference event.</p>
     */
    inline InferenceEventSummary& WithDiagnostics(Aws::String&& value) { SetDiagnostics(std::move(value)); return *this;}

    /**
     * <p> An array which specifies the names and values of all sensors contributing to
     * an inference event.</p>
     */
    inline InferenceEventSummary& WithDiagnostics(const char* value) { SetDiagnostics(value); return *this;}


    /**
     * <p> Indicates the size of an inference event in seconds. </p>
     */
    inline long long GetEventDurationInSeconds() const{ return m_eventDurationInSeconds; }

    /**
     * <p> Indicates the size of an inference event in seconds. </p>
     */
    inline bool EventDurationInSecondsHasBeenSet() const { return m_eventDurationInSecondsHasBeenSet; }

    /**
     * <p> Indicates the size of an inference event in seconds. </p>
     */
    inline void SetEventDurationInSeconds(long long value) { m_eventDurationInSecondsHasBeenSet = true; m_eventDurationInSeconds = value; }

    /**
     * <p> Indicates the size of an inference event in seconds. </p>
     */
    inline InferenceEventSummary& WithEventDurationInSeconds(long long value) { SetEventDurationInSeconds(value); return *this;}

  private:

    Aws::String m_inferenceSchedulerArn;
    bool m_inferenceSchedulerArnHasBeenSet = false;

    Aws::String m_inferenceSchedulerName;
    bool m_inferenceSchedulerNameHasBeenSet = false;

    Aws::Utils::DateTime m_eventStartTime;
    bool m_eventStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_eventEndTime;
    bool m_eventEndTimeHasBeenSet = false;

    Aws::String m_diagnostics;
    bool m_diagnosticsHasBeenSet = false;

    long long m_eventDurationInSeconds;
    bool m_eventDurationInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
