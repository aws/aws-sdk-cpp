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
  enum class DeviceStatusDetailCode
  {
    NOT_SET,
    DEVICE_SOFTWARE_UPDATE_NEEDED,
    DEVICE_WAS_OFFLINE,
    CREDENTIALS_ACCESS_FAILURE,
    TLS_VERSION_MISMATCH,
    ASSOCIATION_REJECTION,
    AUTHENTICATION_FAILURE,
    DHCP_FAILURE,
    INTERNET_UNAVAILABLE,
    DNS_FAILURE,
    UNKNOWN_FAILURE,
    CERTIFICATE_ISSUING_LIMIT_EXCEEDED,
    INVALID_CERTIFICATE_AUTHORITY,
    NETWORK_PROFILE_NOT_FOUND,
    INVALID_PASSWORD_STATE,
    PASSWORD_NOT_FOUND,
    PASSWORD_MANAGER_ACCESS_DENIED,
    CERTIFICATE_AUTHORITY_ACCESS_DENIED
  };

namespace DeviceStatusDetailCodeMapper
{
AWS_ALEXAFORBUSINESS_API DeviceStatusDetailCode GetDeviceStatusDetailCodeForName(const Aws::String& name);

AWS_ALEXAFORBUSINESS_API Aws::String GetNameForDeviceStatusDetailCode(DeviceStatusDetailCode value);
} // namespace DeviceStatusDetailCodeMapper
} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
