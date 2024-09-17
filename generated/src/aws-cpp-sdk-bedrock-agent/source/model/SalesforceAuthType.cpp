/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/SalesforceAuthType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgent
  {
    namespace Model
    {
      namespace SalesforceAuthTypeMapper
      {

        static const int OAUTH2_CLIENT_CREDENTIALS_HASH = HashingUtils::HashString("OAUTH2_CLIENT_CREDENTIALS");


        SalesforceAuthType GetSalesforceAuthTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OAUTH2_CLIENT_CREDENTIALS_HASH)
          {
            return SalesforceAuthType::OAUTH2_CLIENT_CREDENTIALS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SalesforceAuthType>(hashCode);
          }

          return SalesforceAuthType::NOT_SET;
        }

        Aws::String GetNameForSalesforceAuthType(SalesforceAuthType enumValue)
        {
          switch(enumValue)
          {
          case SalesforceAuthType::NOT_SET:
            return {};
          case SalesforceAuthType::OAUTH2_CLIENT_CREDENTIALS:
            return "OAUTH2_CLIENT_CREDENTIALS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SalesforceAuthTypeMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
