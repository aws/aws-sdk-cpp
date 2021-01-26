/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/H265AdaptiveQuantization.h>
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
      namespace H265AdaptiveQuantizationMapper
      {

        static const int OFF_HASH = HashingUtils::HashString("OFF");
        static const int LOW_HASH = HashingUtils::HashString("LOW");
        static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
        static const int HIGH_HASH = HashingUtils::HashString("HIGH");
        static const int HIGHER_HASH = HashingUtils::HashString("HIGHER");
        static const int MAX_HASH = HashingUtils::HashString("MAX");


        H265AdaptiveQuantization GetH265AdaptiveQuantizationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OFF_HASH)
          {
            return H265AdaptiveQuantization::OFF;
          }
          else if (hashCode == LOW_HASH)
          {
            return H265AdaptiveQuantization::LOW;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return H265AdaptiveQuantization::MEDIUM;
          }
          else if (hashCode == HIGH_HASH)
          {
            return H265AdaptiveQuantization::HIGH;
          }
          else if (hashCode == HIGHER_HASH)
          {
            return H265AdaptiveQuantization::HIGHER;
          }
          else if (hashCode == MAX_HASH)
          {
            return H265AdaptiveQuantization::MAX;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H265AdaptiveQuantization>(hashCode);
          }

          return H265AdaptiveQuantization::NOT_SET;
        }

        Aws::String GetNameForH265AdaptiveQuantization(H265AdaptiveQuantization enumValue)
        {
          switch(enumValue)
          {
          case H265AdaptiveQuantization::OFF:
            return "OFF";
          case H265AdaptiveQuantization::LOW:
            return "LOW";
          case H265AdaptiveQuantization::MEDIUM:
            return "MEDIUM";
          case H265AdaptiveQuantization::HIGH:
            return "HIGH";
          case H265AdaptiveQuantization::HIGHER:
            return "HIGHER";
          case H265AdaptiveQuantization::MAX:
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

      } // namespace H265AdaptiveQuantizationMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
