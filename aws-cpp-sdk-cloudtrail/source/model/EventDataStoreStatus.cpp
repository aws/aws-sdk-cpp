/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/EventDataStoreStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudTrail
  {
    namespace Model
    {
      namespace EventDataStoreStatusMapper
      {

        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int PENDING_DELETION_HASH = HashingUtils::HashString("PENDING_DELETION");


        EventDataStoreStatus GetEventDataStoreStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_HASH)
          {
            return EventDataStoreStatus::CREATED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return EventDataStoreStatus::ENABLED;
          }
          else if (hashCode == PENDING_DELETION_HASH)
          {
            return EventDataStoreStatus::PENDING_DELETION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventDataStoreStatus>(hashCode);
          }

          return EventDataStoreStatus::NOT_SET;
        }

        Aws::String GetNameForEventDataStoreStatus(EventDataStoreStatus enumValue)
        {
          switch(enumValue)
          {
          case EventDataStoreStatus::CREATED:
            return "CREATED";
          case EventDataStoreStatus::ENABLED:
            return "ENABLED";
          case EventDataStoreStatus::PENDING_DELETION:
            return "PENDING_DELETION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventDataStoreStatusMapper
    } // namespace Model
  } // namespace CloudTrail
} // namespace Aws
