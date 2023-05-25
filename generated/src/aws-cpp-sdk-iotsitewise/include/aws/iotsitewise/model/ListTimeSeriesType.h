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
  enum class ListTimeSeriesType
  {
    NOT_SET,
    ASSOCIATED,
    DISASSOCIATED
  };

namespace ListTimeSeriesTypeMapper
{
AWS_IOTSITEWISE_API ListTimeSeriesType GetListTimeSeriesTypeForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForListTimeSeriesType(ListTimeSeriesType value);
} // namespace ListTimeSeriesTypeMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
