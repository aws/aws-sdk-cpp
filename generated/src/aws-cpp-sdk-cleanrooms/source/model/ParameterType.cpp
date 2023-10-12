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

        static constexpr uint32_t SMALLINT_HASH = ConstExprHashingUtils::HashString("SMALLINT");
        static constexpr uint32_t INTEGER_HASH = ConstExprHashingUtils::HashString("INTEGER");
        static constexpr uint32_t BIGINT_HASH = ConstExprHashingUtils::HashString("BIGINT");
        static constexpr uint32_t DECIMAL_HASH = ConstExprHashingUtils::HashString("DECIMAL");
        static constexpr uint32_t REAL_HASH = ConstExprHashingUtils::HashString("REAL");
        static constexpr uint32_t DOUBLE_PRECISION_HASH = ConstExprHashingUtils::HashString("DOUBLE_PRECISION");
        static constexpr uint32_t BOOLEAN_HASH = ConstExprHashingUtils::HashString("BOOLEAN");
        static constexpr uint32_t CHAR__HASH = ConstExprHashingUtils::HashString("CHAR");
        static constexpr uint32_t VARCHAR_HASH = ConstExprHashingUtils::HashString("VARCHAR");
        static constexpr uint32_t DATE_HASH = ConstExprHashingUtils::HashString("DATE");
        static constexpr uint32_t TIMESTAMP_HASH = ConstExprHashingUtils::HashString("TIMESTAMP");
        static constexpr uint32_t TIMESTAMPTZ_HASH = ConstExprHashingUtils::HashString("TIMESTAMPTZ");
        static constexpr uint32_t TIME_HASH = ConstExprHashingUtils::HashString("TIME");
        static constexpr uint32_t TIMETZ_HASH = ConstExprHashingUtils::HashString("TIMETZ");
        static constexpr uint32_t VARBYTE_HASH = ConstExprHashingUtils::HashString("VARBYTE");


        ParameterType GetParameterTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
