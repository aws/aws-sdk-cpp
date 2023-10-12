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

        static constexpr uint32_t WAITING_HASH = ConstExprHashingUtils::HashString("WAITING");
        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t CANCELLED_HASH = ConstExprHashingUtils::HashString("CANCELLED");
        static constexpr uint32_t TIMED_OUT_HASH = ConstExprHashingUtils::HashString("TIMED_OUT");


        State GetStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case State::NOT_SET:
            return {};
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
