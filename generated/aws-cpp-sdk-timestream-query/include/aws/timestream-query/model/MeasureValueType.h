/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace TimestreamQuery
{
namespace Model
{
  enum class MeasureValueType
  {
    NOT_SET,
    BIGINT,
    BOOLEAN,
    DOUBLE,
    VARCHAR,
    MULTI
  };

namespace MeasureValueTypeMapper
{
AWS_TIMESTREAMQUERY_API MeasureValueType GetMeasureValueTypeForName(const Aws::String& name);

AWS_TIMESTREAMQUERY_API Aws::String GetNameForMeasureValueType(MeasureValueType value);
} // namespace MeasureValueTypeMapper
} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
