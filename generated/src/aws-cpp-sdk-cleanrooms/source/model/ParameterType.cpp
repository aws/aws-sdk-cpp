/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ParameterType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRooms
  {
    namespace Model
    {
      namespace ParameterTypeMapper
      {

        static const int SMALLINT_HASH = HashingUtils::HashString("SMALLINT");
        static const int INTEGER_HASH = HashingUtils::HashString("INTEGER");
        static const int BIGINT_HASH = HashingUtils::HashString("BIGINT");
        static const int DECIMAL_HASH = HashingUtils::HashString("DECIMAL");
        static const int REAL_HASH = HashingUtils::HashString("REAL");
        static const int DOUBLE_PRECISION_HASH = HashingUtils::HashString("DOUBLE_PRECISION");
        static const int BOOLEAN_HASH = HashingUtils::HashString("BOOLEAN");
        static const int CHAR__HASH = HashingUtils::HashString("CHAR");
        static const int VARCHAR_HASH = HashingUtils::HashString("VARCHAR");
        static const int DATE_HASH = HashingUtils::HashString("DATE");
        static const int TIMESTAMP_HASH = HashingUtils::HashString("TIMESTAMP");
        static const int TIMESTAMPTZ_HASH = HashingUtils::HashString("TIMESTAMPTZ");
        static const int TIME_HASH = HashingUtils::HashString("TIME");
        static const int TIMETZ_HASH = HashingUtils::HashString("TIMETZ");
        static const int VARBYTE_HASH = HashingUtils::HashString("VARBYTE");


        ParameterType GetParameterTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SMALLINT_HASH)
          {
            return ParameterType::SMALLINT;
          }
          else if (hashCode == INTEGER_HASH)
          {
            return ParameterType::INTEGER;
          }
          else if (hashCode == BIGINT_HASH)
          {
            return ParameterType::BIGINT;
          }
          else if (hashCode == DECIMAL_HASH)
          {
            return ParameterType::DECIMAL;
          }
          else if (hashCode == REAL_HASH)
          {
            return ParameterType::REAL;
          }
          else if (hashCode == DOUBLE_PRECISION_HASH)
          {
            return ParameterType::DOUBLE_PRECISION;
          }
          else if (hashCode == BOOLEAN_HASH)
          {
            return ParameterType::BOOLEAN;
          }
          else if (hashCode == CHAR__HASH)
          {
            return ParameterType::CHAR_;
          }
          else if (hashCode == VARCHAR_HASH)
          {
            return ParameterType::VARCHAR;
          }
          else if (hashCode == DATE_HASH)
          {
            return ParameterType::DATE;
          }
          else if (hashCode == TIMESTAMP_HASH)
          {
            return ParameterType::TIMESTAMP;
          }
          else if (hashCode == TIMESTAMPTZ_HASH)
          {
            return ParameterType::TIMESTAMPTZ;
          }
          else if (hashCode == TIME_HASH)
          {
            return ParameterType::TIME;
          }
          else if (hashCode == TIMETZ_HASH)
          {
            return ParameterType::TIMETZ;
          }
          else if (hashCode == VARBYTE_HASH)
          {
            return ParameterType::VARBYTE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParameterType>(hashCode);
          }

          return ParameterType::NOT_SET;
        }

        Aws::String GetNameForParameterType(ParameterType enumValue)
        {
          switch(enumValue)
          {
          case ParameterType::NOT_SET:
            return {};
          case ParameterType::SMALLINT:
            return "SMALLINT";
          case ParameterType::INTEGER:
            return "INTEGER";
          case ParameterType::BIGINT:
            return "BIGINT";
          case ParameterType::DECIMAL:
            return "DECIMAL";
          case ParameterType::REAL:
            return "REAL";
          case ParameterType::DOUBLE_PRECISION:
            return "DOUBLE_PRECISION";
          case ParameterType::BOOLEAN:
            return "BOOLEAN";
          case ParameterType::CHAR_:
            return "CHAR";
          case ParameterType::VARCHAR:
            return "VARCHAR";
          case ParameterType::DATE:
            return "DATE";
          case ParameterType::TIMESTAMP:
            return "TIMESTAMP";
          case ParameterType::TIMESTAMPTZ:
            return "TIMESTAMPTZ";
          case ParameterType::TIME:
            return "TIME";
          case ParameterType::TIMETZ:
            return "TIMETZ";
          case ParameterType::VARBYTE:
            return "VARBYTE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ParameterTypeMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
