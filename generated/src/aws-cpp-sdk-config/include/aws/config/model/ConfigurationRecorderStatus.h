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
   * <p>The current status of the configuration recorder.</p> <p>For a detailed
   * status of recording events over time, add your Config events to CloudWatch
   * metrics and use CloudWatch metrics.</p><p><h3>See Also:</h3>   <a
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


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the configuration recorder.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ConfigurationRecorderStatus& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ConfigurationRecorderStatus& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ConfigurationRecorderStatus& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configuration recorder.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ConfigurationRecorderStatus& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ConfigurationRecorderStatus& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ConfigurationRecorderStatus& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the recorder was last started.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStartTime() const{ return m_lastStartTime; }
    inline bool LastStartTimeHasBeenSet() const { return m_lastStartTimeHasBeenSet; }
    inline void SetLastStartTime(const Aws::Utils::DateTime& value) { m_lastStartTimeHasBeenSet = true; m_lastStartTime = value; }
    inline void SetLastStartTime(Aws::Utils::DateTime&& value) { m_lastStartTimeHasBeenSet = true; m_lastStartTime = std::move(value); }
    inline ConfigurationRecorderStatus& WithLastStartTime(const Aws::Utils::DateTime& value) { SetLastStartTime(value); return *this;}
    inline ConfigurationRecorderStatus& WithLastStartTime(Aws::Utils::DateTime&& value) { SetLastStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the recorder was last stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStopTime() const{ return m_lastStopTime; }
    inline bool LastStopTimeHasBeenSet() const { return m_lastStopTimeHasBeenSet; }
    inline void SetLastStopTime(const Aws::Utils::DateTime& value) { m_lastStopTimeHasBeenSet = true; m_lastStopTime = value; }
    inline void SetLastStopTime(Aws::Utils::DateTime&& value) { m_lastStopTimeHasBeenSet = true; m_lastStopTime = std::move(value); }
    inline ConfigurationRecorderStatus& WithLastStopTime(const Aws::Utils::DateTime& value) { SetLastStopTime(value); return *this;}
    inline ConfigurationRecorderStatus& WithLastStopTime(Aws::Utils::DateTime&& value) { SetLastStopTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether or not the recorder is currently recording.</p>
     */
    inline bool GetRecording() const{ return m_recording; }
    inline bool RecordingHasBeenSet() const { return m_recordingHasBeenSet; }
    inline void SetRecording(bool value) { m_recordingHasBeenSet = true; m_recording = value; }
    inline ConfigurationRecorderStatus& WithRecording(bool value) { SetRecording(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the latest recording event processed by the recorder.</p>
     */
    inline const RecorderStatus& GetLastStatus() const{ return m_lastStatus; }
    inline bool LastStatusHasBeenSet() const { return m_lastStatusHasBeenSet; }
    inline void SetLastStatus(const RecorderStatus& value) { m_lastStatusHasBeenSet = true; m_lastStatus = value; }
    inline void SetLastStatus(RecorderStatus&& value) { m_lastStatusHasBeenSet = true; m_lastStatus = std::move(value); }
    inline ConfigurationRecorderStatus& WithLastStatus(const RecorderStatus& value) { SetLastStatus(value); return *this;}
    inline ConfigurationRecorderStatus& WithLastStatus(RecorderStatus&& value) { SetLastStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest error code from when the recorder last failed.</p>
     */
    inline const Aws::String& GetLastErrorCode() const{ return m_lastErrorCode; }
    inline bool LastErrorCodeHasBeenSet() const { return m_lastErrorCodeHasBeenSet; }
    inline void SetLastErrorCode(const Aws::String& value) { m_lastErrorCodeHasBeenSet = true; m_lastErrorCode = value; }
    inline void SetLastErrorCode(Aws::String&& value) { m_lastErrorCodeHasBeenSet = true; m_lastErrorCode = std::move(value); }
    inline void SetLastErrorCode(const char* value) { m_lastErrorCodeHasBeenSet = true; m_lastErrorCode.assign(value); }
    inline ConfigurationRecorderStatus& WithLastErrorCode(const Aws::String& value) { SetLastErrorCode(value); return *this;}
    inline ConfigurationRecorderStatus& WithLastErrorCode(Aws::String&& value) { SetLastErrorCode(std::move(value)); return *this;}
    inline ConfigurationRecorderStatus& WithLastErrorCode(const char* value) { SetLastErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest error message from when the recorder last failed.</p>
     */
    inline const Aws::String& GetLastErrorMessage() const{ return m_lastErrorMessage; }
    inline bool LastErrorMessageHasBeenSet() const { return m_lastErrorMessageHasBeenSet; }
    inline void SetLastErrorMessage(const Aws::String& value) { m_lastErrorMessageHasBeenSet = true; m_lastErrorMessage = value; }
    inline void SetLastErrorMessage(Aws::String&& value) { m_lastErrorMessageHasBeenSet = true; m_lastErrorMessage = std::move(value); }
    inline void SetLastErrorMessage(const char* value) { m_lastErrorMessageHasBeenSet = true; m_lastErrorMessage.assign(value); }
    inline ConfigurationRecorderStatus& WithLastErrorMessage(const Aws::String& value) { SetLastErrorMessage(value); return *this;}
    inline ConfigurationRecorderStatus& WithLastErrorMessage(Aws::String&& value) { SetLastErrorMessage(std::move(value)); return *this;}
    inline ConfigurationRecorderStatus& WithLastErrorMessage(const char* value) { SetLastErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the latest change in status of an recording event processed by
     * the recorder.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStatusChangeTime() const{ return m_lastStatusChangeTime; }
    inline bool LastStatusChangeTimeHasBeenSet() const { return m_lastStatusChangeTimeHasBeenSet; }
    inline void SetLastStatusChangeTime(const Aws::Utils::DateTime& value) { m_lastStatusChangeTimeHasBeenSet = true; m_lastStatusChangeTime = value; }
    inline void SetLastStatusChangeTime(Aws::Utils::DateTime&& value) { m_lastStatusChangeTimeHasBeenSet = true; m_lastStatusChangeTime = std::move(value); }
    inline ConfigurationRecorderStatus& WithLastStatusChangeTime(const Aws::Utils::DateTime& value) { SetLastStatusChangeTime(value); return *this;}
    inline ConfigurationRecorderStatus& WithLastStatusChangeTime(Aws::Utils::DateTime&& value) { SetLastStatusChangeTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For service-linked configuration recorders, the service principal of the
     * linked Amazon Web Services service.</p>
     */
    inline const Aws::String& GetServicePrincipal() const{ return m_servicePrincipal; }
    inline bool ServicePrincipalHasBeenSet() const { return m_servicePrincipalHasBeenSet; }
    inline void SetServicePrincipal(const Aws::String& value) { m_servicePrincipalHasBeenSet = true; m_servicePrincipal = value; }
    inline void SetServicePrincipal(Aws::String&& value) { m_servicePrincipalHasBeenSet = true; m_servicePrincipal = std::move(value); }
    inline void SetServicePrincipal(const char* value) { m_servicePrincipalHasBeenSet = true; m_servicePrincipal.assign(value); }
    inline ConfigurationRecorderStatus& WithServicePrincipal(const Aws::String& value) { SetServicePrincipal(value); return *this;}
    inline ConfigurationRecorderStatus& WithServicePrincipal(Aws::String&& value) { SetServicePrincipal(std::move(value)); return *this;}
    inline ConfigurationRecorderStatus& WithServicePrincipal(const char* value) { SetServicePrincipal(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

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

    Aws::String m_servicePrincipal;
    bool m_servicePrincipalHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
