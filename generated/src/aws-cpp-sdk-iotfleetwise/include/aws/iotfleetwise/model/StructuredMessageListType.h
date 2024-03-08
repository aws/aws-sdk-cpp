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
  enum class StructuredMessageListType
  {
    NOT_SET,
    FIXED_CAPACITY,
    DYNAMIC_UNBOUNDED_CAPACITY,
    DYNAMIC_BOUNDED_CAPACITY
  };

namespace StructuredMessageListTypeMapper
{
AWS_IOTFLEETWISE_API StructuredMessageListType GetStructuredMessageListTypeForName(const Aws::String& name);

AWS_IOTFLEETWISE_API Aws::String GetNameForStructuredMessageListType(StructuredMessageListType value);
} // namespace StructuredMessageListTypeMapper
} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
