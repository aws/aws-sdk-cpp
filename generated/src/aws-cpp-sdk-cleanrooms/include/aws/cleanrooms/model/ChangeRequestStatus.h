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
  enum class ChangeRequestStatus
  {
    NOT_SET,
    PENDING,
    APPROVED,
    CANCELLED,
    DENIED,
    COMMITTED
  };

namespace ChangeRequestStatusMapper
{
AWS_CLEANROOMS_API ChangeRequestStatus GetChangeRequestStatusForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForChangeRequestStatus(ChangeRequestStatus value);
} // namespace ChangeRequestStatusMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
