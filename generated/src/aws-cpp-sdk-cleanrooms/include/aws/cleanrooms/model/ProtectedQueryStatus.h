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
  enum class ProtectedQueryStatus
  {
    NOT_SET,
    SUBMITTED,
    STARTED,
    CANCELLED,
    CANCELLING,
    FAILED,
    SUCCESS,
    TIMED_OUT
  };

namespace ProtectedQueryStatusMapper
{
AWS_CLEANROOMS_API ProtectedQueryStatus GetProtectedQueryStatusForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForProtectedQueryStatus(ProtectedQueryStatus value);
} // namespace ProtectedQueryStatusMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
