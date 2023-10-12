/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ThingIndexingMode.h>
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
      namespace ThingIndexingModeMapper
      {

        static constexpr uint32_t OFF_HASH = ConstExprHashingUtils::HashString("OFF");
        static constexpr uint32_t REGISTRY_HASH = ConstExprHashingUtils::HashString("REGISTRY");
        static constexpr uint32_t REGISTRY_AND_SHADOW_HASH = ConstExprHashingUtils::HashString("REGISTRY_AND_SHADOW");


        ThingIndexingMode GetThingIndexingModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OFF_HASH)
          {
            return ThingIndexingMode::OFF;
          }
          else if (hashCode == REGISTRY_HASH)
          {
            return ThingIndexingMode::REGISTRY;
          }
          else if (hashCode == REGISTRY_AND_SHADOW_HASH)
          {
            return ThingIndexingMode::REGISTRY_AND_SHADOW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ThingIndexingMode>(hashCode);
          }

          return ThingIndexingMode::NOT_SET;
        }

        Aws::String GetNameForThingIndexingMode(ThingIndexingMode enumValue)
        {
          switch(enumValue)
          {
          case ThingIndexingMode::NOT_SET:
            return {};
          case ThingIndexingMode::OFF:
            return "OFF";
          case ThingIndexingMode::REGISTRY:
            return "REGISTRY";
          case ThingIndexingMode::REGISTRY_AND_SHADOW:
            return "REGISTRY_AND_SHADOW";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ThingIndexingModeMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
