/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{
  enum class NodeDataType
  {
    NOT_SET,
    INT8,
    UINT8,
    INT16,
    UINT16,
    INT32,
    UINT32,
    INT64,
    UINT64,
    BOOLEAN,
    FLOAT,
    DOUBLE,
    STRING,
    UNIX_TIMESTAMP,
    INT8_ARRAY,
    UINT8_ARRAY,
    INT16_ARRAY,
    UINT16_ARRAY,
    INT32_ARRAY,
    UINT32_ARRAY,
    INT64_ARRAY,
    UINT64_ARRAY,
    BOOLEAN_ARRAY,
    FLOAT_ARRAY,
    DOUBLE_ARRAY,
    STRING_ARRAY,
    UNIX_TIMESTAMP_ARRAY,
    UNKNOWN
  };

namespace NodeDataTypeMapper
{
AWS_IOTFLEETWISE_API NodeDataType GetNodeDataTypeForName(const Aws::String& name);

AWS_IOTFLEETWISE_API Aws::String GetNameForNodeDataType(NodeDataType value);
} // namespace NodeDataTypeMapper
} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
