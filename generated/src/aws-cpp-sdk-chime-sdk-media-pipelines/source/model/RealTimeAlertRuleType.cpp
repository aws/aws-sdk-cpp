/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/RealTimeAlertRuleType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKMediaPipelines
  {
    namespace Model
    {
      namespace RealTimeAlertRuleTypeMapper
      {

        static const int KeywordMatch_HASH = HashingUtils::HashString("KeywordMatch");
        static const int Sentiment_HASH = HashingUtils::HashString("Sentiment");
        static const int IssueDetection_HASH = HashingUtils::HashString("IssueDetection");


        RealTimeAlertRuleType GetRealTimeAlertRuleTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == KeywordMatch_HASH)
          {
            return RealTimeAlertRuleType::KeywordMatch;
          }
          else if (hashCode == Sentiment_HASH)
          {
            return RealTimeAlertRuleType::Sentiment;
          }
          else if (hashCode == IssueDetection_HASH)
          {
            return RealTimeAlertRuleType::IssueDetection;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RealTimeAlertRuleType>(hashCode);
          }

          return RealTimeAlertRuleType::NOT_SET;
        }

        Aws::String GetNameForRealTimeAlertRuleType(RealTimeAlertRuleType enumValue)
        {
          switch(enumValue)
          {
          case RealTimeAlertRuleType::NOT_SET:
            return {};
          case RealTimeAlertRuleType::KeywordMatch:
            return "KeywordMatch";
          case RealTimeAlertRuleType::Sentiment:
            return "Sentiment";
          case RealTimeAlertRuleType::IssueDetection:
            return "IssueDetection";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RealTimeAlertRuleTypeMapper
    } // namespace Model
  } // namespace ChimeSDKMediaPipelines
} // namespace Aws
