/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/MessageActionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CognitoIdentityProvider
  {
    namespace Model
    {
      namespace MessageActionTypeMapper
      {

        static constexpr uint32_t RESEND_HASH = ConstExprHashingUtils::HashString("RESEND");
        static constexpr uint32_t SUPPRESS_HASH = ConstExprHashingUtils::HashString("SUPPRESS");


        MessageActionType GetMessageActionTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RESEND_HASH)
          {
            return MessageActionType::RESEND;
          }
          else if (hashCode == SUPPRESS_HASH)
          {
            return MessageActionType::SUPPRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MessageActionType>(hashCode);
          }

          return MessageActionType::NOT_SET;
        }

        Aws::String GetNameForMessageActionType(MessageActionType enumValue)
        {
          switch(enumValue)
          {
          case MessageActionType::NOT_SET:
            return {};
          case MessageActionType::RESEND:
            return "RESEND";
          case MessageActionType::SUPPRESS:
            return "SUPPRESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MessageActionTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
