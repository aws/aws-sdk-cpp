/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/ScoreConfidence.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace ScoreConfidenceMapper
      {

        static constexpr uint32_t VERY_HIGH_HASH = ConstExprHashingUtils::HashString("VERY_HIGH");
        static constexpr uint32_t HIGH_HASH = ConstExprHashingUtils::HashString("HIGH");
        static constexpr uint32_t MEDIUM_HASH = ConstExprHashingUtils::HashString("MEDIUM");
        static constexpr uint32_t LOW_HASH = ConstExprHashingUtils::HashString("LOW");
        static constexpr uint32_t NOT_AVAILABLE_HASH = ConstExprHashingUtils::HashString("NOT_AVAILABLE");


        ScoreConfidence GetScoreConfidenceForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VERY_HIGH_HASH)
          {
            return ScoreConfidence::VERY_HIGH;
          }
          else if (hashCode == HIGH_HASH)
          {
            return ScoreConfidence::HIGH;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return ScoreConfidence::MEDIUM;
          }
          else if (hashCode == LOW_HASH)
          {
            return ScoreConfidence::LOW;
          }
          else if (hashCode == NOT_AVAILABLE_HASH)
          {
            return ScoreConfidence::NOT_AVAILABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScoreConfidence>(hashCode);
          }

          return ScoreConfidence::NOT_SET;
        }

        Aws::String GetNameForScoreConfidence(ScoreConfidence enumValue)
        {
          switch(enumValue)
          {
          case ScoreConfidence::NOT_SET:
            return {};
          case ScoreConfidence::VERY_HIGH:
            return "VERY_HIGH";
          case ScoreConfidence::HIGH:
            return "HIGH";
          case ScoreConfidence::MEDIUM:
            return "MEDIUM";
          case ScoreConfidence::LOW:
            return "LOW";
          case ScoreConfidence::NOT_AVAILABLE:
            return "NOT_AVAILABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScoreConfidenceMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
