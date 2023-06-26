/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ThingConnectivityIndexingMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace ThingConnectivityIndexingModeMapper
      {

        static const int OFF_HASH = HashingUtils::HashString("OFF");
        static const int STATUS_HASH = HashingUtils::HashString("STATUS");


        ThingConnectivityIndexingMode GetThingConnectivityIndexingModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OFF_HASH)
          {
            return ThingConnectivityIndexingMode::OFF;
          }
          else if (hashCode == STATUS_HASH)
          {
            return ThingConnectivityIndexingMode::STATUS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ThingConnectivityIndexingMode>(hashCode);
          }

          return ThingConnectivityIndexingMode::NOT_SET;
        }

        Aws::String GetNameForThingConnectivityIndexingMode(ThingConnectivityIndexingMode enumValue)
        {
          switch(enumValue)
          {
          case ThingConnectivityIndexingMode::OFF:
            return "OFF";
          case ThingConnectivityIndexingMode::STATUS:
            return "STATUS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ThingConnectivityIndexingModeMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
