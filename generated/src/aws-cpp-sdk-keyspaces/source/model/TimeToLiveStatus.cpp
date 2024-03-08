/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/model/TimeToLiveStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Keyspaces
  {
    namespace Model
    {
      namespace TimeToLiveStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        TimeToLiveStatus GetTimeToLiveStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return TimeToLiveStatus::ENABLED;
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
          case TimeToLiveStatus::NOT_SET:
            return {};
          case TimeToLiveStatus::ENABLED:
            return "ENABLED";
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
  } // namespace Keyspaces
} // namespace Aws
