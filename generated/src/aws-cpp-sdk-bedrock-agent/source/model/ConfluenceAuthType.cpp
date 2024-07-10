/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/ConfluenceAuthType.h>
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
      namespace ConfluenceAuthTypeMapper
      {

        static const int BASIC_HASH = HashingUtils::HashString("BASIC");
        static const int OAUTH2_CLIENT_CREDENTIALS_HASH = HashingUtils::HashString("OAUTH2_CLIENT_CREDENTIALS");


        ConfluenceAuthType GetConfluenceAuthTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BASIC_HASH)
          {
            return ConfluenceAuthType::BASIC;
          }
          else if (hashCode == OAUTH2_CLIENT_CREDENTIALS_HASH)
          {
            return ConfluenceAuthType::OAUTH2_CLIENT_CREDENTIALS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfluenceAuthType>(hashCode);
          }

          return ConfluenceAuthType::NOT_SET;
        }

        Aws::String GetNameForConfluenceAuthType(ConfluenceAuthType enumValue)
        {
          switch(enumValue)
          {
          case ConfluenceAuthType::NOT_SET:
            return {};
          case ConfluenceAuthType::BASIC:
            return "BASIC";
          case ConfluenceAuthType::OAUTH2_CLIENT_CREDENTIALS:
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

      } // namespace ConfluenceAuthTypeMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
