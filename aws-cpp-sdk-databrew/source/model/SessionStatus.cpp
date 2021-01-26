/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/SessionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GlueDataBrew
  {
    namespace Model
    {
      namespace SessionStatusMapper
      {

        static const int ASSIGNED_HASH = HashingUtils::HashString("ASSIGNED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int INITIALIZING_HASH = HashingUtils::HashString("INITIALIZING");
        static const int PROVISIONING_HASH = HashingUtils::HashString("PROVISIONING");
        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int RECYCLING_HASH = HashingUtils::HashString("RECYCLING");
        static const int ROTATING_HASH = HashingUtils::HashString("ROTATING");
        static const int TERMINATED_HASH = HashingUtils::HashString("TERMINATED");
        static const int TERMINATING_HASH = HashingUtils::HashString("TERMINATING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");


        SessionStatus GetSessionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASSIGNED_HASH)
          {
            return SessionStatus::ASSIGNED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return SessionStatus::FAILED;
          }
          else if (hashCode == INITIALIZING_HASH)
          {
            return SessionStatus::INITIALIZING;
          }
          else if (hashCode == PROVISIONING_HASH)
          {
            return SessionStatus::PROVISIONING;
          }
          else if (hashCode == READY_HASH)
          {
            return SessionStatus::READY;
          }
          else if (hashCode == RECYCLING_HASH)
          {
            return SessionStatus::RECYCLING;
          }
          else if (hashCode == ROTATING_HASH)
          {
            return SessionStatus::ROTATING;
          }
          else if (hashCode == TERMINATED_HASH)
          {
            return SessionStatus::TERMINATED;
          }
          else if (hashCode == TERMINATING_HASH)
          {
            return SessionStatus::TERMINATING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return SessionStatus::UPDATING;
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
          case SessionStatus::ASSIGNED:
            return "ASSIGNED";
          case SessionStatus::FAILED:
            return "FAILED";
          case SessionStatus::INITIALIZING:
            return "INITIALIZING";
          case SessionStatus::PROVISIONING:
            return "PROVISIONING";
          case SessionStatus::READY:
            return "READY";
          case SessionStatus::RECYCLING:
            return "RECYCLING";
          case SessionStatus::ROTATING:
            return "ROTATING";
          case SessionStatus::TERMINATED:
            return "TERMINATED";
          case SessionStatus::TERMINATING:
            return "TERMINATING";
          case SessionStatus::UPDATING:
            return "UPDATING";
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
  } // namespace GlueDataBrew
} // namespace Aws
