/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/Locale.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AccessAnalyzer
  {
    namespace Model
    {
      namespace LocaleMapper
      {

        static const int DE_HASH = HashingUtils::HashString("DE");
        static const int EN_HASH = HashingUtils::HashString("EN");
        static const int ES_HASH = HashingUtils::HashString("ES");
        static const int FR_HASH = HashingUtils::HashString("FR");
        static const int IT_HASH = HashingUtils::HashString("IT");
        static const int JA_HASH = HashingUtils::HashString("JA");
        static const int KO_HASH = HashingUtils::HashString("KO");
        static const int PT_BR_HASH = HashingUtils::HashString("PT_BR");
        static const int ZH_CN_HASH = HashingUtils::HashString("ZH_CN");
        static const int ZH_TW_HASH = HashingUtils::HashString("ZH_TW");


        Locale GetLocaleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DE_HASH)
          {
            return Locale::DE;
          }
          else if (hashCode == EN_HASH)
          {
            return Locale::EN;
          }
          else if (hashCode == ES_HASH)
          {
            return Locale::ES;
          }
          else if (hashCode == FR_HASH)
          {
            return Locale::FR;
          }
          else if (hashCode == IT_HASH)
          {
            return Locale::IT;
          }
          else if (hashCode == JA_HASH)
          {
            return Locale::JA;
          }
          else if (hashCode == KO_HASH)
          {
            return Locale::KO;
          }
          else if (hashCode == PT_BR_HASH)
          {
            return Locale::PT_BR;
          }
          else if (hashCode == ZH_CN_HASH)
          {
            return Locale::ZH_CN;
          }
          else if (hashCode == ZH_TW_HASH)
          {
            return Locale::ZH_TW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Locale>(hashCode);
          }

          return Locale::NOT_SET;
        }

        Aws::String GetNameForLocale(Locale enumValue)
        {
          switch(enumValue)
          {
          case Locale::NOT_SET:
            return {};
          case Locale::DE:
            return "DE";
          case Locale::EN:
            return "EN";
          case Locale::ES:
            return "ES";
          case Locale::FR:
            return "FR";
          case Locale::IT:
            return "IT";
          case Locale::JA:
            return "JA";
          case Locale::KO:
            return "KO";
          case Locale::PT_BR:
            return "PT_BR";
          case Locale::ZH_CN:
            return "ZH_CN";
          case Locale::ZH_TW:
            return "ZH_TW";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LocaleMapper
    } // namespace Model
  } // namespace AccessAnalyzer
} // namespace Aws
