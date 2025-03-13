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
    AWS_CODEBUILD_API Build() = default;
    AWS_CODEBUILD_API Build(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Build& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID for the build.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Build& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the build.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Build& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of the build. For each project, the <code>buildNumber</code> of
     * its first build is <code>1</code>. The <code>buildNumber</code> of each
     * subsequent build is incremented by <code>1</code>. If a build is deleted, the
     * <code>buildNumber</code> of other builds does not change.</p>
     */
    inline long long GetBuildNumber() const { return m_buildNumber; }
    inline bool BuildNumberHasBeenSet() const { return m_buildNumberHasBeenSet; }
    inline void SetBuildNumber(long long value) { m_buildNumberHasBeenSet = true; m_buildNumber = value; }
    inline Build& WithBuildNumber(long long value) { SetBuildNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the build process started, expressed in Unix time format.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    Build& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the build process ended, expressed in Unix time format.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    Build& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current build phase.</p>
     */
    inline const Aws::String& GetCurrentPhase() const { return m_currentPhase; }
    inline bool CurrentPhaseHasBeenSet() const { return m_currentPhaseHasBeenSet; }
    template<typename CurrentPhaseT = Aws::String>
    void SetCurrentPhase(CurrentPhaseT&& value) { m_currentPhaseHasBeenSet = true; m_currentPhase = std::forward<CurrentPhaseT>(value); }
    template<typename CurrentPhaseT = Aws::String>
    Build& WithCurrentPhase(CurrentPhaseT&& value) { SetCurrentPhase(std::forward<CurrentPhaseT>(value)); return *this;}
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
    inline StatusType GetBuildStatus() const { return m_buildStatus; }
    inline bool BuildStatusHasBeenSet() const { return m_buildStatusHasBeenSet; }
    inline void SetBuildStatus(StatusType value) { m_buildStatusHasBeenSet = true; m_buildStatus = value; }
    inline Build& WithBuildStatus(StatusType value) { SetBuildStatus(value); return *this;}
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
    inline const Aws::String& GetSourceVersion() const { return m_sourceVersion; }
    inline bool SourceVersionHasBeenSet() const { return m_sourceVersionHasBeenSet; }
    template<typename SourceVersionT = Aws::String>
    void SetSourceVersion(SourceVersionT&& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = std::forward<SourceVersionT>(value); }
    template<typename SourceVersionT = Aws::String>
    Build& WithSourceVersion(SourceVersionT&& value) { SetSourceVersion(std::forward<SourceVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An identifier for the version of this build's source code. </p> <ul> <li>
     * <p> For CodeCommit, GitHub, GitHub Enterprise, and BitBucket, the commit ID.
     * </p> </li> <li> <p> For CodePipeline, the source revision provided by
     * CodePipeline. </p> </li> <li> <p> For Amazon S3, this does not apply. </p> </li>
     * </ul>
     */
    inline const Aws::String& GetResolvedSourceVersion() const { return m_resolvedSourceVersion; }
    inline bool ResolvedSourceVersionHasBeenSet() const { return m_resolvedSourceVersionHasBeenSet; }
    template<typename ResolvedSourceVersionT = Aws::String>
    void SetResolvedSourceVersion(ResolvedSourceVersionT&& value) { m_resolvedSourceVersionHasBeenSet = true; m_resolvedSourceVersion = std::forward<ResolvedSourceVersionT>(value); }
    template<typename ResolvedSourceVersionT = Aws::String>
    Build& WithResolvedSourceVersion(ResolvedSourceVersionT&& value) { SetResolvedSourceVersion(std::forward<ResolvedSourceVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the CodeBuild project.</p>
     */
    inline const Aws::String& GetProjectName() const { return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    template<typename ProjectNameT = Aws::String>
    void SetProjectName(ProjectNameT&& value) { m_projectNameHasBeenSet = true; m_projectName = std::forward<ProjectNameT>(value); }
    template<typename ProjectNameT = Aws::String>
    Build& WithProjectName(ProjectNameT&& value) { SetProjectName(std::forward<ProjectNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about all previous build phases that are complete and information
     * about any current build phase that is not yet complete.</p>
     */
    inline const Aws::Vector<BuildPhase>& GetPhases() const { return m_phases; }
    inline bool PhasesHasBeenSet() const { return m_phasesHasBeenSet; }
    template<typename PhasesT = Aws::Vector<BuildPhase>>
    void SetPhases(PhasesT&& value) { m_phasesHasBeenSet = true; m_phases = std::forward<PhasesT>(value); }
    template<typename PhasesT = Aws::Vector<BuildPhase>>
    Build& WithPhases(PhasesT&& value) { SetPhases(std::forward<PhasesT>(value)); return *this;}
    template<typename PhasesT = BuildPhase>
    Build& AddPhases(PhasesT&& value) { m_phasesHasBeenSet = true; m_phases.emplace_back(std::forward<PhasesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the source code to be built.</p>
     */
    inline const ProjectSource& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = ProjectSource>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = ProjectSource>
    Build& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of <code>ProjectSource</code> objects. </p>
     */
    inline const Aws::Vector<ProjectSource>& GetSecondarySources() const { return m_secondarySources; }
    inline bool SecondarySourcesHasBeenSet() const { return m_secondarySourcesHasBeenSet; }
    template<typename SecondarySourcesT = Aws::Vector<ProjectSource>>
    void SetSecondarySources(SecondarySourcesT&& value) { m_secondarySourcesHasBeenSet = true; m_secondarySources = std::forward<SecondarySourcesT>(value); }
    template<typename SecondarySourcesT = Aws::Vector<ProjectSource>>
    Build& WithSecondarySources(SecondarySourcesT&& value) { SetSecondarySources(std::forward<SecondarySourcesT>(value)); return *this;}
    template<typename SecondarySourcesT = ProjectSource>
    Build& AddSecondarySources(SecondarySourcesT&& value) { m_secondarySourcesHasBeenSet = true; m_secondarySources.emplace_back(std::forward<SecondarySourcesT>(value)); return *this; }
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
    inline const Aws::Vector<ProjectSourceVersion>& GetSecondarySourceVersions() const { return m_secondarySourceVersions; }
    inline bool SecondarySourceVersionsHasBeenSet() const { return m_secondarySourceVersionsHasBeenSet; }
    template<typename SecondarySourceVersionsT = Aws::Vector<ProjectSourceVersion>>
    void SetSecondarySourceVersions(SecondarySourceVersionsT&& value) { m_secondarySourceVersionsHasBeenSet = true; m_secondarySourceVersions = std::forward<SecondarySourceVersionsT>(value); }
    template<typename SecondarySourceVersionsT = Aws::Vector<ProjectSourceVersion>>
    Build& WithSecondarySourceVersions(SecondarySourceVersionsT&& value) { SetSecondarySourceVersions(std::forward<SecondarySourceVersionsT>(value)); return *this;}
    template<typename SecondarySourceVersionsT = ProjectSourceVersion>
    Build& AddSecondarySourceVersions(SecondarySourceVersionsT&& value) { m_secondarySourceVersionsHasBeenSet = true; m_secondarySourceVersions.emplace_back(std::forward<SecondarySourceVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the output artifacts for the build.</p>
     */
    inline const BuildArtifacts& GetArtifacts() const { return m_artifacts; }
    inline bool ArtifactsHasBeenSet() const { return m_artifactsHasBeenSet; }
    template<typename ArtifactsT = BuildArtifacts>
    void SetArtifacts(ArtifactsT&& value) { m_artifactsHasBeenSet = true; m_artifacts = std::forward<ArtifactsT>(value); }
    template<typename ArtifactsT = BuildArtifacts>
    Build& WithArtifacts(ArtifactsT&& value) { SetArtifacts(std::forward<ArtifactsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of <code>ProjectArtifacts</code> objects. </p>
     */
    inline const Aws::Vector<BuildArtifacts>& GetSecondaryArtifacts() const { return m_secondaryArtifacts; }
    inline bool SecondaryArtifactsHasBeenSet() const { return m_secondaryArtifactsHasBeenSet; }
    template<typename SecondaryArtifactsT = Aws::Vector<BuildArtifacts>>
    void SetSecondaryArtifacts(SecondaryArtifactsT&& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts = std::forward<SecondaryArtifactsT>(value); }
    template<typename SecondaryArtifactsT = Aws::Vector<BuildArtifacts>>
    Build& WithSecondaryArtifacts(SecondaryArtifactsT&& value) { SetSecondaryArtifacts(std::forward<SecondaryArtifactsT>(value)); return *this;}
    template<typename SecondaryArtifactsT = BuildArtifacts>
    Build& AddSecondaryArtifacts(SecondaryArtifactsT&& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts.emplace_back(std::forward<SecondaryArtifactsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the cache for the build.</p>
     */
    inline const ProjectCache& GetCache() const { return m_cache; }
    inline bool CacheHasBeenSet() const { return m_cacheHasBeenSet; }
    template<typename CacheT = ProjectCache>
    void SetCache(CacheT&& value) { m_cacheHasBeenSet = true; m_cache = std::forward<CacheT>(value); }
    template<typename CacheT = ProjectCache>
    Build& WithCache(CacheT&& value) { SetCache(std::forward<CacheT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the build environment for this build.</p>
     */
    inline const ProjectEnvironment& GetEnvironment() const { return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    template<typename EnvironmentT = ProjectEnvironment>
    void SetEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment = std::forward<EnvironmentT>(value); }
    template<typename EnvironmentT = ProjectEnvironment>
    Build& WithEnvironment(EnvironmentT&& value) { SetEnvironment(std::forward<EnvironmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a service role used for this build.</p>
     */
    inline const Aws::String& GetServiceRole() const { return m_serviceRole; }
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }
    template<typename ServiceRoleT = Aws::String>
    void SetServiceRole(ServiceRoleT&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::forward<ServiceRoleT>(value); }
    template<typename ServiceRoleT = Aws::String>
    Build& WithServiceRole(ServiceRoleT&& value) { SetServiceRole(std::forward<ServiceRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the build's logs in CloudWatch Logs.</p>
     */
    inline const LogsLocation& GetLogs() const { return m_logs; }
    inline bool LogsHasBeenSet() const { return m_logsHasBeenSet; }
    template<typename LogsT = LogsLocation>
    void SetLogs(LogsT&& value) { m_logsHasBeenSet = true; m_logs = std::forward<LogsT>(value); }
    template<typename LogsT = LogsLocation>
    Build& WithLogs(LogsT&& value) { SetLogs(std::forward<LogsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How long, in minutes, from 5 to 2160 (36 hours), for CodeBuild to wait before
     * timing out this build if it does not get marked as completed.</p>
     */
    inline int GetTimeoutInMinutes() const { return m_timeoutInMinutes; }
    inline bool TimeoutInMinutesHasBeenSet() const { return m_timeoutInMinutesHasBeenSet; }
    inline void SetTimeoutInMinutes(int value) { m_timeoutInMinutesHasBeenSet = true; m_timeoutInMinutes = value; }
    inline Build& WithTimeoutInMinutes(int value) { SetTimeoutInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of minutes a build is allowed to be queued before it times out.
     * </p>
     */
    inline int GetQueuedTimeoutInMinutes() const { return m_queuedTimeoutInMinutes; }
    inline bool QueuedTimeoutInMinutesHasBeenSet() const { return m_queuedTimeoutInMinutesHasBeenSet; }
    inline void SetQueuedTimeoutInMinutes(int value) { m_queuedTimeoutInMinutesHasBeenSet = true; m_queuedTimeoutInMinutes = value; }
    inline Build& WithQueuedTimeoutInMinutes(int value) { SetQueuedTimeoutInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the build is complete. True if complete; otherwise, false.</p>
     */
    inline bool GetBuildComplete() const { return m_buildComplete; }
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
    inline const Aws::String& GetInitiator() const { return m_initiator; }
    inline bool InitiatorHasBeenSet() const { return m_initiatorHasBeenSet; }
    template<typename InitiatorT = Aws::String>
    void SetInitiator(InitiatorT&& value) { m_initiatorHasBeenSet = true; m_initiator = std::forward<InitiatorT>(value); }
    template<typename InitiatorT = Aws::String>
    Build& WithInitiator(InitiatorT&& value) { SetInitiator(std::forward<InitiatorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If your CodeBuild project accesses resources in an Amazon VPC, you provide
     * this parameter that identifies the VPC ID and the list of security group IDs and
     * subnet IDs. The security groups and subnets must belong to the same VPC. You
     * must provide at least one security group and one subnet ID.</p>
     */
    inline const VpcConfig& GetVpcConfig() const { return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    template<typename VpcConfigT = VpcConfig>
    void SetVpcConfig(VpcConfigT&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::forward<VpcConfigT>(value); }
    template<typename VpcConfigT = VpcConfig>
    Build& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes a network interface.</p>
     */
    inline const NetworkInterface& GetNetworkInterface() const { return m_networkInterface; }
    inline bool NetworkInterfaceHasBeenSet() const { return m_networkInterfaceHasBeenSet; }
    template<typename NetworkInterfaceT = NetworkInterface>
    void SetNetworkInterface(NetworkInterfaceT&& value) { m_networkInterfaceHasBeenSet = true; m_networkInterface = std::forward<NetworkInterfaceT>(value); }
    template<typename NetworkInterfaceT = NetworkInterface>
    Build& WithNetworkInterface(NetworkInterfaceT&& value) { SetNetworkInterface(std::forward<NetworkInterfaceT>(value)); return *this;}
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
    inline const Aws::String& GetEncryptionKey() const { return m_encryptionKey; }
    inline bool EncryptionKeyHasBeenSet() const { return m_encryptionKeyHasBeenSet; }
    template<typename EncryptionKeyT = Aws::String>
    void SetEncryptionKey(EncryptionKeyT&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = std::forward<EncryptionKeyT>(value); }
    template<typename EncryptionKeyT = Aws::String>
    Build& WithEncryptionKey(EncryptionKeyT&& value) { SetEncryptionKey(std::forward<EncryptionKeyT>(value)); return *this;}
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
    inline const Aws::Vector<ExportedEnvironmentVariable>& GetExportedEnvironmentVariables() const { return m_exportedEnvironmentVariables; }
    inline bool ExportedEnvironmentVariablesHasBeenSet() const { return m_exportedEnvironmentVariablesHasBeenSet; }
    template<typename ExportedEnvironmentVariablesT = Aws::Vector<ExportedEnvironmentVariable>>
    void SetExportedEnvironmentVariables(ExportedEnvironmentVariablesT&& value) { m_exportedEnvironmentVariablesHasBeenSet = true; m_exportedEnvironmentVariables = std::forward<ExportedEnvironmentVariablesT>(value); }
    template<typename ExportedEnvironmentVariablesT = Aws::Vector<ExportedEnvironmentVariable>>
    Build& WithExportedEnvironmentVariables(ExportedEnvironmentVariablesT&& value) { SetExportedEnvironmentVariables(std::forward<ExportedEnvironmentVariablesT>(value)); return *this;}
    template<typename ExportedEnvironmentVariablesT = ExportedEnvironmentVariable>
    Build& AddExportedEnvironmentVariables(ExportedEnvironmentVariablesT&& value) { m_exportedEnvironmentVariablesHasBeenSet = true; m_exportedEnvironmentVariables.emplace_back(std::forward<ExportedEnvironmentVariablesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An array of the ARNs associated with this build's reports. </p>
     */
    inline const Aws::Vector<Aws::String>& GetReportArns() const { return m_reportArns; }
    inline bool ReportArnsHasBeenSet() const { return m_reportArnsHasBeenSet; }
    template<typename ReportArnsT = Aws::Vector<Aws::String>>
    void SetReportArns(ReportArnsT&& value) { m_reportArnsHasBeenSet = true; m_reportArns = std::forward<ReportArnsT>(value); }
    template<typename ReportArnsT = Aws::Vector<Aws::String>>
    Build& WithReportArns(ReportArnsT&& value) { SetReportArns(std::forward<ReportArnsT>(value)); return *this;}
    template<typename ReportArnsT = Aws::String>
    Build& AddReportArns(ReportArnsT&& value) { m_reportArnsHasBeenSet = true; m_reportArns.emplace_back(std::forward<ReportArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An array of <code>ProjectFileSystemLocation</code> objects for a CodeBuild
     * build project. A <code>ProjectFileSystemLocation</code> object specifies the
     * <code>identifier</code>, <code>location</code>, <code>mountOptions</code>,
     * <code>mountPoint</code>, and <code>type</code> of a file system created using
     * Amazon Elastic File System. </p>
     */
    inline const Aws::Vector<ProjectFileSystemLocation>& GetFileSystemLocations() const { return m_fileSystemLocations; }
    inline bool FileSystemLocationsHasBeenSet() const { return m_fileSystemLocationsHasBeenSet; }
    template<typename FileSystemLocationsT = Aws::Vector<ProjectFileSystemLocation>>
    void SetFileSystemLocations(FileSystemLocationsT&& value) { m_fileSystemLocationsHasBeenSet = true; m_fileSystemLocations = std::forward<FileSystemLocationsT>(value); }
    template<typename FileSystemLocationsT = Aws::Vector<ProjectFileSystemLocation>>
    Build& WithFileSystemLocations(FileSystemLocationsT&& value) { SetFileSystemLocations(std::forward<FileSystemLocationsT>(value)); return *this;}
    template<typename FileSystemLocationsT = ProjectFileSystemLocation>
    Build& AddFileSystemLocations(FileSystemLocationsT&& value) { m_fileSystemLocationsHasBeenSet = true; m_fileSystemLocations.emplace_back(std::forward<FileSystemLocationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains information about the debug session for this build.</p>
     */
    inline const DebugSession& GetDebugSession() const { return m_debugSession; }
    inline bool DebugSessionHasBeenSet() const { return m_debugSessionHasBeenSet; }
    template<typename DebugSessionT = DebugSession>
    void SetDebugSession(DebugSessionT&& value) { m_debugSessionHasBeenSet = true; m_debugSession = std::forward<DebugSessionT>(value); }
    template<typename DebugSessionT = DebugSession>
    Build& WithDebugSession(DebugSessionT&& value) { SetDebugSession(std::forward<DebugSessionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the batch build that this build is a member of, if applicable.</p>
     */
    inline const Aws::String& GetBuildBatchArn() const { return m_buildBatchArn; }
    inline bool BuildBatchArnHasBeenSet() const { return m_buildBatchArnHasBeenSet; }
    template<typename BuildBatchArnT = Aws::String>
    void SetBuildBatchArn(BuildBatchArnT&& value) { m_buildBatchArnHasBeenSet = true; m_buildBatchArn = std::forward<BuildBatchArnT>(value); }
    template<typename BuildBatchArnT = Aws::String>
    Build& WithBuildBatchArn(BuildBatchArnT&& value) { SetBuildBatchArn(std::forward<BuildBatchArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the auto-retry configuration for the build.</p>
     */
    inline const AutoRetryConfig& GetAutoRetryConfig() const { return m_autoRetryConfig; }
    inline bool AutoRetryConfigHasBeenSet() const { return m_autoRetryConfigHasBeenSet; }
    template<typename AutoRetryConfigT = AutoRetryConfig>
    void SetAutoRetryConfig(AutoRetryConfigT&& value) { m_autoRetryConfigHasBeenSet = true; m_autoRetryConfig = std::forward<AutoRetryConfigT>(value); }
    template<typename AutoRetryConfigT = AutoRetryConfig>
    Build& WithAutoRetryConfig(AutoRetryConfigT&& value) { SetAutoRetryConfig(std::forward<AutoRetryConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    long long m_buildNumber{0};
    bool m_buildNumberHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::String m_currentPhase;
    bool m_currentPhaseHasBeenSet = false;

    StatusType m_buildStatus{StatusType::NOT_SET};
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

    int m_timeoutInMinutes{0};
    bool m_timeoutInMinutesHasBeenSet = false;

    int m_queuedTimeoutInMinutes{0};
    bool m_queuedTimeoutInMinutesHasBeenSet = false;

    bool m_buildComplete{false};
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
