﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace TimestreamWrite
{
namespace Model
{
  enum class MeasureValueType
  {
    NOT_SET,
    DOUBLE,
    BIGINT,
    VARCHAR,
    BOOLEAN,
    TIMESTAMP,
    MULTI
  };

namespace MeasureValueTypeMapper
{
AWS_TIMESTREAMWRITE_API MeasureValueType GetMeasureValueTypeForName(const Aws::String& name);

AWS_TIMESTREAMWRITE_API Aws::String GetNameForMeasureValueType(MeasureValueType value);
} // namespace MeasureValueTypeMapper
} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
