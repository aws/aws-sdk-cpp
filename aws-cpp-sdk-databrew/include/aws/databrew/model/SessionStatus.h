/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{
  enum class SessionStatus
  {
    NOT_SET,
    ASSIGNED,
    FAILED,
    INITIALIZING,
    PROVISIONING,
    READY,
    RECYCLING,
    ROTATING,
    TERMINATED,
    TERMINATING,
    UPDATING
  };

namespace SessionStatusMapper
{
AWS_GLUEDATABREW_API SessionStatus GetSessionStatusForName(const Aws::String& name);

AWS_GLUEDATABREW_API Aws::String GetNameForSessionStatus(SessionStatus value);
} // namespace SessionStatusMapper
} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
