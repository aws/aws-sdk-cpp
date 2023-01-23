/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Keyspaces
{
namespace Model
{
  enum class PointInTimeRecoveryStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace PointInTimeRecoveryStatusMapper
{
AWS_KEYSPACES_API PointInTimeRecoveryStatus GetPointInTimeRecoveryStatusForName(const Aws::String& name);

AWS_KEYSPACES_API Aws::String GetNameForPointInTimeRecoveryStatus(PointInTimeRecoveryStatus value);
} // namespace PointInTimeRecoveryStatusMapper
} // namespace Model
} // namespace Keyspaces
} // namespace Aws
