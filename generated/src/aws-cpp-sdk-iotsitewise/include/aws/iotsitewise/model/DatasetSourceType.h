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
  enum class DatasetSourceType
  {
    NOT_SET,
    KENDRA
  };

namespace DatasetSourceTypeMapper
{
AWS_IOTSITEWISE_API DatasetSourceType GetDatasetSourceTypeForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForDatasetSourceType(DatasetSourceType value);
} // namespace DatasetSourceTypeMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
