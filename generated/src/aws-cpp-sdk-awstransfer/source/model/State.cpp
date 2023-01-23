/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/State.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Transfer
  {
    namespace Model
    {
      namespace StateMapper
      {

        static const int OFFLINE_HASH = HashingUtils::HashString("OFFLINE");
        static const int ONLINE_HASH = HashingUtils::HashString("ONLINE");
        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int START_FAILED_HASH = HashingUtils::HashString("START_FAILED");
        static const int STOP_FAILED_HASH = HashingUtils::HashString("STOP_FAILED");


        State GetStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OFFLINE_HASH)
          {
            return State::OFFLINE;
          }
          else if (hashCode == ONLINE_HASH)
          {
            return State::ONLINE;
          }
          else if (hashCode == STARTING_HASH)
          {
            return State::STARTING;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return State::STOPPING;
          }
          else if (hashCode == START_FAILED_HASH)
          {
            return State::START_FAILED;
          }
          else if (hashCode == STOP_FAILED_HASH)
          {
            return State::STOP_FAILED;
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
          case State::OFFLINE:
            return "OFFLINE";
          case State::ONLINE:
            return "ONLINE";
          case State::STARTING:
            return "STARTING";
          case State::STOPPING:
            return "STOPPING";
          case State::START_FAILED:
            return "START_FAILED";
          case State::STOP_FAILED:
            return "STOP_FAILED";
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
  } // namespace Transfer
} // namespace Aws
