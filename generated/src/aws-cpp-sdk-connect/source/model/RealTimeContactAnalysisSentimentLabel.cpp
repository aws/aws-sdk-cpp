/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RealTimeContactAnalysisSentimentLabel.h>
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
      namespace RealTimeContactAnalysisSentimentLabelMapper
      {

        static const int POSITIVE_HASH = HashingUtils::HashString("POSITIVE");
        static const int NEGATIVE_HASH = HashingUtils::HashString("NEGATIVE");
        static const int NEUTRAL_HASH = HashingUtils::HashString("NEUTRAL");


        RealTimeContactAnalysisSentimentLabel GetRealTimeContactAnalysisSentimentLabelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == POSITIVE_HASH)
          {
            return RealTimeContactAnalysisSentimentLabel::POSITIVE;
          }
          else if (hashCode == NEGATIVE_HASH)
          {
            return RealTimeContactAnalysisSentimentLabel::NEGATIVE;
          }
          else if (hashCode == NEUTRAL_HASH)
          {
            return RealTimeContactAnalysisSentimentLabel::NEUTRAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RealTimeContactAnalysisSentimentLabel>(hashCode);
          }

          return RealTimeContactAnalysisSentimentLabel::NOT_SET;
        }

        Aws::String GetNameForRealTimeContactAnalysisSentimentLabel(RealTimeContactAnalysisSentimentLabel enumValue)
        {
          switch(enumValue)
          {
          case RealTimeContactAnalysisSentimentLabel::NOT_SET:
            return {};
          case RealTimeContactAnalysisSentimentLabel::POSITIVE:
            return "POSITIVE";
          case RealTimeContactAnalysisSentimentLabel::NEGATIVE:
            return "NEGATIVE";
          case RealTimeContactAnalysisSentimentLabel::NEUTRAL:
            return "NEUTRAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RealTimeContactAnalysisSentimentLabelMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
