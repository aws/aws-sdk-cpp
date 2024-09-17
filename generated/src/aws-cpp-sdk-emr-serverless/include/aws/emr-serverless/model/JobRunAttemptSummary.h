/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-serverless/model/JobRunMode.h>
#include <aws/core/utils/DateTime.h>
#include <aws/emr-serverless/model/JobRunState.h>
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
namespace EMRServerless
{
namespace Model
{

  /**
   * <p>The summary of attributes associated with a job run attempt.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/JobRunAttemptSummary">AWS
   * API Reference</a></p>
   */
  class JobRunAttemptSummary
  {
  public:
    AWS_EMRSERVERLESS_API JobRunAttemptSummary();
    AWS_EMRSERVERLESS_API JobRunAttemptSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API JobRunAttemptSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the application the job is running on.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline JobRunAttemptSummary& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline JobRunAttemptSummary& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline JobRunAttemptSummary& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the job run attempt.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline JobRunAttemptSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline JobRunAttemptSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline JobRunAttemptSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the job run attempt.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline JobRunAttemptSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline JobRunAttemptSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline JobRunAttemptSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mode of the job run attempt.</p>
     */
    inline const JobRunMode& GetMode() const{ return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(const JobRunMode& value) { m_modeHasBeenSet = true; m_mode = value; }
    inline void SetMode(JobRunMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }
    inline JobRunAttemptSummary& WithMode(const JobRunMode& value) { SetMode(value); return *this;}
    inline JobRunAttemptSummary& WithMode(JobRunMode&& value) { SetMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the job run.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline JobRunAttemptSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline JobRunAttemptSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline JobRunAttemptSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who created the job run.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }
    inline JobRunAttemptSummary& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline JobRunAttemptSummary& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline JobRunAttemptSummary& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time of when the job run was created.</p>
     */
    inline const Aws::Utils::DateTime& GetJobCreatedAt() const{ return m_jobCreatedAt; }
    inline bool JobCreatedAtHasBeenSet() const { return m_jobCreatedAtHasBeenSet; }
    inline void SetJobCreatedAt(const Aws::Utils::DateTime& value) { m_jobCreatedAtHasBeenSet = true; m_jobCreatedAt = value; }
    inline void SetJobCreatedAt(Aws::Utils::DateTime&& value) { m_jobCreatedAtHasBeenSet = true; m_jobCreatedAt = std::move(value); }
    inline JobRunAttemptSummary& WithJobCreatedAt(const Aws::Utils::DateTime& value) { SetJobCreatedAt(value); return *this;}
    inline JobRunAttemptSummary& WithJobCreatedAt(Aws::Utils::DateTime&& value) { SetJobCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the job run attempt was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline JobRunAttemptSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline JobRunAttemptSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time of when the job run attempt was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline JobRunAttemptSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline JobRunAttemptSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the execution role of the job run..</p>
     */
    inline const Aws::String& GetExecutionRole() const{ return m_executionRole; }
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }
    inline void SetExecutionRole(const Aws::String& value) { m_executionRoleHasBeenSet = true; m_executionRole = value; }
    inline void SetExecutionRole(Aws::String&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::move(value); }
    inline void SetExecutionRole(const char* value) { m_executionRoleHasBeenSet = true; m_executionRole.assign(value); }
    inline JobRunAttemptSummary& WithExecutionRole(const Aws::String& value) { SetExecutionRole(value); return *this;}
    inline JobRunAttemptSummary& WithExecutionRole(Aws::String&& value) { SetExecutionRole(std::move(value)); return *this;}
    inline JobRunAttemptSummary& WithExecutionRole(const char* value) { SetExecutionRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the job run attempt.</p>
     */
    inline const JobRunState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const JobRunState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(JobRunState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline JobRunAttemptSummary& WithState(const JobRunState& value) { SetState(value); return *this;}
    inline JobRunAttemptSummary& WithState(JobRunState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state details of the job run attempt.</p>
     */
    inline const Aws::String& GetStateDetails() const{ return m_stateDetails; }
    inline bool StateDetailsHasBeenSet() const { return m_stateDetailsHasBeenSet; }
    inline void SetStateDetails(const Aws::String& value) { m_stateDetailsHasBeenSet = true; m_stateDetails = value; }
    inline void SetStateDetails(Aws::String&& value) { m_stateDetailsHasBeenSet = true; m_stateDetails = std::move(value); }
    inline void SetStateDetails(const char* value) { m_stateDetailsHasBeenSet = true; m_stateDetails.assign(value); }
    inline JobRunAttemptSummary& WithStateDetails(const Aws::String& value) { SetStateDetails(value); return *this;}
    inline JobRunAttemptSummary& WithStateDetails(Aws::String&& value) { SetStateDetails(std::move(value)); return *this;}
    inline JobRunAttemptSummary& WithStateDetails(const char* value) { SetStateDetails(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EMR release label of the job run attempt.</p>
     */
    inline const Aws::String& GetReleaseLabel() const{ return m_releaseLabel; }
    inline bool ReleaseLabelHasBeenSet() const { return m_releaseLabelHasBeenSet; }
    inline void SetReleaseLabel(const Aws::String& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = value; }
    inline void SetReleaseLabel(Aws::String&& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = std::move(value); }
    inline void SetReleaseLabel(const char* value) { m_releaseLabelHasBeenSet = true; m_releaseLabel.assign(value); }
    inline JobRunAttemptSummary& WithReleaseLabel(const Aws::String& value) { SetReleaseLabel(value); return *this;}
    inline JobRunAttemptSummary& WithReleaseLabel(Aws::String&& value) { SetReleaseLabel(std::move(value)); return *this;}
    inline JobRunAttemptSummary& WithReleaseLabel(const char* value) { SetReleaseLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the job run, such as Spark or Hive.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline JobRunAttemptSummary& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline JobRunAttemptSummary& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline JobRunAttemptSummary& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attempt number of the job run execution.</p>
     */
    inline int GetAttempt() const{ return m_attempt; }
    inline bool AttemptHasBeenSet() const { return m_attemptHasBeenSet; }
    inline void SetAttempt(int value) { m_attemptHasBeenSet = true; m_attempt = value; }
    inline JobRunAttemptSummary& WithAttempt(int value) { SetAttempt(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    JobRunMode m_mode;
    bool m_modeHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_jobCreatedAt;
    bool m_jobCreatedAtHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_executionRole;
    bool m_executionRoleHasBeenSet = false;

    JobRunState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_stateDetails;
    bool m_stateDetailsHasBeenSet = false;

    Aws::String m_releaseLabel;
    bool m_releaseLabelHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    int m_attempt;
    bool m_attemptHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
