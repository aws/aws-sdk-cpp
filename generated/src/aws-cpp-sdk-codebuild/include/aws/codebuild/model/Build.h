/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/codebuild/model/DebugSession.h>
#include <aws/codebuild/model/AutoRetryConfig.h>
#include <aws/codebuild/model/BuildPhase.h>
#include <aws/codebuild/model/ProjectSourceVersion.h>
#include <aws/codebuild/model/ExportedEnvironmentVariable.h>
#include <aws/codebuild/model/ProjectFileSystemLocation.h>
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
  class Build
  {
  public:
    AWS_CODEBUILD_API Build();
    AWS_CODEBUILD_API Build(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Build& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID for the build.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Build& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Build& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Build& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the build.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Build& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Build& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Build& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of the build. For each project, the <code>buildNumber</code> of
     * its first build is <code>1</code>. The <code>buildNumber</code> of each
     * subsequent build is incremented by <code>1</code>. If a build is deleted, the
     * <code>buildNumber</code> of other builds does not change.</p>
     */
    inline long long GetBuildNumber() const{ return m_buildNumber; }
    inline bool BuildNumberHasBeenSet() const { return m_buildNumberHasBeenSet; }
    inline void SetBuildNumber(long long value) { m_buildNumberHasBeenSet = true; m_buildNumber = value; }
    inline Build& WithBuildNumber(long long value) { SetBuildNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the build process started, expressed in Unix time format.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline Build& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline Build& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the build process ended, expressed in Unix time format.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline Build& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline Build& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current build phase.</p>
     */
    inline const Aws::String& GetCurrentPhase() const{ return m_currentPhase; }
    inline bool CurrentPhaseHasBeenSet() const { return m_currentPhaseHasBeenSet; }
    inline void SetCurrentPhase(const Aws::String& value) { m_currentPhaseHasBeenSet = true; m_currentPhase = value; }
    inline void SetCurrentPhase(Aws::String&& value) { m_currentPhaseHasBeenSet = true; m_currentPhase = std::move(value); }
    inline void SetCurrentPhase(const char* value) { m_currentPhaseHasBeenSet = true; m_currentPhase.assign(value); }
    inline Build& WithCurrentPhase(const Aws::String& value) { SetCurrentPhase(value); return *this;}
    inline Build& WithCurrentPhase(Aws::String&& value) { SetCurrentPhase(std::move(value)); return *this;}
    inline Build& WithCurrentPhase(const char* value) { SetCurrentPhase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the build. Valid values include:</p> <ul> <li> <p>
     * <code>FAILED</code>: The build failed.</p> </li> <li> <p> <code>FAULT</code>:
     * The build faulted.</p> </li> <li> <p> <code>IN_PROGRESS</code>: The build is
     * still in progress.</p> </li> <li> <p> <code>STOPPED</code>: The build
     * stopped.</p> </li> <li> <p> <code>SUCCEEDED</code>: The build succeeded.</p>
     * </li> <li> <p> <code>TIMED_OUT</code>: The build timed out.</p> </li> </ul>
     */
    inline const StatusType& GetBuildStatus() const{ return m_buildStatus; }
    inline bool BuildStatusHasBeenSet() const { return m_buildStatusHasBeenSet; }
    inline void SetBuildStatus(const StatusType& value) { m_buildStatusHasBeenSet = true; m_buildStatus = value; }
    inline void SetBuildStatus(StatusType&& value) { m_buildStatusHasBeenSet = true; m_buildStatus = std::move(value); }
    inline Build& WithBuildStatus(const StatusType& value) { SetBuildStatus(value); return *this;}
    inline Build& WithBuildStatus(StatusType&& value) { SetBuildStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any version identifier for the version of the source code to be built. If
     * <code>sourceVersion</code> is specified at the project level, then this
     * <code>sourceVersion</code> (at the build level) takes precedence. </p> <p> For
     * more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/sample-source-version.html">Source
     * Version Sample with CodeBuild</a> in the <i>CodeBuild User Guide</i>. </p>
     */
    inline const Aws::String& GetSourceVersion() const{ return m_sourceVersion; }
    inline bool SourceVersionHasBeenSet() const { return m_sourceVersionHasBeenSet; }
    inline void SetSourceVersion(const Aws::String& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = value; }
    inline void SetSourceVersion(Aws::String&& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = std::move(value); }
    inline void SetSourceVersion(const char* value) { m_sourceVersionHasBeenSet = true; m_sourceVersion.assign(value); }
    inline Build& WithSourceVersion(const Aws::String& value) { SetSourceVersion(value); return *this;}
    inline Build& WithSourceVersion(Aws::String&& value) { SetSourceVersion(std::move(value)); return *this;}
    inline Build& WithSourceVersion(const char* value) { SetSourceVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An identifier for the version of this build's source code. </p> <ul> <li>
     * <p> For CodeCommit, GitHub, GitHub Enterprise, and BitBucket, the commit ID.
     * </p> </li> <li> <p> For CodePipeline, the source revision provided by
     * CodePipeline. </p> </li> <li> <p> For Amazon S3, this does not apply. </p> </li>
     * </ul>
     */
    inline const Aws::String& GetResolvedSourceVersion() const{ return m_resolvedSourceVersion; }
    inline bool ResolvedSourceVersionHasBeenSet() const { return m_resolvedSourceVersionHasBeenSet; }
    inline void SetResolvedSourceVersion(const Aws::String& value) { m_resolvedSourceVersionHasBeenSet = true; m_resolvedSourceVersion = value; }
    inline void SetResolvedSourceVersion(Aws::String&& value) { m_resolvedSourceVersionHasBeenSet = true; m_resolvedSourceVersion = std::move(value); }
    inline void SetResolvedSourceVersion(const char* value) { m_resolvedSourceVersionHasBeenSet = true; m_resolvedSourceVersion.assign(value); }
    inline Build& WithResolvedSourceVersion(const Aws::String& value) { SetResolvedSourceVersion(value); return *this;}
    inline Build& WithResolvedSourceVersion(Aws::String&& value) { SetResolvedSourceVersion(std::move(value)); return *this;}
    inline Build& WithResolvedSourceVersion(const char* value) { SetResolvedSourceVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the CodeBuild project.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }
    inline Build& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}
    inline Build& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}
    inline Build& WithProjectName(const char* value) { SetProjectName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about all previous build phases that are complete and information
     * about any current build phase that is not yet complete.</p>
     */
    inline const Aws::Vector<BuildPhase>& GetPhases() const{ return m_phases; }
    inline bool PhasesHasBeenSet() const { return m_phasesHasBeenSet; }
    inline void SetPhases(const Aws::Vector<BuildPhase>& value) { m_phasesHasBeenSet = true; m_phases = value; }
    inline void SetPhases(Aws::Vector<BuildPhase>&& value) { m_phasesHasBeenSet = true; m_phases = std::move(value); }
    inline Build& WithPhases(const Aws::Vector<BuildPhase>& value) { SetPhases(value); return *this;}
    inline Build& WithPhases(Aws::Vector<BuildPhase>&& value) { SetPhases(std::move(value)); return *this;}
    inline Build& AddPhases(const BuildPhase& value) { m_phasesHasBeenSet = true; m_phases.push_back(value); return *this; }
    inline Build& AddPhases(BuildPhase&& value) { m_phasesHasBeenSet = true; m_phases.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the source code to be built.</p>
     */
    inline const ProjectSource& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const ProjectSource& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(ProjectSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline Build& WithSource(const ProjectSource& value) { SetSource(value); return *this;}
    inline Build& WithSource(ProjectSource&& value) { SetSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline const Aws::Vector<ProjectSource>& GetSecondarySources() const{ return m_secondarySources; }
    inline bool SecondarySourcesHasBeenSet() const { return m_secondarySourcesHasBeenSet; }
    inline void SetSecondarySources(const Aws::Vector<ProjectSource>& value) { m_secondarySourcesHasBeenSet = true; m_secondarySources = value; }
    inline void SetSecondarySources(Aws::Vector<ProjectSource>&& value) { m_secondarySourcesHasBeenSet = true; m_secondarySources = std::move(value); }
    inline Build& WithSecondarySources(const Aws::Vector<ProjectSource>& value) { SetSecondarySources(value); return *this;}
    inline Build& WithSecondarySources(Aws::Vector<ProjectSource>&& value) { SetSecondarySources(std::move(value)); return *this;}
    inline Build& AddSecondarySources(const ProjectSource& value) { m_secondarySourcesHasBeenSet = true; m_secondarySources.push_back(value); return *this; }
    inline Build& AddSecondarySources(ProjectSource&& value) { m_secondarySourcesHasBeenSet = true; m_secondarySources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An array of <code>ProjectSourceVersion</code> objects. Each
     * <code>ProjectSourceVersion</code> must be one of: </p> <ul> <li> <p>For
     * CodeCommit: the commit ID, branch, or Git tag to use.</p> </li> <li> <p>For
     * GitHub: the commit ID, pull request ID, branch name, or tag name that
     * corresponds to the version of the source code you want to build. If a pull
     * request ID is specified, it must use the format <code>pr/pull-request-ID</code>
     * (for example, <code>pr/25</code>). If a branch name is specified, the branch's
     * HEAD commit ID is used. If not specified, the default branch's HEAD commit ID is
     * used.</p> </li> <li> <p>For Bitbucket: the commit ID, branch name, or tag name
     * that corresponds to the version of the source code you want to build. If a
     * branch name is specified, the branch's HEAD commit ID is used. If not specified,
     * the default branch's HEAD commit ID is used.</p> </li> <li> <p>For Amazon S3:
     * the version ID of the object that represents the build input ZIP file to
     * use.</p> </li> </ul>
     */
    inline const Aws::Vector<ProjectSourceVersion>& GetSecondarySourceVersions() const{ return m_secondarySourceVersions; }
    inline bool SecondarySourceVersionsHasBeenSet() const { return m_secondarySourceVersionsHasBeenSet; }
    inline void SetSecondarySourceVersions(const Aws::Vector<ProjectSourceVersion>& value) { m_secondarySourceVersionsHasBeenSet = true; m_secondarySourceVersions = value; }
    inline void SetSecondarySourceVersions(Aws::Vector<ProjectSourceVersion>&& value) { m_secondarySourceVersionsHasBeenSet = true; m_secondarySourceVersions = std::move(value); }
    inline Build& WithSecondarySourceVersions(const Aws::Vector<ProjectSourceVersion>& value) { SetSecondarySourceVersions(value); return *this;}
    inline Build& WithSecondarySourceVersions(Aws::Vector<ProjectSourceVersion>&& value) { SetSecondarySourceVersions(std::move(value)); return *this;}
    inline Build& AddSecondarySourceVersions(const ProjectSourceVersion& value) { m_secondarySourceVersionsHasBeenSet = true; m_secondarySourceVersions.push_back(value); return *this; }
    inline Build& AddSecondarySourceVersions(ProjectSourceVersion&& value) { m_secondarySourceVersionsHasBeenSet = true; m_secondarySourceVersions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the output artifacts for the build.</p>
     */
    inline const BuildArtifacts& GetArtifacts() const{ return m_artifacts; }
    inline bool ArtifactsHasBeenSet() const { return m_artifactsHasBeenSet; }
    inline void SetArtifacts(const BuildArtifacts& value) { m_artifactsHasBeenSet = true; m_artifacts = value; }
    inline void SetArtifacts(BuildArtifacts&& value) { m_artifactsHasBeenSet = true; m_artifacts = std::move(value); }
    inline Build& WithArtifacts(const BuildArtifacts& value) { SetArtifacts(value); return *this;}
    inline Build& WithArtifacts(BuildArtifacts&& value) { SetArtifacts(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of <code>ProjectArtifacts</code> objects. </p>
     */
    inline const Aws::Vector<BuildArtifacts>& GetSecondaryArtifacts() const{ return m_secondaryArtifacts; }
    inline bool SecondaryArtifactsHasBeenSet() const { return m_secondaryArtifactsHasBeenSet; }
    inline void SetSecondaryArtifacts(const Aws::Vector<BuildArtifacts>& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts = value; }
    inline void SetSecondaryArtifacts(Aws::Vector<BuildArtifacts>&& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts = std::move(value); }
    inline Build& WithSecondaryArtifacts(const Aws::Vector<BuildArtifacts>& value) { SetSecondaryArtifacts(value); return *this;}
    inline Build& WithSecondaryArtifacts(Aws::Vector<BuildArtifacts>&& value) { SetSecondaryArtifacts(std::move(value)); return *this;}
    inline Build& AddSecondaryArtifacts(const BuildArtifacts& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts.push_back(value); return *this; }
    inline Build& AddSecondaryArtifacts(BuildArtifacts&& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the cache for the build.</p>
     */
    inline const ProjectCache& GetCache() const{ return m_cache; }
    inline bool CacheHasBeenSet() const { return m_cacheHasBeenSet; }
    inline void SetCache(const ProjectCache& value) { m_cacheHasBeenSet = true; m_cache = value; }
    inline void SetCache(ProjectCache&& value) { m_cacheHasBeenSet = true; m_cache = std::move(value); }
    inline Build& WithCache(const ProjectCache& value) { SetCache(value); return *this;}
    inline Build& WithCache(ProjectCache&& value) { SetCache(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the build environment for this build.</p>
     */
    inline const ProjectEnvironment& GetEnvironment() const{ return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    inline void SetEnvironment(const ProjectEnvironment& value) { m_environmentHasBeenSet = true; m_environment = value; }
    inline void SetEnvironment(ProjectEnvironment&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }
    inline Build& WithEnvironment(const ProjectEnvironment& value) { SetEnvironment(value); return *this;}
    inline Build& WithEnvironment(ProjectEnvironment&& value) { SetEnvironment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a service role used for this build.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::move(value); }
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }
    inline Build& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}
    inline Build& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}
    inline Build& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the build's logs in CloudWatch Logs.</p>
     */
    inline const LogsLocation& GetLogs() const{ return m_logs; }
    inline bool LogsHasBeenSet() const { return m_logsHasBeenSet; }
    inline void SetLogs(const LogsLocation& value) { m_logsHasBeenSet = true; m_logs = value; }
    inline void SetLogs(LogsLocation&& value) { m_logsHasBeenSet = true; m_logs = std::move(value); }
    inline Build& WithLogs(const LogsLocation& value) { SetLogs(value); return *this;}
    inline Build& WithLogs(LogsLocation&& value) { SetLogs(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How long, in minutes, from 5 to 2160 (36 hours), for CodeBuild to wait before
     * timing out this build if it does not get marked as completed.</p>
     */
    inline int GetTimeoutInMinutes() const{ return m_timeoutInMinutes; }
    inline bool TimeoutInMinutesHasBeenSet() const { return m_timeoutInMinutesHasBeenSet; }
    inline void SetTimeoutInMinutes(int value) { m_timeoutInMinutesHasBeenSet = true; m_timeoutInMinutes = value; }
    inline Build& WithTimeoutInMinutes(int value) { SetTimeoutInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of minutes a build is allowed to be queued before it times out.
     * </p>
     */
    inline int GetQueuedTimeoutInMinutes() const{ return m_queuedTimeoutInMinutes; }
    inline bool QueuedTimeoutInMinutesHasBeenSet() const { return m_queuedTimeoutInMinutesHasBeenSet; }
    inline void SetQueuedTimeoutInMinutes(int value) { m_queuedTimeoutInMinutesHasBeenSet = true; m_queuedTimeoutInMinutes = value; }
    inline Build& WithQueuedTimeoutInMinutes(int value) { SetQueuedTimeoutInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the build is complete. True if complete; otherwise, false.</p>
     */
    inline bool GetBuildComplete() const{ return m_buildComplete; }
    inline bool BuildCompleteHasBeenSet() const { return m_buildCompleteHasBeenSet; }
    inline void SetBuildComplete(bool value) { m_buildCompleteHasBeenSet = true; m_buildComplete = value; }
    inline Build& WithBuildComplete(bool value) { SetBuildComplete(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity that started the build. Valid values include:</p> <ul> <li> <p>If
     * CodePipeline started the build, the pipeline's name (for example,
     * <code>codepipeline/my-demo-pipeline</code>).</p> </li> <li> <p>If a user started
     * the build, the user's name (for example, <code>MyUserName</code>).</p> </li>
     * <li> <p>If the Jenkins plugin for CodeBuild started the build, the string
     * <code>CodeBuild-Jenkins-Plugin</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetInitiator() const{ return m_initiator; }
    inline bool InitiatorHasBeenSet() const { return m_initiatorHasBeenSet; }
    inline void SetInitiator(const Aws::String& value) { m_initiatorHasBeenSet = true; m_initiator = value; }
    inline void SetInitiator(Aws::String&& value) { m_initiatorHasBeenSet = true; m_initiator = std::move(value); }
    inline void SetInitiator(const char* value) { m_initiatorHasBeenSet = true; m_initiator.assign(value); }
    inline Build& WithInitiator(const Aws::String& value) { SetInitiator(value); return *this;}
    inline Build& WithInitiator(Aws::String&& value) { SetInitiator(std::move(value)); return *this;}
    inline Build& WithInitiator(const char* value) { SetInitiator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If your CodeBuild project accesses resources in an Amazon VPC, you provide
     * this parameter that identifies the VPC ID and the list of security group IDs and
     * subnet IDs. The security groups and subnets must belong to the same VPC. You
     * must provide at least one security group and one subnet ID.</p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }
    inline Build& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}
    inline Build& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes a network interface.</p>
     */
    inline const NetworkInterface& GetNetworkInterface() const{ return m_networkInterface; }
    inline bool NetworkInterfaceHasBeenSet() const { return m_networkInterfaceHasBeenSet; }
    inline void SetNetworkInterface(const NetworkInterface& value) { m_networkInterfaceHasBeenSet = true; m_networkInterface = value; }
    inline void SetNetworkInterface(NetworkInterface&& value) { m_networkInterfaceHasBeenSet = true; m_networkInterface = std::move(value); }
    inline Build& WithNetworkInterface(const NetworkInterface& value) { SetNetworkInterface(value); return *this;}
    inline Build& WithNetworkInterface(NetworkInterface&& value) { SetNetworkInterface(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Key Management Service customer master key (CMK) to be used for
     * encrypting the build output artifacts.</p>  <p> You can use a
     * cross-account KMS key to encrypt the build output artifacts if your service role
     * has permission to that key. </p>  <p>You can specify either the Amazon
     * Resource Name (ARN) of the CMK or, if available, the CMK's alias (using the
     * format <code>alias/&lt;alias-name&gt;</code>).</p>
     */
    inline const Aws::String& GetEncryptionKey() const{ return m_encryptionKey; }
    inline bool EncryptionKeyHasBeenSet() const { return m_encryptionKeyHasBeenSet; }
    inline void SetEncryptionKey(const Aws::String& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = value; }
    inline void SetEncryptionKey(Aws::String&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = std::move(value); }
    inline void SetEncryptionKey(const char* value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey.assign(value); }
    inline Build& WithEncryptionKey(const Aws::String& value) { SetEncryptionKey(value); return *this;}
    inline Build& WithEncryptionKey(Aws::String&& value) { SetEncryptionKey(std::move(value)); return *this;}
    inline Build& WithEncryptionKey(const char* value) { SetEncryptionKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of exported environment variables for this build.</p> <p>Exported
     * environment variables are used in conjunction with CodePipeline to export
     * environment variables from the current build stage to subsequent stages in the
     * pipeline. For more information, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/actions-variables.html">Working
     * with variables</a> in the <i>CodePipeline User Guide</i>.</p>
     */
    inline const Aws::Vector<ExportedEnvironmentVariable>& GetExportedEnvironmentVariables() const{ return m_exportedEnvironmentVariables; }
    inline bool ExportedEnvironmentVariablesHasBeenSet() const { return m_exportedEnvironmentVariablesHasBeenSet; }
    inline void SetExportedEnvironmentVariables(const Aws::Vector<ExportedEnvironmentVariable>& value) { m_exportedEnvironmentVariablesHasBeenSet = true; m_exportedEnvironmentVariables = value; }
    inline void SetExportedEnvironmentVariables(Aws::Vector<ExportedEnvironmentVariable>&& value) { m_exportedEnvironmentVariablesHasBeenSet = true; m_exportedEnvironmentVariables = std::move(value); }
    inline Build& WithExportedEnvironmentVariables(const Aws::Vector<ExportedEnvironmentVariable>& value) { SetExportedEnvironmentVariables(value); return *this;}
    inline Build& WithExportedEnvironmentVariables(Aws::Vector<ExportedEnvironmentVariable>&& value) { SetExportedEnvironmentVariables(std::move(value)); return *this;}
    inline Build& AddExportedEnvironmentVariables(const ExportedEnvironmentVariable& value) { m_exportedEnvironmentVariablesHasBeenSet = true; m_exportedEnvironmentVariables.push_back(value); return *this; }
    inline Build& AddExportedEnvironmentVariables(ExportedEnvironmentVariable&& value) { m_exportedEnvironmentVariablesHasBeenSet = true; m_exportedEnvironmentVariables.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An array of the ARNs associated with this build's reports. </p>
     */
    inline const Aws::Vector<Aws::String>& GetReportArns() const{ return m_reportArns; }
    inline bool ReportArnsHasBeenSet() const { return m_reportArnsHasBeenSet; }
    inline void SetReportArns(const Aws::Vector<Aws::String>& value) { m_reportArnsHasBeenSet = true; m_reportArns = value; }
    inline void SetReportArns(Aws::Vector<Aws::String>&& value) { m_reportArnsHasBeenSet = true; m_reportArns = std::move(value); }
    inline Build& WithReportArns(const Aws::Vector<Aws::String>& value) { SetReportArns(value); return *this;}
    inline Build& WithReportArns(Aws::Vector<Aws::String>&& value) { SetReportArns(std::move(value)); return *this;}
    inline Build& AddReportArns(const Aws::String& value) { m_reportArnsHasBeenSet = true; m_reportArns.push_back(value); return *this; }
    inline Build& AddReportArns(Aws::String&& value) { m_reportArnsHasBeenSet = true; m_reportArns.push_back(std::move(value)); return *this; }
    inline Build& AddReportArns(const char* value) { m_reportArnsHasBeenSet = true; m_reportArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> An array of <code>ProjectFileSystemLocation</code> objects for a CodeBuild
     * build project. A <code>ProjectFileSystemLocation</code> object specifies the
     * <code>identifier</code>, <code>location</code>, <code>mountOptions</code>,
     * <code>mountPoint</code>, and <code>type</code> of a file system created using
     * Amazon Elastic File System. </p>
     */
    inline const Aws::Vector<ProjectFileSystemLocation>& GetFileSystemLocations() const{ return m_fileSystemLocations; }
    inline bool FileSystemLocationsHasBeenSet() const { return m_fileSystemLocationsHasBeenSet; }
    inline void SetFileSystemLocations(const Aws::Vector<ProjectFileSystemLocation>& value) { m_fileSystemLocationsHasBeenSet = true; m_fileSystemLocations = value; }
    inline void SetFileSystemLocations(Aws::Vector<ProjectFileSystemLocation>&& value) { m_fileSystemLocationsHasBeenSet = true; m_fileSystemLocations = std::move(value); }
    inline Build& WithFileSystemLocations(const Aws::Vector<ProjectFileSystemLocation>& value) { SetFileSystemLocations(value); return *this;}
    inline Build& WithFileSystemLocations(Aws::Vector<ProjectFileSystemLocation>&& value) { SetFileSystemLocations(std::move(value)); return *this;}
    inline Build& AddFileSystemLocations(const ProjectFileSystemLocation& value) { m_fileSystemLocationsHasBeenSet = true; m_fileSystemLocations.push_back(value); return *this; }
    inline Build& AddFileSystemLocations(ProjectFileSystemLocation&& value) { m_fileSystemLocationsHasBeenSet = true; m_fileSystemLocations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains information about the debug session for this build.</p>
     */
    inline const DebugSession& GetDebugSession() const{ return m_debugSession; }
    inline bool DebugSessionHasBeenSet() const { return m_debugSessionHasBeenSet; }
    inline void SetDebugSession(const DebugSession& value) { m_debugSessionHasBeenSet = true; m_debugSession = value; }
    inline void SetDebugSession(DebugSession&& value) { m_debugSessionHasBeenSet = true; m_debugSession = std::move(value); }
    inline Build& WithDebugSession(const DebugSession& value) { SetDebugSession(value); return *this;}
    inline Build& WithDebugSession(DebugSession&& value) { SetDebugSession(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the batch build that this build is a member of, if applicable.</p>
     */
    inline const Aws::String& GetBuildBatchArn() const{ return m_buildBatchArn; }
    inline bool BuildBatchArnHasBeenSet() const { return m_buildBatchArnHasBeenSet; }
    inline void SetBuildBatchArn(const Aws::String& value) { m_buildBatchArnHasBeenSet = true; m_buildBatchArn = value; }
    inline void SetBuildBatchArn(Aws::String&& value) { m_buildBatchArnHasBeenSet = true; m_buildBatchArn = std::move(value); }
    inline void SetBuildBatchArn(const char* value) { m_buildBatchArnHasBeenSet = true; m_buildBatchArn.assign(value); }
    inline Build& WithBuildBatchArn(const Aws::String& value) { SetBuildBatchArn(value); return *this;}
    inline Build& WithBuildBatchArn(Aws::String&& value) { SetBuildBatchArn(std::move(value)); return *this;}
    inline Build& WithBuildBatchArn(const char* value) { SetBuildBatchArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the auto-retry configuration for the build.</p>
     */
    inline const AutoRetryConfig& GetAutoRetryConfig() const{ return m_autoRetryConfig; }
    inline bool AutoRetryConfigHasBeenSet() const { return m_autoRetryConfigHasBeenSet; }
    inline void SetAutoRetryConfig(const AutoRetryConfig& value) { m_autoRetryConfigHasBeenSet = true; m_autoRetryConfig = value; }
    inline void SetAutoRetryConfig(AutoRetryConfig&& value) { m_autoRetryConfigHasBeenSet = true; m_autoRetryConfig = std::move(value); }
    inline Build& WithAutoRetryConfig(const AutoRetryConfig& value) { SetAutoRetryConfig(value); return *this;}
    inline Build& WithAutoRetryConfig(AutoRetryConfig&& value) { SetAutoRetryConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    long long m_buildNumber;
    bool m_buildNumberHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_currentPhase;
    bool m_currentPhaseHasBeenSet = false;

    StatusType m_buildStatus;
    bool m_buildStatusHasBeenSet = false;

    Aws::String m_sourceVersion;
    bool m_sourceVersionHasBeenSet = false;

    Aws::String m_resolvedSourceVersion;
    bool m_resolvedSourceVersionHasBeenSet = false;

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::Vector<BuildPhase> m_phases;
    bool m_phasesHasBeenSet = false;

    ProjectSource m_source;
    bool m_sourceHasBeenSet = false;

    Aws::Vector<ProjectSource> m_secondarySources;
    bool m_secondarySourcesHasBeenSet = false;

    Aws::Vector<ProjectSourceVersion> m_secondarySourceVersions;
    bool m_secondarySourceVersionsHasBeenSet = false;

    BuildArtifacts m_artifacts;
    bool m_artifactsHasBeenSet = false;

    Aws::Vector<BuildArtifacts> m_secondaryArtifacts;
    bool m_secondaryArtifactsHasBeenSet = false;

    ProjectCache m_cache;
    bool m_cacheHasBeenSet = false;

    ProjectEnvironment m_environment;
    bool m_environmentHasBeenSet = false;

    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet = false;

    LogsLocation m_logs;
    bool m_logsHasBeenSet = false;

    int m_timeoutInMinutes;
    bool m_timeoutInMinutesHasBeenSet = false;

    int m_queuedTimeoutInMinutes;
    bool m_queuedTimeoutInMinutesHasBeenSet = false;

    bool m_buildComplete;
    bool m_buildCompleteHasBeenSet = false;

    Aws::String m_initiator;
    bool m_initiatorHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    NetworkInterface m_networkInterface;
    bool m_networkInterfaceHasBeenSet = false;

    Aws::String m_encryptionKey;
    bool m_encryptionKeyHasBeenSet = false;

    Aws::Vector<ExportedEnvironmentVariable> m_exportedEnvironmentVariables;
    bool m_exportedEnvironmentVariablesHasBeenSet = false;

    Aws::Vector<Aws::String> m_reportArns;
    bool m_reportArnsHasBeenSet = false;

    Aws::Vector<ProjectFileSystemLocation> m_fileSystemLocations;
    bool m_fileSystemLocationsHasBeenSet = false;

    DebugSession m_debugSession;
    bool m_debugSessionHasBeenSet = false;

    Aws::String m_buildBatchArn;
    bool m_buildBatchArnHasBeenSet = false;

    AutoRetryConfig m_autoRetryConfig;
    bool m_autoRetryConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
