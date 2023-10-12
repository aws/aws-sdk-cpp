/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/FulfillmentActivityType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelBuildingService
  {
    namespace Model
    {
      namespace FulfillmentActivityTypeMapper
      {

        static constexpr uint32_t ReturnIntent_HASH = ConstExprHashingUtils::HashString("ReturnIntent");
        static constexpr uint32_t CodeHook_HASH = ConstExprHashingUtils::HashString("CodeHook");


        FulfillmentActivityType GetFulfillmentActivityTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ReturnIntent_HASH)
          {
            return FulfillmentActivityType::ReturnIntent;
          }
          else if (hashCode == CodeHook_HASH)
          {
            return FulfillmentActivityType::CodeHook;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FulfillmentActivityType>(hashCode);
          }

          return FulfillmentActivityType::NOT_SET;
        }

        Aws::String GetNameForFulfillmentActivityType(FulfillmentActivityType enumValue)
        {
          switch(enumValue)
          {
          case FulfillmentActivityType::NOT_SET:
            return {};
          case FulfillmentActivityType::ReturnIntent:
            return "ReturnIntent";
          case FulfillmentActivityType::CodeHook:
            return "CodeHook";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FulfillmentActivityTypeMapper
    } // namespace Model
  } // namespace LexModelBuildingService
} // namespace Aws
