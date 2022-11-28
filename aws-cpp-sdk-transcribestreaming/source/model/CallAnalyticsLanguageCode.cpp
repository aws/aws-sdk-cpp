/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/CallAnalyticsLanguageCode.h>
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
      namespace CallAnalyticsLanguageCodeMapper
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


        CallAnalyticsLanguageCode GetCallAnalyticsLanguageCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == en_US_HASH)
          {
            return CallAnalyticsLanguageCode::en_US;
          }
          else if (hashCode == en_GB_HASH)
          {
            return CallAnalyticsLanguageCode::en_GB;
          }
          else if (hashCode == es_US_HASH)
          {
            return CallAnalyticsLanguageCode::es_US;
          }
          else if (hashCode == fr_CA_HASH)
          {
            return CallAnalyticsLanguageCode::fr_CA;
          }
          else if (hashCode == fr_FR_HASH)
          {
            return CallAnalyticsLanguageCode::fr_FR;
          }
          else if (hashCode == en_AU_HASH)
          {
            return CallAnalyticsLanguageCode::en_AU;
          }
          else if (hashCode == it_IT_HASH)
          {
            return CallAnalyticsLanguageCode::it_IT;
          }
          else if (hashCode == de_DE_HASH)
          {
            return CallAnalyticsLanguageCode::de_DE;
          }
          else if (hashCode == pt_BR_HASH)
          {
            return CallAnalyticsLanguageCode::pt_BR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CallAnalyticsLanguageCode>(hashCode);
          }

          return CallAnalyticsLanguageCode::NOT_SET;
        }

        Aws::String GetNameForCallAnalyticsLanguageCode(CallAnalyticsLanguageCode enumValue)
        {
          switch(enumValue)
          {
          case CallAnalyticsLanguageCode::en_US:
            return "en-US";
          case CallAnalyticsLanguageCode::en_GB:
            return "en-GB";
          case CallAnalyticsLanguageCode::es_US:
            return "es-US";
          case CallAnalyticsLanguageCode::fr_CA:
            return "fr-CA";
          case CallAnalyticsLanguageCode::fr_FR:
            return "fr-FR";
          case CallAnalyticsLanguageCode::en_AU:
            return "en-AU";
          case CallAnalyticsLanguageCode::it_IT:
            return "it-IT";
          case CallAnalyticsLanguageCode::de_DE:
            return "de-DE";
          case CallAnalyticsLanguageCode::pt_BR:
            return "pt-BR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CallAnalyticsLanguageCodeMapper
    } // namespace Model
  } // namespace TranscribeStreamingService
} // namespace Aws
