/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/JobAttachmentSettings.h>
#include <aws/deadline/model/JobRunAsUser.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/model/JobParameter.h>
#include <aws/deadline/model/PathMappingRule.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>The job details for a specific job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/JobDetailsEntity">AWS
   * API Reference</a></p>
   */
  class JobDetailsEntity
  {
  public:
    AWS_DEADLINE_API JobDetailsEntity() = default;
    AWS_DEADLINE_API JobDetailsEntity(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API JobDetailsEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The job ID.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    JobDetailsEntity& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job attachment settings.</p>
     */
    inline const JobAttachmentSettings& GetJobAttachmentSettings() const { return m_jobAttachmentSettings; }
    inline bool JobAttachmentSettingsHasBeenSet() const { return m_jobAttachmentSettingsHasBeenSet; }
    template<typename JobAttachmentSettingsT = JobAttachmentSettings>
    void SetJobAttachmentSettings(JobAttachmentSettingsT&& value) { m_jobAttachmentSettingsHasBeenSet = true; m_jobAttachmentSettings = std::forward<JobAttachmentSettingsT>(value); }
    template<typename JobAttachmentSettingsT = JobAttachmentSettings>
    JobDetailsEntity& WithJobAttachmentSettings(JobAttachmentSettingsT&& value) { SetJobAttachmentSettings(std::forward<JobAttachmentSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user name and group that the job uses when run.</p>
     */
    inline const JobRunAsUser& GetJobRunAsUser() const { return m_jobRunAsUser; }
    inline bool JobRunAsUserHasBeenSet() const { return m_jobRunAsUserHasBeenSet; }
    template<typename JobRunAsUserT = JobRunAsUser>
    void SetJobRunAsUser(JobRunAsUserT&& value) { m_jobRunAsUserHasBeenSet = true; m_jobRunAsUser = std::forward<JobRunAsUserT>(value); }
    template<typename JobRunAsUserT = JobRunAsUser>
    JobDetailsEntity& WithJobRunAsUser(JobRunAsUserT&& value) { SetJobRunAsUser(std::forward<JobRunAsUserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log group name.</p>
     */
    inline const Aws::String& GetLogGroupName() const { return m_logGroupName; }
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }
    template<typename LogGroupNameT = Aws::String>
    void SetLogGroupName(LogGroupNameT&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::forward<LogGroupNameT>(value); }
    template<typename LogGroupNameT = Aws::String>
    JobDetailsEntity& WithLogGroupName(LogGroupNameT&& value) { SetLogGroupName(std::forward<LogGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The queue role ARN.</p>
     */
    inline const Aws::String& GetQueueRoleArn() const { return m_queueRoleArn; }
    inline bool QueueRoleArnHasBeenSet() const { return m_queueRoleArnHasBeenSet; }
    template<typename QueueRoleArnT = Aws::String>
    void SetQueueRoleArn(QueueRoleArnT&& value) { m_queueRoleArnHasBeenSet = true; m_queueRoleArn = std::forward<QueueRoleArnT>(value); }
    template<typename QueueRoleArnT = Aws::String>
    JobDetailsEntity& WithQueueRoleArn(QueueRoleArnT&& value) { SetQueueRoleArn(std::forward<QueueRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters.</p>
     */
    inline const Aws::Map<Aws::String, JobParameter>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, JobParameter>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, JobParameter>>
    JobDetailsEntity& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = JobParameter>
    JobDetailsEntity& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The schema version.</p>
     */
    inline const Aws::String& GetSchemaVersion() const { return m_schemaVersion; }
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }
    template<typename SchemaVersionT = Aws::String>
    void SetSchemaVersion(SchemaVersionT&& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = std::forward<SchemaVersionT>(value); }
    template<typename SchemaVersionT = Aws::String>
    JobDetailsEntity& WithSchemaVersion(SchemaVersionT&& value) { SetSchemaVersion(std::forward<SchemaVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path mapping rules.</p>
     */
    inline const Aws::Vector<PathMappingRule>& GetPathMappingRules() const { return m_pathMappingRules; }
    inline bool PathMappingRulesHasBeenSet() const { return m_pathMappingRulesHasBeenSet; }
    template<typename PathMappingRulesT = Aws::Vector<PathMappingRule>>
    void SetPathMappingRules(PathMappingRulesT&& value) { m_pathMappingRulesHasBeenSet = true; m_pathMappingRules = std::forward<PathMappingRulesT>(value); }
    template<typename PathMappingRulesT = Aws::Vector<PathMappingRule>>
    JobDetailsEntity& WithPathMappingRules(PathMappingRulesT&& value) { SetPathMappingRules(std::forward<PathMappingRulesT>(value)); return *this;}
    template<typename PathMappingRulesT = PathMappingRule>
    JobDetailsEntity& AddPathMappingRules(PathMappingRulesT&& value) { m_pathMappingRulesHasBeenSet = true; m_pathMappingRules.emplace_back(std::forward<PathMappingRulesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    JobAttachmentSettings m_jobAttachmentSettings;
    bool m_jobAttachmentSettingsHasBeenSet = false;

    JobRunAsUser m_jobRunAsUser;
    bool m_jobRunAsUserHasBeenSet = false;

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    Aws::String m_queueRoleArn;
    bool m_queueRoleArnHasBeenSet = false;

    Aws::Map<Aws::String, JobParameter> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_schemaVersion;
    bool m_schemaVersionHasBeenSet = false;

    Aws::Vector<PathMappingRule> m_pathMappingRules;
    bool m_pathMappingRulesHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
