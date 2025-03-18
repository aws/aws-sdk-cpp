/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/JobDetailsError.h>
#include <aws/deadline/model/JobAttachmentDetailsError.h>
#include <aws/deadline/model/StepDetailsError.h>
#include <aws/deadline/model/EnvironmentDetailsError.h>
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
   * <p>The error for the job entity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/GetJobEntityError">AWS
   * API Reference</a></p>
   */
  class GetJobEntityError
  {
  public:
    AWS_DEADLINE_API GetJobEntityError() = default;
    AWS_DEADLINE_API GetJobEntityError(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API GetJobEntityError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The job details for the failed job entity.</p>
     */
    inline const JobDetailsError& GetJobDetails() const { return m_jobDetails; }
    inline bool JobDetailsHasBeenSet() const { return m_jobDetailsHasBeenSet; }
    template<typename JobDetailsT = JobDetailsError>
    void SetJobDetails(JobDetailsT&& value) { m_jobDetailsHasBeenSet = true; m_jobDetails = std::forward<JobDetailsT>(value); }
    template<typename JobDetailsT = JobDetailsError>
    GetJobEntityError& WithJobDetails(JobDetailsT&& value) { SetJobDetails(std::forward<JobDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job attachment details for the failed job entity.</p>
     */
    inline const JobAttachmentDetailsError& GetJobAttachmentDetails() const { return m_jobAttachmentDetails; }
    inline bool JobAttachmentDetailsHasBeenSet() const { return m_jobAttachmentDetailsHasBeenSet; }
    template<typename JobAttachmentDetailsT = JobAttachmentDetailsError>
    void SetJobAttachmentDetails(JobAttachmentDetailsT&& value) { m_jobAttachmentDetailsHasBeenSet = true; m_jobAttachmentDetails = std::forward<JobAttachmentDetailsT>(value); }
    template<typename JobAttachmentDetailsT = JobAttachmentDetailsError>
    GetJobEntityError& WithJobAttachmentDetails(JobAttachmentDetailsT&& value) { SetJobAttachmentDetails(std::forward<JobAttachmentDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The step details for the failed job entity.</p>
     */
    inline const StepDetailsError& GetStepDetails() const { return m_stepDetails; }
    inline bool StepDetailsHasBeenSet() const { return m_stepDetailsHasBeenSet; }
    template<typename StepDetailsT = StepDetailsError>
    void SetStepDetails(StepDetailsT&& value) { m_stepDetailsHasBeenSet = true; m_stepDetails = std::forward<StepDetailsT>(value); }
    template<typename StepDetailsT = StepDetailsError>
    GetJobEntityError& WithStepDetails(StepDetailsT&& value) { SetStepDetails(std::forward<StepDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment details for the failed job entity.</p>
     */
    inline const EnvironmentDetailsError& GetEnvironmentDetails() const { return m_environmentDetails; }
    inline bool EnvironmentDetailsHasBeenSet() const { return m_environmentDetailsHasBeenSet; }
    template<typename EnvironmentDetailsT = EnvironmentDetailsError>
    void SetEnvironmentDetails(EnvironmentDetailsT&& value) { m_environmentDetailsHasBeenSet = true; m_environmentDetails = std::forward<EnvironmentDetailsT>(value); }
    template<typename EnvironmentDetailsT = EnvironmentDetailsError>
    GetJobEntityError& WithEnvironmentDetails(EnvironmentDetailsT&& value) { SetEnvironmentDetails(std::forward<EnvironmentDetailsT>(value)); return *this;}
    ///@}
  private:

    JobDetailsError m_jobDetails;
    bool m_jobDetailsHasBeenSet = false;

    JobAttachmentDetailsError m_jobAttachmentDetails;
    bool m_jobAttachmentDetailsHasBeenSet = false;

    StepDetailsError m_stepDetails;
    bool m_stepDetailsHasBeenSet = false;

    EnvironmentDetailsError m_environmentDetails;
    bool m_environmentDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
