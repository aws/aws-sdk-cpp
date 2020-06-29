/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/TemporalFilterStrength.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace TemporalFilterStrengthMapper
      {

        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int STRENGTH_1_HASH = HashingUtils::HashString("STRENGTH_1");
        static const int STRENGTH_2_HASH = HashingUtils::HashString("STRENGTH_2");
        static const int STRENGTH_3_HASH = HashingUtils::HashString("STRENGTH_3");
        static const int STRENGTH_4_HASH = HashingUtils::HashString("STRENGTH_4");
        static const int STRENGTH_5_HASH = HashingUtils::HashString("STRENGTH_5");
        static const int STRENGTH_6_HASH = HashingUtils::HashString("STRENGTH_6");
        static const int STRENGTH_7_HASH = HashingUtils::HashString("STRENGTH_7");
        static const int STRENGTH_8_HASH = HashingUtils::HashString("STRENGTH_8");
        static const int STRENGTH_9_HASH = HashingUtils::HashString("STRENGTH_9");
        static const int STRENGTH_10_HASH = HashingUtils::HashString("STRENGTH_10");
        static const int STRENGTH_11_HASH = HashingUtils::HashString("STRENGTH_11");
        static const int STRENGTH_12_HASH = HashingUtils::HashString("STRENGTH_12");
        static const int STRENGTH_13_HASH = HashingUtils::HashString("STRENGTH_13");
        static const int STRENGTH_14_HASH = HashingUtils::HashString("STRENGTH_14");
        static const int STRENGTH_15_HASH = HashingUtils::HashString("STRENGTH_15");
        static const int STRENGTH_16_HASH = HashingUtils::HashString("STRENGTH_16");


        TemporalFilterStrength GetTemporalFilterStrengthForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return TemporalFilterStrength::AUTO;
          }
          else if (hashCode == STRENGTH_1_HASH)
          {
            return TemporalFilterStrength::STRENGTH_1;
          }
          else if (hashCode == STRENGTH_2_HASH)
          {
            return TemporalFilterStrength::STRENGTH_2;
          }
          else if (hashCode == STRENGTH_3_HASH)
          {
            return TemporalFilterStrength::STRENGTH_3;
          }
          else if (hashCode == STRENGTH_4_HASH)
          {
            return TemporalFilterStrength::STRENGTH_4;
          }
          else if (hashCode == STRENGTH_5_HASH)
          {
            return TemporalFilterStrength::STRENGTH_5;
          }
          else if (hashCode == STRENGTH_6_HASH)
          {
            return TemporalFilterStrength::STRENGTH_6;
          }
          else if (hashCode == STRENGTH_7_HASH)
          {
            return TemporalFilterStrength::STRENGTH_7;
          }
          else if (hashCode == STRENGTH_8_HASH)
          {
            return TemporalFilterStrength::STRENGTH_8;
          }
          else if (hashCode == STRENGTH_9_HASH)
          {
            return TemporalFilterStrength::STRENGTH_9;
          }
          else if (hashCode == STRENGTH_10_HASH)
          {
            return TemporalFilterStrength::STRENGTH_10;
          }
          else if (hashCode == STRENGTH_11_HASH)
          {
            return TemporalFilterStrength::STRENGTH_11;
          }
          else if (hashCode == STRENGTH_12_HASH)
          {
            return TemporalFilterStrength::STRENGTH_12;
          }
          else if (hashCode == STRENGTH_13_HASH)
          {
            return TemporalFilterStrength::STRENGTH_13;
          }
          else if (hashCode == STRENGTH_14_HASH)
          {
            return TemporalFilterStrength::STRENGTH_14;
          }
          else if (hashCode == STRENGTH_15_HASH)
          {
            return TemporalFilterStrength::STRENGTH_15;
          }
          else if (hashCode == STRENGTH_16_HASH)
          {
            return TemporalFilterStrength::STRENGTH_16;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TemporalFilterStrength>(hashCode);
          }

          return TemporalFilterStrength::NOT_SET;
        }

        Aws::String GetNameForTemporalFilterStrength(TemporalFilterStrength enumValue)
        {
          switch(enumValue)
          {
          case TemporalFilterStrength::AUTO:
            return "AUTO";
          case TemporalFilterStrength::STRENGTH_1:
            return "STRENGTH_1";
          case TemporalFilterStrength::STRENGTH_2:
            return "STRENGTH_2";
          case TemporalFilterStrength::STRENGTH_3:
            return "STRENGTH_3";
          case TemporalFilterStrength::STRENGTH_4:
            return "STRENGTH_4";
          case TemporalFilterStrength::STRENGTH_5:
            return "STRENGTH_5";
          case TemporalFilterStrength::STRENGTH_6:
            return "STRENGTH_6";
          case TemporalFilterStrength::STRENGTH_7:
            return "STRENGTH_7";
          case TemporalFilterStrength::STRENGTH_8:
            return "STRENGTH_8";
          case TemporalFilterStrength::STRENGTH_9:
            return "STRENGTH_9";
          case TemporalFilterStrength::STRENGTH_10:
            return "STRENGTH_10";
          case TemporalFilterStrength::STRENGTH_11:
            return "STRENGTH_11";
          case TemporalFilterStrength::STRENGTH_12:
            return "STRENGTH_12";
          case TemporalFilterStrength::STRENGTH_13:
            return "STRENGTH_13";
          case TemporalFilterStrength::STRENGTH_14:
            return "STRENGTH_14";
          case TemporalFilterStrength::STRENGTH_15:
            return "STRENGTH_15";
          case TemporalFilterStrength::STRENGTH_16:
            return "STRENGTH_16";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TemporalFilterStrengthMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
