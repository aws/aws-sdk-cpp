/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ConversationEndState.h>
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
      namespace ConversationEndStateMapper
      {

        static const int Success_HASH = HashingUtils::HashString("Success");
        static const int Failure_HASH = HashingUtils::HashString("Failure");
        static const int Dropped_HASH = HashingUtils::HashString("Dropped");


        ConversationEndState GetConversationEndStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Success_HASH)
          {
            return ConversationEndState::Success;
          }
          else if (hashCode == Failure_HASH)
          {
            return ConversationEndState::Failure;
          }
          else if (hashCode == Dropped_HASH)
          {
            return ConversationEndState::Dropped;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConversationEndState>(hashCode);
          }

          return ConversationEndState::NOT_SET;
        }

        Aws::String GetNameForConversationEndState(ConversationEndState enumValue)
        {
          switch(enumValue)
          {
          case ConversationEndState::NOT_SET:
            return {};
          case ConversationEndState::Success:
            return "Success";
          case ConversationEndState::Failure:
            return "Failure";
          case ConversationEndState::Dropped:
            return "Dropped";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConversationEndStateMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
