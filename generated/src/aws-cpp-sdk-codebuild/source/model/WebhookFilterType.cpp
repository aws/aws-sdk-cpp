/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/WebhookFilterType.h>
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
      namespace WebhookFilterTypeMapper
      {

        static const int EVENT_HASH = HashingUtils::HashString("EVENT");
        static const int BASE_REF_HASH = HashingUtils::HashString("BASE_REF");
        static const int HEAD_REF_HASH = HashingUtils::HashString("HEAD_REF");
        static const int ACTOR_ACCOUNT_ID_HASH = HashingUtils::HashString("ACTOR_ACCOUNT_ID");
        static const int FILE_PATH_HASH = HashingUtils::HashString("FILE_PATH");
        static const int COMMIT_MESSAGE_HASH = HashingUtils::HashString("COMMIT_MESSAGE");
        static const int WORKFLOW_NAME_HASH = HashingUtils::HashString("WORKFLOW_NAME");
        static const int TAG_NAME_HASH = HashingUtils::HashString("TAG_NAME");
        static const int RELEASE_NAME_HASH = HashingUtils::HashString("RELEASE_NAME");
        static const int REPOSITORY_NAME_HASH = HashingUtils::HashString("REPOSITORY_NAME");
        static const int ORGANIZATION_NAME_HASH = HashingUtils::HashString("ORGANIZATION_NAME");


        WebhookFilterType GetWebhookFilterTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EVENT_HASH)
          {
            return WebhookFilterType::EVENT;
          }
          else if (hashCode == BASE_REF_HASH)
          {
            return WebhookFilterType::BASE_REF;
          }
          else if (hashCode == HEAD_REF_HASH)
          {
            return WebhookFilterType::HEAD_REF;
          }
          else if (hashCode == ACTOR_ACCOUNT_ID_HASH)
          {
            return WebhookFilterType::ACTOR_ACCOUNT_ID;
          }
          else if (hashCode == FILE_PATH_HASH)
          {
            return WebhookFilterType::FILE_PATH;
          }
          else if (hashCode == COMMIT_MESSAGE_HASH)
          {
            return WebhookFilterType::COMMIT_MESSAGE;
          }
          else if (hashCode == WORKFLOW_NAME_HASH)
          {
            return WebhookFilterType::WORKFLOW_NAME;
          }
          else if (hashCode == TAG_NAME_HASH)
          {
            return WebhookFilterType::TAG_NAME;
          }
          else if (hashCode == RELEASE_NAME_HASH)
          {
            return WebhookFilterType::RELEASE_NAME;
          }
          else if (hashCode == REPOSITORY_NAME_HASH)
          {
            return WebhookFilterType::REPOSITORY_NAME;
          }
          else if (hashCode == ORGANIZATION_NAME_HASH)
          {
            return WebhookFilterType::ORGANIZATION_NAME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WebhookFilterType>(hashCode);
          }

          return WebhookFilterType::NOT_SET;
        }

        Aws::String GetNameForWebhookFilterType(WebhookFilterType enumValue)
        {
          switch(enumValue)
          {
          case WebhookFilterType::NOT_SET:
            return {};
          case WebhookFilterType::EVENT:
            return "EVENT";
          case WebhookFilterType::BASE_REF:
            return "BASE_REF";
          case WebhookFilterType::HEAD_REF:
            return "HEAD_REF";
          case WebhookFilterType::ACTOR_ACCOUNT_ID:
            return "ACTOR_ACCOUNT_ID";
          case WebhookFilterType::FILE_PATH:
            return "FILE_PATH";
          case WebhookFilterType::COMMIT_MESSAGE:
            return "COMMIT_MESSAGE";
          case WebhookFilterType::WORKFLOW_NAME:
            return "WORKFLOW_NAME";
          case WebhookFilterType::TAG_NAME:
            return "TAG_NAME";
          case WebhookFilterType::RELEASE_NAME:
            return "RELEASE_NAME";
          case WebhookFilterType::REPOSITORY_NAME:
            return "REPOSITORY_NAME";
          case WebhookFilterType::ORGANIZATION_NAME:
            return "ORGANIZATION_NAME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WebhookFilterTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
