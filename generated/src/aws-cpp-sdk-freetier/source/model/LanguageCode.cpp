/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/freetier/model/LanguageCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FreeTier
  {
    namespace Model
    {
      namespace LanguageCodeMapper
      {

        static const int en_US_HASH = HashingUtils::HashString("en-US");
        static const int en_GB_HASH = HashingUtils::HashString("en-GB");
        static const int id_ID_HASH = HashingUtils::HashString("id-ID");
        static const int de_DE_HASH = HashingUtils::HashString("de-DE");
        static const int es_ES_HASH = HashingUtils::HashString("es-ES");
        static const int fr_FR_HASH = HashingUtils::HashString("fr-FR");
        static const int ja_JP_HASH = HashingUtils::HashString("ja-JP");
        static const int it_IT_HASH = HashingUtils::HashString("it-IT");
        static const int pt_PT_HASH = HashingUtils::HashString("pt-PT");
        static const int ko_KR_HASH = HashingUtils::HashString("ko-KR");
        static const int zh_CN_HASH = HashingUtils::HashString("zh-CN");
        static const int zh_TW_HASH = HashingUtils::HashString("zh-TW");
        static const int tr_TR_HASH = HashingUtils::HashString("tr-TR");


        LanguageCode GetLanguageCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == en_US_HASH)
          {
            return LanguageCode::en_US;
          }
          else if (hashCode == en_GB_HASH)
          {
            return LanguageCode::en_GB;
          }
          else if (hashCode == id_ID_HASH)
          {
            return LanguageCode::id_ID;
          }
          else if (hashCode == de_DE_HASH)
          {
            return LanguageCode::de_DE;
          }
          else if (hashCode == es_ES_HASH)
          {
            return LanguageCode::es_ES;
          }
          else if (hashCode == fr_FR_HASH)
          {
            return LanguageCode::fr_FR;
          }
          else if (hashCode == ja_JP_HASH)
          {
            return LanguageCode::ja_JP;
          }
          else if (hashCode == it_IT_HASH)
          {
            return LanguageCode::it_IT;
          }
          else if (hashCode == pt_PT_HASH)
          {
            return LanguageCode::pt_PT;
          }
          else if (hashCode == ko_KR_HASH)
          {
            return LanguageCode::ko_KR;
          }
          else if (hashCode == zh_CN_HASH)
          {
            return LanguageCode::zh_CN;
          }
          else if (hashCode == zh_TW_HASH)
          {
            return LanguageCode::zh_TW;
          }
          else if (hashCode == tr_TR_HASH)
          {
            return LanguageCode::tr_TR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LanguageCode>(hashCode);
          }

          return LanguageCode::NOT_SET;
        }

        Aws::String GetNameForLanguageCode(LanguageCode enumValue)
        {
          switch(enumValue)
          {
          case LanguageCode::NOT_SET:
            return {};
          case LanguageCode::en_US:
            return "en-US";
          case LanguageCode::en_GB:
            return "en-GB";
          case LanguageCode::id_ID:
            return "id-ID";
          case LanguageCode::de_DE:
            return "de-DE";
          case LanguageCode::es_ES:
            return "es-ES";
          case LanguageCode::fr_FR:
            return "fr-FR";
          case LanguageCode::ja_JP:
            return "ja-JP";
          case LanguageCode::it_IT:
            return "it-IT";
          case LanguageCode::pt_PT:
            return "pt-PT";
          case LanguageCode::ko_KR:
            return "ko-KR";
          case LanguageCode::zh_CN:
            return "zh-CN";
          case LanguageCode::zh_TW:
            return "zh-TW";
          case LanguageCode::tr_TR:
            return "tr-TR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LanguageCodeMapper
    } // namespace Model
  } // namespace FreeTier
} // namespace Aws
