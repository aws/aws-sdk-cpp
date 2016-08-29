/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/workspaces/model/ConnectionState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace ConnectionStateMapper
      {

        static const int CONNECTED_HASH = HashingUtils::HashString("CONNECTED");
        static const int DISCONNECTED_HASH = HashingUtils::HashString("DISCONNECTED");
        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");


        ConnectionState GetConnectionStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONNECTED_HASH)
          {
            return ConnectionState::CONNECTED;
          }
          else if (hashCode == DISCONNECTED_HASH)
          {
            return ConnectionState::DISCONNECTED;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return ConnectionState::UNKNOWN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectionState>(hashCode);
          }

          return ConnectionState::NOT_SET;
        }

        Aws::String GetNameForConnectionState(ConnectionState enumValue)
        {
          switch(enumValue)
          {
          case ConnectionState::CONNECTED:
            return "CONNECTED";
          case ConnectionState::DISCONNECTED:
            return "DISCONNECTED";
          case ConnectionState::UNKNOWN:
            return "UNKNOWN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ConnectionStateMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
