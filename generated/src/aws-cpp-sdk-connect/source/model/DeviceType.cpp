/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DeviceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace DeviceTypeMapper
      {

        static const int GCM_HASH = HashingUtils::HashString("GCM");
        static const int APNS_HASH = HashingUtils::HashString("APNS");
        static const int APNS_SANDBOX_HASH = HashingUtils::HashString("APNS_SANDBOX");


        DeviceType GetDeviceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GCM_HASH)
          {
            return DeviceType::GCM;
          }
          else if (hashCode == APNS_HASH)
          {
            return DeviceType::APNS;
          }
          else if (hashCode == APNS_SANDBOX_HASH)
          {
            return DeviceType::APNS_SANDBOX;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeviceType>(hashCode);
          }

          return DeviceType::NOT_SET;
        }

        Aws::String GetNameForDeviceType(DeviceType enumValue)
        {
          switch(enumValue)
          {
          case DeviceType::NOT_SET:
            return {};
          case DeviceType::GCM:
            return "GCM";
          case DeviceType::APNS:
            return "APNS";
          case DeviceType::APNS_SANDBOX:
            return "APNS_SANDBOX";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeviceTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
