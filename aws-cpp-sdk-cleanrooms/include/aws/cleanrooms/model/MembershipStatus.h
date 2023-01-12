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
  enum class MembershipStatus
  {
    NOT_SET,
    ACTIVE,
    REMOVED,
    COLLABORATION_DELETED
  };

namespace MembershipStatusMapper
{
AWS_CLEANROOMS_API MembershipStatus GetMembershipStatusForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForMembershipStatus(MembershipStatus value);
} // namespace MembershipStatusMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
