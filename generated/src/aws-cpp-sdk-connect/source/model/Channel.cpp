/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/Channel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace ChannelMapper
      {

        static const int VOICE_HASH = HashingUtils::HashString("VOICE");
        static const int CHAT_HASH = HashingUtils::HashString("CHAT");
        static const int TASK_HASH = HashingUtils::HashString("TASK");


        Channel GetChannelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VOICE_HASH)
          {
            return Channel::VOICE;
          }
          else if (hashCode == CHAT_HASH)
          {
            return Channel::CHAT;
          }
          else if (hashCode == TASK_HASH)
          {
            return Channel::TASK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Channel>(hashCode);
          }

          return Channel::NOT_SET;
        }

        Aws::String GetNameForChannel(Channel enumValue)
        {
          switch(enumValue)
          {
          case Channel::NOT_SET:
            return {};
          case Channel::VOICE:
            return "VOICE";
          case Channel::CHAT:
            return "CHAT";
          case Channel::TASK:
            return "TASK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChannelMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
