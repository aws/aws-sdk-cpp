/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/EnvironmentDetailsEntity.h>
#include <aws/deadline/model/JobAttachmentDetailsEntity.h>
#include <aws/deadline/model/JobDetailsEntity.h>
#include <aws/deadline/model/StepDetailsEntity.h>
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
   * <p>The details of a job entity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/JobEntity">AWS
   * API Reference</a></p>
   */
  class JobEntity
  {
  public:
    AWS_DEADLINE_API JobEntity();
    AWS_DEADLINE_API JobEntity(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API JobEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The environment details for the job entity.</p>
     */
    inline const EnvironmentDetailsEntity& GetEnvironmentDetails() const{ return m_environmentDetails; }

    /**
     * <p>The environment details for the job entity.</p>
     */
    inline bool EnvironmentDetailsHasBeenSet() const { return m_environmentDetailsHasBeenSet; }

    /**
     * <p>The environment details for the job entity.</p>
     */
    inline void SetEnvironmentDetails(const EnvironmentDetailsEntity& value) { m_environmentDetailsHasBeenSet = true; m_environmentDetails = value; }

    /**
     * <p>The environment details for the job entity.</p>
     */
    inline void SetEnvironmentDetails(EnvironmentDetailsEntity&& value) { m_environmentDetailsHasBeenSet = true; m_environmentDetails = std::move(value); }

    /**
     * <p>The environment details for the job entity.</p>
     */
    inline JobEntity& WithEnvironmentDetails(const EnvironmentDetailsEntity& value) { SetEnvironmentDetails(value); return *this;}

    /**
     * <p>The environment details for the job entity.</p>
     */
    inline JobEntity& WithEnvironmentDetails(EnvironmentDetailsEntity&& value) { SetEnvironmentDetails(std::move(value)); return *this;}


    /**
     * <p>The job attachment details.</p>
     */
    inline const JobAttachmentDetailsEntity& GetJobAttachmentDetails() const{ return m_jobAttachmentDetails; }

    /**
     * <p>The job attachment details.</p>
     */
    inline bool JobAttachmentDetailsHasBeenSet() const { return m_jobAttachmentDetailsHasBeenSet; }

    /**
     * <p>The job attachment details.</p>
     */
    inline void SetJobAttachmentDetails(const JobAttachmentDetailsEntity& value) { m_jobAttachmentDetailsHasBeenSet = true; m_jobAttachmentDetails = value; }

    /**
     * <p>The job attachment details.</p>
     */
    inline void SetJobAttachmentDetails(JobAttachmentDetailsEntity&& value) { m_jobAttachmentDetailsHasBeenSet = true; m_jobAttachmentDetails = std::move(value); }

    /**
     * <p>The job attachment details.</p>
     */
    inline JobEntity& WithJobAttachmentDetails(const JobAttachmentDetailsEntity& value) { SetJobAttachmentDetails(value); return *this;}

    /**
     * <p>The job attachment details.</p>
     */
    inline JobEntity& WithJobAttachmentDetails(JobAttachmentDetailsEntity&& value) { SetJobAttachmentDetails(std::move(value)); return *this;}


    /**
     * <p>The job details.</p>
     */
    inline const JobDetailsEntity& GetJobDetails() const{ return m_jobDetails; }

    /**
     * <p>The job details.</p>
     */
    inline bool JobDetailsHasBeenSet() const { return m_jobDetailsHasBeenSet; }

    /**
     * <p>The job details.</p>
     */
    inline void SetJobDetails(const JobDetailsEntity& value) { m_jobDetailsHasBeenSet = true; m_jobDetails = value; }

    /**
     * <p>The job details.</p>
     */
    inline void SetJobDetails(JobDetailsEntity&& value) { m_jobDetailsHasBeenSet = true; m_jobDetails = std::move(value); }

    /**
     * <p>The job details.</p>
     */
    inline JobEntity& WithJobDetails(const JobDetailsEntity& value) { SetJobDetails(value); return *this;}

    /**
     * <p>The job details.</p>
     */
    inline JobEntity& WithJobDetails(JobDetailsEntity&& value) { SetJobDetails(std::move(value)); return *this;}


    /**
     * <p>The step details.</p>
     */
    inline const StepDetailsEntity& GetStepDetails() const{ return m_stepDetails; }

    /**
     * <p>The step details.</p>
     */
    inline bool StepDetailsHasBeenSet() const { return m_stepDetailsHasBeenSet; }

    /**
     * <p>The step details.</p>
     */
    inline void SetStepDetails(const StepDetailsEntity& value) { m_stepDetailsHasBeenSet = true; m_stepDetails = value; }

    /**
     * <p>The step details.</p>
     */
    inline void SetStepDetails(StepDetailsEntity&& value) { m_stepDetailsHasBeenSet = true; m_stepDetails = std::move(value); }

    /**
     * <p>The step details.</p>
     */
    inline JobEntity& WithStepDetails(const StepDetailsEntity& value) { SetStepDetails(value); return *this;}

    /**
     * <p>The step details.</p>
     */
    inline JobEntity& WithStepDetails(StepDetailsEntity&& value) { SetStepDetails(std::move(value)); return *this;}

  private:

    EnvironmentDetailsEntity m_environmentDetails;
    bool m_environmentDetailsHasBeenSet = false;

    JobAttachmentDetailsEntity m_jobAttachmentDetails;
    bool m_jobAttachmentDetailsHasBeenSet = false;

    JobDetailsEntity m_jobDetails;
    bool m_jobDetailsHasBeenSet = false;

    StepDetailsEntity m_stepDetails;
    bool m_stepDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
