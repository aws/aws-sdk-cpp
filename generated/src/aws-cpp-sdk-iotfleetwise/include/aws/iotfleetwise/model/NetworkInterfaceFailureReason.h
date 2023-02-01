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
  enum class NetworkInterfaceFailureReason
  {
    NOT_SET,
    DUPLICATE_NETWORK_INTERFACE,
    CONFLICTING_NETWORK_INTERFACE,
    NETWORK_INTERFACE_TO_ADD_ALREADY_EXISTS,
    CAN_NETWORK_INTERFACE_INFO_IS_NULL,
    OBD_NETWORK_INTERFACE_INFO_IS_NULL,
    NETWORK_INTERFACE_TO_REMOVE_ASSOCIATED_WITH_SIGNALS
  };

namespace NetworkInterfaceFailureReasonMapper
{
AWS_IOTFLEETWISE_API NetworkInterfaceFailureReason GetNetworkInterfaceFailureReasonForName(const Aws::String& name);

AWS_IOTFLEETWISE_API Aws::String GetNameForNetworkInterfaceFailureReason(NetworkInterfaceFailureReason value);
} // namespace NetworkInterfaceFailureReasonMapper
} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
