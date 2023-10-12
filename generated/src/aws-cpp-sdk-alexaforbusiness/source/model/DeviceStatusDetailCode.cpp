/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

        static constexpr uint32_t DEVICE_SOFTWARE_UPDATE_NEEDED_HASH = ConstExprHashingUtils::HashString("DEVICE_SOFTWARE_UPDATE_NEEDED");
        static constexpr uint32_t DEVICE_WAS_OFFLINE_HASH = ConstExprHashingUtils::HashString("DEVICE_WAS_OFFLINE");
        static constexpr uint32_t CREDENTIALS_ACCESS_FAILURE_HASH = ConstExprHashingUtils::HashString("CREDENTIALS_ACCESS_FAILURE");
        static constexpr uint32_t TLS_VERSION_MISMATCH_HASH = ConstExprHashingUtils::HashString("TLS_VERSION_MISMATCH");
        static constexpr uint32_t ASSOCIATION_REJECTION_HASH = ConstExprHashingUtils::HashString("ASSOCIATION_REJECTION");
        static constexpr uint32_t AUTHENTICATION_FAILURE_HASH = ConstExprHashingUtils::HashString("AUTHENTICATION_FAILURE");
        static constexpr uint32_t DHCP_FAILURE_HASH = ConstExprHashingUtils::HashString("DHCP_FAILURE");
        static constexpr uint32_t INTERNET_UNAVAILABLE_HASH = ConstExprHashingUtils::HashString("INTERNET_UNAVAILABLE");
        static constexpr uint32_t DNS_FAILURE_HASH = ConstExprHashingUtils::HashString("DNS_FAILURE");
        static constexpr uint32_t UNKNOWN_FAILURE_HASH = ConstExprHashingUtils::HashString("UNKNOWN_FAILURE");
        static constexpr uint32_t CERTIFICATE_ISSUING_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("CERTIFICATE_ISSUING_LIMIT_EXCEEDED");
        static constexpr uint32_t INVALID_CERTIFICATE_AUTHORITY_HASH = ConstExprHashingUtils::HashString("INVALID_CERTIFICATE_AUTHORITY");
        static constexpr uint32_t NETWORK_PROFILE_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("NETWORK_PROFILE_NOT_FOUND");
        static constexpr uint32_t INVALID_PASSWORD_STATE_HASH = ConstExprHashingUtils::HashString("INVALID_PASSWORD_STATE");
        static constexpr uint32_t PASSWORD_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("PASSWORD_NOT_FOUND");
        static constexpr uint32_t PASSWORD_MANAGER_ACCESS_DENIED_HASH = ConstExprHashingUtils::HashString("PASSWORD_MANAGER_ACCESS_DENIED");
        static constexpr uint32_t CERTIFICATE_AUTHORITY_ACCESS_DENIED_HASH = ConstExprHashingUtils::HashString("CERTIFICATE_AUTHORITY_ACCESS_DENIED");


        DeviceStatusDetailCode GetDeviceStatusDetailCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == PASSWORD_MANAGER_ACCESS_DENIED_HASH)
          {
            return DeviceStatusDetailCode::PASSWORD_MANAGER_ACCESS_DENIED;
          }
          else if (hashCode == CERTIFICATE_AUTHORITY_ACCESS_DENIED_HASH)
          {
            return DeviceStatusDetailCode::CERTIFICATE_AUTHORITY_ACCESS_DENIED;
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
          case DeviceStatusDetailCode::NOT_SET:
            return {};
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
          case DeviceStatusDetailCode::PASSWORD_MANAGER_ACCESS_DENIED:
            return "PASSWORD_MANAGER_ACCESS_DENIED";
          case DeviceStatusDetailCode::CERTIFICATE_AUTHORITY_ACCESS_DENIED:
            return "CERTIFICATE_AUTHORITY_ACCESS_DENIED";
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
