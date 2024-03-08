/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/ColumnDataType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FinSpaceData
  {
    namespace Model
    {
      namespace ColumnDataTypeMapper
      {

        static const int STRING_HASH = HashingUtils::HashString("STRING");
        static const int CHAR__HASH = HashingUtils::HashString("CHAR");
        static const int INTEGER_HASH = HashingUtils::HashString("INTEGER");
        static const int TINYINT_HASH = HashingUtils::HashString("TINYINT");
        static const int SMALLINT_HASH = HashingUtils::HashString("SMALLINT");
        static const int BIGINT_HASH = HashingUtils::HashString("BIGINT");
        static const int FLOAT_HASH = HashingUtils::HashString("FLOAT");
        static const int DOUBLE_HASH = HashingUtils::HashString("DOUBLE");
        static const int DATE_HASH = HashingUtils::HashString("DATE");
        static const int DATETIME_HASH = HashingUtils::HashString("DATETIME");
        static const int BOOLEAN_HASH = HashingUtils::HashString("BOOLEAN");
        static const int BINARY_HASH = HashingUtils::HashString("BINARY");


        ColumnDataType GetColumnDataTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STRING_HASH)
          {
            return ColumnDataType::STRING;
          }
          else if (hashCode == CHAR__HASH)
          {
            return ColumnDataType::CHAR_;
          }
          else if (hashCode == INTEGER_HASH)
          {
            return ColumnDataType::INTEGER;
          }
          else if (hashCode == TINYINT_HASH)
          {
            return ColumnDataType::TINYINT;
          }
          else if (hashCode == SMALLINT_HASH)
          {
            return ColumnDataType::SMALLINT;
          }
          else if (hashCode == BIGINT_HASH)
          {
            return ColumnDataType::BIGINT;
          }
          else if (hashCode == FLOAT_HASH)
          {
            return ColumnDataType::FLOAT;
          }
          else if (hashCode == DOUBLE_HASH)
          {
            return ColumnDataType::DOUBLE;
          }
          else if (hashCode == DATE_HASH)
          {
            return ColumnDataType::DATE;
          }
          else if (hashCode == DATETIME_HASH)
          {
            return ColumnDataType::DATETIME;
          }
          else if (hashCode == BOOLEAN_HASH)
          {
            return ColumnDataType::BOOLEAN;
          }
          else if (hashCode == BINARY_HASH)
          {
            return ColumnDataType::BINARY;
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
          case ColumnDataType::NOT_SET:
            return {};
          case ColumnDataType::STRING:
            return "STRING";
          case ColumnDataType::CHAR_:
            return "CHAR";
          case ColumnDataType::INTEGER:
            return "INTEGER";
          case ColumnDataType::TINYINT:
            return "TINYINT";
          case ColumnDataType::SMALLINT:
            return "SMALLINT";
          case ColumnDataType::BIGINT:
            return "BIGINT";
          case ColumnDataType::FLOAT:
            return "FLOAT";
          case ColumnDataType::DOUBLE:
            return "DOUBLE";
          case ColumnDataType::DATE:
            return "DATE";
          case ColumnDataType::DATETIME:
            return "DATETIME";
          case ColumnDataType::BOOLEAN:
            return "BOOLEAN";
          case ColumnDataType::BINARY:
            return "BINARY";
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
  } // namespace FinSpaceData
} // namespace Aws
