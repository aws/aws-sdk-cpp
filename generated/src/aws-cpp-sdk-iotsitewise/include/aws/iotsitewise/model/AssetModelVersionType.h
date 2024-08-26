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
  enum class AssetModelVersionType
  {
    NOT_SET,
    LATEST,
    ACTIVE
  };

namespace AssetModelVersionTypeMapper
{
AWS_IOTSITEWISE_API AssetModelVersionType GetAssetModelVersionTypeForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForAssetModelVersionType(AssetModelVersionType value);
} // namespace AssetModelVersionTypeMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
