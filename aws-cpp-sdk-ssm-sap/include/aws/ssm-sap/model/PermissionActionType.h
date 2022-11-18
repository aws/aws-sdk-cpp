/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SsmSap
{
namespace Model
{
  enum class PermissionActionType
  {
    NOT_SET,
    RESTORE
  };

namespace PermissionActionTypeMapper
{
AWS_SSMSAP_API PermissionActionType GetPermissionActionTypeForName(const Aws::String& name);

AWS_SSMSAP_API Aws::String GetNameForPermissionActionType(PermissionActionType value);
} // namespace PermissionActionTypeMapper
} // namespace Model
} // namespace SsmSap
} // namespace Aws
