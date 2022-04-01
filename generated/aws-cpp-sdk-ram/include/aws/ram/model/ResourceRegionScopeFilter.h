/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RAM
{
namespace Model
{
  enum class ResourceRegionScopeFilter
  {
    NOT_SET,
    ALL,
    REGIONAL,
    GLOBAL
  };

namespace ResourceRegionScopeFilterMapper
{
AWS_RAM_API ResourceRegionScopeFilter GetResourceRegionScopeFilterForName(const Aws::String& name);

AWS_RAM_API Aws::String GetNameForResourceRegionScopeFilter(ResourceRegionScopeFilter value);
} // namespace ResourceRegionScopeFilterMapper
} // namespace Model
} // namespace RAM
} // namespace Aws
