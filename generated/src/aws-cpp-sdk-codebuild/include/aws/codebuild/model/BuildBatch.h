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
#include <aws/codebuild/model/LogsConfig.h>
#include <aws/codebuild/model/VpcConfig.h>
#include <aws/codebuild/model/ProjectBuildBatchConfig.h>
#include <aws/codebuild/model/BuildBatchPhase.h>
#include <aws/codebuild/model/ProjectSourceVersion.h>
#include <aws/codebuild/model/ProjectFileSystemLocation.h>
#include <aws/codebuild/model/BuildGroup.h>
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
   * <p>Contains information about a batch build.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BuildBatch">AWS
   * API Reference</a></p>
   */
  class BuildBatch
  {
  public:
    AWS_CODEBUILD_API BuildBatch() = default;
    AWS_CODEBUILD_API BuildBatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API BuildBatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the batch build.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    BuildBatch& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the batch build.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    BuildBatch& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the batch build started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    BuildBatch& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the batch build ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    BuildBatch& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current phase of the batch build.</p>
     */
    inline const Aws::String& GetCurrentPhase() const { return m_currentPhase; }
    inline bool CurrentPhaseHasBeenSet() const { return m_currentPhaseHasBeenSet; }
    template<typename CurrentPhaseT = Aws::String>
    void SetCurrentPhase(CurrentPhaseT&& value) { m_currentPhaseHasBeenSet = true; m_currentPhase = std::forward<CurrentPhaseT>(value); }
    template<typename CurrentPhaseT = Aws::String>
    BuildBatch& WithCurrentPhase(CurrentPhaseT&& value) { SetCurrentPhase(std::forward<CurrentPhaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the batch build.</p>
     */
    inline StatusType GetBuildBatchStatus() const { return m_buildBatchStatus; }
    inline bool BuildBatchStatusHasBeenSet() const { return m_buildBatchStatusHasBeenSet; }
    inline void SetBuildBatchStatus(StatusType value) { m_buildBatchStatusHasBeenSet = true; m_buildBatchStatus = value; }
    inline BuildBatch& WithBuildBatchStatus(StatusType value) { SetBuildBatchStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the version of the source code to be built.</p>
     */
    inline const Aws::String& GetSourceVersion() const { return m_sourceVersion; }
    inline bool SourceVersionHasBeenSet() const { return m_sourceVersionHasBeenSet; }
    template<typename SourceVersionT = Aws::String>
    void SetSourceVersion(SourceVersionT&& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = std::forward<SourceVersionT>(value); }
    template<typename SourceVersionT = Aws::String>
    BuildBatch& WithSourceVersion(SourceVersionT&& value) { SetSourceVersion(std::forward<SourceVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the resolved version of this batch build's source code.</p>
     * <ul> <li> <p>For CodeCommit, GitHub, GitHub Enterprise, and BitBucket, the
     * commit ID.</p> </li> <li> <p>For CodePipeline, the source revision provided by
     * CodePipeline.</p> </li> <li> <p>For Amazon S3, this does not apply.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetResolvedSourceVersion() const { return m_resolvedSourceVersion; }
    inline bool ResolvedSourceVersionHasBeenSet() const { return m_resolvedSourceVersionHasBeenSet; }
    template<typename ResolvedSourceVersionT = Aws::String>
    void SetResolvedSourceVersion(ResolvedSourceVersionT&& value) { m_resolvedSourceVersionHasBeenSet = true; m_resolvedSourceVersion = std::forward<ResolvedSourceVersionT>(value); }
    template<typename ResolvedSourceVersionT = Aws::String>
    BuildBatch& WithResolvedSourceVersion(ResolvedSourceVersionT&& value) { SetResolvedSourceVersion(std::forward<ResolvedSourceVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the batch build project.</p>
     */
    inline const Aws::String& GetProjectName() const { return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    template<typename ProjectNameT = Aws::String>
    void SetProjectName(ProjectNameT&& value) { m_projectNameHasBeenSet = true; m_projectName = std::forward<ProjectNameT>(value); }
    template<typename ProjectNameT = Aws::String>
    BuildBatch& WithProjectName(ProjectNameT&& value) { SetProjectName(std::forward<ProjectNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>BuildBatchPhase</code> objects the specify the phases of
     * the batch build.</p>
     */
    inline const Aws::Vector<BuildBatchPhase>& GetPhases() const { return m_phases; }
    inline bool PhasesHasBeenSet() const { return m_phasesHasBeenSet; }
    template<typename PhasesT = Aws::Vector<BuildBatchPhase>>
    void SetPhases(PhasesT&& value) { m_phasesHasBeenSet = true; m_phases = std::forward<PhasesT>(value); }
    template<typename PhasesT = Aws::Vector<BuildBatchPhase>>
    BuildBatch& WithPhases(PhasesT&& value) { SetPhases(std::forward<PhasesT>(value)); return *this;}
    template<typename PhasesT = BuildBatchPhase>
    BuildBatch& AddPhases(PhasesT&& value) { m_phasesHasBeenSet = true; m_phases.emplace_back(std::forward<PhasesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ProjectSource& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = ProjectSource>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = ProjectSource>
    BuildBatch& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>ProjectSource</code> objects that define the sources for
     * the batch build.</p>
     */
    inline const Aws::Vector<ProjectSource>& GetSecondarySources() const { return m_secondarySources; }
    inline bool SecondarySourcesHasBeenSet() const { return m_secondarySourcesHasBeenSet; }
    template<typename SecondarySourcesT = Aws::Vector<ProjectSource>>
    void SetSecondarySources(SecondarySourcesT&& value) { m_secondarySourcesHasBeenSet = true; m_secondarySources = std::forward<SecondarySourcesT>(value); }
    template<typename SecondarySourcesT = Aws::Vector<ProjectSource>>
    BuildBatch& WithSecondarySources(SecondarySourcesT&& value) { SetSecondarySources(std::forward<SecondarySourcesT>(value)); return *this;}
    template<typename SecondarySourcesT = ProjectSource>
    BuildBatch& AddSecondarySources(SecondarySourcesT&& value) { m_secondarySourcesHasBeenSet = true; m_secondarySources.emplace_back(std::forward<SecondarySourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of <code>ProjectSourceVersion</code> objects. Each
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
    BuildBatch& WithSecondarySourceVersions(SecondarySourceVersionsT&& value) { SetSecondarySourceVersions(std::forward<SecondarySourceVersionsT>(value)); return *this;}
    template<typename SecondarySourceVersionsT = ProjectSourceVersion>
    BuildBatch& AddSecondarySourceVersions(SecondarySourceVersionsT&& value) { m_secondarySourceVersionsHasBeenSet = true; m_secondarySourceVersions.emplace_back(std::forward<SecondarySourceVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A <code>BuildArtifacts</code> object the defines the build artifacts for this
     * batch build.</p>
     */
    inline const BuildArtifacts& GetArtifacts() const { return m_artifacts; }
    inline bool ArtifactsHasBeenSet() const { return m_artifactsHasBeenSet; }
    template<typename ArtifactsT = BuildArtifacts>
    void SetArtifacts(ArtifactsT&& value) { m_artifactsHasBeenSet = true; m_artifacts = std::forward<ArtifactsT>(value); }
    template<typename ArtifactsT = BuildArtifacts>
    BuildBatch& WithArtifacts(ArtifactsT&& value) { SetArtifacts(std::forward<ArtifactsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>BuildArtifacts</code> objects the define the build
     * artifacts for this batch build.</p>
     */
    inline const Aws::Vector<BuildArtifacts>& GetSecondaryArtifacts() const { return m_secondaryArtifacts; }
    inline bool SecondaryArtifactsHasBeenSet() const { return m_secondaryArtifactsHasBeenSet; }
    template<typename SecondaryArtifactsT = Aws::Vector<BuildArtifacts>>
    void SetSecondaryArtifacts(SecondaryArtifactsT&& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts = std::forward<SecondaryArtifactsT>(value); }
    template<typename SecondaryArtifactsT = Aws::Vector<BuildArtifacts>>
    BuildBatch& WithSecondaryArtifacts(SecondaryArtifactsT&& value) { SetSecondaryArtifacts(std::forward<SecondaryArtifactsT>(value)); return *this;}
    template<typename SecondaryArtifactsT = BuildArtifacts>
    BuildBatch& AddSecondaryArtifacts(SecondaryArtifactsT&& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts.emplace_back(std::forward<SecondaryArtifactsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ProjectCache& GetCache() const { return m_cache; }
    inline bool CacheHasBeenSet() const { return m_cacheHasBeenSet; }
    template<typename CacheT = ProjectCache>
    void SetCache(CacheT&& value) { m_cacheHasBeenSet = true; m_cache = std::forward<CacheT>(value); }
    template<typename CacheT = ProjectCache>
    BuildBatch& WithCache(CacheT&& value) { SetCache(std::forward<CacheT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ProjectEnvironment& GetEnvironment() const { return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    template<typename EnvironmentT = ProjectEnvironment>
    void SetEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment = std::forward<EnvironmentT>(value); }
    template<typename EnvironmentT = ProjectEnvironment>
    BuildBatch& WithEnvironment(EnvironmentT&& value) { SetEnvironment(std::forward<EnvironmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a service role used for builds in the batch.</p>
     */
    inline const Aws::String& GetServiceRole() const { return m_serviceRole; }
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }
    template<typename ServiceRoleT = Aws::String>
    void SetServiceRole(ServiceRoleT&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::forward<ServiceRoleT>(value); }
    template<typename ServiceRoleT = Aws::String>
    BuildBatch& WithServiceRole(ServiceRoleT&& value) { SetServiceRole(std::forward<ServiceRoleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const LogsConfig& GetLogConfig() const { return m_logConfig; }
    inline bool LogConfigHasBeenSet() const { return m_logConfigHasBeenSet; }
    template<typename LogConfigT = LogsConfig>
    void SetLogConfig(LogConfigT&& value) { m_logConfigHasBeenSet = true; m_logConfig = std::forward<LogConfigT>(value); }
    template<typename LogConfigT = LogsConfig>
    BuildBatch& WithLogConfig(LogConfigT&& value) { SetLogConfig(std::forward<LogConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the maximum amount of time, in minutes, that the build in a batch
     * must be completed in.</p>
     */
    inline int GetBuildTimeoutInMinutes() const { return m_buildTimeoutInMinutes; }
    inline bool BuildTimeoutInMinutesHasBeenSet() const { return m_buildTimeoutInMinutesHasBeenSet; }
    inline void SetBuildTimeoutInMinutes(int value) { m_buildTimeoutInMinutesHasBeenSet = true; m_buildTimeoutInMinutes = value; }
    inline BuildBatch& WithBuildTimeoutInMinutes(int value) { SetBuildTimeoutInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the amount of time, in minutes, that the batch build is allowed to
     * be queued before it times out.</p>
     */
    inline int GetQueuedTimeoutInMinutes() const { return m_queuedTimeoutInMinutes; }
    inline bool QueuedTimeoutInMinutesHasBeenSet() const { return m_queuedTimeoutInMinutesHasBeenSet; }
    inline void SetQueuedTimeoutInMinutes(int value) { m_queuedTimeoutInMinutesHasBeenSet = true; m_queuedTimeoutInMinutes = value; }
    inline BuildBatch& WithQueuedTimeoutInMinutes(int value) { SetQueuedTimeoutInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the batch build is complete.</p>
     */
    inline bool GetComplete() const { return m_complete; }
    inline bool CompleteHasBeenSet() const { return m_completeHasBeenSet; }
    inline void SetComplete(bool value) { m_completeHasBeenSet = true; m_complete = value; }
    inline BuildBatch& WithComplete(bool value) { SetComplete(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity that started the batch build. Valid values include:</p> <ul> <li>
     * <p>If CodePipeline started the build, the pipeline's name (for example,
     * <code>codepipeline/my-demo-pipeline</code>).</p> </li> <li> <p>If a user started
     * the build, the user's name.</p> </li> <li> <p>If the Jenkins plugin for
     * CodeBuild started the build, the string
     * <code>CodeBuild-Jenkins-Plugin</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetInitiator() const { return m_initiator; }
    inline bool InitiatorHasBeenSet() const { return m_initiatorHasBeenSet; }
    template<typename InitiatorT = Aws::String>
    void SetInitiator(InitiatorT&& value) { m_initiatorHasBeenSet = true; m_initiator = std::forward<InitiatorT>(value); }
    template<typename InitiatorT = Aws::String>
    BuildBatch& WithInitiator(InitiatorT&& value) { SetInitiator(std::forward<InitiatorT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const VpcConfig& GetVpcConfig() const { return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    template<typename VpcConfigT = VpcConfig>
    void SetVpcConfig(VpcConfigT&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::forward<VpcConfigT>(value); }
    template<typename VpcConfigT = VpcConfig>
    BuildBatch& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Key Management Service customer master key (CMK) to be used for
     * encrypting the batch build output artifacts.</p>  <p>You can use a
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
    BuildBatch& WithEncryptionKey(EncryptionKeyT&& value) { SetEncryptionKey(std::forward<EncryptionKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of the batch build. For each project, the
     * <code>buildBatchNumber</code> of its first batch build is <code>1</code>. The
     * <code>buildBatchNumber</code> of each subsequent batch build is incremented by
     * <code>1</code>. If a batch build is deleted, the <code>buildBatchNumber</code>
     * of other batch builds does not change.</p>
     */
    inline long long GetBuildBatchNumber() const { return m_buildBatchNumber; }
    inline bool BuildBatchNumberHasBeenSet() const { return m_buildBatchNumberHasBeenSet; }
    inline void SetBuildBatchNumber(long long value) { m_buildBatchNumberHasBeenSet = true; m_buildBatchNumber = value; }
    inline BuildBatch& WithBuildBatchNumber(long long value) { SetBuildBatchNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>ProjectFileSystemLocation</code> objects for the batch
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
    BuildBatch& WithFileSystemLocations(FileSystemLocationsT&& value) { SetFileSystemLocations(std::forward<FileSystemLocationsT>(value)); return *this;}
    template<typename FileSystemLocationsT = ProjectFileSystemLocation>
    BuildBatch& AddFileSystemLocations(FileSystemLocationsT&& value) { m_fileSystemLocationsHasBeenSet = true; m_fileSystemLocations.emplace_back(std::forward<FileSystemLocationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ProjectBuildBatchConfig& GetBuildBatchConfig() const { return m_buildBatchConfig; }
    inline bool BuildBatchConfigHasBeenSet() const { return m_buildBatchConfigHasBeenSet; }
    template<typename BuildBatchConfigT = ProjectBuildBatchConfig>
    void SetBuildBatchConfig(BuildBatchConfigT&& value) { m_buildBatchConfigHasBeenSet = true; m_buildBatchConfig = std::forward<BuildBatchConfigT>(value); }
    template<typename BuildBatchConfigT = ProjectBuildBatchConfig>
    BuildBatch& WithBuildBatchConfig(BuildBatchConfigT&& value) { SetBuildBatchConfig(std::forward<BuildBatchConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>BuildGroup</code> objects that define the build groups for
     * the batch build.</p>
     */
    inline const Aws::Vector<BuildGroup>& GetBuildGroups() const { return m_buildGroups; }
    inline bool BuildGroupsHasBeenSet() const { return m_buildGroupsHasBeenSet; }
    template<typename BuildGroupsT = Aws::Vector<BuildGroup>>
    void SetBuildGroups(BuildGroupsT&& value) { m_buildGroupsHasBeenSet = true; m_buildGroups = std::forward<BuildGroupsT>(value); }
    template<typename BuildGroupsT = Aws::Vector<BuildGroup>>
    BuildBatch& WithBuildGroups(BuildGroupsT&& value) { SetBuildGroups(std::forward<BuildGroupsT>(value)); return *this;}
    template<typename BuildGroupsT = BuildGroup>
    BuildBatch& AddBuildGroups(BuildGroupsT&& value) { m_buildGroupsHasBeenSet = true; m_buildGroups.emplace_back(std::forward<BuildGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies if session debugging is enabled for this batch build. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/session-manager.html">Viewing
     * a running build in Session Manager</a>. Batch session debugging is not supported
     * for matrix batch builds.</p>
     */
    inline bool GetDebugSessionEnabled() const { return m_debugSessionEnabled; }
    inline bool DebugSessionEnabledHasBeenSet() const { return m_debugSessionEnabledHasBeenSet; }
    inline void SetDebugSessionEnabled(bool value) { m_debugSessionEnabledHasBeenSet = true; m_debugSessionEnabled = value; }
    inline BuildBatch& WithDebugSessionEnabled(bool value) { SetDebugSessionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array that contains the ARNs of reports created by merging reports from
     * builds associated with this batch build.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReportArns() const { return m_reportArns; }
    inline bool ReportArnsHasBeenSet() const { return m_reportArnsHasBeenSet; }
    template<typename ReportArnsT = Aws::Vector<Aws::String>>
    void SetReportArns(ReportArnsT&& value) { m_reportArnsHasBeenSet = true; m_reportArns = std::forward<ReportArnsT>(value); }
    template<typename ReportArnsT = Aws::Vector<Aws::String>>
    BuildBatch& WithReportArns(ReportArnsT&& value) { SetReportArns(std::forward<ReportArnsT>(value)); return *this;}
    template<typename ReportArnsT = Aws::String>
    BuildBatch& AddReportArns(ReportArnsT&& value) { m_reportArnsHasBeenSet = true; m_reportArns.emplace_back(std::forward<ReportArnsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::String m_currentPhase;
    bool m_currentPhaseHasBeenSet = false;

    StatusType m_buildBatchStatus{StatusType::NOT_SET};
    bool m_buildBatchStatusHasBeenSet = false;

    Aws::String m_sourceVersion;
    bool m_sourceVersionHasBeenSet = false;

    Aws::String m_resolvedSourceVersion;
    bool m_resolvedSourceVersionHasBeenSet = false;

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::Vector<BuildBatchPhase> m_phases;
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

    LogsConfig m_logConfig;
    bool m_logConfigHasBeenSet = false;

    int m_buildTimeoutInMinutes{0};
    bool m_buildTimeoutInMinutesHasBeenSet = false;

    int m_queuedTimeoutInMinutes{0};
    bool m_queuedTimeoutInMinutesHasBeenSet = false;

    bool m_complete{false};
    bool m_completeHasBeenSet = false;

    Aws::String m_initiator;
    bool m_initiatorHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    Aws::String m_encryptionKey;
    bool m_encryptionKeyHasBeenSet = false;

    long long m_buildBatchNumber{0};
    bool m_buildBatchNumberHasBeenSet = false;

    Aws::Vector<ProjectFileSystemLocation> m_fileSystemLocations;
    bool m_fileSystemLocationsHasBeenSet = false;

    ProjectBuildBatchConfig m_buildBatchConfig;
    bool m_buildBatchConfigHasBeenSet = false;

    Aws::Vector<BuildGroup> m_buildGroups;
    bool m_buildGroupsHasBeenSet = false;

    bool m_debugSessionEnabled{false};
    bool m_debugSessionEnabledHasBeenSet = false;

    Aws::Vector<Aws::String> m_reportArns;
    bool m_reportArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
