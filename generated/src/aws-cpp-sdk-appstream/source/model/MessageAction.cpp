/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/MessageAction.h>
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
      namespace MessageActionMapper
      {

        static constexpr uint32_t SUPPRESS_HASH = ConstExprHashingUtils::HashString("SUPPRESS");
        static constexpr uint32_t RESEND_HASH = ConstExprHashingUtils::HashString("RESEND");


        MessageAction GetMessageActionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUPPRESS_HASH)
          {
            return MessageAction::SUPPRESS;
          }
          else if (hashCode == RESEND_HASH)
          {
            return MessageAction::RESEND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MessageAction>(hashCode);
          }

          return MessageAction::NOT_SET;
        }

        Aws::String GetNameForMessageAction(MessageAction enumValue)
        {
          switch(enumValue)
          {
          case MessageAction::NOT_SET:
            return {};
          case MessageAction::SUPPRESS:
            return "SUPPRESS";
          case MessageAction::RESEND:
            return "RESEND";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MessageActionMapper
    } // namespace Model
  } // namespace AppStream
} // namespace Aws
