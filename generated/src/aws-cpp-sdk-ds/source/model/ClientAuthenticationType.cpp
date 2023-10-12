/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/ClientAuthenticationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectoryService
  {
    namespace Model
    {
      namespace ClientAuthenticationTypeMapper
      {

        static constexpr uint32_t SmartCard_HASH = ConstExprHashingUtils::HashString("SmartCard");
        static constexpr uint32_t SmartCardOrPassword_HASH = ConstExprHashingUtils::HashString("SmartCardOrPassword");


        ClientAuthenticationType GetClientAuthenticationTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SmartCard_HASH)
          {
            return ClientAuthenticationType::SmartCard;
          }
          else if (hashCode == SmartCardOrPassword_HASH)
          {
            return ClientAuthenticationType::SmartCardOrPassword;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClientAuthenticationType>(hashCode);
          }

          return ClientAuthenticationType::NOT_SET;
        }

        Aws::String GetNameForClientAuthenticationType(ClientAuthenticationType enumValue)
        {
          switch(enumValue)
          {
          case ClientAuthenticationType::NOT_SET:
            return {};
          case ClientAuthenticationType::SmartCard:
            return "SmartCard";
          case ClientAuthenticationType::SmartCardOrPassword:
            return "SmartCardOrPassword";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClientAuthenticationTypeMapper
    } // namespace Model
  } // namespace DirectoryService
} // namespace Aws
