/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RealTimeContactAnalysisPostContactSummaryFailureCode.h>
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
      namespace RealTimeContactAnalysisPostContactSummaryFailureCodeMapper
      {

        static const int QUOTA_EXCEEDED_HASH = HashingUtils::HashString("QUOTA_EXCEEDED");
        static const int INSUFFICIENT_CONVERSATION_CONTENT_HASH = HashingUtils::HashString("INSUFFICIENT_CONVERSATION_CONTENT");
        static const int FAILED_SAFETY_GUIDELINES_HASH = HashingUtils::HashString("FAILED_SAFETY_GUIDELINES");
        static const int INVALID_ANALYSIS_CONFIGURATION_HASH = HashingUtils::HashString("INVALID_ANALYSIS_CONFIGURATION");
        static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");


        RealTimeContactAnalysisPostContactSummaryFailureCode GetRealTimeContactAnalysisPostContactSummaryFailureCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUOTA_EXCEEDED_HASH)
          {
            return RealTimeContactAnalysisPostContactSummaryFailureCode::QUOTA_EXCEEDED;
          }
          else if (hashCode == INSUFFICIENT_CONVERSATION_CONTENT_HASH)
          {
            return RealTimeContactAnalysisPostContactSummaryFailureCode::INSUFFICIENT_CONVERSATION_CONTENT;
          }
          else if (hashCode == FAILED_SAFETY_GUIDELINES_HASH)
          {
            return RealTimeContactAnalysisPostContactSummaryFailureCode::FAILED_SAFETY_GUIDELINES;
          }
          else if (hashCode == INVALID_ANALYSIS_CONFIGURATION_HASH)
          {
            return RealTimeContactAnalysisPostContactSummaryFailureCode::INVALID_ANALYSIS_CONFIGURATION;
          }
          else if (hashCode == INTERNAL_ERROR_HASH)
          {
            return RealTimeContactAnalysisPostContactSummaryFailureCode::INTERNAL_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RealTimeContactAnalysisPostContactSummaryFailureCode>(hashCode);
          }

          return RealTimeContactAnalysisPostContactSummaryFailureCode::NOT_SET;
        }

        Aws::String GetNameForRealTimeContactAnalysisPostContactSummaryFailureCode(RealTimeContactAnalysisPostContactSummaryFailureCode enumValue)
        {
          switch(enumValue)
          {
          case RealTimeContactAnalysisPostContactSummaryFailureCode::NOT_SET:
            return {};
          case RealTimeContactAnalysisPostContactSummaryFailureCode::QUOTA_EXCEEDED:
            return "QUOTA_EXCEEDED";
          case RealTimeContactAnalysisPostContactSummaryFailureCode::INSUFFICIENT_CONVERSATION_CONTENT:
            return "INSUFFICIENT_CONVERSATION_CONTENT";
          case RealTimeContactAnalysisPostContactSummaryFailureCode::FAILED_SAFETY_GUIDELINES:
            return "FAILED_SAFETY_GUIDELINES";
          case RealTimeContactAnalysisPostContactSummaryFailureCode::INVALID_ANALYSIS_CONFIGURATION:
            return "INVALID_ANALYSIS_CONFIGURATION";
          case RealTimeContactAnalysisPostContactSummaryFailureCode::INTERNAL_ERROR:
            return "INTERNAL_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RealTimeContactAnalysisPostContactSummaryFailureCodeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
