/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/IntentState.h>
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
      namespace IntentStateMapper
      {

        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Fulfilled_HASH = HashingUtils::HashString("Fulfilled");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int ReadyForFulfillment_HASH = HashingUtils::HashString("ReadyForFulfillment");
        static const int Waiting_HASH = HashingUtils::HashString("Waiting");
        static const int FulfillmentInProgress_HASH = HashingUtils::HashString("FulfillmentInProgress");


        IntentState GetIntentStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Failed_HASH)
          {
            return IntentState::Failed;
          }
          else if (hashCode == Fulfilled_HASH)
          {
            return IntentState::Fulfilled;
          }
          else if (hashCode == InProgress_HASH)
          {
            return IntentState::InProgress;
          }
          else if (hashCode == ReadyForFulfillment_HASH)
          {
            return IntentState::ReadyForFulfillment;
          }
          else if (hashCode == Waiting_HASH)
          {
            return IntentState::Waiting;
          }
          else if (hashCode == FulfillmentInProgress_HASH)
          {
            return IntentState::FulfillmentInProgress;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IntentState>(hashCode);
          }

          return IntentState::NOT_SET;
        }

        Aws::String GetNameForIntentState(IntentState enumValue)
        {
          switch(enumValue)
          {
          case IntentState::NOT_SET:
            return {};
          case IntentState::Failed:
            return "Failed";
          case IntentState::Fulfilled:
            return "Fulfilled";
          case IntentState::InProgress:
            return "InProgress";
          case IntentState::ReadyForFulfillment:
            return "ReadyForFulfillment";
          case IntentState::Waiting:
            return "Waiting";
          case IntentState::FulfillmentInProgress:
            return "FulfillmentInProgress";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IntentStateMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
