/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/TimeToLiveStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DynamoDB
  {
    namespace Model
    {
      namespace TimeToLiveStatusMapper
      {

        static const int ENABLING_HASH = HashingUtils::HashString("ENABLING");
        static const int DISABLING_HASH = HashingUtils::HashString("DISABLING");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        TimeToLiveStatus GetTimeToLiveStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLING_HASH)
          {
            return TimeToLiveStatus::ENABLING;
          }
          else if (hashCode == DISABLING_HASH)
          {
            return TimeToLiveStatus::DISABLING;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return TimeToLiveStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return TimeToLiveStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TimeToLiveStatus>(hashCode);
          }

          return TimeToLiveStatus::NOT_SET;
        }

        Aws::String GetNameForTimeToLiveStatus(TimeToLiveStatus enumValue)
        {
          switch(enumValue)
          {
          case TimeToLiveStatus::ENABLING:
            return "ENABLING";
          case TimeToLiveStatus::DISABLING:
            return "DISABLING";
          case TimeToLiveStatus::ENABLED:
            return "ENABLED";
          case TimeToLiveStatus::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TimeToLiveStatusMapper
    } // namespace Model
  } // namespace DynamoDB
} // namespace Aws
