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
  enum class TargetProtectedQueryStatus
  {
    NOT_SET,
    CANCELLED
  };

namespace TargetProtectedQueryStatusMapper
{
AWS_CLEANROOMS_API TargetProtectedQueryStatus GetTargetProtectedQueryStatusForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForTargetProtectedQueryStatus(TargetProtectedQueryStatus value);
} // namespace TargetProtectedQueryStatusMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
