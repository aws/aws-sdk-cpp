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
  enum class MembershipJobLogStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace MembershipJobLogStatusMapper
{
AWS_CLEANROOMS_API MembershipJobLogStatus GetMembershipJobLogStatusForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForMembershipJobLogStatus(MembershipJobLogStatus value);
} // namespace MembershipJobLogStatusMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
