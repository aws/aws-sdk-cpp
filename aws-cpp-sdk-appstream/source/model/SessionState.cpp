/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

            return "";
          }
        }

      } // namespace SessionStateMapper
    } // namespace Model
  } // namespace AppStream
} // namespace Aws
