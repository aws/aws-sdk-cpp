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
  enum class SessionLifecycleStatus
  {
    NOT_SET,
    STARTED,
    UPDATE_IN_PROGRESS,
    UPDATE_SUCCEEDED,
    UPDATE_FAILED,
    ENDED
  };

namespace SessionLifecycleStatusMapper
{
AWS_DEADLINE_API SessionLifecycleStatus GetSessionLifecycleStatusForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForSessionLifecycleStatus(SessionLifecycleStatus value);
} // namespace SessionLifecycleStatusMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
