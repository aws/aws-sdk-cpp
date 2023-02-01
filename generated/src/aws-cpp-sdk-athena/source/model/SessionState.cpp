/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/SessionState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Athena
  {
    namespace Model
    {
      namespace SessionStateMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int IDLE_HASH = HashingUtils::HashString("IDLE");
        static const int BUSY_HASH = HashingUtils::HashString("BUSY");
        static const int TERMINATING_HASH = HashingUtils::HashString("TERMINATING");
        static const int TERMINATED_HASH = HashingUtils::HashString("TERMINATED");
        static const int DEGRADED_HASH = HashingUtils::HashString("DEGRADED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        SessionState GetSessionStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return SessionState::CREATING;
          }
          else if (hashCode == CREATED_HASH)
          {
            return SessionState::CREATED;
          }
          else if (hashCode == IDLE_HASH)
          {
            return SessionState::IDLE;
          }
          else if (hashCode == BUSY_HASH)
          {
            return SessionState::BUSY;
          }
          else if (hashCode == TERMINATING_HASH)
          {
            return SessionState::TERMINATING;
          }
          else if (hashCode == TERMINATED_HASH)
          {
            return SessionState::TERMINATED;
          }
          else if (hashCode == DEGRADED_HASH)
          {
            return SessionState::DEGRADED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return SessionState::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SessionState>(hashCode);
          }

          return SessionState::NOT_SET;
        }

        Aws::String GetNameForSessionState(SessionState enumValue)
        {
          switch(enumValue)
          {
          case SessionState::CREATING:
            return "CREATING";
          case SessionState::CREATED:
            return "CREATED";
          case SessionState::IDLE:
            return "IDLE";
          case SessionState::BUSY:
            return "BUSY";
          case SessionState::TERMINATING:
            return "TERMINATING";
          case SessionState::TERMINATED:
            return "TERMINATED";
          case SessionState::DEGRADED:
            return "DEGRADED";
          case SessionState::FAILED:
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

      } // namespace SessionStateMapper
    } // namespace Model
  } // namespace Athena
} // namespace Aws
