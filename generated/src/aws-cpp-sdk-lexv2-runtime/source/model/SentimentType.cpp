/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/SentimentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexRuntimeV2
  {
    namespace Model
    {
      namespace SentimentTypeMapper
      {

        static constexpr uint32_t MIXED_HASH = ConstExprHashingUtils::HashString("MIXED");
        static constexpr uint32_t NEGATIVE_HASH = ConstExprHashingUtils::HashString("NEGATIVE");
        static constexpr uint32_t NEUTRAL_HASH = ConstExprHashingUtils::HashString("NEUTRAL");
        static constexpr uint32_t POSITIVE_HASH = ConstExprHashingUtils::HashString("POSITIVE");


        SentimentType GetSentimentTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MIXED_HASH)
          {
            return SentimentType::MIXED;
          }
          else if (hashCode == NEGATIVE_HASH)
          {
            return SentimentType::NEGATIVE;
          }
          else if (hashCode == NEUTRAL_HASH)
          {
            return SentimentType::NEUTRAL;
          }
          else if (hashCode == POSITIVE_HASH)
          {
            return SentimentType::POSITIVE;
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
          case SentimentType::NOT_SET:
            return {};
          case SentimentType::MIXED:
            return "MIXED";
          case SentimentType::NEGATIVE:
            return "NEGATIVE";
          case SentimentType::NEUTRAL:
            return "NEUTRAL";
          case SentimentType::POSITIVE:
            return "POSITIVE";
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
  } // namespace LexRuntimeV2
} // namespace Aws
