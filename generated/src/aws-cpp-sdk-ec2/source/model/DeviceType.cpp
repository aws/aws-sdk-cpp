/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeviceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace DeviceTypeMapper
      {

        static const int ebs_HASH = HashingUtils::HashString("ebs");
        static const int instance_store_HASH = HashingUtils::HashString("instance-store");


        DeviceType GetDeviceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ebs_HASH)
          {
            return DeviceType::ebs;
          }
          else if (hashCode == instance_store_HASH)
          {
            return DeviceType::instance_store;
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
          case DeviceType::ebs:
            return "ebs";
          case DeviceType::instance_store:
            return "instance-store";
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
  } // namespace EC2
} // namespace Aws
