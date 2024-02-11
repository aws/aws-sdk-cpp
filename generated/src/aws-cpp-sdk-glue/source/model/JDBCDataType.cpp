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

        static const int ARRAY_HASH = HashingUtils::HashString("ARRAY");
        static const int BIGINT_HASH = HashingUtils::HashString("BIGINT");
        static const int BINARY_HASH = HashingUtils::HashString("BINARY");
        static const int BIT_HASH = HashingUtils::HashString("BIT");
        static const int BLOB_HASH = HashingUtils::HashString("BLOB");
        static const int BOOLEAN_HASH = HashingUtils::HashString("BOOLEAN");
        static const int CHAR__HASH = HashingUtils::HashString("CHAR");
        static const int CLOB_HASH = HashingUtils::HashString("CLOB");
        static const int DATALINK_HASH = HashingUtils::HashString("DATALINK");
        static const int DATE_HASH = HashingUtils::HashString("DATE");
        static const int DECIMAL_HASH = HashingUtils::HashString("DECIMAL");
        static const int DISTINCT_HASH = HashingUtils::HashString("DISTINCT");
        static const int DOUBLE_HASH = HashingUtils::HashString("DOUBLE");
        static const int FLOAT_HASH = HashingUtils::HashString("FLOAT");
        static const int INTEGER_HASH = HashingUtils::HashString("INTEGER");
        static const int JAVA_OBJECT_HASH = HashingUtils::HashString("JAVA_OBJECT");
        static const int LONGNVARCHAR_HASH = HashingUtils::HashString("LONGNVARCHAR");
        static const int LONGVARBINARY_HASH = HashingUtils::HashString("LONGVARBINARY");
        static const int LONGVARCHAR_HASH = HashingUtils::HashString("LONGVARCHAR");
        static const int NCHAR_HASH = HashingUtils::HashString("NCHAR");
        static const int NCLOB_HASH = HashingUtils::HashString("NCLOB");
        static const int NULL__HASH = HashingUtils::HashString("NULL");
        static const int NUMERIC_HASH = HashingUtils::HashString("NUMERIC");
        static const int NVARCHAR_HASH = HashingUtils::HashString("NVARCHAR");
        static const int OTHER_HASH = HashingUtils::HashString("OTHER");
        static const int REAL_HASH = HashingUtils::HashString("REAL");
        static const int REF_HASH = HashingUtils::HashString("REF");
        static const int REF_CURSOR_HASH = HashingUtils::HashString("REF_CURSOR");
        static const int ROWID_HASH = HashingUtils::HashString("ROWID");
        static const int SMALLINT_HASH = HashingUtils::HashString("SMALLINT");
        static const int SQLXML_HASH = HashingUtils::HashString("SQLXML");
        static const int STRUCT_HASH = HashingUtils::HashString("STRUCT");
        static const int TIME_HASH = HashingUtils::HashString("TIME");
        static const int TIME_WITH_TIMEZONE_HASH = HashingUtils::HashString("TIME_WITH_TIMEZONE");
        static const int TIMESTAMP_HASH = HashingUtils::HashString("TIMESTAMP");
        static const int TIMESTAMP_WITH_TIMEZONE_HASH = HashingUtils::HashString("TIMESTAMP_WITH_TIMEZONE");
        static const int TINYINT_HASH = HashingUtils::HashString("TINYINT");
        static const int VARBINARY_HASH = HashingUtils::HashString("VARBINARY");
        static const int VARCHAR_HASH = HashingUtils::HashString("VARCHAR");


        JDBCDataType GetJDBCDataTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
