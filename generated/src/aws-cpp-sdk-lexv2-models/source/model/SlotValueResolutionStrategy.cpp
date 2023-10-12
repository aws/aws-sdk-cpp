/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/SlotValueResolutionStrategy.h>
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
      namespace SlotValueResolutionStrategyMapper
      {

        static constexpr uint32_t OriginalValue_HASH = ConstExprHashingUtils::HashString("OriginalValue");
        static constexpr uint32_t TopResolution_HASH = ConstExprHashingUtils::HashString("TopResolution");
        static constexpr uint32_t Concatenation_HASH = ConstExprHashingUtils::HashString("Concatenation");


        SlotValueResolutionStrategy GetSlotValueResolutionStrategyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OriginalValue_HASH)
          {
            return SlotValueResolutionStrategy::OriginalValue;
          }
          else if (hashCode == TopResolution_HASH)
          {
            return SlotValueResolutionStrategy::TopResolution;
          }
          else if (hashCode == Concatenation_HASH)
          {
            return SlotValueResolutionStrategy::Concatenation;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SlotValueResolutionStrategy>(hashCode);
          }

          return SlotValueResolutionStrategy::NOT_SET;
        }

        Aws::String GetNameForSlotValueResolutionStrategy(SlotValueResolutionStrategy enumValue)
        {
          switch(enumValue)
          {
          case SlotValueResolutionStrategy::NOT_SET:
            return {};
          case SlotValueResolutionStrategy::OriginalValue:
            return "OriginalValue";
          case SlotValueResolutionStrategy::TopResolution:
            return "TopResolution";
          case SlotValueResolutionStrategy::Concatenation:
            return "Concatenation";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SlotValueResolutionStrategyMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
