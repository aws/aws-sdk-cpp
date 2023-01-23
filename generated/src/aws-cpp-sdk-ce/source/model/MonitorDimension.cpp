/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/MonitorDimension.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostExplorer
  {
    namespace Model
    {
      namespace MonitorDimensionMapper
      {

        static const int SERVICE_HASH = HashingUtils::HashString("SERVICE");


        MonitorDimension GetMonitorDimensionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SERVICE_HASH)
          {
            return MonitorDimension::SERVICE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MonitorDimension>(hashCode);
          }

          return MonitorDimension::NOT_SET;
        }

        Aws::String GetNameForMonitorDimension(MonitorDimension enumValue)
        {
          switch(enumValue)
          {
          case MonitorDimension::SERVICE:
            return "SERVICE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MonitorDimensionMapper
    } // namespace Model
  } // namespace CostExplorer
} // namespace Aws
