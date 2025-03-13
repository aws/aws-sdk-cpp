/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/JobDetailsIdentifiers.h>
#include <aws/deadline/model/JobAttachmentDetailsIdentifiers.h>
#include <aws/deadline/model/StepDetailsIdentifiers.h>
#include <aws/deadline/model/EnvironmentDetailsIdentifiers.h>
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
   * <p>The details of a job entity identifier.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/JobEntityIdentifiersUnion">AWS
   * API Reference</a></p>
   */
  class JobEntityIdentifiersUnion
  {
  public:
    AWS_DEADLINE_API JobEntityIdentifiersUnion() = default;
    AWS_DEADLINE_API JobEntityIdentifiersUnion(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API JobEntityIdentifiersUnion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The job details.</p>
     */
    inline const JobDetailsIdentifiers& GetJobDetails() const { return m_jobDetails; }
    inline bool JobDetailsHasBeenSet() const { return m_jobDetailsHasBeenSet; }
    template<typename JobDetailsT = JobDetailsIdentifiers>
    void SetJobDetails(JobDetailsT&& value) { m_jobDetailsHasBeenSet = true; m_jobDetails = std::forward<JobDetailsT>(value); }
    template<typename JobDetailsT = JobDetailsIdentifiers>
    JobEntityIdentifiersUnion& WithJobDetails(JobDetailsT&& value) { SetJobDetails(std::forward<JobDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job attachment details.</p>
     */
    inline const JobAttachmentDetailsIdentifiers& GetJobAttachmentDetails() const { return m_jobAttachmentDetails; }
    inline bool JobAttachmentDetailsHasBeenSet() const { return m_jobAttachmentDetailsHasBeenSet; }
    template<typename JobAttachmentDetailsT = JobAttachmentDetailsIdentifiers>
    void SetJobAttachmentDetails(JobAttachmentDetailsT&& value) { m_jobAttachmentDetailsHasBeenSet = true; m_jobAttachmentDetails = std::forward<JobAttachmentDetailsT>(value); }
    template<typename JobAttachmentDetailsT = JobAttachmentDetailsIdentifiers>
    JobEntityIdentifiersUnion& WithJobAttachmentDetails(JobAttachmentDetailsT&& value) { SetJobAttachmentDetails(std::forward<JobAttachmentDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The step details.</p>
     */
    inline const StepDetailsIdentifiers& GetStepDetails() const { return m_stepDetails; }
    inline bool StepDetailsHasBeenSet() const { return m_stepDetailsHasBeenSet; }
    template<typename StepDetailsT = StepDetailsIdentifiers>
    void SetStepDetails(StepDetailsT&& value) { m_stepDetailsHasBeenSet = true; m_stepDetails = std::forward<StepDetailsT>(value); }
    template<typename StepDetailsT = StepDetailsIdentifiers>
    JobEntityIdentifiersUnion& WithStepDetails(StepDetailsT&& value) { SetStepDetails(std::forward<StepDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment details.</p>
     */
    inline const EnvironmentDetailsIdentifiers& GetEnvironmentDetails() const { return m_environmentDetails; }
    inline bool EnvironmentDetailsHasBeenSet() const { return m_environmentDetailsHasBeenSet; }
    template<typename EnvironmentDetailsT = EnvironmentDetailsIdentifiers>
    void SetEnvironmentDetails(EnvironmentDetailsT&& value) { m_environmentDetailsHasBeenSet = true; m_environmentDetails = std::forward<EnvironmentDetailsT>(value); }
    template<typename EnvironmentDetailsT = EnvironmentDetailsIdentifiers>
    JobEntityIdentifiersUnion& WithEnvironmentDetails(EnvironmentDetailsT&& value) { SetEnvironmentDetails(std::forward<EnvironmentDetailsT>(value)); return *this;}
    ///@}
  private:

    JobDetailsIdentifiers m_jobDetails;
    bool m_jobDetailsHasBeenSet = false;

    JobAttachmentDetailsIdentifiers m_jobAttachmentDetails;
    bool m_jobAttachmentDetailsHasBeenSet = false;

    StepDetailsIdentifiers m_stepDetails;
    bool m_stepDetailsHasBeenSet = false;

    EnvironmentDetailsIdentifiers m_environmentDetails;
    bool m_environmentDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
