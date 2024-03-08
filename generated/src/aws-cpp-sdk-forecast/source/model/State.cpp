/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/State.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ForecastService
  {
    namespace Model
    {
      namespace StateMapper
      {

        static const int Active_HASH = HashingUtils::HashString("Active");
        static const int Deleted_HASH = HashingUtils::HashString("Deleted");


        State GetStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Active_HASH)
          {
            return State::Active;
          }
          else if (hashCode == Deleted_HASH)
          {
            return State::Deleted;
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
          case State::Deleted:
            return "Deleted";
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
  } // namespace ForecastService
} // namespace Aws
