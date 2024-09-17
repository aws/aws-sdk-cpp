/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace deadline
{
namespace Model
{
  enum class CompletedStatus
  {
    NOT_SET,
    SUCCEEDED,
    FAILED,
    INTERRUPTED,
    CANCELED,
    NEVER_ATTEMPTED
  };

namespace CompletedStatusMapper
{
AWS_DEADLINE_API CompletedStatus GetCompletedStatusForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForCompletedStatus(CompletedStatus value);
} // namespace CompletedStatusMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
