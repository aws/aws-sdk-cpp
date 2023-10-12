/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutvision/model/TargetDevice.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LookoutforVision
  {
    namespace Model
    {
      namespace TargetDeviceMapper
      {

        static constexpr uint32_t jetson_xavier_HASH = ConstExprHashingUtils::HashString("jetson_xavier");


        TargetDevice GetTargetDeviceForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == jetson_xavier_HASH)
          {
            return TargetDevice::jetson_xavier;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetDevice>(hashCode);
          }

          return TargetDevice::NOT_SET;
        }

        Aws::String GetNameForTargetDevice(TargetDevice enumValue)
        {
          switch(enumValue)
          {
          case TargetDevice::NOT_SET:
            return {};
          case TargetDevice::jetson_xavier:
            return "jetson_xavier";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetDeviceMapper
    } // namespace Model
  } // namespace LookoutforVision
} // namespace Aws
