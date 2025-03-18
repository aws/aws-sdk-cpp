/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{
  enum class TargetProtectedJobStatus
  {
    NOT_SET,
    CANCELLED
  };

namespace TargetProtectedJobStatusMapper
{
AWS_CLEANROOMS_API TargetProtectedJobStatus GetTargetProtectedJobStatusForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForTargetProtectedJobStatus(TargetProtectedJobStatus value);
} // namespace TargetProtectedJobStatusMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
