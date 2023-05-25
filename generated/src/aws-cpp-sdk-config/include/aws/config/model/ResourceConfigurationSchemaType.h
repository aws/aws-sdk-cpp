/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConfigService
{
namespace Model
{
  enum class ResourceConfigurationSchemaType
  {
    NOT_SET,
    CFN_RESOURCE_SCHEMA
  };

namespace ResourceConfigurationSchemaTypeMapper
{
AWS_CONFIGSERVICE_API ResourceConfigurationSchemaType GetResourceConfigurationSchemaTypeForName(const Aws::String& name);

AWS_CONFIGSERVICE_API Aws::String GetNameForResourceConfigurationSchemaType(ResourceConfigurationSchemaType value);
} // namespace ResourceConfigurationSchemaTypeMapper
} // namespace Model
} // namespace ConfigService
} // namespace Aws
