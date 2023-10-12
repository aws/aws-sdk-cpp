/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/SlackEntity.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace SlackEntityMapper
      {

        static constexpr uint32_t PUBLIC_CHANNEL_HASH = ConstExprHashingUtils::HashString("PUBLIC_CHANNEL");
        static constexpr uint32_t PRIVATE_CHANNEL_HASH = ConstExprHashingUtils::HashString("PRIVATE_CHANNEL");
        static constexpr uint32_t GROUP_MESSAGE_HASH = ConstExprHashingUtils::HashString("GROUP_MESSAGE");
        static constexpr uint32_t DIRECT_MESSAGE_HASH = ConstExprHashingUtils::HashString("DIRECT_MESSAGE");


        SlackEntity GetSlackEntityForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUBLIC_CHANNEL_HASH)
          {
            return SlackEntity::PUBLIC_CHANNEL;
          }
          else if (hashCode == PRIVATE_CHANNEL_HASH)
          {
            return SlackEntity::PRIVATE_CHANNEL;
          }
          else if (hashCode == GROUP_MESSAGE_HASH)
          {
            return SlackEntity::GROUP_MESSAGE;
          }
          else if (hashCode == DIRECT_MESSAGE_HASH)
          {
            return SlackEntity::DIRECT_MESSAGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SlackEntity>(hashCode);
          }

          return SlackEntity::NOT_SET;
        }

        Aws::String GetNameForSlackEntity(SlackEntity enumValue)
        {
          switch(enumValue)
          {
          case SlackEntity::NOT_SET:
            return {};
          case SlackEntity::PUBLIC_CHANNEL:
            return "PUBLIC_CHANNEL";
          case SlackEntity::PRIVATE_CHANNEL:
            return "PRIVATE_CHANNEL";
          case SlackEntity::GROUP_MESSAGE:
            return "GROUP_MESSAGE";
          case SlackEntity::DIRECT_MESSAGE:
            return "DIRECT_MESSAGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SlackEntityMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
