/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{
  enum class NetworkSecurityType
  {
    NOT_SET,
    OPEN,
    WEP,
    WPA_PSK,
    WPA2_PSK,
    WPA2_ENTERPRISE
  };

namespace NetworkSecurityTypeMapper
{
AWS_ALEXAFORBUSINESS_API NetworkSecurityType GetNetworkSecurityTypeForName(const Aws::String& name);

AWS_ALEXAFORBUSINESS_API Aws::String GetNameForNetworkSecurityType(NetworkSecurityType value);
} // namespace NetworkSecurityTypeMapper
} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
