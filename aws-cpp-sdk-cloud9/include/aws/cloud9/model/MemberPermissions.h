/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloud9/Cloud9_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Cloud9
{
namespace Model
{
  enum class MemberPermissions
  {
    NOT_SET,
    read_write,
    read_only
  };

namespace MemberPermissionsMapper
{
AWS_CLOUD9_API MemberPermissions GetMemberPermissionsForName(const Aws::String& name);

AWS_CLOUD9_API Aws::String GetNameForMemberPermissions(MemberPermissions value);
} // namespace MemberPermissionsMapper
} // namespace Model
} // namespace Cloud9
} // namespace Aws
