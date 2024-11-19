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

        static const int X12_100_HASH = HashingUtils::HashString("X12_100");
        static const int X12_101_HASH = HashingUtils::HashString("X12_101");
        static const int X12_102_HASH = HashingUtils::HashString("X12_102");
        static const int X12_103_HASH = HashingUtils::HashString("X12_103");
        static const int X12_104_HASH = HashingUtils::HashString("X12_104");
        static const int X12_105_HASH = HashingUtils::HashString("X12_105");
        static const int X12_106_HASH = HashingUtils::HashString("X12_106");
        static const int X12_107_HASH = HashingUtils::HashString("X12_107");
        static const int X12_108_HASH = HashingUtils::HashString("X12_108");
        static const int X12_109_HASH = HashingUtils::HashString("X12_109");
        static const int X12_110_HASH = HashingUtils::HashString("X12_110");
        static const int X12_111_HASH = HashingUtils::HashString("X12_111");
        static const int X12_112_HASH = HashingUtils::HashString("X12_112");
        static const int X12_113_HASH = HashingUtils::HashString("X12_113");
        static const int X12_120_HASH = HashingUtils::HashString("X12_120");
        static const int X12_121_HASH = HashingUtils::HashString("X12_121");
        static const int X12_124_HASH = HashingUtils::HashString("X12_124");
        static const int X12_125_HASH = HashingUtils::HashString("X12_125");
        static const int X12_126_HASH = HashingUtils::HashString("X12_126");
        static const int X12_127_HASH = HashingUtils::HashString("X12_127");
        static const int X12_128_HASH = HashingUtils::HashString("X12_128");
        static const int X12_129_HASH = HashingUtils::HashString("X12_129");
        static const int X12_130_HASH = HashingUtils::HashString("X12_130");
        static const int X12_131_HASH = HashingUtils::HashString("X12_131");
        static const int X12_132_HASH = HashingUtils::HashString("X12_132");
        static const int X12_133_HASH = HashingUtils::HashString("X12_133");
        static const int X12_135_HASH = HashingUtils::HashString("X12_135");
        static const int X12_138_HASH = HashingUtils::HashString("X12_138");
        static const int X12_139_HASH = HashingUtils::HashString("X12_139");
        static const int X12_140_HASH = HashingUtils::HashString("X12_140");
        static const int X12_141_HASH = HashingUtils::HashString("X12_141");
        static const int X12_142_HASH = HashingUtils::HashString("X12_142");
        static const int X12_143_HASH = HashingUtils::HashString("X12_143");
        static const int X12_144_HASH = HashingUtils::HashString("X12_144");
        static const int X12_146_HASH = HashingUtils::HashString("X12_146");
        static const int X12_147_HASH = HashingUtils::HashString("X12_147");
        static const int X12_148_HASH = HashingUtils::HashString("X12_148");
        static const int X12_149_HASH = HashingUtils::HashString("X12_149");
        static const int X12_150_HASH = HashingUtils::HashString("X12_150");
        static const int X12_151_HASH = HashingUtils::HashString("X12_151");
        static const int X12_152_HASH = HashingUtils::HashString("X12_152");
        static const int X12_153_HASH = HashingUtils::HashString("X12_153");
        static const int X12_154_HASH = HashingUtils::HashString("X12_154");
        static const int X12_155_HASH = HashingUtils::HashString("X12_155");
        static const int X12_157_HASH = HashingUtils::HashString("X12_157");
        static const int X12_158_HASH = HashingUtils::HashString("X12_158");
        static const int X12_159_HASH = HashingUtils::HashString("X12_159");
        static const int X12_160_HASH = HashingUtils::HashString("X12_160");
        static const int X12_161_HASH = HashingUtils::HashString("X12_161");
        static const int X12_163_HASH = HashingUtils::HashString("X12_163");
        static const int X12_170_HASH = HashingUtils::HashString("X12_170");
        static const int X12_175_HASH = HashingUtils::HashString("X12_175");
        static const int X12_176_HASH = HashingUtils::HashString("X12_176");
        static const int X12_179_HASH = HashingUtils::HashString("X12_179");
        static const int X12_180_HASH = HashingUtils::HashString("X12_180");
        static const int X12_185_HASH = HashingUtils::HashString("X12_185");
        static const int X12_186_HASH = HashingUtils::HashString("X12_186");
        static const int X12_187_HASH = HashingUtils::HashString("X12_187");
        static const int X12_188_HASH = HashingUtils::HashString("X12_188");
        static const int X12_189_HASH = HashingUtils::HashString("X12_189");
        static const int X12_190_HASH = HashingUtils::HashString("X12_190");
        static const int X12_191_HASH = HashingUtils::HashString("X12_191");
        static const int X12_194_HASH = HashingUtils::HashString("X12_194");
        static const int X12_195_HASH = HashingUtils::HashString("X12_195");
        static const int X12_196_HASH = HashingUtils::HashString("X12_196");
        static const int X12_197_HASH = HashingUtils::HashString("X12_197");
        static const int X12_198_HASH = HashingUtils::HashString("X12_198");
        static const int X12_199_HASH = HashingUtils::HashString("X12_199");
        static const int X12_200_HASH = HashingUtils::HashString("X12_200");
        static const int X12_201_HASH = HashingUtils::HashString("X12_201");
        static const int X12_202_HASH = HashingUtils::HashString("X12_202");
        static const int X12_203_HASH = HashingUtils::HashString("X12_203");
        static const int X12_204_HASH = HashingUtils::HashString("X12_204");
        static const int X12_205_HASH = HashingUtils::HashString("X12_205");
        static const int X12_206_HASH = HashingUtils::HashString("X12_206");
        static const int X12_210_HASH = HashingUtils::HashString("X12_210");
        static const int X12_211_HASH = HashingUtils::HashString("X12_211");
        static const int X12_212_HASH = HashingUtils::HashString("X12_212");
        static const int X12_213_HASH = HashingUtils::HashString("X12_213");
        static const int X12_214_HASH = HashingUtils::HashString("X12_214");
        static const int X12_215_HASH = HashingUtils::HashString("X12_215");
        static const int X12_216_HASH = HashingUtils::HashString("X12_216");
        static const int X12_217_HASH = HashingUtils::HashString("X12_217");
        static const int X12_218_HASH = HashingUtils::HashString("X12_218");
        static const int X12_219_HASH = HashingUtils::HashString("X12_219");
        static const int X12_220_HASH = HashingUtils::HashString("X12_220");
        static const int X12_222_HASH = HashingUtils::HashString("X12_222");
        static const int X12_223_HASH = HashingUtils::HashString("X12_223");
        static const int X12_224_HASH = HashingUtils::HashString("X12_224");
        static const int X12_225_HASH = HashingUtils::HashString("X12_225");
        static const int X12_227_HASH = HashingUtils::HashString("X12_227");
        static const int X12_228_HASH = HashingUtils::HashString("X12_228");
        static const int X12_240_HASH = HashingUtils::HashString("X12_240");
        static const int X12_242_HASH = HashingUtils::HashString("X12_242");
        static const int X12_244_HASH = HashingUtils::HashString("X12_244");
        static const int X12_245_HASH = HashingUtils::HashString("X12_245");
        static const int X12_248_HASH = HashingUtils::HashString("X12_248");
        static const int X12_249_HASH = HashingUtils::HashString("X12_249");
        static const int X12_250_HASH = HashingUtils::HashString("X12_250");
        static const int X12_251_HASH = HashingUtils::HashString("X12_251");
        static const int X12_252_HASH = HashingUtils::HashString("X12_252");
        static const int X12_255_HASH = HashingUtils::HashString("X12_255");
        static const int X12_256_HASH = HashingUtils::HashString("X12_256");
        static const int X12_259_HASH = HashingUtils::HashString("X12_259");
        static const int X12_260_HASH = HashingUtils::HashString("X12_260");
        static const int X12_261_HASH = HashingUtils::HashString("X12_261");
        static const int X12_262_HASH = HashingUtils::HashString("X12_262");
        static const int X12_263_HASH = HashingUtils::HashString("X12_263");
        static const int X12_264_HASH = HashingUtils::HashString("X12_264");
        static const int X12_265_HASH = HashingUtils::HashString("X12_265");
        static const int X12_266_HASH = HashingUtils::HashString("X12_266");
        static const int X12_267_HASH = HashingUtils::HashString("X12_267");
        static const int X12_268_HASH = HashingUtils::HashString("X12_268");
        static const int X12_269_HASH = HashingUtils::HashString("X12_269");
        static const int X12_270_HASH = HashingUtils::HashString("X12_270");
        static const int X12_271_HASH = HashingUtils::HashString("X12_271");
        static const int X12_272_HASH = HashingUtils::HashString("X12_272");
        static const int X12_273_HASH = HashingUtils::HashString("X12_273");
        static const int X12_274_HASH = HashingUtils::HashString("X12_274");
        static const int X12_275_HASH = HashingUtils::HashString("X12_275");
        static const int X12_276_HASH = HashingUtils::HashString("X12_276");
        static const int X12_277_HASH = HashingUtils::HashString("X12_277");
        static const int X12_278_HASH = HashingUtils::HashString("X12_278");
        static const int X12_280_HASH = HashingUtils::HashString("X12_280");
        static const int X12_283_HASH = HashingUtils::HashString("X12_283");
        static const int X12_284_HASH = HashingUtils::HashString("X12_284");
        static const int X12_285_HASH = HashingUtils::HashString("X12_285");
        static const int X12_286_HASH = HashingUtils::HashString("X12_286");
        static const int X12_288_HASH = HashingUtils::HashString("X12_288");
        static const int X12_290_HASH = HashingUtils::HashString("X12_290");
        static const int X12_300_HASH = HashingUtils::HashString("X12_300");
        static const int X12_301_HASH = HashingUtils::HashString("X12_301");
        static const int X12_303_HASH = HashingUtils::HashString("X12_303");
        static const int X12_304_HASH = HashingUtils::HashString("X12_304");
        static const int X12_309_HASH = HashingUtils::HashString("X12_309");
        static const int X12_310_HASH = HashingUtils::HashString("X12_310");
        static const int X12_311_HASH = HashingUtils::HashString("X12_311");
        static const int X12_312_HASH = HashingUtils::HashString("X12_312");
        static const int X12_313_HASH = HashingUtils::HashString("X12_313");
        static const int X12_315_HASH = HashingUtils::HashString("X12_315");
        static const int X12_317_HASH = HashingUtils::HashString("X12_317");
        static const int X12_319_HASH = HashingUtils::HashString("X12_319");
        static const int X12_322_HASH = HashingUtils::HashString("X12_322");
        static const int X12_323_HASH = HashingUtils::HashString("X12_323");
        static const int X12_324_HASH = HashingUtils::HashString("X12_324");
        static const int X12_325_HASH = HashingUtils::HashString("X12_325");
        static const int X12_326_HASH = HashingUtils::HashString("X12_326");
        static const int X12_350_HASH = HashingUtils::HashString("X12_350");
        static const int X12_352_HASH = HashingUtils::HashString("X12_352");
        static const int X12_353_HASH = HashingUtils::HashString("X12_353");
        static const int X12_354_HASH = HashingUtils::HashString("X12_354");
        static const int X12_355_HASH = HashingUtils::HashString("X12_355");
        static const int X12_356_HASH = HashingUtils::HashString("X12_356");
        static const int X12_357_HASH = HashingUtils::HashString("X12_357");
        static const int X12_358_HASH = HashingUtils::HashString("X12_358");
        static const int X12_361_HASH = HashingUtils::HashString("X12_361");
        static const int X12_362_HASH = HashingUtils::HashString("X12_362");
        static const int X12_404_HASH = HashingUtils::HashString("X12_404");
        static const int X12_410_HASH = HashingUtils::HashString("X12_410");
        static const int X12_412_HASH = HashingUtils::HashString("X12_412");
        static const int X12_414_HASH = HashingUtils::HashString("X12_414");
        static const int X12_417_HASH = HashingUtils::HashString("X12_417");
        static const int X12_418_HASH = HashingUtils::HashString("X12_418");
        static const int X12_419_HASH = HashingUtils::HashString("X12_419");
        static const int X12_420_HASH = HashingUtils::HashString("X12_420");
        static const int X12_421_HASH = HashingUtils::HashString("X12_421");
        static const int X12_422_HASH = HashingUtils::HashString("X12_422");
        static const int X12_423_HASH = HashingUtils::HashString("X12_423");
        static const int X12_424_HASH = HashingUtils::HashString("X12_424");
        static const int X12_425_HASH = HashingUtils::HashString("X12_425");
        static const int X12_426_HASH = HashingUtils::HashString("X12_426");
        static const int X12_429_HASH = HashingUtils::HashString("X12_429");
        static const int X12_431_HASH = HashingUtils::HashString("X12_431");
        static const int X12_432_HASH = HashingUtils::HashString("X12_432");
        static const int X12_433_HASH = HashingUtils::HashString("X12_433");
        static const int X12_434_HASH = HashingUtils::HashString("X12_434");
        static const int X12_435_HASH = HashingUtils::HashString("X12_435");
        static const int X12_436_HASH = HashingUtils::HashString("X12_436");
        static const int X12_437_HASH = HashingUtils::HashString("X12_437");
        static const int X12_440_HASH = HashingUtils::HashString("X12_440");
        static const int X12_451_HASH = HashingUtils::HashString("X12_451");
        static const int X12_452_HASH = HashingUtils::HashString("X12_452");
        static const int X12_453_HASH = HashingUtils::HashString("X12_453");
        static const int X12_455_HASH = HashingUtils::HashString("X12_455");
        static const int X12_456_HASH = HashingUtils::HashString("X12_456");
        static const int X12_460_HASH = HashingUtils::HashString("X12_460");
        static const int X12_463_HASH = HashingUtils::HashString("X12_463");
        static const int X12_466_HASH = HashingUtils::HashString("X12_466");
        static const int X12_468_HASH = HashingUtils::HashString("X12_468");
        static const int X12_470_HASH = HashingUtils::HashString("X12_470");
        static const int X12_475_HASH = HashingUtils::HashString("X12_475");
        static const int X12_485_HASH = HashingUtils::HashString("X12_485");
        static const int X12_486_HASH = HashingUtils::HashString("X12_486");
        static const int X12_490_HASH = HashingUtils::HashString("X12_490");
        static const int X12_492_HASH = HashingUtils::HashString("X12_492");
        static const int X12_494_HASH = HashingUtils::HashString("X12_494");
        static const int X12_500_HASH = HashingUtils::HashString("X12_500");
        static const int X12_501_HASH = HashingUtils::HashString("X12_501");
        static const int X12_503_HASH = HashingUtils::HashString("X12_503");
        static const int X12_504_HASH = HashingUtils::HashString("X12_504");
        static const int X12_511_HASH = HashingUtils::HashString("X12_511");
        static const int X12_517_HASH = HashingUtils::HashString("X12_517");
        static const int X12_521_HASH = HashingUtils::HashString("X12_521");
        static const int X12_527_HASH = HashingUtils::HashString("X12_527");
        static const int X12_536_HASH = HashingUtils::HashString("X12_536");
        static const int X12_540_HASH = HashingUtils::HashString("X12_540");
        static const int X12_561_HASH = HashingUtils::HashString("X12_561");
        static const int X12_567_HASH = HashingUtils::HashString("X12_567");
        static const int X12_568_HASH = HashingUtils::HashString("X12_568");
        static const int X12_601_HASH = HashingUtils::HashString("X12_601");
        static const int X12_602_HASH = HashingUtils::HashString("X12_602");
        static const int X12_620_HASH = HashingUtils::HashString("X12_620");
        static const int X12_625_HASH = HashingUtils::HashString("X12_625");
        static const int X12_650_HASH = HashingUtils::HashString("X12_650");
        static const int X12_715_HASH = HashingUtils::HashString("X12_715");
        static const int X12_753_HASH = HashingUtils::HashString("X12_753");
        static const int X12_754_HASH = HashingUtils::HashString("X12_754");
        static const int X12_805_HASH = HashingUtils::HashString("X12_805");
        static const int X12_806_HASH = HashingUtils::HashString("X12_806");
        static const int X12_810_HASH = HashingUtils::HashString("X12_810");
        static const int X12_811_HASH = HashingUtils::HashString("X12_811");
        static const int X12_812_HASH = HashingUtils::HashString("X12_812");
        static const int X12_813_HASH = HashingUtils::HashString("X12_813");
        static const int X12_814_HASH = HashingUtils::HashString("X12_814");
        static const int X12_815_HASH = HashingUtils::HashString("X12_815");
        static const int X12_816_HASH = HashingUtils::HashString("X12_816");
        static const int X12_818_HASH = HashingUtils::HashString("X12_818");
        static const int X12_819_HASH = HashingUtils::HashString("X12_819");
        static const int X12_820_HASH = HashingUtils::HashString("X12_820");
        static const int X12_821_HASH = HashingUtils::HashString("X12_821");
        static const int X12_822_HASH = HashingUtils::HashString("X12_822");
        static const int X12_823_HASH = HashingUtils::HashString("X12_823");
        static const int X12_824_HASH = HashingUtils::HashString("X12_824");
        static const int X12_826_HASH = HashingUtils::HashString("X12_826");
        static const int X12_827_HASH = HashingUtils::HashString("X12_827");
        static const int X12_828_HASH = HashingUtils::HashString("X12_828");
        static const int X12_829_HASH = HashingUtils::HashString("X12_829");
        static const int X12_830_HASH = HashingUtils::HashString("X12_830");
        static const int X12_831_HASH = HashingUtils::HashString("X12_831");
        static const int X12_832_HASH = HashingUtils::HashString("X12_832");
        static const int X12_833_HASH = HashingUtils::HashString("X12_833");
        static const int X12_834_HASH = HashingUtils::HashString("X12_834");
        static const int X12_835_HASH = HashingUtils::HashString("X12_835");
        static const int X12_836_HASH = HashingUtils::HashString("X12_836");
        static const int X12_837_HASH = HashingUtils::HashString("X12_837");
        static const int X12_838_HASH = HashingUtils::HashString("X12_838");
        static const int X12_839_HASH = HashingUtils::HashString("X12_839");
        static const int X12_840_HASH = HashingUtils::HashString("X12_840");
        static const int X12_841_HASH = HashingUtils::HashString("X12_841");
        static const int X12_842_HASH = HashingUtils::HashString("X12_842");
        static const int X12_843_HASH = HashingUtils::HashString("X12_843");
        static const int X12_844_HASH = HashingUtils::HashString("X12_844");
        static const int X12_845_HASH = HashingUtils::HashString("X12_845");
        static const int X12_846_HASH = HashingUtils::HashString("X12_846");
        static const int X12_847_HASH = HashingUtils::HashString("X12_847");
        static const int X12_848_HASH = HashingUtils::HashString("X12_848");
        static const int X12_849_HASH = HashingUtils::HashString("X12_849");
        static const int X12_850_HASH = HashingUtils::HashString("X12_850");
        static const int X12_851_HASH = HashingUtils::HashString("X12_851");
        static const int X12_852_HASH = HashingUtils::HashString("X12_852");
        static const int X12_853_HASH = HashingUtils::HashString("X12_853");
        static const int X12_854_HASH = HashingUtils::HashString("X12_854");
        static const int X12_855_HASH = HashingUtils::HashString("X12_855");
        static const int X12_856_HASH = HashingUtils::HashString("X12_856");
        static const int X12_857_HASH = HashingUtils::HashString("X12_857");
        static const int X12_858_HASH = HashingUtils::HashString("X12_858");
        static const int X12_859_HASH = HashingUtils::HashString("X12_859");
        static const int X12_860_HASH = HashingUtils::HashString("X12_860");
        static const int X12_861_HASH = HashingUtils::HashString("X12_861");
        static const int X12_862_HASH = HashingUtils::HashString("X12_862");
        static const int X12_863_HASH = HashingUtils::HashString("X12_863");
        static const int X12_864_HASH = HashingUtils::HashString("X12_864");
        static const int X12_865_HASH = HashingUtils::HashString("X12_865");
        static const int X12_866_HASH = HashingUtils::HashString("X12_866");
        static const int X12_867_HASH = HashingUtils::HashString("X12_867");
        static const int X12_868_HASH = HashingUtils::HashString("X12_868");
        static const int X12_869_HASH = HashingUtils::HashString("X12_869");
        static const int X12_870_HASH = HashingUtils::HashString("X12_870");
        static const int X12_871_HASH = HashingUtils::HashString("X12_871");
        static const int X12_872_HASH = HashingUtils::HashString("X12_872");
        static const int X12_873_HASH = HashingUtils::HashString("X12_873");
        static const int X12_874_HASH = HashingUtils::HashString("X12_874");
        static const int X12_875_HASH = HashingUtils::HashString("X12_875");
        static const int X12_876_HASH = HashingUtils::HashString("X12_876");
        static const int X12_877_HASH = HashingUtils::HashString("X12_877");
        static const int X12_878_HASH = HashingUtils::HashString("X12_878");
        static const int X12_879_HASH = HashingUtils::HashString("X12_879");
        static const int X12_880_HASH = HashingUtils::HashString("X12_880");
        static const int X12_881_HASH = HashingUtils::HashString("X12_881");
        static const int X12_882_HASH = HashingUtils::HashString("X12_882");
        static const int X12_883_HASH = HashingUtils::HashString("X12_883");
        static const int X12_884_HASH = HashingUtils::HashString("X12_884");
        static const int X12_885_HASH = HashingUtils::HashString("X12_885");
        static const int X12_886_HASH = HashingUtils::HashString("X12_886");
        static const int X12_887_HASH = HashingUtils::HashString("X12_887");
        static const int X12_888_HASH = HashingUtils::HashString("X12_888");
        static const int X12_889_HASH = HashingUtils::HashString("X12_889");
        static const int X12_891_HASH = HashingUtils::HashString("X12_891");
        static const int X12_893_HASH = HashingUtils::HashString("X12_893");
        static const int X12_894_HASH = HashingUtils::HashString("X12_894");
        static const int X12_895_HASH = HashingUtils::HashString("X12_895");
        static const int X12_896_HASH = HashingUtils::HashString("X12_896");
        static const int X12_920_HASH = HashingUtils::HashString("X12_920");
        static const int X12_924_HASH = HashingUtils::HashString("X12_924");
        static const int X12_925_HASH = HashingUtils::HashString("X12_925");
        static const int X12_926_HASH = HashingUtils::HashString("X12_926");
        static const int X12_928_HASH = HashingUtils::HashString("X12_928");
        static const int X12_940_HASH = HashingUtils::HashString("X12_940");
        static const int X12_943_HASH = HashingUtils::HashString("X12_943");
        static const int X12_944_HASH = HashingUtils::HashString("X12_944");
        static const int X12_945_HASH = HashingUtils::HashString("X12_945");
        static const int X12_947_HASH = HashingUtils::HashString("X12_947");
        static const int X12_980_HASH = HashingUtils::HashString("X12_980");
        static const int X12_990_HASH = HashingUtils::HashString("X12_990");
        static const int X12_993_HASH = HashingUtils::HashString("X12_993");
        static const int X12_996_HASH = HashingUtils::HashString("X12_996");
        static const int X12_997_HASH = HashingUtils::HashString("X12_997");
        static const int X12_998_HASH = HashingUtils::HashString("X12_998");
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

        /*
        The if-else chains in this file are converted into a jump table by the compiler,
        which allows constant time lookup. The chain has been broken into helper functions
        because MSVC has a maximum of 122 chained if-else blocks.
        */
        static bool GetEnumForNameHelper0(int hashCode, X12TransactionSet& enumValue)
        {
          if (hashCode == X12_100_HASH)
          {
            enumValue = X12TransactionSet::X12_100;
            return true;
          }
          else if (hashCode == X12_101_HASH)
          {
            enumValue = X12TransactionSet::X12_101;
            return true;
          }
          else if (hashCode == X12_102_HASH)
          {
            enumValue = X12TransactionSet::X12_102;
            return true;
          }
          else if (hashCode == X12_103_HASH)
          {
            enumValue = X12TransactionSet::X12_103;
            return true;
          }
          else if (hashCode == X12_104_HASH)
          {
            enumValue = X12TransactionSet::X12_104;
            return true;
          }
          else if (hashCode == X12_105_HASH)
          {
            enumValue = X12TransactionSet::X12_105;
            return true;
          }
          else if (hashCode == X12_106_HASH)
          {
            enumValue = X12TransactionSet::X12_106;
            return true;
          }
          else if (hashCode == X12_107_HASH)
          {
            enumValue = X12TransactionSet::X12_107;
            return true;
          }
          else if (hashCode == X12_108_HASH)
          {
            enumValue = X12TransactionSet::X12_108;
            return true;
          }
          else if (hashCode == X12_109_HASH)
          {
            enumValue = X12TransactionSet::X12_109;
            return true;
          }
          else if (hashCode == X12_110_HASH)
          {
            enumValue = X12TransactionSet::X12_110;
            return true;
          }
          else if (hashCode == X12_111_HASH)
          {
            enumValue = X12TransactionSet::X12_111;
            return true;
          }
          else if (hashCode == X12_112_HASH)
          {
            enumValue = X12TransactionSet::X12_112;
            return true;
          }
          else if (hashCode == X12_113_HASH)
          {
            enumValue = X12TransactionSet::X12_113;
            return true;
          }
          else if (hashCode == X12_120_HASH)
          {
            enumValue = X12TransactionSet::X12_120;
            return true;
          }
          else if (hashCode == X12_121_HASH)
          {
            enumValue = X12TransactionSet::X12_121;
            return true;
          }
          else if (hashCode == X12_124_HASH)
          {
            enumValue = X12TransactionSet::X12_124;
            return true;
          }
          else if (hashCode == X12_125_HASH)
          {
            enumValue = X12TransactionSet::X12_125;
            return true;
          }
          else if (hashCode == X12_126_HASH)
          {
            enumValue = X12TransactionSet::X12_126;
            return true;
          }
          else if (hashCode == X12_127_HASH)
          {
            enumValue = X12TransactionSet::X12_127;
            return true;
          }
          else if (hashCode == X12_128_HASH)
          {
            enumValue = X12TransactionSet::X12_128;
            return true;
          }
          else if (hashCode == X12_129_HASH)
          {
            enumValue = X12TransactionSet::X12_129;
            return true;
          }
          else if (hashCode == X12_130_HASH)
          {
            enumValue = X12TransactionSet::X12_130;
            return true;
          }
          else if (hashCode == X12_131_HASH)
          {
            enumValue = X12TransactionSet::X12_131;
            return true;
          }
          else if (hashCode == X12_132_HASH)
          {
            enumValue = X12TransactionSet::X12_132;
            return true;
          }
          else if (hashCode == X12_133_HASH)
          {
            enumValue = X12TransactionSet::X12_133;
            return true;
          }
          else if (hashCode == X12_135_HASH)
          {
            enumValue = X12TransactionSet::X12_135;
            return true;
          }
          else if (hashCode == X12_138_HASH)
          {
            enumValue = X12TransactionSet::X12_138;
            return true;
          }
          else if (hashCode == X12_139_HASH)
          {
            enumValue = X12TransactionSet::X12_139;
            return true;
          }
          else if (hashCode == X12_140_HASH)
          {
            enumValue = X12TransactionSet::X12_140;
            return true;
          }
          else if (hashCode == X12_141_HASH)
          {
            enumValue = X12TransactionSet::X12_141;
            return true;
          }
          else if (hashCode == X12_142_HASH)
          {
            enumValue = X12TransactionSet::X12_142;
            return true;
          }
          else if (hashCode == X12_143_HASH)
          {
            enumValue = X12TransactionSet::X12_143;
            return true;
          }
          else if (hashCode == X12_144_HASH)
          {
            enumValue = X12TransactionSet::X12_144;
            return true;
          }
          else if (hashCode == X12_146_HASH)
          {
            enumValue = X12TransactionSet::X12_146;
            return true;
          }
          else if (hashCode == X12_147_HASH)
          {
            enumValue = X12TransactionSet::X12_147;
            return true;
          }
          else if (hashCode == X12_148_HASH)
          {
            enumValue = X12TransactionSet::X12_148;
            return true;
          }
          else if (hashCode == X12_149_HASH)
          {
            enumValue = X12TransactionSet::X12_149;
            return true;
          }
          else if (hashCode == X12_150_HASH)
          {
            enumValue = X12TransactionSet::X12_150;
            return true;
          }
          else if (hashCode == X12_151_HASH)
          {
            enumValue = X12TransactionSet::X12_151;
            return true;
          }
          else if (hashCode == X12_152_HASH)
          {
            enumValue = X12TransactionSet::X12_152;
            return true;
          }
          else if (hashCode == X12_153_HASH)
          {
            enumValue = X12TransactionSet::X12_153;
            return true;
          }
          else if (hashCode == X12_154_HASH)
          {
            enumValue = X12TransactionSet::X12_154;
            return true;
          }
          else if (hashCode == X12_155_HASH)
          {
            enumValue = X12TransactionSet::X12_155;
            return true;
          }
          else if (hashCode == X12_157_HASH)
          {
            enumValue = X12TransactionSet::X12_157;
            return true;
          }
          else if (hashCode == X12_158_HASH)
          {
            enumValue = X12TransactionSet::X12_158;
            return true;
          }
          else if (hashCode == X12_159_HASH)
          {
            enumValue = X12TransactionSet::X12_159;
            return true;
          }
          else if (hashCode == X12_160_HASH)
          {
            enumValue = X12TransactionSet::X12_160;
            return true;
          }
          else if (hashCode == X12_161_HASH)
          {
            enumValue = X12TransactionSet::X12_161;
            return true;
          }
          else if (hashCode == X12_163_HASH)
          {
            enumValue = X12TransactionSet::X12_163;
            return true;
          }
          else if (hashCode == X12_170_HASH)
          {
            enumValue = X12TransactionSet::X12_170;
            return true;
          }
          else if (hashCode == X12_175_HASH)
          {
            enumValue = X12TransactionSet::X12_175;
            return true;
          }
          else if (hashCode == X12_176_HASH)
          {
            enumValue = X12TransactionSet::X12_176;
            return true;
          }
          else if (hashCode == X12_179_HASH)
          {
            enumValue = X12TransactionSet::X12_179;
            return true;
          }
          else if (hashCode == X12_180_HASH)
          {
            enumValue = X12TransactionSet::X12_180;
            return true;
          }
          else if (hashCode == X12_185_HASH)
          {
            enumValue = X12TransactionSet::X12_185;
            return true;
          }
          else if (hashCode == X12_186_HASH)
          {
            enumValue = X12TransactionSet::X12_186;
            return true;
          }
          else if (hashCode == X12_187_HASH)
          {
            enumValue = X12TransactionSet::X12_187;
            return true;
          }
          else if (hashCode == X12_188_HASH)
          {
            enumValue = X12TransactionSet::X12_188;
            return true;
          }
          else if (hashCode == X12_189_HASH)
          {
            enumValue = X12TransactionSet::X12_189;
            return true;
          }
          else if (hashCode == X12_190_HASH)
          {
            enumValue = X12TransactionSet::X12_190;
            return true;
          }
          else if (hashCode == X12_191_HASH)
          {
            enumValue = X12TransactionSet::X12_191;
            return true;
          }
          else if (hashCode == X12_194_HASH)
          {
            enumValue = X12TransactionSet::X12_194;
            return true;
          }
          else if (hashCode == X12_195_HASH)
          {
            enumValue = X12TransactionSet::X12_195;
            return true;
          }
          else if (hashCode == X12_196_HASH)
          {
            enumValue = X12TransactionSet::X12_196;
            return true;
          }
          else if (hashCode == X12_197_HASH)
          {
            enumValue = X12TransactionSet::X12_197;
            return true;
          }
          else if (hashCode == X12_198_HASH)
          {
            enumValue = X12TransactionSet::X12_198;
            return true;
          }
          else if (hashCode == X12_199_HASH)
          {
            enumValue = X12TransactionSet::X12_199;
            return true;
          }
          else if (hashCode == X12_200_HASH)
          {
            enumValue = X12TransactionSet::X12_200;
            return true;
          }
          else if (hashCode == X12_201_HASH)
          {
            enumValue = X12TransactionSet::X12_201;
            return true;
          }
          else if (hashCode == X12_202_HASH)
          {
            enumValue = X12TransactionSet::X12_202;
            return true;
          }
          else if (hashCode == X12_203_HASH)
          {
            enumValue = X12TransactionSet::X12_203;
            return true;
          }
          else if (hashCode == X12_204_HASH)
          {
            enumValue = X12TransactionSet::X12_204;
            return true;
          }
          else if (hashCode == X12_205_HASH)
          {
            enumValue = X12TransactionSet::X12_205;
            return true;
          }
          else if (hashCode == X12_206_HASH)
          {
            enumValue = X12TransactionSet::X12_206;
            return true;
          }
          else if (hashCode == X12_210_HASH)
          {
            enumValue = X12TransactionSet::X12_210;
            return true;
          }
          else if (hashCode == X12_211_HASH)
          {
            enumValue = X12TransactionSet::X12_211;
            return true;
          }
          else if (hashCode == X12_212_HASH)
          {
            enumValue = X12TransactionSet::X12_212;
            return true;
          }
          else if (hashCode == X12_213_HASH)
          {
            enumValue = X12TransactionSet::X12_213;
            return true;
          }
          else if (hashCode == X12_214_HASH)
          {
            enumValue = X12TransactionSet::X12_214;
            return true;
          }
          else if (hashCode == X12_215_HASH)
          {
            enumValue = X12TransactionSet::X12_215;
            return true;
          }
          else if (hashCode == X12_216_HASH)
          {
            enumValue = X12TransactionSet::X12_216;
            return true;
          }
          else if (hashCode == X12_217_HASH)
          {
            enumValue = X12TransactionSet::X12_217;
            return true;
          }
          else if (hashCode == X12_218_HASH)
          {
            enumValue = X12TransactionSet::X12_218;
            return true;
          }
          else if (hashCode == X12_219_HASH)
          {
            enumValue = X12TransactionSet::X12_219;
            return true;
          }
          else if (hashCode == X12_220_HASH)
          {
            enumValue = X12TransactionSet::X12_220;
            return true;
          }
          else if (hashCode == X12_222_HASH)
          {
            enumValue = X12TransactionSet::X12_222;
            return true;
          }
          else if (hashCode == X12_223_HASH)
          {
            enumValue = X12TransactionSet::X12_223;
            return true;
          }
          else if (hashCode == X12_224_HASH)
          {
            enumValue = X12TransactionSet::X12_224;
            return true;
          }
          else if (hashCode == X12_225_HASH)
          {
            enumValue = X12TransactionSet::X12_225;
            return true;
          }
          else if (hashCode == X12_227_HASH)
          {
            enumValue = X12TransactionSet::X12_227;
            return true;
          }
          else if (hashCode == X12_228_HASH)
          {
            enumValue = X12TransactionSet::X12_228;
            return true;
          }
          else if (hashCode == X12_240_HASH)
          {
            enumValue = X12TransactionSet::X12_240;
            return true;
          }
          else if (hashCode == X12_242_HASH)
          {
            enumValue = X12TransactionSet::X12_242;
            return true;
          }
          else if (hashCode == X12_244_HASH)
          {
            enumValue = X12TransactionSet::X12_244;
            return true;
          }
          else if (hashCode == X12_245_HASH)
          {
            enumValue = X12TransactionSet::X12_245;
            return true;
          }
          else if (hashCode == X12_248_HASH)
          {
            enumValue = X12TransactionSet::X12_248;
            return true;
          }
          else if (hashCode == X12_249_HASH)
          {
            enumValue = X12TransactionSet::X12_249;
            return true;
          }
          else if (hashCode == X12_250_HASH)
          {
            enumValue = X12TransactionSet::X12_250;
            return true;
          }
          else if (hashCode == X12_251_HASH)
          {
            enumValue = X12TransactionSet::X12_251;
            return true;
          }
          else if (hashCode == X12_252_HASH)
          {
            enumValue = X12TransactionSet::X12_252;
            return true;
          }
          else if (hashCode == X12_255_HASH)
          {
            enumValue = X12TransactionSet::X12_255;
            return true;
          }
          else if (hashCode == X12_256_HASH)
          {
            enumValue = X12TransactionSet::X12_256;
            return true;
          }
          else if (hashCode == X12_259_HASH)
          {
            enumValue = X12TransactionSet::X12_259;
            return true;
          }
          else if (hashCode == X12_260_HASH)
          {
            enumValue = X12TransactionSet::X12_260;
            return true;
          }
          else if (hashCode == X12_261_HASH)
          {
            enumValue = X12TransactionSet::X12_261;
            return true;
          }
          else if (hashCode == X12_262_HASH)
          {
            enumValue = X12TransactionSet::X12_262;
            return true;
          }
          else if (hashCode == X12_263_HASH)
          {
            enumValue = X12TransactionSet::X12_263;
            return true;
          }
          else if (hashCode == X12_264_HASH)
          {
            enumValue = X12TransactionSet::X12_264;
            return true;
          }
          else if (hashCode == X12_265_HASH)
          {
            enumValue = X12TransactionSet::X12_265;
            return true;
          }
          else if (hashCode == X12_266_HASH)
          {
            enumValue = X12TransactionSet::X12_266;
            return true;
          }
          else if (hashCode == X12_267_HASH)
          {
            enumValue = X12TransactionSet::X12_267;
            return true;
          }
          else if (hashCode == X12_268_HASH)
          {
            enumValue = X12TransactionSet::X12_268;
            return true;
          }
          else if (hashCode == X12_269_HASH)
          {
            enumValue = X12TransactionSet::X12_269;
            return true;
          }
          else if (hashCode == X12_270_HASH)
          {
            enumValue = X12TransactionSet::X12_270;
            return true;
          }
          else if (hashCode == X12_271_HASH)
          {
            enumValue = X12TransactionSet::X12_271;
            return true;
          }
          else if (hashCode == X12_272_HASH)
          {
            enumValue = X12TransactionSet::X12_272;
            return true;
          }
          else if (hashCode == X12_273_HASH)
          {
            enumValue = X12TransactionSet::X12_273;
            return true;
          }
          else if (hashCode == X12_274_HASH)
          {
            enumValue = X12TransactionSet::X12_274;
            return true;
          }
          else if (hashCode == X12_275_HASH)
          {
            enumValue = X12TransactionSet::X12_275;
            return true;
          }
          else if (hashCode == X12_276_HASH)
          {
            enumValue = X12TransactionSet::X12_276;
            return true;
          }
          else if (hashCode == X12_277_HASH)
          {
            enumValue = X12TransactionSet::X12_277;
            return true;
          }
          return false;
        }
        static bool GetEnumForNameHelper1(int hashCode, X12TransactionSet& enumValue)
        {
          if (hashCode == X12_278_HASH)
          {
            enumValue = X12TransactionSet::X12_278;
            return true;
          }
          else if (hashCode == X12_280_HASH)
          {
            enumValue = X12TransactionSet::X12_280;
            return true;
          }
          else if (hashCode == X12_283_HASH)
          {
            enumValue = X12TransactionSet::X12_283;
            return true;
          }
          else if (hashCode == X12_284_HASH)
          {
            enumValue = X12TransactionSet::X12_284;
            return true;
          }
          else if (hashCode == X12_285_HASH)
          {
            enumValue = X12TransactionSet::X12_285;
            return true;
          }
          else if (hashCode == X12_286_HASH)
          {
            enumValue = X12TransactionSet::X12_286;
            return true;
          }
          else if (hashCode == X12_288_HASH)
          {
            enumValue = X12TransactionSet::X12_288;
            return true;
          }
          else if (hashCode == X12_290_HASH)
          {
            enumValue = X12TransactionSet::X12_290;
            return true;
          }
          else if (hashCode == X12_300_HASH)
          {
            enumValue = X12TransactionSet::X12_300;
            return true;
          }
          else if (hashCode == X12_301_HASH)
          {
            enumValue = X12TransactionSet::X12_301;
            return true;
          }
          else if (hashCode == X12_303_HASH)
          {
            enumValue = X12TransactionSet::X12_303;
            return true;
          }
          else if (hashCode == X12_304_HASH)
          {
            enumValue = X12TransactionSet::X12_304;
            return true;
          }
          else if (hashCode == X12_309_HASH)
          {
            enumValue = X12TransactionSet::X12_309;
            return true;
          }
          else if (hashCode == X12_310_HASH)
          {
            enumValue = X12TransactionSet::X12_310;
            return true;
          }
          else if (hashCode == X12_311_HASH)
          {
            enumValue = X12TransactionSet::X12_311;
            return true;
          }
          else if (hashCode == X12_312_HASH)
          {
            enumValue = X12TransactionSet::X12_312;
            return true;
          }
          else if (hashCode == X12_313_HASH)
          {
            enumValue = X12TransactionSet::X12_313;
            return true;
          }
          else if (hashCode == X12_315_HASH)
          {
            enumValue = X12TransactionSet::X12_315;
            return true;
          }
          else if (hashCode == X12_317_HASH)
          {
            enumValue = X12TransactionSet::X12_317;
            return true;
          }
          else if (hashCode == X12_319_HASH)
          {
            enumValue = X12TransactionSet::X12_319;
            return true;
          }
          else if (hashCode == X12_322_HASH)
          {
            enumValue = X12TransactionSet::X12_322;
            return true;
          }
          else if (hashCode == X12_323_HASH)
          {
            enumValue = X12TransactionSet::X12_323;
            return true;
          }
          else if (hashCode == X12_324_HASH)
          {
            enumValue = X12TransactionSet::X12_324;
            return true;
          }
          else if (hashCode == X12_325_HASH)
          {
            enumValue = X12TransactionSet::X12_325;
            return true;
          }
          else if (hashCode == X12_326_HASH)
          {
            enumValue = X12TransactionSet::X12_326;
            return true;
          }
          else if (hashCode == X12_350_HASH)
          {
            enumValue = X12TransactionSet::X12_350;
            return true;
          }
          else if (hashCode == X12_352_HASH)
          {
            enumValue = X12TransactionSet::X12_352;
            return true;
          }
          else if (hashCode == X12_353_HASH)
          {
            enumValue = X12TransactionSet::X12_353;
            return true;
          }
          else if (hashCode == X12_354_HASH)
          {
            enumValue = X12TransactionSet::X12_354;
            return true;
          }
          else if (hashCode == X12_355_HASH)
          {
            enumValue = X12TransactionSet::X12_355;
            return true;
          }
          else if (hashCode == X12_356_HASH)
          {
            enumValue = X12TransactionSet::X12_356;
            return true;
          }
          else if (hashCode == X12_357_HASH)
          {
            enumValue = X12TransactionSet::X12_357;
            return true;
          }
          else if (hashCode == X12_358_HASH)
          {
            enumValue = X12TransactionSet::X12_358;
            return true;
          }
          else if (hashCode == X12_361_HASH)
          {
            enumValue = X12TransactionSet::X12_361;
            return true;
          }
          else if (hashCode == X12_362_HASH)
          {
            enumValue = X12TransactionSet::X12_362;
            return true;
          }
          else if (hashCode == X12_404_HASH)
          {
            enumValue = X12TransactionSet::X12_404;
            return true;
          }
          else if (hashCode == X12_410_HASH)
          {
            enumValue = X12TransactionSet::X12_410;
            return true;
          }
          else if (hashCode == X12_412_HASH)
          {
            enumValue = X12TransactionSet::X12_412;
            return true;
          }
          else if (hashCode == X12_414_HASH)
          {
            enumValue = X12TransactionSet::X12_414;
            return true;
          }
          else if (hashCode == X12_417_HASH)
          {
            enumValue = X12TransactionSet::X12_417;
            return true;
          }
          else if (hashCode == X12_418_HASH)
          {
            enumValue = X12TransactionSet::X12_418;
            return true;
          }
          else if (hashCode == X12_419_HASH)
          {
            enumValue = X12TransactionSet::X12_419;
            return true;
          }
          else if (hashCode == X12_420_HASH)
          {
            enumValue = X12TransactionSet::X12_420;
            return true;
          }
          else if (hashCode == X12_421_HASH)
          {
            enumValue = X12TransactionSet::X12_421;
            return true;
          }
          else if (hashCode == X12_422_HASH)
          {
            enumValue = X12TransactionSet::X12_422;
            return true;
          }
          else if (hashCode == X12_423_HASH)
          {
            enumValue = X12TransactionSet::X12_423;
            return true;
          }
          else if (hashCode == X12_424_HASH)
          {
            enumValue = X12TransactionSet::X12_424;
            return true;
          }
          else if (hashCode == X12_425_HASH)
          {
            enumValue = X12TransactionSet::X12_425;
            return true;
          }
          else if (hashCode == X12_426_HASH)
          {
            enumValue = X12TransactionSet::X12_426;
            return true;
          }
          else if (hashCode == X12_429_HASH)
          {
            enumValue = X12TransactionSet::X12_429;
            return true;
          }
          else if (hashCode == X12_431_HASH)
          {
            enumValue = X12TransactionSet::X12_431;
            return true;
          }
          else if (hashCode == X12_432_HASH)
          {
            enumValue = X12TransactionSet::X12_432;
            return true;
          }
          else if (hashCode == X12_433_HASH)
          {
            enumValue = X12TransactionSet::X12_433;
            return true;
          }
          else if (hashCode == X12_434_HASH)
          {
            enumValue = X12TransactionSet::X12_434;
            return true;
          }
          else if (hashCode == X12_435_HASH)
          {
            enumValue = X12TransactionSet::X12_435;
            return true;
          }
          else if (hashCode == X12_436_HASH)
          {
            enumValue = X12TransactionSet::X12_436;
            return true;
          }
          else if (hashCode == X12_437_HASH)
          {
            enumValue = X12TransactionSet::X12_437;
            return true;
          }
          else if (hashCode == X12_440_HASH)
          {
            enumValue = X12TransactionSet::X12_440;
            return true;
          }
          else if (hashCode == X12_451_HASH)
          {
            enumValue = X12TransactionSet::X12_451;
            return true;
          }
          else if (hashCode == X12_452_HASH)
          {
            enumValue = X12TransactionSet::X12_452;
            return true;
          }
          else if (hashCode == X12_453_HASH)
          {
            enumValue = X12TransactionSet::X12_453;
            return true;
          }
          else if (hashCode == X12_455_HASH)
          {
            enumValue = X12TransactionSet::X12_455;
            return true;
          }
          else if (hashCode == X12_456_HASH)
          {
            enumValue = X12TransactionSet::X12_456;
            return true;
          }
          else if (hashCode == X12_460_HASH)
          {
            enumValue = X12TransactionSet::X12_460;
            return true;
          }
          else if (hashCode == X12_463_HASH)
          {
            enumValue = X12TransactionSet::X12_463;
            return true;
          }
          else if (hashCode == X12_466_HASH)
          {
            enumValue = X12TransactionSet::X12_466;
            return true;
          }
          else if (hashCode == X12_468_HASH)
          {
            enumValue = X12TransactionSet::X12_468;
            return true;
          }
          else if (hashCode == X12_470_HASH)
          {
            enumValue = X12TransactionSet::X12_470;
            return true;
          }
          else if (hashCode == X12_475_HASH)
          {
            enumValue = X12TransactionSet::X12_475;
            return true;
          }
          else if (hashCode == X12_485_HASH)
          {
            enumValue = X12TransactionSet::X12_485;
            return true;
          }
          else if (hashCode == X12_486_HASH)
          {
            enumValue = X12TransactionSet::X12_486;
            return true;
          }
          else if (hashCode == X12_490_HASH)
          {
            enumValue = X12TransactionSet::X12_490;
            return true;
          }
          else if (hashCode == X12_492_HASH)
          {
            enumValue = X12TransactionSet::X12_492;
            return true;
          }
          else if (hashCode == X12_494_HASH)
          {
            enumValue = X12TransactionSet::X12_494;
            return true;
          }
          else if (hashCode == X12_500_HASH)
          {
            enumValue = X12TransactionSet::X12_500;
            return true;
          }
          else if (hashCode == X12_501_HASH)
          {
            enumValue = X12TransactionSet::X12_501;
            return true;
          }
          else if (hashCode == X12_503_HASH)
          {
            enumValue = X12TransactionSet::X12_503;
            return true;
          }
          else if (hashCode == X12_504_HASH)
          {
            enumValue = X12TransactionSet::X12_504;
            return true;
          }
          else if (hashCode == X12_511_HASH)
          {
            enumValue = X12TransactionSet::X12_511;
            return true;
          }
          else if (hashCode == X12_517_HASH)
          {
            enumValue = X12TransactionSet::X12_517;
            return true;
          }
          else if (hashCode == X12_521_HASH)
          {
            enumValue = X12TransactionSet::X12_521;
            return true;
          }
          else if (hashCode == X12_527_HASH)
          {
            enumValue = X12TransactionSet::X12_527;
            return true;
          }
          else if (hashCode == X12_536_HASH)
          {
            enumValue = X12TransactionSet::X12_536;
            return true;
          }
          else if (hashCode == X12_540_HASH)
          {
            enumValue = X12TransactionSet::X12_540;
            return true;
          }
          else if (hashCode == X12_561_HASH)
          {
            enumValue = X12TransactionSet::X12_561;
            return true;
          }
          else if (hashCode == X12_567_HASH)
          {
            enumValue = X12TransactionSet::X12_567;
            return true;
          }
          else if (hashCode == X12_568_HASH)
          {
            enumValue = X12TransactionSet::X12_568;
            return true;
          }
          else if (hashCode == X12_601_HASH)
          {
            enumValue = X12TransactionSet::X12_601;
            return true;
          }
          else if (hashCode == X12_602_HASH)
          {
            enumValue = X12TransactionSet::X12_602;
            return true;
          }
          else if (hashCode == X12_620_HASH)
          {
            enumValue = X12TransactionSet::X12_620;
            return true;
          }
          else if (hashCode == X12_625_HASH)
          {
            enumValue = X12TransactionSet::X12_625;
            return true;
          }
          else if (hashCode == X12_650_HASH)
          {
            enumValue = X12TransactionSet::X12_650;
            return true;
          }
          else if (hashCode == X12_715_HASH)
          {
            enumValue = X12TransactionSet::X12_715;
            return true;
          }
          else if (hashCode == X12_753_HASH)
          {
            enumValue = X12TransactionSet::X12_753;
            return true;
          }
          else if (hashCode == X12_754_HASH)
          {
            enumValue = X12TransactionSet::X12_754;
            return true;
          }
          else if (hashCode == X12_805_HASH)
          {
            enumValue = X12TransactionSet::X12_805;
            return true;
          }
          else if (hashCode == X12_806_HASH)
          {
            enumValue = X12TransactionSet::X12_806;
            return true;
          }
          else if (hashCode == X12_810_HASH)
          {
            enumValue = X12TransactionSet::X12_810;
            return true;
          }
          else if (hashCode == X12_811_HASH)
          {
            enumValue = X12TransactionSet::X12_811;
            return true;
          }
          else if (hashCode == X12_812_HASH)
          {
            enumValue = X12TransactionSet::X12_812;
            return true;
          }
          else if (hashCode == X12_813_HASH)
          {
            enumValue = X12TransactionSet::X12_813;
            return true;
          }
          else if (hashCode == X12_814_HASH)
          {
            enumValue = X12TransactionSet::X12_814;
            return true;
          }
          else if (hashCode == X12_815_HASH)
          {
            enumValue = X12TransactionSet::X12_815;
            return true;
          }
          else if (hashCode == X12_816_HASH)
          {
            enumValue = X12TransactionSet::X12_816;
            return true;
          }
          else if (hashCode == X12_818_HASH)
          {
            enumValue = X12TransactionSet::X12_818;
            return true;
          }
          else if (hashCode == X12_819_HASH)
          {
            enumValue = X12TransactionSet::X12_819;
            return true;
          }
          else if (hashCode == X12_820_HASH)
          {
            enumValue = X12TransactionSet::X12_820;
            return true;
          }
          else if (hashCode == X12_821_HASH)
          {
            enumValue = X12TransactionSet::X12_821;
            return true;
          }
          else if (hashCode == X12_822_HASH)
          {
            enumValue = X12TransactionSet::X12_822;
            return true;
          }
          else if (hashCode == X12_823_HASH)
          {
            enumValue = X12TransactionSet::X12_823;
            return true;
          }
          else if (hashCode == X12_824_HASH)
          {
            enumValue = X12TransactionSet::X12_824;
            return true;
          }
          else if (hashCode == X12_826_HASH)
          {
            enumValue = X12TransactionSet::X12_826;
            return true;
          }
          else if (hashCode == X12_827_HASH)
          {
            enumValue = X12TransactionSet::X12_827;
            return true;
          }
          else if (hashCode == X12_828_HASH)
          {
            enumValue = X12TransactionSet::X12_828;
            return true;
          }
          else if (hashCode == X12_829_HASH)
          {
            enumValue = X12TransactionSet::X12_829;
            return true;
          }
          else if (hashCode == X12_830_HASH)
          {
            enumValue = X12TransactionSet::X12_830;
            return true;
          }
          else if (hashCode == X12_831_HASH)
          {
            enumValue = X12TransactionSet::X12_831;
            return true;
          }
          else if (hashCode == X12_832_HASH)
          {
            enumValue = X12TransactionSet::X12_832;
            return true;
          }
          else if (hashCode == X12_833_HASH)
          {
            enumValue = X12TransactionSet::X12_833;
            return true;
          }
          else if (hashCode == X12_834_HASH)
          {
            enumValue = X12TransactionSet::X12_834;
            return true;
          }
          else if (hashCode == X12_835_HASH)
          {
            enumValue = X12TransactionSet::X12_835;
            return true;
          }
          else if (hashCode == X12_836_HASH)
          {
            enumValue = X12TransactionSet::X12_836;
            return true;
          }
          return false;
        }
        static bool GetEnumForNameHelper2(int hashCode, X12TransactionSet& enumValue)
        {
          if (hashCode == X12_837_HASH)
          {
            enumValue = X12TransactionSet::X12_837;
            return true;
          }
          else if (hashCode == X12_838_HASH)
          {
            enumValue = X12TransactionSet::X12_838;
            return true;
          }
          else if (hashCode == X12_839_HASH)
          {
            enumValue = X12TransactionSet::X12_839;
            return true;
          }
          else if (hashCode == X12_840_HASH)
          {
            enumValue = X12TransactionSet::X12_840;
            return true;
          }
          else if (hashCode == X12_841_HASH)
          {
            enumValue = X12TransactionSet::X12_841;
            return true;
          }
          else if (hashCode == X12_842_HASH)
          {
            enumValue = X12TransactionSet::X12_842;
            return true;
          }
          else if (hashCode == X12_843_HASH)
          {
            enumValue = X12TransactionSet::X12_843;
            return true;
          }
          else if (hashCode == X12_844_HASH)
          {
            enumValue = X12TransactionSet::X12_844;
            return true;
          }
          else if (hashCode == X12_845_HASH)
          {
            enumValue = X12TransactionSet::X12_845;
            return true;
          }
          else if (hashCode == X12_846_HASH)
          {
            enumValue = X12TransactionSet::X12_846;
            return true;
          }
          else if (hashCode == X12_847_HASH)
          {
            enumValue = X12TransactionSet::X12_847;
            return true;
          }
          else if (hashCode == X12_848_HASH)
          {
            enumValue = X12TransactionSet::X12_848;
            return true;
          }
          else if (hashCode == X12_849_HASH)
          {
            enumValue = X12TransactionSet::X12_849;
            return true;
          }
          else if (hashCode == X12_850_HASH)
          {
            enumValue = X12TransactionSet::X12_850;
            return true;
          }
          else if (hashCode == X12_851_HASH)
          {
            enumValue = X12TransactionSet::X12_851;
            return true;
          }
          else if (hashCode == X12_852_HASH)
          {
            enumValue = X12TransactionSet::X12_852;
            return true;
          }
          else if (hashCode == X12_853_HASH)
          {
            enumValue = X12TransactionSet::X12_853;
            return true;
          }
          else if (hashCode == X12_854_HASH)
          {
            enumValue = X12TransactionSet::X12_854;
            return true;
          }
          else if (hashCode == X12_855_HASH)
          {
            enumValue = X12TransactionSet::X12_855;
            return true;
          }
          else if (hashCode == X12_856_HASH)
          {
            enumValue = X12TransactionSet::X12_856;
            return true;
          }
          else if (hashCode == X12_857_HASH)
          {
            enumValue = X12TransactionSet::X12_857;
            return true;
          }
          else if (hashCode == X12_858_HASH)
          {
            enumValue = X12TransactionSet::X12_858;
            return true;
          }
          else if (hashCode == X12_859_HASH)
          {
            enumValue = X12TransactionSet::X12_859;
            return true;
          }
          else if (hashCode == X12_860_HASH)
          {
            enumValue = X12TransactionSet::X12_860;
            return true;
          }
          else if (hashCode == X12_861_HASH)
          {
            enumValue = X12TransactionSet::X12_861;
            return true;
          }
          else if (hashCode == X12_862_HASH)
          {
            enumValue = X12TransactionSet::X12_862;
            return true;
          }
          else if (hashCode == X12_863_HASH)
          {
            enumValue = X12TransactionSet::X12_863;
            return true;
          }
          else if (hashCode == X12_864_HASH)
          {
            enumValue = X12TransactionSet::X12_864;
            return true;
          }
          else if (hashCode == X12_865_HASH)
          {
            enumValue = X12TransactionSet::X12_865;
            return true;
          }
          else if (hashCode == X12_866_HASH)
          {
            enumValue = X12TransactionSet::X12_866;
            return true;
          }
          else if (hashCode == X12_867_HASH)
          {
            enumValue = X12TransactionSet::X12_867;
            return true;
          }
          else if (hashCode == X12_868_HASH)
          {
            enumValue = X12TransactionSet::X12_868;
            return true;
          }
          else if (hashCode == X12_869_HASH)
          {
            enumValue = X12TransactionSet::X12_869;
            return true;
          }
          else if (hashCode == X12_870_HASH)
          {
            enumValue = X12TransactionSet::X12_870;
            return true;
          }
          else if (hashCode == X12_871_HASH)
          {
            enumValue = X12TransactionSet::X12_871;
            return true;
          }
          else if (hashCode == X12_872_HASH)
          {
            enumValue = X12TransactionSet::X12_872;
            return true;
          }
          else if (hashCode == X12_873_HASH)
          {
            enumValue = X12TransactionSet::X12_873;
            return true;
          }
          else if (hashCode == X12_874_HASH)
          {
            enumValue = X12TransactionSet::X12_874;
            return true;
          }
          else if (hashCode == X12_875_HASH)
          {
            enumValue = X12TransactionSet::X12_875;
            return true;
          }
          else if (hashCode == X12_876_HASH)
          {
            enumValue = X12TransactionSet::X12_876;
            return true;
          }
          else if (hashCode == X12_877_HASH)
          {
            enumValue = X12TransactionSet::X12_877;
            return true;
          }
          else if (hashCode == X12_878_HASH)
          {
            enumValue = X12TransactionSet::X12_878;
            return true;
          }
          else if (hashCode == X12_879_HASH)
          {
            enumValue = X12TransactionSet::X12_879;
            return true;
          }
          else if (hashCode == X12_880_HASH)
          {
            enumValue = X12TransactionSet::X12_880;
            return true;
          }
          else if (hashCode == X12_881_HASH)
          {
            enumValue = X12TransactionSet::X12_881;
            return true;
          }
          else if (hashCode == X12_882_HASH)
          {
            enumValue = X12TransactionSet::X12_882;
            return true;
          }
          else if (hashCode == X12_883_HASH)
          {
            enumValue = X12TransactionSet::X12_883;
            return true;
          }
          else if (hashCode == X12_884_HASH)
          {
            enumValue = X12TransactionSet::X12_884;
            return true;
          }
          else if (hashCode == X12_885_HASH)
          {
            enumValue = X12TransactionSet::X12_885;
            return true;
          }
          else if (hashCode == X12_886_HASH)
          {
            enumValue = X12TransactionSet::X12_886;
            return true;
          }
          else if (hashCode == X12_887_HASH)
          {
            enumValue = X12TransactionSet::X12_887;
            return true;
          }
          else if (hashCode == X12_888_HASH)
          {
            enumValue = X12TransactionSet::X12_888;
            return true;
          }
          else if (hashCode == X12_889_HASH)
          {
            enumValue = X12TransactionSet::X12_889;
            return true;
          }
          else if (hashCode == X12_891_HASH)
          {
            enumValue = X12TransactionSet::X12_891;
            return true;
          }
          else if (hashCode == X12_893_HASH)
          {
            enumValue = X12TransactionSet::X12_893;
            return true;
          }
          else if (hashCode == X12_894_HASH)
          {
            enumValue = X12TransactionSet::X12_894;
            return true;
          }
          else if (hashCode == X12_895_HASH)
          {
            enumValue = X12TransactionSet::X12_895;
            return true;
          }
          else if (hashCode == X12_896_HASH)
          {
            enumValue = X12TransactionSet::X12_896;
            return true;
          }
          else if (hashCode == X12_920_HASH)
          {
            enumValue = X12TransactionSet::X12_920;
            return true;
          }
          else if (hashCode == X12_924_HASH)
          {
            enumValue = X12TransactionSet::X12_924;
            return true;
          }
          else if (hashCode == X12_925_HASH)
          {
            enumValue = X12TransactionSet::X12_925;
            return true;
          }
          else if (hashCode == X12_926_HASH)
          {
            enumValue = X12TransactionSet::X12_926;
            return true;
          }
          else if (hashCode == X12_928_HASH)
          {
            enumValue = X12TransactionSet::X12_928;
            return true;
          }
          else if (hashCode == X12_940_HASH)
          {
            enumValue = X12TransactionSet::X12_940;
            return true;
          }
          else if (hashCode == X12_943_HASH)
          {
            enumValue = X12TransactionSet::X12_943;
            return true;
          }
          else if (hashCode == X12_944_HASH)
          {
            enumValue = X12TransactionSet::X12_944;
            return true;
          }
          else if (hashCode == X12_945_HASH)
          {
            enumValue = X12TransactionSet::X12_945;
            return true;
          }
          else if (hashCode == X12_947_HASH)
          {
            enumValue = X12TransactionSet::X12_947;
            return true;
          }
          else if (hashCode == X12_980_HASH)
          {
            enumValue = X12TransactionSet::X12_980;
            return true;
          }
          else if (hashCode == X12_990_HASH)
          {
            enumValue = X12TransactionSet::X12_990;
            return true;
          }
          else if (hashCode == X12_993_HASH)
          {
            enumValue = X12TransactionSet::X12_993;
            return true;
          }
          else if (hashCode == X12_996_HASH)
          {
            enumValue = X12TransactionSet::X12_996;
            return true;
          }
          else if (hashCode == X12_997_HASH)
          {
            enumValue = X12TransactionSet::X12_997;
            return true;
          }
          else if (hashCode == X12_998_HASH)
          {
            enumValue = X12TransactionSet::X12_998;
            return true;
          }
          else if (hashCode == X12_999_HASH)
          {
            enumValue = X12TransactionSet::X12_999;
            return true;
          }
          else if (hashCode == X12_270_X279_HASH)
          {
            enumValue = X12TransactionSet::X12_270_X279;
            return true;
          }
          else if (hashCode == X12_271_X279_HASH)
          {
            enumValue = X12TransactionSet::X12_271_X279;
            return true;
          }
          else if (hashCode == X12_275_X210_HASH)
          {
            enumValue = X12TransactionSet::X12_275_X210;
            return true;
          }
          else if (hashCode == X12_275_X211_HASH)
          {
            enumValue = X12TransactionSet::X12_275_X211;
            return true;
          }
          else if (hashCode == X12_276_X212_HASH)
          {
            enumValue = X12TransactionSet::X12_276_X212;
            return true;
          }
          else if (hashCode == X12_277_X212_HASH)
          {
            enumValue = X12TransactionSet::X12_277_X212;
            return true;
          }
          else if (hashCode == X12_277_X214_HASH)
          {
            enumValue = X12TransactionSet::X12_277_X214;
            return true;
          }
          else if (hashCode == X12_277_X364_HASH)
          {
            enumValue = X12TransactionSet::X12_277_X364;
            return true;
          }
          else if (hashCode == X12_278_X217_HASH)
          {
            enumValue = X12TransactionSet::X12_278_X217;
            return true;
          }
          else if (hashCode == X12_820_X218_HASH)
          {
            enumValue = X12TransactionSet::X12_820_X218;
            return true;
          }
          else if (hashCode == X12_820_X306_HASH)
          {
            enumValue = X12TransactionSet::X12_820_X306;
            return true;
          }
          else if (hashCode == X12_824_X186_HASH)
          {
            enumValue = X12TransactionSet::X12_824_X186;
            return true;
          }
          else if (hashCode == X12_834_X220_HASH)
          {
            enumValue = X12TransactionSet::X12_834_X220;
            return true;
          }
          else if (hashCode == X12_834_X307_HASH)
          {
            enumValue = X12TransactionSet::X12_834_X307;
            return true;
          }
          else if (hashCode == X12_834_X318_HASH)
          {
            enumValue = X12TransactionSet::X12_834_X318;
            return true;
          }
          else if (hashCode == X12_835_X221_HASH)
          {
            enumValue = X12TransactionSet::X12_835_X221;
            return true;
          }
          else if (hashCode == X12_837_X222_HASH)
          {
            enumValue = X12TransactionSet::X12_837_X222;
            return true;
          }
          else if (hashCode == X12_837_X223_HASH)
          {
            enumValue = X12TransactionSet::X12_837_X223;
            return true;
          }
          else if (hashCode == X12_837_X224_HASH)
          {
            enumValue = X12TransactionSet::X12_837_X224;
            return true;
          }
          else if (hashCode == X12_837_X291_HASH)
          {
            enumValue = X12TransactionSet::X12_837_X291;
            return true;
          }
          else if (hashCode == X12_837_X292_HASH)
          {
            enumValue = X12TransactionSet::X12_837_X292;
            return true;
          }
          else if (hashCode == X12_837_X298_HASH)
          {
            enumValue = X12TransactionSet::X12_837_X298;
            return true;
          }
          else if (hashCode == X12_999_X231_HASH)
          {
            enumValue = X12TransactionSet::X12_999_X231;
            return true;
          }
          return false;
        }

        static bool GetNameForEnumHelper0(X12TransactionSet enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case X12TransactionSet::X12_100:
            value = "X12_100";
            return true;
          case X12TransactionSet::X12_101:
            value = "X12_101";
            return true;
          case X12TransactionSet::X12_102:
            value = "X12_102";
            return true;
          case X12TransactionSet::X12_103:
            value = "X12_103";
            return true;
          case X12TransactionSet::X12_104:
            value = "X12_104";
            return true;
          case X12TransactionSet::X12_105:
            value = "X12_105";
            return true;
          case X12TransactionSet::X12_106:
            value = "X12_106";
            return true;
          case X12TransactionSet::X12_107:
            value = "X12_107";
            return true;
          case X12TransactionSet::X12_108:
            value = "X12_108";
            return true;
          case X12TransactionSet::X12_109:
            value = "X12_109";
            return true;
          case X12TransactionSet::X12_110:
            value = "X12_110";
            return true;
          case X12TransactionSet::X12_111:
            value = "X12_111";
            return true;
          case X12TransactionSet::X12_112:
            value = "X12_112";
            return true;
          case X12TransactionSet::X12_113:
            value = "X12_113";
            return true;
          case X12TransactionSet::X12_120:
            value = "X12_120";
            return true;
          case X12TransactionSet::X12_121:
            value = "X12_121";
            return true;
          case X12TransactionSet::X12_124:
            value = "X12_124";
            return true;
          case X12TransactionSet::X12_125:
            value = "X12_125";
            return true;
          case X12TransactionSet::X12_126:
            value = "X12_126";
            return true;
          case X12TransactionSet::X12_127:
            value = "X12_127";
            return true;
          case X12TransactionSet::X12_128:
            value = "X12_128";
            return true;
          case X12TransactionSet::X12_129:
            value = "X12_129";
            return true;
          case X12TransactionSet::X12_130:
            value = "X12_130";
            return true;
          case X12TransactionSet::X12_131:
            value = "X12_131";
            return true;
          case X12TransactionSet::X12_132:
            value = "X12_132";
            return true;
          case X12TransactionSet::X12_133:
            value = "X12_133";
            return true;
          case X12TransactionSet::X12_135:
            value = "X12_135";
            return true;
          case X12TransactionSet::X12_138:
            value = "X12_138";
            return true;
          case X12TransactionSet::X12_139:
            value = "X12_139";
            return true;
          case X12TransactionSet::X12_140:
            value = "X12_140";
            return true;
          case X12TransactionSet::X12_141:
            value = "X12_141";
            return true;
          case X12TransactionSet::X12_142:
            value = "X12_142";
            return true;
          case X12TransactionSet::X12_143:
            value = "X12_143";
            return true;
          case X12TransactionSet::X12_144:
            value = "X12_144";
            return true;
          case X12TransactionSet::X12_146:
            value = "X12_146";
            return true;
          case X12TransactionSet::X12_147:
            value = "X12_147";
            return true;
          case X12TransactionSet::X12_148:
            value = "X12_148";
            return true;
          case X12TransactionSet::X12_149:
            value = "X12_149";
            return true;
          case X12TransactionSet::X12_150:
            value = "X12_150";
            return true;
          case X12TransactionSet::X12_151:
            value = "X12_151";
            return true;
          case X12TransactionSet::X12_152:
            value = "X12_152";
            return true;
          case X12TransactionSet::X12_153:
            value = "X12_153";
            return true;
          case X12TransactionSet::X12_154:
            value = "X12_154";
            return true;
          case X12TransactionSet::X12_155:
            value = "X12_155";
            return true;
          case X12TransactionSet::X12_157:
            value = "X12_157";
            return true;
          case X12TransactionSet::X12_158:
            value = "X12_158";
            return true;
          case X12TransactionSet::X12_159:
            value = "X12_159";
            return true;
          case X12TransactionSet::X12_160:
            value = "X12_160";
            return true;
          case X12TransactionSet::X12_161:
            value = "X12_161";
            return true;
          case X12TransactionSet::X12_163:
            value = "X12_163";
            return true;
          case X12TransactionSet::X12_170:
            value = "X12_170";
            return true;
          case X12TransactionSet::X12_175:
            value = "X12_175";
            return true;
          case X12TransactionSet::X12_176:
            value = "X12_176";
            return true;
          case X12TransactionSet::X12_179:
            value = "X12_179";
            return true;
          case X12TransactionSet::X12_180:
            value = "X12_180";
            return true;
          case X12TransactionSet::X12_185:
            value = "X12_185";
            return true;
          case X12TransactionSet::X12_186:
            value = "X12_186";
            return true;
          case X12TransactionSet::X12_187:
            value = "X12_187";
            return true;
          case X12TransactionSet::X12_188:
            value = "X12_188";
            return true;
          case X12TransactionSet::X12_189:
            value = "X12_189";
            return true;
          case X12TransactionSet::X12_190:
            value = "X12_190";
            return true;
          case X12TransactionSet::X12_191:
            value = "X12_191";
            return true;
          case X12TransactionSet::X12_194:
            value = "X12_194";
            return true;
          case X12TransactionSet::X12_195:
            value = "X12_195";
            return true;
          case X12TransactionSet::X12_196:
            value = "X12_196";
            return true;
          case X12TransactionSet::X12_197:
            value = "X12_197";
            return true;
          case X12TransactionSet::X12_198:
            value = "X12_198";
            return true;
          case X12TransactionSet::X12_199:
            value = "X12_199";
            return true;
          case X12TransactionSet::X12_200:
            value = "X12_200";
            return true;
          case X12TransactionSet::X12_201:
            value = "X12_201";
            return true;
          case X12TransactionSet::X12_202:
            value = "X12_202";
            return true;
          case X12TransactionSet::X12_203:
            value = "X12_203";
            return true;
          case X12TransactionSet::X12_204:
            value = "X12_204";
            return true;
          case X12TransactionSet::X12_205:
            value = "X12_205";
            return true;
          case X12TransactionSet::X12_206:
            value = "X12_206";
            return true;
          case X12TransactionSet::X12_210:
            value = "X12_210";
            return true;
          case X12TransactionSet::X12_211:
            value = "X12_211";
            return true;
          case X12TransactionSet::X12_212:
            value = "X12_212";
            return true;
          case X12TransactionSet::X12_213:
            value = "X12_213";
            return true;
          case X12TransactionSet::X12_214:
            value = "X12_214";
            return true;
          case X12TransactionSet::X12_215:
            value = "X12_215";
            return true;
          case X12TransactionSet::X12_216:
            value = "X12_216";
            return true;
          case X12TransactionSet::X12_217:
            value = "X12_217";
            return true;
          case X12TransactionSet::X12_218:
            value = "X12_218";
            return true;
          case X12TransactionSet::X12_219:
            value = "X12_219";
            return true;
          case X12TransactionSet::X12_220:
            value = "X12_220";
            return true;
          case X12TransactionSet::X12_222:
            value = "X12_222";
            return true;
          case X12TransactionSet::X12_223:
            value = "X12_223";
            return true;
          case X12TransactionSet::X12_224:
            value = "X12_224";
            return true;
          case X12TransactionSet::X12_225:
            value = "X12_225";
            return true;
          case X12TransactionSet::X12_227:
            value = "X12_227";
            return true;
          case X12TransactionSet::X12_228:
            value = "X12_228";
            return true;
          case X12TransactionSet::X12_240:
            value = "X12_240";
            return true;
          case X12TransactionSet::X12_242:
            value = "X12_242";
            return true;
          case X12TransactionSet::X12_244:
            value = "X12_244";
            return true;
          case X12TransactionSet::X12_245:
            value = "X12_245";
            return true;
          case X12TransactionSet::X12_248:
            value = "X12_248";
            return true;
          case X12TransactionSet::X12_249:
            value = "X12_249";
            return true;
          case X12TransactionSet::X12_250:
            value = "X12_250";
            return true;
          case X12TransactionSet::X12_251:
            value = "X12_251";
            return true;
          case X12TransactionSet::X12_252:
            value = "X12_252";
            return true;
          case X12TransactionSet::X12_255:
            value = "X12_255";
            return true;
          case X12TransactionSet::X12_256:
            value = "X12_256";
            return true;
          case X12TransactionSet::X12_259:
            value = "X12_259";
            return true;
          case X12TransactionSet::X12_260:
            value = "X12_260";
            return true;
          case X12TransactionSet::X12_261:
            value = "X12_261";
            return true;
          case X12TransactionSet::X12_262:
            value = "X12_262";
            return true;
          case X12TransactionSet::X12_263:
            value = "X12_263";
            return true;
          case X12TransactionSet::X12_264:
            value = "X12_264";
            return true;
          case X12TransactionSet::X12_265:
            value = "X12_265";
            return true;
          case X12TransactionSet::X12_266:
            value = "X12_266";
            return true;
          case X12TransactionSet::X12_267:
            value = "X12_267";
            return true;
          case X12TransactionSet::X12_268:
            value = "X12_268";
            return true;
          case X12TransactionSet::X12_269:
            value = "X12_269";
            return true;
          case X12TransactionSet::X12_270:
            value = "X12_270";
            return true;
          case X12TransactionSet::X12_271:
            value = "X12_271";
            return true;
          case X12TransactionSet::X12_272:
            value = "X12_272";
            return true;
          case X12TransactionSet::X12_273:
            value = "X12_273";
            return true;
          case X12TransactionSet::X12_274:
            value = "X12_274";
            return true;
          case X12TransactionSet::X12_275:
            value = "X12_275";
            return true;
          case X12TransactionSet::X12_276:
            value = "X12_276";
            return true;
          case X12TransactionSet::X12_277:
            value = "X12_277";
            return true;
          default:
            return false;
          }
        }
        static bool GetNameForEnumHelper1(X12TransactionSet enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case X12TransactionSet::X12_278:
            value = "X12_278";
            return true;
          case X12TransactionSet::X12_280:
            value = "X12_280";
            return true;
          case X12TransactionSet::X12_283:
            value = "X12_283";
            return true;
          case X12TransactionSet::X12_284:
            value = "X12_284";
            return true;
          case X12TransactionSet::X12_285:
            value = "X12_285";
            return true;
          case X12TransactionSet::X12_286:
            value = "X12_286";
            return true;
          case X12TransactionSet::X12_288:
            value = "X12_288";
            return true;
          case X12TransactionSet::X12_290:
            value = "X12_290";
            return true;
          case X12TransactionSet::X12_300:
            value = "X12_300";
            return true;
          case X12TransactionSet::X12_301:
            value = "X12_301";
            return true;
          case X12TransactionSet::X12_303:
            value = "X12_303";
            return true;
          case X12TransactionSet::X12_304:
            value = "X12_304";
            return true;
          case X12TransactionSet::X12_309:
            value = "X12_309";
            return true;
          case X12TransactionSet::X12_310:
            value = "X12_310";
            return true;
          case X12TransactionSet::X12_311:
            value = "X12_311";
            return true;
          case X12TransactionSet::X12_312:
            value = "X12_312";
            return true;
          case X12TransactionSet::X12_313:
            value = "X12_313";
            return true;
          case X12TransactionSet::X12_315:
            value = "X12_315";
            return true;
          case X12TransactionSet::X12_317:
            value = "X12_317";
            return true;
          case X12TransactionSet::X12_319:
            value = "X12_319";
            return true;
          case X12TransactionSet::X12_322:
            value = "X12_322";
            return true;
          case X12TransactionSet::X12_323:
            value = "X12_323";
            return true;
          case X12TransactionSet::X12_324:
            value = "X12_324";
            return true;
          case X12TransactionSet::X12_325:
            value = "X12_325";
            return true;
          case X12TransactionSet::X12_326:
            value = "X12_326";
            return true;
          case X12TransactionSet::X12_350:
            value = "X12_350";
            return true;
          case X12TransactionSet::X12_352:
            value = "X12_352";
            return true;
          case X12TransactionSet::X12_353:
            value = "X12_353";
            return true;
          case X12TransactionSet::X12_354:
            value = "X12_354";
            return true;
          case X12TransactionSet::X12_355:
            value = "X12_355";
            return true;
          case X12TransactionSet::X12_356:
            value = "X12_356";
            return true;
          case X12TransactionSet::X12_357:
            value = "X12_357";
            return true;
          case X12TransactionSet::X12_358:
            value = "X12_358";
            return true;
          case X12TransactionSet::X12_361:
            value = "X12_361";
            return true;
          case X12TransactionSet::X12_362:
            value = "X12_362";
            return true;
          case X12TransactionSet::X12_404:
            value = "X12_404";
            return true;
          case X12TransactionSet::X12_410:
            value = "X12_410";
            return true;
          case X12TransactionSet::X12_412:
            value = "X12_412";
            return true;
          case X12TransactionSet::X12_414:
            value = "X12_414";
            return true;
          case X12TransactionSet::X12_417:
            value = "X12_417";
            return true;
          case X12TransactionSet::X12_418:
            value = "X12_418";
            return true;
          case X12TransactionSet::X12_419:
            value = "X12_419";
            return true;
          case X12TransactionSet::X12_420:
            value = "X12_420";
            return true;
          case X12TransactionSet::X12_421:
            value = "X12_421";
            return true;
          case X12TransactionSet::X12_422:
            value = "X12_422";
            return true;
          case X12TransactionSet::X12_423:
            value = "X12_423";
            return true;
          case X12TransactionSet::X12_424:
            value = "X12_424";
            return true;
          case X12TransactionSet::X12_425:
            value = "X12_425";
            return true;
          case X12TransactionSet::X12_426:
            value = "X12_426";
            return true;
          case X12TransactionSet::X12_429:
            value = "X12_429";
            return true;
          case X12TransactionSet::X12_431:
            value = "X12_431";
            return true;
          case X12TransactionSet::X12_432:
            value = "X12_432";
            return true;
          case X12TransactionSet::X12_433:
            value = "X12_433";
            return true;
          case X12TransactionSet::X12_434:
            value = "X12_434";
            return true;
          case X12TransactionSet::X12_435:
            value = "X12_435";
            return true;
          case X12TransactionSet::X12_436:
            value = "X12_436";
            return true;
          case X12TransactionSet::X12_437:
            value = "X12_437";
            return true;
          case X12TransactionSet::X12_440:
            value = "X12_440";
            return true;
          case X12TransactionSet::X12_451:
            value = "X12_451";
            return true;
          case X12TransactionSet::X12_452:
            value = "X12_452";
            return true;
          case X12TransactionSet::X12_453:
            value = "X12_453";
            return true;
          case X12TransactionSet::X12_455:
            value = "X12_455";
            return true;
          case X12TransactionSet::X12_456:
            value = "X12_456";
            return true;
          case X12TransactionSet::X12_460:
            value = "X12_460";
            return true;
          case X12TransactionSet::X12_463:
            value = "X12_463";
            return true;
          case X12TransactionSet::X12_466:
            value = "X12_466";
            return true;
          case X12TransactionSet::X12_468:
            value = "X12_468";
            return true;
          case X12TransactionSet::X12_470:
            value = "X12_470";
            return true;
          case X12TransactionSet::X12_475:
            value = "X12_475";
            return true;
          case X12TransactionSet::X12_485:
            value = "X12_485";
            return true;
          case X12TransactionSet::X12_486:
            value = "X12_486";
            return true;
          case X12TransactionSet::X12_490:
            value = "X12_490";
            return true;
          case X12TransactionSet::X12_492:
            value = "X12_492";
            return true;
          case X12TransactionSet::X12_494:
            value = "X12_494";
            return true;
          case X12TransactionSet::X12_500:
            value = "X12_500";
            return true;
          case X12TransactionSet::X12_501:
            value = "X12_501";
            return true;
          case X12TransactionSet::X12_503:
            value = "X12_503";
            return true;
          case X12TransactionSet::X12_504:
            value = "X12_504";
            return true;
          case X12TransactionSet::X12_511:
            value = "X12_511";
            return true;
          case X12TransactionSet::X12_517:
            value = "X12_517";
            return true;
          case X12TransactionSet::X12_521:
            value = "X12_521";
            return true;
          case X12TransactionSet::X12_527:
            value = "X12_527";
            return true;
          case X12TransactionSet::X12_536:
            value = "X12_536";
            return true;
          case X12TransactionSet::X12_540:
            value = "X12_540";
            return true;
          case X12TransactionSet::X12_561:
            value = "X12_561";
            return true;
          case X12TransactionSet::X12_567:
            value = "X12_567";
            return true;
          case X12TransactionSet::X12_568:
            value = "X12_568";
            return true;
          case X12TransactionSet::X12_601:
            value = "X12_601";
            return true;
          case X12TransactionSet::X12_602:
            value = "X12_602";
            return true;
          case X12TransactionSet::X12_620:
            value = "X12_620";
            return true;
          case X12TransactionSet::X12_625:
            value = "X12_625";
            return true;
          case X12TransactionSet::X12_650:
            value = "X12_650";
            return true;
          case X12TransactionSet::X12_715:
            value = "X12_715";
            return true;
          case X12TransactionSet::X12_753:
            value = "X12_753";
            return true;
          case X12TransactionSet::X12_754:
            value = "X12_754";
            return true;
          case X12TransactionSet::X12_805:
            value = "X12_805";
            return true;
          case X12TransactionSet::X12_806:
            value = "X12_806";
            return true;
          case X12TransactionSet::X12_810:
            value = "X12_810";
            return true;
          case X12TransactionSet::X12_811:
            value = "X12_811";
            return true;
          case X12TransactionSet::X12_812:
            value = "X12_812";
            return true;
          case X12TransactionSet::X12_813:
            value = "X12_813";
            return true;
          case X12TransactionSet::X12_814:
            value = "X12_814";
            return true;
          case X12TransactionSet::X12_815:
            value = "X12_815";
            return true;
          case X12TransactionSet::X12_816:
            value = "X12_816";
            return true;
          case X12TransactionSet::X12_818:
            value = "X12_818";
            return true;
          case X12TransactionSet::X12_819:
            value = "X12_819";
            return true;
          case X12TransactionSet::X12_820:
            value = "X12_820";
            return true;
          case X12TransactionSet::X12_821:
            value = "X12_821";
            return true;
          case X12TransactionSet::X12_822:
            value = "X12_822";
            return true;
          case X12TransactionSet::X12_823:
            value = "X12_823";
            return true;
          case X12TransactionSet::X12_824:
            value = "X12_824";
            return true;
          case X12TransactionSet::X12_826:
            value = "X12_826";
            return true;
          case X12TransactionSet::X12_827:
            value = "X12_827";
            return true;
          case X12TransactionSet::X12_828:
            value = "X12_828";
            return true;
          case X12TransactionSet::X12_829:
            value = "X12_829";
            return true;
          case X12TransactionSet::X12_830:
            value = "X12_830";
            return true;
          case X12TransactionSet::X12_831:
            value = "X12_831";
            return true;
          case X12TransactionSet::X12_832:
            value = "X12_832";
            return true;
          case X12TransactionSet::X12_833:
            value = "X12_833";
            return true;
          case X12TransactionSet::X12_834:
            value = "X12_834";
            return true;
          case X12TransactionSet::X12_835:
            value = "X12_835";
            return true;
          case X12TransactionSet::X12_836:
            value = "X12_836";
            return true;
          default:
            return false;
          }
        }
        static bool GetNameForEnumHelper2(X12TransactionSet enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case X12TransactionSet::X12_837:
            value = "X12_837";
            return true;
          case X12TransactionSet::X12_838:
            value = "X12_838";
            return true;
          case X12TransactionSet::X12_839:
            value = "X12_839";
            return true;
          case X12TransactionSet::X12_840:
            value = "X12_840";
            return true;
          case X12TransactionSet::X12_841:
            value = "X12_841";
            return true;
          case X12TransactionSet::X12_842:
            value = "X12_842";
            return true;
          case X12TransactionSet::X12_843:
            value = "X12_843";
            return true;
          case X12TransactionSet::X12_844:
            value = "X12_844";
            return true;
          case X12TransactionSet::X12_845:
            value = "X12_845";
            return true;
          case X12TransactionSet::X12_846:
            value = "X12_846";
            return true;
          case X12TransactionSet::X12_847:
            value = "X12_847";
            return true;
          case X12TransactionSet::X12_848:
            value = "X12_848";
            return true;
          case X12TransactionSet::X12_849:
            value = "X12_849";
            return true;
          case X12TransactionSet::X12_850:
            value = "X12_850";
            return true;
          case X12TransactionSet::X12_851:
            value = "X12_851";
            return true;
          case X12TransactionSet::X12_852:
            value = "X12_852";
            return true;
          case X12TransactionSet::X12_853:
            value = "X12_853";
            return true;
          case X12TransactionSet::X12_854:
            value = "X12_854";
            return true;
          case X12TransactionSet::X12_855:
            value = "X12_855";
            return true;
          case X12TransactionSet::X12_856:
            value = "X12_856";
            return true;
          case X12TransactionSet::X12_857:
            value = "X12_857";
            return true;
          case X12TransactionSet::X12_858:
            value = "X12_858";
            return true;
          case X12TransactionSet::X12_859:
            value = "X12_859";
            return true;
          case X12TransactionSet::X12_860:
            value = "X12_860";
            return true;
          case X12TransactionSet::X12_861:
            value = "X12_861";
            return true;
          case X12TransactionSet::X12_862:
            value = "X12_862";
            return true;
          case X12TransactionSet::X12_863:
            value = "X12_863";
            return true;
          case X12TransactionSet::X12_864:
            value = "X12_864";
            return true;
          case X12TransactionSet::X12_865:
            value = "X12_865";
            return true;
          case X12TransactionSet::X12_866:
            value = "X12_866";
            return true;
          case X12TransactionSet::X12_867:
            value = "X12_867";
            return true;
          case X12TransactionSet::X12_868:
            value = "X12_868";
            return true;
          case X12TransactionSet::X12_869:
            value = "X12_869";
            return true;
          case X12TransactionSet::X12_870:
            value = "X12_870";
            return true;
          case X12TransactionSet::X12_871:
            value = "X12_871";
            return true;
          case X12TransactionSet::X12_872:
            value = "X12_872";
            return true;
          case X12TransactionSet::X12_873:
            value = "X12_873";
            return true;
          case X12TransactionSet::X12_874:
            value = "X12_874";
            return true;
          case X12TransactionSet::X12_875:
            value = "X12_875";
            return true;
          case X12TransactionSet::X12_876:
            value = "X12_876";
            return true;
          case X12TransactionSet::X12_877:
            value = "X12_877";
            return true;
          case X12TransactionSet::X12_878:
            value = "X12_878";
            return true;
          case X12TransactionSet::X12_879:
            value = "X12_879";
            return true;
          case X12TransactionSet::X12_880:
            value = "X12_880";
            return true;
          case X12TransactionSet::X12_881:
            value = "X12_881";
            return true;
          case X12TransactionSet::X12_882:
            value = "X12_882";
            return true;
          case X12TransactionSet::X12_883:
            value = "X12_883";
            return true;
          case X12TransactionSet::X12_884:
            value = "X12_884";
            return true;
          case X12TransactionSet::X12_885:
            value = "X12_885";
            return true;
          case X12TransactionSet::X12_886:
            value = "X12_886";
            return true;
          case X12TransactionSet::X12_887:
            value = "X12_887";
            return true;
          case X12TransactionSet::X12_888:
            value = "X12_888";
            return true;
          case X12TransactionSet::X12_889:
            value = "X12_889";
            return true;
          case X12TransactionSet::X12_891:
            value = "X12_891";
            return true;
          case X12TransactionSet::X12_893:
            value = "X12_893";
            return true;
          case X12TransactionSet::X12_894:
            value = "X12_894";
            return true;
          case X12TransactionSet::X12_895:
            value = "X12_895";
            return true;
          case X12TransactionSet::X12_896:
            value = "X12_896";
            return true;
          case X12TransactionSet::X12_920:
            value = "X12_920";
            return true;
          case X12TransactionSet::X12_924:
            value = "X12_924";
            return true;
          case X12TransactionSet::X12_925:
            value = "X12_925";
            return true;
          case X12TransactionSet::X12_926:
            value = "X12_926";
            return true;
          case X12TransactionSet::X12_928:
            value = "X12_928";
            return true;
          case X12TransactionSet::X12_940:
            value = "X12_940";
            return true;
          case X12TransactionSet::X12_943:
            value = "X12_943";
            return true;
          case X12TransactionSet::X12_944:
            value = "X12_944";
            return true;
          case X12TransactionSet::X12_945:
            value = "X12_945";
            return true;
          case X12TransactionSet::X12_947:
            value = "X12_947";
            return true;
          case X12TransactionSet::X12_980:
            value = "X12_980";
            return true;
          case X12TransactionSet::X12_990:
            value = "X12_990";
            return true;
          case X12TransactionSet::X12_993:
            value = "X12_993";
            return true;
          case X12TransactionSet::X12_996:
            value = "X12_996";
            return true;
          case X12TransactionSet::X12_997:
            value = "X12_997";
            return true;
          case X12TransactionSet::X12_998:
            value = "X12_998";
            return true;
          case X12TransactionSet::X12_999:
            value = "X12_999";
            return true;
          case X12TransactionSet::X12_270_X279:
            value = "X12_270_X279";
            return true;
          case X12TransactionSet::X12_271_X279:
            value = "X12_271_X279";
            return true;
          case X12TransactionSet::X12_275_X210:
            value = "X12_275_X210";
            return true;
          case X12TransactionSet::X12_275_X211:
            value = "X12_275_X211";
            return true;
          case X12TransactionSet::X12_276_X212:
            value = "X12_276_X212";
            return true;
          case X12TransactionSet::X12_277_X212:
            value = "X12_277_X212";
            return true;
          case X12TransactionSet::X12_277_X214:
            value = "X12_277_X214";
            return true;
          case X12TransactionSet::X12_277_X364:
            value = "X12_277_X364";
            return true;
          case X12TransactionSet::X12_278_X217:
            value = "X12_278_X217";
            return true;
          case X12TransactionSet::X12_820_X218:
            value = "X12_820_X218";
            return true;
          case X12TransactionSet::X12_820_X306:
            value = "X12_820_X306";
            return true;
          case X12TransactionSet::X12_824_X186:
            value = "X12_824_X186";
            return true;
          case X12TransactionSet::X12_834_X220:
            value = "X12_834_X220";
            return true;
          case X12TransactionSet::X12_834_X307:
            value = "X12_834_X307";
            return true;
          case X12TransactionSet::X12_834_X318:
            value = "X12_834_X318";
            return true;
          case X12TransactionSet::X12_835_X221:
            value = "X12_835_X221";
            return true;
          case X12TransactionSet::X12_837_X222:
            value = "X12_837_X222";
            return true;
          case X12TransactionSet::X12_837_X223:
            value = "X12_837_X223";
            return true;
          case X12TransactionSet::X12_837_X224:
            value = "X12_837_X224";
            return true;
          case X12TransactionSet::X12_837_X291:
            value = "X12_837_X291";
            return true;
          case X12TransactionSet::X12_837_X292:
            value = "X12_837_X292";
            return true;
          case X12TransactionSet::X12_837_X298:
            value = "X12_837_X298";
            return true;
          case X12TransactionSet::X12_999_X231:
            value = "X12_999_X231";
            return true;
          default:
            return false;
          }
        }

        X12TransactionSet GetX12TransactionSetForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          X12TransactionSet enumValue;
          if (GetEnumForNameHelper0(hashCode, enumValue))
          {
             return enumValue;
          }
          else if (GetEnumForNameHelper1(hashCode, enumValue))
          {
             return enumValue;
          }
          else if (GetEnumForNameHelper2(hashCode, enumValue))
          {
             return enumValue;
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
          Aws::String value;
          if (GetNameForEnumHelper0(enumValue, value))
          {
            return value;
          }
          else if (GetNameForEnumHelper1(enumValue, value))
          {
            return value;
          }
          else if (GetNameForEnumHelper2(enumValue, value))
          {
            return value;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
          }

          return {};
        }

      } // namespace X12TransactionSetMapper
    } // namespace Model
  } // namespace B2BI
} // namespace Aws
