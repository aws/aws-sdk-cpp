/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/H264AdaptiveQuantization.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace H264AdaptiveQuantizationMapper
      {

        static const int OFF_HASH = HashingUtils::HashString("OFF");
        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int LOW_HASH = HashingUtils::HashString("LOW");
        static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
        static const int HIGH_HASH = HashingUtils::HashString("HIGH");
        static const int HIGHER_HASH = HashingUtils::HashString("HIGHER");
        static const int MAX_HASH = HashingUtils::HashString("MAX");


        H264AdaptiveQuantization GetH264AdaptiveQuantizationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OFF_HASH)
          {
            return H264AdaptiveQuantization::OFF;
          }
          else if (hashCode == AUTO_HASH)
          {
            return H264AdaptiveQuantization::AUTO;
          }
          else if (hashCode == LOW_HASH)
          {
            return H264AdaptiveQuantization::LOW;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return H264AdaptiveQuantization::MEDIUM;
          }
          else if (hashCode == HIGH_HASH)
          {
            return H264AdaptiveQuantization::HIGH;
          }
          else if (hashCode == HIGHER_HASH)
          {
            return H264AdaptiveQuantization::HIGHER;
          }
          else if (hashCode == MAX_HASH)
          {
            return H264AdaptiveQuantization::MAX;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H264AdaptiveQuantization>(hashCode);
          }

          return H264AdaptiveQuantization::NOT_SET;
        }

        Aws::String GetNameForH264AdaptiveQuantization(H264AdaptiveQuantization enumValue)
        {
          switch(enumValue)
          {
          case H264AdaptiveQuantization::OFF:
            return "OFF";
          case H264AdaptiveQuantization::AUTO:
            return "AUTO";
          case H264AdaptiveQuantization::LOW:
            return "LOW";
          case H264AdaptiveQuantization::MEDIUM:
            return "MEDIUM";
          case H264AdaptiveQuantization::HIGH:
            return "HIGH";
          case H264AdaptiveQuantization::HIGHER:
            return "HIGHER";
          case H264AdaptiveQuantization::MAX:
            return "MAX";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace H264AdaptiveQuantizationMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
