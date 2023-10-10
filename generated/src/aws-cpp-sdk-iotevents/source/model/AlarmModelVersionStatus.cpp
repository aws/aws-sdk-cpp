/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/AlarmModelVersionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTEvents
  {
    namespace Model
    {
      namespace AlarmModelVersionStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int ACTIVATING_HASH = HashingUtils::HashString("ACTIVATING");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        AlarmModelVersionStatus GetAlarmModelVersionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return AlarmModelVersionStatus::ACTIVE;
          }
          else if (hashCode == ACTIVATING_HASH)
          {
            return AlarmModelVersionStatus::ACTIVATING;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return AlarmModelVersionStatus::INACTIVE;
          }
          else if (hashCode == FAILED_HASH)
          {
            return AlarmModelVersionStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AlarmModelVersionStatus>(hashCode);
          }

          return AlarmModelVersionStatus::NOT_SET;
        }

        Aws::String GetNameForAlarmModelVersionStatus(AlarmModelVersionStatus enumValue)
        {
          switch(enumValue)
          {
          case AlarmModelVersionStatus::NOT_SET:
            return {};
          case AlarmModelVersionStatus::ACTIVE:
            return "ACTIVE";
          case AlarmModelVersionStatus::ACTIVATING:
            return "ACTIVATING";
          case AlarmModelVersionStatus::INACTIVE:
            return "INACTIVE";
          case AlarmModelVersionStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AlarmModelVersionStatusMapper
    } // namespace Model
  } // namespace IoTEvents
} // namespace Aws
