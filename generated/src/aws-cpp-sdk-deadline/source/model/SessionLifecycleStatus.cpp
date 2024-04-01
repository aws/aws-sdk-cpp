/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/SessionLifecycleStatus.h>
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
      namespace SessionLifecycleStatusMapper
      {

        static const int STARTED_HASH = HashingUtils::HashString("STARTED");
        static const int UPDATE_IN_PROGRESS_HASH = HashingUtils::HashString("UPDATE_IN_PROGRESS");
        static const int UPDATE_SUCCEEDED_HASH = HashingUtils::HashString("UPDATE_SUCCEEDED");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
        static const int ENDED_HASH = HashingUtils::HashString("ENDED");


        SessionLifecycleStatus GetSessionLifecycleStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STARTED_HASH)
          {
            return SessionLifecycleStatus::STARTED;
          }
          else if (hashCode == UPDATE_IN_PROGRESS_HASH)
          {
            return SessionLifecycleStatus::UPDATE_IN_PROGRESS;
          }
          else if (hashCode == UPDATE_SUCCEEDED_HASH)
          {
            return SessionLifecycleStatus::UPDATE_SUCCEEDED;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return SessionLifecycleStatus::UPDATE_FAILED;
          }
          else if (hashCode == ENDED_HASH)
          {
            return SessionLifecycleStatus::ENDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SessionLifecycleStatus>(hashCode);
          }

          return SessionLifecycleStatus::NOT_SET;
        }

        Aws::String GetNameForSessionLifecycleStatus(SessionLifecycleStatus enumValue)
        {
          switch(enumValue)
          {
          case SessionLifecycleStatus::NOT_SET:
            return {};
          case SessionLifecycleStatus::STARTED:
            return "STARTED";
          case SessionLifecycleStatus::UPDATE_IN_PROGRESS:
            return "UPDATE_IN_PROGRESS";
          case SessionLifecycleStatus::UPDATE_SUCCEEDED:
            return "UPDATE_SUCCEEDED";
          case SessionLifecycleStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
          case SessionLifecycleStatus::ENDED:
            return "ENDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SessionLifecycleStatusMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
