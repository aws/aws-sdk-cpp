/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-dashboards/model/DashboardType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BCMDashboards
  {
    namespace Model
    {
      namespace DashboardTypeMapper
      {

        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");


        DashboardType GetDashboardTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CUSTOM_HASH)
          {
            return DashboardType::CUSTOM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DashboardType>(hashCode);
          }

          return DashboardType::NOT_SET;
        }

        Aws::String GetNameForDashboardType(DashboardType enumValue)
        {
          switch(enumValue)
          {
          case DashboardType::NOT_SET:
            return {};
          case DashboardType::CUSTOM:
            return "CUSTOM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DashboardTypeMapper
    } // namespace Model
  } // namespace BCMDashboards
} // namespace Aws
