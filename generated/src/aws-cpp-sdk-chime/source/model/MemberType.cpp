/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/MemberType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Chime
  {
    namespace Model
    {
      namespace MemberTypeMapper
      {

        static constexpr uint32_t User_HASH = ConstExprHashingUtils::HashString("User");
        static constexpr uint32_t Bot_HASH = ConstExprHashingUtils::HashString("Bot");
        static constexpr uint32_t Webhook_HASH = ConstExprHashingUtils::HashString("Webhook");


        MemberType GetMemberTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == User_HASH)
          {
            return MemberType::User;
          }
          else if (hashCode == Bot_HASH)
          {
            return MemberType::Bot;
          }
          else if (hashCode == Webhook_HASH)
          {
            return MemberType::Webhook;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MemberType>(hashCode);
          }

          return MemberType::NOT_SET;
        }

        Aws::String GetNameForMemberType(MemberType enumValue)
        {
          switch(enumValue)
          {
          case MemberType::NOT_SET:
            return {};
          case MemberType::User:
            return "User";
          case MemberType::Bot:
            return "Bot";
          case MemberType::Webhook:
            return "Webhook";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MemberTypeMapper
    } // namespace Model
  } // namespace Chime
} // namespace Aws
