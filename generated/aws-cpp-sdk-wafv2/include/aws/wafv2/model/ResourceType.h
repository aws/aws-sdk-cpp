/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WAFV2
{
namespace Model
{
  enum class ResourceType
  {
    NOT_SET,
    APPLICATION_LOAD_BALANCER,
    API_GATEWAY,
    APPSYNC
  };

namespace ResourceTypeMapper
{
AWS_WAFV2_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace WAFV2
} // namespace Aws
