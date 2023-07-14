/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{
  enum class PriceUnits
  {
    NOT_SET,
    HOURLY
  };

namespace PriceUnitsMapper
{
AWS_MEDIACONNECT_API PriceUnits GetPriceUnitsForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForPriceUnits(PriceUnits value);
} // namespace PriceUnitsMapper
} // namespace Model
} // namespace MediaConnect
} // namespace Aws
