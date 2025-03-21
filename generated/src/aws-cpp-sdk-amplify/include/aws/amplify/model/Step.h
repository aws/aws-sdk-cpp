/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/amplify/model/JobStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Amplify
{
namespace Model
{

  /**
   * <p> Describes an execution step, for an execution job, for an Amplify app.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/Step">AWS API
   * Reference</a></p>
   */
  class Step
  {
  public:
    AWS_AMPLIFY_API Step() = default;
    AWS_AMPLIFY_API Step(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Step& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the execution step. </p>
     */
    inline const Aws::String& GetStepName() const { return m_stepName; }
    inline bool StepNameHasBeenSet() const { return m_stepNameHasBeenSet; }
    template<typename StepNameT = Aws::String>
    void SetStepName(StepNameT&& value) { m_stepNameHasBeenSet = true; m_stepName = std::forward<StepNameT>(value); }
    template<typename StepNameT = Aws::String>
    Step& WithStepName(StepNameT&& value) { SetStepName(std::forward<StepNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The start date and time of the execution step. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    Step& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the execution step. </p>
     */
    inline JobStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(JobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Step& WithStatus(JobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The end date and time of the execution step. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    Step& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The URL to the logs for the execution step. </p>
     */
    inline const Aws::String& GetLogUrl() const { return m_logUrl; }
    inline bool LogUrlHasBeenSet() const { return m_logUrlHasBeenSet; }
    template<typename LogUrlT = Aws::String>
    void SetLogUrl(LogUrlT&& value) { m_logUrlHasBeenSet = true; m_logUrl = std::forward<LogUrlT>(value); }
    template<typename LogUrlT = Aws::String>
    Step& WithLogUrl(LogUrlT&& value) { SetLogUrl(std::forward<LogUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The URL to the build artifact for the execution step. </p>
     */
    inline const Aws::String& GetArtifactsUrl() const { return m_artifactsUrl; }
    inline bool ArtifactsUrlHasBeenSet() const { return m_artifactsUrlHasBeenSet; }
    template<typename ArtifactsUrlT = Aws::String>
    void SetArtifactsUrl(ArtifactsUrlT&& value) { m_artifactsUrlHasBeenSet = true; m_artifactsUrl = std::forward<ArtifactsUrlT>(value); }
    template<typename ArtifactsUrlT = Aws::String>
    Step& WithArtifactsUrl(ArtifactsUrlT&& value) { SetArtifactsUrl(std::forward<ArtifactsUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The URL to the test artifact for the execution step. </p>
     */
    inline const Aws::String& GetTestArtifactsUrl() const { return m_testArtifactsUrl; }
    inline bool TestArtifactsUrlHasBeenSet() const { return m_testArtifactsUrlHasBeenSet; }
    template<typename TestArtifactsUrlT = Aws::String>
    void SetTestArtifactsUrl(TestArtifactsUrlT&& value) { m_testArtifactsUrlHasBeenSet = true; m_testArtifactsUrl = std::forward<TestArtifactsUrlT>(value); }
    template<typename TestArtifactsUrlT = Aws::String>
    Step& WithTestArtifactsUrl(TestArtifactsUrlT&& value) { SetTestArtifactsUrl(std::forward<TestArtifactsUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The URL to the test configuration for the execution step. </p>
     */
    inline const Aws::String& GetTestConfigUrl() const { return m_testConfigUrl; }
    inline bool TestConfigUrlHasBeenSet() const { return m_testConfigUrlHasBeenSet; }
    template<typename TestConfigUrlT = Aws::String>
    void SetTestConfigUrl(TestConfigUrlT&& value) { m_testConfigUrlHasBeenSet = true; m_testConfigUrl = std::forward<TestConfigUrlT>(value); }
    template<typename TestConfigUrlT = Aws::String>
    Step& WithTestConfigUrl(TestConfigUrlT&& value) { SetTestConfigUrl(std::forward<TestConfigUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of screenshot URLs for the execution step, if relevant. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetScreenshots() const { return m_screenshots; }
    inline bool ScreenshotsHasBeenSet() const { return m_screenshotsHasBeenSet; }
    template<typename ScreenshotsT = Aws::Map<Aws::String, Aws::String>>
    void SetScreenshots(ScreenshotsT&& value) { m_screenshotsHasBeenSet = true; m_screenshots = std::forward<ScreenshotsT>(value); }
    template<typename ScreenshotsT = Aws::Map<Aws::String, Aws::String>>
    Step& WithScreenshots(ScreenshotsT&& value) { SetScreenshots(std::forward<ScreenshotsT>(value)); return *this;}
    template<typename ScreenshotsKeyT = Aws::String, typename ScreenshotsValueT = Aws::String>
    Step& AddScreenshots(ScreenshotsKeyT&& key, ScreenshotsValueT&& value) {
      m_screenshotsHasBeenSet = true; m_screenshots.emplace(std::forward<ScreenshotsKeyT>(key), std::forward<ScreenshotsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p> The reason for the current step status. </p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    Step& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The context for the current step. Includes a build image if the step is
     * build. </p>
     */
    inline const Aws::String& GetContext() const { return m_context; }
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
    template<typename ContextT = Aws::String>
    void SetContext(ContextT&& value) { m_contextHasBeenSet = true; m_context = std::forward<ContextT>(value); }
    template<typename ContextT = Aws::String>
    Step& WithContext(ContextT&& value) { SetContext(std::forward<ContextT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stepName;
    bool m_stepNameHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    JobStatus m_status{JobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::String m_logUrl;
    bool m_logUrlHasBeenSet = false;

    Aws::String m_artifactsUrl;
    bool m_artifactsUrlHasBeenSet = false;

    Aws::String m_testArtifactsUrl;
    bool m_testArtifactsUrlHasBeenSet = false;

    Aws::String m_testConfigUrl;
    bool m_testConfigUrlHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_screenshots;
    bool m_screenshotsHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_context;
    bool m_contextHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
