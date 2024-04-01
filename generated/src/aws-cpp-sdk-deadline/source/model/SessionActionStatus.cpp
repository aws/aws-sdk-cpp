/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/SessionActionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace deadline
  {
    namespace Model
    {
      namespace SessionActionStatusMapper
      {

        static const int ASSIGNED_HASH = HashingUtils::HashString("ASSIGNED");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int CANCELING_HASH = HashingUtils::HashString("CANCELING");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int INTERRUPTED_HASH = HashingUtils::HashString("INTERRUPTED");
        static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");
        static const int NEVER_ATTEMPTED_HASH = HashingUtils::HashString("NEVER_ATTEMPTED");
        static const int SCHEDULED_HASH = HashingUtils::HashString("SCHEDULED");
        static const int RECLAIMING_HASH = HashingUtils::HashString("RECLAIMING");
        static const int RECLAIMED_HASH = HashingUtils::HashString("RECLAIMED");


        SessionActionStatus GetSessionActionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASSIGNED_HASH)
          {
            return SessionActionStatus::ASSIGNED;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return SessionActionStatus::RUNNING;
          }
          else if (hashCode == CANCELING_HASH)
          {
            return SessionActionStatus::CANCELING;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return SessionActionStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return SessionActionStatus::FAILED;
          }
          else if (hashCode == INTERRUPTED_HASH)
          {
            return SessionActionStatus::INTERRUPTED;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return SessionActionStatus::CANCELED;
          }
          else if (hashCode == NEVER_ATTEMPTED_HASH)
          {
            return SessionActionStatus::NEVER_ATTEMPTED;
          }
          else if (hashCode == SCHEDULED_HASH)
          {
            return SessionActionStatus::SCHEDULED;
          }
          else if (hashCode == RECLAIMING_HASH)
          {
            return SessionActionStatus::RECLAIMING;
          }
          else if (hashCode == RECLAIMED_HASH)
          {
            return SessionActionStatus::RECLAIMED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SessionActionStatus>(hashCode);
          }

          return SessionActionStatus::NOT_SET;
        }

        Aws::String GetNameForSessionActionStatus(SessionActionStatus enumValue)
        {
          switch(enumValue)
          {
          case SessionActionStatus::NOT_SET:
            return {};
          case SessionActionStatus::ASSIGNED:
            return "ASSIGNED";
          case SessionActionStatus::RUNNING:
            return "RUNNING";
          case SessionActionStatus::CANCELING:
            return "CANCELING";
          case SessionActionStatus::SUCCEEDED:
            return "SUCCEEDED";
          case SessionActionStatus::FAILED:
            return "FAILED";
          case SessionActionStatus::INTERRUPTED:
            return "INTERRUPTED";
          case SessionActionStatus::CANCELED:
            return "CANCELED";
          case SessionActionStatus::NEVER_ATTEMPTED:
            return "NEVER_ATTEMPTED";
          case SessionActionStatus::SCHEDULED:
            return "SCHEDULED";
          case SessionActionStatus::RECLAIMING:
            return "RECLAIMING";
          case SessionActionStatus::RECLAIMED:
            return "RECLAIMED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SessionActionStatusMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
