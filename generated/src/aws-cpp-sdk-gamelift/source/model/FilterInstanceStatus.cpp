/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/FilterInstanceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLift
  {
    namespace Model
    {
      namespace FilterInstanceStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DRAINING_HASH = HashingUtils::HashString("DRAINING");


        FilterInstanceStatus GetFilterInstanceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return FilterInstanceStatus::ACTIVE;
          }
          else if (hashCode == DRAINING_HASH)
          {
            return FilterInstanceStatus::DRAINING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FilterInstanceStatus>(hashCode);
          }

          return FilterInstanceStatus::NOT_SET;
        }

        Aws::String GetNameForFilterInstanceStatus(FilterInstanceStatus enumValue)
        {
          switch(enumValue)
          {
          case FilterInstanceStatus::NOT_SET:
            return {};
          case FilterInstanceStatus::ACTIVE:
            return "ACTIVE";
          case FilterInstanceStatus::DRAINING:
            return "DRAINING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FilterInstanceStatusMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
