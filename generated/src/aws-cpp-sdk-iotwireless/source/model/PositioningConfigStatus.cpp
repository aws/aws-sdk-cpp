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

        static constexpr uint32_t Enabled_HASH = ConstExprHashingUtils::HashString("Enabled");
        static constexpr uint32_t Disabled_HASH = ConstExprHashingUtils::HashString("Disabled");


        PositioningConfigStatus GetPositioningConfigStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case PositioningConfigStatus::NOT_SET:
            return {};
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
