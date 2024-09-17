/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/X12TransactionSet.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace B2BI
  {
    namespace Model
    {
      namespace X12TransactionSetMapper
      {

        static const int X12_110_HASH = HashingUtils::HashString("X12_110");
        static const int X12_180_HASH = HashingUtils::HashString("X12_180");
        static const int X12_204_HASH = HashingUtils::HashString("X12_204");
        static const int X12_210_HASH = HashingUtils::HashString("X12_210");
        static const int X12_211_HASH = HashingUtils::HashString("X12_211");
        static const int X12_214_HASH = HashingUtils::HashString("X12_214");
        static const int X12_215_HASH = HashingUtils::HashString("X12_215");
        static const int X12_259_HASH = HashingUtils::HashString("X12_259");
        static const int X12_260_HASH = HashingUtils::HashString("X12_260");
        static const int X12_266_HASH = HashingUtils::HashString("X12_266");
        static const int X12_269_HASH = HashingUtils::HashString("X12_269");
        static const int X12_270_HASH = HashingUtils::HashString("X12_270");
        static const int X12_271_HASH = HashingUtils::HashString("X12_271");
        static const int X12_274_HASH = HashingUtils::HashString("X12_274");
        static const int X12_275_HASH = HashingUtils::HashString("X12_275");
        static const int X12_276_HASH = HashingUtils::HashString("X12_276");
        static const int X12_277_HASH = HashingUtils::HashString("X12_277");
        static const int X12_278_HASH = HashingUtils::HashString("X12_278");
        static const int X12_310_HASH = HashingUtils::HashString("X12_310");
        static const int X12_315_HASH = HashingUtils::HashString("X12_315");
        static const int X12_322_HASH = HashingUtils::HashString("X12_322");
        static const int X12_404_HASH = HashingUtils::HashString("X12_404");
        static const int X12_410_HASH = HashingUtils::HashString("X12_410");
        static const int X12_417_HASH = HashingUtils::HashString("X12_417");
        static const int X12_421_HASH = HashingUtils::HashString("X12_421");
        static const int X12_426_HASH = HashingUtils::HashString("X12_426");
        static const int X12_810_HASH = HashingUtils::HashString("X12_810");
        static const int X12_820_HASH = HashingUtils::HashString("X12_820");
        static const int X12_824_HASH = HashingUtils::HashString("X12_824");
        static const int X12_830_HASH = HashingUtils::HashString("X12_830");
        static const int X12_832_HASH = HashingUtils::HashString("X12_832");
        static const int X12_834_HASH = HashingUtils::HashString("X12_834");
        static const int X12_835_HASH = HashingUtils::HashString("X12_835");
        static const int X12_837_HASH = HashingUtils::HashString("X12_837");
        static const int X12_844_HASH = HashingUtils::HashString("X12_844");
        static const int X12_846_HASH = HashingUtils::HashString("X12_846");
        static const int X12_849_HASH = HashingUtils::HashString("X12_849");
        static const int X12_850_HASH = HashingUtils::HashString("X12_850");
        static const int X12_852_HASH = HashingUtils::HashString("X12_852");
        static const int X12_855_HASH = HashingUtils::HashString("X12_855");
        static const int X12_856_HASH = HashingUtils::HashString("X12_856");
        static const int X12_860_HASH = HashingUtils::HashString("X12_860");
        static const int X12_861_HASH = HashingUtils::HashString("X12_861");
        static const int X12_864_HASH = HashingUtils::HashString("X12_864");
        static const int X12_865_HASH = HashingUtils::HashString("X12_865");
        static const int X12_869_HASH = HashingUtils::HashString("X12_869");
        static const int X12_870_HASH = HashingUtils::HashString("X12_870");
        static const int X12_940_HASH = HashingUtils::HashString("X12_940");
        static const int X12_945_HASH = HashingUtils::HashString("X12_945");
        static const int X12_990_HASH = HashingUtils::HashString("X12_990");
        static const int X12_997_HASH = HashingUtils::HashString("X12_997");
        static const int X12_999_HASH = HashingUtils::HashString("X12_999");
        static const int X12_270_X279_HASH = HashingUtils::HashString("X12_270_X279");
        static const int X12_271_X279_HASH = HashingUtils::HashString("X12_271_X279");
        static const int X12_275_X210_HASH = HashingUtils::HashString("X12_275_X210");
        static const int X12_275_X211_HASH = HashingUtils::HashString("X12_275_X211");
        static const int X12_276_X212_HASH = HashingUtils::HashString("X12_276_X212");
        static const int X12_277_X212_HASH = HashingUtils::HashString("X12_277_X212");
        static const int X12_277_X214_HASH = HashingUtils::HashString("X12_277_X214");
        static const int X12_277_X364_HASH = HashingUtils::HashString("X12_277_X364");
        static const int X12_278_X217_HASH = HashingUtils::HashString("X12_278_X217");
        static const int X12_820_X218_HASH = HashingUtils::HashString("X12_820_X218");
        static const int X12_820_X306_HASH = HashingUtils::HashString("X12_820_X306");
        static const int X12_824_X186_HASH = HashingUtils::HashString("X12_824_X186");
        static const int X12_834_X220_HASH = HashingUtils::HashString("X12_834_X220");
        static const int X12_834_X307_HASH = HashingUtils::HashString("X12_834_X307");
        static const int X12_834_X318_HASH = HashingUtils::HashString("X12_834_X318");
        static const int X12_835_X221_HASH = HashingUtils::HashString("X12_835_X221");
        static const int X12_837_X222_HASH = HashingUtils::HashString("X12_837_X222");
        static const int X12_837_X223_HASH = HashingUtils::HashString("X12_837_X223");
        static const int X12_837_X224_HASH = HashingUtils::HashString("X12_837_X224");
        static const int X12_837_X291_HASH = HashingUtils::HashString("X12_837_X291");
        static const int X12_837_X292_HASH = HashingUtils::HashString("X12_837_X292");
        static const int X12_837_X298_HASH = HashingUtils::HashString("X12_837_X298");
        static const int X12_999_X231_HASH = HashingUtils::HashString("X12_999_X231");


        X12TransactionSet GetX12TransactionSetForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == X12_110_HASH)
          {
            return X12TransactionSet::X12_110;
          }
          else if (hashCode == X12_180_HASH)
          {
            return X12TransactionSet::X12_180;
          }
          else if (hashCode == X12_204_HASH)
          {
            return X12TransactionSet::X12_204;
          }
          else if (hashCode == X12_210_HASH)
          {
            return X12TransactionSet::X12_210;
          }
          else if (hashCode == X12_211_HASH)
          {
            return X12TransactionSet::X12_211;
          }
          else if (hashCode == X12_214_HASH)
          {
            return X12TransactionSet::X12_214;
          }
          else if (hashCode == X12_215_HASH)
          {
            return X12TransactionSet::X12_215;
          }
          else if (hashCode == X12_259_HASH)
          {
            return X12TransactionSet::X12_259;
          }
          else if (hashCode == X12_260_HASH)
          {
            return X12TransactionSet::X12_260;
          }
          else if (hashCode == X12_266_HASH)
          {
            return X12TransactionSet::X12_266;
          }
          else if (hashCode == X12_269_HASH)
          {
            return X12TransactionSet::X12_269;
          }
          else if (hashCode == X12_270_HASH)
          {
            return X12TransactionSet::X12_270;
          }
          else if (hashCode == X12_271_HASH)
          {
            return X12TransactionSet::X12_271;
          }
          else if (hashCode == X12_274_HASH)
          {
            return X12TransactionSet::X12_274;
          }
          else if (hashCode == X12_275_HASH)
          {
            return X12TransactionSet::X12_275;
          }
          else if (hashCode == X12_276_HASH)
          {
            return X12TransactionSet::X12_276;
          }
          else if (hashCode == X12_277_HASH)
          {
            return X12TransactionSet::X12_277;
          }
          else if (hashCode == X12_278_HASH)
          {
            return X12TransactionSet::X12_278;
          }
          else if (hashCode == X12_310_HASH)
          {
            return X12TransactionSet::X12_310;
          }
          else if (hashCode == X12_315_HASH)
          {
            return X12TransactionSet::X12_315;
          }
          else if (hashCode == X12_322_HASH)
          {
            return X12TransactionSet::X12_322;
          }
          else if (hashCode == X12_404_HASH)
          {
            return X12TransactionSet::X12_404;
          }
          else if (hashCode == X12_410_HASH)
          {
            return X12TransactionSet::X12_410;
          }
          else if (hashCode == X12_417_HASH)
          {
            return X12TransactionSet::X12_417;
          }
          else if (hashCode == X12_421_HASH)
          {
            return X12TransactionSet::X12_421;
          }
          else if (hashCode == X12_426_HASH)
          {
            return X12TransactionSet::X12_426;
          }
          else if (hashCode == X12_810_HASH)
          {
            return X12TransactionSet::X12_810;
          }
          else if (hashCode == X12_820_HASH)
          {
            return X12TransactionSet::X12_820;
          }
          else if (hashCode == X12_824_HASH)
          {
            return X12TransactionSet::X12_824;
          }
          else if (hashCode == X12_830_HASH)
          {
            return X12TransactionSet::X12_830;
          }
          else if (hashCode == X12_832_HASH)
          {
            return X12TransactionSet::X12_832;
          }
          else if (hashCode == X12_834_HASH)
          {
            return X12TransactionSet::X12_834;
          }
          else if (hashCode == X12_835_HASH)
          {
            return X12TransactionSet::X12_835;
          }
          else if (hashCode == X12_837_HASH)
          {
            return X12TransactionSet::X12_837;
          }
          else if (hashCode == X12_844_HASH)
          {
            return X12TransactionSet::X12_844;
          }
          else if (hashCode == X12_846_HASH)
          {
            return X12TransactionSet::X12_846;
          }
          else if (hashCode == X12_849_HASH)
          {
            return X12TransactionSet::X12_849;
          }
          else if (hashCode == X12_850_HASH)
          {
            return X12TransactionSet::X12_850;
          }
          else if (hashCode == X12_852_HASH)
          {
            return X12TransactionSet::X12_852;
          }
          else if (hashCode == X12_855_HASH)
          {
            return X12TransactionSet::X12_855;
          }
          else if (hashCode == X12_856_HASH)
          {
            return X12TransactionSet::X12_856;
          }
          else if (hashCode == X12_860_HASH)
          {
            return X12TransactionSet::X12_860;
          }
          else if (hashCode == X12_861_HASH)
          {
            return X12TransactionSet::X12_861;
          }
          else if (hashCode == X12_864_HASH)
          {
            return X12TransactionSet::X12_864;
          }
          else if (hashCode == X12_865_HASH)
          {
            return X12TransactionSet::X12_865;
          }
          else if (hashCode == X12_869_HASH)
          {
            return X12TransactionSet::X12_869;
          }
          else if (hashCode == X12_870_HASH)
          {
            return X12TransactionSet::X12_870;
          }
          else if (hashCode == X12_940_HASH)
          {
            return X12TransactionSet::X12_940;
          }
          else if (hashCode == X12_945_HASH)
          {
            return X12TransactionSet::X12_945;
          }
          else if (hashCode == X12_990_HASH)
          {
            return X12TransactionSet::X12_990;
          }
          else if (hashCode == X12_997_HASH)
          {
            return X12TransactionSet::X12_997;
          }
          else if (hashCode == X12_999_HASH)
          {
            return X12TransactionSet::X12_999;
          }
          else if (hashCode == X12_270_X279_HASH)
          {
            return X12TransactionSet::X12_270_X279;
          }
          else if (hashCode == X12_271_X279_HASH)
          {
            return X12TransactionSet::X12_271_X279;
          }
          else if (hashCode == X12_275_X210_HASH)
          {
            return X12TransactionSet::X12_275_X210;
          }
          else if (hashCode == X12_275_X211_HASH)
          {
            return X12TransactionSet::X12_275_X211;
          }
          else if (hashCode == X12_276_X212_HASH)
          {
            return X12TransactionSet::X12_276_X212;
          }
          else if (hashCode == X12_277_X212_HASH)
          {
            return X12TransactionSet::X12_277_X212;
          }
          else if (hashCode == X12_277_X214_HASH)
          {
            return X12TransactionSet::X12_277_X214;
          }
          else if (hashCode == X12_277_X364_HASH)
          {
            return X12TransactionSet::X12_277_X364;
          }
          else if (hashCode == X12_278_X217_HASH)
          {
            return X12TransactionSet::X12_278_X217;
          }
          else if (hashCode == X12_820_X218_HASH)
          {
            return X12TransactionSet::X12_820_X218;
          }
          else if (hashCode == X12_820_X306_HASH)
          {
            return X12TransactionSet::X12_820_X306;
          }
          else if (hashCode == X12_824_X186_HASH)
          {
            return X12TransactionSet::X12_824_X186;
          }
          else if (hashCode == X12_834_X220_HASH)
          {
            return X12TransactionSet::X12_834_X220;
          }
          else if (hashCode == X12_834_X307_HASH)
          {
            return X12TransactionSet::X12_834_X307;
          }
          else if (hashCode == X12_834_X318_HASH)
          {
            return X12TransactionSet::X12_834_X318;
          }
          else if (hashCode == X12_835_X221_HASH)
          {
            return X12TransactionSet::X12_835_X221;
          }
          else if (hashCode == X12_837_X222_HASH)
          {
            return X12TransactionSet::X12_837_X222;
          }
          else if (hashCode == X12_837_X223_HASH)
          {
            return X12TransactionSet::X12_837_X223;
          }
          else if (hashCode == X12_837_X224_HASH)
          {
            return X12TransactionSet::X12_837_X224;
          }
          else if (hashCode == X12_837_X291_HASH)
          {
            return X12TransactionSet::X12_837_X291;
          }
          else if (hashCode == X12_837_X292_HASH)
          {
            return X12TransactionSet::X12_837_X292;
          }
          else if (hashCode == X12_837_X298_HASH)
          {
            return X12TransactionSet::X12_837_X298;
          }
          else if (hashCode == X12_999_X231_HASH)
          {
            return X12TransactionSet::X12_999_X231;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<X12TransactionSet>(hashCode);
          }

          return X12TransactionSet::NOT_SET;
        }

        Aws::String GetNameForX12TransactionSet(X12TransactionSet enumValue)
        {
          switch(enumValue)
          {
          case X12TransactionSet::NOT_SET:
            return {};
          case X12TransactionSet::X12_110:
            return "X12_110";
          case X12TransactionSet::X12_180:
            return "X12_180";
          case X12TransactionSet::X12_204:
            return "X12_204";
          case X12TransactionSet::X12_210:
            return "X12_210";
          case X12TransactionSet::X12_211:
            return "X12_211";
          case X12TransactionSet::X12_214:
            return "X12_214";
          case X12TransactionSet::X12_215:
            return "X12_215";
          case X12TransactionSet::X12_259:
            return "X12_259";
          case X12TransactionSet::X12_260:
            return "X12_260";
          case X12TransactionSet::X12_266:
            return "X12_266";
          case X12TransactionSet::X12_269:
            return "X12_269";
          case X12TransactionSet::X12_270:
            return "X12_270";
          case X12TransactionSet::X12_271:
            return "X12_271";
          case X12TransactionSet::X12_274:
            return "X12_274";
          case X12TransactionSet::X12_275:
            return "X12_275";
          case X12TransactionSet::X12_276:
            return "X12_276";
          case X12TransactionSet::X12_277:
            return "X12_277";
          case X12TransactionSet::X12_278:
            return "X12_278";
          case X12TransactionSet::X12_310:
            return "X12_310";
          case X12TransactionSet::X12_315:
            return "X12_315";
          case X12TransactionSet::X12_322:
            return "X12_322";
          case X12TransactionSet::X12_404:
            return "X12_404";
          case X12TransactionSet::X12_410:
            return "X12_410";
          case X12TransactionSet::X12_417:
            return "X12_417";
          case X12TransactionSet::X12_421:
            return "X12_421";
          case X12TransactionSet::X12_426:
            return "X12_426";
          case X12TransactionSet::X12_810:
            return "X12_810";
          case X12TransactionSet::X12_820:
            return "X12_820";
          case X12TransactionSet::X12_824:
            return "X12_824";
          case X12TransactionSet::X12_830:
            return "X12_830";
          case X12TransactionSet::X12_832:
            return "X12_832";
          case X12TransactionSet::X12_834:
            return "X12_834";
          case X12TransactionSet::X12_835:
            return "X12_835";
          case X12TransactionSet::X12_837:
            return "X12_837";
          case X12TransactionSet::X12_844:
            return "X12_844";
          case X12TransactionSet::X12_846:
            return "X12_846";
          case X12TransactionSet::X12_849:
            return "X12_849";
          case X12TransactionSet::X12_850:
            return "X12_850";
          case X12TransactionSet::X12_852:
            return "X12_852";
          case X12TransactionSet::X12_855:
            return "X12_855";
          case X12TransactionSet::X12_856:
            return "X12_856";
          case X12TransactionSet::X12_860:
            return "X12_860";
          case X12TransactionSet::X12_861:
            return "X12_861";
          case X12TransactionSet::X12_864:
            return "X12_864";
          case X12TransactionSet::X12_865:
            return "X12_865";
          case X12TransactionSet::X12_869:
            return "X12_869";
          case X12TransactionSet::X12_870:
            return "X12_870";
          case X12TransactionSet::X12_940:
            return "X12_940";
          case X12TransactionSet::X12_945:
            return "X12_945";
          case X12TransactionSet::X12_990:
            return "X12_990";
          case X12TransactionSet::X12_997:
            return "X12_997";
          case X12TransactionSet::X12_999:
            return "X12_999";
          case X12TransactionSet::X12_270_X279:
            return "X12_270_X279";
          case X12TransactionSet::X12_271_X279:
            return "X12_271_X279";
          case X12TransactionSet::X12_275_X210:
            return "X12_275_X210";
          case X12TransactionSet::X12_275_X211:
            return "X12_275_X211";
          case X12TransactionSet::X12_276_X212:
            return "X12_276_X212";
          case X12TransactionSet::X12_277_X212:
            return "X12_277_X212";
          case X12TransactionSet::X12_277_X214:
            return "X12_277_X214";
          case X12TransactionSet::X12_277_X364:
            return "X12_277_X364";
          case X12TransactionSet::X12_278_X217:
            return "X12_278_X217";
          case X12TransactionSet::X12_820_X218:
            return "X12_820_X218";
          case X12TransactionSet::X12_820_X306:
            return "X12_820_X306";
          case X12TransactionSet::X12_824_X186:
            return "X12_824_X186";
          case X12TransactionSet::X12_834_X220:
            return "X12_834_X220";
          case X12TransactionSet::X12_834_X307:
            return "X12_834_X307";
          case X12TransactionSet::X12_834_X318:
            return "X12_834_X318";
          case X12TransactionSet::X12_835_X221:
            return "X12_835_X221";
          case X12TransactionSet::X12_837_X222:
            return "X12_837_X222";
          case X12TransactionSet::X12_837_X223:
            return "X12_837_X223";
          case X12TransactionSet::X12_837_X224:
            return "X12_837_X224";
          case X12TransactionSet::X12_837_X291:
            return "X12_837_X291";
          case X12TransactionSet::X12_837_X292:
            return "X12_837_X292";
          case X12TransactionSet::X12_837_X298:
            return "X12_837_X298";
          case X12TransactionSet::X12_999_X231:
            return "X12_999_X231";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace X12TransactionSetMapper
    } // namespace Model
  } // namespace B2BI
} // namespace Aws
