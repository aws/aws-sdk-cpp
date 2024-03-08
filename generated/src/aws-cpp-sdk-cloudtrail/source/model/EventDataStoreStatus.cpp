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
        static const int STARTING_INGESTION_HASH = HashingUtils::HashString("STARTING_INGESTION");
        static const int STOPPING_INGESTION_HASH = HashingUtils::HashString("STOPPING_INGESTION");
        static const int STOPPED_INGESTION_HASH = HashingUtils::HashString("STOPPED_INGESTION");


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
          else if (hashCode == STARTING_INGESTION_HASH)
          {
            return EventDataStoreStatus::STARTING_INGESTION;
          }
          else if (hashCode == STOPPING_INGESTION_HASH)
          {
            return EventDataStoreStatus::STOPPING_INGESTION;
          }
          else if (hashCode == STOPPED_INGESTION_HASH)
          {
            return EventDataStoreStatus::STOPPED_INGESTION;
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
          case EventDataStoreStatus::NOT_SET:
            return {};
          case EventDataStoreStatus::CREATED:
            return "CREATED";
          case EventDataStoreStatus::ENABLED:
            return "ENABLED";
          case EventDataStoreStatus::PENDING_DELETION:
            return "PENDING_DELETION";
          case EventDataStoreStatus::STARTING_INGESTION:
            return "STARTING_INGESTION";
          case EventDataStoreStatus::STOPPING_INGESTION:
            return "STOPPING_INGESTION";
          case EventDataStoreStatus::STOPPED_INGESTION:
            return "STOPPED_INGESTION";
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
