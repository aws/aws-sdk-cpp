/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{
  enum class AssessmentStatus
  {
    NOT_SET,
    Pending,
    InProgress,
    Failed,
    Success
  };

namespace AssessmentStatusMapper
{
AWS_RESILIENCEHUB_API AssessmentStatus GetAssessmentStatusForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForAssessmentStatus(AssessmentStatus value);
} // namespace AssessmentStatusMapper
} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
