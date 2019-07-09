/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p> Structure for an execution step for an execution job, for an Amplify App.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/Step">AWS API
   * Reference</a></p>
   */
  class AWS_AMPLIFY_API Step
  {
  public:
    Step();
    Step(Aws::Utils::Json::JsonView jsonValue);
    Step& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Name of the execution step. </p>
     */
    inline const Aws::String& GetStepName() const{ return m_stepName; }

    /**
     * <p> Name of the execution step. </p>
     */
    inline bool StepNameHasBeenSet() const { return m_stepNameHasBeenSet; }

    /**
     * <p> Name of the execution step. </p>
     */
    inline void SetStepName(const Aws::String& value) { m_stepNameHasBeenSet = true; m_stepName = value; }

    /**
     * <p> Name of the execution step. </p>
     */
    inline void SetStepName(Aws::String&& value) { m_stepNameHasBeenSet = true; m_stepName = std::move(value); }

    /**
     * <p> Name of the execution step. </p>
     */
    inline void SetStepName(const char* value) { m_stepNameHasBeenSet = true; m_stepName.assign(value); }

    /**
     * <p> Name of the execution step. </p>
     */
    inline Step& WithStepName(const Aws::String& value) { SetStepName(value); return *this;}

    /**
     * <p> Name of the execution step. </p>
     */
    inline Step& WithStepName(Aws::String&& value) { SetStepName(std::move(value)); return *this;}

    /**
     * <p> Name of the execution step. </p>
     */
    inline Step& WithStepName(const char* value) { SetStepName(value); return *this;}


    /**
     * <p> Start date/ time of the execution step. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p> Start date/ time of the execution step. </p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p> Start date/ time of the execution step. </p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p> Start date/ time of the execution step. </p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p> Start date/ time of the execution step. </p>
     */
    inline Step& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p> Start date/ time of the execution step. </p>
     */
    inline Step& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p> Status of the execution step. </p>
     */
    inline const JobStatus& GetStatus() const{ return m_status; }

    /**
     * <p> Status of the execution step. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> Status of the execution step. </p>
     */
    inline void SetStatus(const JobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> Status of the execution step. </p>
     */
    inline void SetStatus(JobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> Status of the execution step. </p>
     */
    inline Step& WithStatus(const JobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> Status of the execution step. </p>
     */
    inline Step& WithStatus(JobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> End date/ time of the execution step. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p> End date/ time of the execution step. </p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p> End date/ time of the execution step. </p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p> End date/ time of the execution step. </p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p> End date/ time of the execution step. </p>
     */
    inline Step& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p> End date/ time of the execution step. </p>
     */
    inline Step& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p> URL to the logs for the execution step. </p>
     */
    inline const Aws::String& GetLogUrl() const{ return m_logUrl; }

    /**
     * <p> URL to the logs for the execution step. </p>
     */
    inline bool LogUrlHasBeenSet() const { return m_logUrlHasBeenSet; }

    /**
     * <p> URL to the logs for the execution step. </p>
     */
    inline void SetLogUrl(const Aws::String& value) { m_logUrlHasBeenSet = true; m_logUrl = value; }

    /**
     * <p> URL to the logs for the execution step. </p>
     */
    inline void SetLogUrl(Aws::String&& value) { m_logUrlHasBeenSet = true; m_logUrl = std::move(value); }

    /**
     * <p> URL to the logs for the execution step. </p>
     */
    inline void SetLogUrl(const char* value) { m_logUrlHasBeenSet = true; m_logUrl.assign(value); }

    /**
     * <p> URL to the logs for the execution step. </p>
     */
    inline Step& WithLogUrl(const Aws::String& value) { SetLogUrl(value); return *this;}

    /**
     * <p> URL to the logs for the execution step. </p>
     */
    inline Step& WithLogUrl(Aws::String&& value) { SetLogUrl(std::move(value)); return *this;}

    /**
     * <p> URL to the logs for the execution step. </p>
     */
    inline Step& WithLogUrl(const char* value) { SetLogUrl(value); return *this;}


    /**
     * <p> URL to the artifact for the execution step. </p>
     */
    inline const Aws::String& GetArtifactsUrl() const{ return m_artifactsUrl; }

    /**
     * <p> URL to the artifact for the execution step. </p>
     */
    inline bool ArtifactsUrlHasBeenSet() const { return m_artifactsUrlHasBeenSet; }

    /**
     * <p> URL to the artifact for the execution step. </p>
     */
    inline void SetArtifactsUrl(const Aws::String& value) { m_artifactsUrlHasBeenSet = true; m_artifactsUrl = value; }

    /**
     * <p> URL to the artifact for the execution step. </p>
     */
    inline void SetArtifactsUrl(Aws::String&& value) { m_artifactsUrlHasBeenSet = true; m_artifactsUrl = std::move(value); }

    /**
     * <p> URL to the artifact for the execution step. </p>
     */
    inline void SetArtifactsUrl(const char* value) { m_artifactsUrlHasBeenSet = true; m_artifactsUrl.assign(value); }

    /**
     * <p> URL to the artifact for the execution step. </p>
     */
    inline Step& WithArtifactsUrl(const Aws::String& value) { SetArtifactsUrl(value); return *this;}

    /**
     * <p> URL to the artifact for the execution step. </p>
     */
    inline Step& WithArtifactsUrl(Aws::String&& value) { SetArtifactsUrl(std::move(value)); return *this;}

    /**
     * <p> URL to the artifact for the execution step. </p>
     */
    inline Step& WithArtifactsUrl(const char* value) { SetArtifactsUrl(value); return *this;}


    /**
     * <p> List of screenshot URLs for the execution step, if relevant. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetScreenshots() const{ return m_screenshots; }

    /**
     * <p> List of screenshot URLs for the execution step, if relevant. </p>
     */
    inline bool ScreenshotsHasBeenSet() const { return m_screenshotsHasBeenSet; }

    /**
     * <p> List of screenshot URLs for the execution step, if relevant. </p>
     */
    inline void SetScreenshots(const Aws::Map<Aws::String, Aws::String>& value) { m_screenshotsHasBeenSet = true; m_screenshots = value; }

    /**
     * <p> List of screenshot URLs for the execution step, if relevant. </p>
     */
    inline void SetScreenshots(Aws::Map<Aws::String, Aws::String>&& value) { m_screenshotsHasBeenSet = true; m_screenshots = std::move(value); }

    /**
     * <p> List of screenshot URLs for the execution step, if relevant. </p>
     */
    inline Step& WithScreenshots(const Aws::Map<Aws::String, Aws::String>& value) { SetScreenshots(value); return *this;}

    /**
     * <p> List of screenshot URLs for the execution step, if relevant. </p>
     */
    inline Step& WithScreenshots(Aws::Map<Aws::String, Aws::String>&& value) { SetScreenshots(std::move(value)); return *this;}

    /**
     * <p> List of screenshot URLs for the execution step, if relevant. </p>
     */
    inline Step& AddScreenshots(const Aws::String& key, const Aws::String& value) { m_screenshotsHasBeenSet = true; m_screenshots.emplace(key, value); return *this; }

    /**
     * <p> List of screenshot URLs for the execution step, if relevant. </p>
     */
    inline Step& AddScreenshots(Aws::String&& key, const Aws::String& value) { m_screenshotsHasBeenSet = true; m_screenshots.emplace(std::move(key), value); return *this; }

    /**
     * <p> List of screenshot URLs for the execution step, if relevant. </p>
     */
    inline Step& AddScreenshots(const Aws::String& key, Aws::String&& value) { m_screenshotsHasBeenSet = true; m_screenshots.emplace(key, std::move(value)); return *this; }

    /**
     * <p> List of screenshot URLs for the execution step, if relevant. </p>
     */
    inline Step& AddScreenshots(Aws::String&& key, Aws::String&& value) { m_screenshotsHasBeenSet = true; m_screenshots.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> List of screenshot URLs for the execution step, if relevant. </p>
     */
    inline Step& AddScreenshots(const char* key, Aws::String&& value) { m_screenshotsHasBeenSet = true; m_screenshots.emplace(key, std::move(value)); return *this; }

    /**
     * <p> List of screenshot URLs for the execution step, if relevant. </p>
     */
    inline Step& AddScreenshots(Aws::String&& key, const char* value) { m_screenshotsHasBeenSet = true; m_screenshots.emplace(std::move(key), value); return *this; }

    /**
     * <p> List of screenshot URLs for the execution step, if relevant. </p>
     */
    inline Step& AddScreenshots(const char* key, const char* value) { m_screenshotsHasBeenSet = true; m_screenshots.emplace(key, value); return *this; }


    /**
     * <p> The reason for current step status. </p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p> The reason for current step status. </p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p> The reason for current step status. </p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p> The reason for current step status. </p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p> The reason for current step status. </p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p> The reason for current step status. </p>
     */
    inline Step& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p> The reason for current step status. </p>
     */
    inline Step& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p> The reason for current step status. </p>
     */
    inline Step& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p> The context for current step, will include build image if step is build.
     * </p>
     */
    inline const Aws::String& GetContext() const{ return m_context; }

    /**
     * <p> The context for current step, will include build image if step is build.
     * </p>
     */
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }

    /**
     * <p> The context for current step, will include build image if step is build.
     * </p>
     */
    inline void SetContext(const Aws::String& value) { m_contextHasBeenSet = true; m_context = value; }

    /**
     * <p> The context for current step, will include build image if step is build.
     * </p>
     */
    inline void SetContext(Aws::String&& value) { m_contextHasBeenSet = true; m_context = std::move(value); }

    /**
     * <p> The context for current step, will include build image if step is build.
     * </p>
     */
    inline void SetContext(const char* value) { m_contextHasBeenSet = true; m_context.assign(value); }

    /**
     * <p> The context for current step, will include build image if step is build.
     * </p>
     */
    inline Step& WithContext(const Aws::String& value) { SetContext(value); return *this;}

    /**
     * <p> The context for current step, will include build image if step is build.
     * </p>
     */
    inline Step& WithContext(Aws::String&& value) { SetContext(std::move(value)); return *this;}

    /**
     * <p> The context for current step, will include build image if step is build.
     * </p>
     */
    inline Step& WithContext(const char* value) { SetContext(value); return *this;}

  private:

    Aws::String m_stepName;
    bool m_stepNameHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    JobStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;

    Aws::String m_logUrl;
    bool m_logUrlHasBeenSet;

    Aws::String m_artifactsUrl;
    bool m_artifactsUrlHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_screenshots;
    bool m_screenshotsHasBeenSet;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet;

    Aws::String m_context;
    bool m_contextHasBeenSet;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
