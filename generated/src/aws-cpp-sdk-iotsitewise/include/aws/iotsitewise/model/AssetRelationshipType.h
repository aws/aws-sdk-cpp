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
  enum class AssetRelationshipType
  {
    NOT_SET,
    HIERARCHY
  };

namespace AssetRelationshipTypeMapper
{
AWS_IOTSITEWISE_API AssetRelationshipType GetAssetRelationshipTypeForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForAssetRelationshipType(AssetRelationshipType value);
} // namespace AssetRelationshipTypeMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
