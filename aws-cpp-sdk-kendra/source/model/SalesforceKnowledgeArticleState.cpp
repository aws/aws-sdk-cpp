/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/SalesforceKnowledgeArticleState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace SalesforceKnowledgeArticleStateMapper
      {

        static const int DRAFT_HASH = HashingUtils::HashString("DRAFT");
        static const int PUBLISHED_HASH = HashingUtils::HashString("PUBLISHED");
        static const int ARCHIVED_HASH = HashingUtils::HashString("ARCHIVED");


        SalesforceKnowledgeArticleState GetSalesforceKnowledgeArticleStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DRAFT_HASH)
          {
            return SalesforceKnowledgeArticleState::DRAFT;
          }
          else if (hashCode == PUBLISHED_HASH)
          {
            return SalesforceKnowledgeArticleState::PUBLISHED;
          }
          else if (hashCode == ARCHIVED_HASH)
          {
            return SalesforceKnowledgeArticleState::ARCHIVED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SalesforceKnowledgeArticleState>(hashCode);
          }

          return SalesforceKnowledgeArticleState::NOT_SET;
        }

        Aws::String GetNameForSalesforceKnowledgeArticleState(SalesforceKnowledgeArticleState enumValue)
        {
          switch(enumValue)
          {
          case SalesforceKnowledgeArticleState::DRAFT:
            return "DRAFT";
          case SalesforceKnowledgeArticleState::PUBLISHED:
            return "PUBLISHED";
          case SalesforceKnowledgeArticleState::ARCHIVED:
            return "ARCHIVED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SalesforceKnowledgeArticleStateMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
