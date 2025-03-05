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
  enum class SignalValueType
  {
    NOT_SET,
    INTEGER,
    FLOATING_POINT
  };

namespace SignalValueTypeMapper
{
AWS_IOTFLEETWISE_API SignalValueType GetSignalValueTypeForName(const Aws::String& name);

AWS_IOTFLEETWISE_API Aws::String GetNameForSignalValueType(SignalValueType value);
} // namespace SignalValueTypeMapper
} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
