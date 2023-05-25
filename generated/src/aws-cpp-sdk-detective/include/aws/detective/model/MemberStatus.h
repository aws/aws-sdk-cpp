/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Detective
{
namespace Model
{
  enum class MemberStatus
  {
    NOT_SET,
    INVITED,
    VERIFICATION_IN_PROGRESS,
    VERIFICATION_FAILED,
    ENABLED,
    ACCEPTED_BUT_DISABLED
  };

namespace MemberStatusMapper
{
AWS_DETECTIVE_API MemberStatus GetMemberStatusForName(const Aws::String& name);

AWS_DETECTIVE_API Aws::String GetNameForMemberStatus(MemberStatus value);
} // namespace MemberStatusMapper
} // namespace Model
} // namespace Detective
} // namespace Aws
