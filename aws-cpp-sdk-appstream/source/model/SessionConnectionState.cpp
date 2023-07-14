/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/SessionConnectionState.h>
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
      namespace SessionConnectionStateMapper
      {

        static const int CONNECTED_HASH = HashingUtils::HashString("CONNECTED");
        static const int NOT_CONNECTED_HASH = HashingUtils::HashString("NOT_CONNECTED");


        SessionConnectionState GetSessionConnectionStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONNECTED_HASH)
          {
            return SessionConnectionState::CONNECTED;
          }
          else if (hashCode == NOT_CONNECTED_HASH)
          {
            return SessionConnectionState::NOT_CONNECTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SessionConnectionState>(hashCode);
          }

          return SessionConnectionState::NOT_SET;
        }

        Aws::String GetNameForSessionConnectionState(SessionConnectionState enumValue)
        {
          switch(enumValue)
          {
          case SessionConnectionState::CONNECTED:
            return "CONNECTED";
          case SessionConnectionState::NOT_CONNECTED:
            return "NOT_CONNECTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SessionConnectionStateMapper
    } // namespace Model
  } // namespace AppStream
} // namespace Aws
