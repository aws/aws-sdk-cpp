/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ParticipantTimerAction.h>
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
      namespace ParticipantTimerActionMapper
      {

        static const int Unset_HASH = HashingUtils::HashString("Unset");


        ParticipantTimerAction GetParticipantTimerActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Unset_HASH)
          {
            return ParticipantTimerAction::Unset;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParticipantTimerAction>(hashCode);
          }

          return ParticipantTimerAction::NOT_SET;
        }

        Aws::String GetNameForParticipantTimerAction(ParticipantTimerAction enumValue)
        {
          switch(enumValue)
          {
          case ParticipantTimerAction::Unset:
            return "Unset";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ParticipantTimerActionMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
