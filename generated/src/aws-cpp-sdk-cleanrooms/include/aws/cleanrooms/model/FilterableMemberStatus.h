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
  enum class FilterableMemberStatus
  {
    NOT_SET,
    INVITED,
    ACTIVE
  };

namespace FilterableMemberStatusMapper
{
AWS_CLEANROOMS_API FilterableMemberStatus GetFilterableMemberStatusForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForFilterableMemberStatus(FilterableMemberStatus value);
} // namespace FilterableMemberStatusMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
