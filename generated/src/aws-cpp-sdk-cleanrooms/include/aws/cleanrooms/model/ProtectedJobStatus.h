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
  enum class ProtectedJobStatus
  {
    NOT_SET,
    SUBMITTED,
    STARTED,
    CANCELLED,
    CANCELLING,
    FAILED,
    SUCCESS
  };

namespace ProtectedJobStatusMapper
{
AWS_CLEANROOMS_API ProtectedJobStatus GetProtectedJobStatusForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForProtectedJobStatus(ProtectedJobStatus value);
} // namespace ProtectedJobStatusMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
