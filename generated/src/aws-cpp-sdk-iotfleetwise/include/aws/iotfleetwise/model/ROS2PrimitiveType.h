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
  enum class ROS2PrimitiveType
  {
    NOT_SET,
    BOOL_,
    BYTE,
    CHAR_,
    FLOAT32,
    FLOAT64,
    INT8,
    UINT8,
    INT16,
    UINT16,
    INT32,
    UINT32,
    INT64,
    UINT64,
    STRING,
    WSTRING
  };

namespace ROS2PrimitiveTypeMapper
{
AWS_IOTFLEETWISE_API ROS2PrimitiveType GetROS2PrimitiveTypeForName(const Aws::String& name);

AWS_IOTFLEETWISE_API Aws::String GetNameForROS2PrimitiveType(ROS2PrimitiveType value);
} // namespace ROS2PrimitiveTypeMapper
} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
