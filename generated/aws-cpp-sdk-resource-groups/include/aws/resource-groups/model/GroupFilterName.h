/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ResourceGroups
{
namespace Model
{
  enum class GroupFilterName
  {
    NOT_SET,
    resource_type,
    configuration_type
  };

namespace GroupFilterNameMapper
{
AWS_RESOURCEGROUPS_API GroupFilterName GetGroupFilterNameForName(const Aws::String& name);

AWS_RESOURCEGROUPS_API Aws::String GetNameForGroupFilterName(GroupFilterName value);
} // namespace GroupFilterNameMapper
} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
