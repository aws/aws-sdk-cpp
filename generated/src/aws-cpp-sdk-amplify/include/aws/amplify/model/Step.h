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
    AWS_AMPLIFY_API Step();
    AWS_AMPLIFY_API Step(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Step& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of the execution step. </p>
     */
    inline const Aws::String& GetStepName() const{ return m_stepName; }

    /**
     * <p> The name of the execution step. </p>
     */
    inline bool StepNameHasBeenSet() const { return m_stepNameHasBeenSet; }

    /**
     * <p> The name of the execution step. </p>
     */
    inline void SetStepName(const Aws::String& value) { m_stepNameHasBeenSet = true; m_stepName = value; }

    /**
     * <p> The name of the execution step. </p>
     */
    inline void SetStepName(Aws::String&& value) { m_stepNameHasBeenSet = true; m_stepName = std::move(value); }

    /**
     * <p> The name of the execution step. </p>
     */
    inline void SetStepName(const char* value) { m_stepNameHasBeenSet = true; m_stepName.assign(value); }

    /**
     * <p> The name of the execution step. </p>
     */
    inline Step& WithStepName(const Aws::String& value) { SetStepName(value); return *this;}

    /**
     * <p> The name of the execution step. </p>
     */
    inline Step& WithStepName(Aws::String&& value) { SetStepName(std::move(value)); return *this;}

    /**
     * <p> The name of the execution step. </p>
     */
    inline Step& WithStepName(const char* value) { SetStepName(value); return *this;}


    /**
     * <p> The start date and time of the execution step. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p> The start date and time of the execution step. </p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p> The start date and time of the execution step. </p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p> The start date and time of the execution step. </p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p> The start date and time of the execution step. </p>
     */
    inline Step& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p> The start date and time of the execution step. </p>
     */
    inline Step& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p> The status of the execution step. </p>
     */
    inline const JobStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The status of the execution step. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The status of the execution step. </p>
     */
    inline void SetStatus(const JobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The status of the execution step. </p>
     */
    inline void SetStatus(JobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The status of the execution step. </p>
     */
    inline Step& WithStatus(const JobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The status of the execution step. </p>
     */
    inline Step& WithStatus(JobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> The end date and time of the execution step. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p> The end date and time of the execution step. </p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p> The end date and time of the execution step. </p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p> The end date and time of the execution step. </p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p> The end date and time of the execution step. </p>
     */
    inline Step& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p> The end date and time of the execution step. </p>
     */
    inline Step& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p> The URL to the logs for the execution step. </p>
     */
    inline const Aws::String& GetLogUrl() const{ return m_logUrl; }

    /**
     * <p> The URL to the logs for the execution step. </p>
     */
    inline bool LogUrlHasBeenSet() const { return m_logUrlHasBeenSet; }

    /**
     * <p> The URL to the logs for the execution step. </p>
     */
    inline void SetLogUrl(const Aws::String& value) { m_logUrlHasBeenSet = true; m_logUrl = value; }

    /**
     * <p> The URL to the logs for the execution step. </p>
     */
    inline void SetLogUrl(Aws::String&& value) { m_logUrlHasBeenSet = true; m_logUrl = std::move(value); }

    /**
     * <p> The URL to the logs for the execution step. </p>
     */
    inline void SetLogUrl(const char* value) { m_logUrlHasBeenSet = true; m_logUrl.assign(value); }

    /**
     * <p> The URL to the logs for the execution step. </p>
     */
    inline Step& WithLogUrl(const Aws::String& value) { SetLogUrl(value); return *this;}

    /**
     * <p> The URL to the logs for the execution step. </p>
     */
    inline Step& WithLogUrl(Aws::String&& value) { SetLogUrl(std::move(value)); return *this;}

    /**
     * <p> The URL to the logs for the execution step. </p>
     */
    inline Step& WithLogUrl(const char* value) { SetLogUrl(value); return *this;}


    /**
     * <p> The URL to the artifact for the execution step. </p>
     */
    inline const Aws::String& GetArtifactsUrl() const{ return m_artifactsUrl; }

    /**
     * <p> The URL to the artifact for the execution step. </p>
     */
    inline bool ArtifactsUrlHasBeenSet() const { return m_artifactsUrlHasBeenSet; }

    /**
     * <p> The URL to the artifact for the execution step. </p>
     */
    inline void SetArtifactsUrl(const Aws::String& value) { m_artifactsUrlHasBeenSet = true; m_artifactsUrl = value; }

    /**
     * <p> The URL to the artifact for the execution step. </p>
     */
    inline void SetArtifactsUrl(Aws::String&& value) { m_artifactsUrlHasBeenSet = true; m_artifactsUrl = std::move(value); }

    /**
     * <p> The URL to the artifact for the execution step. </p>
     */
    inline void SetArtifactsUrl(const char* value) { m_artifactsUrlHasBeenSet = true; m_artifactsUrl.assign(value); }

    /**
     * <p> The URL to the artifact for the execution step. </p>
     */
    inline Step& WithArtifactsUrl(const Aws::String& value) { SetArtifactsUrl(value); return *this;}

    /**
     * <p> The URL to the artifact for the execution step. </p>
     */
    inline Step& WithArtifactsUrl(Aws::String&& value) { SetArtifactsUrl(std::move(value)); return *this;}

    /**
     * <p> The URL to the artifact for the execution step. </p>
     */
    inline Step& WithArtifactsUrl(const char* value) { SetArtifactsUrl(value); return *this;}


    /**
     * <p> The URL to the test artifact for the execution step. </p>
     */
    inline const Aws::String& GetTestArtifactsUrl() const{ return m_testArtifactsUrl; }

    /**
     * <p> The URL to the test artifact for the execution step. </p>
     */
    inline bool TestArtifactsUrlHasBeenSet() const { return m_testArtifactsUrlHasBeenSet; }

    /**
     * <p> The URL to the test artifact for the execution step. </p>
     */
    inline void SetTestArtifactsUrl(const Aws::String& value) { m_testArtifactsUrlHasBeenSet = true; m_testArtifactsUrl = value; }

    /**
     * <p> The URL to the test artifact for the execution step. </p>
     */
    inline void SetTestArtifactsUrl(Aws::String&& value) { m_testArtifactsUrlHasBeenSet = true; m_testArtifactsUrl = std::move(value); }

    /**
     * <p> The URL to the test artifact for the execution step. </p>
     */
    inline void SetTestArtifactsUrl(const char* value) { m_testArtifactsUrlHasBeenSet = true; m_testArtifactsUrl.assign(value); }

    /**
     * <p> The URL to the test artifact for the execution step. </p>
     */
    inline Step& WithTestArtifactsUrl(const Aws::String& value) { SetTestArtifactsUrl(value); return *this;}

    /**
     * <p> The URL to the test artifact for the execution step. </p>
     */
    inline Step& WithTestArtifactsUrl(Aws::String&& value) { SetTestArtifactsUrl(std::move(value)); return *this;}

    /**
     * <p> The URL to the test artifact for the execution step. </p>
     */
    inline Step& WithTestArtifactsUrl(const char* value) { SetTestArtifactsUrl(value); return *this;}


    /**
     * <p> The URL to the test configuration for the execution step. </p>
     */
    inline const Aws::String& GetTestConfigUrl() const{ return m_testConfigUrl; }

    /**
     * <p> The URL to the test configuration for the execution step. </p>
     */
    inline bool TestConfigUrlHasBeenSet() const { return m_testConfigUrlHasBeenSet; }

    /**
     * <p> The URL to the test configuration for the execution step. </p>
     */
    inline void SetTestConfigUrl(const Aws::String& value) { m_testConfigUrlHasBeenSet = true; m_testConfigUrl = value; }

    /**
     * <p> The URL to the test configuration for the execution step. </p>
     */
    inline void SetTestConfigUrl(Aws::String&& value) { m_testConfigUrlHasBeenSet = true; m_testConfigUrl = std::move(value); }

    /**
     * <p> The URL to the test configuration for the execution step. </p>
     */
    inline void SetTestConfigUrl(const char* value) { m_testConfigUrlHasBeenSet = true; m_testConfigUrl.assign(value); }

    /**
     * <p> The URL to the test configuration for the execution step. </p>
     */
    inline Step& WithTestConfigUrl(const Aws::String& value) { SetTestConfigUrl(value); return *this;}

    /**
     * <p> The URL to the test configuration for the execution step. </p>
     */
    inline Step& WithTestConfigUrl(Aws::String&& value) { SetTestConfigUrl(std::move(value)); return *this;}

    /**
     * <p> The URL to the test configuration for the execution step. </p>
     */
    inline Step& WithTestConfigUrl(const char* value) { SetTestConfigUrl(value); return *this;}


    /**
     * <p> The list of screenshot URLs for the execution step, if relevant. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetScreenshots() const{ return m_screenshots; }

    /**
     * <p> The list of screenshot URLs for the execution step, if relevant. </p>
     */
    inline bool ScreenshotsHasBeenSet() const { return m_screenshotsHasBeenSet; }

    /**
     * <p> The list of screenshot URLs for the execution step, if relevant. </p>
     */
    inline void SetScreenshots(const Aws::Map<Aws::String, Aws::String>& value) { m_screenshotsHasBeenSet = true; m_screenshots = value; }

    /**
     * <p> The list of screenshot URLs for the execution step, if relevant. </p>
     */
    inline void SetScreenshots(Aws::Map<Aws::String, Aws::String>&& value) { m_screenshotsHasBeenSet = true; m_screenshots = std::move(value); }

    /**
     * <p> The list of screenshot URLs for the execution step, if relevant. </p>
     */
    inline Step& WithScreenshots(const Aws::Map<Aws::String, Aws::String>& value) { SetScreenshots(value); return *this;}

    /**
     * <p> The list of screenshot URLs for the execution step, if relevant. </p>
     */
    inline Step& WithScreenshots(Aws::Map<Aws::String, Aws::String>&& value) { SetScreenshots(std::move(value)); return *this;}

    /**
     * <p> The list of screenshot URLs for the execution step, if relevant. </p>
     */
    inline Step& AddScreenshots(const Aws::String& key, const Aws::String& value) { m_screenshotsHasBeenSet = true; m_screenshots.emplace(key, value); return *this; }

    /**
     * <p> The list of screenshot URLs for the execution step, if relevant. </p>
     */
    inline Step& AddScreenshots(Aws::String&& key, const Aws::String& value) { m_screenshotsHasBeenSet = true; m_screenshots.emplace(std::move(key), value); return *this; }

    /**
     * <p> The list of screenshot URLs for the execution step, if relevant. </p>
     */
    inline Step& AddScreenshots(const Aws::String& key, Aws::String&& value) { m_screenshotsHasBeenSet = true; m_screenshots.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The list of screenshot URLs for the execution step, if relevant. </p>
     */
    inline Step& AddScreenshots(Aws::String&& key, Aws::String&& value) { m_screenshotsHasBeenSet = true; m_screenshots.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> The list of screenshot URLs for the execution step, if relevant. </p>
     */
    inline Step& AddScreenshots(const char* key, Aws::String&& value) { m_screenshotsHasBeenSet = true; m_screenshots.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The list of screenshot URLs for the execution step, if relevant. </p>
     */
    inline Step& AddScreenshots(Aws::String&& key, const char* value) { m_screenshotsHasBeenSet = true; m_screenshots.emplace(std::move(key), value); return *this; }

    /**
     * <p> The list of screenshot URLs for the execution step, if relevant. </p>
     */
    inline Step& AddScreenshots(const char* key, const char* value) { m_screenshotsHasBeenSet = true; m_screenshots.emplace(key, value); return *this; }


    /**
     * <p> The reason for the current step status. </p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p> The reason for the current step status. </p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p> The reason for the current step status. </p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p> The reason for the current step status. </p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p> The reason for the current step status. </p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p> The reason for the current step status. </p>
     */
    inline Step& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p> The reason for the current step status. </p>
     */
    inline Step& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p> The reason for the current step status. </p>
     */
    inline Step& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p> The context for the current step. Includes a build image if the step is
     * build. </p>
     */
    inline const Aws::String& GetContext() const{ return m_context; }

    /**
     * <p> The context for the current step. Includes a build image if the step is
     * build. </p>
     */
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }

    /**
     * <p> The context for the current step. Includes a build image if the step is
     * build. </p>
     */
    inline void SetContext(const Aws::String& value) { m_contextHasBeenSet = true; m_context = value; }

    /**
     * <p> The context for the current step. Includes a build image if the step is
     * build. </p>
     */
    inline void SetContext(Aws::String&& value) { m_contextHasBeenSet = true; m_context = std::move(value); }

    /**
     * <p> The context for the current step. Includes a build image if the step is
     * build. </p>
     */
    inline void SetContext(const char* value) { m_contextHasBeenSet = true; m_context.assign(value); }

    /**
     * <p> The context for the current step. Includes a build image if the step is
     * build. </p>
     */
    inline Step& WithContext(const Aws::String& value) { SetContext(value); return *this;}

    /**
     * <p> The context for the current step. Includes a build image if the step is
     * build. </p>
     */
    inline Step& WithContext(Aws::String&& value) { SetContext(std::move(value)); return *this;}

    /**
     * <p> The context for the current step. Includes a build image if the step is
     * build. </p>
     */
    inline Step& WithContext(const char* value) { SetContext(value); return *this;}

  private:

    Aws::String m_stepName;
    bool m_stepNameHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    JobStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
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
