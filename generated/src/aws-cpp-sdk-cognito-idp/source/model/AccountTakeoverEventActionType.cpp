/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/AccountTakeoverEventActionType.h>
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
      namespace AccountTakeoverEventActionTypeMapper
      {

        static constexpr uint32_t BLOCK_HASH = ConstExprHashingUtils::HashString("BLOCK");
        static constexpr uint32_t MFA_IF_CONFIGURED_HASH = ConstExprHashingUtils::HashString("MFA_IF_CONFIGURED");
        static constexpr uint32_t MFA_REQUIRED_HASH = ConstExprHashingUtils::HashString("MFA_REQUIRED");
        static constexpr uint32_t NO_ACTION_HASH = ConstExprHashingUtils::HashString("NO_ACTION");


        AccountTakeoverEventActionType GetAccountTakeoverEventActionTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BLOCK_HASH)
          {
            return AccountTakeoverEventActionType::BLOCK;
          }
          else if (hashCode == MFA_IF_CONFIGURED_HASH)
          {
            return AccountTakeoverEventActionType::MFA_IF_CONFIGURED;
          }
          else if (hashCode == MFA_REQUIRED_HASH)
          {
            return AccountTakeoverEventActionType::MFA_REQUIRED;
          }
          else if (hashCode == NO_ACTION_HASH)
          {
            return AccountTakeoverEventActionType::NO_ACTION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccountTakeoverEventActionType>(hashCode);
          }

          return AccountTakeoverEventActionType::NOT_SET;
        }

        Aws::String GetNameForAccountTakeoverEventActionType(AccountTakeoverEventActionType enumValue)
        {
          switch(enumValue)
          {
          case AccountTakeoverEventActionType::NOT_SET:
            return {};
          case AccountTakeoverEventActionType::BLOCK:
            return "BLOCK";
          case AccountTakeoverEventActionType::MFA_IF_CONFIGURED:
            return "MFA_IF_CONFIGURED";
          case AccountTakeoverEventActionType::MFA_REQUIRED:
            return "MFA_REQUIRED";
          case AccountTakeoverEventActionType::NO_ACTION:
            return "NO_ACTION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AccountTakeoverEventActionTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
