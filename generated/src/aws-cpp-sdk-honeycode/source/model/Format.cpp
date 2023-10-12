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

        static constexpr uint32_t AUTO_HASH = ConstExprHashingUtils::HashString("AUTO");
        static constexpr uint32_t NUMBER_HASH = ConstExprHashingUtils::HashString("NUMBER");
        static constexpr uint32_t CURRENCY_HASH = ConstExprHashingUtils::HashString("CURRENCY");
        static constexpr uint32_t DATE_HASH = ConstExprHashingUtils::HashString("DATE");
        static constexpr uint32_t TIME_HASH = ConstExprHashingUtils::HashString("TIME");
        static constexpr uint32_t DATE_TIME_HASH = ConstExprHashingUtils::HashString("DATE_TIME");
        static constexpr uint32_t PERCENTAGE_HASH = ConstExprHashingUtils::HashString("PERCENTAGE");
        static constexpr uint32_t TEXT_HASH = ConstExprHashingUtils::HashString("TEXT");
        static constexpr uint32_t ACCOUNTING_HASH = ConstExprHashingUtils::HashString("ACCOUNTING");
        static constexpr uint32_t CONTACT_HASH = ConstExprHashingUtils::HashString("CONTACT");
        static constexpr uint32_t ROWLINK_HASH = ConstExprHashingUtils::HashString("ROWLINK");
        static constexpr uint32_t ROWSET_HASH = ConstExprHashingUtils::HashString("ROWSET");


        Format GetFormatForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == ROWSET_HASH)
          {
            return Format::ROWSET;
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
          case Format::NOT_SET:
            return {};
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
          case Format::ROWSET:
            return "ROWSET";
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
