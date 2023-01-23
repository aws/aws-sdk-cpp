/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/PositioningConfigStatus.h>
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
      namespace PositioningConfigStatusMapper
      {

        static const int Enabled_HASH = HashingUtils::HashString("Enabled");
        static const int Disabled_HASH = HashingUtils::HashString("Disabled");


        PositioningConfigStatus GetPositioningConfigStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Enabled_HASH)
          {
            return PositioningConfigStatus::Enabled;
          }
          else if (hashCode == Disabled_HASH)
          {
            return PositioningConfigStatus::Disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PositioningConfigStatus>(hashCode);
          }

          return PositioningConfigStatus::NOT_SET;
        }

        Aws::String GetNameForPositioningConfigStatus(PositioningConfigStatus enumValue)
        {
          switch(enumValue)
          {
          case PositioningConfigStatus::Enabled:
            return "Enabled";
          case PositioningConfigStatus::Disabled:
            return "Disabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PositioningConfigStatusMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
