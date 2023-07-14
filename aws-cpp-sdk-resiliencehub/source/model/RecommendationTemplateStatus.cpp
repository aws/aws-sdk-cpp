/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/RecommendationTemplateStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ResilienceHub
  {
    namespace Model
    {
      namespace RecommendationTemplateStatusMapper
      {

        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Success_HASH = HashingUtils::HashString("Success");


        RecommendationTemplateStatus GetRecommendationTemplateStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return RecommendationTemplateStatus::Pending;
          }
          else if (hashCode == InProgress_HASH)
          {
            return RecommendationTemplateStatus::InProgress;
          }
          else if (hashCode == Failed_HASH)
          {
            return RecommendationTemplateStatus::Failed;
          }
          else if (hashCode == Success_HASH)
          {
            return RecommendationTemplateStatus::Success;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecommendationTemplateStatus>(hashCode);
          }

          return RecommendationTemplateStatus::NOT_SET;
        }

        Aws::String GetNameForRecommendationTemplateStatus(RecommendationTemplateStatus enumValue)
        {
          switch(enumValue)
          {
          case RecommendationTemplateStatus::Pending:
            return "Pending";
          case RecommendationTemplateStatus::InProgress:
            return "InProgress";
          case RecommendationTemplateStatus::Failed:
            return "Failed";
          case RecommendationTemplateStatus::Success:
            return "Success";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecommendationTemplateStatusMapper
    } // namespace Model
  } // namespace ResilienceHub
} // namespace Aws
