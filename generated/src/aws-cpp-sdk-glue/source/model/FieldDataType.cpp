/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/FieldDataType.h>
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
      namespace FieldDataTypeMapper
      {

        static const int INT_HASH = HashingUtils::HashString("INT");
        static const int SMALLINT_HASH = HashingUtils::HashString("SMALLINT");
        static const int BIGINT_HASH = HashingUtils::HashString("BIGINT");
        static const int FLOAT_HASH = HashingUtils::HashString("FLOAT");
        static const int LONG_HASH = HashingUtils::HashString("LONG");
        static const int DATE_HASH = HashingUtils::HashString("DATE");
        static const int BOOLEAN_HASH = HashingUtils::HashString("BOOLEAN");
        static const int MAP_HASH = HashingUtils::HashString("MAP");
        static const int ARRAY_HASH = HashingUtils::HashString("ARRAY");
        static const int STRING_HASH = HashingUtils::HashString("STRING");
        static const int TIMESTAMP_HASH = HashingUtils::HashString("TIMESTAMP");
        static const int DECIMAL_HASH = HashingUtils::HashString("DECIMAL");
        static const int BYTE_HASH = HashingUtils::HashString("BYTE");
        static const int SHORT_HASH = HashingUtils::HashString("SHORT");
        static const int DOUBLE_HASH = HashingUtils::HashString("DOUBLE");
        static const int STRUCT_HASH = HashingUtils::HashString("STRUCT");


        FieldDataType GetFieldDataTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INT_HASH)
          {
            return FieldDataType::INT;
          }
          else if (hashCode == SMALLINT_HASH)
          {
            return FieldDataType::SMALLINT;
          }
          else if (hashCode == BIGINT_HASH)
          {
            return FieldDataType::BIGINT;
          }
          else if (hashCode == FLOAT_HASH)
          {
            return FieldDataType::FLOAT;
          }
          else if (hashCode == LONG_HASH)
          {
            return FieldDataType::LONG;
          }
          else if (hashCode == DATE_HASH)
          {
            return FieldDataType::DATE;
          }
          else if (hashCode == BOOLEAN_HASH)
          {
            return FieldDataType::BOOLEAN;
          }
          else if (hashCode == MAP_HASH)
          {
            return FieldDataType::MAP;
          }
          else if (hashCode == ARRAY_HASH)
          {
            return FieldDataType::ARRAY;
          }
          else if (hashCode == STRING_HASH)
          {
            return FieldDataType::STRING;
          }
          else if (hashCode == TIMESTAMP_HASH)
          {
            return FieldDataType::TIMESTAMP;
          }
          else if (hashCode == DECIMAL_HASH)
          {
            return FieldDataType::DECIMAL;
          }
          else if (hashCode == BYTE_HASH)
          {
            return FieldDataType::BYTE;
          }
          else if (hashCode == SHORT_HASH)
          {
            return FieldDataType::SHORT;
          }
          else if (hashCode == DOUBLE_HASH)
          {
            return FieldDataType::DOUBLE;
          }
          else if (hashCode == STRUCT_HASH)
          {
            return FieldDataType::STRUCT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FieldDataType>(hashCode);
          }

          return FieldDataType::NOT_SET;
        }

        Aws::String GetNameForFieldDataType(FieldDataType enumValue)
        {
          switch(enumValue)
          {
          case FieldDataType::NOT_SET:
            return {};
          case FieldDataType::INT:
            return "INT";
          case FieldDataType::SMALLINT:
            return "SMALLINT";
          case FieldDataType::BIGINT:
            return "BIGINT";
          case FieldDataType::FLOAT:
            return "FLOAT";
          case FieldDataType::LONG:
            return "LONG";
          case FieldDataType::DATE:
            return "DATE";
          case FieldDataType::BOOLEAN:
            return "BOOLEAN";
          case FieldDataType::MAP:
            return "MAP";
          case FieldDataType::ARRAY:
            return "ARRAY";
          case FieldDataType::STRING:
            return "STRING";
          case FieldDataType::TIMESTAMP:
            return "TIMESTAMP";
          case FieldDataType::DECIMAL:
            return "DECIMAL";
          case FieldDataType::BYTE:
            return "BYTE";
          case FieldDataType::SHORT:
            return "SHORT";
          case FieldDataType::DOUBLE:
            return "DOUBLE";
          case FieldDataType::STRUCT:
            return "STRUCT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FieldDataTypeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
