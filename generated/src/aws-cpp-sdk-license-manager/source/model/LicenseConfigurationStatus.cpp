/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/LicenseConfigurationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LicenseManager
  {
    namespace Model
    {
      namespace LicenseConfigurationStatusMapper
      {

        static constexpr uint32_t AVAILABLE_HASH = ConstExprHashingUtils::HashString("AVAILABLE");
        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");


        LicenseConfigurationStatus GetLicenseConfigurationStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return LicenseConfigurationStatus::AVAILABLE;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return LicenseConfigurationStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LicenseConfigurationStatus>(hashCode);
          }

          return LicenseConfigurationStatus::NOT_SET;
        }

        Aws::String GetNameForLicenseConfigurationStatus(LicenseConfigurationStatus enumValue)
        {
          switch(enumValue)
          {
          case LicenseConfigurationStatus::NOT_SET:
            return {};
          case LicenseConfigurationStatus::AVAILABLE:
            return "AVAILABLE";
          case LicenseConfigurationStatus::DISABLED:
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

      } // namespace LicenseConfigurationStatusMapper
    } // namespace Model
  } // namespace LicenseManager
} // namespace Aws
