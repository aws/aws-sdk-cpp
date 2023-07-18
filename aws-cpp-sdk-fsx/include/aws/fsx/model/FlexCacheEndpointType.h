/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FSx
{
namespace Model
{
  enum class FlexCacheEndpointType
  {
    NOT_SET,
    NONE,
    ORIGIN,
    CACHE
  };

namespace FlexCacheEndpointTypeMapper
{
AWS_FSX_API FlexCacheEndpointType GetFlexCacheEndpointTypeForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForFlexCacheEndpointType(FlexCacheEndpointType value);
} // namespace FlexCacheEndpointTypeMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
