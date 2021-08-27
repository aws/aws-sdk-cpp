/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/State.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Pinpoint
  {
    namespace Model
    {
      namespace StateMapper
      {

        static const int DRAFT_HASH = HashingUtils::HashString("DRAFT");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int CLOSED_HASH = HashingUtils::HashString("CLOSED");


        State GetStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DRAFT_HASH)
          {
            return State::DRAFT;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return State::ACTIVE;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return State::COMPLETED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return State::CANCELLED;
          }
          else if (hashCode == CLOSED_HASH)
          {
            return State::CLOSED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<State>(hashCode);
          }

          return State::NOT_SET;
        }

        Aws::String GetNameForState(State enumValue)
        {
          switch(enumValue)
          {
          case State::DRAFT:
            return "DRAFT";
          case State::ACTIVE:
            return "ACTIVE";
          case State::COMPLETED:
            return "COMPLETED";
          case State::CANCELLED:
            return "CANCELLED";
          case State::CLOSED:
            return "CLOSED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StateMapper
    } // namespace Model
  } // namespace Pinpoint
} // namespace Aws
