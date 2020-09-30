/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{
  enum class ResourceType
  {
    NOT_SET,
    Mbps_Outbound_Bandwidth
  };

namespace ResourceTypeMapper
{
AWS_MEDIACONNECT_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace MediaConnect
} // namespace Aws
