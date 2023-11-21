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
  enum class AssetModelType
  {
    NOT_SET,
    ASSET_MODEL,
    COMPONENT_MODEL
  };

namespace AssetModelTypeMapper
{
AWS_IOTSITEWISE_API AssetModelType GetAssetModelTypeForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForAssetModelType(AssetModelType value);
} // namespace AssetModelTypeMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
