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
  enum class ListAssetModelPropertiesFilter
  {
    NOT_SET,
    ALL,
    BASE
  };

namespace ListAssetModelPropertiesFilterMapper
{
AWS_IOTSITEWISE_API ListAssetModelPropertiesFilter GetListAssetModelPropertiesFilterForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForListAssetModelPropertiesFilter(ListAssetModelPropertiesFilter value);
} // namespace ListAssetModelPropertiesFilterMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
