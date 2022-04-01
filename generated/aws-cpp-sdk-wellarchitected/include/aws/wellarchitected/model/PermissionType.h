﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{
  enum class PermissionType
  {
    NOT_SET,
    READONLY,
    CONTRIBUTOR
  };

namespace PermissionTypeMapper
{
AWS_WELLARCHITECTED_API PermissionType GetPermissionTypeForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForPermissionType(PermissionType value);
} // namespace PermissionTypeMapper
} // namespace Model
} // namespace WellArchitected
} // namespace Aws
