/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    PASSWORD_NOT_FOUND
  };

namespace DeviceStatusDetailCodeMapper
{
AWS_ALEXAFORBUSINESS_API DeviceStatusDetailCode GetDeviceStatusDetailCodeForName(const Aws::String& name);

AWS_ALEXAFORBUSINESS_API Aws::String GetNameForDeviceStatusDetailCode(DeviceStatusDetailCode value);
} // namespace DeviceStatusDetailCodeMapper
} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
