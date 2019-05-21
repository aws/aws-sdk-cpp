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

#include <aws/alexaforbusiness/model/NetworkSecurityType.h>
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
      namespace NetworkSecurityTypeMapper
      {

        static const int OPEN_HASH = HashingUtils::HashString("OPEN");
        static const int WEP_HASH = HashingUtils::HashString("WEP");
        static const int WPA_PSK_HASH = HashingUtils::HashString("WPA_PSK");
        static const int WPA2_PSK_HASH = HashingUtils::HashString("WPA2_PSK");
        static const int WPA2_ENTERPRISE_HASH = HashingUtils::HashString("WPA2_ENTERPRISE");


        NetworkSecurityType GetNetworkSecurityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OPEN_HASH)
          {
            return NetworkSecurityType::OPEN;
          }
          else if (hashCode == WEP_HASH)
          {
            return NetworkSecurityType::WEP;
          }
          else if (hashCode == WPA_PSK_HASH)
          {
            return NetworkSecurityType::WPA_PSK;
          }
          else if (hashCode == WPA2_PSK_HASH)
          {
            return NetworkSecurityType::WPA2_PSK;
          }
          else if (hashCode == WPA2_ENTERPRISE_HASH)
          {
            return NetworkSecurityType::WPA2_ENTERPRISE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NetworkSecurityType>(hashCode);
          }

          return NetworkSecurityType::NOT_SET;
        }

        Aws::String GetNameForNetworkSecurityType(NetworkSecurityType enumValue)
        {
          switch(enumValue)
          {
          case NetworkSecurityType::OPEN:
            return "OPEN";
          case NetworkSecurityType::WEP:
            return "WEP";
          case NetworkSecurityType::WPA_PSK:
            return "WPA_PSK";
          case NetworkSecurityType::WPA2_PSK:
            return "WPA2_PSK";
          case NetworkSecurityType::WPA2_ENTERPRISE:
            return "WPA2_ENTERPRISE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NetworkSecurityTypeMapper
    } // namespace Model
  } // namespace AlexaForBusiness
} // namespace Aws
