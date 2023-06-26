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

        static const int User_HASH = HashingUtils::HashString("User");
        static const int Bot_HASH = HashingUtils::HashString("Bot");
        static const int Webhook_HASH = HashingUtils::HashString("Webhook");


        MemberType GetMemberTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
