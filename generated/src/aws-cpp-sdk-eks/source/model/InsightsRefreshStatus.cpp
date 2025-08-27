/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/InsightsRefreshStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EKS
  {
    namespace Model
    {
      namespace InsightsRefreshStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");


        InsightsRefreshStatus GetInsightsRefreshStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return InsightsRefreshStatus::IN_PROGRESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return InsightsRefreshStatus::FAILED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return InsightsRefreshStatus::COMPLETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InsightsRefreshStatus>(hashCode);
          }

          return InsightsRefreshStatus::NOT_SET;
        }

        Aws::String GetNameForInsightsRefreshStatus(InsightsRefreshStatus enumValue)
        {
          switch(enumValue)
          {
          case InsightsRefreshStatus::NOT_SET:
            return {};
          case InsightsRefreshStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case InsightsRefreshStatus::FAILED:
            return "FAILED";
          case InsightsRefreshStatus::COMPLETED:
            return "COMPLETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InsightsRefreshStatusMapper
    } // namespace Model
  } // namespace EKS
} // namespace Aws
