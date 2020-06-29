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
  enum class AssetErrorCode
  {
    NOT_SET,
    INTERNAL_FAILURE
  };

namespace AssetErrorCodeMapper
{
AWS_IOTSITEWISE_API AssetErrorCode GetAssetErrorCodeForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForAssetErrorCode(AssetErrorCode value);
} // namespace AssetErrorCodeMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
