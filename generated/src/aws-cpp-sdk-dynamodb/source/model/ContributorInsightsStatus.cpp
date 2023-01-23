/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ContributorInsightsStatus.h>
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
      namespace ContributorInsightsStatusMapper
      {

        static const int ENABLING_HASH = HashingUtils::HashString("ENABLING");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLING_HASH = HashingUtils::HashString("DISABLING");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ContributorInsightsStatus GetContributorInsightsStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLING_HASH)
          {
            return ContributorInsightsStatus::ENABLING;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return ContributorInsightsStatus::ENABLED;
          }
          else if (hashCode == DISABLING_HASH)
          {
            return ContributorInsightsStatus::DISABLING;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return ContributorInsightsStatus::DISABLED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ContributorInsightsStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContributorInsightsStatus>(hashCode);
          }

          return ContributorInsightsStatus::NOT_SET;
        }

        Aws::String GetNameForContributorInsightsStatus(ContributorInsightsStatus enumValue)
        {
          switch(enumValue)
          {
          case ContributorInsightsStatus::ENABLING:
            return "ENABLING";
          case ContributorInsightsStatus::ENABLED:
            return "ENABLED";
          case ContributorInsightsStatus::DISABLING:
            return "DISABLING";
          case ContributorInsightsStatus::DISABLED:
            return "DISABLED";
          case ContributorInsightsStatus::FAILED:
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

      } // namespace ContributorInsightsStatusMapper
    } // namespace Model
  } // namespace DynamoDB
} // namespace Aws
