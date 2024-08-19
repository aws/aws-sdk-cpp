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
    AWS_DEADLINE_API GetJobEntityError();
    AWS_DEADLINE_API GetJobEntityError(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API GetJobEntityError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The job details for the failed job entity.</p>
     */
    inline const JobDetailsError& GetJobDetails() const{ return m_jobDetails; }
    inline bool JobDetailsHasBeenSet() const { return m_jobDetailsHasBeenSet; }
    inline void SetJobDetails(const JobDetailsError& value) { m_jobDetailsHasBeenSet = true; m_jobDetails = value; }
    inline void SetJobDetails(JobDetailsError&& value) { m_jobDetailsHasBeenSet = true; m_jobDetails = std::move(value); }
    inline GetJobEntityError& WithJobDetails(const JobDetailsError& value) { SetJobDetails(value); return *this;}
    inline GetJobEntityError& WithJobDetails(JobDetailsError&& value) { SetJobDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job attachment details for the failed job entity.</p>
     */
    inline const JobAttachmentDetailsError& GetJobAttachmentDetails() const{ return m_jobAttachmentDetails; }
    inline bool JobAttachmentDetailsHasBeenSet() const { return m_jobAttachmentDetailsHasBeenSet; }
    inline void SetJobAttachmentDetails(const JobAttachmentDetailsError& value) { m_jobAttachmentDetailsHasBeenSet = true; m_jobAttachmentDetails = value; }
    inline void SetJobAttachmentDetails(JobAttachmentDetailsError&& value) { m_jobAttachmentDetailsHasBeenSet = true; m_jobAttachmentDetails = std::move(value); }
    inline GetJobEntityError& WithJobAttachmentDetails(const JobAttachmentDetailsError& value) { SetJobAttachmentDetails(value); return *this;}
    inline GetJobEntityError& WithJobAttachmentDetails(JobAttachmentDetailsError&& value) { SetJobAttachmentDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The step details for the failed job entity.</p>
     */
    inline const StepDetailsError& GetStepDetails() const{ return m_stepDetails; }
    inline bool StepDetailsHasBeenSet() const { return m_stepDetailsHasBeenSet; }
    inline void SetStepDetails(const StepDetailsError& value) { m_stepDetailsHasBeenSet = true; m_stepDetails = value; }
    inline void SetStepDetails(StepDetailsError&& value) { m_stepDetailsHasBeenSet = true; m_stepDetails = std::move(value); }
    inline GetJobEntityError& WithStepDetails(const StepDetailsError& value) { SetStepDetails(value); return *this;}
    inline GetJobEntityError& WithStepDetails(StepDetailsError&& value) { SetStepDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment details for the failed job entity.</p>
     */
    inline const EnvironmentDetailsError& GetEnvironmentDetails() const{ return m_environmentDetails; }
    inline bool EnvironmentDetailsHasBeenSet() const { return m_environmentDetailsHasBeenSet; }
    inline void SetEnvironmentDetails(const EnvironmentDetailsError& value) { m_environmentDetailsHasBeenSet = true; m_environmentDetails = value; }
    inline void SetEnvironmentDetails(EnvironmentDetailsError&& value) { m_environmentDetailsHasBeenSet = true; m_environmentDetails = std::move(value); }
    inline GetJobEntityError& WithEnvironmentDetails(const EnvironmentDetailsError& value) { SetEnvironmentDetails(value); return *this;}
    inline GetJobEntityError& WithEnvironmentDetails(EnvironmentDetailsError&& value) { SetEnvironmentDetails(std::move(value)); return *this;}
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
