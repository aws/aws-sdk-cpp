/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/MacSystemIntegrityProtectionSettingStatus.h>
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
      namespace MacSystemIntegrityProtectionSettingStatusMapper
      {

        static const int enabled_HASH = HashingUtils::HashString("enabled");
        static const int disabled_HASH = HashingUtils::HashString("disabled");


        MacSystemIntegrityProtectionSettingStatus GetMacSystemIntegrityProtectionSettingStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == enabled_HASH)
          {
            return MacSystemIntegrityProtectionSettingStatus::enabled;
          }
          else if (hashCode == disabled_HASH)
          {
            return MacSystemIntegrityProtectionSettingStatus::disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MacSystemIntegrityProtectionSettingStatus>(hashCode);
          }

          return MacSystemIntegrityProtectionSettingStatus::NOT_SET;
        }

        Aws::String GetNameForMacSystemIntegrityProtectionSettingStatus(MacSystemIntegrityProtectionSettingStatus enumValue)
        {
          switch(enumValue)
          {
          case MacSystemIntegrityProtectionSettingStatus::NOT_SET:
            return {};
          case MacSystemIntegrityProtectionSettingStatus::enabled:
            return "enabled";
          case MacSystemIntegrityProtectionSettingStatus::disabled:
            return "disabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MacSystemIntegrityProtectionSettingStatusMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
