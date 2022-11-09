/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/LanguageCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TranscribeStreamingService
  {
    namespace Model
    {
      namespace LanguageCodeMapper
      {

        static const int en_US_HASH = HashingUtils::HashString("en-US");
        static const int en_GB_HASH = HashingUtils::HashString("en-GB");
        static const int es_US_HASH = HashingUtils::HashString("es-US");
        static const int fr_CA_HASH = HashingUtils::HashString("fr-CA");
        static const int fr_FR_HASH = HashingUtils::HashString("fr-FR");
        static const int en_AU_HASH = HashingUtils::HashString("en-AU");
        static const int it_IT_HASH = HashingUtils::HashString("it-IT");
        static const int de_DE_HASH = HashingUtils::HashString("de-DE");
        static const int pt_BR_HASH = HashingUtils::HashString("pt-BR");
        static const int ja_JP_HASH = HashingUtils::HashString("ja-JP");
        static const int ko_KR_HASH = HashingUtils::HashString("ko-KR");
        static const int zh_CN_HASH = HashingUtils::HashString("zh-CN");
        static const int hi_IN_HASH = HashingUtils::HashString("hi-IN");
        static const int th_TH_HASH = HashingUtils::HashString("th-TH");


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
          else if (hashCode == es_US_HASH)
          {
            return LanguageCode::es_US;
          }
          else if (hashCode == fr_CA_HASH)
          {
            return LanguageCode::fr_CA;
          }
          else if (hashCode == fr_FR_HASH)
          {
            return LanguageCode::fr_FR;
          }
          else if (hashCode == en_AU_HASH)
          {
            return LanguageCode::en_AU;
          }
          else if (hashCode == it_IT_HASH)
          {
            return LanguageCode::it_IT;
          }
          else if (hashCode == de_DE_HASH)
          {
            return LanguageCode::de_DE;
          }
          else if (hashCode == pt_BR_HASH)
          {
            return LanguageCode::pt_BR;
          }
          else if (hashCode == ja_JP_HASH)
          {
            return LanguageCode::ja_JP;
          }
          else if (hashCode == ko_KR_HASH)
          {
            return LanguageCode::ko_KR;
          }
          else if (hashCode == zh_CN_HASH)
          {
            return LanguageCode::zh_CN;
          }
          else if (hashCode == hi_IN_HASH)
          {
            return LanguageCode::hi_IN;
          }
          else if (hashCode == th_TH_HASH)
          {
            return LanguageCode::th_TH;
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
          case LanguageCode::en_US:
            return "en-US";
          case LanguageCode::en_GB:
            return "en-GB";
          case LanguageCode::es_US:
            return "es-US";
          case LanguageCode::fr_CA:
            return "fr-CA";
          case LanguageCode::fr_FR:
            return "fr-FR";
          case LanguageCode::en_AU:
            return "en-AU";
          case LanguageCode::it_IT:
            return "it-IT";
          case LanguageCode::de_DE:
            return "de-DE";
          case LanguageCode::pt_BR:
            return "pt-BR";
          case LanguageCode::ja_JP:
            return "ja-JP";
          case LanguageCode::ko_KR:
            return "ko-KR";
          case LanguageCode::zh_CN:
            return "zh-CN";
          case LanguageCode::hi_IN:
            return "hi-IN";
          case LanguageCode::th_TH:
            return "th-TH";
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
  } // namespace TranscribeStreamingService
} // namespace Aws
