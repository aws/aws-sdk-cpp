/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EMR
{
namespace Model
{
  enum class MarketType
  {
    NOT_SET,
    ON_DEMAND,
    SPOT
  };

namespace MarketTypeMapper
{
AWS_EMR_API MarketType GetMarketTypeForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForMarketType(MarketType value);
} // namespace MarketTypeMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
