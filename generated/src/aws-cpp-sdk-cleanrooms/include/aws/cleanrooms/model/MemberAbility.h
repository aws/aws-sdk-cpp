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
  enum class MemberAbility
  {
    NOT_SET,
    CAN_QUERY,
    CAN_RECEIVE_RESULTS
  };

namespace MemberAbilityMapper
{
AWS_CLEANROOMS_API MemberAbility GetMemberAbilityForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForMemberAbility(MemberAbility value);
} // namespace MemberAbilityMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
