/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/SessionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace SessionStatusMapper
      {

        static const int PROVISIONING_HASH = HashingUtils::HashString("PROVISIONING");
        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int TIMEOUT_HASH = HashingUtils::HashString("TIMEOUT");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");


        SessionStatus GetSessionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROVISIONING_HASH)
          {
            return SessionStatus::PROVISIONING;
          }
          else if (hashCode == READY_HASH)
          {
            return SessionStatus::READY;
          }
          else if (hashCode == FAILED_HASH)
          {
            return SessionStatus::FAILED;
          }
          else if (hashCode == TIMEOUT_HASH)
          {
            return SessionStatus::TIMEOUT;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return SessionStatus::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return SessionStatus::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SessionStatus>(hashCode);
          }

          return SessionStatus::NOT_SET;
        }

        Aws::String GetNameForSessionStatus(SessionStatus enumValue)
        {
          switch(enumValue)
          {
          case SessionStatus::NOT_SET:
            return {};
          case SessionStatus::PROVISIONING:
            return "PROVISIONING";
          case SessionStatus::READY:
            return "READY";
          case SessionStatus::FAILED:
            return "FAILED";
          case SessionStatus::TIMEOUT:
            return "TIMEOUT";
          case SessionStatus::STOPPING:
            return "STOPPING";
          case SessionStatus::STOPPED:
            return "STOPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SessionStatusMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
