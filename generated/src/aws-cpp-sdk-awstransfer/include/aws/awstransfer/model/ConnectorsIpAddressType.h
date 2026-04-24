/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Transfer {
namespace Model {
enum class ConnectorsIpAddressType { NOT_SET, IPV4, DUALSTACK };

namespace ConnectorsIpAddressTypeMapper {
AWS_TRANSFER_API ConnectorsIpAddressType GetConnectorsIpAddressTypeForName(const Aws::String& name);

AWS_TRANSFER_API Aws::String GetNameForConnectorsIpAddressType(ConnectorsIpAddressType value);
}  // namespace ConnectorsIpAddressTypeMapper
}  // namespace Model
}  // namespace Transfer
}  // namespace Aws
