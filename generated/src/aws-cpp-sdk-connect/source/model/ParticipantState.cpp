/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ParticipantState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace ParticipantStateMapper
      {

        static const int INITIAL_HASH = HashingUtils::HashString("INITIAL");
        static const int CONNECTED_HASH = HashingUtils::HashString("CONNECTED");
        static const int DISCONNECTED_HASH = HashingUtils::HashString("DISCONNECTED");
        static const int MISSED_HASH = HashingUtils::HashString("MISSED");


        ParticipantState GetParticipantStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INITIAL_HASH)
          {
            return ParticipantState::INITIAL;
          }
          else if (hashCode == CONNECTED_HASH)
          {
            return ParticipantState::CONNECTED;
          }
          else if (hashCode == DISCONNECTED_HASH)
          {
            return ParticipantState::DISCONNECTED;
          }
          else if (hashCode == MISSED_HASH)
          {
            return ParticipantState::MISSED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParticipantState>(hashCode);
          }

          return ParticipantState::NOT_SET;
        }

        Aws::String GetNameForParticipantState(ParticipantState enumValue)
        {
          switch(enumValue)
          {
          case ParticipantState::NOT_SET:
            return {};
          case ParticipantState::INITIAL:
            return "INITIAL";
          case ParticipantState::CONNECTED:
            return "CONNECTED";
          case ParticipantState::DISCONNECTED:
            return "DISCONNECTED";
          case ParticipantState::MISSED:
            return "MISSED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ParticipantStateMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
