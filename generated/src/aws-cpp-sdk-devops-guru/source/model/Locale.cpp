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

        static constexpr uint32_t DE_DE_HASH = ConstExprHashingUtils::HashString("DE_DE");
        static constexpr uint32_t EN_US_HASH = ConstExprHashingUtils::HashString("EN_US");
        static constexpr uint32_t EN_GB_HASH = ConstExprHashingUtils::HashString("EN_GB");
        static constexpr uint32_t ES_ES_HASH = ConstExprHashingUtils::HashString("ES_ES");
        static constexpr uint32_t FR_FR_HASH = ConstExprHashingUtils::HashString("FR_FR");
        static constexpr uint32_t IT_IT_HASH = ConstExprHashingUtils::HashString("IT_IT");
        static constexpr uint32_t JA_JP_HASH = ConstExprHashingUtils::HashString("JA_JP");
        static constexpr uint32_t KO_KR_HASH = ConstExprHashingUtils::HashString("KO_KR");
        static constexpr uint32_t PT_BR_HASH = ConstExprHashingUtils::HashString("PT_BR");
        static constexpr uint32_t ZH_CN_HASH = ConstExprHashingUtils::HashString("ZH_CN");
        static constexpr uint32_t ZH_TW_HASH = ConstExprHashingUtils::HashString("ZH_TW");


        Locale GetLocaleForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
