/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/WebhookBuildType.h>
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
      namespace WebhookBuildTypeMapper
      {

        static constexpr uint32_t BUILD_HASH = ConstExprHashingUtils::HashString("BUILD");
        static constexpr uint32_t BUILD_BATCH_HASH = ConstExprHashingUtils::HashString("BUILD_BATCH");


        WebhookBuildType GetWebhookBuildTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BUILD_HASH)
          {
            return WebhookBuildType::BUILD;
          }
          else if (hashCode == BUILD_BATCH_HASH)
          {
            return WebhookBuildType::BUILD_BATCH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WebhookBuildType>(hashCode);
          }

          return WebhookBuildType::NOT_SET;
        }

        Aws::String GetNameForWebhookBuildType(WebhookBuildType enumValue)
        {
          switch(enumValue)
          {
          case WebhookBuildType::NOT_SET:
            return {};
          case WebhookBuildType::BUILD:
            return "BUILD";
          case WebhookBuildType::BUILD_BATCH:
            return "BUILD_BATCH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WebhookBuildTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
