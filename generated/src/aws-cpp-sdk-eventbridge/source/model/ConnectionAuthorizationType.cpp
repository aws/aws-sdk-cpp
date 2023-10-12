/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/ConnectionAuthorizationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EventBridge
  {
    namespace Model
    {
      namespace ConnectionAuthorizationTypeMapper
      {

        static constexpr uint32_t BASIC_HASH = ConstExprHashingUtils::HashString("BASIC");
        static constexpr uint32_t OAUTH_CLIENT_CREDENTIALS_HASH = ConstExprHashingUtils::HashString("OAUTH_CLIENT_CREDENTIALS");
        static constexpr uint32_t API_KEY_HASH = ConstExprHashingUtils::HashString("API_KEY");


        ConnectionAuthorizationType GetConnectionAuthorizationTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BASIC_HASH)
          {
            return ConnectionAuthorizationType::BASIC;
          }
          else if (hashCode == OAUTH_CLIENT_CREDENTIALS_HASH)
          {
            return ConnectionAuthorizationType::OAUTH_CLIENT_CREDENTIALS;
          }
          else if (hashCode == API_KEY_HASH)
          {
            return ConnectionAuthorizationType::API_KEY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectionAuthorizationType>(hashCode);
          }

          return ConnectionAuthorizationType::NOT_SET;
        }

        Aws::String GetNameForConnectionAuthorizationType(ConnectionAuthorizationType enumValue)
        {
          switch(enumValue)
          {
          case ConnectionAuthorizationType::NOT_SET:
            return {};
          case ConnectionAuthorizationType::BASIC:
            return "BASIC";
          case ConnectionAuthorizationType::OAUTH_CLIENT_CREDENTIALS:
            return "OAUTH_CLIENT_CREDENTIALS";
          case ConnectionAuthorizationType::API_KEY:
            return "API_KEY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectionAuthorizationTypeMapper
    } // namespace Model
  } // namespace EventBridge
} // namespace Aws
