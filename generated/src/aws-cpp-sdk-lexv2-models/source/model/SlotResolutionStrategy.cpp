/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/SlotResolutionStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelsV2
  {
    namespace Model
    {
      namespace SlotResolutionStrategyMapper
      {

        static const int EnhancedFallback_HASH = HashingUtils::HashString("EnhancedFallback");
        static const int Default_HASH = HashingUtils::HashString("Default");


        SlotResolutionStrategy GetSlotResolutionStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EnhancedFallback_HASH)
          {
            return SlotResolutionStrategy::EnhancedFallback;
          }
          else if (hashCode == Default_HASH)
          {
            return SlotResolutionStrategy::Default;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SlotResolutionStrategy>(hashCode);
          }

          return SlotResolutionStrategy::NOT_SET;
        }

        Aws::String GetNameForSlotResolutionStrategy(SlotResolutionStrategy enumValue)
        {
          switch(enumValue)
          {
          case SlotResolutionStrategy::NOT_SET:
            return {};
          case SlotResolutionStrategy::EnhancedFallback:
            return "EnhancedFallback";
          case SlotResolutionStrategy::Default:
            return "Default";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SlotResolutionStrategyMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
