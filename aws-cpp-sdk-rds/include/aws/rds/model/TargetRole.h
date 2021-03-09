/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RDS
{
namespace Model
{
  enum class TargetRole
  {
    NOT_SET,
    READ_WRITE,
    READ_ONLY,
    UNKNOWN
  };

namespace TargetRoleMapper
{
AWS_RDS_API TargetRole GetTargetRoleForName(const Aws::String& name);

AWS_RDS_API Aws::String GetNameForTargetRole(TargetRole value);
} // namespace TargetRoleMapper
} // namespace Model
} // namespace RDS
} // namespace Aws
