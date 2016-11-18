/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

        static const int int__HASH = HashingUtils::HashString("int");
        static const int double__HASH = HashingUtils::HashString("double");
        static const int literal_HASH = HashingUtils::HashString("literal");
        static const int text_HASH = HashingUtils::HashString("text");
        static const int date_HASH = HashingUtils::HashString("date");
        static const int latlon_HASH = HashingUtils::HashString("latlon");
        static const int int_array_HASH = HashingUtils::HashString("int-array");
        static const int double_array_HASH = HashingUtils::HashString("double-array");
        static const int literal_array_HASH = HashingUtils::HashString("literal-array");
        static const int text_array_HASH = HashingUtils::HashString("text-array");
        static const int date_array_HASH = HashingUtils::HashString("date-array");


        IndexFieldType GetIndexFieldTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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

            return "";
          }
        }

      } // namespace IndexFieldTypeMapper
    } // namespace Model
  } // namespace CloudSearch
} // namespace Aws
