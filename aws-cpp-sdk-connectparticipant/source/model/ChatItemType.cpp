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

#include <aws/connectparticipant/model/ChatItemType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConnectParticipant
  {
    namespace Model
    {
      namespace ChatItemTypeMapper
      {

        static const int MESSAGE_HASH = HashingUtils::HashString("MESSAGE");
        static const int EVENT_HASH = HashingUtils::HashString("EVENT");
        static const int CONNECTION_ACK_HASH = HashingUtils::HashString("CONNECTION_ACK");


        ChatItemType GetChatItemTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MESSAGE_HASH)
          {
            return ChatItemType::MESSAGE;
          }
          else if (hashCode == EVENT_HASH)
          {
            return ChatItemType::EVENT;
          }
          else if (hashCode == CONNECTION_ACK_HASH)
          {
            return ChatItemType::CONNECTION_ACK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChatItemType>(hashCode);
          }

          return ChatItemType::NOT_SET;
        }

        Aws::String GetNameForChatItemType(ChatItemType enumValue)
        {
          switch(enumValue)
          {
          case ChatItemType::MESSAGE:
            return "MESSAGE";
          case ChatItemType::EVENT:
            return "EVENT";
          case ChatItemType::CONNECTION_ACK:
            return "CONNECTION_ACK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChatItemTypeMapper
    } // namespace Model
  } // namespace ConnectParticipant
} // namespace Aws
