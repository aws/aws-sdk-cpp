/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/State.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataExchange
  {
    namespace Model
    {
      namespace StateMapper
      {

        static const int WAITING_HASH = HashingUtils::HashString("WAITING");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");


        State GetStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WAITING_HASH)
          {
            return State::WAITING;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return State::IN_PROGRESS;
          }
          else if (hashCode == ERROR__HASH)
          {
            return State::ERROR_;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return State::COMPLETED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return State::CANCELLED;
          }
          else if (hashCode == TIMED_OUT_HASH)
          {
            return State::TIMED_OUT;
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
          case State::WAITING:
            return "WAITING";
          case State::IN_PROGRESS:
            return "IN_PROGRESS";
          case State::ERROR_:
            return "ERROR";
          case State::COMPLETED:
            return "COMPLETED";
          case State::CANCELLED:
            return "CANCELLED";
          case State::TIMED_OUT:
            return "TIMED_OUT";
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
  } // namespace DataExchange
} // namespace Aws
