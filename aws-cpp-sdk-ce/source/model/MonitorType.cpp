/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/MonitorType.h>
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
      namespace MonitorTypeMapper
      {

        static const int DIMENSIONAL_HASH = HashingUtils::HashString("DIMENSIONAL");
        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");


        MonitorType GetMonitorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DIMENSIONAL_HASH)
          {
            return MonitorType::DIMENSIONAL;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return MonitorType::CUSTOM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MonitorType>(hashCode);
          }

          return MonitorType::NOT_SET;
        }

        Aws::String GetNameForMonitorType(MonitorType enumValue)
        {
          switch(enumValue)
          {
          case MonitorType::DIMENSIONAL:
            return "DIMENSIONAL";
          case MonitorType::CUSTOM:
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

      } // namespace MonitorTypeMapper
    } // namespace Model
  } // namespace CostExplorer
} // namespace Aws
