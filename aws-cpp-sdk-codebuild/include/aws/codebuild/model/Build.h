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
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codebuild/model/StatusType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codebuild/model/ProjectSource.h>
#include <aws/codebuild/model/BuildArtifacts.h>
#include <aws/codebuild/model/ProjectCache.h>
#include <aws/codebuild/model/ProjectEnvironment.h>
#include <aws/codebuild/model/LogsLocation.h>
#include <aws/codebuild/model/VpcConfig.h>
#include <aws/codebuild/model/NetworkInterface.h>
#include <aws/codebuild/model/BuildPhase.h>
#include <aws/codebuild/model/ProjectSourceVersion.h>
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
    Build(Aws::Utils::Json::JsonView jsonValue);
    Build& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique ID for the build.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique ID for the build.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique ID for the build.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique ID for the build.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

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
    inline Build& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

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
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the build.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the build.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

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
    inline Build& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

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
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>When the build process started, expressed in Unix time format.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>When the build process started, expressed in Unix time format.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>When the build process started, expressed in Unix time format.</p>
     */
    inline Build& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>When the build process started, expressed in Unix time format.</p>
     */
    inline Build& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>When the build process ended, expressed in Unix time format.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>When the build process ended, expressed in Unix time format.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>When the build process ended, expressed in Unix time format.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>When the build process ended, expressed in Unix time format.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>When the build process ended, expressed in Unix time format.</p>
     */
    inline Build& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>When the build process ended, expressed in Unix time format.</p>
     */
    inline Build& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The current build phase.</p>
     */
    inline const Aws::String& GetCurrentPhase() const{ return m_currentPhase; }

    /**
     * <p>The current build phase.</p>
     */
    inline bool CurrentPhaseHasBeenSet() const { return m_currentPhaseHasBeenSet; }

    /**
     * <p>The current build phase.</p>
     */
    inline void SetCurrentPhase(const Aws::String& value) { m_currentPhaseHasBeenSet = true; m_currentPhase = value; }

    /**
     * <p>The current build phase.</p>
     */
    inline void SetCurrentPhase(Aws::String&& value) { m_currentPhaseHasBeenSet = true; m_currentPhase = std::move(value); }

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
    inline Build& WithCurrentPhase(Aws::String&& value) { SetCurrentPhase(std::move(value)); return *this;}

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
    inline bool BuildStatusHasBeenSet() const { return m_buildStatusHasBeenSet; }

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
    inline void SetBuildStatus(StatusType&& value) { m_buildStatusHasBeenSet = true; m_buildStatus = std::move(value); }

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
    inline Build& WithBuildStatus(StatusType&& value) { SetBuildStatus(std::move(value)); return *this;}


    /**
     * <p>Any version identifier for the version of the source code to be built. If
     * <code>sourceVersion</code> is specified at the project level, then this
     * <code>sourceVersion</code> (at the build level) takes precedence. </p> <p> For
     * more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/sample-source-version.html">Source
     * Version Sample with CodeBuild</a> in the <i>AWS CodeBuild User Guide</i>. </p>
     */
    inline const Aws::String& GetSourceVersion() const{ return m_sourceVersion; }

    /**
     * <p>Any version identifier for the version of the source code to be built. If
     * <code>sourceVersion</code> is specified at the project level, then this
     * <code>sourceVersion</code> (at the build level) takes precedence. </p> <p> For
     * more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/sample-source-version.html">Source
     * Version Sample with CodeBuild</a> in the <i>AWS CodeBuild User Guide</i>. </p>
     */
    inline bool SourceVersionHasBeenSet() const { return m_sourceVersionHasBeenSet; }

    /**
     * <p>Any version identifier for the version of the source code to be built. If
     * <code>sourceVersion</code> is specified at the project level, then this
     * <code>sourceVersion</code> (at the build level) takes precedence. </p> <p> For
     * more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/sample-source-version.html">Source
     * Version Sample with CodeBuild</a> in the <i>AWS CodeBuild User Guide</i>. </p>
     */
    inline void SetSourceVersion(const Aws::String& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = value; }

    /**
     * <p>Any version identifier for the version of the source code to be built. If
     * <code>sourceVersion</code> is specified at the project level, then this
     * <code>sourceVersion</code> (at the build level) takes precedence. </p> <p> For
     * more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/sample-source-version.html">Source
     * Version Sample with CodeBuild</a> in the <i>AWS CodeBuild User Guide</i>. </p>
     */
    inline void SetSourceVersion(Aws::String&& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = std::move(value); }

    /**
     * <p>Any version identifier for the version of the source code to be built. If
     * <code>sourceVersion</code> is specified at the project level, then this
     * <code>sourceVersion</code> (at the build level) takes precedence. </p> <p> For
     * more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/sample-source-version.html">Source
     * Version Sample with CodeBuild</a> in the <i>AWS CodeBuild User Guide</i>. </p>
     */
    inline void SetSourceVersion(const char* value) { m_sourceVersionHasBeenSet = true; m_sourceVersion.assign(value); }

    /**
     * <p>Any version identifier for the version of the source code to be built. If
     * <code>sourceVersion</code> is specified at the project level, then this
     * <code>sourceVersion</code> (at the build level) takes precedence. </p> <p> For
     * more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/sample-source-version.html">Source
     * Version Sample with CodeBuild</a> in the <i>AWS CodeBuild User Guide</i>. </p>
     */
    inline Build& WithSourceVersion(const Aws::String& value) { SetSourceVersion(value); return *this;}

    /**
     * <p>Any version identifier for the version of the source code to be built. If
     * <code>sourceVersion</code> is specified at the project level, then this
     * <code>sourceVersion</code> (at the build level) takes precedence. </p> <p> For
     * more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/sample-source-version.html">Source
     * Version Sample with CodeBuild</a> in the <i>AWS CodeBuild User Guide</i>. </p>
     */
    inline Build& WithSourceVersion(Aws::String&& value) { SetSourceVersion(std::move(value)); return *this;}

    /**
     * <p>Any version identifier for the version of the source code to be built. If
     * <code>sourceVersion</code> is specified at the project level, then this
     * <code>sourceVersion</code> (at the build level) takes precedence. </p> <p> For
     * more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/sample-source-version.html">Source
     * Version Sample with CodeBuild</a> in the <i>AWS CodeBuild User Guide</i>. </p>
     */
    inline Build& WithSourceVersion(const char* value) { SetSourceVersion(value); return *this;}


    /**
     * <p> An identifier for the version of this build's source code. </p> <ul> <li>
     * <p> For AWS CodeCommit, GitHub, GitHub Enterprise, and BitBucket, the commit ID.
     * </p> </li> <li> <p> For AWS CodePipeline, the source revision provided by AWS
     * CodePipeline. </p> </li> <li> <p> For Amazon Simple Storage Service (Amazon S3),
     * this does not apply. </p> </li> </ul>
     */
    inline const Aws::String& GetResolvedSourceVersion() const{ return m_resolvedSourceVersion; }

    /**
     * <p> An identifier for the version of this build's source code. </p> <ul> <li>
     * <p> For AWS CodeCommit, GitHub, GitHub Enterprise, and BitBucket, the commit ID.
     * </p> </li> <li> <p> For AWS CodePipeline, the source revision provided by AWS
     * CodePipeline. </p> </li> <li> <p> For Amazon Simple Storage Service (Amazon S3),
     * this does not apply. </p> </li> </ul>
     */
    inline bool ResolvedSourceVersionHasBeenSet() const { return m_resolvedSourceVersionHasBeenSet; }

    /**
     * <p> An identifier for the version of this build's source code. </p> <ul> <li>
     * <p> For AWS CodeCommit, GitHub, GitHub Enterprise, and BitBucket, the commit ID.
     * </p> </li> <li> <p> For AWS CodePipeline, the source revision provided by AWS
     * CodePipeline. </p> </li> <li> <p> For Amazon Simple Storage Service (Amazon S3),
     * this does not apply. </p> </li> </ul>
     */
    inline void SetResolvedSourceVersion(const Aws::String& value) { m_resolvedSourceVersionHasBeenSet = true; m_resolvedSourceVersion = value; }

    /**
     * <p> An identifier for the version of this build's source code. </p> <ul> <li>
     * <p> For AWS CodeCommit, GitHub, GitHub Enterprise, and BitBucket, the commit ID.
     * </p> </li> <li> <p> For AWS CodePipeline, the source revision provided by AWS
     * CodePipeline. </p> </li> <li> <p> For Amazon Simple Storage Service (Amazon S3),
     * this does not apply. </p> </li> </ul>
     */
    inline void SetResolvedSourceVersion(Aws::String&& value) { m_resolvedSourceVersionHasBeenSet = true; m_resolvedSourceVersion = std::move(value); }

    /**
     * <p> An identifier for the version of this build's source code. </p> <ul> <li>
     * <p> For AWS CodeCommit, GitHub, GitHub Enterprise, and BitBucket, the commit ID.
     * </p> </li> <li> <p> For AWS CodePipeline, the source revision provided by AWS
     * CodePipeline. </p> </li> <li> <p> For Amazon Simple Storage Service (Amazon S3),
     * this does not apply. </p> </li> </ul>
     */
    inline void SetResolvedSourceVersion(const char* value) { m_resolvedSourceVersionHasBeenSet = true; m_resolvedSourceVersion.assign(value); }

    /**
     * <p> An identifier for the version of this build's source code. </p> <ul> <li>
     * <p> For AWS CodeCommit, GitHub, GitHub Enterprise, and BitBucket, the commit ID.
     * </p> </li> <li> <p> For AWS CodePipeline, the source revision provided by AWS
     * CodePipeline. </p> </li> <li> <p> For Amazon Simple Storage Service (Amazon S3),
     * this does not apply. </p> </li> </ul>
     */
    inline Build& WithResolvedSourceVersion(const Aws::String& value) { SetResolvedSourceVersion(value); return *this;}

    /**
     * <p> An identifier for the version of this build's source code. </p> <ul> <li>
     * <p> For AWS CodeCommit, GitHub, GitHub Enterprise, and BitBucket, the commit ID.
     * </p> </li> <li> <p> For AWS CodePipeline, the source revision provided by AWS
     * CodePipeline. </p> </li> <li> <p> For Amazon Simple Storage Service (Amazon S3),
     * this does not apply. </p> </li> </ul>
     */
    inline Build& WithResolvedSourceVersion(Aws::String&& value) { SetResolvedSourceVersion(std::move(value)); return *this;}

    /**
     * <p> An identifier for the version of this build's source code. </p> <ul> <li>
     * <p> For AWS CodeCommit, GitHub, GitHub Enterprise, and BitBucket, the commit ID.
     * </p> </li> <li> <p> For AWS CodePipeline, the source revision provided by AWS
     * CodePipeline. </p> </li> <li> <p> For Amazon Simple Storage Service (Amazon S3),
     * this does not apply. </p> </li> </ul>
     */
    inline Build& WithResolvedSourceVersion(const char* value) { SetResolvedSourceVersion(value); return *this;}


    /**
     * <p>The name of the AWS CodeBuild project.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }

    /**
     * <p>The name of the AWS CodeBuild project.</p>
     */
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }

    /**
     * <p>The name of the AWS CodeBuild project.</p>
     */
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }

    /**
     * <p>The name of the AWS CodeBuild project.</p>
     */
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }

    /**
     * <p>The name of the AWS CodeBuild project.</p>
     */
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }

    /**
     * <p>The name of the AWS CodeBuild project.</p>
     */
    inline Build& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p>The name of the AWS CodeBuild project.</p>
     */
    inline Build& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}

    /**
     * <p>The name of the AWS CodeBuild project.</p>
     */
    inline Build& WithProjectName(const char* value) { SetProjectName(value); return *this;}


    /**
     * <p>Information about all previous build phases that are complete and information
     * about any current build phase that is not yet complete.</p>
     */
    inline const Aws::Vector<BuildPhase>& GetPhases() const{ return m_phases; }

    /**
     * <p>Information about all previous build phases that are complete and information
     * about any current build phase that is not yet complete.</p>
     */
    inline bool PhasesHasBeenSet() const { return m_phasesHasBeenSet; }

    /**
     * <p>Information about all previous build phases that are complete and information
     * about any current build phase that is not yet complete.</p>
     */
    inline void SetPhases(const Aws::Vector<BuildPhase>& value) { m_phasesHasBeenSet = true; m_phases = value; }

    /**
     * <p>Information about all previous build phases that are complete and information
     * about any current build phase that is not yet complete.</p>
     */
    inline void SetPhases(Aws::Vector<BuildPhase>&& value) { m_phasesHasBeenSet = true; m_phases = std::move(value); }

    /**
     * <p>Information about all previous build phases that are complete and information
     * about any current build phase that is not yet complete.</p>
     */
    inline Build& WithPhases(const Aws::Vector<BuildPhase>& value) { SetPhases(value); return *this;}

    /**
     * <p>Information about all previous build phases that are complete and information
     * about any current build phase that is not yet complete.</p>
     */
    inline Build& WithPhases(Aws::Vector<BuildPhase>&& value) { SetPhases(std::move(value)); return *this;}

    /**
     * <p>Information about all previous build phases that are complete and information
     * about any current build phase that is not yet complete.</p>
     */
    inline Build& AddPhases(const BuildPhase& value) { m_phasesHasBeenSet = true; m_phases.push_back(value); return *this; }

    /**
     * <p>Information about all previous build phases that are complete and information
     * about any current build phase that is not yet complete.</p>
     */
    inline Build& AddPhases(BuildPhase&& value) { m_phasesHasBeenSet = true; m_phases.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the source code to be built.</p>
     */
    inline const ProjectSource& GetSource() const{ return m_source; }

    /**
     * <p>Information about the source code to be built.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>Information about the source code to be built.</p>
     */
    inline void SetSource(const ProjectSource& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>Information about the source code to be built.</p>
     */
    inline void SetSource(ProjectSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>Information about the source code to be built.</p>
     */
    inline Build& WithSource(const ProjectSource& value) { SetSource(value); return *this;}

    /**
     * <p>Information about the source code to be built.</p>
     */
    inline Build& WithSource(ProjectSource&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline const Aws::Vector<ProjectSource>& GetSecondarySources() const{ return m_secondarySources; }

    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline bool SecondarySourcesHasBeenSet() const { return m_secondarySourcesHasBeenSet; }

    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline void SetSecondarySources(const Aws::Vector<ProjectSource>& value) { m_secondarySourcesHasBeenSet = true; m_secondarySources = value; }

    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline void SetSecondarySources(Aws::Vector<ProjectSource>&& value) { m_secondarySourcesHasBeenSet = true; m_secondarySources = std::move(value); }

    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline Build& WithSecondarySources(const Aws::Vector<ProjectSource>& value) { SetSecondarySources(value); return *this;}

    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline Build& WithSecondarySources(Aws::Vector<ProjectSource>&& value) { SetSecondarySources(std::move(value)); return *this;}

    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline Build& AddSecondarySources(const ProjectSource& value) { m_secondarySourcesHasBeenSet = true; m_secondarySources.push_back(value); return *this; }

    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline Build& AddSecondarySources(ProjectSource&& value) { m_secondarySourcesHasBeenSet = true; m_secondarySources.push_back(std::move(value)); return *this; }


    /**
     * <p> An array of <code>ProjectSourceVersion</code> objects. Each
     * <code>ProjectSourceVersion</code> must be one of: </p> <ul> <li> <p>For AWS
     * CodeCommit: the commit ID to use.</p> </li> <li> <p>For GitHub: the commit ID,
     * pull request ID, branch name, or tag name that corresponds to the version of the
     * source code you want to build. If a pull request ID is specified, it must use
     * the format <code>pr/pull-request-ID</code> (for example, <code>pr/25</code>). If
     * a branch name is specified, the branch's HEAD commit ID is used. If not
     * specified, the default branch's HEAD commit ID is used.</p> </li> <li> <p>For
     * Bitbucket: the commit ID, branch name, or tag name that corresponds to the
     * version of the source code you want to build. If a branch name is specified, the
     * branch's HEAD commit ID is used. If not specified, the default branch's HEAD
     * commit ID is used.</p> </li> <li> <p>For Amazon Simple Storage Service (Amazon
     * S3): the version ID of the object that represents the build input ZIP file to
     * use.</p> </li> </ul>
     */
    inline const Aws::Vector<ProjectSourceVersion>& GetSecondarySourceVersions() const{ return m_secondarySourceVersions; }

    /**
     * <p> An array of <code>ProjectSourceVersion</code> objects. Each
     * <code>ProjectSourceVersion</code> must be one of: </p> <ul> <li> <p>For AWS
     * CodeCommit: the commit ID to use.</p> </li> <li> <p>For GitHub: the commit ID,
     * pull request ID, branch name, or tag name that corresponds to the version of the
     * source code you want to build. If a pull request ID is specified, it must use
     * the format <code>pr/pull-request-ID</code> (for example, <code>pr/25</code>). If
     * a branch name is specified, the branch's HEAD commit ID is used. If not
     * specified, the default branch's HEAD commit ID is used.</p> </li> <li> <p>For
     * Bitbucket: the commit ID, branch name, or tag name that corresponds to the
     * version of the source code you want to build. If a branch name is specified, the
     * branch's HEAD commit ID is used. If not specified, the default branch's HEAD
     * commit ID is used.</p> </li> <li> <p>For Amazon Simple Storage Service (Amazon
     * S3): the version ID of the object that represents the build input ZIP file to
     * use.</p> </li> </ul>
     */
    inline bool SecondarySourceVersionsHasBeenSet() const { return m_secondarySourceVersionsHasBeenSet; }

    /**
     * <p> An array of <code>ProjectSourceVersion</code> objects. Each
     * <code>ProjectSourceVersion</code> must be one of: </p> <ul> <li> <p>For AWS
     * CodeCommit: the commit ID to use.</p> </li> <li> <p>For GitHub: the commit ID,
     * pull request ID, branch name, or tag name that corresponds to the version of the
     * source code you want to build. If a pull request ID is specified, it must use
     * the format <code>pr/pull-request-ID</code> (for example, <code>pr/25</code>). If
     * a branch name is specified, the branch's HEAD commit ID is used. If not
     * specified, the default branch's HEAD commit ID is used.</p> </li> <li> <p>For
     * Bitbucket: the commit ID, branch name, or tag name that corresponds to the
     * version of the source code you want to build. If a branch name is specified, the
     * branch's HEAD commit ID is used. If not specified, the default branch's HEAD
     * commit ID is used.</p> </li> <li> <p>For Amazon Simple Storage Service (Amazon
     * S3): the version ID of the object that represents the build input ZIP file to
     * use.</p> </li> </ul>
     */
    inline void SetSecondarySourceVersions(const Aws::Vector<ProjectSourceVersion>& value) { m_secondarySourceVersionsHasBeenSet = true; m_secondarySourceVersions = value; }

    /**
     * <p> An array of <code>ProjectSourceVersion</code> objects. Each
     * <code>ProjectSourceVersion</code> must be one of: </p> <ul> <li> <p>For AWS
     * CodeCommit: the commit ID to use.</p> </li> <li> <p>For GitHub: the commit ID,
     * pull request ID, branch name, or tag name that corresponds to the version of the
     * source code you want to build. If a pull request ID is specified, it must use
     * the format <code>pr/pull-request-ID</code> (for example, <code>pr/25</code>). If
     * a branch name is specified, the branch's HEAD commit ID is used. If not
     * specified, the default branch's HEAD commit ID is used.</p> </li> <li> <p>For
     * Bitbucket: the commit ID, branch name, or tag name that corresponds to the
     * version of the source code you want to build. If a branch name is specified, the
     * branch's HEAD commit ID is used. If not specified, the default branch's HEAD
     * commit ID is used.</p> </li> <li> <p>For Amazon Simple Storage Service (Amazon
     * S3): the version ID of the object that represents the build input ZIP file to
     * use.</p> </li> </ul>
     */
    inline void SetSecondarySourceVersions(Aws::Vector<ProjectSourceVersion>&& value) { m_secondarySourceVersionsHasBeenSet = true; m_secondarySourceVersions = std::move(value); }

    /**
     * <p> An array of <code>ProjectSourceVersion</code> objects. Each
     * <code>ProjectSourceVersion</code> must be one of: </p> <ul> <li> <p>For AWS
     * CodeCommit: the commit ID to use.</p> </li> <li> <p>For GitHub: the commit ID,
     * pull request ID, branch name, or tag name that corresponds to the version of the
     * source code you want to build. If a pull request ID is specified, it must use
     * the format <code>pr/pull-request-ID</code> (for example, <code>pr/25</code>). If
     * a branch name is specified, the branch's HEAD commit ID is used. If not
     * specified, the default branch's HEAD commit ID is used.</p> </li> <li> <p>For
     * Bitbucket: the commit ID, branch name, or tag name that corresponds to the
     * version of the source code you want to build. If a branch name is specified, the
     * branch's HEAD commit ID is used. If not specified, the default branch's HEAD
     * commit ID is used.</p> </li> <li> <p>For Amazon Simple Storage Service (Amazon
     * S3): the version ID of the object that represents the build input ZIP file to
     * use.</p> </li> </ul>
     */
    inline Build& WithSecondarySourceVersions(const Aws::Vector<ProjectSourceVersion>& value) { SetSecondarySourceVersions(value); return *this;}

    /**
     * <p> An array of <code>ProjectSourceVersion</code> objects. Each
     * <code>ProjectSourceVersion</code> must be one of: </p> <ul> <li> <p>For AWS
     * CodeCommit: the commit ID to use.</p> </li> <li> <p>For GitHub: the commit ID,
     * pull request ID, branch name, or tag name that corresponds to the version of the
     * source code you want to build. If a pull request ID is specified, it must use
     * the format <code>pr/pull-request-ID</code> (for example, <code>pr/25</code>). If
     * a branch name is specified, the branch's HEAD commit ID is used. If not
     * specified, the default branch's HEAD commit ID is used.</p> </li> <li> <p>For
     * Bitbucket: the commit ID, branch name, or tag name that corresponds to the
     * version of the source code you want to build. If a branch name is specified, the
     * branch's HEAD commit ID is used. If not specified, the default branch's HEAD
     * commit ID is used.</p> </li> <li> <p>For Amazon Simple Storage Service (Amazon
     * S3): the version ID of the object that represents the build input ZIP file to
     * use.</p> </li> </ul>
     */
    inline Build& WithSecondarySourceVersions(Aws::Vector<ProjectSourceVersion>&& value) { SetSecondarySourceVersions(std::move(value)); return *this;}

    /**
     * <p> An array of <code>ProjectSourceVersion</code> objects. Each
     * <code>ProjectSourceVersion</code> must be one of: </p> <ul> <li> <p>For AWS
     * CodeCommit: the commit ID to use.</p> </li> <li> <p>For GitHub: the commit ID,
     * pull request ID, branch name, or tag name that corresponds to the version of the
     * source code you want to build. If a pull request ID is specified, it must use
     * the format <code>pr/pull-request-ID</code> (for example, <code>pr/25</code>). If
     * a branch name is specified, the branch's HEAD commit ID is used. If not
     * specified, the default branch's HEAD commit ID is used.</p> </li> <li> <p>For
     * Bitbucket: the commit ID, branch name, or tag name that corresponds to the
     * version of the source code you want to build. If a branch name is specified, the
     * branch's HEAD commit ID is used. If not specified, the default branch's HEAD
     * commit ID is used.</p> </li> <li> <p>For Amazon Simple Storage Service (Amazon
     * S3): the version ID of the object that represents the build input ZIP file to
     * use.</p> </li> </ul>
     */
    inline Build& AddSecondarySourceVersions(const ProjectSourceVersion& value) { m_secondarySourceVersionsHasBeenSet = true; m_secondarySourceVersions.push_back(value); return *this; }

    /**
     * <p> An array of <code>ProjectSourceVersion</code> objects. Each
     * <code>ProjectSourceVersion</code> must be one of: </p> <ul> <li> <p>For AWS
     * CodeCommit: the commit ID to use.</p> </li> <li> <p>For GitHub: the commit ID,
     * pull request ID, branch name, or tag name that corresponds to the version of the
     * source code you want to build. If a pull request ID is specified, it must use
     * the format <code>pr/pull-request-ID</code> (for example, <code>pr/25</code>). If
     * a branch name is specified, the branch's HEAD commit ID is used. If not
     * specified, the default branch's HEAD commit ID is used.</p> </li> <li> <p>For
     * Bitbucket: the commit ID, branch name, or tag name that corresponds to the
     * version of the source code you want to build. If a branch name is specified, the
     * branch's HEAD commit ID is used. If not specified, the default branch's HEAD
     * commit ID is used.</p> </li> <li> <p>For Amazon Simple Storage Service (Amazon
     * S3): the version ID of the object that represents the build input ZIP file to
     * use.</p> </li> </ul>
     */
    inline Build& AddSecondarySourceVersions(ProjectSourceVersion&& value) { m_secondarySourceVersionsHasBeenSet = true; m_secondarySourceVersions.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the output artifacts for the build.</p>
     */
    inline const BuildArtifacts& GetArtifacts() const{ return m_artifacts; }

    /**
     * <p>Information about the output artifacts for the build.</p>
     */
    inline bool ArtifactsHasBeenSet() const { return m_artifactsHasBeenSet; }

    /**
     * <p>Information about the output artifacts for the build.</p>
     */
    inline void SetArtifacts(const BuildArtifacts& value) { m_artifactsHasBeenSet = true; m_artifacts = value; }

    /**
     * <p>Information about the output artifacts for the build.</p>
     */
    inline void SetArtifacts(BuildArtifacts&& value) { m_artifactsHasBeenSet = true; m_artifacts = std::move(value); }

    /**
     * <p>Information about the output artifacts for the build.</p>
     */
    inline Build& WithArtifacts(const BuildArtifacts& value) { SetArtifacts(value); return *this;}

    /**
     * <p>Information about the output artifacts for the build.</p>
     */
    inline Build& WithArtifacts(BuildArtifacts&& value) { SetArtifacts(std::move(value)); return *this;}


    /**
     * <p> An array of <code>ProjectArtifacts</code> objects. </p>
     */
    inline const Aws::Vector<BuildArtifacts>& GetSecondaryArtifacts() const{ return m_secondaryArtifacts; }

    /**
     * <p> An array of <code>ProjectArtifacts</code> objects. </p>
     */
    inline bool SecondaryArtifactsHasBeenSet() const { return m_secondaryArtifactsHasBeenSet; }

    /**
     * <p> An array of <code>ProjectArtifacts</code> objects. </p>
     */
    inline void SetSecondaryArtifacts(const Aws::Vector<BuildArtifacts>& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts = value; }

    /**
     * <p> An array of <code>ProjectArtifacts</code> objects. </p>
     */
    inline void SetSecondaryArtifacts(Aws::Vector<BuildArtifacts>&& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts = std::move(value); }

    /**
     * <p> An array of <code>ProjectArtifacts</code> objects. </p>
     */
    inline Build& WithSecondaryArtifacts(const Aws::Vector<BuildArtifacts>& value) { SetSecondaryArtifacts(value); return *this;}

    /**
     * <p> An array of <code>ProjectArtifacts</code> objects. </p>
     */
    inline Build& WithSecondaryArtifacts(Aws::Vector<BuildArtifacts>&& value) { SetSecondaryArtifacts(std::move(value)); return *this;}

    /**
     * <p> An array of <code>ProjectArtifacts</code> objects. </p>
     */
    inline Build& AddSecondaryArtifacts(const BuildArtifacts& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts.push_back(value); return *this; }

    /**
     * <p> An array of <code>ProjectArtifacts</code> objects. </p>
     */
    inline Build& AddSecondaryArtifacts(BuildArtifacts&& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the cache for the build.</p>
     */
    inline const ProjectCache& GetCache() const{ return m_cache; }

    /**
     * <p>Information about the cache for the build.</p>
     */
    inline bool CacheHasBeenSet() const { return m_cacheHasBeenSet; }

    /**
     * <p>Information about the cache for the build.</p>
     */
    inline void SetCache(const ProjectCache& value) { m_cacheHasBeenSet = true; m_cache = value; }

    /**
     * <p>Information about the cache for the build.</p>
     */
    inline void SetCache(ProjectCache&& value) { m_cacheHasBeenSet = true; m_cache = std::move(value); }

    /**
     * <p>Information about the cache for the build.</p>
     */
    inline Build& WithCache(const ProjectCache& value) { SetCache(value); return *this;}

    /**
     * <p>Information about the cache for the build.</p>
     */
    inline Build& WithCache(ProjectCache&& value) { SetCache(std::move(value)); return *this;}


    /**
     * <p>Information about the build environment for this build.</p>
     */
    inline const ProjectEnvironment& GetEnvironment() const{ return m_environment; }

    /**
     * <p>Information about the build environment for this build.</p>
     */
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }

    /**
     * <p>Information about the build environment for this build.</p>
     */
    inline void SetEnvironment(const ProjectEnvironment& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>Information about the build environment for this build.</p>
     */
    inline void SetEnvironment(ProjectEnvironment&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }

    /**
     * <p>Information about the build environment for this build.</p>
     */
    inline Build& WithEnvironment(const ProjectEnvironment& value) { SetEnvironment(value); return *this;}

    /**
     * <p>Information about the build environment for this build.</p>
     */
    inline Build& WithEnvironment(ProjectEnvironment&& value) { SetEnvironment(std::move(value)); return *this;}


    /**
     * <p>The name of a service role used for this build.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }

    /**
     * <p>The name of a service role used for this build.</p>
     */
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }

    /**
     * <p>The name of a service role used for this build.</p>
     */
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>The name of a service role used for this build.</p>
     */
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::move(value); }

    /**
     * <p>The name of a service role used for this build.</p>
     */
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }

    /**
     * <p>The name of a service role used for this build.</p>
     */
    inline Build& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The name of a service role used for this build.</p>
     */
    inline Build& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}

    /**
     * <p>The name of a service role used for this build.</p>
     */
    inline Build& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}


    /**
     * <p>Information about the build's logs in Amazon CloudWatch Logs.</p>
     */
    inline const LogsLocation& GetLogs() const{ return m_logs; }

    /**
     * <p>Information about the build's logs in Amazon CloudWatch Logs.</p>
     */
    inline bool LogsHasBeenSet() const { return m_logsHasBeenSet; }

    /**
     * <p>Information about the build's logs in Amazon CloudWatch Logs.</p>
     */
    inline void SetLogs(const LogsLocation& value) { m_logsHasBeenSet = true; m_logs = value; }

    /**
     * <p>Information about the build's logs in Amazon CloudWatch Logs.</p>
     */
    inline void SetLogs(LogsLocation&& value) { m_logsHasBeenSet = true; m_logs = std::move(value); }

    /**
     * <p>Information about the build's logs in Amazon CloudWatch Logs.</p>
     */
    inline Build& WithLogs(const LogsLocation& value) { SetLogs(value); return *this;}

    /**
     * <p>Information about the build's logs in Amazon CloudWatch Logs.</p>
     */
    inline Build& WithLogs(LogsLocation&& value) { SetLogs(std::move(value)); return *this;}


    /**
     * <p>How long, in minutes, for AWS CodeBuild to wait before timing out this build
     * if it does not get marked as completed.</p>
     */
    inline int GetTimeoutInMinutes() const{ return m_timeoutInMinutes; }

    /**
     * <p>How long, in minutes, for AWS CodeBuild to wait before timing out this build
     * if it does not get marked as completed.</p>
     */
    inline bool TimeoutInMinutesHasBeenSet() const { return m_timeoutInMinutesHasBeenSet; }

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
     * <p> The number of minutes a build is allowed to be queued before it times out.
     * </p>
     */
    inline int GetQueuedTimeoutInMinutes() const{ return m_queuedTimeoutInMinutes; }

    /**
     * <p> The number of minutes a build is allowed to be queued before it times out.
     * </p>
     */
    inline bool QueuedTimeoutInMinutesHasBeenSet() const { return m_queuedTimeoutInMinutesHasBeenSet; }

    /**
     * <p> The number of minutes a build is allowed to be queued before it times out.
     * </p>
     */
    inline void SetQueuedTimeoutInMinutes(int value) { m_queuedTimeoutInMinutesHasBeenSet = true; m_queuedTimeoutInMinutes = value; }

    /**
     * <p> The number of minutes a build is allowed to be queued before it times out.
     * </p>
     */
    inline Build& WithQueuedTimeoutInMinutes(int value) { SetQueuedTimeoutInMinutes(value); return *this;}


    /**
     * <p>Whether the build is complete. True if complete; otherwise, false.</p>
     */
    inline bool GetBuildComplete() const{ return m_buildComplete; }

    /**
     * <p>Whether the build is complete. True if complete; otherwise, false.</p>
     */
    inline bool BuildCompleteHasBeenSet() const { return m_buildCompleteHasBeenSet; }

    /**
     * <p>Whether the build is complete. True if complete; otherwise, false.</p>
     */
    inline void SetBuildComplete(bool value) { m_buildCompleteHasBeenSet = true; m_buildComplete = value; }

    /**
     * <p>Whether the build is complete. True if complete; otherwise, false.</p>
     */
    inline Build& WithBuildComplete(bool value) { SetBuildComplete(value); return *this;}


    /**
     * <p>The entity that started the build. Valid values include:</p> <ul> <li> <p>If
     * AWS CodePipeline started the build, the pipeline's name (for example,
     * <code>codepipeline/my-demo-pipeline</code>).</p> </li> <li> <p>If an AWS
     * Identity and Access Management (IAM) user started the build, the user's name
     * (for example, <code>MyUserName</code>).</p> </li> <li> <p>If the Jenkins plugin
     * for AWS CodeBuild started the build, the string
     * <code>CodeBuild-Jenkins-Plugin</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetInitiator() const{ return m_initiator; }

    /**
     * <p>The entity that started the build. Valid values include:</p> <ul> <li> <p>If
     * AWS CodePipeline started the build, the pipeline's name (for example,
     * <code>codepipeline/my-demo-pipeline</code>).</p> </li> <li> <p>If an AWS
     * Identity and Access Management (IAM) user started the build, the user's name
     * (for example, <code>MyUserName</code>).</p> </li> <li> <p>If the Jenkins plugin
     * for AWS CodeBuild started the build, the string
     * <code>CodeBuild-Jenkins-Plugin</code>.</p> </li> </ul>
     */
    inline bool InitiatorHasBeenSet() const { return m_initiatorHasBeenSet; }

    /**
     * <p>The entity that started the build. Valid values include:</p> <ul> <li> <p>If
     * AWS CodePipeline started the build, the pipeline's name (for example,
     * <code>codepipeline/my-demo-pipeline</code>).</p> </li> <li> <p>If an AWS
     * Identity and Access Management (IAM) user started the build, the user's name
     * (for example, <code>MyUserName</code>).</p> </li> <li> <p>If the Jenkins plugin
     * for AWS CodeBuild started the build, the string
     * <code>CodeBuild-Jenkins-Plugin</code>.</p> </li> </ul>
     */
    inline void SetInitiator(const Aws::String& value) { m_initiatorHasBeenSet = true; m_initiator = value; }

    /**
     * <p>The entity that started the build. Valid values include:</p> <ul> <li> <p>If
     * AWS CodePipeline started the build, the pipeline's name (for example,
     * <code>codepipeline/my-demo-pipeline</code>).</p> </li> <li> <p>If an AWS
     * Identity and Access Management (IAM) user started the build, the user's name
     * (for example, <code>MyUserName</code>).</p> </li> <li> <p>If the Jenkins plugin
     * for AWS CodeBuild started the build, the string
     * <code>CodeBuild-Jenkins-Plugin</code>.</p> </li> </ul>
     */
    inline void SetInitiator(Aws::String&& value) { m_initiatorHasBeenSet = true; m_initiator = std::move(value); }

    /**
     * <p>The entity that started the build. Valid values include:</p> <ul> <li> <p>If
     * AWS CodePipeline started the build, the pipeline's name (for example,
     * <code>codepipeline/my-demo-pipeline</code>).</p> </li> <li> <p>If an AWS
     * Identity and Access Management (IAM) user started the build, the user's name
     * (for example, <code>MyUserName</code>).</p> </li> <li> <p>If the Jenkins plugin
     * for AWS CodeBuild started the build, the string
     * <code>CodeBuild-Jenkins-Plugin</code>.</p> </li> </ul>
     */
    inline void SetInitiator(const char* value) { m_initiatorHasBeenSet = true; m_initiator.assign(value); }

    /**
     * <p>The entity that started the build. Valid values include:</p> <ul> <li> <p>If
     * AWS CodePipeline started the build, the pipeline's name (for example,
     * <code>codepipeline/my-demo-pipeline</code>).</p> </li> <li> <p>If an AWS
     * Identity and Access Management (IAM) user started the build, the user's name
     * (for example, <code>MyUserName</code>).</p> </li> <li> <p>If the Jenkins plugin
     * for AWS CodeBuild started the build, the string
     * <code>CodeBuild-Jenkins-Plugin</code>.</p> </li> </ul>
     */
    inline Build& WithInitiator(const Aws::String& value) { SetInitiator(value); return *this;}

    /**
     * <p>The entity that started the build. Valid values include:</p> <ul> <li> <p>If
     * AWS CodePipeline started the build, the pipeline's name (for example,
     * <code>codepipeline/my-demo-pipeline</code>).</p> </li> <li> <p>If an AWS
     * Identity and Access Management (IAM) user started the build, the user's name
     * (for example, <code>MyUserName</code>).</p> </li> <li> <p>If the Jenkins plugin
     * for AWS CodeBuild started the build, the string
     * <code>CodeBuild-Jenkins-Plugin</code>.</p> </li> </ul>
     */
    inline Build& WithInitiator(Aws::String&& value) { SetInitiator(std::move(value)); return *this;}

    /**
     * <p>The entity that started the build. Valid values include:</p> <ul> <li> <p>If
     * AWS CodePipeline started the build, the pipeline's name (for example,
     * <code>codepipeline/my-demo-pipeline</code>).</p> </li> <li> <p>If an AWS
     * Identity and Access Management (IAM) user started the build, the user's name
     * (for example, <code>MyUserName</code>).</p> </li> <li> <p>If the Jenkins plugin
     * for AWS CodeBuild started the build, the string
     * <code>CodeBuild-Jenkins-Plugin</code>.</p> </li> </ul>
     */
    inline Build& WithInitiator(const char* value) { SetInitiator(value); return *this;}


    /**
     * <p>If your AWS CodeBuild project accesses resources in an Amazon VPC, you
     * provide this parameter that identifies the VPC ID and the list of security group
     * IDs and subnet IDs. The security groups and subnets must belong to the same VPC.
     * You must provide at least one security group and one subnet ID.</p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }

    /**
     * <p>If your AWS CodeBuild project accesses resources in an Amazon VPC, you
     * provide this parameter that identifies the VPC ID and the list of security group
     * IDs and subnet IDs. The security groups and subnets must belong to the same VPC.
     * You must provide at least one security group and one subnet ID.</p>
     */
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }

    /**
     * <p>If your AWS CodeBuild project accesses resources in an Amazon VPC, you
     * provide this parameter that identifies the VPC ID and the list of security group
     * IDs and subnet IDs. The security groups and subnets must belong to the same VPC.
     * You must provide at least one security group and one subnet ID.</p>
     */
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }

    /**
     * <p>If your AWS CodeBuild project accesses resources in an Amazon VPC, you
     * provide this parameter that identifies the VPC ID and the list of security group
     * IDs and subnet IDs. The security groups and subnets must belong to the same VPC.
     * You must provide at least one security group and one subnet ID.</p>
     */
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }

    /**
     * <p>If your AWS CodeBuild project accesses resources in an Amazon VPC, you
     * provide this parameter that identifies the VPC ID and the list of security group
     * IDs and subnet IDs. The security groups and subnets must belong to the same VPC.
     * You must provide at least one security group and one subnet ID.</p>
     */
    inline Build& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>If your AWS CodeBuild project accesses resources in an Amazon VPC, you
     * provide this parameter that identifies the VPC ID and the list of security group
     * IDs and subnet IDs. The security groups and subnets must belong to the same VPC.
     * You must provide at least one security group and one subnet ID.</p>
     */
    inline Build& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}


    /**
     * <p>Describes a network interface.</p>
     */
    inline const NetworkInterface& GetNetworkInterface() const{ return m_networkInterface; }

    /**
     * <p>Describes a network interface.</p>
     */
    inline bool NetworkInterfaceHasBeenSet() const { return m_networkInterfaceHasBeenSet; }

    /**
     * <p>Describes a network interface.</p>
     */
    inline void SetNetworkInterface(const NetworkInterface& value) { m_networkInterfaceHasBeenSet = true; m_networkInterface = value; }

    /**
     * <p>Describes a network interface.</p>
     */
    inline void SetNetworkInterface(NetworkInterface&& value) { m_networkInterfaceHasBeenSet = true; m_networkInterface = std::move(value); }

    /**
     * <p>Describes a network interface.</p>
     */
    inline Build& WithNetworkInterface(const NetworkInterface& value) { SetNetworkInterface(value); return *this;}

    /**
     * <p>Describes a network interface.</p>
     */
    inline Build& WithNetworkInterface(NetworkInterface&& value) { SetNetworkInterface(std::move(value)); return *this;}


    /**
     * <p>The AWS Key Management Service (AWS KMS) customer master key (CMK) to be used
     * for encrypting the build output artifacts.</p> <note> <p> You can use a
     * cross-account KMS key to encrypt the build output artifacts if your service role
     * has permission to that key. </p> </note> <p>You can specify either the Amazon
     * Resource Name (ARN) of the CMK or, if available, the CMK's alias (using the
     * format <code>alias/<i>alias-name</i> </code>).</p>
     */
    inline const Aws::String& GetEncryptionKey() const{ return m_encryptionKey; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) customer master key (CMK) to be used
     * for encrypting the build output artifacts.</p> <note> <p> You can use a
     * cross-account KMS key to encrypt the build output artifacts if your service role
     * has permission to that key. </p> </note> <p>You can specify either the Amazon
     * Resource Name (ARN) of the CMK or, if available, the CMK's alias (using the
     * format <code>alias/<i>alias-name</i> </code>).</p>
     */
    inline bool EncryptionKeyHasBeenSet() const { return m_encryptionKeyHasBeenSet; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) customer master key (CMK) to be used
     * for encrypting the build output artifacts.</p> <note> <p> You can use a
     * cross-account KMS key to encrypt the build output artifacts if your service role
     * has permission to that key. </p> </note> <p>You can specify either the Amazon
     * Resource Name (ARN) of the CMK or, if available, the CMK's alias (using the
     * format <code>alias/<i>alias-name</i> </code>).</p>
     */
    inline void SetEncryptionKey(const Aws::String& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = value; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) customer master key (CMK) to be used
     * for encrypting the build output artifacts.</p> <note> <p> You can use a
     * cross-account KMS key to encrypt the build output artifacts if your service role
     * has permission to that key. </p> </note> <p>You can specify either the Amazon
     * Resource Name (ARN) of the CMK or, if available, the CMK's alias (using the
     * format <code>alias/<i>alias-name</i> </code>).</p>
     */
    inline void SetEncryptionKey(Aws::String&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = std::move(value); }

    /**
     * <p>The AWS Key Management Service (AWS KMS) customer master key (CMK) to be used
     * for encrypting the build output artifacts.</p> <note> <p> You can use a
     * cross-account KMS key to encrypt the build output artifacts if your service role
     * has permission to that key. </p> </note> <p>You can specify either the Amazon
     * Resource Name (ARN) of the CMK or, if available, the CMK's alias (using the
     * format <code>alias/<i>alias-name</i> </code>).</p>
     */
    inline void SetEncryptionKey(const char* value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey.assign(value); }

    /**
     * <p>The AWS Key Management Service (AWS KMS) customer master key (CMK) to be used
     * for encrypting the build output artifacts.</p> <note> <p> You can use a
     * cross-account KMS key to encrypt the build output artifacts if your service role
     * has permission to that key. </p> </note> <p>You can specify either the Amazon
     * Resource Name (ARN) of the CMK or, if available, the CMK's alias (using the
     * format <code>alias/<i>alias-name</i> </code>).</p>
     */
    inline Build& WithEncryptionKey(const Aws::String& value) { SetEncryptionKey(value); return *this;}

    /**
     * <p>The AWS Key Management Service (AWS KMS) customer master key (CMK) to be used
     * for encrypting the build output artifacts.</p> <note> <p> You can use a
     * cross-account KMS key to encrypt the build output artifacts if your service role
     * has permission to that key. </p> </note> <p>You can specify either the Amazon
     * Resource Name (ARN) of the CMK or, if available, the CMK's alias (using the
     * format <code>alias/<i>alias-name</i> </code>).</p>
     */
    inline Build& WithEncryptionKey(Aws::String&& value) { SetEncryptionKey(std::move(value)); return *this;}

    /**
     * <p>The AWS Key Management Service (AWS KMS) customer master key (CMK) to be used
     * for encrypting the build output artifacts.</p> <note> <p> You can use a
     * cross-account KMS key to encrypt the build output artifacts if your service role
     * has permission to that key. </p> </note> <p>You can specify either the Amazon
     * Resource Name (ARN) of the CMK or, if available, the CMK's alias (using the
     * format <code>alias/<i>alias-name</i> </code>).</p>
     */
    inline Build& WithEncryptionKey(const char* value) { SetEncryptionKey(value); return *this;}

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

    Aws::String m_resolvedSourceVersion;
    bool m_resolvedSourceVersionHasBeenSet;

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet;

    Aws::Vector<BuildPhase> m_phases;
    bool m_phasesHasBeenSet;

    ProjectSource m_source;
    bool m_sourceHasBeenSet;

    Aws::Vector<ProjectSource> m_secondarySources;
    bool m_secondarySourcesHasBeenSet;

    Aws::Vector<ProjectSourceVersion> m_secondarySourceVersions;
    bool m_secondarySourceVersionsHasBeenSet;

    BuildArtifacts m_artifacts;
    bool m_artifactsHasBeenSet;

    Aws::Vector<BuildArtifacts> m_secondaryArtifacts;
    bool m_secondaryArtifactsHasBeenSet;

    ProjectCache m_cache;
    bool m_cacheHasBeenSet;

    ProjectEnvironment m_environment;
    bool m_environmentHasBeenSet;

    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet;

    LogsLocation m_logs;
    bool m_logsHasBeenSet;

    int m_timeoutInMinutes;
    bool m_timeoutInMinutesHasBeenSet;

    int m_queuedTimeoutInMinutes;
    bool m_queuedTimeoutInMinutesHasBeenSet;

    bool m_buildComplete;
    bool m_buildCompleteHasBeenSet;

    Aws::String m_initiator;
    bool m_initiatorHasBeenSet;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet;

    NetworkInterface m_networkInterface;
    bool m_networkInterfaceHasBeenSet;

    Aws::String m_encryptionKey;
    bool m_encryptionKeyHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
