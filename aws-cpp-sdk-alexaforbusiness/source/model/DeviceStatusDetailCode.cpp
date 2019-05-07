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

#include <aws/alexaforbusiness/model/DeviceStatusDetailCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AlexaForBusiness
  {
    namespace Model
    {
      namespace DeviceStatusDetailCodeMapper
      {

        static const int DEVICE_SOFTWARE_UPDATE_NEEDED_HASH = HashingUtils::HashString("DEVICE_SOFTWARE_UPDATE_NEEDED");
        static const int DEVICE_WAS_OFFLINE_HASH = HashingUtils::HashString("DEVICE_WAS_OFFLINE");
        static const int CREDENTIALS_ACCESS_FAILURE_HASH = HashingUtils::HashString("CREDENTIALS_ACCESS_FAILURE");
        static const int TLS_VERSION_MISMATCH_HASH = HashingUtils::HashString("TLS_VERSION_MISMATCH");
        static const int ASSOCIATION_REJECTION_HASH = HashingUtils::HashString("ASSOCIATION_REJECTION");
        static const int AUTHENTICATION_FAILURE_HASH = HashingUtils::HashString("AUTHENTICATION_FAILURE");
        static const int DHCP_FAILURE_HASH = HashingUtils::HashString("DHCP_FAILURE");
        static const int INTERNET_UNAVAILABLE_HASH = HashingUtils::HashString("INTERNET_UNAVAILABLE");
        static const int DNS_FAILURE_HASH = HashingUtils::HashString("DNS_FAILURE");
        static const int UNKNOWN_FAILURE_HASH = HashingUtils::HashString("UNKNOWN_FAILURE");
        static const int CERTIFICATE_ISSUING_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("CERTIFICATE_ISSUING_LIMIT_EXCEEDED");
        static const int INVALID_CERTIFICATE_AUTHORITY_HASH = HashingUtils::HashString("INVALID_CERTIFICATE_AUTHORITY");
        static const int NETWORK_PROFILE_NOT_FOUND_HASH = HashingUtils::HashString("NETWORK_PROFILE_NOT_FOUND");
        static const int INVALID_PASSWORD_STATE_HASH = HashingUtils::HashString("INVALID_PASSWORD_STATE");
        static const int PASSWORD_NOT_FOUND_HASH = HashingUtils::HashString("PASSWORD_NOT_FOUND");


        DeviceStatusDetailCode GetDeviceStatusDetailCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEVICE_SOFTWARE_UPDATE_NEEDED_HASH)
          {
            return DeviceStatusDetailCode::DEVICE_SOFTWARE_UPDATE_NEEDED;
          }
          else if (hashCode == DEVICE_WAS_OFFLINE_HASH)
          {
            return DeviceStatusDetailCode::DEVICE_WAS_OFFLINE;
          }
          else if (hashCode == CREDENTIALS_ACCESS_FAILURE_HASH)
          {
            return DeviceStatusDetailCode::CREDENTIALS_ACCESS_FAILURE;
          }
          else if (hashCode == TLS_VERSION_MISMATCH_HASH)
          {
            return DeviceStatusDetailCode::TLS_VERSION_MISMATCH;
          }
          else if (hashCode == ASSOCIATION_REJECTION_HASH)
          {
            return DeviceStatusDetailCode::ASSOCIATION_REJECTION;
          }
          else if (hashCode == AUTHENTICATION_FAILURE_HASH)
          {
            return DeviceStatusDetailCode::AUTHENTICATION_FAILURE;
          }
          else if (hashCode == DHCP_FAILURE_HASH)
          {
            return DeviceStatusDetailCode::DHCP_FAILURE;
          }
          else if (hashCode == INTERNET_UNAVAILABLE_HASH)
          {
            return DeviceStatusDetailCode::INTERNET_UNAVAILABLE;
          }
          else if (hashCode == DNS_FAILURE_HASH)
          {
            return DeviceStatusDetailCode::DNS_FAILURE;
          }
          else if (hashCode == UNKNOWN_FAILURE_HASH)
          {
            return DeviceStatusDetailCode::UNKNOWN_FAILURE;
          }
          else if (hashCode == CERTIFICATE_ISSUING_LIMIT_EXCEEDED_HASH)
          {
            return DeviceStatusDetailCode::CERTIFICATE_ISSUING_LIMIT_EXCEEDED;
          }
          else if (hashCode == INVALID_CERTIFICATE_AUTHORITY_HASH)
          {
            return DeviceStatusDetailCode::INVALID_CERTIFICATE_AUTHORITY;
          }
          else if (hashCode == NETWORK_PROFILE_NOT_FOUND_HASH)
          {
            return DeviceStatusDetailCode::NETWORK_PROFILE_NOT_FOUND;
          }
          else if (hashCode == INVALID_PASSWORD_STATE_HASH)
          {
            return DeviceStatusDetailCode::INVALID_PASSWORD_STATE;
          }
          else if (hashCode == PASSWORD_NOT_FOUND_HASH)
          {
            return DeviceStatusDetailCode::PASSWORD_NOT_FOUND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeviceStatusDetailCode>(hashCode);
          }

          return DeviceStatusDetailCode::NOT_SET;
        }

        Aws::String GetNameForDeviceStatusDetailCode(DeviceStatusDetailCode enumValue)
        {
          switch(enumValue)
          {
          case DeviceStatusDetailCode::DEVICE_SOFTWARE_UPDATE_NEEDED:
            return "DEVICE_SOFTWARE_UPDATE_NEEDED";
          case DeviceStatusDetailCode::DEVICE_WAS_OFFLINE:
            return "DEVICE_WAS_OFFLINE";
          case DeviceStatusDetailCode::CREDENTIALS_ACCESS_FAILURE:
            return "CREDENTIALS_ACCESS_FAILURE";
          case DeviceStatusDetailCode::TLS_VERSION_MISMATCH:
            return "TLS_VERSION_MISMATCH";
          case DeviceStatusDetailCode::ASSOCIATION_REJECTION:
            return "ASSOCIATION_REJECTION";
          case DeviceStatusDetailCode::AUTHENTICATION_FAILURE:
            return "AUTHENTICATION_FAILURE";
          case DeviceStatusDetailCode::DHCP_FAILURE:
            return "DHCP_FAILURE";
          case DeviceStatusDetailCode::INTERNET_UNAVAILABLE:
            return "INTERNET_UNAVAILABLE";
          case DeviceStatusDetailCode::DNS_FAILURE:
            return "DNS_FAILURE";
          case DeviceStatusDetailCode::UNKNOWN_FAILURE:
            return "UNKNOWN_FAILURE";
          case DeviceStatusDetailCode::CERTIFICATE_ISSUING_LIMIT_EXCEEDED:
            return "CERTIFICATE_ISSUING_LIMIT_EXCEEDED";
          case DeviceStatusDetailCode::INVALID_CERTIFICATE_AUTHORITY:
            return "INVALID_CERTIFICATE_AUTHORITY";
          case DeviceStatusDetailCode::NETWORK_PROFILE_NOT_FOUND:
            return "NETWORK_PROFILE_NOT_FOUND";
          case DeviceStatusDetailCode::INVALID_PASSWORD_STATE:
            return "INVALID_PASSWORD_STATE";
          case DeviceStatusDetailCode::PASSWORD_NOT_FOUND:
            return "PASSWORD_NOT_FOUND";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeviceStatusDetailCodeMapper
    } // namespace Model
  } // namespace AlexaForBusiness
} // namespace Aws
