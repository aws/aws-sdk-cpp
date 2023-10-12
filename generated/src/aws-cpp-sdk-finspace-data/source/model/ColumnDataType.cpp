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

        static constexpr uint32_t STRING_HASH = ConstExprHashingUtils::HashString("STRING");
        static constexpr uint32_t CHAR__HASH = ConstExprHashingUtils::HashString("CHAR");
        static constexpr uint32_t INTEGER_HASH = ConstExprHashingUtils::HashString("INTEGER");
        static constexpr uint32_t TINYINT_HASH = ConstExprHashingUtils::HashString("TINYINT");
        static constexpr uint32_t SMALLINT_HASH = ConstExprHashingUtils::HashString("SMALLINT");
        static constexpr uint32_t BIGINT_HASH = ConstExprHashingUtils::HashString("BIGINT");
        static constexpr uint32_t FLOAT_HASH = ConstExprHashingUtils::HashString("FLOAT");
        static constexpr uint32_t DOUBLE_HASH = ConstExprHashingUtils::HashString("DOUBLE");
        static constexpr uint32_t DATE_HASH = ConstExprHashingUtils::HashString("DATE");
        static constexpr uint32_t DATETIME_HASH = ConstExprHashingUtils::HashString("DATETIME");
        static constexpr uint32_t BOOLEAN_HASH = ConstExprHashingUtils::HashString("BOOLEAN");
        static constexpr uint32_t BINARY_HASH = ConstExprHashingUtils::HashString("BINARY");


        ColumnDataType GetColumnDataTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
