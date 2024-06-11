﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/EnvironmentDetailsIdentifiers.h>
#include <aws/deadline/model/JobAttachmentDetailsIdentifiers.h>
#include <aws/deadline/model/JobDetailsIdentifiers.h>
#include <aws/deadline/model/StepDetailsIdentifiers.h>
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
    AWS_DEADLINE_API JobEntityIdentifiersUnion();
    AWS_DEADLINE_API JobEntityIdentifiersUnion(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API JobEntityIdentifiersUnion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The environment details.</p>
     */
    inline const EnvironmentDetailsIdentifiers& GetEnvironmentDetails() const{ return m_environmentDetails; }
    inline bool EnvironmentDetailsHasBeenSet() const { return m_environmentDetailsHasBeenSet; }
    inline void SetEnvironmentDetails(const EnvironmentDetailsIdentifiers& value) { m_environmentDetailsHasBeenSet = true; m_environmentDetails = value; }
    inline void SetEnvironmentDetails(EnvironmentDetailsIdentifiers&& value) { m_environmentDetailsHasBeenSet = true; m_environmentDetails = std::move(value); }
    inline JobEntityIdentifiersUnion& WithEnvironmentDetails(const EnvironmentDetailsIdentifiers& value) { SetEnvironmentDetails(value); return *this;}
    inline JobEntityIdentifiersUnion& WithEnvironmentDetails(EnvironmentDetailsIdentifiers&& value) { SetEnvironmentDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job attachment details.</p>
     */
    inline const JobAttachmentDetailsIdentifiers& GetJobAttachmentDetails() const{ return m_jobAttachmentDetails; }
    inline bool JobAttachmentDetailsHasBeenSet() const { return m_jobAttachmentDetailsHasBeenSet; }
    inline void SetJobAttachmentDetails(const JobAttachmentDetailsIdentifiers& value) { m_jobAttachmentDetailsHasBeenSet = true; m_jobAttachmentDetails = value; }
    inline void SetJobAttachmentDetails(JobAttachmentDetailsIdentifiers&& value) { m_jobAttachmentDetailsHasBeenSet = true; m_jobAttachmentDetails = std::move(value); }
    inline JobEntityIdentifiersUnion& WithJobAttachmentDetails(const JobAttachmentDetailsIdentifiers& value) { SetJobAttachmentDetails(value); return *this;}
    inline JobEntityIdentifiersUnion& WithJobAttachmentDetails(JobAttachmentDetailsIdentifiers&& value) { SetJobAttachmentDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job details.</p>
     */
    inline const JobDetailsIdentifiers& GetJobDetails() const{ return m_jobDetails; }
    inline bool JobDetailsHasBeenSet() const { return m_jobDetailsHasBeenSet; }
    inline void SetJobDetails(const JobDetailsIdentifiers& value) { m_jobDetailsHasBeenSet = true; m_jobDetails = value; }
    inline void SetJobDetails(JobDetailsIdentifiers&& value) { m_jobDetailsHasBeenSet = true; m_jobDetails = std::move(value); }
    inline JobEntityIdentifiersUnion& WithJobDetails(const JobDetailsIdentifiers& value) { SetJobDetails(value); return *this;}
    inline JobEntityIdentifiersUnion& WithJobDetails(JobDetailsIdentifiers&& value) { SetJobDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The step details.</p>
     */
    inline const StepDetailsIdentifiers& GetStepDetails() const{ return m_stepDetails; }
    inline bool StepDetailsHasBeenSet() const { return m_stepDetailsHasBeenSet; }
    inline void SetStepDetails(const StepDetailsIdentifiers& value) { m_stepDetailsHasBeenSet = true; m_stepDetails = value; }
    inline void SetStepDetails(StepDetailsIdentifiers&& value) { m_stepDetailsHasBeenSet = true; m_stepDetails = std::move(value); }
    inline JobEntityIdentifiersUnion& WithStepDetails(const StepDetailsIdentifiers& value) { SetStepDetails(value); return *this;}
    inline JobEntityIdentifiersUnion& WithStepDetails(StepDetailsIdentifiers&& value) { SetStepDetails(std::move(value)); return *this;}
    ///@}
  private:

    EnvironmentDetailsIdentifiers m_environmentDetails;
    bool m_environmentDetailsHasBeenSet = false;

    JobAttachmentDetailsIdentifiers m_jobAttachmentDetails;
    bool m_jobAttachmentDetailsHasBeenSet = false;

    JobDetailsIdentifiers m_jobDetails;
    bool m_jobDetailsHasBeenSet = false;

    StepDetailsIdentifiers m_stepDetails;
    bool m_stepDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
