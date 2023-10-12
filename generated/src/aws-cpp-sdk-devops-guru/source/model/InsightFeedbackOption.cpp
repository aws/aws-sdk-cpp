/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/InsightFeedbackOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DevOpsGuru
  {
    namespace Model
    {
      namespace InsightFeedbackOptionMapper
      {

        static constexpr uint32_t VALID_COLLECTION_HASH = ConstExprHashingUtils::HashString("VALID_COLLECTION");
        static constexpr uint32_t RECOMMENDATION_USEFUL_HASH = ConstExprHashingUtils::HashString("RECOMMENDATION_USEFUL");
        static constexpr uint32_t ALERT_TOO_SENSITIVE_HASH = ConstExprHashingUtils::HashString("ALERT_TOO_SENSITIVE");
        static constexpr uint32_t DATA_NOISY_ANOMALY_HASH = ConstExprHashingUtils::HashString("DATA_NOISY_ANOMALY");
        static constexpr uint32_t DATA_INCORRECT_HASH = ConstExprHashingUtils::HashString("DATA_INCORRECT");


        InsightFeedbackOption GetInsightFeedbackOptionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VALID_COLLECTION_HASH)
          {
            return InsightFeedbackOption::VALID_COLLECTION;
          }
          else if (hashCode == RECOMMENDATION_USEFUL_HASH)
          {
            return InsightFeedbackOption::RECOMMENDATION_USEFUL;
          }
          else if (hashCode == ALERT_TOO_SENSITIVE_HASH)
          {
            return InsightFeedbackOption::ALERT_TOO_SENSITIVE;
          }
          else if (hashCode == DATA_NOISY_ANOMALY_HASH)
          {
            return InsightFeedbackOption::DATA_NOISY_ANOMALY;
          }
          else if (hashCode == DATA_INCORRECT_HASH)
          {
            return InsightFeedbackOption::DATA_INCORRECT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InsightFeedbackOption>(hashCode);
          }

          return InsightFeedbackOption::NOT_SET;
        }

        Aws::String GetNameForInsightFeedbackOption(InsightFeedbackOption enumValue)
        {
          switch(enumValue)
          {
          case InsightFeedbackOption::NOT_SET:
            return {};
          case InsightFeedbackOption::VALID_COLLECTION:
            return "VALID_COLLECTION";
          case InsightFeedbackOption::RECOMMENDATION_USEFUL:
            return "RECOMMENDATION_USEFUL";
          case InsightFeedbackOption::ALERT_TOO_SENSITIVE:
            return "ALERT_TOO_SENSITIVE";
          case InsightFeedbackOption::DATA_NOISY_ANOMALY:
            return "DATA_NOISY_ANOMALY";
          case InsightFeedbackOption::DATA_INCORRECT:
            return "DATA_INCORRECT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InsightFeedbackOptionMapper
    } // namespace Model
  } // namespace DevOpsGuru
} // namespace Aws
