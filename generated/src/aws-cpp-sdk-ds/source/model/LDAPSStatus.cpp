/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/LDAPSStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectoryService
  {
    namespace Model
    {
      namespace LDAPSStatusMapper
      {

        static constexpr uint32_t Enabling_HASH = ConstExprHashingUtils::HashString("Enabling");
        static constexpr uint32_t Enabled_HASH = ConstExprHashingUtils::HashString("Enabled");
        static constexpr uint32_t EnableFailed_HASH = ConstExprHashingUtils::HashString("EnableFailed");
        static constexpr uint32_t Disabled_HASH = ConstExprHashingUtils::HashString("Disabled");


        LDAPSStatus GetLDAPSStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Enabling_HASH)
          {
            return LDAPSStatus::Enabling;
          }
          else if (hashCode == Enabled_HASH)
          {
            return LDAPSStatus::Enabled;
          }
          else if (hashCode == EnableFailed_HASH)
          {
            return LDAPSStatus::EnableFailed;
          }
          else if (hashCode == Disabled_HASH)
          {
            return LDAPSStatus::Disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LDAPSStatus>(hashCode);
          }

          return LDAPSStatus::NOT_SET;
        }

        Aws::String GetNameForLDAPSStatus(LDAPSStatus enumValue)
        {
          switch(enumValue)
          {
          case LDAPSStatus::NOT_SET:
            return {};
          case LDAPSStatus::Enabling:
            return "Enabling";
          case LDAPSStatus::Enabled:
            return "Enabled";
          case LDAPSStatus::EnableFailed:
            return "EnableFailed";
          case LDAPSStatus::Disabled:
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

      } // namespace LDAPSStatusMapper
    } // namespace Model
  } // namespace DirectoryService
} // namespace Aws
