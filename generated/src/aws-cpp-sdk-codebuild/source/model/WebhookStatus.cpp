/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/WebhookStatus.h>
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
      namespace WebhookStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        WebhookStatus GetWebhookStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return WebhookStatus::CREATING;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return WebhookStatus::CREATE_FAILED;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return WebhookStatus::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return WebhookStatus::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WebhookStatus>(hashCode);
          }

          return WebhookStatus::NOT_SET;
        }

        Aws::String GetNameForWebhookStatus(WebhookStatus enumValue)
        {
          switch(enumValue)
          {
          case WebhookStatus::NOT_SET:
            return {};
          case WebhookStatus::CREATING:
            return "CREATING";
          case WebhookStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case WebhookStatus::ACTIVE:
            return "ACTIVE";
          case WebhookStatus::DELETING:
            return "DELETING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WebhookStatusMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
