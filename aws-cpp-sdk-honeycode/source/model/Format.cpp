/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/Format.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Honeycode
  {
    namespace Model
    {
      namespace FormatMapper
      {

        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int NUMBER_HASH = HashingUtils::HashString("NUMBER");
        static const int CURRENCY_HASH = HashingUtils::HashString("CURRENCY");
        static const int DATE_HASH = HashingUtils::HashString("DATE");
        static const int TIME_HASH = HashingUtils::HashString("TIME");
        static const int DATE_TIME_HASH = HashingUtils::HashString("DATE_TIME");
        static const int PERCENTAGE_HASH = HashingUtils::HashString("PERCENTAGE");
        static const int TEXT_HASH = HashingUtils::HashString("TEXT");
        static const int ACCOUNTING_HASH = HashingUtils::HashString("ACCOUNTING");
        static const int CONTACT_HASH = HashingUtils::HashString("CONTACT");
        static const int ROWLINK_HASH = HashingUtils::HashString("ROWLINK");


        Format GetFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return Format::AUTO;
          }
          else if (hashCode == NUMBER_HASH)
          {
            return Format::NUMBER;
          }
          else if (hashCode == CURRENCY_HASH)
          {
            return Format::CURRENCY;
          }
          else if (hashCode == DATE_HASH)
          {
            return Format::DATE;
          }
          else if (hashCode == TIME_HASH)
          {
            return Format::TIME;
          }
          else if (hashCode == DATE_TIME_HASH)
          {
            return Format::DATE_TIME;
          }
          else if (hashCode == PERCENTAGE_HASH)
          {
            return Format::PERCENTAGE;
          }
          else if (hashCode == TEXT_HASH)
          {
            return Format::TEXT;
          }
          else if (hashCode == ACCOUNTING_HASH)
          {
            return Format::ACCOUNTING;
          }
          else if (hashCode == CONTACT_HASH)
          {
            return Format::CONTACT;
          }
          else if (hashCode == ROWLINK_HASH)
          {
            return Format::ROWLINK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Format>(hashCode);
          }

          return Format::NOT_SET;
        }

        Aws::String GetNameForFormat(Format enumValue)
        {
          switch(enumValue)
          {
          case Format::AUTO:
            return "AUTO";
          case Format::NUMBER:
            return "NUMBER";
          case Format::CURRENCY:
            return "CURRENCY";
          case Format::DATE:
            return "DATE";
          case Format::TIME:
            return "TIME";
          case Format::DATE_TIME:
            return "DATE_TIME";
          case Format::PERCENTAGE:
            return "PERCENTAGE";
          case Format::TEXT:
            return "TEXT";
          case Format::ACCOUNTING:
            return "ACCOUNTING";
          case Format::CONTACT:
            return "CONTACT";
          case Format::ROWLINK:
            return "ROWLINK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FormatMapper
    } // namespace Model
  } // namespace Honeycode
} // namespace Aws
