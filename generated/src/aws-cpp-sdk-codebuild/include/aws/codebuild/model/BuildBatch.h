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
    AWS_CODEBUILD_API BuildBatch();
    AWS_CODEBUILD_API BuildBatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API BuildBatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the batch build.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline BuildBatch& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline BuildBatch& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline BuildBatch& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the batch build.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline BuildBatch& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline BuildBatch& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline BuildBatch& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the batch build started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline BuildBatch& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline BuildBatch& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the batch build ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline BuildBatch& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline BuildBatch& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current phase of the batch build.</p>
     */
    inline const Aws::String& GetCurrentPhase() const{ return m_currentPhase; }
    inline bool CurrentPhaseHasBeenSet() const { return m_currentPhaseHasBeenSet; }
    inline void SetCurrentPhase(const Aws::String& value) { m_currentPhaseHasBeenSet = true; m_currentPhase = value; }
    inline void SetCurrentPhase(Aws::String&& value) { m_currentPhaseHasBeenSet = true; m_currentPhase = std::move(value); }
    inline void SetCurrentPhase(const char* value) { m_currentPhaseHasBeenSet = true; m_currentPhase.assign(value); }
    inline BuildBatch& WithCurrentPhase(const Aws::String& value) { SetCurrentPhase(value); return *this;}
    inline BuildBatch& WithCurrentPhase(Aws::String&& value) { SetCurrentPhase(std::move(value)); return *this;}
    inline BuildBatch& WithCurrentPhase(const char* value) { SetCurrentPhase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the batch build.</p>
     */
    inline const StatusType& GetBuildBatchStatus() const{ return m_buildBatchStatus; }
    inline bool BuildBatchStatusHasBeenSet() const { return m_buildBatchStatusHasBeenSet; }
    inline void SetBuildBatchStatus(const StatusType& value) { m_buildBatchStatusHasBeenSet = true; m_buildBatchStatus = value; }
    inline void SetBuildBatchStatus(StatusType&& value) { m_buildBatchStatusHasBeenSet = true; m_buildBatchStatus = std::move(value); }
    inline BuildBatch& WithBuildBatchStatus(const StatusType& value) { SetBuildBatchStatus(value); return *this;}
    inline BuildBatch& WithBuildBatchStatus(StatusType&& value) { SetBuildBatchStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the version of the source code to be built.</p>
     */
    inline const Aws::String& GetSourceVersion() const{ return m_sourceVersion; }
    inline bool SourceVersionHasBeenSet() const { return m_sourceVersionHasBeenSet; }
    inline void SetSourceVersion(const Aws::String& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = value; }
    inline void SetSourceVersion(Aws::String&& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = std::move(value); }
    inline void SetSourceVersion(const char* value) { m_sourceVersionHasBeenSet = true; m_sourceVersion.assign(value); }
    inline BuildBatch& WithSourceVersion(const Aws::String& value) { SetSourceVersion(value); return *this;}
    inline BuildBatch& WithSourceVersion(Aws::String&& value) { SetSourceVersion(std::move(value)); return *this;}
    inline BuildBatch& WithSourceVersion(const char* value) { SetSourceVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the resolved version of this batch build's source code.</p>
     * <ul> <li> <p>For CodeCommit, GitHub, GitHub Enterprise, and BitBucket, the
     * commit ID.</p> </li> <li> <p>For CodePipeline, the source revision provided by
     * CodePipeline.</p> </li> <li> <p>For Amazon S3, this does not apply.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetResolvedSourceVersion() const{ return m_resolvedSourceVersion; }
    inline bool ResolvedSourceVersionHasBeenSet() const { return m_resolvedSourceVersionHasBeenSet; }
    inline void SetResolvedSourceVersion(const Aws::String& value) { m_resolvedSourceVersionHasBeenSet = true; m_resolvedSourceVersion = value; }
    inline void SetResolvedSourceVersion(Aws::String&& value) { m_resolvedSourceVersionHasBeenSet = true; m_resolvedSourceVersion = std::move(value); }
    inline void SetResolvedSourceVersion(const char* value) { m_resolvedSourceVersionHasBeenSet = true; m_resolvedSourceVersion.assign(value); }
    inline BuildBatch& WithResolvedSourceVersion(const Aws::String& value) { SetResolvedSourceVersion(value); return *this;}
    inline BuildBatch& WithResolvedSourceVersion(Aws::String&& value) { SetResolvedSourceVersion(std::move(value)); return *this;}
    inline BuildBatch& WithResolvedSourceVersion(const char* value) { SetResolvedSourceVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the batch build project.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }
    inline BuildBatch& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}
    inline BuildBatch& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}
    inline BuildBatch& WithProjectName(const char* value) { SetProjectName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>BuildBatchPhase</code> objects the specify the phases of
     * the batch build.</p>
     */
    inline const Aws::Vector<BuildBatchPhase>& GetPhases() const{ return m_phases; }
    inline bool PhasesHasBeenSet() const { return m_phasesHasBeenSet; }
    inline void SetPhases(const Aws::Vector<BuildBatchPhase>& value) { m_phasesHasBeenSet = true; m_phases = value; }
    inline void SetPhases(Aws::Vector<BuildBatchPhase>&& value) { m_phasesHasBeenSet = true; m_phases = std::move(value); }
    inline BuildBatch& WithPhases(const Aws::Vector<BuildBatchPhase>& value) { SetPhases(value); return *this;}
    inline BuildBatch& WithPhases(Aws::Vector<BuildBatchPhase>&& value) { SetPhases(std::move(value)); return *this;}
    inline BuildBatch& AddPhases(const BuildBatchPhase& value) { m_phasesHasBeenSet = true; m_phases.push_back(value); return *this; }
    inline BuildBatch& AddPhases(BuildBatchPhase&& value) { m_phasesHasBeenSet = true; m_phases.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ProjectSource& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const ProjectSource& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(ProjectSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline BuildBatch& WithSource(const ProjectSource& value) { SetSource(value); return *this;}
    inline BuildBatch& WithSource(ProjectSource&& value) { SetSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>ProjectSource</code> objects that define the sources for
     * the batch build.</p>
     */
    inline const Aws::Vector<ProjectSource>& GetSecondarySources() const{ return m_secondarySources; }
    inline bool SecondarySourcesHasBeenSet() const { return m_secondarySourcesHasBeenSet; }
    inline void SetSecondarySources(const Aws::Vector<ProjectSource>& value) { m_secondarySourcesHasBeenSet = true; m_secondarySources = value; }
    inline void SetSecondarySources(Aws::Vector<ProjectSource>&& value) { m_secondarySourcesHasBeenSet = true; m_secondarySources = std::move(value); }
    inline BuildBatch& WithSecondarySources(const Aws::Vector<ProjectSource>& value) { SetSecondarySources(value); return *this;}
    inline BuildBatch& WithSecondarySources(Aws::Vector<ProjectSource>&& value) { SetSecondarySources(std::move(value)); return *this;}
    inline BuildBatch& AddSecondarySources(const ProjectSource& value) { m_secondarySourcesHasBeenSet = true; m_secondarySources.push_back(value); return *this; }
    inline BuildBatch& AddSecondarySources(ProjectSource&& value) { m_secondarySourcesHasBeenSet = true; m_secondarySources.push_back(std::move(value)); return *this; }
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
    inline const Aws::Vector<ProjectSourceVersion>& GetSecondarySourceVersions() const{ return m_secondarySourceVersions; }
    inline bool SecondarySourceVersionsHasBeenSet() const { return m_secondarySourceVersionsHasBeenSet; }
    inline void SetSecondarySourceVersions(const Aws::Vector<ProjectSourceVersion>& value) { m_secondarySourceVersionsHasBeenSet = true; m_secondarySourceVersions = value; }
    inline void SetSecondarySourceVersions(Aws::Vector<ProjectSourceVersion>&& value) { m_secondarySourceVersionsHasBeenSet = true; m_secondarySourceVersions = std::move(value); }
    inline BuildBatch& WithSecondarySourceVersions(const Aws::Vector<ProjectSourceVersion>& value) { SetSecondarySourceVersions(value); return *this;}
    inline BuildBatch& WithSecondarySourceVersions(Aws::Vector<ProjectSourceVersion>&& value) { SetSecondarySourceVersions(std::move(value)); return *this;}
    inline BuildBatch& AddSecondarySourceVersions(const ProjectSourceVersion& value) { m_secondarySourceVersionsHasBeenSet = true; m_secondarySourceVersions.push_back(value); return *this; }
    inline BuildBatch& AddSecondarySourceVersions(ProjectSourceVersion&& value) { m_secondarySourceVersionsHasBeenSet = true; m_secondarySourceVersions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A <code>BuildArtifacts</code> object the defines the build artifacts for this
     * batch build.</p>
     */
    inline const BuildArtifacts& GetArtifacts() const{ return m_artifacts; }
    inline bool ArtifactsHasBeenSet() const { return m_artifactsHasBeenSet; }
    inline void SetArtifacts(const BuildArtifacts& value) { m_artifactsHasBeenSet = true; m_artifacts = value; }
    inline void SetArtifacts(BuildArtifacts&& value) { m_artifactsHasBeenSet = true; m_artifacts = std::move(value); }
    inline BuildBatch& WithArtifacts(const BuildArtifacts& value) { SetArtifacts(value); return *this;}
    inline BuildBatch& WithArtifacts(BuildArtifacts&& value) { SetArtifacts(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>BuildArtifacts</code> objects the define the build
     * artifacts for this batch build.</p>
     */
    inline const Aws::Vector<BuildArtifacts>& GetSecondaryArtifacts() const{ return m_secondaryArtifacts; }
    inline bool SecondaryArtifactsHasBeenSet() const { return m_secondaryArtifactsHasBeenSet; }
    inline void SetSecondaryArtifacts(const Aws::Vector<BuildArtifacts>& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts = value; }
    inline void SetSecondaryArtifacts(Aws::Vector<BuildArtifacts>&& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts = std::move(value); }
    inline BuildBatch& WithSecondaryArtifacts(const Aws::Vector<BuildArtifacts>& value) { SetSecondaryArtifacts(value); return *this;}
    inline BuildBatch& WithSecondaryArtifacts(Aws::Vector<BuildArtifacts>&& value) { SetSecondaryArtifacts(std::move(value)); return *this;}
    inline BuildBatch& AddSecondaryArtifacts(const BuildArtifacts& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts.push_back(value); return *this; }
    inline BuildBatch& AddSecondaryArtifacts(BuildArtifacts&& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ProjectCache& GetCache() const{ return m_cache; }
    inline bool CacheHasBeenSet() const { return m_cacheHasBeenSet; }
    inline void SetCache(const ProjectCache& value) { m_cacheHasBeenSet = true; m_cache = value; }
    inline void SetCache(ProjectCache&& value) { m_cacheHasBeenSet = true; m_cache = std::move(value); }
    inline BuildBatch& WithCache(const ProjectCache& value) { SetCache(value); return *this;}
    inline BuildBatch& WithCache(ProjectCache&& value) { SetCache(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ProjectEnvironment& GetEnvironment() const{ return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    inline void SetEnvironment(const ProjectEnvironment& value) { m_environmentHasBeenSet = true; m_environment = value; }
    inline void SetEnvironment(ProjectEnvironment&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }
    inline BuildBatch& WithEnvironment(const ProjectEnvironment& value) { SetEnvironment(value); return *this;}
    inline BuildBatch& WithEnvironment(ProjectEnvironment&& value) { SetEnvironment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a service role used for builds in the batch.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::move(value); }
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }
    inline BuildBatch& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}
    inline BuildBatch& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}
    inline BuildBatch& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}
    ///@}

    ///@{
    
    inline const LogsConfig& GetLogConfig() const{ return m_logConfig; }
    inline bool LogConfigHasBeenSet() const { return m_logConfigHasBeenSet; }
    inline void SetLogConfig(const LogsConfig& value) { m_logConfigHasBeenSet = true; m_logConfig = value; }
    inline void SetLogConfig(LogsConfig&& value) { m_logConfigHasBeenSet = true; m_logConfig = std::move(value); }
    inline BuildBatch& WithLogConfig(const LogsConfig& value) { SetLogConfig(value); return *this;}
    inline BuildBatch& WithLogConfig(LogsConfig&& value) { SetLogConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the maximum amount of time, in minutes, that the build in a batch
     * must be completed in.</p>
     */
    inline int GetBuildTimeoutInMinutes() const{ return m_buildTimeoutInMinutes; }
    inline bool BuildTimeoutInMinutesHasBeenSet() const { return m_buildTimeoutInMinutesHasBeenSet; }
    inline void SetBuildTimeoutInMinutes(int value) { m_buildTimeoutInMinutesHasBeenSet = true; m_buildTimeoutInMinutes = value; }
    inline BuildBatch& WithBuildTimeoutInMinutes(int value) { SetBuildTimeoutInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the amount of time, in minutes, that the batch build is allowed to
     * be queued before it times out.</p>
     */
    inline int GetQueuedTimeoutInMinutes() const{ return m_queuedTimeoutInMinutes; }
    inline bool QueuedTimeoutInMinutesHasBeenSet() const { return m_queuedTimeoutInMinutesHasBeenSet; }
    inline void SetQueuedTimeoutInMinutes(int value) { m_queuedTimeoutInMinutesHasBeenSet = true; m_queuedTimeoutInMinutes = value; }
    inline BuildBatch& WithQueuedTimeoutInMinutes(int value) { SetQueuedTimeoutInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the batch build is complete.</p>
     */
    inline bool GetComplete() const{ return m_complete; }
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
    inline const Aws::String& GetInitiator() const{ return m_initiator; }
    inline bool InitiatorHasBeenSet() const { return m_initiatorHasBeenSet; }
    inline void SetInitiator(const Aws::String& value) { m_initiatorHasBeenSet = true; m_initiator = value; }
    inline void SetInitiator(Aws::String&& value) { m_initiatorHasBeenSet = true; m_initiator = std::move(value); }
    inline void SetInitiator(const char* value) { m_initiatorHasBeenSet = true; m_initiator.assign(value); }
    inline BuildBatch& WithInitiator(const Aws::String& value) { SetInitiator(value); return *this;}
    inline BuildBatch& WithInitiator(Aws::String&& value) { SetInitiator(std::move(value)); return *this;}
    inline BuildBatch& WithInitiator(const char* value) { SetInitiator(value); return *this;}
    ///@}

    ///@{
    
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }
    inline BuildBatch& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}
    inline BuildBatch& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}
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
    inline const Aws::String& GetEncryptionKey() const{ return m_encryptionKey; }
    inline bool EncryptionKeyHasBeenSet() const { return m_encryptionKeyHasBeenSet; }
    inline void SetEncryptionKey(const Aws::String& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = value; }
    inline void SetEncryptionKey(Aws::String&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = std::move(value); }
    inline void SetEncryptionKey(const char* value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey.assign(value); }
    inline BuildBatch& WithEncryptionKey(const Aws::String& value) { SetEncryptionKey(value); return *this;}
    inline BuildBatch& WithEncryptionKey(Aws::String&& value) { SetEncryptionKey(std::move(value)); return *this;}
    inline BuildBatch& WithEncryptionKey(const char* value) { SetEncryptionKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of the batch build. For each project, the
     * <code>buildBatchNumber</code> of its first batch build is <code>1</code>. The
     * <code>buildBatchNumber</code> of each subsequent batch build is incremented by
     * <code>1</code>. If a batch build is deleted, the <code>buildBatchNumber</code>
     * of other batch builds does not change.</p>
     */
    inline long long GetBuildBatchNumber() const{ return m_buildBatchNumber; }
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
    inline const Aws::Vector<ProjectFileSystemLocation>& GetFileSystemLocations() const{ return m_fileSystemLocations; }
    inline bool FileSystemLocationsHasBeenSet() const { return m_fileSystemLocationsHasBeenSet; }
    inline void SetFileSystemLocations(const Aws::Vector<ProjectFileSystemLocation>& value) { m_fileSystemLocationsHasBeenSet = true; m_fileSystemLocations = value; }
    inline void SetFileSystemLocations(Aws::Vector<ProjectFileSystemLocation>&& value) { m_fileSystemLocationsHasBeenSet = true; m_fileSystemLocations = std::move(value); }
    inline BuildBatch& WithFileSystemLocations(const Aws::Vector<ProjectFileSystemLocation>& value) { SetFileSystemLocations(value); return *this;}
    inline BuildBatch& WithFileSystemLocations(Aws::Vector<ProjectFileSystemLocation>&& value) { SetFileSystemLocations(std::move(value)); return *this;}
    inline BuildBatch& AddFileSystemLocations(const ProjectFileSystemLocation& value) { m_fileSystemLocationsHasBeenSet = true; m_fileSystemLocations.push_back(value); return *this; }
    inline BuildBatch& AddFileSystemLocations(ProjectFileSystemLocation&& value) { m_fileSystemLocationsHasBeenSet = true; m_fileSystemLocations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ProjectBuildBatchConfig& GetBuildBatchConfig() const{ return m_buildBatchConfig; }
    inline bool BuildBatchConfigHasBeenSet() const { return m_buildBatchConfigHasBeenSet; }
    inline void SetBuildBatchConfig(const ProjectBuildBatchConfig& value) { m_buildBatchConfigHasBeenSet = true; m_buildBatchConfig = value; }
    inline void SetBuildBatchConfig(ProjectBuildBatchConfig&& value) { m_buildBatchConfigHasBeenSet = true; m_buildBatchConfig = std::move(value); }
    inline BuildBatch& WithBuildBatchConfig(const ProjectBuildBatchConfig& value) { SetBuildBatchConfig(value); return *this;}
    inline BuildBatch& WithBuildBatchConfig(ProjectBuildBatchConfig&& value) { SetBuildBatchConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>BuildGroup</code> objects that define the build groups for
     * the batch build.</p>
     */
    inline const Aws::Vector<BuildGroup>& GetBuildGroups() const{ return m_buildGroups; }
    inline bool BuildGroupsHasBeenSet() const { return m_buildGroupsHasBeenSet; }
    inline void SetBuildGroups(const Aws::Vector<BuildGroup>& value) { m_buildGroupsHasBeenSet = true; m_buildGroups = value; }
    inline void SetBuildGroups(Aws::Vector<BuildGroup>&& value) { m_buildGroupsHasBeenSet = true; m_buildGroups = std::move(value); }
    inline BuildBatch& WithBuildGroups(const Aws::Vector<BuildGroup>& value) { SetBuildGroups(value); return *this;}
    inline BuildBatch& WithBuildGroups(Aws::Vector<BuildGroup>&& value) { SetBuildGroups(std::move(value)); return *this;}
    inline BuildBatch& AddBuildGroups(const BuildGroup& value) { m_buildGroupsHasBeenSet = true; m_buildGroups.push_back(value); return *this; }
    inline BuildBatch& AddBuildGroups(BuildGroup&& value) { m_buildGroupsHasBeenSet = true; m_buildGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies if session debugging is enabled for this batch build. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/session-manager.html">Viewing
     * a running build in Session Manager</a>. Batch session debugging is not supported
     * for matrix batch builds.</p>
     */
    inline bool GetDebugSessionEnabled() const{ return m_debugSessionEnabled; }
    inline bool DebugSessionEnabledHasBeenSet() const { return m_debugSessionEnabledHasBeenSet; }
    inline void SetDebugSessionEnabled(bool value) { m_debugSessionEnabledHasBeenSet = true; m_debugSessionEnabled = value; }
    inline BuildBatch& WithDebugSessionEnabled(bool value) { SetDebugSessionEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_currentPhase;
    bool m_currentPhaseHasBeenSet = false;

    StatusType m_buildBatchStatus;
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

    int m_buildTimeoutInMinutes;
    bool m_buildTimeoutInMinutesHasBeenSet = false;

    int m_queuedTimeoutInMinutes;
    bool m_queuedTimeoutInMinutesHasBeenSet = false;

    bool m_complete;
    bool m_completeHasBeenSet = false;

    Aws::String m_initiator;
    bool m_initiatorHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    Aws::String m_encryptionKey;
    bool m_encryptionKeyHasBeenSet = false;

    long long m_buildBatchNumber;
    bool m_buildBatchNumberHasBeenSet = false;

    Aws::Vector<ProjectFileSystemLocation> m_fileSystemLocations;
    bool m_fileSystemLocationsHasBeenSet = false;

    ProjectBuildBatchConfig m_buildBatchConfig;
    bool m_buildBatchConfigHasBeenSet = false;

    Aws::Vector<BuildGroup> m_buildGroups;
    bool m_buildGroupsHasBeenSet = false;

    bool m_debugSessionEnabled;
    bool m_debugSessionEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
