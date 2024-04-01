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
  enum class SessionActionStatus
  {
    NOT_SET,
    ASSIGNED,
    RUNNING,
    CANCELING,
    SUCCEEDED,
    FAILED,
    INTERRUPTED,
    CANCELED,
    NEVER_ATTEMPTED,
    SCHEDULED,
    RECLAIMING,
    RECLAIMED
  };

namespace SessionActionStatusMapper
{
AWS_DEADLINE_API SessionActionStatus GetSessionActionStatusForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForSessionActionStatus(SessionActionStatus value);
} // namespace SessionActionStatusMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
