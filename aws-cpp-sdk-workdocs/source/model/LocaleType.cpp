/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/LocaleType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkDocs
  {
    namespace Model
    {
      namespace LocaleTypeMapper
      {

        static const int en_HASH = HashingUtils::HashString("en");
        static const int fr_HASH = HashingUtils::HashString("fr");
        static const int ko_HASH = HashingUtils::HashString("ko");
        static const int de_HASH = HashingUtils::HashString("de");
        static const int es_HASH = HashingUtils::HashString("es");
        static const int ja_HASH = HashingUtils::HashString("ja");
        static const int ru_HASH = HashingUtils::HashString("ru");
        static const int zh_CN_HASH = HashingUtils::HashString("zh_CN");
        static const int zh_TW_HASH = HashingUtils::HashString("zh_TW");
        static const int pt_BR_HASH = HashingUtils::HashString("pt_BR");
        static const int default__HASH = HashingUtils::HashString("default");


        LocaleType GetLocaleTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == en_HASH)
          {
            return LocaleType::en;
          }
          else if (hashCode == fr_HASH)
          {
            return LocaleType::fr;
          }
          else if (hashCode == ko_HASH)
          {
            return LocaleType::ko;
          }
          else if (hashCode == de_HASH)
          {
            return LocaleType::de;
          }
          else if (hashCode == es_HASH)
          {
            return LocaleType::es;
          }
          else if (hashCode == ja_HASH)
          {
            return LocaleType::ja;
          }
          else if (hashCode == ru_HASH)
          {
            return LocaleType::ru;
          }
          else if (hashCode == zh_CN_HASH)
          {
            return LocaleType::zh_CN;
          }
          else if (hashCode == zh_TW_HASH)
          {
            return LocaleType::zh_TW;
          }
          else if (hashCode == pt_BR_HASH)
          {
            return LocaleType::pt_BR;
          }
          else if (hashCode == default__HASH)
          {
            return LocaleType::default_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LocaleType>(hashCode);
          }

          return LocaleType::NOT_SET;
        }

        Aws::String GetNameForLocaleType(LocaleType enumValue)
        {
          switch(enumValue)
          {
          case LocaleType::en:
            return "en";
          case LocaleType::fr:
            return "fr";
          case LocaleType::ko:
            return "ko";
          case LocaleType::de:
            return "de";
          case LocaleType::es:
            return "es";
          case LocaleType::ja:
            return "ja";
          case LocaleType::ru:
            return "ru";
          case LocaleType::zh_CN:
            return "zh_CN";
          case LocaleType::zh_TW:
            return "zh_TW";
          case LocaleType::pt_BR:
            return "pt_BR";
          case LocaleType::default_:
            return "default";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LocaleTypeMapper
    } // namespace Model
  } // namespace WorkDocs
} // namespace Aws
