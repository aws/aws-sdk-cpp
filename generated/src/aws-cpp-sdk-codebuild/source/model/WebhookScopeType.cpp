/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/WebhookScopeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeBuild
  {
    namespace Model
    {
      namespace WebhookScopeTypeMapper
      {

        static const int GITHUB_ORGANIZATION_HASH = HashingUtils::HashString("GITHUB_ORGANIZATION");
        static const int GITHUB_GLOBAL_HASH = HashingUtils::HashString("GITHUB_GLOBAL");


        WebhookScopeType GetWebhookScopeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GITHUB_ORGANIZATION_HASH)
          {
            return WebhookScopeType::GITHUB_ORGANIZATION;
          }
          else if (hashCode == GITHUB_GLOBAL_HASH)
          {
            return WebhookScopeType::GITHUB_GLOBAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WebhookScopeType>(hashCode);
          }

          return WebhookScopeType::NOT_SET;
        }

        Aws::String GetNameForWebhookScopeType(WebhookScopeType enumValue)
        {
          switch(enumValue)
          {
          case WebhookScopeType::NOT_SET:
            return {};
          case WebhookScopeType::GITHUB_ORGANIZATION:
            return "GITHUB_ORGANIZATION";
          case WebhookScopeType::GITHUB_GLOBAL:
            return "GITHUB_GLOBAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WebhookScopeTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
