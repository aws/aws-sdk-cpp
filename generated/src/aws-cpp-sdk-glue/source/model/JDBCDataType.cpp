/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/JDBCDataType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace JDBCDataTypeMapper
      {

        static constexpr uint32_t ARRAY_HASH = ConstExprHashingUtils::HashString("ARRAY");
        static constexpr uint32_t BIGINT_HASH = ConstExprHashingUtils::HashString("BIGINT");
        static constexpr uint32_t BINARY_HASH = ConstExprHashingUtils::HashString("BINARY");
        static constexpr uint32_t BIT_HASH = ConstExprHashingUtils::HashString("BIT");
        static constexpr uint32_t BLOB_HASH = ConstExprHashingUtils::HashString("BLOB");
        static constexpr uint32_t BOOLEAN_HASH = ConstExprHashingUtils::HashString("BOOLEAN");
        static constexpr uint32_t CHAR__HASH = ConstExprHashingUtils::HashString("CHAR");
        static constexpr uint32_t CLOB_HASH = ConstExprHashingUtils::HashString("CLOB");
        static constexpr uint32_t DATALINK_HASH = ConstExprHashingUtils::HashString("DATALINK");
        static constexpr uint32_t DATE_HASH = ConstExprHashingUtils::HashString("DATE");
        static constexpr uint32_t DECIMAL_HASH = ConstExprHashingUtils::HashString("DECIMAL");
        static constexpr uint32_t DISTINCT_HASH = ConstExprHashingUtils::HashString("DISTINCT");
        static constexpr uint32_t DOUBLE_HASH = ConstExprHashingUtils::HashString("DOUBLE");
        static constexpr uint32_t FLOAT_HASH = ConstExprHashingUtils::HashString("FLOAT");
        static constexpr uint32_t INTEGER_HASH = ConstExprHashingUtils::HashString("INTEGER");
        static constexpr uint32_t JAVA_OBJECT_HASH = ConstExprHashingUtils::HashString("JAVA_OBJECT");
        static constexpr uint32_t LONGNVARCHAR_HASH = ConstExprHashingUtils::HashString("LONGNVARCHAR");
        static constexpr uint32_t LONGVARBINARY_HASH = ConstExprHashingUtils::HashString("LONGVARBINARY");
        static constexpr uint32_t LONGVARCHAR_HASH = ConstExprHashingUtils::HashString("LONGVARCHAR");
        static constexpr uint32_t NCHAR_HASH = ConstExprHashingUtils::HashString("NCHAR");
        static constexpr uint32_t NCLOB_HASH = ConstExprHashingUtils::HashString("NCLOB");
        static constexpr uint32_t NULL__HASH = ConstExprHashingUtils::HashString("NULL");
        static constexpr uint32_t NUMERIC_HASH = ConstExprHashingUtils::HashString("NUMERIC");
        static constexpr uint32_t NVARCHAR_HASH = ConstExprHashingUtils::HashString("NVARCHAR");
        static constexpr uint32_t OTHER_HASH = ConstExprHashingUtils::HashString("OTHER");
        static constexpr uint32_t REAL_HASH = ConstExprHashingUtils::HashString("REAL");
        static constexpr uint32_t REF_HASH = ConstExprHashingUtils::HashString("REF");
        static constexpr uint32_t REF_CURSOR_HASH = ConstExprHashingUtils::HashString("REF_CURSOR");
        static constexpr uint32_t ROWID_HASH = ConstExprHashingUtils::HashString("ROWID");
        static constexpr uint32_t SMALLINT_HASH = ConstExprHashingUtils::HashString("SMALLINT");
        static constexpr uint32_t SQLXML_HASH = ConstExprHashingUtils::HashString("SQLXML");
        static constexpr uint32_t STRUCT_HASH = ConstExprHashingUtils::HashString("STRUCT");
        static constexpr uint32_t TIME_HASH = ConstExprHashingUtils::HashString("TIME");
        static constexpr uint32_t TIME_WITH_TIMEZONE_HASH = ConstExprHashingUtils::HashString("TIME_WITH_TIMEZONE");
        static constexpr uint32_t TIMESTAMP_HASH = ConstExprHashingUtils::HashString("TIMESTAMP");
        static constexpr uint32_t TIMESTAMP_WITH_TIMEZONE_HASH = ConstExprHashingUtils::HashString("TIMESTAMP_WITH_TIMEZONE");
        static constexpr uint32_t TINYINT_HASH = ConstExprHashingUtils::HashString("TINYINT");
        static constexpr uint32_t VARBINARY_HASH = ConstExprHashingUtils::HashString("VARBINARY");
        static constexpr uint32_t VARCHAR_HASH = ConstExprHashingUtils::HashString("VARCHAR");


        JDBCDataType GetJDBCDataTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ARRAY_HASH)
          {
            return JDBCDataType::ARRAY;
          }
          else if (hashCode == BIGINT_HASH)
          {
            return JDBCDataType::BIGINT;
          }
          else if (hashCode == BINARY_HASH)
          {
            return JDBCDataType::BINARY;
          }
          else if (hashCode == BIT_HASH)
          {
            return JDBCDataType::BIT;
          }
          else if (hashCode == BLOB_HASH)
          {
            return JDBCDataType::BLOB;
          }
          else if (hashCode == BOOLEAN_HASH)
          {
            return JDBCDataType::BOOLEAN;
          }
          else if (hashCode == CHAR__HASH)
          {
            return JDBCDataType::CHAR_;
          }
          else if (hashCode == CLOB_HASH)
          {
            return JDBCDataType::CLOB;
          }
          else if (hashCode == DATALINK_HASH)
          {
            return JDBCDataType::DATALINK;
          }
          else if (hashCode == DATE_HASH)
          {
            return JDBCDataType::DATE;
          }
          else if (hashCode == DECIMAL_HASH)
          {
            return JDBCDataType::DECIMAL;
          }
          else if (hashCode == DISTINCT_HASH)
          {
            return JDBCDataType::DISTINCT;
          }
          else if (hashCode == DOUBLE_HASH)
          {
            return JDBCDataType::DOUBLE;
          }
          else if (hashCode == FLOAT_HASH)
          {
            return JDBCDataType::FLOAT;
          }
          else if (hashCode == INTEGER_HASH)
          {
            return JDBCDataType::INTEGER;
          }
          else if (hashCode == JAVA_OBJECT_HASH)
          {
            return JDBCDataType::JAVA_OBJECT;
          }
          else if (hashCode == LONGNVARCHAR_HASH)
          {
            return JDBCDataType::LONGNVARCHAR;
          }
          else if (hashCode == LONGVARBINARY_HASH)
          {
            return JDBCDataType::LONGVARBINARY;
          }
          else if (hashCode == LONGVARCHAR_HASH)
          {
            return JDBCDataType::LONGVARCHAR;
          }
          else if (hashCode == NCHAR_HASH)
          {
            return JDBCDataType::NCHAR;
          }
          else if (hashCode == NCLOB_HASH)
          {
            return JDBCDataType::NCLOB;
          }
          else if (hashCode == NULL__HASH)
          {
            return JDBCDataType::NULL_;
          }
          else if (hashCode == NUMERIC_HASH)
          {
            return JDBCDataType::NUMERIC;
          }
          else if (hashCode == NVARCHAR_HASH)
          {
            return JDBCDataType::NVARCHAR;
          }
          else if (hashCode == OTHER_HASH)
          {
            return JDBCDataType::OTHER;
          }
          else if (hashCode == REAL_HASH)
          {
            return JDBCDataType::REAL;
          }
          else if (hashCode == REF_HASH)
          {
            return JDBCDataType::REF;
          }
          else if (hashCode == REF_CURSOR_HASH)
          {
            return JDBCDataType::REF_CURSOR;
          }
          else if (hashCode == ROWID_HASH)
          {
            return JDBCDataType::ROWID;
          }
          else if (hashCode == SMALLINT_HASH)
          {
            return JDBCDataType::SMALLINT;
          }
          else if (hashCode == SQLXML_HASH)
          {
            return JDBCDataType::SQLXML;
          }
          else if (hashCode == STRUCT_HASH)
          {
            return JDBCDataType::STRUCT;
          }
          else if (hashCode == TIME_HASH)
          {
            return JDBCDataType::TIME;
          }
          else if (hashCode == TIME_WITH_TIMEZONE_HASH)
          {
            return JDBCDataType::TIME_WITH_TIMEZONE;
          }
          else if (hashCode == TIMESTAMP_HASH)
          {
            return JDBCDataType::TIMESTAMP;
          }
          else if (hashCode == TIMESTAMP_WITH_TIMEZONE_HASH)
          {
            return JDBCDataType::TIMESTAMP_WITH_TIMEZONE;
          }
          else if (hashCode == TINYINT_HASH)
          {
            return JDBCDataType::TINYINT;
          }
          else if (hashCode == VARBINARY_HASH)
          {
            return JDBCDataType::VARBINARY;
          }
          else if (hashCode == VARCHAR_HASH)
          {
            return JDBCDataType::VARCHAR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JDBCDataType>(hashCode);
          }

          return JDBCDataType::NOT_SET;
        }

        Aws::String GetNameForJDBCDataType(JDBCDataType enumValue)
        {
          switch(enumValue)
          {
          case JDBCDataType::NOT_SET:
            return {};
          case JDBCDataType::ARRAY:
            return "ARRAY";
          case JDBCDataType::BIGINT:
            return "BIGINT";
          case JDBCDataType::BINARY:
            return "BINARY";
          case JDBCDataType::BIT:
            return "BIT";
          case JDBCDataType::BLOB:
            return "BLOB";
          case JDBCDataType::BOOLEAN:
            return "BOOLEAN";
          case JDBCDataType::CHAR_:
            return "CHAR";
          case JDBCDataType::CLOB:
            return "CLOB";
          case JDBCDataType::DATALINK:
            return "DATALINK";
          case JDBCDataType::DATE:
            return "DATE";
          case JDBCDataType::DECIMAL:
            return "DECIMAL";
          case JDBCDataType::DISTINCT:
            return "DISTINCT";
          case JDBCDataType::DOUBLE:
            return "DOUBLE";
          case JDBCDataType::FLOAT:
            return "FLOAT";
          case JDBCDataType::INTEGER:
            return "INTEGER";
          case JDBCDataType::JAVA_OBJECT:
            return "JAVA_OBJECT";
          case JDBCDataType::LONGNVARCHAR:
            return "LONGNVARCHAR";
          case JDBCDataType::LONGVARBINARY:
            return "LONGVARBINARY";
          case JDBCDataType::LONGVARCHAR:
            return "LONGVARCHAR";
          case JDBCDataType::NCHAR:
            return "NCHAR";
          case JDBCDataType::NCLOB:
            return "NCLOB";
          case JDBCDataType::NULL_:
            return "NULL";
          case JDBCDataType::NUMERIC:
            return "NUMERIC";
          case JDBCDataType::NVARCHAR:
            return "NVARCHAR";
          case JDBCDataType::OTHER:
            return "OTHER";
          case JDBCDataType::REAL:
            return "REAL";
          case JDBCDataType::REF:
            return "REF";
          case JDBCDataType::REF_CURSOR:
            return "REF_CURSOR";
          case JDBCDataType::ROWID:
            return "ROWID";
          case JDBCDataType::SMALLINT:
            return "SMALLINT";
          case JDBCDataType::SQLXML:
            return "SQLXML";
          case JDBCDataType::STRUCT:
            return "STRUCT";
          case JDBCDataType::TIME:
            return "TIME";
          case JDBCDataType::TIME_WITH_TIMEZONE:
            return "TIME_WITH_TIMEZONE";
          case JDBCDataType::TIMESTAMP:
            return "TIMESTAMP";
          case JDBCDataType::TIMESTAMP_WITH_TIMEZONE:
            return "TIMESTAMP_WITH_TIMEZONE";
          case JDBCDataType::TINYINT:
            return "TINYINT";
          case JDBCDataType::VARBINARY:
            return "VARBINARY";
          case JDBCDataType::VARCHAR:
            return "VARCHAR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JDBCDataTypeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
