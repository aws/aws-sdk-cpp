/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{
  enum class DataType
  {
    NOT_SET,
    STRING,
    INTEGER,
    FLOAT,
    BOOLEAN
  };

namespace DataTypeMapper
{
AWS_FRAUDDETECTOR_API DataType GetDataTypeForName(const Aws::String& name);

AWS_FRAUDDETECTOR_API Aws::String GetNameForDataType(DataType value);
} // namespace DataTypeMapper
} // namespace Model
} // namespace FraudDetector
} // namespace Aws
