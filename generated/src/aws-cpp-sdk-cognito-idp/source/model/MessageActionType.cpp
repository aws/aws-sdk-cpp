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

        static const int RESEND_HASH = HashingUtils::HashString("RESEND");
        static const int SUPPRESS_HASH = HashingUtils::HashString("SUPPRESS");


        MessageActionType GetMessageActionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
