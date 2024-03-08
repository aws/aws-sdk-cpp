/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/grafana/model/LicenseType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ManagedGrafana
  {
    namespace Model
    {
      namespace LicenseTypeMapper
      {

        static const int ENTERPRISE_HASH = HashingUtils::HashString("ENTERPRISE");
        static const int ENTERPRISE_FREE_TRIAL_HASH = HashingUtils::HashString("ENTERPRISE_FREE_TRIAL");


        LicenseType GetLicenseTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENTERPRISE_HASH)
          {
            return LicenseType::ENTERPRISE;
          }
          else if (hashCode == ENTERPRISE_FREE_TRIAL_HASH)
          {
            return LicenseType::ENTERPRISE_FREE_TRIAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LicenseType>(hashCode);
          }

          return LicenseType::NOT_SET;
        }

        Aws::String GetNameForLicenseType(LicenseType enumValue)
        {
          switch(enumValue)
          {
          case LicenseType::NOT_SET:
            return {};
          case LicenseType::ENTERPRISE:
            return "ENTERPRISE";
          case LicenseType::ENTERPRISE_FREE_TRIAL:
            return "ENTERPRISE_FREE_TRIAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LicenseTypeMapper
    } // namespace Model
  } // namespace ManagedGrafana
} // namespace Aws
