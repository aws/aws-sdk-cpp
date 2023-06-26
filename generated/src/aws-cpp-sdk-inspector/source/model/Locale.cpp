/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/Locale.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector
  {
    namespace Model
    {
      namespace LocaleMapper
      {

        static const int EN_US_HASH = HashingUtils::HashString("EN_US");


        Locale GetLocaleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EN_US_HASH)
          {
            return Locale::EN_US;
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
          case Locale::EN_US:
            return "EN_US";
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
  } // namespace Inspector
} // namespace Aws
