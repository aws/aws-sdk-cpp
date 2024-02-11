/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/ParticipantState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ivsrealtime
  {
    namespace Model
    {
      namespace ParticipantStateMapper
      {

        static const int CONNECTED_HASH = HashingUtils::HashString("CONNECTED");
        static const int DISCONNECTED_HASH = HashingUtils::HashString("DISCONNECTED");


        ParticipantState GetParticipantStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONNECTED_HASH)
          {
            return ParticipantState::CONNECTED;
          }
          else if (hashCode == DISCONNECTED_HASH)
          {
            return ParticipantState::DISCONNECTED;
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
          case ParticipantState::CONNECTED:
            return "CONNECTED";
          case ParticipantState::DISCONNECTED:
            return "DISCONNECTED";
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
  } // namespace ivsrealtime
} // namespace Aws
