﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/PositionConfigurationStatus.h>
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
      namespace PositionConfigurationStatusMapper
      {

        static const int Enabled_HASH = HashingUtils::HashString("Enabled");
        static const int Disabled_HASH = HashingUtils::HashString("Disabled");


        PositionConfigurationStatus GetPositionConfigurationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Enabled_HASH)
          {
            return PositionConfigurationStatus::Enabled;
          }
          else if (hashCode == Disabled_HASH)
          {
            return PositionConfigurationStatus::Disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PositionConfigurationStatus>(hashCode);
          }

          return PositionConfigurationStatus::NOT_SET;
        }

        Aws::String GetNameForPositionConfigurationStatus(PositionConfigurationStatus enumValue)
        {
          switch(enumValue)
          {
          case PositionConfigurationStatus::NOT_SET:
            return {};
          case PositionConfigurationStatus::Enabled:
            return "Enabled";
          case PositionConfigurationStatus::Disabled:
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

      } // namespace PositionConfigurationStatusMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
