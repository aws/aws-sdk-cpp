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
  enum class NetworkInterfaceType
  {
    NOT_SET,
    CAN_INTERFACE,
    OBD_INTERFACE
  };

namespace NetworkInterfaceTypeMapper
{
AWS_IOTFLEETWISE_API NetworkInterfaceType GetNetworkInterfaceTypeForName(const Aws::String& name);

AWS_IOTFLEETWISE_API Aws::String GetNameForNetworkInterfaceType(NetworkInterfaceType value);
} // namespace NetworkInterfaceTypeMapper
} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
