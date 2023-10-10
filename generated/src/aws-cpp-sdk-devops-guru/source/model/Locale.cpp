/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/Locale.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DevOpsGuru
  {
    namespace Model
    {
      namespace LocaleMapper
      {

        static const int DE_DE_HASH = HashingUtils::HashString("DE_DE");
        static const int EN_US_HASH = HashingUtils::HashString("EN_US");
        static const int EN_GB_HASH = HashingUtils::HashString("EN_GB");
        static const int ES_ES_HASH = HashingUtils::HashString("ES_ES");
        static const int FR_FR_HASH = HashingUtils::HashString("FR_FR");
        static const int IT_IT_HASH = HashingUtils::HashString("IT_IT");
        static const int JA_JP_HASH = HashingUtils::HashString("JA_JP");
        static const int KO_KR_HASH = HashingUtils::HashString("KO_KR");
        static const int PT_BR_HASH = HashingUtils::HashString("PT_BR");
        static const int ZH_CN_HASH = HashingUtils::HashString("ZH_CN");
        static const int ZH_TW_HASH = HashingUtils::HashString("ZH_TW");


        Locale GetLocaleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DE_DE_HASH)
          {
            return Locale::DE_DE;
          }
          else if (hashCode == EN_US_HASH)
          {
            return Locale::EN_US;
          }
          else if (hashCode == EN_GB_HASH)
          {
            return Locale::EN_GB;
          }
          else if (hashCode == ES_ES_HASH)
          {
            return Locale::ES_ES;
          }
          else if (hashCode == FR_FR_HASH)
          {
            return Locale::FR_FR;
          }
          else if (hashCode == IT_IT_HASH)
          {
            return Locale::IT_IT;
          }
          else if (hashCode == JA_JP_HASH)
          {
            return Locale::JA_JP;
          }
          else if (hashCode == KO_KR_HASH)
          {
            return Locale::KO_KR;
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
          case Locale::DE_DE:
            return "DE_DE";
          case Locale::EN_US:
            return "EN_US";
          case Locale::EN_GB:
            return "EN_GB";
          case Locale::ES_ES:
            return "ES_ES";
          case Locale::FR_FR:
            return "FR_FR";
          case Locale::IT_IT:
            return "IT_IT";
          case Locale::JA_JP:
            return "JA_JP";
          case Locale::KO_KR:
            return "KO_KR";
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
  } // namespace DevOpsGuru
} // namespace Aws
