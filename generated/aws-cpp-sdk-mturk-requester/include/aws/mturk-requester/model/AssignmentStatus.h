/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MTurk
{
namespace Model
{
  enum class AssignmentStatus
  {
    NOT_SET,
    Submitted,
    Approved,
    Rejected
  };

namespace AssignmentStatusMapper
{
AWS_MTURK_API AssignmentStatus GetAssignmentStatusForName(const Aws::String& name);

AWS_MTURK_API Aws::String GetNameForAssignmentStatus(AssignmentStatus value);
} // namespace AssignmentStatusMapper
} // namespace Model
} // namespace MTurk
} // namespace Aws
