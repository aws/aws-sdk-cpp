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
  enum class SignalDecoderFailureReason
  {
    NOT_SET,
    DUPLICATE_SIGNAL,
    CONFLICTING_SIGNAL,
    SIGNAL_TO_ADD_ALREADY_EXISTS,
    SIGNAL_NOT_ASSOCIATED_WITH_NETWORK_INTERFACE,
    NETWORK_INTERFACE_TYPE_INCOMPATIBLE_WITH_SIGNAL_DECODER_TYPE,
    SIGNAL_NOT_IN_MODEL,
    CAN_SIGNAL_INFO_IS_NULL,
    OBD_SIGNAL_INFO_IS_NULL,
    NO_DECODER_INFO_FOR_SIGNAL_IN_MODEL
  };

namespace SignalDecoderFailureReasonMapper
{
AWS_IOTFLEETWISE_API SignalDecoderFailureReason GetSignalDecoderFailureReasonForName(const Aws::String& name);

AWS_IOTFLEETWISE_API Aws::String GetNameForSignalDecoderFailureReason(SignalDecoderFailureReason value);
} // namespace SignalDecoderFailureReasonMapper
} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
