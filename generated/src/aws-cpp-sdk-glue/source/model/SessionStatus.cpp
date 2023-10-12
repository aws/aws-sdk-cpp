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

        static constexpr uint32_t PROVISIONING_HASH = ConstExprHashingUtils::HashString("PROVISIONING");
        static constexpr uint32_t READY_HASH = ConstExprHashingUtils::HashString("READY");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t TIMEOUT_HASH = ConstExprHashingUtils::HashString("TIMEOUT");
        static constexpr uint32_t STOPPING_HASH = ConstExprHashingUtils::HashString("STOPPING");
        static constexpr uint32_t STOPPED_HASH = ConstExprHashingUtils::HashString("STOPPED");


        SessionStatus GetSessionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
