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
  enum class ListAssetPropertiesFilter
  {
    NOT_SET,
    ALL,
    BASE
  };

namespace ListAssetPropertiesFilterMapper
{
AWS_IOTSITEWISE_API ListAssetPropertiesFilter GetListAssetPropertiesFilterForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForListAssetPropertiesFilter(ListAssetPropertiesFilter value);
} // namespace ListAssetPropertiesFilterMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
