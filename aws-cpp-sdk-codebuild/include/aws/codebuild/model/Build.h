/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codebuild/model/StatusType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codebuild/model/ProjectSource.h>
#include <aws/codebuild/model/BuildArtifacts.h>
#include <aws/codebuild/model/ProjectEnvironment.h>
#include <aws/codebuild/model/LogsLocation.h>
#include <aws/codebuild/model/BuildPhase.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Information about a build.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/Build">AWS API
   * Reference</a></p>
   */
  class AWS_CODEBUILD_API Build
  {
  public:
    Build();
    Build(const Aws::Utils::Json::JsonValue& jsonValue);
    Build& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The unique ID for the build.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique ID for the build.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique ID for the build.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique ID for the build.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique ID for the build.</p>
     */
    inline Build& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique ID for the build.</p>
     */
    inline Build& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p>The unique ID for the build.</p>
     */
    inline Build& WithId(const char* value) { SetId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the build.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the build.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the build.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the build.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the build.</p>
     */
    inline Build& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the build.</p>
     */
    inline Build& WithArn(Aws::String&& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the build.</p>
     */
    inline Build& WithArn(const char* value) { SetArn(value); return *this;}

    /**
     * <p>When the build process started, expressed in Unix time format.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>When the build process started, expressed in Unix time format.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>When the build process started, expressed in Unix time format.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>When the build process started, expressed in Unix time format.</p>
     */
    inline Build& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>When the build process started, expressed in Unix time format.</p>
     */
    inline Build& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(value); return *this;}

    /**
     * <p>When the build process ended, expressed in Unix time format.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>When the build process ended, expressed in Unix time format.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>When the build process ended, expressed in Unix time format.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>When the build process ended, expressed in Unix time format.</p>
     */
    inline Build& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>When the build process ended, expressed in Unix time format.</p>
     */
    inline Build& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(value); return *this;}

    /**
     * <p>The current build phase.</p>
     */
    inline const Aws::String& GetCurrentPhase() const{ return m_currentPhase; }

    /**
     * <p>The current build phase.</p>
     */
    inline void SetCurrentPhase(const Aws::String& value) { m_currentPhaseHasBeenSet = true; m_currentPhase = value; }

    /**
     * <p>The current build phase.</p>
     */
    inline void SetCurrentPhase(Aws::String&& value) { m_currentPhaseHasBeenSet = true; m_currentPhase = value; }

    /**
     * <p>The current build phase.</p>
     */
    inline void SetCurrentPhase(const char* value) { m_currentPhaseHasBeenSet = true; m_currentPhase.assign(value); }

    /**
     * <p>The current build phase.</p>
     */
    inline Build& WithCurrentPhase(const Aws::String& value) { SetCurrentPhase(value); return *this;}

    /**
     * <p>The current build phase.</p>
     */
    inline Build& WithCurrentPhase(Aws::String&& value) { SetCurrentPhase(value); return *this;}

    /**
     * <p>The current build phase.</p>
     */
    inline Build& WithCurrentPhase(const char* value) { SetCurrentPhase(value); return *this;}

    /**
     * <p>The current status of the build. Valid values include:</p> <ul> <li> <p>
     * <code>FAILED</code>: The build failed.</p> </li> <li> <p> <code>FAULT</code>:
     * The build faulted.</p> </li> <li> <p> <code>IN_PROGRESS</code>: The build is
     * still in progress.</p> </li> <li> <p> <code>STOPPED</code>: The build
     * stopped.</p> </li> <li> <p> <code>SUCCEEDED</code>: The build succeeded.</p>
     * </li> <li> <p> <code>TIMED_OUT</code>: The build timed out.</p> </li> </ul>
     */
    inline const StatusType& GetBuildStatus() const{ return m_buildStatus; }

    /**
     * <p>The current status of the build. Valid values include:</p> <ul> <li> <p>
     * <code>FAILED</code>: The build failed.</p> </li> <li> <p> <code>FAULT</code>:
     * The build faulted.</p> </li> <li> <p> <code>IN_PROGRESS</code>: The build is
     * still in progress.</p> </li> <li> <p> <code>STOPPED</code>: The build
     * stopped.</p> </li> <li> <p> <code>SUCCEEDED</code>: The build succeeded.</p>
     * </li> <li> <p> <code>TIMED_OUT</code>: The build timed out.</p> </li> </ul>
     */
    inline void SetBuildStatus(const StatusType& value) { m_buildStatusHasBeenSet = true; m_buildStatus = value; }

    /**
     * <p>The current status of the build. Valid values include:</p> <ul> <li> <p>
     * <code>FAILED</code>: The build failed.</p> </li> <li> <p> <code>FAULT</code>:
     * The build faulted.</p> </li> <li> <p> <code>IN_PROGRESS</code>: The build is
     * still in progress.</p> </li> <li> <p> <code>STOPPED</code>: The build
     * stopped.</p> </li> <li> <p> <code>SUCCEEDED</code>: The build succeeded.</p>
     * </li> <li> <p> <code>TIMED_OUT</code>: The build timed out.</p> </li> </ul>
     */
    inline void SetBuildStatus(StatusType&& value) { m_buildStatusHasBeenSet = true; m_buildStatus = value; }

    /**
     * <p>The current status of the build. Valid values include:</p> <ul> <li> <p>
     * <code>FAILED</code>: The build failed.</p> </li> <li> <p> <code>FAULT</code>:
     * The build faulted.</p> </li> <li> <p> <code>IN_PROGRESS</code>: The build is
     * still in progress.</p> </li> <li> <p> <code>STOPPED</code>: The build
     * stopped.</p> </li> <li> <p> <code>SUCCEEDED</code>: The build succeeded.</p>
     * </li> <li> <p> <code>TIMED_OUT</code>: The build timed out.</p> </li> </ul>
     */
    inline Build& WithBuildStatus(const StatusType& value) { SetBuildStatus(value); return *this;}

    /**
     * <p>The current status of the build. Valid values include:</p> <ul> <li> <p>
     * <code>FAILED</code>: The build failed.</p> </li> <li> <p> <code>FAULT</code>:
     * The build faulted.</p> </li> <li> <p> <code>IN_PROGRESS</code>: The build is
     * still in progress.</p> </li> <li> <p> <code>STOPPED</code>: The build
     * stopped.</p> </li> <li> <p> <code>SUCCEEDED</code>: The build succeeded.</p>
     * </li> <li> <p> <code>TIMED_OUT</code>: The build timed out.</p> </li> </ul>
     */
    inline Build& WithBuildStatus(StatusType&& value) { SetBuildStatus(value); return *this;}

    /**
     * <p>Any version identifier for the version of the source code to be built.</p>
     */
    inline const Aws::String& GetSourceVersion() const{ return m_sourceVersion; }

    /**
     * <p>Any version identifier for the version of the source code to be built.</p>
     */
    inline void SetSourceVersion(const Aws::String& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = value; }

    /**
     * <p>Any version identifier for the version of the source code to be built.</p>
     */
    inline void SetSourceVersion(Aws::String&& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = value; }

    /**
     * <p>Any version identifier for the version of the source code to be built.</p>
     */
    inline void SetSourceVersion(const char* value) { m_sourceVersionHasBeenSet = true; m_sourceVersion.assign(value); }

    /**
     * <p>Any version identifier for the version of the source code to be built.</p>
     */
    inline Build& WithSourceVersion(const Aws::String& value) { SetSourceVersion(value); return *this;}

    /**
     * <p>Any version identifier for the version of the source code to be built.</p>
     */
    inline Build& WithSourceVersion(Aws::String&& value) { SetSourceVersion(value); return *this;}

    /**
     * <p>Any version identifier for the version of the source code to be built.</p>
     */
    inline Build& WithSourceVersion(const char* value) { SetSourceVersion(value); return *this;}

    /**
     * <p>The name of the build project.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }

    /**
     * <p>The name of the build project.</p>
     */
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }

    /**
     * <p>The name of the build project.</p>
     */
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = value; }

    /**
     * <p>The name of the build project.</p>
     */
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }

    /**
     * <p>The name of the build project.</p>
     */
    inline Build& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p>The name of the build project.</p>
     */
    inline Build& WithProjectName(Aws::String&& value) { SetProjectName(value); return *this;}

    /**
     * <p>The name of the build project.</p>
     */
    inline Build& WithProjectName(const char* value) { SetProjectName(value); return *this;}

    /**
     * <p>Information about all previous build phases that are completed and
     * information about any current build phase that is not yet complete.</p>
     */
    inline const Aws::Vector<BuildPhase>& GetPhases() const{ return m_phases; }

    /**
     * <p>Information about all previous build phases that are completed and
     * information about any current build phase that is not yet complete.</p>
     */
    inline void SetPhases(const Aws::Vector<BuildPhase>& value) { m_phasesHasBeenSet = true; m_phases = value; }

    /**
     * <p>Information about all previous build phases that are completed and
     * information about any current build phase that is not yet complete.</p>
     */
    inline void SetPhases(Aws::Vector<BuildPhase>&& value) { m_phasesHasBeenSet = true; m_phases = value; }

    /**
     * <p>Information about all previous build phases that are completed and
     * information about any current build phase that is not yet complete.</p>
     */
    inline Build& WithPhases(const Aws::Vector<BuildPhase>& value) { SetPhases(value); return *this;}

    /**
     * <p>Information about all previous build phases that are completed and
     * information about any current build phase that is not yet complete.</p>
     */
    inline Build& WithPhases(Aws::Vector<BuildPhase>&& value) { SetPhases(value); return *this;}

    /**
     * <p>Information about all previous build phases that are completed and
     * information about any current build phase that is not yet complete.</p>
     */
    inline Build& AddPhases(const BuildPhase& value) { m_phasesHasBeenSet = true; m_phases.push_back(value); return *this; }

    /**
     * <p>Information about all previous build phases that are completed and
     * information about any current build phase that is not yet complete.</p>
     */
    inline Build& AddPhases(BuildPhase&& value) { m_phasesHasBeenSet = true; m_phases.push_back(value); return *this; }

    /**
     * <p>Information about the source code to be built.</p>
     */
    inline const ProjectSource& GetSource() const{ return m_source; }

    /**
     * <p>Information about the source code to be built.</p>
     */
    inline void SetSource(const ProjectSource& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>Information about the source code to be built.</p>
     */
    inline void SetSource(ProjectSource&& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>Information about the source code to be built.</p>
     */
    inline Build& WithSource(const ProjectSource& value) { SetSource(value); return *this;}

    /**
     * <p>Information about the source code to be built.</p>
     */
    inline Build& WithSource(ProjectSource&& value) { SetSource(value); return *this;}

    /**
     * <p>Information about the output artifacts for the build.</p>
     */
    inline const BuildArtifacts& GetArtifacts() const{ return m_artifacts; }

    /**
     * <p>Information about the output artifacts for the build.</p>
     */
    inline void SetArtifacts(const BuildArtifacts& value) { m_artifactsHasBeenSet = true; m_artifacts = value; }

    /**
     * <p>Information about the output artifacts for the build.</p>
     */
    inline void SetArtifacts(BuildArtifacts&& value) { m_artifactsHasBeenSet = true; m_artifacts = value; }

    /**
     * <p>Information about the output artifacts for the build.</p>
     */
    inline Build& WithArtifacts(const BuildArtifacts& value) { SetArtifacts(value); return *this;}

    /**
     * <p>Information about the output artifacts for the build.</p>
     */
    inline Build& WithArtifacts(BuildArtifacts&& value) { SetArtifacts(value); return *this;}

    /**
     * <p>Information about the build environment for this build.</p>
     */
    inline const ProjectEnvironment& GetEnvironment() const{ return m_environment; }

    /**
     * <p>Information about the build environment for this build.</p>
     */
    inline void SetEnvironment(const ProjectEnvironment& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>Information about the build environment for this build.</p>
     */
    inline void SetEnvironment(ProjectEnvironment&& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>Information about the build environment for this build.</p>
     */
    inline Build& WithEnvironment(const ProjectEnvironment& value) { SetEnvironment(value); return *this;}

    /**
     * <p>Information about the build environment for this build.</p>
     */
    inline Build& WithEnvironment(ProjectEnvironment&& value) { SetEnvironment(value); return *this;}

    /**
     * <p>Information about the build's logs in Amazon CloudWatch Logs.</p>
     */
    inline const LogsLocation& GetLogs() const{ return m_logs; }

    /**
     * <p>Information about the build's logs in Amazon CloudWatch Logs.</p>
     */
    inline void SetLogs(const LogsLocation& value) { m_logsHasBeenSet = true; m_logs = value; }

    /**
     * <p>Information about the build's logs in Amazon CloudWatch Logs.</p>
     */
    inline void SetLogs(LogsLocation&& value) { m_logsHasBeenSet = true; m_logs = value; }

    /**
     * <p>Information about the build's logs in Amazon CloudWatch Logs.</p>
     */
    inline Build& WithLogs(const LogsLocation& value) { SetLogs(value); return *this;}

    /**
     * <p>Information about the build's logs in Amazon CloudWatch Logs.</p>
     */
    inline Build& WithLogs(LogsLocation&& value) { SetLogs(value); return *this;}

    /**
     * <p>How long, in minutes, for AWS CodeBuild to wait before timing out this build
     * if it does not get marked as completed.</p>
     */
    inline int GetTimeoutInMinutes() const{ return m_timeoutInMinutes; }

    /**
     * <p>How long, in minutes, for AWS CodeBuild to wait before timing out this build
     * if it does not get marked as completed.</p>
     */
    inline void SetTimeoutInMinutes(int value) { m_timeoutInMinutesHasBeenSet = true; m_timeoutInMinutes = value; }

    /**
     * <p>How long, in minutes, for AWS CodeBuild to wait before timing out this build
     * if it does not get marked as completed.</p>
     */
    inline Build& WithTimeoutInMinutes(int value) { SetTimeoutInMinutes(value); return *this;}

    /**
     * <p>Whether the build has finished. True if completed; otherwise, false.</p>
     */
    inline bool GetBuildComplete() const{ return m_buildComplete; }

    /**
     * <p>Whether the build has finished. True if completed; otherwise, false.</p>
     */
    inline void SetBuildComplete(bool value) { m_buildCompleteHasBeenSet = true; m_buildComplete = value; }

    /**
     * <p>Whether the build has finished. True if completed; otherwise, false.</p>
     */
    inline Build& WithBuildComplete(bool value) { SetBuildComplete(value); return *this;}

    /**
     * <p>The entity that started the build. Valid values include:</p> <ul> <li> <p>If
     * AWS CodePipeline started the build, the pipeline's name (for example,
     * <code>codepipeline/my-demo-pipeline</code>).</p> </li> <li> <p>If an AWS
     * Identity and Access Management (IAM) user started the build, the user's name
     * (for example <code>MyUserName</code>).</p> </li> <li> <p>If the Jenkins plugin
     * for AWS CodeBuild started the build, the string
     * <code>CodeBuild-Jenkins-Plugin</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetInitiator() const{ return m_initiator; }

    /**
     * <p>The entity that started the build. Valid values include:</p> <ul> <li> <p>If
     * AWS CodePipeline started the build, the pipeline's name (for example,
     * <code>codepipeline/my-demo-pipeline</code>).</p> </li> <li> <p>If an AWS
     * Identity and Access Management (IAM) user started the build, the user's name
     * (for example <code>MyUserName</code>).</p> </li> <li> <p>If the Jenkins plugin
     * for AWS CodeBuild started the build, the string
     * <code>CodeBuild-Jenkins-Plugin</code>.</p> </li> </ul>
     */
    inline void SetInitiator(const Aws::String& value) { m_initiatorHasBeenSet = true; m_initiator = value; }

    /**
     * <p>The entity that started the build. Valid values include:</p> <ul> <li> <p>If
     * AWS CodePipeline started the build, the pipeline's name (for example,
     * <code>codepipeline/my-demo-pipeline</code>).</p> </li> <li> <p>If an AWS
     * Identity and Access Management (IAM) user started the build, the user's name
     * (for example <code>MyUserName</code>).</p> </li> <li> <p>If the Jenkins plugin
     * for AWS CodeBuild started the build, the string
     * <code>CodeBuild-Jenkins-Plugin</code>.</p> </li> </ul>
     */
    inline void SetInitiator(Aws::String&& value) { m_initiatorHasBeenSet = true; m_initiator = value; }

    /**
     * <p>The entity that started the build. Valid values include:</p> <ul> <li> <p>If
     * AWS CodePipeline started the build, the pipeline's name (for example,
     * <code>codepipeline/my-demo-pipeline</code>).</p> </li> <li> <p>If an AWS
     * Identity and Access Management (IAM) user started the build, the user's name
     * (for example <code>MyUserName</code>).</p> </li> <li> <p>If the Jenkins plugin
     * for AWS CodeBuild started the build, the string
     * <code>CodeBuild-Jenkins-Plugin</code>.</p> </li> </ul>
     */
    inline void SetInitiator(const char* value) { m_initiatorHasBeenSet = true; m_initiator.assign(value); }

    /**
     * <p>The entity that started the build. Valid values include:</p> <ul> <li> <p>If
     * AWS CodePipeline started the build, the pipeline's name (for example,
     * <code>codepipeline/my-demo-pipeline</code>).</p> </li> <li> <p>If an AWS
     * Identity and Access Management (IAM) user started the build, the user's name
     * (for example <code>MyUserName</code>).</p> </li> <li> <p>If the Jenkins plugin
     * for AWS CodeBuild started the build, the string
     * <code>CodeBuild-Jenkins-Plugin</code>.</p> </li> </ul>
     */
    inline Build& WithInitiator(const Aws::String& value) { SetInitiator(value); return *this;}

    /**
     * <p>The entity that started the build. Valid values include:</p> <ul> <li> <p>If
     * AWS CodePipeline started the build, the pipeline's name (for example,
     * <code>codepipeline/my-demo-pipeline</code>).</p> </li> <li> <p>If an AWS
     * Identity and Access Management (IAM) user started the build, the user's name
     * (for example <code>MyUserName</code>).</p> </li> <li> <p>If the Jenkins plugin
     * for AWS CodeBuild started the build, the string
     * <code>CodeBuild-Jenkins-Plugin</code>.</p> </li> </ul>
     */
    inline Build& WithInitiator(Aws::String&& value) { SetInitiator(value); return *this;}

    /**
     * <p>The entity that started the build. Valid values include:</p> <ul> <li> <p>If
     * AWS CodePipeline started the build, the pipeline's name (for example,
     * <code>codepipeline/my-demo-pipeline</code>).</p> </li> <li> <p>If an AWS
     * Identity and Access Management (IAM) user started the build, the user's name
     * (for example <code>MyUserName</code>).</p> </li> <li> <p>If the Jenkins plugin
     * for AWS CodeBuild started the build, the string
     * <code>CodeBuild-Jenkins-Plugin</code>.</p> </li> </ul>
     */
    inline Build& WithInitiator(const char* value) { SetInitiator(value); return *this;}

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::String m_arn;
    bool m_arnHasBeenSet;
    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;
    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;
    Aws::String m_currentPhase;
    bool m_currentPhaseHasBeenSet;
    StatusType m_buildStatus;
    bool m_buildStatusHasBeenSet;
    Aws::String m_sourceVersion;
    bool m_sourceVersionHasBeenSet;
    Aws::String m_projectName;
    bool m_projectNameHasBeenSet;
    Aws::Vector<BuildPhase> m_phases;
    bool m_phasesHasBeenSet;
    ProjectSource m_source;
    bool m_sourceHasBeenSet;
    BuildArtifacts m_artifacts;
    bool m_artifactsHasBeenSet;
    ProjectEnvironment m_environment;
    bool m_environmentHasBeenSet;
    LogsLocation m_logs;
    bool m_logsHasBeenSet;
    int m_timeoutInMinutes;
    bool m_timeoutInMinutesHasBeenSet;
    bool m_buildComplete;
    bool m_buildCompleteHasBeenSet;
    Aws::String m_initiator;
    bool m_initiatorHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
