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

        static const int BUILD_HASH = HashingUtils::HashString("BUILD");
        static const int BUILD_BATCH_HASH = HashingUtils::HashString("BUILD_BATCH");
        static const int RUNNER_BUILDKITE_BUILD_HASH = HashingUtils::HashString("RUNNER_BUILDKITE_BUILD");


        WebhookBuildType GetWebhookBuildTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BUILD_HASH)
          {
            return WebhookBuildType::BUILD;
          }
          else if (hashCode == BUILD_BATCH_HASH)
          {
            return WebhookBuildType::BUILD_BATCH;
          }
          else if (hashCode == RUNNER_BUILDKITE_BUILD_HASH)
          {
            return WebhookBuildType::RUNNER_BUILDKITE_BUILD;
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
          case WebhookBuildType::RUNNER_BUILDKITE_BUILD:
            return "RUNNER_BUILDKITE_BUILD";
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
