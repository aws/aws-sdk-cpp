/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/opsworks/model/CloudWatchLogsEncoding.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpsWorks
  {
    namespace Model
    {
      namespace CloudWatchLogsEncodingMapper
      {

        static const int ascii_HASH = HashingUtils::HashString("ascii");
        static const int big5_HASH = HashingUtils::HashString("big5");
        static const int big5hkscs_HASH = HashingUtils::HashString("big5hkscs");
        static const int cp037_HASH = HashingUtils::HashString("cp037");
        static const int cp424_HASH = HashingUtils::HashString("cp424");
        static const int cp437_HASH = HashingUtils::HashString("cp437");
        static const int cp500_HASH = HashingUtils::HashString("cp500");
        static const int cp720_HASH = HashingUtils::HashString("cp720");
        static const int cp737_HASH = HashingUtils::HashString("cp737");
        static const int cp775_HASH = HashingUtils::HashString("cp775");
        static const int cp850_HASH = HashingUtils::HashString("cp850");
        static const int cp852_HASH = HashingUtils::HashString("cp852");
        static const int cp855_HASH = HashingUtils::HashString("cp855");
        static const int cp856_HASH = HashingUtils::HashString("cp856");
        static const int cp857_HASH = HashingUtils::HashString("cp857");
        static const int cp858_HASH = HashingUtils::HashString("cp858");
        static const int cp860_HASH = HashingUtils::HashString("cp860");
        static const int cp861_HASH = HashingUtils::HashString("cp861");
        static const int cp862_HASH = HashingUtils::HashString("cp862");
        static const int cp863_HASH = HashingUtils::HashString("cp863");
        static const int cp864_HASH = HashingUtils::HashString("cp864");
        static const int cp865_HASH = HashingUtils::HashString("cp865");
        static const int cp866_HASH = HashingUtils::HashString("cp866");
        static const int cp869_HASH = HashingUtils::HashString("cp869");
        static const int cp874_HASH = HashingUtils::HashString("cp874");
        static const int cp875_HASH = HashingUtils::HashString("cp875");
        static const int cp932_HASH = HashingUtils::HashString("cp932");
        static const int cp949_HASH = HashingUtils::HashString("cp949");
        static const int cp950_HASH = HashingUtils::HashString("cp950");
        static const int cp1006_HASH = HashingUtils::HashString("cp1006");
        static const int cp1026_HASH = HashingUtils::HashString("cp1026");
        static const int cp1140_HASH = HashingUtils::HashString("cp1140");
        static const int cp1250_HASH = HashingUtils::HashString("cp1250");
        static const int cp1251_HASH = HashingUtils::HashString("cp1251");
        static const int cp1252_HASH = HashingUtils::HashString("cp1252");
        static const int cp1253_HASH = HashingUtils::HashString("cp1253");
        static const int cp1254_HASH = HashingUtils::HashString("cp1254");
        static const int cp1255_HASH = HashingUtils::HashString("cp1255");
        static const int cp1256_HASH = HashingUtils::HashString("cp1256");
        static const int cp1257_HASH = HashingUtils::HashString("cp1257");
        static const int cp1258_HASH = HashingUtils::HashString("cp1258");
        static const int euc_jp_HASH = HashingUtils::HashString("euc_jp");
        static const int euc_jis_2004_HASH = HashingUtils::HashString("euc_jis_2004");
        static const int euc_jisx0213_HASH = HashingUtils::HashString("euc_jisx0213");
        static const int euc_kr_HASH = HashingUtils::HashString("euc_kr");
        static const int gb2312_HASH = HashingUtils::HashString("gb2312");
        static const int gbk_HASH = HashingUtils::HashString("gbk");
        static const int gb18030_HASH = HashingUtils::HashString("gb18030");
        static const int hz_HASH = HashingUtils::HashString("hz");
        static const int iso2022_jp_HASH = HashingUtils::HashString("iso2022_jp");
        static const int iso2022_jp_1_HASH = HashingUtils::HashString("iso2022_jp_1");
        static const int iso2022_jp_2_HASH = HashingUtils::HashString("iso2022_jp_2");
        static const int iso2022_jp_2004_HASH = HashingUtils::HashString("iso2022_jp_2004");
        static const int iso2022_jp_3_HASH = HashingUtils::HashString("iso2022_jp_3");
        static const int iso2022_jp_ext_HASH = HashingUtils::HashString("iso2022_jp_ext");
        static const int iso2022_kr_HASH = HashingUtils::HashString("iso2022_kr");
        static const int latin_1_HASH = HashingUtils::HashString("latin_1");
        static const int iso8859_2_HASH = HashingUtils::HashString("iso8859_2");
        static const int iso8859_3_HASH = HashingUtils::HashString("iso8859_3");
        static const int iso8859_4_HASH = HashingUtils::HashString("iso8859_4");
        static const int iso8859_5_HASH = HashingUtils::HashString("iso8859_5");
        static const int iso8859_6_HASH = HashingUtils::HashString("iso8859_6");
        static const int iso8859_7_HASH = HashingUtils::HashString("iso8859_7");
        static const int iso8859_8_HASH = HashingUtils::HashString("iso8859_8");
        static const int iso8859_9_HASH = HashingUtils::HashString("iso8859_9");
        static const int iso8859_10_HASH = HashingUtils::HashString("iso8859_10");
        static const int iso8859_13_HASH = HashingUtils::HashString("iso8859_13");
        static const int iso8859_14_HASH = HashingUtils::HashString("iso8859_14");
        static const int iso8859_15_HASH = HashingUtils::HashString("iso8859_15");
        static const int iso8859_16_HASH = HashingUtils::HashString("iso8859_16");
        static const int johab_HASH = HashingUtils::HashString("johab");
        static const int koi8_r_HASH = HashingUtils::HashString("koi8_r");
        static const int koi8_u_HASH = HashingUtils::HashString("koi8_u");
        static const int mac_cyrillic_HASH = HashingUtils::HashString("mac_cyrillic");
        static const int mac_greek_HASH = HashingUtils::HashString("mac_greek");
        static const int mac_iceland_HASH = HashingUtils::HashString("mac_iceland");
        static const int mac_latin2_HASH = HashingUtils::HashString("mac_latin2");
        static const int mac_roman_HASH = HashingUtils::HashString("mac_roman");
        static const int mac_turkish_HASH = HashingUtils::HashString("mac_turkish");
        static const int ptcp154_HASH = HashingUtils::HashString("ptcp154");
        static const int shift_jis_HASH = HashingUtils::HashString("shift_jis");
        static const int shift_jis_2004_HASH = HashingUtils::HashString("shift_jis_2004");
        static const int shift_jisx0213_HASH = HashingUtils::HashString("shift_jisx0213");
        static const int utf_32_HASH = HashingUtils::HashString("utf_32");
        static const int utf_32_be_HASH = HashingUtils::HashString("utf_32_be");
        static const int utf_32_le_HASH = HashingUtils::HashString("utf_32_le");
        static const int utf_16_HASH = HashingUtils::HashString("utf_16");
        static const int utf_16_be_HASH = HashingUtils::HashString("utf_16_be");
        static const int utf_16_le_HASH = HashingUtils::HashString("utf_16_le");
        static const int utf_7_HASH = HashingUtils::HashString("utf_7");
        static const int utf_8_HASH = HashingUtils::HashString("utf_8");
        static const int utf_8_sig_HASH = HashingUtils::HashString("utf_8_sig");


        CloudWatchLogsEncoding GetCloudWatchLogsEncodingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ascii_HASH)
          {
            return CloudWatchLogsEncoding::ascii;
          }
          else if (hashCode == big5_HASH)
          {
            return CloudWatchLogsEncoding::big5;
          }
          else if (hashCode == big5hkscs_HASH)
          {
            return CloudWatchLogsEncoding::big5hkscs;
          }
          else if (hashCode == cp037_HASH)
          {
            return CloudWatchLogsEncoding::cp037;
          }
          else if (hashCode == cp424_HASH)
          {
            return CloudWatchLogsEncoding::cp424;
          }
          else if (hashCode == cp437_HASH)
          {
            return CloudWatchLogsEncoding::cp437;
          }
          else if (hashCode == cp500_HASH)
          {
            return CloudWatchLogsEncoding::cp500;
          }
          else if (hashCode == cp720_HASH)
          {
            return CloudWatchLogsEncoding::cp720;
          }
          else if (hashCode == cp737_HASH)
          {
            return CloudWatchLogsEncoding::cp737;
          }
          else if (hashCode == cp775_HASH)
          {
            return CloudWatchLogsEncoding::cp775;
          }
          else if (hashCode == cp850_HASH)
          {
            return CloudWatchLogsEncoding::cp850;
          }
          else if (hashCode == cp852_HASH)
          {
            return CloudWatchLogsEncoding::cp852;
          }
          else if (hashCode == cp855_HASH)
          {
            return CloudWatchLogsEncoding::cp855;
          }
          else if (hashCode == cp856_HASH)
          {
            return CloudWatchLogsEncoding::cp856;
          }
          else if (hashCode == cp857_HASH)
          {
            return CloudWatchLogsEncoding::cp857;
          }
          else if (hashCode == cp858_HASH)
          {
            return CloudWatchLogsEncoding::cp858;
          }
          else if (hashCode == cp860_HASH)
          {
            return CloudWatchLogsEncoding::cp860;
          }
          else if (hashCode == cp861_HASH)
          {
            return CloudWatchLogsEncoding::cp861;
          }
          else if (hashCode == cp862_HASH)
          {
            return CloudWatchLogsEncoding::cp862;
          }
          else if (hashCode == cp863_HASH)
          {
            return CloudWatchLogsEncoding::cp863;
          }
          else if (hashCode == cp864_HASH)
          {
            return CloudWatchLogsEncoding::cp864;
          }
          else if (hashCode == cp865_HASH)
          {
            return CloudWatchLogsEncoding::cp865;
          }
          else if (hashCode == cp866_HASH)
          {
            return CloudWatchLogsEncoding::cp866;
          }
          else if (hashCode == cp869_HASH)
          {
            return CloudWatchLogsEncoding::cp869;
          }
          else if (hashCode == cp874_HASH)
          {
            return CloudWatchLogsEncoding::cp874;
          }
          else if (hashCode == cp875_HASH)
          {
            return CloudWatchLogsEncoding::cp875;
          }
          else if (hashCode == cp932_HASH)
          {
            return CloudWatchLogsEncoding::cp932;
          }
          else if (hashCode == cp949_HASH)
          {
            return CloudWatchLogsEncoding::cp949;
          }
          else if (hashCode == cp950_HASH)
          {
            return CloudWatchLogsEncoding::cp950;
          }
          else if (hashCode == cp1006_HASH)
          {
            return CloudWatchLogsEncoding::cp1006;
          }
          else if (hashCode == cp1026_HASH)
          {
            return CloudWatchLogsEncoding::cp1026;
          }
          else if (hashCode == cp1140_HASH)
          {
            return CloudWatchLogsEncoding::cp1140;
          }
          else if (hashCode == cp1250_HASH)
          {
            return CloudWatchLogsEncoding::cp1250;
          }
          else if (hashCode == cp1251_HASH)
          {
            return CloudWatchLogsEncoding::cp1251;
          }
          else if (hashCode == cp1252_HASH)
          {
            return CloudWatchLogsEncoding::cp1252;
          }
          else if (hashCode == cp1253_HASH)
          {
            return CloudWatchLogsEncoding::cp1253;
          }
          else if (hashCode == cp1254_HASH)
          {
            return CloudWatchLogsEncoding::cp1254;
          }
          else if (hashCode == cp1255_HASH)
          {
            return CloudWatchLogsEncoding::cp1255;
          }
          else if (hashCode == cp1256_HASH)
          {
            return CloudWatchLogsEncoding::cp1256;
          }
          else if (hashCode == cp1257_HASH)
          {
            return CloudWatchLogsEncoding::cp1257;
          }
          else if (hashCode == cp1258_HASH)
          {
            return CloudWatchLogsEncoding::cp1258;
          }
          else if (hashCode == euc_jp_HASH)
          {
            return CloudWatchLogsEncoding::euc_jp;
          }
          else if (hashCode == euc_jis_2004_HASH)
          {
            return CloudWatchLogsEncoding::euc_jis_2004;
          }
          else if (hashCode == euc_jisx0213_HASH)
          {
            return CloudWatchLogsEncoding::euc_jisx0213;
          }
          else if (hashCode == euc_kr_HASH)
          {
            return CloudWatchLogsEncoding::euc_kr;
          }
          else if (hashCode == gb2312_HASH)
          {
            return CloudWatchLogsEncoding::gb2312;
          }
          else if (hashCode == gbk_HASH)
          {
            return CloudWatchLogsEncoding::gbk;
          }
          else if (hashCode == gb18030_HASH)
          {
            return CloudWatchLogsEncoding::gb18030;
          }
          else if (hashCode == hz_HASH)
          {
            return CloudWatchLogsEncoding::hz;
          }
          else if (hashCode == iso2022_jp_HASH)
          {
            return CloudWatchLogsEncoding::iso2022_jp;
          }
          else if (hashCode == iso2022_jp_1_HASH)
          {
            return CloudWatchLogsEncoding::iso2022_jp_1;
          }
          else if (hashCode == iso2022_jp_2_HASH)
          {
            return CloudWatchLogsEncoding::iso2022_jp_2;
          }
          else if (hashCode == iso2022_jp_2004_HASH)
          {
            return CloudWatchLogsEncoding::iso2022_jp_2004;
          }
          else if (hashCode == iso2022_jp_3_HASH)
          {
            return CloudWatchLogsEncoding::iso2022_jp_3;
          }
          else if (hashCode == iso2022_jp_ext_HASH)
          {
            return CloudWatchLogsEncoding::iso2022_jp_ext;
          }
          else if (hashCode == iso2022_kr_HASH)
          {
            return CloudWatchLogsEncoding::iso2022_kr;
          }
          else if (hashCode == latin_1_HASH)
          {
            return CloudWatchLogsEncoding::latin_1;
          }
          else if (hashCode == iso8859_2_HASH)
          {
            return CloudWatchLogsEncoding::iso8859_2;
          }
          else if (hashCode == iso8859_3_HASH)
          {
            return CloudWatchLogsEncoding::iso8859_3;
          }
          else if (hashCode == iso8859_4_HASH)
          {
            return CloudWatchLogsEncoding::iso8859_4;
          }
          else if (hashCode == iso8859_5_HASH)
          {
            return CloudWatchLogsEncoding::iso8859_5;
          }
          else if (hashCode == iso8859_6_HASH)
          {
            return CloudWatchLogsEncoding::iso8859_6;
          }
          else if (hashCode == iso8859_7_HASH)
          {
            return CloudWatchLogsEncoding::iso8859_7;
          }
          else if (hashCode == iso8859_8_HASH)
          {
            return CloudWatchLogsEncoding::iso8859_8;
          }
          else if (hashCode == iso8859_9_HASH)
          {
            return CloudWatchLogsEncoding::iso8859_9;
          }
          else if (hashCode == iso8859_10_HASH)
          {
            return CloudWatchLogsEncoding::iso8859_10;
          }
          else if (hashCode == iso8859_13_HASH)
          {
            return CloudWatchLogsEncoding::iso8859_13;
          }
          else if (hashCode == iso8859_14_HASH)
          {
            return CloudWatchLogsEncoding::iso8859_14;
          }
          else if (hashCode == iso8859_15_HASH)
          {
            return CloudWatchLogsEncoding::iso8859_15;
          }
          else if (hashCode == iso8859_16_HASH)
          {
            return CloudWatchLogsEncoding::iso8859_16;
          }
          else if (hashCode == johab_HASH)
          {
            return CloudWatchLogsEncoding::johab;
          }
          else if (hashCode == koi8_r_HASH)
          {
            return CloudWatchLogsEncoding::koi8_r;
          }
          else if (hashCode == koi8_u_HASH)
          {
            return CloudWatchLogsEncoding::koi8_u;
          }
          else if (hashCode == mac_cyrillic_HASH)
          {
            return CloudWatchLogsEncoding::mac_cyrillic;
          }
          else if (hashCode == mac_greek_HASH)
          {
            return CloudWatchLogsEncoding::mac_greek;
          }
          else if (hashCode == mac_iceland_HASH)
          {
            return CloudWatchLogsEncoding::mac_iceland;
          }
          else if (hashCode == mac_latin2_HASH)
          {
            return CloudWatchLogsEncoding::mac_latin2;
          }
          else if (hashCode == mac_roman_HASH)
          {
            return CloudWatchLogsEncoding::mac_roman;
          }
          else if (hashCode == mac_turkish_HASH)
          {
            return CloudWatchLogsEncoding::mac_turkish;
          }
          else if (hashCode == ptcp154_HASH)
          {
            return CloudWatchLogsEncoding::ptcp154;
          }
          else if (hashCode == shift_jis_HASH)
          {
            return CloudWatchLogsEncoding::shift_jis;
          }
          else if (hashCode == shift_jis_2004_HASH)
          {
            return CloudWatchLogsEncoding::shift_jis_2004;
          }
          else if (hashCode == shift_jisx0213_HASH)
          {
            return CloudWatchLogsEncoding::shift_jisx0213;
          }
          else if (hashCode == utf_32_HASH)
          {
            return CloudWatchLogsEncoding::utf_32;
          }
          else if (hashCode == utf_32_be_HASH)
          {
            return CloudWatchLogsEncoding::utf_32_be;
          }
          else if (hashCode == utf_32_le_HASH)
          {
            return CloudWatchLogsEncoding::utf_32_le;
          }
          else if (hashCode == utf_16_HASH)
          {
            return CloudWatchLogsEncoding::utf_16;
          }
          else if (hashCode == utf_16_be_HASH)
          {
            return CloudWatchLogsEncoding::utf_16_be;
          }
          else if (hashCode == utf_16_le_HASH)
          {
            return CloudWatchLogsEncoding::utf_16_le;
          }
          else if (hashCode == utf_7_HASH)
          {
            return CloudWatchLogsEncoding::utf_7;
          }
          else if (hashCode == utf_8_HASH)
          {
            return CloudWatchLogsEncoding::utf_8;
          }
          else if (hashCode == utf_8_sig_HASH)
          {
            return CloudWatchLogsEncoding::utf_8_sig;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CloudWatchLogsEncoding>(hashCode);
          }

          return CloudWatchLogsEncoding::NOT_SET;
        }

        Aws::String GetNameForCloudWatchLogsEncoding(CloudWatchLogsEncoding enumValue)
        {
          switch(enumValue)
          {
          case CloudWatchLogsEncoding::ascii:
            return "ascii";
          case CloudWatchLogsEncoding::big5:
            return "big5";
          case CloudWatchLogsEncoding::big5hkscs:
            return "big5hkscs";
          case CloudWatchLogsEncoding::cp037:
            return "cp037";
          case CloudWatchLogsEncoding::cp424:
            return "cp424";
          case CloudWatchLogsEncoding::cp437:
            return "cp437";
          case CloudWatchLogsEncoding::cp500:
            return "cp500";
          case CloudWatchLogsEncoding::cp720:
            return "cp720";
          case CloudWatchLogsEncoding::cp737:
            return "cp737";
          case CloudWatchLogsEncoding::cp775:
            return "cp775";
          case CloudWatchLogsEncoding::cp850:
            return "cp850";
          case CloudWatchLogsEncoding::cp852:
            return "cp852";
          case CloudWatchLogsEncoding::cp855:
            return "cp855";
          case CloudWatchLogsEncoding::cp856:
            return "cp856";
          case CloudWatchLogsEncoding::cp857:
            return "cp857";
          case CloudWatchLogsEncoding::cp858:
            return "cp858";
          case CloudWatchLogsEncoding::cp860:
            return "cp860";
          case CloudWatchLogsEncoding::cp861:
            return "cp861";
          case CloudWatchLogsEncoding::cp862:
            return "cp862";
          case CloudWatchLogsEncoding::cp863:
            return "cp863";
          case CloudWatchLogsEncoding::cp864:
            return "cp864";
          case CloudWatchLogsEncoding::cp865:
            return "cp865";
          case CloudWatchLogsEncoding::cp866:
            return "cp866";
          case CloudWatchLogsEncoding::cp869:
            return "cp869";
          case CloudWatchLogsEncoding::cp874:
            return "cp874";
          case CloudWatchLogsEncoding::cp875:
            return "cp875";
          case CloudWatchLogsEncoding::cp932:
            return "cp932";
          case CloudWatchLogsEncoding::cp949:
            return "cp949";
          case CloudWatchLogsEncoding::cp950:
            return "cp950";
          case CloudWatchLogsEncoding::cp1006:
            return "cp1006";
          case CloudWatchLogsEncoding::cp1026:
            return "cp1026";
          case CloudWatchLogsEncoding::cp1140:
            return "cp1140";
          case CloudWatchLogsEncoding::cp1250:
            return "cp1250";
          case CloudWatchLogsEncoding::cp1251:
            return "cp1251";
          case CloudWatchLogsEncoding::cp1252:
            return "cp1252";
          case CloudWatchLogsEncoding::cp1253:
            return "cp1253";
          case CloudWatchLogsEncoding::cp1254:
            return "cp1254";
          case CloudWatchLogsEncoding::cp1255:
            return "cp1255";
          case CloudWatchLogsEncoding::cp1256:
            return "cp1256";
          case CloudWatchLogsEncoding::cp1257:
            return "cp1257";
          case CloudWatchLogsEncoding::cp1258:
            return "cp1258";
          case CloudWatchLogsEncoding::euc_jp:
            return "euc_jp";
          case CloudWatchLogsEncoding::euc_jis_2004:
            return "euc_jis_2004";
          case CloudWatchLogsEncoding::euc_jisx0213:
            return "euc_jisx0213";
          case CloudWatchLogsEncoding::euc_kr:
            return "euc_kr";
          case CloudWatchLogsEncoding::gb2312:
            return "gb2312";
          case CloudWatchLogsEncoding::gbk:
            return "gbk";
          case CloudWatchLogsEncoding::gb18030:
            return "gb18030";
          case CloudWatchLogsEncoding::hz:
            return "hz";
          case CloudWatchLogsEncoding::iso2022_jp:
            return "iso2022_jp";
          case CloudWatchLogsEncoding::iso2022_jp_1:
            return "iso2022_jp_1";
          case CloudWatchLogsEncoding::iso2022_jp_2:
            return "iso2022_jp_2";
          case CloudWatchLogsEncoding::iso2022_jp_2004:
            return "iso2022_jp_2004";
          case CloudWatchLogsEncoding::iso2022_jp_3:
            return "iso2022_jp_3";
          case CloudWatchLogsEncoding::iso2022_jp_ext:
            return "iso2022_jp_ext";
          case CloudWatchLogsEncoding::iso2022_kr:
            return "iso2022_kr";
          case CloudWatchLogsEncoding::latin_1:
            return "latin_1";
          case CloudWatchLogsEncoding::iso8859_2:
            return "iso8859_2";
          case CloudWatchLogsEncoding::iso8859_3:
            return "iso8859_3";
          case CloudWatchLogsEncoding::iso8859_4:
            return "iso8859_4";
          case CloudWatchLogsEncoding::iso8859_5:
            return "iso8859_5";
          case CloudWatchLogsEncoding::iso8859_6:
            return "iso8859_6";
          case CloudWatchLogsEncoding::iso8859_7:
            return "iso8859_7";
          case CloudWatchLogsEncoding::iso8859_8:
            return "iso8859_8";
          case CloudWatchLogsEncoding::iso8859_9:
            return "iso8859_9";
          case CloudWatchLogsEncoding::iso8859_10:
            return "iso8859_10";
          case CloudWatchLogsEncoding::iso8859_13:
            return "iso8859_13";
          case CloudWatchLogsEncoding::iso8859_14:
            return "iso8859_14";
          case CloudWatchLogsEncoding::iso8859_15:
            return "iso8859_15";
          case CloudWatchLogsEncoding::iso8859_16:
            return "iso8859_16";
          case CloudWatchLogsEncoding::johab:
            return "johab";
          case CloudWatchLogsEncoding::koi8_r:
            return "koi8_r";
          case CloudWatchLogsEncoding::koi8_u:
            return "koi8_u";
          case CloudWatchLogsEncoding::mac_cyrillic:
            return "mac_cyrillic";
          case CloudWatchLogsEncoding::mac_greek:
            return "mac_greek";
          case CloudWatchLogsEncoding::mac_iceland:
            return "mac_iceland";
          case CloudWatchLogsEncoding::mac_latin2:
            return "mac_latin2";
          case CloudWatchLogsEncoding::mac_roman:
            return "mac_roman";
          case CloudWatchLogsEncoding::mac_turkish:
            return "mac_turkish";
          case CloudWatchLogsEncoding::ptcp154:
            return "ptcp154";
          case CloudWatchLogsEncoding::shift_jis:
            return "shift_jis";
          case CloudWatchLogsEncoding::shift_jis_2004:
            return "shift_jis_2004";
          case CloudWatchLogsEncoding::shift_jisx0213:
            return "shift_jisx0213";
          case CloudWatchLogsEncoding::utf_32:
            return "utf_32";
          case CloudWatchLogsEncoding::utf_32_be:
            return "utf_32_be";
          case CloudWatchLogsEncoding::utf_32_le:
            return "utf_32_le";
          case CloudWatchLogsEncoding::utf_16:
            return "utf_16";
          case CloudWatchLogsEncoding::utf_16_be:
            return "utf_16_be";
          case CloudWatchLogsEncoding::utf_16_le:
            return "utf_16_le";
          case CloudWatchLogsEncoding::utf_7:
            return "utf_7";
          case CloudWatchLogsEncoding::utf_8:
            return "utf_8";
          case CloudWatchLogsEncoding::utf_8_sig:
            return "utf_8_sig";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace CloudWatchLogsEncodingMapper
    } // namespace Model
  } // namespace OpsWorks
} // namespace Aws
