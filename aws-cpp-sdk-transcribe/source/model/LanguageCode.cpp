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

#include <aws/transcribe/model/LanguageCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TranscribeService
  {
    namespace Model
    {
      namespace LanguageCodeMapper
      {

        static const int en_US_HASH = HashingUtils::HashString("en-US");
        static const int es_US_HASH = HashingUtils::HashString("es-US");
        static const int en_AU_HASH = HashingUtils::HashString("en-AU");
        static const int fr_CA_HASH = HashingUtils::HashString("fr-CA");
        static const int en_GB_HASH = HashingUtils::HashString("en-GB");
        static const int de_DE_HASH = HashingUtils::HashString("de-DE");
        static const int pt_BR_HASH = HashingUtils::HashString("pt-BR");
        static const int fr_FR_HASH = HashingUtils::HashString("fr-FR");
        static const int it_IT_HASH = HashingUtils::HashString("it-IT");
        static const int ko_KR_HASH = HashingUtils::HashString("ko-KR");
        static const int es_ES_HASH = HashingUtils::HashString("es-ES");
        static const int en_IN_HASH = HashingUtils::HashString("en-IN");
        static const int hi_IN_HASH = HashingUtils::HashString("hi-IN");
        static const int ar_SA_HASH = HashingUtils::HashString("ar-SA");


        LanguageCode GetLanguageCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == en_US_HASH)
          {
            return LanguageCode::en_US;
          }
          else if (hashCode == es_US_HASH)
          {
            return LanguageCode::es_US;
          }
          else if (hashCode == en_AU_HASH)
          {
            return LanguageCode::en_AU;
          }
          else if (hashCode == fr_CA_HASH)
          {
            return LanguageCode::fr_CA;
          }
          else if (hashCode == en_GB_HASH)
          {
            return LanguageCode::en_GB;
          }
          else if (hashCode == de_DE_HASH)
          {
            return LanguageCode::de_DE;
          }
          else if (hashCode == pt_BR_HASH)
          {
            return LanguageCode::pt_BR;
          }
          else if (hashCode == fr_FR_HASH)
          {
            return LanguageCode::fr_FR;
          }
          else if (hashCode == it_IT_HASH)
          {
            return LanguageCode::it_IT;
          }
          else if (hashCode == ko_KR_HASH)
          {
            return LanguageCode::ko_KR;
          }
          else if (hashCode == es_ES_HASH)
          {
            return LanguageCode::es_ES;
          }
          else if (hashCode == en_IN_HASH)
          {
            return LanguageCode::en_IN;
          }
          else if (hashCode == hi_IN_HASH)
          {
            return LanguageCode::hi_IN;
          }
          else if (hashCode == ar_SA_HASH)
          {
            return LanguageCode::ar_SA;
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
          case LanguageCode::es_US:
            return "es-US";
          case LanguageCode::en_AU:
            return "en-AU";
          case LanguageCode::fr_CA:
            return "fr-CA";
          case LanguageCode::en_GB:
            return "en-GB";
          case LanguageCode::de_DE:
            return "de-DE";
          case LanguageCode::pt_BR:
            return "pt-BR";
          case LanguageCode::fr_FR:
            return "fr-FR";
          case LanguageCode::it_IT:
            return "it-IT";
          case LanguageCode::ko_KR:
            return "ko-KR";
          case LanguageCode::es_ES:
            return "es-ES";
          case LanguageCode::en_IN:
            return "en-IN";
          case LanguageCode::hi_IN:
            return "hi-IN";
          case LanguageCode::ar_SA:
            return "ar-SA";
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
  } // namespace TranscribeService
} // namespace Aws
