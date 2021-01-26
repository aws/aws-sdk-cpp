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
  enum class ResourceValueType
  {
    NOT_SET,
    RESOURCE_ID
  };

namespace ResourceValueTypeMapper
{
AWS_CONFIGSERVICE_API ResourceValueType GetResourceValueTypeForName(const Aws::String& name);

AWS_CONFIGSERVICE_API Aws::String GetNameForResourceValueType(ResourceValueType value);
} // namespace ResourceValueTypeMapper
} // namespace Model
} // namespace ConfigService
} // namespace Aws
