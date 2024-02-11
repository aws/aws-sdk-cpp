/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/MulticastFrameInfo.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTWireless
  {
    namespace Model
    {
      namespace MulticastFrameInfoMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        MulticastFrameInfo GetMulticastFrameInfoForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return MulticastFrameInfo::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return MulticastFrameInfo::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MulticastFrameInfo>(hashCode);
          }

          return MulticastFrameInfo::NOT_SET;
        }

        Aws::String GetNameForMulticastFrameInfo(MulticastFrameInfo enumValue)
        {
          switch(enumValue)
          {
          case MulticastFrameInfo::NOT_SET:
            return {};
          case MulticastFrameInfo::ENABLED:
            return "ENABLED";
          case MulticastFrameInfo::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MulticastFrameInfoMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
