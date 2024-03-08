/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/RecommendationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataSync
  {
    namespace Model
    {
      namespace RecommendationStatusMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        RecommendationStatus GetRecommendationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return RecommendationStatus::NONE;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return RecommendationStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return RecommendationStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return RecommendationStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecommendationStatus>(hashCode);
          }

          return RecommendationStatus::NOT_SET;
        }

        Aws::String GetNameForRecommendationStatus(RecommendationStatus enumValue)
        {
          switch(enumValue)
          {
          case RecommendationStatus::NOT_SET:
            return {};
          case RecommendationStatus::NONE:
            return "NONE";
          case RecommendationStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case RecommendationStatus::COMPLETED:
            return "COMPLETED";
          case RecommendationStatus::FAILED:
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

      } // namespace RecommendationStatusMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
