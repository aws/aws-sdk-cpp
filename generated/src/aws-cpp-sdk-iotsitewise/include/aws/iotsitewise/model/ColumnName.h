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
  enum class ColumnName
  {
    NOT_SET,
    ALIAS,
    ASSET_ID,
    PROPERTY_ID,
    DATA_TYPE,
    TIMESTAMP_SECONDS,
    TIMESTAMP_NANO_OFFSET,
    QUALITY,
    VALUE
  };

namespace ColumnNameMapper
{
AWS_IOTSITEWISE_API ColumnName GetColumnNameForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForColumnName(ColumnName value);
} // namespace ColumnNameMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
