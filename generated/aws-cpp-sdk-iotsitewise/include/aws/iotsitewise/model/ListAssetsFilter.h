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
  enum class ListAssetsFilter
  {
    NOT_SET,
    ALL,
    TOP_LEVEL
  };

namespace ListAssetsFilterMapper
{
AWS_IOTSITEWISE_API ListAssetsFilter GetListAssetsFilterForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForListAssetsFilter(ListAssetsFilter value);
} // namespace ListAssetsFilterMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
