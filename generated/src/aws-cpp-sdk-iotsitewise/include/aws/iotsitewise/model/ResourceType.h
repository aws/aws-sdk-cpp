/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{
  enum class ResourceType
  {
    NOT_SET,
    PORTAL,
    PROJECT
  };

namespace ResourceTypeMapper
{
AWS_IOTSITEWISE_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
