/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/AutoPromotionResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LookoutEquipment
  {
    namespace Model
    {
      namespace AutoPromotionResultMapper
      {

        static constexpr uint32_t MODEL_PROMOTED_HASH = ConstExprHashingUtils::HashString("MODEL_PROMOTED");
        static constexpr uint32_t MODEL_NOT_PROMOTED_HASH = ConstExprHashingUtils::HashString("MODEL_NOT_PROMOTED");
        static constexpr uint32_t RETRAINING_INTERNAL_ERROR_HASH = ConstExprHashingUtils::HashString("RETRAINING_INTERNAL_ERROR");
        static constexpr uint32_t RETRAINING_CUSTOMER_ERROR_HASH = ConstExprHashingUtils::HashString("RETRAINING_CUSTOMER_ERROR");
        static constexpr uint32_t RETRAINING_CANCELLED_HASH = ConstExprHashingUtils::HashString("RETRAINING_CANCELLED");


        AutoPromotionResult GetAutoPromotionResultForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MODEL_PROMOTED_HASH)
          {
            return AutoPromotionResult::MODEL_PROMOTED;
          }
          else if (hashCode == MODEL_NOT_PROMOTED_HASH)
          {
            return AutoPromotionResult::MODEL_NOT_PROMOTED;
          }
          else if (hashCode == RETRAINING_INTERNAL_ERROR_HASH)
          {
            return AutoPromotionResult::RETRAINING_INTERNAL_ERROR;
          }
          else if (hashCode == RETRAINING_CUSTOMER_ERROR_HASH)
          {
            return AutoPromotionResult::RETRAINING_CUSTOMER_ERROR;
          }
          else if (hashCode == RETRAINING_CANCELLED_HASH)
          {
            return AutoPromotionResult::RETRAINING_CANCELLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoPromotionResult>(hashCode);
          }

          return AutoPromotionResult::NOT_SET;
        }

        Aws::String GetNameForAutoPromotionResult(AutoPromotionResult enumValue)
        {
          switch(enumValue)
          {
          case AutoPromotionResult::NOT_SET:
            return {};
          case AutoPromotionResult::MODEL_PROMOTED:
            return "MODEL_PROMOTED";
          case AutoPromotionResult::MODEL_NOT_PROMOTED:
            return "MODEL_NOT_PROMOTED";
          case AutoPromotionResult::RETRAINING_INTERNAL_ERROR:
            return "RETRAINING_INTERNAL_ERROR";
          case AutoPromotionResult::RETRAINING_CUSTOMER_ERROR:
            return "RETRAINING_CUSTOMER_ERROR";
          case AutoPromotionResult::RETRAINING_CANCELLED:
            return "RETRAINING_CANCELLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoPromotionResultMapper
    } // namespace Model
  } // namespace LookoutEquipment
} // namespace Aws
