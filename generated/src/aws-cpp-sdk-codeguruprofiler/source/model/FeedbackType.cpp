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

        static const int Positive_HASH = HashingUtils::HashString("Positive");
        static const int Negative_HASH = HashingUtils::HashString("Negative");


        FeedbackType GetFeedbackTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Positive_HASH)
          {
            return FeedbackType::Positive;
          }
          else if (hashCode == Negative_HASH)
          {
            return FeedbackType::Negative;
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
          case FeedbackType::Positive:
            return "Positive";
          case FeedbackType::Negative:
            return "Negative";
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
