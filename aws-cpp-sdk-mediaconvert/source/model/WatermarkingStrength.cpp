/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/WatermarkingStrength.h>
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
      namespace WatermarkingStrengthMapper
      {

        static const int LIGHTEST_HASH = HashingUtils::HashString("LIGHTEST");
        static const int LIGHTER_HASH = HashingUtils::HashString("LIGHTER");
        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
        static const int STRONGER_HASH = HashingUtils::HashString("STRONGER");
        static const int STRONGEST_HASH = HashingUtils::HashString("STRONGEST");


        WatermarkingStrength GetWatermarkingStrengthForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LIGHTEST_HASH)
          {
            return WatermarkingStrength::LIGHTEST;
          }
          else if (hashCode == LIGHTER_HASH)
          {
            return WatermarkingStrength::LIGHTER;
          }
          else if (hashCode == DEFAULT_HASH)
          {
            return WatermarkingStrength::DEFAULT;
          }
          else if (hashCode == STRONGER_HASH)
          {
            return WatermarkingStrength::STRONGER;
          }
          else if (hashCode == STRONGEST_HASH)
          {
            return WatermarkingStrength::STRONGEST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WatermarkingStrength>(hashCode);
          }

          return WatermarkingStrength::NOT_SET;
        }

        Aws::String GetNameForWatermarkingStrength(WatermarkingStrength enumValue)
        {
          switch(enumValue)
          {
          case WatermarkingStrength::LIGHTEST:
            return "LIGHTEST";
          case WatermarkingStrength::LIGHTER:
            return "LIGHTER";
          case WatermarkingStrength::DEFAULT:
            return "DEFAULT";
          case WatermarkingStrength::STRONGER:
            return "STRONGER";
          case WatermarkingStrength::STRONGEST:
            return "STRONGEST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WatermarkingStrengthMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
