/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/IndexFieldType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudSearch
  {
    namespace Model
    {
      namespace IndexFieldTypeMapper
      {

        static constexpr uint32_t int__HASH = ConstExprHashingUtils::HashString("int");
        static constexpr uint32_t double__HASH = ConstExprHashingUtils::HashString("double");
        static constexpr uint32_t literal_HASH = ConstExprHashingUtils::HashString("literal");
        static constexpr uint32_t text_HASH = ConstExprHashingUtils::HashString("text");
        static constexpr uint32_t date_HASH = ConstExprHashingUtils::HashString("date");
        static constexpr uint32_t latlon_HASH = ConstExprHashingUtils::HashString("latlon");
        static constexpr uint32_t int_array_HASH = ConstExprHashingUtils::HashString("int-array");
        static constexpr uint32_t double_array_HASH = ConstExprHashingUtils::HashString("double-array");
        static constexpr uint32_t literal_array_HASH = ConstExprHashingUtils::HashString("literal-array");
        static constexpr uint32_t text_array_HASH = ConstExprHashingUtils::HashString("text-array");
        static constexpr uint32_t date_array_HASH = ConstExprHashingUtils::HashString("date-array");


        IndexFieldType GetIndexFieldTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == int__HASH)
          {
            return IndexFieldType::int_;
          }
          else if (hashCode == double__HASH)
          {
            return IndexFieldType::double_;
          }
          else if (hashCode == literal_HASH)
          {
            return IndexFieldType::literal;
          }
          else if (hashCode == text_HASH)
          {
            return IndexFieldType::text;
          }
          else if (hashCode == date_HASH)
          {
            return IndexFieldType::date;
          }
          else if (hashCode == latlon_HASH)
          {
            return IndexFieldType::latlon;
          }
          else if (hashCode == int_array_HASH)
          {
            return IndexFieldType::int_array;
          }
          else if (hashCode == double_array_HASH)
          {
            return IndexFieldType::double_array;
          }
          else if (hashCode == literal_array_HASH)
          {
            return IndexFieldType::literal_array;
          }
          else if (hashCode == text_array_HASH)
          {
            return IndexFieldType::text_array;
          }
          else if (hashCode == date_array_HASH)
          {
            return IndexFieldType::date_array;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IndexFieldType>(hashCode);
          }

          return IndexFieldType::NOT_SET;
        }

        Aws::String GetNameForIndexFieldType(IndexFieldType enumValue)
        {
          switch(enumValue)
          {
          case IndexFieldType::NOT_SET:
            return {};
          case IndexFieldType::int_:
            return "int";
          case IndexFieldType::double_:
            return "double";
          case IndexFieldType::literal:
            return "literal";
          case IndexFieldType::text:
            return "text";
          case IndexFieldType::date:
            return "date";
          case IndexFieldType::latlon:
            return "latlon";
          case IndexFieldType::int_array:
            return "int-array";
          case IndexFieldType::double_array:
            return "double-array";
          case IndexFieldType::literal_array:
            return "literal-array";
          case IndexFieldType::text_array:
            return "text-array";
          case IndexFieldType::date_array:
            return "date-array";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IndexFieldTypeMapper
    } // namespace Model
  } // namespace CloudSearch
} // namespace Aws
