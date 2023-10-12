/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/TranscribeLanguageCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Chime
  {
    namespace Model
    {
      namespace TranscribeLanguageCodeMapper
      {

        static constexpr uint32_t en_US_HASH = ConstExprHashingUtils::HashString("en-US");
        static constexpr uint32_t en_GB_HASH = ConstExprHashingUtils::HashString("en-GB");
        static constexpr uint32_t es_US_HASH = ConstExprHashingUtils::HashString("es-US");
        static constexpr uint32_t fr_CA_HASH = ConstExprHashingUtils::HashString("fr-CA");
        static constexpr uint32_t fr_FR_HASH = ConstExprHashingUtils::HashString("fr-FR");
        static constexpr uint32_t en_AU_HASH = ConstExprHashingUtils::HashString("en-AU");
        static constexpr uint32_t it_IT_HASH = ConstExprHashingUtils::HashString("it-IT");
        static constexpr uint32_t de_DE_HASH = ConstExprHashingUtils::HashString("de-DE");
        static constexpr uint32_t pt_BR_HASH = ConstExprHashingUtils::HashString("pt-BR");
        static constexpr uint32_t ja_JP_HASH = ConstExprHashingUtils::HashString("ja-JP");
        static constexpr uint32_t ko_KR_HASH = ConstExprHashingUtils::HashString("ko-KR");
        static constexpr uint32_t zh_CN_HASH = ConstExprHashingUtils::HashString("zh-CN");
        static constexpr uint32_t th_TH_HASH = ConstExprHashingUtils::HashString("th-TH");
        static constexpr uint32_t hi_IN_HASH = ConstExprHashingUtils::HashString("hi-IN");


        TranscribeLanguageCode GetTranscribeLanguageCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == en_US_HASH)
          {
            return TranscribeLanguageCode::en_US;
          }
          else if (hashCode == en_GB_HASH)
          {
            return TranscribeLanguageCode::en_GB;
          }
          else if (hashCode == es_US_HASH)
          {
            return TranscribeLanguageCode::es_US;
          }
          else if (hashCode == fr_CA_HASH)
          {
            return TranscribeLanguageCode::fr_CA;
          }
          else if (hashCode == fr_FR_HASH)
          {
            return TranscribeLanguageCode::fr_FR;
          }
          else if (hashCode == en_AU_HASH)
          {
            return TranscribeLanguageCode::en_AU;
          }
          else if (hashCode == it_IT_HASH)
          {
            return TranscribeLanguageCode::it_IT;
          }
          else if (hashCode == de_DE_HASH)
          {
            return TranscribeLanguageCode::de_DE;
          }
          else if (hashCode == pt_BR_HASH)
          {
            return TranscribeLanguageCode::pt_BR;
          }
          else if (hashCode == ja_JP_HASH)
          {
            return TranscribeLanguageCode::ja_JP;
          }
          else if (hashCode == ko_KR_HASH)
          {
            return TranscribeLanguageCode::ko_KR;
          }
          else if (hashCode == zh_CN_HASH)
          {
            return TranscribeLanguageCode::zh_CN;
          }
          else if (hashCode == th_TH_HASH)
          {
            return TranscribeLanguageCode::th_TH;
          }
          else if (hashCode == hi_IN_HASH)
          {
            return TranscribeLanguageCode::hi_IN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TranscribeLanguageCode>(hashCode);
          }

          return TranscribeLanguageCode::NOT_SET;
        }

        Aws::String GetNameForTranscribeLanguageCode(TranscribeLanguageCode enumValue)
        {
          switch(enumValue)
          {
          case TranscribeLanguageCode::NOT_SET:
            return {};
          case TranscribeLanguageCode::en_US:
            return "en-US";
          case TranscribeLanguageCode::en_GB:
            return "en-GB";
          case TranscribeLanguageCode::es_US:
            return "es-US";
          case TranscribeLanguageCode::fr_CA:
            return "fr-CA";
          case TranscribeLanguageCode::fr_FR:
            return "fr-FR";
          case TranscribeLanguageCode::en_AU:
            return "en-AU";
          case TranscribeLanguageCode::it_IT:
            return "it-IT";
          case TranscribeLanguageCode::de_DE:
            return "de-DE";
          case TranscribeLanguageCode::pt_BR:
            return "pt-BR";
          case TranscribeLanguageCode::ja_JP:
            return "ja-JP";
          case TranscribeLanguageCode::ko_KR:
            return "ko-KR";
          case TranscribeLanguageCode::zh_CN:
            return "zh-CN";
          case TranscribeLanguageCode::th_TH:
            return "th-TH";
          case TranscribeLanguageCode::hi_IN:
            return "hi-IN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TranscribeLanguageCodeMapper
    } // namespace Model
  } // namespace Chime
} // namespace Aws
