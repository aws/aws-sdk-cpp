/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/Locale.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelBuildingService
  {
    namespace Model
    {
      namespace LocaleMapper
      {

        static const int en_US_HASH = HashingUtils::HashString("en-US");
        static const int en_GB_HASH = HashingUtils::HashString("en-GB");
        static const int de_DE_HASH = HashingUtils::HashString("de-DE");


        Locale GetLocaleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == en_US_HASH)
          {
            return Locale::en_US;
          }
          else if (hashCode == en_GB_HASH)
          {
            return Locale::en_GB;
          }
          else if (hashCode == de_DE_HASH)
          {
            return Locale::de_DE;
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
          case Locale::en_US:
            return "en-US";
          case Locale::en_GB:
            return "en-GB";
          case Locale::de_DE:
            return "de-DE";
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
  } // namespace LexModelBuildingService
} // namespace Aws
