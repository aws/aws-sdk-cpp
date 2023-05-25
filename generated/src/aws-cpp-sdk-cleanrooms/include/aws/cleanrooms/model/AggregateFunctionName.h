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
  enum class AggregateFunctionName
  {
    NOT_SET,
    SUM,
    SUM_DISTINCT,
    COUNT,
    COUNT_DISTINCT,
    AVG
  };

namespace AggregateFunctionNameMapper
{
AWS_CLEANROOMS_API AggregateFunctionName GetAggregateFunctionNameForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForAggregateFunctionName(AggregateFunctionName value);
} // namespace AggregateFunctionNameMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
