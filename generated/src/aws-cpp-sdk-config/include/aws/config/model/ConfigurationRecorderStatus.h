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
    AWS_CONFIGSERVICE_API ConfigurationRecorderStatus() = default;
    AWS_CONFIGSERVICE_API ConfigurationRecorderStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ConfigurationRecorderStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the configuration recorder.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ConfigurationRecorderStatus& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configuration recorder.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ConfigurationRecorderStatus& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the recorder was last started.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStartTime() const { return m_lastStartTime; }
    inline bool LastStartTimeHasBeenSet() const { return m_lastStartTimeHasBeenSet; }
    template<typename LastStartTimeT = Aws::Utils::DateTime>
    void SetLastStartTime(LastStartTimeT&& value) { m_lastStartTimeHasBeenSet = true; m_lastStartTime = std::forward<LastStartTimeT>(value); }
    template<typename LastStartTimeT = Aws::Utils::DateTime>
    ConfigurationRecorderStatus& WithLastStartTime(LastStartTimeT&& value) { SetLastStartTime(std::forward<LastStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the recorder was last stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStopTime() const { return m_lastStopTime; }
    inline bool LastStopTimeHasBeenSet() const { return m_lastStopTimeHasBeenSet; }
    template<typename LastStopTimeT = Aws::Utils::DateTime>
    void SetLastStopTime(LastStopTimeT&& value) { m_lastStopTimeHasBeenSet = true; m_lastStopTime = std::forward<LastStopTimeT>(value); }
    template<typename LastStopTimeT = Aws::Utils::DateTime>
    ConfigurationRecorderStatus& WithLastStopTime(LastStopTimeT&& value) { SetLastStopTime(std::forward<LastStopTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether or not the recorder is currently recording.</p>
     */
    inline bool GetRecording() const { return m_recording; }
    inline bool RecordingHasBeenSet() const { return m_recordingHasBeenSet; }
    inline void SetRecording(bool value) { m_recordingHasBeenSet = true; m_recording = value; }
    inline ConfigurationRecorderStatus& WithRecording(bool value) { SetRecording(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the latest recording event processed by the recorder.</p>
     */
    inline RecorderStatus GetLastStatus() const { return m_lastStatus; }
    inline bool LastStatusHasBeenSet() const { return m_lastStatusHasBeenSet; }
    inline void SetLastStatus(RecorderStatus value) { m_lastStatusHasBeenSet = true; m_lastStatus = value; }
    inline ConfigurationRecorderStatus& WithLastStatus(RecorderStatus value) { SetLastStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest error code from when the recorder last failed.</p>
     */
    inline const Aws::String& GetLastErrorCode() const { return m_lastErrorCode; }
    inline bool LastErrorCodeHasBeenSet() const { return m_lastErrorCodeHasBeenSet; }
    template<typename LastErrorCodeT = Aws::String>
    void SetLastErrorCode(LastErrorCodeT&& value) { m_lastErrorCodeHasBeenSet = true; m_lastErrorCode = std::forward<LastErrorCodeT>(value); }
    template<typename LastErrorCodeT = Aws::String>
    ConfigurationRecorderStatus& WithLastErrorCode(LastErrorCodeT&& value) { SetLastErrorCode(std::forward<LastErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest error message from when the recorder last failed.</p>
     */
    inline const Aws::String& GetLastErrorMessage() const { return m_lastErrorMessage; }
    inline bool LastErrorMessageHasBeenSet() const { return m_lastErrorMessageHasBeenSet; }
    template<typename LastErrorMessageT = Aws::String>
    void SetLastErrorMessage(LastErrorMessageT&& value) { m_lastErrorMessageHasBeenSet = true; m_lastErrorMessage = std::forward<LastErrorMessageT>(value); }
    template<typename LastErrorMessageT = Aws::String>
    ConfigurationRecorderStatus& WithLastErrorMessage(LastErrorMessageT&& value) { SetLastErrorMessage(std::forward<LastErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the latest change in status of an recording event processed by
     * the recorder.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStatusChangeTime() const { return m_lastStatusChangeTime; }
    inline bool LastStatusChangeTimeHasBeenSet() const { return m_lastStatusChangeTimeHasBeenSet; }
    template<typename LastStatusChangeTimeT = Aws::Utils::DateTime>
    void SetLastStatusChangeTime(LastStatusChangeTimeT&& value) { m_lastStatusChangeTimeHasBeenSet = true; m_lastStatusChangeTime = std::forward<LastStatusChangeTimeT>(value); }
    template<typename LastStatusChangeTimeT = Aws::Utils::DateTime>
    ConfigurationRecorderStatus& WithLastStatusChangeTime(LastStatusChangeTimeT&& value) { SetLastStatusChangeTime(std::forward<LastStatusChangeTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For service-linked configuration recorders, the service principal of the
     * linked Amazon Web Services service.</p>
     */
    inline const Aws::String& GetServicePrincipal() const { return m_servicePrincipal; }
    inline bool ServicePrincipalHasBeenSet() const { return m_servicePrincipalHasBeenSet; }
    template<typename ServicePrincipalT = Aws::String>
    void SetServicePrincipal(ServicePrincipalT&& value) { m_servicePrincipalHasBeenSet = true; m_servicePrincipal = std::forward<ServicePrincipalT>(value); }
    template<typename ServicePrincipalT = Aws::String>
    ConfigurationRecorderStatus& WithServicePrincipal(ServicePrincipalT&& value) { SetServicePrincipal(std::forward<ServicePrincipalT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_lastStartTime{};
    bool m_lastStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastStopTime{};
    bool m_lastStopTimeHasBeenSet = false;

    bool m_recording{false};
    bool m_recordingHasBeenSet = false;

    RecorderStatus m_lastStatus{RecorderStatus::NOT_SET};
    bool m_lastStatusHasBeenSet = false;

    Aws::String m_lastErrorCode;
    bool m_lastErrorCodeHasBeenSet = false;

    Aws::String m_lastErrorMessage;
    bool m_lastErrorMessageHasBeenSet = false;

    Aws::Utils::DateTime m_lastStatusChangeTime{};
    bool m_lastStatusChangeTimeHasBeenSet = false;

    Aws::String m_servicePrincipal;
    bool m_servicePrincipalHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
