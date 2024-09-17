/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/WebScopeType.h>
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
      namespace WebScopeTypeMapper
      {

        static const int HOST_ONLY_HASH = HashingUtils::HashString("HOST_ONLY");
        static const int SUBDOMAINS_HASH = HashingUtils::HashString("SUBDOMAINS");


        WebScopeType GetWebScopeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HOST_ONLY_HASH)
          {
            return WebScopeType::HOST_ONLY;
          }
          else if (hashCode == SUBDOMAINS_HASH)
          {
            return WebScopeType::SUBDOMAINS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WebScopeType>(hashCode);
          }

          return WebScopeType::NOT_SET;
        }

        Aws::String GetNameForWebScopeType(WebScopeType enumValue)
        {
          switch(enumValue)
          {
          case WebScopeType::NOT_SET:
            return {};
          case WebScopeType::HOST_ONLY:
            return "HOST_ONLY";
          case WebScopeType::SUBDOMAINS:
            return "SUBDOMAINS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WebScopeTypeMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
