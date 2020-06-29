/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/model/FeedbackType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeGuruProfiler
  {
    namespace Model
    {
      namespace FeedbackTypeMapper
      {

        static const int Negative_HASH = HashingUtils::HashString("Negative");
        static const int Positive_HASH = HashingUtils::HashString("Positive");


        FeedbackType GetFeedbackTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Negative_HASH)
          {
            return FeedbackType::Negative;
          }
          else if (hashCode == Positive_HASH)
          {
            return FeedbackType::Positive;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FeedbackType>(hashCode);
          }

          return FeedbackType::NOT_SET;
        }

        Aws::String GetNameForFeedbackType(FeedbackType enumValue)
        {
          switch(enumValue)
          {
          case FeedbackType::Negative:
            return "Negative";
          case FeedbackType::Positive:
            return "Positive";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FeedbackTypeMapper
    } // namespace Model
  } // namespace CodeGuruProfiler
} // namespace Aws
