/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/FeedbackKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationInsights
  {
    namespace Model
    {
      namespace FeedbackKeyMapper
      {

        static const int INSIGHTS_FEEDBACK_HASH = HashingUtils::HashString("INSIGHTS_FEEDBACK");


        FeedbackKey GetFeedbackKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INSIGHTS_FEEDBACK_HASH)
          {
            return FeedbackKey::INSIGHTS_FEEDBACK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FeedbackKey>(hashCode);
          }

          return FeedbackKey::NOT_SET;
        }

        Aws::String GetNameForFeedbackKey(FeedbackKey enumValue)
        {
          switch(enumValue)
          {
          case FeedbackKey::INSIGHTS_FEEDBACK:
            return "INSIGHTS_FEEDBACK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FeedbackKeyMapper
    } // namespace Model
  } // namespace ApplicationInsights
} // namespace Aws
