/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CisScanConfigurationsSortBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace CisScanConfigurationsSortByMapper
      {

        static const int SCAN_NAME_HASH = HashingUtils::HashString("SCAN_NAME");
        static const int SCAN_CONFIGURATION_ARN_HASH = HashingUtils::HashString("SCAN_CONFIGURATION_ARN");


        CisScanConfigurationsSortBy GetCisScanConfigurationsSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SCAN_NAME_HASH)
          {
            return CisScanConfigurationsSortBy::SCAN_NAME;
          }
          else if (hashCode == SCAN_CONFIGURATION_ARN_HASH)
          {
            return CisScanConfigurationsSortBy::SCAN_CONFIGURATION_ARN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CisScanConfigurationsSortBy>(hashCode);
          }

          return CisScanConfigurationsSortBy::NOT_SET;
        }

        Aws::String GetNameForCisScanConfigurationsSortBy(CisScanConfigurationsSortBy enumValue)
        {
          switch(enumValue)
          {
          case CisScanConfigurationsSortBy::NOT_SET:
            return {};
          case CisScanConfigurationsSortBy::SCAN_NAME:
            return "SCAN_NAME";
          case CisScanConfigurationsSortBy::SCAN_CONFIGURATION_ARN:
            return "SCAN_CONFIGURATION_ARN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CisScanConfigurationsSortByMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
