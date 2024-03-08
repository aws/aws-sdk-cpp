/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/State.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchLogs
  {
    namespace Model
    {
      namespace StateMapper
      {

        static const int Active_HASH = HashingUtils::HashString("Active");
        static const int Suppressed_HASH = HashingUtils::HashString("Suppressed");
        static const int Baseline_HASH = HashingUtils::HashString("Baseline");


        State GetStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Active_HASH)
          {
            return State::Active;
          }
          else if (hashCode == Suppressed_HASH)
          {
            return State::Suppressed;
          }
          else if (hashCode == Baseline_HASH)
          {
            return State::Baseline;
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
          case State::Active:
            return "Active";
          case State::Suppressed:
            return "Suppressed";
          case State::Baseline:
            return "Baseline";
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
  } // namespace CloudWatchLogs
} // namespace Aws
