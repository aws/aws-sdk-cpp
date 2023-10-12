/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/UpdateReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTTwinMaker
  {
    namespace Model
    {
      namespace UpdateReasonMapper
      {

        static constexpr uint32_t DEFAULT_HASH = ConstExprHashingUtils::HashString("DEFAULT");
        static constexpr uint32_t PRICING_TIER_UPDATE_HASH = ConstExprHashingUtils::HashString("PRICING_TIER_UPDATE");
        static constexpr uint32_t ENTITY_COUNT_UPDATE_HASH = ConstExprHashingUtils::HashString("ENTITY_COUNT_UPDATE");
        static constexpr uint32_t PRICING_MODE_UPDATE_HASH = ConstExprHashingUtils::HashString("PRICING_MODE_UPDATE");
        static constexpr uint32_t OVERWRITTEN_HASH = ConstExprHashingUtils::HashString("OVERWRITTEN");


        UpdateReason GetUpdateReasonForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_HASH)
          {
            return UpdateReason::DEFAULT;
          }
          else if (hashCode == PRICING_TIER_UPDATE_HASH)
          {
            return UpdateReason::PRICING_TIER_UPDATE;
          }
          else if (hashCode == ENTITY_COUNT_UPDATE_HASH)
          {
            return UpdateReason::ENTITY_COUNT_UPDATE;
          }
          else if (hashCode == PRICING_MODE_UPDATE_HASH)
          {
            return UpdateReason::PRICING_MODE_UPDATE;
          }
          else if (hashCode == OVERWRITTEN_HASH)
          {
            return UpdateReason::OVERWRITTEN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpdateReason>(hashCode);
          }

          return UpdateReason::NOT_SET;
        }

        Aws::String GetNameForUpdateReason(UpdateReason enumValue)
        {
          switch(enumValue)
          {
          case UpdateReason::NOT_SET:
            return {};
          case UpdateReason::DEFAULT:
            return "DEFAULT";
          case UpdateReason::PRICING_TIER_UPDATE:
            return "PRICING_TIER_UPDATE";
          case UpdateReason::ENTITY_COUNT_UPDATE:
            return "ENTITY_COUNT_UPDATE";
          case UpdateReason::PRICING_MODE_UPDATE:
            return "PRICING_MODE_UPDATE";
          case UpdateReason::OVERWRITTEN:
            return "OVERWRITTEN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UpdateReasonMapper
    } // namespace Model
  } // namespace IoTTwinMaker
} // namespace Aws
