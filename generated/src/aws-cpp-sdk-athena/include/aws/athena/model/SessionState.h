/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Athena
{
namespace Model
{
  enum class SessionState
  {
    NOT_SET,
    CREATING,
    CREATED,
    IDLE,
    BUSY,
    TERMINATING,
    TERMINATED,
    DEGRADED,
    FAILED
  };

namespace SessionStateMapper
{
AWS_ATHENA_API SessionState GetSessionStateForName(const Aws::String& name);

AWS_ATHENA_API Aws::String GetNameForSessionState(SessionState value);
} // namespace SessionStateMapper
} // namespace Model
} // namespace Athena
} // namespace Aws
