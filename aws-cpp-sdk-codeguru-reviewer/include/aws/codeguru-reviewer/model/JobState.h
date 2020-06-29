/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeGuruReviewer
{
namespace Model
{
  enum class JobState
  {
    NOT_SET,
    Completed,
    Pending,
    Failed,
    Deleting
  };

namespace JobStateMapper
{
AWS_CODEGURUREVIEWER_API JobState GetJobStateForName(const Aws::String& name);

AWS_CODEGURUREVIEWER_API Aws::String GetNameForJobState(JobState value);
} // namespace JobStateMapper
} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
