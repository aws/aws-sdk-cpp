/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/CoreDeviceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GreengrassV2
  {
    namespace Model
    {
      namespace CoreDeviceStatusMapper
      {

        static constexpr uint32_t HEALTHY_HASH = ConstExprHashingUtils::HashString("HEALTHY");
        static constexpr uint32_t UNHEALTHY_HASH = ConstExprHashingUtils::HashString("UNHEALTHY");


        CoreDeviceStatus GetCoreDeviceStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HEALTHY_HASH)
          {
            return CoreDeviceStatus::HEALTHY;
          }
          else if (hashCode == UNHEALTHY_HASH)
          {
            return CoreDeviceStatus::UNHEALTHY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CoreDeviceStatus>(hashCode);
          }

          return CoreDeviceStatus::NOT_SET;
        }

        Aws::String GetNameForCoreDeviceStatus(CoreDeviceStatus enumValue)
        {
          switch(enumValue)
          {
          case CoreDeviceStatus::NOT_SET:
            return {};
          case CoreDeviceStatus::HEALTHY:
            return "HEALTHY";
          case CoreDeviceStatus::UNHEALTHY:
            return "UNHEALTHY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CoreDeviceStatusMapper
    } // namespace Model
  } // namespace GreengrassV2
} // namespace Aws
