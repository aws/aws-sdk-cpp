/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/KnowledgeBaseStatus.h>
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
      namespace KnowledgeBaseStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        KnowledgeBaseStatus GetKnowledgeBaseStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return KnowledgeBaseStatus::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return KnowledgeBaseStatus::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return KnowledgeBaseStatus::DELETING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return KnowledgeBaseStatus::UPDATING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return KnowledgeBaseStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KnowledgeBaseStatus>(hashCode);
          }

          return KnowledgeBaseStatus::NOT_SET;
        }

        Aws::String GetNameForKnowledgeBaseStatus(KnowledgeBaseStatus enumValue)
        {
          switch(enumValue)
          {
          case KnowledgeBaseStatus::NOT_SET:
            return {};
          case KnowledgeBaseStatus::CREATING:
            return "CREATING";
          case KnowledgeBaseStatus::ACTIVE:
            return "ACTIVE";
          case KnowledgeBaseStatus::DELETING:
            return "DELETING";
          case KnowledgeBaseStatus::UPDATING:
            return "UPDATING";
          case KnowledgeBaseStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KnowledgeBaseStatusMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
