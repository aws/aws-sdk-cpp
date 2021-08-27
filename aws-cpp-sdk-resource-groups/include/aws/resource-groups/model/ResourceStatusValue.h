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
  enum class ResourceStatusValue
  {
    NOT_SET,
    PENDING
  };

namespace ResourceStatusValueMapper
{
AWS_RESOURCEGROUPS_API ResourceStatusValue GetResourceStatusValueForName(const Aws::String& name);

AWS_RESOURCEGROUPS_API Aws::String GetNameForResourceStatusValue(ResourceStatusValue value);
} // namespace ResourceStatusValueMapper
} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
