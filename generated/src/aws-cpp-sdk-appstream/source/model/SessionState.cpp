/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/SessionState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppStream
  {
    namespace Model
    {
      namespace SessionStateMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");


        SessionState GetSessionStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return SessionState::ACTIVE;
          }
          else if (hashCode == PENDING_HASH)
          {
            return SessionState::PENDING;
          }
          else if (hashCode == EXPIRED_HASH)
          {
            return SessionState::EXPIRED;
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
          case SessionState::ACTIVE:
            return "ACTIVE";
          case SessionState::PENDING:
            return "PENDING";
          case SessionState::EXPIRED:
            return "EXPIRED";
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
  } // namespace AppStream
} // namespace Aws
