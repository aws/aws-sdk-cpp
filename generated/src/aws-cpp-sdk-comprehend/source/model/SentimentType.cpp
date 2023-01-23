/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/SentimentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Comprehend
  {
    namespace Model
    {
      namespace SentimentTypeMapper
      {

        static const int POSITIVE_HASH = HashingUtils::HashString("POSITIVE");
        static const int NEGATIVE_HASH = HashingUtils::HashString("NEGATIVE");
        static const int NEUTRAL_HASH = HashingUtils::HashString("NEUTRAL");
        static const int MIXED_HASH = HashingUtils::HashString("MIXED");


        SentimentType GetSentimentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == POSITIVE_HASH)
          {
            return SentimentType::POSITIVE;
          }
          else if (hashCode == NEGATIVE_HASH)
          {
            return SentimentType::NEGATIVE;
          }
          else if (hashCode == NEUTRAL_HASH)
          {
            return SentimentType::NEUTRAL;
          }
          else if (hashCode == MIXED_HASH)
          {
            return SentimentType::MIXED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SentimentType>(hashCode);
          }

          return SentimentType::NOT_SET;
        }

        Aws::String GetNameForSentimentType(SentimentType enumValue)
        {
          switch(enumValue)
          {
          case SentimentType::POSITIVE:
            return "POSITIVE";
          case SentimentType::NEGATIVE:
            return "NEGATIVE";
          case SentimentType::NEUTRAL:
            return "NEUTRAL";
          case SentimentType::MIXED:
            return "MIXED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SentimentTypeMapper
    } // namespace Model
  } // namespace Comprehend
} // namespace Aws
