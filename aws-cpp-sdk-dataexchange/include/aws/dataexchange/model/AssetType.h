/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataExchange
{
namespace Model
{
  enum class AssetType
  {
    NOT_SET,
    S3_SNAPSHOT
  };

namespace AssetTypeMapper
{
AWS_DATAEXCHANGE_API AssetType GetAssetTypeForName(const Aws::String& name);

AWS_DATAEXCHANGE_API Aws::String GetNameForAssetType(AssetType value);
} // namespace AssetTypeMapper
} // namespace Model
} // namespace DataExchange
} // namespace Aws
