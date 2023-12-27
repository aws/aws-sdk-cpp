/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/Timezone.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace TimezoneMapper
      {

        static const int UTC_HASH = HashingUtils::HashString("UTC");
        static const int AFRICA_JOHANNESBURG_HASH = HashingUtils::HashString("AFRICA_JOHANNESBURG");
        static const int AMERICA_MONTREAL_HASH = HashingUtils::HashString("AMERICA_MONTREAL");
        static const int AMERICA_SAO_PAULO_HASH = HashingUtils::HashString("AMERICA_SAO_PAULO");
        static const int ASIA_BAHRAIN_HASH = HashingUtils::HashString("ASIA_BAHRAIN");
        static const int ASIA_BANGKOK_HASH = HashingUtils::HashString("ASIA_BANGKOK");
        static const int ASIA_CALCUTTA_HASH = HashingUtils::HashString("ASIA_CALCUTTA");
        static const int ASIA_DUBAI_HASH = HashingUtils::HashString("ASIA_DUBAI");
        static const int ASIA_HONG_KONG_HASH = HashingUtils::HashString("ASIA_HONG_KONG");
        static const int ASIA_JAKARTA_HASH = HashingUtils::HashString("ASIA_JAKARTA");
        static const int ASIA_KUALA_LUMPUR_HASH = HashingUtils::HashString("ASIA_KUALA_LUMPUR");
        static const int ASIA_SEOUL_HASH = HashingUtils::HashString("ASIA_SEOUL");
        static const int ASIA_SHANGHAI_HASH = HashingUtils::HashString("ASIA_SHANGHAI");
        static const int ASIA_SINGAPORE_HASH = HashingUtils::HashString("ASIA_SINGAPORE");
        static const int ASIA_TAIPEI_HASH = HashingUtils::HashString("ASIA_TAIPEI");
        static const int ASIA_TOKYO_HASH = HashingUtils::HashString("ASIA_TOKYO");
        static const int AUSTRALIA_MELBOURNE_HASH = HashingUtils::HashString("AUSTRALIA_MELBOURNE");
        static const int AUSTRALIA_SYDNEY_HASH = HashingUtils::HashString("AUSTRALIA_SYDNEY");
        static const int CANADA_CENTRAL_HASH = HashingUtils::HashString("CANADA_CENTRAL");
        static const int CET_HASH = HashingUtils::HashString("CET");
        static const int CST6CDT_HASH = HashingUtils::HashString("CST6CDT");
        static const int ETC_GMT_HASH = HashingUtils::HashString("ETC_GMT");
        static const int ETC_GMT0_HASH = HashingUtils::HashString("ETC_GMT0");
        static const int ETC_GMT_ADD_0_HASH = HashingUtils::HashString("ETC_GMT_ADD_0");
        static const int ETC_GMT_ADD_1_HASH = HashingUtils::HashString("ETC_GMT_ADD_1");
        static const int ETC_GMT_ADD_10_HASH = HashingUtils::HashString("ETC_GMT_ADD_10");
        static const int ETC_GMT_ADD_11_HASH = HashingUtils::HashString("ETC_GMT_ADD_11");
        static const int ETC_GMT_ADD_12_HASH = HashingUtils::HashString("ETC_GMT_ADD_12");
        static const int ETC_GMT_ADD_2_HASH = HashingUtils::HashString("ETC_GMT_ADD_2");
        static const int ETC_GMT_ADD_3_HASH = HashingUtils::HashString("ETC_GMT_ADD_3");
        static const int ETC_GMT_ADD_4_HASH = HashingUtils::HashString("ETC_GMT_ADD_4");
        static const int ETC_GMT_ADD_5_HASH = HashingUtils::HashString("ETC_GMT_ADD_5");
        static const int ETC_GMT_ADD_6_HASH = HashingUtils::HashString("ETC_GMT_ADD_6");
        static const int ETC_GMT_ADD_7_HASH = HashingUtils::HashString("ETC_GMT_ADD_7");
        static const int ETC_GMT_ADD_8_HASH = HashingUtils::HashString("ETC_GMT_ADD_8");
        static const int ETC_GMT_ADD_9_HASH = HashingUtils::HashString("ETC_GMT_ADD_9");
        static const int ETC_GMT_NEG_0_HASH = HashingUtils::HashString("ETC_GMT_NEG_0");
        static const int ETC_GMT_NEG_1_HASH = HashingUtils::HashString("ETC_GMT_NEG_1");
        static const int ETC_GMT_NEG_10_HASH = HashingUtils::HashString("ETC_GMT_NEG_10");
        static const int ETC_GMT_NEG_11_HASH = HashingUtils::HashString("ETC_GMT_NEG_11");
        static const int ETC_GMT_NEG_12_HASH = HashingUtils::HashString("ETC_GMT_NEG_12");
        static const int ETC_GMT_NEG_13_HASH = HashingUtils::HashString("ETC_GMT_NEG_13");
        static const int ETC_GMT_NEG_14_HASH = HashingUtils::HashString("ETC_GMT_NEG_14");
        static const int ETC_GMT_NEG_2_HASH = HashingUtils::HashString("ETC_GMT_NEG_2");
        static const int ETC_GMT_NEG_3_HASH = HashingUtils::HashString("ETC_GMT_NEG_3");
        static const int ETC_GMT_NEG_4_HASH = HashingUtils::HashString("ETC_GMT_NEG_4");
        static const int ETC_GMT_NEG_5_HASH = HashingUtils::HashString("ETC_GMT_NEG_5");
        static const int ETC_GMT_NEG_6_HASH = HashingUtils::HashString("ETC_GMT_NEG_6");
        static const int ETC_GMT_NEG_7_HASH = HashingUtils::HashString("ETC_GMT_NEG_7");
        static const int ETC_GMT_NEG_8_HASH = HashingUtils::HashString("ETC_GMT_NEG_8");
        static const int ETC_GMT_NEG_9_HASH = HashingUtils::HashString("ETC_GMT_NEG_9");
        static const int EUROPE_DUBLIN_HASH = HashingUtils::HashString("EUROPE_DUBLIN");
        static const int EUROPE_LONDON_HASH = HashingUtils::HashString("EUROPE_LONDON");
        static const int EUROPE_PARIS_HASH = HashingUtils::HashString("EUROPE_PARIS");
        static const int EUROPE_STOCKHOLM_HASH = HashingUtils::HashString("EUROPE_STOCKHOLM");
        static const int EUROPE_ZURICH_HASH = HashingUtils::HashString("EUROPE_ZURICH");
        static const int ISRAEL_HASH = HashingUtils::HashString("ISRAEL");
        static const int MEXICO_GENERAL_HASH = HashingUtils::HashString("MEXICO_GENERAL");
        static const int MST7MDT_HASH = HashingUtils::HashString("MST7MDT");
        static const int PACIFIC_AUCKLAND_HASH = HashingUtils::HashString("PACIFIC_AUCKLAND");
        static const int US_CENTRAL_HASH = HashingUtils::HashString("US_CENTRAL");
        static const int US_EASTERN_HASH = HashingUtils::HashString("US_EASTERN");
        static const int US_MOUNTAIN_HASH = HashingUtils::HashString("US_MOUNTAIN");
        static const int US_PACIFIC_HASH = HashingUtils::HashString("US_PACIFIC");


        Timezone GetTimezoneForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UTC_HASH)
          {
            return Timezone::UTC;
          }
          else if (hashCode == AFRICA_JOHANNESBURG_HASH)
          {
            return Timezone::AFRICA_JOHANNESBURG;
          }
          else if (hashCode == AMERICA_MONTREAL_HASH)
          {
            return Timezone::AMERICA_MONTREAL;
          }
          else if (hashCode == AMERICA_SAO_PAULO_HASH)
          {
            return Timezone::AMERICA_SAO_PAULO;
          }
          else if (hashCode == ASIA_BAHRAIN_HASH)
          {
            return Timezone::ASIA_BAHRAIN;
          }
          else if (hashCode == ASIA_BANGKOK_HASH)
          {
            return Timezone::ASIA_BANGKOK;
          }
          else if (hashCode == ASIA_CALCUTTA_HASH)
          {
            return Timezone::ASIA_CALCUTTA;
          }
          else if (hashCode == ASIA_DUBAI_HASH)
          {
            return Timezone::ASIA_DUBAI;
          }
          else if (hashCode == ASIA_HONG_KONG_HASH)
          {
            return Timezone::ASIA_HONG_KONG;
          }
          else if (hashCode == ASIA_JAKARTA_HASH)
          {
            return Timezone::ASIA_JAKARTA;
          }
          else if (hashCode == ASIA_KUALA_LUMPUR_HASH)
          {
            return Timezone::ASIA_KUALA_LUMPUR;
          }
          else if (hashCode == ASIA_SEOUL_HASH)
          {
            return Timezone::ASIA_SEOUL;
          }
          else if (hashCode == ASIA_SHANGHAI_HASH)
          {
            return Timezone::ASIA_SHANGHAI;
          }
          else if (hashCode == ASIA_SINGAPORE_HASH)
          {
            return Timezone::ASIA_SINGAPORE;
          }
          else if (hashCode == ASIA_TAIPEI_HASH)
          {
            return Timezone::ASIA_TAIPEI;
          }
          else if (hashCode == ASIA_TOKYO_HASH)
          {
            return Timezone::ASIA_TOKYO;
          }
          else if (hashCode == AUSTRALIA_MELBOURNE_HASH)
          {
            return Timezone::AUSTRALIA_MELBOURNE;
          }
          else if (hashCode == AUSTRALIA_SYDNEY_HASH)
          {
            return Timezone::AUSTRALIA_SYDNEY;
          }
          else if (hashCode == CANADA_CENTRAL_HASH)
          {
            return Timezone::CANADA_CENTRAL;
          }
          else if (hashCode == CET_HASH)
          {
            return Timezone::CET;
          }
          else if (hashCode == CST6CDT_HASH)
          {
            return Timezone::CST6CDT;
          }
          else if (hashCode == ETC_GMT_HASH)
          {
            return Timezone::ETC_GMT;
          }
          else if (hashCode == ETC_GMT0_HASH)
          {
            return Timezone::ETC_GMT0;
          }
          else if (hashCode == ETC_GMT_ADD_0_HASH)
          {
            return Timezone::ETC_GMT_ADD_0;
          }
          else if (hashCode == ETC_GMT_ADD_1_HASH)
          {
            return Timezone::ETC_GMT_ADD_1;
          }
          else if (hashCode == ETC_GMT_ADD_10_HASH)
          {
            return Timezone::ETC_GMT_ADD_10;
          }
          else if (hashCode == ETC_GMT_ADD_11_HASH)
          {
            return Timezone::ETC_GMT_ADD_11;
          }
          else if (hashCode == ETC_GMT_ADD_12_HASH)
          {
            return Timezone::ETC_GMT_ADD_12;
          }
          else if (hashCode == ETC_GMT_ADD_2_HASH)
          {
            return Timezone::ETC_GMT_ADD_2;
          }
          else if (hashCode == ETC_GMT_ADD_3_HASH)
          {
            return Timezone::ETC_GMT_ADD_3;
          }
          else if (hashCode == ETC_GMT_ADD_4_HASH)
          {
            return Timezone::ETC_GMT_ADD_4;
          }
          else if (hashCode == ETC_GMT_ADD_5_HASH)
          {
            return Timezone::ETC_GMT_ADD_5;
          }
          else if (hashCode == ETC_GMT_ADD_6_HASH)
          {
            return Timezone::ETC_GMT_ADD_6;
          }
          else if (hashCode == ETC_GMT_ADD_7_HASH)
          {
            return Timezone::ETC_GMT_ADD_7;
          }
          else if (hashCode == ETC_GMT_ADD_8_HASH)
          {
            return Timezone::ETC_GMT_ADD_8;
          }
          else if (hashCode == ETC_GMT_ADD_9_HASH)
          {
            return Timezone::ETC_GMT_ADD_9;
          }
          else if (hashCode == ETC_GMT_NEG_0_HASH)
          {
            return Timezone::ETC_GMT_NEG_0;
          }
          else if (hashCode == ETC_GMT_NEG_1_HASH)
          {
            return Timezone::ETC_GMT_NEG_1;
          }
          else if (hashCode == ETC_GMT_NEG_10_HASH)
          {
            return Timezone::ETC_GMT_NEG_10;
          }
          else if (hashCode == ETC_GMT_NEG_11_HASH)
          {
            return Timezone::ETC_GMT_NEG_11;
          }
          else if (hashCode == ETC_GMT_NEG_12_HASH)
          {
            return Timezone::ETC_GMT_NEG_12;
          }
          else if (hashCode == ETC_GMT_NEG_13_HASH)
          {
            return Timezone::ETC_GMT_NEG_13;
          }
          else if (hashCode == ETC_GMT_NEG_14_HASH)
          {
            return Timezone::ETC_GMT_NEG_14;
          }
          else if (hashCode == ETC_GMT_NEG_2_HASH)
          {
            return Timezone::ETC_GMT_NEG_2;
          }
          else if (hashCode == ETC_GMT_NEG_3_HASH)
          {
            return Timezone::ETC_GMT_NEG_3;
          }
          else if (hashCode == ETC_GMT_NEG_4_HASH)
          {
            return Timezone::ETC_GMT_NEG_4;
          }
          else if (hashCode == ETC_GMT_NEG_5_HASH)
          {
            return Timezone::ETC_GMT_NEG_5;
          }
          else if (hashCode == ETC_GMT_NEG_6_HASH)
          {
            return Timezone::ETC_GMT_NEG_6;
          }
          else if (hashCode == ETC_GMT_NEG_7_HASH)
          {
            return Timezone::ETC_GMT_NEG_7;
          }
          else if (hashCode == ETC_GMT_NEG_8_HASH)
          {
            return Timezone::ETC_GMT_NEG_8;
          }
          else if (hashCode == ETC_GMT_NEG_9_HASH)
          {
            return Timezone::ETC_GMT_NEG_9;
          }
          else if (hashCode == EUROPE_DUBLIN_HASH)
          {
            return Timezone::EUROPE_DUBLIN;
          }
          else if (hashCode == EUROPE_LONDON_HASH)
          {
            return Timezone::EUROPE_LONDON;
          }
          else if (hashCode == EUROPE_PARIS_HASH)
          {
            return Timezone::EUROPE_PARIS;
          }
          else if (hashCode == EUROPE_STOCKHOLM_HASH)
          {
            return Timezone::EUROPE_STOCKHOLM;
          }
          else if (hashCode == EUROPE_ZURICH_HASH)
          {
            return Timezone::EUROPE_ZURICH;
          }
          else if (hashCode == ISRAEL_HASH)
          {
            return Timezone::ISRAEL;
          }
          else if (hashCode == MEXICO_GENERAL_HASH)
          {
            return Timezone::MEXICO_GENERAL;
          }
          else if (hashCode == MST7MDT_HASH)
          {
            return Timezone::MST7MDT;
          }
          else if (hashCode == PACIFIC_AUCKLAND_HASH)
          {
            return Timezone::PACIFIC_AUCKLAND;
          }
          else if (hashCode == US_CENTRAL_HASH)
          {
            return Timezone::US_CENTRAL;
          }
          else if (hashCode == US_EASTERN_HASH)
          {
            return Timezone::US_EASTERN;
          }
          else if (hashCode == US_MOUNTAIN_HASH)
          {
            return Timezone::US_MOUNTAIN;
          }
          else if (hashCode == US_PACIFIC_HASH)
          {
            return Timezone::US_PACIFIC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Timezone>(hashCode);
          }

          return Timezone::NOT_SET;
        }

        Aws::String GetNameForTimezone(Timezone enumValue)
        {
          switch(enumValue)
          {
          case Timezone::NOT_SET:
            return {};
          case Timezone::UTC:
            return "UTC";
          case Timezone::AFRICA_JOHANNESBURG:
            return "AFRICA_JOHANNESBURG";
          case Timezone::AMERICA_MONTREAL:
            return "AMERICA_MONTREAL";
          case Timezone::AMERICA_SAO_PAULO:
            return "AMERICA_SAO_PAULO";
          case Timezone::ASIA_BAHRAIN:
            return "ASIA_BAHRAIN";
          case Timezone::ASIA_BANGKOK:
            return "ASIA_BANGKOK";
          case Timezone::ASIA_CALCUTTA:
            return "ASIA_CALCUTTA";
          case Timezone::ASIA_DUBAI:
            return "ASIA_DUBAI";
          case Timezone::ASIA_HONG_KONG:
            return "ASIA_HONG_KONG";
          case Timezone::ASIA_JAKARTA:
            return "ASIA_JAKARTA";
          case Timezone::ASIA_KUALA_LUMPUR:
            return "ASIA_KUALA_LUMPUR";
          case Timezone::ASIA_SEOUL:
            return "ASIA_SEOUL";
          case Timezone::ASIA_SHANGHAI:
            return "ASIA_SHANGHAI";
          case Timezone::ASIA_SINGAPORE:
            return "ASIA_SINGAPORE";
          case Timezone::ASIA_TAIPEI:
            return "ASIA_TAIPEI";
          case Timezone::ASIA_TOKYO:
            return "ASIA_TOKYO";
          case Timezone::AUSTRALIA_MELBOURNE:
            return "AUSTRALIA_MELBOURNE";
          case Timezone::AUSTRALIA_SYDNEY:
            return "AUSTRALIA_SYDNEY";
          case Timezone::CANADA_CENTRAL:
            return "CANADA_CENTRAL";
          case Timezone::CET:
            return "CET";
          case Timezone::CST6CDT:
            return "CST6CDT";
          case Timezone::ETC_GMT:
            return "ETC_GMT";
          case Timezone::ETC_GMT0:
            return "ETC_GMT0";
          case Timezone::ETC_GMT_ADD_0:
            return "ETC_GMT_ADD_0";
          case Timezone::ETC_GMT_ADD_1:
            return "ETC_GMT_ADD_1";
          case Timezone::ETC_GMT_ADD_10:
            return "ETC_GMT_ADD_10";
          case Timezone::ETC_GMT_ADD_11:
            return "ETC_GMT_ADD_11";
          case Timezone::ETC_GMT_ADD_12:
            return "ETC_GMT_ADD_12";
          case Timezone::ETC_GMT_ADD_2:
            return "ETC_GMT_ADD_2";
          case Timezone::ETC_GMT_ADD_3:
            return "ETC_GMT_ADD_3";
          case Timezone::ETC_GMT_ADD_4:
            return "ETC_GMT_ADD_4";
          case Timezone::ETC_GMT_ADD_5:
            return "ETC_GMT_ADD_5";
          case Timezone::ETC_GMT_ADD_6:
            return "ETC_GMT_ADD_6";
          case Timezone::ETC_GMT_ADD_7:
            return "ETC_GMT_ADD_7";
          case Timezone::ETC_GMT_ADD_8:
            return "ETC_GMT_ADD_8";
          case Timezone::ETC_GMT_ADD_9:
            return "ETC_GMT_ADD_9";
          case Timezone::ETC_GMT_NEG_0:
            return "ETC_GMT_NEG_0";
          case Timezone::ETC_GMT_NEG_1:
            return "ETC_GMT_NEG_1";
          case Timezone::ETC_GMT_NEG_10:
            return "ETC_GMT_NEG_10";
          case Timezone::ETC_GMT_NEG_11:
            return "ETC_GMT_NEG_11";
          case Timezone::ETC_GMT_NEG_12:
            return "ETC_GMT_NEG_12";
          case Timezone::ETC_GMT_NEG_13:
            return "ETC_GMT_NEG_13";
          case Timezone::ETC_GMT_NEG_14:
            return "ETC_GMT_NEG_14";
          case Timezone::ETC_GMT_NEG_2:
            return "ETC_GMT_NEG_2";
          case Timezone::ETC_GMT_NEG_3:
            return "ETC_GMT_NEG_3";
          case Timezone::ETC_GMT_NEG_4:
            return "ETC_GMT_NEG_4";
          case Timezone::ETC_GMT_NEG_5:
            return "ETC_GMT_NEG_5";
          case Timezone::ETC_GMT_NEG_6:
            return "ETC_GMT_NEG_6";
          case Timezone::ETC_GMT_NEG_7:
            return "ETC_GMT_NEG_7";
          case Timezone::ETC_GMT_NEG_8:
            return "ETC_GMT_NEG_8";
          case Timezone::ETC_GMT_NEG_9:
            return "ETC_GMT_NEG_9";
          case Timezone::EUROPE_DUBLIN:
            return "EUROPE_DUBLIN";
          case Timezone::EUROPE_LONDON:
            return "EUROPE_LONDON";
          case Timezone::EUROPE_PARIS:
            return "EUROPE_PARIS";
          case Timezone::EUROPE_STOCKHOLM:
            return "EUROPE_STOCKHOLM";
          case Timezone::EUROPE_ZURICH:
            return "EUROPE_ZURICH";
          case Timezone::ISRAEL:
            return "ISRAEL";
          case Timezone::MEXICO_GENERAL:
            return "MEXICO_GENERAL";
          case Timezone::MST7MDT:
            return "MST7MDT";
          case Timezone::PACIFIC_AUCKLAND:
            return "PACIFIC_AUCKLAND";
          case Timezone::US_CENTRAL:
            return "US_CENTRAL";
          case Timezone::US_EASTERN:
            return "US_EASTERN";
          case Timezone::US_MOUNTAIN:
            return "US_MOUNTAIN";
          case Timezone::US_PACIFIC:
            return "US_PACIFIC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TimezoneMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
