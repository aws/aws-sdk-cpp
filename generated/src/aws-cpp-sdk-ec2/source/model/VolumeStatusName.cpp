/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/VolumeStatusName.h>
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
      namespace VolumeStatusNameMapper
      {

        static const int io_enabled_HASH = HashingUtils::HashString("io-enabled");
        static const int io_performance_HASH = HashingUtils::HashString("io-performance");
        static const int initialization_state_HASH = HashingUtils::HashString("initialization-state");


        VolumeStatusName GetVolumeStatusNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == io_enabled_HASH)
          {
            return VolumeStatusName::io_enabled;
          }
          else if (hashCode == io_performance_HASH)
          {
            return VolumeStatusName::io_performance;
          }
          else if (hashCode == initialization_state_HASH)
          {
            return VolumeStatusName::initialization_state;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VolumeStatusName>(hashCode);
          }

          return VolumeStatusName::NOT_SET;
        }

        Aws::String GetNameForVolumeStatusName(VolumeStatusName enumValue)
        {
          switch(enumValue)
          {
          case VolumeStatusName::NOT_SET:
            return {};
          case VolumeStatusName::io_enabled:
            return "io-enabled";
          case VolumeStatusName::io_performance:
            return "io-performance";
          case VolumeStatusName::initialization_state:
            return "initialization-state";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VolumeStatusNameMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
