/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace deadline
{
namespace Model
{
  enum class MembershipLevel
  {
    NOT_SET,
    VIEWER,
    CONTRIBUTOR,
    OWNER,
    MANAGER
  };

namespace MembershipLevelMapper
{
AWS_DEADLINE_API MembershipLevel GetMembershipLevelForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForMembershipLevel(MembershipLevel value);
} // namespace MembershipLevelMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
