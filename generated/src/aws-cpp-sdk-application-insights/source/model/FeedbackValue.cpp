/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/FeedbackValue.h>
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
      namespace FeedbackValueMapper
      {

        static constexpr uint32_t NOT_SPECIFIED_HASH = ConstExprHashingUtils::HashString("NOT_SPECIFIED");
        static constexpr uint32_t USEFUL_HASH = ConstExprHashingUtils::HashString("USEFUL");
        static constexpr uint32_t NOT_USEFUL_HASH = ConstExprHashingUtils::HashString("NOT_USEFUL");


        FeedbackValue GetFeedbackValueForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_SPECIFIED_HASH)
          {
            return FeedbackValue::NOT_SPECIFIED;
          }
          else if (hashCode == USEFUL_HASH)
          {
            return FeedbackValue::USEFUL;
          }
          else if (hashCode == NOT_USEFUL_HASH)
          {
            return FeedbackValue::NOT_USEFUL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FeedbackValue>(hashCode);
          }

          return FeedbackValue::NOT_SET;
        }

        Aws::String GetNameForFeedbackValue(FeedbackValue enumValue)
        {
          switch(enumValue)
          {
          case FeedbackValue::NOT_SET:
            return {};
          case FeedbackValue::NOT_SPECIFIED:
            return "NOT_SPECIFIED";
          case FeedbackValue::USEFUL:
            return "USEFUL";
          case FeedbackValue::NOT_USEFUL:
            return "NOT_USEFUL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FeedbackValueMapper
    } // namespace Model
  } // namespace ApplicationInsights
} // namespace Aws
