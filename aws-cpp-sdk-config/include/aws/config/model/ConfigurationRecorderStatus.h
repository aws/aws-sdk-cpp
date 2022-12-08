/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/config/model/RecorderStatus.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>The current status of the configuration recorder.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ConfigurationRecorderStatus">AWS
   * API Reference</a></p>
   */
  class ConfigurationRecorderStatus
  {
  public:
    AWS_CONFIGSERVICE_API ConfigurationRecorderStatus();
    AWS_CONFIGSERVICE_API ConfigurationRecorderStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ConfigurationRecorderStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the configuration recorder.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the configuration recorder.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the configuration recorder.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the configuration recorder.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the configuration recorder.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the configuration recorder.</p>
     */
    inline ConfigurationRecorderStatus& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the configuration recorder.</p>
     */
    inline ConfigurationRecorderStatus& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration recorder.</p>
     */
    inline ConfigurationRecorderStatus& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The time the recorder was last started.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStartTime() const{ return m_lastStartTime; }

    /**
     * <p>The time the recorder was last started.</p>
     */
    inline bool LastStartTimeHasBeenSet() const { return m_lastStartTimeHasBeenSet; }

    /**
     * <p>The time the recorder was last started.</p>
     */
    inline void SetLastStartTime(const Aws::Utils::DateTime& value) { m_lastStartTimeHasBeenSet = true; m_lastStartTime = value; }

    /**
     * <p>The time the recorder was last started.</p>
     */
    inline void SetLastStartTime(Aws::Utils::DateTime&& value) { m_lastStartTimeHasBeenSet = true; m_lastStartTime = std::move(value); }

    /**
     * <p>The time the recorder was last started.</p>
     */
    inline ConfigurationRecorderStatus& WithLastStartTime(const Aws::Utils::DateTime& value) { SetLastStartTime(value); return *this;}

    /**
     * <p>The time the recorder was last started.</p>
     */
    inline ConfigurationRecorderStatus& WithLastStartTime(Aws::Utils::DateTime&& value) { SetLastStartTime(std::move(value)); return *this;}


    /**
     * <p>The time the recorder was last stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStopTime() const{ return m_lastStopTime; }

    /**
     * <p>The time the recorder was last stopped.</p>
     */
    inline bool LastStopTimeHasBeenSet() const { return m_lastStopTimeHasBeenSet; }

    /**
     * <p>The time the recorder was last stopped.</p>
     */
    inline void SetLastStopTime(const Aws::Utils::DateTime& value) { m_lastStopTimeHasBeenSet = true; m_lastStopTime = value; }

    /**
     * <p>The time the recorder was last stopped.</p>
     */
    inline void SetLastStopTime(Aws::Utils::DateTime&& value) { m_lastStopTimeHasBeenSet = true; m_lastStopTime = std::move(value); }

    /**
     * <p>The time the recorder was last stopped.</p>
     */
    inline ConfigurationRecorderStatus& WithLastStopTime(const Aws::Utils::DateTime& value) { SetLastStopTime(value); return *this;}

    /**
     * <p>The time the recorder was last stopped.</p>
     */
    inline ConfigurationRecorderStatus& WithLastStopTime(Aws::Utils::DateTime&& value) { SetLastStopTime(std::move(value)); return *this;}


    /**
     * <p>Specifies whether or not the recorder is currently recording.</p>
     */
    inline bool GetRecording() const{ return m_recording; }

    /**
     * <p>Specifies whether or not the recorder is currently recording.</p>
     */
    inline bool RecordingHasBeenSet() const { return m_recordingHasBeenSet; }

    /**
     * <p>Specifies whether or not the recorder is currently recording.</p>
     */
    inline void SetRecording(bool value) { m_recordingHasBeenSet = true; m_recording = value; }

    /**
     * <p>Specifies whether or not the recorder is currently recording.</p>
     */
    inline ConfigurationRecorderStatus& WithRecording(bool value) { SetRecording(value); return *this;}


    /**
     * <p>The last (previous) status of the recorder.</p>
     */
    inline const RecorderStatus& GetLastStatus() const{ return m_lastStatus; }

    /**
     * <p>The last (previous) status of the recorder.</p>
     */
    inline bool LastStatusHasBeenSet() const { return m_lastStatusHasBeenSet; }

    /**
     * <p>The last (previous) status of the recorder.</p>
     */
    inline void SetLastStatus(const RecorderStatus& value) { m_lastStatusHasBeenSet = true; m_lastStatus = value; }

    /**
     * <p>The last (previous) status of the recorder.</p>
     */
    inline void SetLastStatus(RecorderStatus&& value) { m_lastStatusHasBeenSet = true; m_lastStatus = std::move(value); }

    /**
     * <p>The last (previous) status of the recorder.</p>
     */
    inline ConfigurationRecorderStatus& WithLastStatus(const RecorderStatus& value) { SetLastStatus(value); return *this;}

    /**
     * <p>The last (previous) status of the recorder.</p>
     */
    inline ConfigurationRecorderStatus& WithLastStatus(RecorderStatus&& value) { SetLastStatus(std::move(value)); return *this;}


    /**
     * <p>The error code indicating that the recording failed.</p>
     */
    inline const Aws::String& GetLastErrorCode() const{ return m_lastErrorCode; }

    /**
     * <p>The error code indicating that the recording failed.</p>
     */
    inline bool LastErrorCodeHasBeenSet() const { return m_lastErrorCodeHasBeenSet; }

    /**
     * <p>The error code indicating that the recording failed.</p>
     */
    inline void SetLastErrorCode(const Aws::String& value) { m_lastErrorCodeHasBeenSet = true; m_lastErrorCode = value; }

    /**
     * <p>The error code indicating that the recording failed.</p>
     */
    inline void SetLastErrorCode(Aws::String&& value) { m_lastErrorCodeHasBeenSet = true; m_lastErrorCode = std::move(value); }

    /**
     * <p>The error code indicating that the recording failed.</p>
     */
    inline void SetLastErrorCode(const char* value) { m_lastErrorCodeHasBeenSet = true; m_lastErrorCode.assign(value); }

    /**
     * <p>The error code indicating that the recording failed.</p>
     */
    inline ConfigurationRecorderStatus& WithLastErrorCode(const Aws::String& value) { SetLastErrorCode(value); return *this;}

    /**
     * <p>The error code indicating that the recording failed.</p>
     */
    inline ConfigurationRecorderStatus& WithLastErrorCode(Aws::String&& value) { SetLastErrorCode(std::move(value)); return *this;}

    /**
     * <p>The error code indicating that the recording failed.</p>
     */
    inline ConfigurationRecorderStatus& WithLastErrorCode(const char* value) { SetLastErrorCode(value); return *this;}


    /**
     * <p>The message indicating that the recording failed due to an error.</p>
     */
    inline const Aws::String& GetLastErrorMessage() const{ return m_lastErrorMessage; }

    /**
     * <p>The message indicating that the recording failed due to an error.</p>
     */
    inline bool LastErrorMessageHasBeenSet() const { return m_lastErrorMessageHasBeenSet; }

    /**
     * <p>The message indicating that the recording failed due to an error.</p>
     */
    inline void SetLastErrorMessage(const Aws::String& value) { m_lastErrorMessageHasBeenSet = true; m_lastErrorMessage = value; }

    /**
     * <p>The message indicating that the recording failed due to an error.</p>
     */
    inline void SetLastErrorMessage(Aws::String&& value) { m_lastErrorMessageHasBeenSet = true; m_lastErrorMessage = std::move(value); }

    /**
     * <p>The message indicating that the recording failed due to an error.</p>
     */
    inline void SetLastErrorMessage(const char* value) { m_lastErrorMessageHasBeenSet = true; m_lastErrorMessage.assign(value); }

    /**
     * <p>The message indicating that the recording failed due to an error.</p>
     */
    inline ConfigurationRecorderStatus& WithLastErrorMessage(const Aws::String& value) { SetLastErrorMessage(value); return *this;}

    /**
     * <p>The message indicating that the recording failed due to an error.</p>
     */
    inline ConfigurationRecorderStatus& WithLastErrorMessage(Aws::String&& value) { SetLastErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The message indicating that the recording failed due to an error.</p>
     */
    inline ConfigurationRecorderStatus& WithLastErrorMessage(const char* value) { SetLastErrorMessage(value); return *this;}


    /**
     * <p>The time when the status was last changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStatusChangeTime() const{ return m_lastStatusChangeTime; }

    /**
     * <p>The time when the status was last changed.</p>
     */
    inline bool LastStatusChangeTimeHasBeenSet() const { return m_lastStatusChangeTimeHasBeenSet; }

    /**
     * <p>The time when the status was last changed.</p>
     */
    inline void SetLastStatusChangeTime(const Aws::Utils::DateTime& value) { m_lastStatusChangeTimeHasBeenSet = true; m_lastStatusChangeTime = value; }

    /**
     * <p>The time when the status was last changed.</p>
     */
    inline void SetLastStatusChangeTime(Aws::Utils::DateTime&& value) { m_lastStatusChangeTimeHasBeenSet = true; m_lastStatusChangeTime = std::move(value); }

    /**
     * <p>The time when the status was last changed.</p>
     */
    inline ConfigurationRecorderStatus& WithLastStatusChangeTime(const Aws::Utils::DateTime& value) { SetLastStatusChangeTime(value); return *this;}

    /**
     * <p>The time when the status was last changed.</p>
     */
    inline ConfigurationRecorderStatus& WithLastStatusChangeTime(Aws::Utils::DateTime&& value) { SetLastStatusChangeTime(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_lastStartTime;
    bool m_lastStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastStopTime;
    bool m_lastStopTimeHasBeenSet = false;

    bool m_recording;
    bool m_recordingHasBeenSet = false;

    RecorderStatus m_lastStatus;
    bool m_lastStatusHasBeenSet = false;

    Aws::String m_lastErrorCode;
    bool m_lastErrorCodeHasBeenSet = false;

    Aws::String m_lastErrorMessage;
    bool m_lastErrorMessageHasBeenSet = false;

    Aws::Utils::DateTime m_lastStatusChangeTime;
    bool m_lastStatusChangeTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
