/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ContributorInsightsAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DynamoDB
  {
    namespace Model
    {
      namespace ContributorInsightsActionMapper
      {

        static const int ENABLE_HASH = HashingUtils::HashString("ENABLE");
        static const int DISABLE_HASH = HashingUtils::HashString("DISABLE");


        ContributorInsightsAction GetContributorInsightsActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLE_HASH)
          {
            return ContributorInsightsAction::ENABLE;
          }
          else if (hashCode == DISABLE_HASH)
          {
            return ContributorInsightsAction::DISABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContributorInsightsAction>(hashCode);
          }

          return ContributorInsightsAction::NOT_SET;
        }

        Aws::String GetNameForContributorInsightsAction(ContributorInsightsAction enumValue)
        {
          switch(enumValue)
          {
          case ContributorInsightsAction::ENABLE:
            return "ENABLE";
          case ContributorInsightsAction::DISABLE:
            return "DISABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContributorInsightsActionMapper
    } // namespace Model
  } // namespace DynamoDB
} // namespace Aws
