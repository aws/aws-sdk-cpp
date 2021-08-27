/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-query/model/ScalarType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TimestreamQuery
  {
    namespace Model
    {
      namespace ScalarTypeMapper
      {

        static const int VARCHAR_HASH = HashingUtils::HashString("VARCHAR");
        static const int BOOLEAN_HASH = HashingUtils::HashString("BOOLEAN");
        static const int BIGINT_HASH = HashingUtils::HashString("BIGINT");
        static const int DOUBLE_HASH = HashingUtils::HashString("DOUBLE");
        static const int TIMESTAMP_HASH = HashingUtils::HashString("TIMESTAMP");
        static const int DATE_HASH = HashingUtils::HashString("DATE");
        static const int TIME_HASH = HashingUtils::HashString("TIME");
        static const int INTERVAL_DAY_TO_SECOND_HASH = HashingUtils::HashString("INTERVAL_DAY_TO_SECOND");
        static const int INTERVAL_YEAR_TO_MONTH_HASH = HashingUtils::HashString("INTERVAL_YEAR_TO_MONTH");
        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");
        static const int INTEGER_HASH = HashingUtils::HashString("INTEGER");


        ScalarType GetScalarTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VARCHAR_HASH)
          {
            return ScalarType::VARCHAR;
          }
          else if (hashCode == BOOLEAN_HASH)
          {
            return ScalarType::BOOLEAN;
          }
          else if (hashCode == BIGINT_HASH)
          {
            return ScalarType::BIGINT;
          }
          else if (hashCode == DOUBLE_HASH)
          {
            return ScalarType::DOUBLE;
          }
          else if (hashCode == TIMESTAMP_HASH)
          {
            return ScalarType::TIMESTAMP;
          }
          else if (hashCode == DATE_HASH)
          {
            return ScalarType::DATE;
          }
          else if (hashCode == TIME_HASH)
          {
            return ScalarType::TIME;
          }
          else if (hashCode == INTERVAL_DAY_TO_SECOND_HASH)
          {
            return ScalarType::INTERVAL_DAY_TO_SECOND;
          }
          else if (hashCode == INTERVAL_YEAR_TO_MONTH_HASH)
          {
            return ScalarType::INTERVAL_YEAR_TO_MONTH;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return ScalarType::UNKNOWN;
          }
          else if (hashCode == INTEGER_HASH)
          {
            return ScalarType::INTEGER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScalarType>(hashCode);
          }

          return ScalarType::NOT_SET;
        }

        Aws::String GetNameForScalarType(ScalarType enumValue)
        {
          switch(enumValue)
          {
          case ScalarType::VARCHAR:
            return "VARCHAR";
          case ScalarType::BOOLEAN:
            return "BOOLEAN";
          case ScalarType::BIGINT:
            return "BIGINT";
          case ScalarType::DOUBLE:
            return "DOUBLE";
          case ScalarType::TIMESTAMP:
            return "TIMESTAMP";
          case ScalarType::DATE:
            return "DATE";
          case ScalarType::TIME:
            return "TIME";
          case ScalarType::INTERVAL_DAY_TO_SECOND:
            return "INTERVAL_DAY_TO_SECOND";
          case ScalarType::INTERVAL_YEAR_TO_MONTH:
            return "INTERVAL_YEAR_TO_MONTH";
          case ScalarType::UNKNOWN:
            return "UNKNOWN";
          case ScalarType::INTEGER:
            return "INTEGER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScalarTypeMapper
    } // namespace Model
  } // namespace TimestreamQuery
} // namespace Aws
