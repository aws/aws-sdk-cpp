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
  enum class MemberStatus
  {
    NOT_SET,
    INVITED,
    ACTIVE,
    LEFT,
    REMOVED
  };

namespace MemberStatusMapper
{
AWS_CLEANROOMS_API MemberStatus GetMemberStatusForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForMemberStatus(MemberStatus value);
} // namespace MemberStatusMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
