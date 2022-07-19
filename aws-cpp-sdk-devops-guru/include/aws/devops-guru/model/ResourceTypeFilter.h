/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{
  enum class ResourceTypeFilter
  {
    NOT_SET,
    LOG_GROUPS
  };

namespace ResourceTypeFilterMapper
{
AWS_DEVOPSGURU_API ResourceTypeFilter GetResourceTypeFilterForName(const Aws::String& name);

AWS_DEVOPSGURU_API Aws::String GetNameForResourceTypeFilter(ResourceTypeFilter value);
} // namespace ResourceTypeFilterMapper
} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
