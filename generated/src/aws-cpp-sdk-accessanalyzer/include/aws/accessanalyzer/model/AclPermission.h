/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{
  enum class AclPermission
  {
    NOT_SET,
    READ,
    WRITE,
    READ_ACP,
    WRITE_ACP,
    FULL_CONTROL
  };

namespace AclPermissionMapper
{
AWS_ACCESSANALYZER_API AclPermission GetAclPermissionForName(const Aws::String& name);

AWS_ACCESSANALYZER_API Aws::String GetNameForAclPermission(AclPermission value);
} // namespace AclPermissionMapper
} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
