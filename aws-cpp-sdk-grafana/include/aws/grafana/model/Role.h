/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ManagedGrafana
{
namespace Model
{
  enum class Role
  {
    NOT_SET,
    ADMIN,
    EDITOR,
    VIEWER
  };

namespace RoleMapper
{
AWS_MANAGEDGRAFANA_API Role GetRoleForName(const Aws::String& name);

AWS_MANAGEDGRAFANA_API Aws::String GetNameForRole(Role value);
} // namespace RoleMapper
} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
