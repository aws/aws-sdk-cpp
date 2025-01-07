/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace imagebuilder
{
namespace Model
{
  enum class MarketplaceResourceType
  {
    NOT_SET,
    COMPONENT_DATA,
    COMPONENT_ARTIFACT
  };

namespace MarketplaceResourceTypeMapper
{
AWS_IMAGEBUILDER_API MarketplaceResourceType GetMarketplaceResourceTypeForName(const Aws::String& name);

AWS_IMAGEBUILDER_API Aws::String GetNameForMarketplaceResourceType(MarketplaceResourceType value);
} // namespace MarketplaceResourceTypeMapper
} // namespace Model
} // namespace imagebuilder
} // namespace Aws
