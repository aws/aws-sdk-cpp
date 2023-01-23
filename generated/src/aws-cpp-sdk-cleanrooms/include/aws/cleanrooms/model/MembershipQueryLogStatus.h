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
  enum class MembershipQueryLogStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace MembershipQueryLogStatusMapper
{
AWS_CLEANROOMS_API MembershipQueryLogStatus GetMembershipQueryLogStatusForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForMembershipQueryLogStatus(MembershipQueryLogStatus value);
} // namespace MembershipQueryLogStatusMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
