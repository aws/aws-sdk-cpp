/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfigdata/AppConfigData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppConfigData
{
namespace Model
{
  enum class ResourceType
  {
    NOT_SET,
    Application,
    ConfigurationProfile,
    Deployment,
    Environment,
    Configuration
  };

namespace ResourceTypeMapper
{
AWS_APPCONFIGDATA_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_APPCONFIGDATA_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace AppConfigData
} // namespace Aws
