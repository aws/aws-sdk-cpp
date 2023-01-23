/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex/model/FulfillmentState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexRuntimeService
  {
    namespace Model
    {
      namespace FulfillmentStateMapper
      {

        static const int Fulfilled_HASH = HashingUtils::HashString("Fulfilled");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int ReadyForFulfillment_HASH = HashingUtils::HashString("ReadyForFulfillment");


        FulfillmentState GetFulfillmentStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Fulfilled_HASH)
          {
            return FulfillmentState::Fulfilled;
          }
          else if (hashCode == Failed_HASH)
          {
            return FulfillmentState::Failed;
          }
          else if (hashCode == ReadyForFulfillment_HASH)
          {
            return FulfillmentState::ReadyForFulfillment;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FulfillmentState>(hashCode);
          }

          return FulfillmentState::NOT_SET;
        }

        Aws::String GetNameForFulfillmentState(FulfillmentState enumValue)
        {
          switch(enumValue)
          {
          case FulfillmentState::Fulfilled:
            return "Fulfilled";
          case FulfillmentState::Failed:
            return "Failed";
          case FulfillmentState::ReadyForFulfillment:
            return "ReadyForFulfillment";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FulfillmentStateMapper
    } // namespace Model
  } // namespace LexRuntimeService
} // namespace Aws
