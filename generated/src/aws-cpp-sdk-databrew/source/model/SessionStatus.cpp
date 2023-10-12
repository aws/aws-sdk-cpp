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

        static constexpr uint32_t ASSIGNED_HASH = ConstExprHashingUtils::HashString("ASSIGNED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t INITIALIZING_HASH = ConstExprHashingUtils::HashString("INITIALIZING");
        static constexpr uint32_t PROVISIONING_HASH = ConstExprHashingUtils::HashString("PROVISIONING");
        static constexpr uint32_t READY_HASH = ConstExprHashingUtils::HashString("READY");
        static constexpr uint32_t RECYCLING_HASH = ConstExprHashingUtils::HashString("RECYCLING");
        static constexpr uint32_t ROTATING_HASH = ConstExprHashingUtils::HashString("ROTATING");
        static constexpr uint32_t TERMINATED_HASH = ConstExprHashingUtils::HashString("TERMINATED");
        static constexpr uint32_t TERMINATING_HASH = ConstExprHashingUtils::HashString("TERMINATING");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");


        SessionStatus GetSessionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case SessionStatus::NOT_SET:
            return {};
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
