/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/EnableSetting.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace EnableSettingMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        EnableSetting GetEnableSettingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return EnableSetting::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return EnableSetting::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnableSetting>(hashCode);
          }

          return EnableSetting::NOT_SET;
        }

        Aws::String GetNameForEnableSetting(EnableSetting enumValue)
        {
          switch(enumValue)
          {
          case EnableSetting::NOT_SET:
            return {};
          case EnableSetting::ENABLED:
            return "ENABLED";
          case EnableSetting::DISABLED:
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

      } // namespace EnableSettingMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
