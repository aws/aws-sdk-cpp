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
  enum class SignalDecoderType
  {
    NOT_SET,
    CAN_SIGNAL,
    OBD_SIGNAL
  };

namespace SignalDecoderTypeMapper
{
AWS_IOTFLEETWISE_API SignalDecoderType GetSignalDecoderTypeForName(const Aws::String& name);

AWS_IOTFLEETWISE_API Aws::String GetNameForSignalDecoderType(SignalDecoderType value);
} // namespace SignalDecoderTypeMapper
} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
