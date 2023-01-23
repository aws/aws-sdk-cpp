/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{
  enum class AggregationType
  {
    NOT_SET,
    COUNT_DISTINCT
  };

namespace AggregationTypeMapper
{
AWS_CLEANROOMS_API AggregationType GetAggregationTypeForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForAggregationType(AggregationType value);
} // namespace AggregationTypeMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
