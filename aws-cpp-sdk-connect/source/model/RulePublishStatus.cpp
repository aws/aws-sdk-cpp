/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RulePublishStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace RulePublishStatusMapper
      {

        static const int DRAFT_HASH = HashingUtils::HashString("DRAFT");
        static const int PUBLISHED_HASH = HashingUtils::HashString("PUBLISHED");


        RulePublishStatus GetRulePublishStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DRAFT_HASH)
          {
            return RulePublishStatus::DRAFT;
          }
          else if (hashCode == PUBLISHED_HASH)
          {
            return RulePublishStatus::PUBLISHED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RulePublishStatus>(hashCode);
          }

          return RulePublishStatus::NOT_SET;
        }

        Aws::String GetNameForRulePublishStatus(RulePublishStatus enumValue)
        {
          switch(enumValue)
          {
          case RulePublishStatus::DRAFT:
            return "DRAFT";
          case RulePublishStatus::PUBLISHED:
            return "PUBLISHED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RulePublishStatusMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
