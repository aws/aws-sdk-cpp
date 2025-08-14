/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ContributorInsightsMode.h>
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
      namespace ContributorInsightsModeMapper
      {

        static const int ACCESSED_AND_THROTTLED_KEYS_HASH = HashingUtils::HashString("ACCESSED_AND_THROTTLED_KEYS");
        static const int THROTTLED_KEYS_HASH = HashingUtils::HashString("THROTTLED_KEYS");


        ContributorInsightsMode GetContributorInsightsModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCESSED_AND_THROTTLED_KEYS_HASH)
          {
            return ContributorInsightsMode::ACCESSED_AND_THROTTLED_KEYS;
          }
          else if (hashCode == THROTTLED_KEYS_HASH)
          {
            return ContributorInsightsMode::THROTTLED_KEYS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContributorInsightsMode>(hashCode);
          }

          return ContributorInsightsMode::NOT_SET;
        }

        Aws::String GetNameForContributorInsightsMode(ContributorInsightsMode enumValue)
        {
          switch(enumValue)
          {
          case ContributorInsightsMode::NOT_SET:
            return {};
          case ContributorInsightsMode::ACCESSED_AND_THROTTLED_KEYS:
            return "ACCESSED_AND_THROTTLED_KEYS";
          case ContributorInsightsMode::THROTTLED_KEYS:
            return "THROTTLED_KEYS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContributorInsightsModeMapper
    } // namespace Model
  } // namespace DynamoDB
} // namespace Aws
