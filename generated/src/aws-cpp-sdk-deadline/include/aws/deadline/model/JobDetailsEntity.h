/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/JobAttachmentSettings.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_DEADLINE_API JobDetailsEntity();
    AWS_DEADLINE_API JobDetailsEntity(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API JobDetailsEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The job attachment settings.</p>
     */
    inline const JobAttachmentSettings& GetJobAttachmentSettings() const{ return m_jobAttachmentSettings; }

    /**
     * <p>The job attachment settings.</p>
     */
    inline bool JobAttachmentSettingsHasBeenSet() const { return m_jobAttachmentSettingsHasBeenSet; }

    /**
     * <p>The job attachment settings.</p>
     */
    inline void SetJobAttachmentSettings(const JobAttachmentSettings& value) { m_jobAttachmentSettingsHasBeenSet = true; m_jobAttachmentSettings = value; }

    /**
     * <p>The job attachment settings.</p>
     */
    inline void SetJobAttachmentSettings(JobAttachmentSettings&& value) { m_jobAttachmentSettingsHasBeenSet = true; m_jobAttachmentSettings = std::move(value); }

    /**
     * <p>The job attachment settings.</p>
     */
    inline JobDetailsEntity& WithJobAttachmentSettings(const JobAttachmentSettings& value) { SetJobAttachmentSettings(value); return *this;}

    /**
     * <p>The job attachment settings.</p>
     */
    inline JobDetailsEntity& WithJobAttachmentSettings(JobAttachmentSettings&& value) { SetJobAttachmentSettings(std::move(value)); return *this;}


    /**
     * <p>The job ID.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The job ID.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The job ID.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The job ID.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The job ID.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The job ID.</p>
     */
    inline JobDetailsEntity& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The job ID.</p>
     */
    inline JobDetailsEntity& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The job ID.</p>
     */
    inline JobDetailsEntity& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The user name and group that the job uses when run.</p>
     */
    inline const JobRunAsUser& GetJobRunAsUser() const{ return m_jobRunAsUser; }

    /**
     * <p>The user name and group that the job uses when run.</p>
     */
    inline bool JobRunAsUserHasBeenSet() const { return m_jobRunAsUserHasBeenSet; }

    /**
     * <p>The user name and group that the job uses when run.</p>
     */
    inline void SetJobRunAsUser(const JobRunAsUser& value) { m_jobRunAsUserHasBeenSet = true; m_jobRunAsUser = value; }

    /**
     * <p>The user name and group that the job uses when run.</p>
     */
    inline void SetJobRunAsUser(JobRunAsUser&& value) { m_jobRunAsUserHasBeenSet = true; m_jobRunAsUser = std::move(value); }

    /**
     * <p>The user name and group that the job uses when run.</p>
     */
    inline JobDetailsEntity& WithJobRunAsUser(const JobRunAsUser& value) { SetJobRunAsUser(value); return *this;}

    /**
     * <p>The user name and group that the job uses when run.</p>
     */
    inline JobDetailsEntity& WithJobRunAsUser(JobRunAsUser&& value) { SetJobRunAsUser(std::move(value)); return *this;}


    /**
     * <p>The log group name.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The log group name.</p>
     */
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }

    /**
     * <p>The log group name.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The log group name.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }

    /**
     * <p>The log group name.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The log group name.</p>
     */
    inline JobDetailsEntity& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The log group name.</p>
     */
    inline JobDetailsEntity& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p>The log group name.</p>
     */
    inline JobDetailsEntity& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}


    /**
     * <p>The parameters.</p>
     */
    inline const Aws::Map<Aws::String, JobParameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The parameters.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>The parameters.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, JobParameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The parameters.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, JobParameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>The parameters.</p>
     */
    inline JobDetailsEntity& WithParameters(const Aws::Map<Aws::String, JobParameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>The parameters.</p>
     */
    inline JobDetailsEntity& WithParameters(Aws::Map<Aws::String, JobParameter>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The parameters.</p>
     */
    inline JobDetailsEntity& AddParameters(const Aws::String& key, const JobParameter& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>The parameters.</p>
     */
    inline JobDetailsEntity& AddParameters(Aws::String&& key, const JobParameter& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The parameters.</p>
     */
    inline JobDetailsEntity& AddParameters(const Aws::String& key, JobParameter&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameters.</p>
     */
    inline JobDetailsEntity& AddParameters(Aws::String&& key, JobParameter&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The parameters.</p>
     */
    inline JobDetailsEntity& AddParameters(const char* key, JobParameter&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameters.</p>
     */
    inline JobDetailsEntity& AddParameters(const char* key, const JobParameter& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }


    /**
     * <p>The path mapping rules.</p>
     */
    inline const Aws::Vector<PathMappingRule>& GetPathMappingRules() const{ return m_pathMappingRules; }

    /**
     * <p>The path mapping rules.</p>
     */
    inline bool PathMappingRulesHasBeenSet() const { return m_pathMappingRulesHasBeenSet; }

    /**
     * <p>The path mapping rules.</p>
     */
    inline void SetPathMappingRules(const Aws::Vector<PathMappingRule>& value) { m_pathMappingRulesHasBeenSet = true; m_pathMappingRules = value; }

    /**
     * <p>The path mapping rules.</p>
     */
    inline void SetPathMappingRules(Aws::Vector<PathMappingRule>&& value) { m_pathMappingRulesHasBeenSet = true; m_pathMappingRules = std::move(value); }

    /**
     * <p>The path mapping rules.</p>
     */
    inline JobDetailsEntity& WithPathMappingRules(const Aws::Vector<PathMappingRule>& value) { SetPathMappingRules(value); return *this;}

    /**
     * <p>The path mapping rules.</p>
     */
    inline JobDetailsEntity& WithPathMappingRules(Aws::Vector<PathMappingRule>&& value) { SetPathMappingRules(std::move(value)); return *this;}

    /**
     * <p>The path mapping rules.</p>
     */
    inline JobDetailsEntity& AddPathMappingRules(const PathMappingRule& value) { m_pathMappingRulesHasBeenSet = true; m_pathMappingRules.push_back(value); return *this; }

    /**
     * <p>The path mapping rules.</p>
     */
    inline JobDetailsEntity& AddPathMappingRules(PathMappingRule&& value) { m_pathMappingRulesHasBeenSet = true; m_pathMappingRules.push_back(std::move(value)); return *this; }


    /**
     * <p>The queue role ARN.</p>
     */
    inline const Aws::String& GetQueueRoleArn() const{ return m_queueRoleArn; }

    /**
     * <p>The queue role ARN.</p>
     */
    inline bool QueueRoleArnHasBeenSet() const { return m_queueRoleArnHasBeenSet; }

    /**
     * <p>The queue role ARN.</p>
     */
    inline void SetQueueRoleArn(const Aws::String& value) { m_queueRoleArnHasBeenSet = true; m_queueRoleArn = value; }

    /**
     * <p>The queue role ARN.</p>
     */
    inline void SetQueueRoleArn(Aws::String&& value) { m_queueRoleArnHasBeenSet = true; m_queueRoleArn = std::move(value); }

    /**
     * <p>The queue role ARN.</p>
     */
    inline void SetQueueRoleArn(const char* value) { m_queueRoleArnHasBeenSet = true; m_queueRoleArn.assign(value); }

    /**
     * <p>The queue role ARN.</p>
     */
    inline JobDetailsEntity& WithQueueRoleArn(const Aws::String& value) { SetQueueRoleArn(value); return *this;}

    /**
     * <p>The queue role ARN.</p>
     */
    inline JobDetailsEntity& WithQueueRoleArn(Aws::String&& value) { SetQueueRoleArn(std::move(value)); return *this;}

    /**
     * <p>The queue role ARN.</p>
     */
    inline JobDetailsEntity& WithQueueRoleArn(const char* value) { SetQueueRoleArn(value); return *this;}


    /**
     * <p>The schema version.</p>
     */
    inline const Aws::String& GetSchemaVersion() const{ return m_schemaVersion; }

    /**
     * <p>The schema version.</p>
     */
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }

    /**
     * <p>The schema version.</p>
     */
    inline void SetSchemaVersion(const Aws::String& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }

    /**
     * <p>The schema version.</p>
     */
    inline void SetSchemaVersion(Aws::String&& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = std::move(value); }

    /**
     * <p>The schema version.</p>
     */
    inline void SetSchemaVersion(const char* value) { m_schemaVersionHasBeenSet = true; m_schemaVersion.assign(value); }

    /**
     * <p>The schema version.</p>
     */
    inline JobDetailsEntity& WithSchemaVersion(const Aws::String& value) { SetSchemaVersion(value); return *this;}

    /**
     * <p>The schema version.</p>
     */
    inline JobDetailsEntity& WithSchemaVersion(Aws::String&& value) { SetSchemaVersion(std::move(value)); return *this;}

    /**
     * <p>The schema version.</p>
     */
    inline JobDetailsEntity& WithSchemaVersion(const char* value) { SetSchemaVersion(value); return *this;}

  private:

    JobAttachmentSettings m_jobAttachmentSettings;
    bool m_jobAttachmentSettingsHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    JobRunAsUser m_jobRunAsUser;
    bool m_jobRunAsUserHasBeenSet = false;

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    Aws::Map<Aws::String, JobParameter> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::Vector<PathMappingRule> m_pathMappingRules;
    bool m_pathMappingRulesHasBeenSet = false;

    Aws::String m_queueRoleArn;
    bool m_queueRoleArnHasBeenSet = false;

    Aws::String m_schemaVersion;
    bool m_schemaVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
