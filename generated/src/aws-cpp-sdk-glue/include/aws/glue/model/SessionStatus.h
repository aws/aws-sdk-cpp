/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class SessionStatus
  {
    NOT_SET,
    PROVISIONING,
    READY,
    FAILED,
    TIMEOUT,
    STOPPING,
    STOPPED
  };

namespace SessionStatusMapper
{
AWS_GLUE_API SessionStatus GetSessionStatusForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForSessionStatus(SessionStatus value);
} // namespace SessionStatusMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
