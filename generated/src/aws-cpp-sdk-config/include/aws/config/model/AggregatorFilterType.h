/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConfigService
{
namespace Model
{
  enum class AggregatorFilterType
  {
    NOT_SET,
    INCLUDE
  };

namespace AggregatorFilterTypeMapper
{
AWS_CONFIGSERVICE_API AggregatorFilterType GetAggregatorFilterTypeForName(const Aws::String& name);

AWS_CONFIGSERVICE_API Aws::String GetNameForAggregatorFilterType(AggregatorFilterType value);
} // namespace AggregatorFilterTypeMapper
} // namespace Model
} // namespace ConfigService
} // namespace Aws
