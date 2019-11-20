/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/quicksight/model/ColumnDataType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace ColumnDataTypeMapper
      {

        static const int STRING_HASH = HashingUtils::HashString("STRING");
        static const int INTEGER_HASH = HashingUtils::HashString("INTEGER");
        static const int DECIMAL_HASH = HashingUtils::HashString("DECIMAL");
        static const int DATETIME_HASH = HashingUtils::HashString("DATETIME");


        ColumnDataType GetColumnDataTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STRING_HASH)
          {
            return ColumnDataType::STRING;
          }
          else if (hashCode == INTEGER_HASH)
          {
            return ColumnDataType::INTEGER;
          }
          else if (hashCode == DECIMAL_HASH)
          {
            return ColumnDataType::DECIMAL;
          }
          else if (hashCode == DATETIME_HASH)
          {
            return ColumnDataType::DATETIME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ColumnDataType>(hashCode);
          }

          return ColumnDataType::NOT_SET;
        }

        Aws::String GetNameForColumnDataType(ColumnDataType enumValue)
        {
          switch(enumValue)
          {
          case ColumnDataType::STRING:
            return "STRING";
          case ColumnDataType::INTEGER:
            return "INTEGER";
          case ColumnDataType::DECIMAL:
            return "DECIMAL";
          case ColumnDataType::DATETIME:
            return "DATETIME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ColumnDataTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
