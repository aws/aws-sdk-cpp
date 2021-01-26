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

        static const int VERY_HIGH_HASH = HashingUtils::HashString("VERY_HIGH");
        static const int HIGH_HASH = HashingUtils::HashString("HIGH");
        static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
        static const int LOW_HASH = HashingUtils::HashString("LOW");


        ScoreConfidence GetScoreConfidenceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
          case ScoreConfidence::VERY_HIGH:
            return "VERY_HIGH";
          case ScoreConfidence::HIGH:
            return "HIGH";
          case ScoreConfidence::MEDIUM:
            return "MEDIUM";
          case ScoreConfidence::LOW:
            return "LOW";
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
