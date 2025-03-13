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
    AWS_DEADLINE_API JobEntity() = default;
    AWS_DEADLINE_API JobEntity(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API JobEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The job details.</p>
     */
    inline const JobDetailsEntity& GetJobDetails() const { return m_jobDetails; }
    inline bool JobDetailsHasBeenSet() const { return m_jobDetailsHasBeenSet; }
    template<typename JobDetailsT = JobDetailsEntity>
    void SetJobDetails(JobDetailsT&& value) { m_jobDetailsHasBeenSet = true; m_jobDetails = std::forward<JobDetailsT>(value); }
    template<typename JobDetailsT = JobDetailsEntity>
    JobEntity& WithJobDetails(JobDetailsT&& value) { SetJobDetails(std::forward<JobDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job attachment details.</p>
     */
    inline const JobAttachmentDetailsEntity& GetJobAttachmentDetails() const { return m_jobAttachmentDetails; }
    inline bool JobAttachmentDetailsHasBeenSet() const { return m_jobAttachmentDetailsHasBeenSet; }
    template<typename JobAttachmentDetailsT = JobAttachmentDetailsEntity>
    void SetJobAttachmentDetails(JobAttachmentDetailsT&& value) { m_jobAttachmentDetailsHasBeenSet = true; m_jobAttachmentDetails = std::forward<JobAttachmentDetailsT>(value); }
    template<typename JobAttachmentDetailsT = JobAttachmentDetailsEntity>
    JobEntity& WithJobAttachmentDetails(JobAttachmentDetailsT&& value) { SetJobAttachmentDetails(std::forward<JobAttachmentDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The step details.</p>
     */
    inline const StepDetailsEntity& GetStepDetails() const { return m_stepDetails; }
    inline bool StepDetailsHasBeenSet() const { return m_stepDetailsHasBeenSet; }
    template<typename StepDetailsT = StepDetailsEntity>
    void SetStepDetails(StepDetailsT&& value) { m_stepDetailsHasBeenSet = true; m_stepDetails = std::forward<StepDetailsT>(value); }
    template<typename StepDetailsT = StepDetailsEntity>
    JobEntity& WithStepDetails(StepDetailsT&& value) { SetStepDetails(std::forward<StepDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment details for the job entity.</p>
     */
    inline const EnvironmentDetailsEntity& GetEnvironmentDetails() const { return m_environmentDetails; }
    inline bool EnvironmentDetailsHasBeenSet() const { return m_environmentDetailsHasBeenSet; }
    template<typename EnvironmentDetailsT = EnvironmentDetailsEntity>
    void SetEnvironmentDetails(EnvironmentDetailsT&& value) { m_environmentDetailsHasBeenSet = true; m_environmentDetails = std::forward<EnvironmentDetailsT>(value); }
    template<typename EnvironmentDetailsT = EnvironmentDetailsEntity>
    JobEntity& WithEnvironmentDetails(EnvironmentDetailsT&& value) { SetEnvironmentDetails(std::forward<EnvironmentDetailsT>(value)); return *this;}
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
