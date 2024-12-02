/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AllowedImagesSettingsEnabledState.h>
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
      namespace AllowedImagesSettingsEnabledStateMapper
      {

        static const int enabled_HASH = HashingUtils::HashString("enabled");
        static const int audit_mode_HASH = HashingUtils::HashString("audit-mode");


        AllowedImagesSettingsEnabledState GetAllowedImagesSettingsEnabledStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == enabled_HASH)
          {
            return AllowedImagesSettingsEnabledState::enabled;
          }
          else if (hashCode == audit_mode_HASH)
          {
            return AllowedImagesSettingsEnabledState::audit_mode;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AllowedImagesSettingsEnabledState>(hashCode);
          }

          return AllowedImagesSettingsEnabledState::NOT_SET;
        }

        Aws::String GetNameForAllowedImagesSettingsEnabledState(AllowedImagesSettingsEnabledState enumValue)
        {
          switch(enumValue)
          {
          case AllowedImagesSettingsEnabledState::NOT_SET:
            return {};
          case AllowedImagesSettingsEnabledState::enabled:
            return "enabled";
          case AllowedImagesSettingsEnabledState::audit_mode:
            return "audit-mode";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AllowedImagesSettingsEnabledStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
