/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/JobDetailsEntity.h>
#include <aws/deadline/model/JobAttachmentDetailsEntity.h>
#include <aws/deadline/model/StepDetailsEntity.h>
#include <aws/deadline/model/EnvironmentDetailsEntity.h>
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


    ///@{
    /**
     * <p>The job details.</p>
     */
    inline const JobDetailsEntity& GetJobDetails() const{ return m_jobDetails; }
    inline bool JobDetailsHasBeenSet() const { return m_jobDetailsHasBeenSet; }
    inline void SetJobDetails(const JobDetailsEntity& value) { m_jobDetailsHasBeenSet = true; m_jobDetails = value; }
    inline void SetJobDetails(JobDetailsEntity&& value) { m_jobDetailsHasBeenSet = true; m_jobDetails = std::move(value); }
    inline JobEntity& WithJobDetails(const JobDetailsEntity& value) { SetJobDetails(value); return *this;}
    inline JobEntity& WithJobDetails(JobDetailsEntity&& value) { SetJobDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job attachment details.</p>
     */
    inline const JobAttachmentDetailsEntity& GetJobAttachmentDetails() const{ return m_jobAttachmentDetails; }
    inline bool JobAttachmentDetailsHasBeenSet() const { return m_jobAttachmentDetailsHasBeenSet; }
    inline void SetJobAttachmentDetails(const JobAttachmentDetailsEntity& value) { m_jobAttachmentDetailsHasBeenSet = true; m_jobAttachmentDetails = value; }
    inline void SetJobAttachmentDetails(JobAttachmentDetailsEntity&& value) { m_jobAttachmentDetailsHasBeenSet = true; m_jobAttachmentDetails = std::move(value); }
    inline JobEntity& WithJobAttachmentDetails(const JobAttachmentDetailsEntity& value) { SetJobAttachmentDetails(value); return *this;}
    inline JobEntity& WithJobAttachmentDetails(JobAttachmentDetailsEntity&& value) { SetJobAttachmentDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The step details.</p>
     */
    inline const StepDetailsEntity& GetStepDetails() const{ return m_stepDetails; }
    inline bool StepDetailsHasBeenSet() const { return m_stepDetailsHasBeenSet; }
    inline void SetStepDetails(const StepDetailsEntity& value) { m_stepDetailsHasBeenSet = true; m_stepDetails = value; }
    inline void SetStepDetails(StepDetailsEntity&& value) { m_stepDetailsHasBeenSet = true; m_stepDetails = std::move(value); }
    inline JobEntity& WithStepDetails(const StepDetailsEntity& value) { SetStepDetails(value); return *this;}
    inline JobEntity& WithStepDetails(StepDetailsEntity&& value) { SetStepDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment details for the job entity.</p>
     */
    inline const EnvironmentDetailsEntity& GetEnvironmentDetails() const{ return m_environmentDetails; }
    inline bool EnvironmentDetailsHasBeenSet() const { return m_environmentDetailsHasBeenSet; }
    inline void SetEnvironmentDetails(const EnvironmentDetailsEntity& value) { m_environmentDetailsHasBeenSet = true; m_environmentDetails = value; }
    inline void SetEnvironmentDetails(EnvironmentDetailsEntity&& value) { m_environmentDetailsHasBeenSet = true; m_environmentDetails = std::move(value); }
    inline JobEntity& WithEnvironmentDetails(const EnvironmentDetailsEntity& value) { SetEnvironmentDetails(value); return *this;}
    inline JobEntity& WithEnvironmentDetails(EnvironmentDetailsEntity&& value) { SetEnvironmentDetails(std::move(value)); return *this;}
    ///@}
  private:

    JobDetailsEntity m_jobDetails;
    bool m_jobDetailsHasBeenSet = false;

    JobAttachmentDetailsEntity m_jobAttachmentDetails;
    bool m_jobAttachmentDetailsHasBeenSet = false;

    StepDetailsEntity m_stepDetails;
    bool m_stepDetailsHasBeenSet = false;

    EnvironmentDetailsEntity m_environmentDetails;
    bool m_environmentDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
