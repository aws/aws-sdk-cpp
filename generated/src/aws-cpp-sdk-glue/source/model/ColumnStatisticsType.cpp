/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ColumnStatisticsType.h>
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
      namespace ColumnStatisticsTypeMapper
      {

        static const int BOOLEAN_HASH = HashingUtils::HashString("BOOLEAN");
        static const int DATE_HASH = HashingUtils::HashString("DATE");
        static const int DECIMAL_HASH = HashingUtils::HashString("DECIMAL");
        static const int DOUBLE_HASH = HashingUtils::HashString("DOUBLE");
        static const int LONG_HASH = HashingUtils::HashString("LONG");
        static const int STRING_HASH = HashingUtils::HashString("STRING");
        static const int BINARY_HASH = HashingUtils::HashString("BINARY");


        ColumnStatisticsType GetColumnStatisticsTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BOOLEAN_HASH)
          {
            return ColumnStatisticsType::BOOLEAN;
          }
          else if (hashCode == DATE_HASH)
          {
            return ColumnStatisticsType::DATE;
          }
          else if (hashCode == DECIMAL_HASH)
          {
            return ColumnStatisticsType::DECIMAL;
          }
          else if (hashCode == DOUBLE_HASH)
          {
            return ColumnStatisticsType::DOUBLE;
          }
          else if (hashCode == LONG_HASH)
          {
            return ColumnStatisticsType::LONG;
          }
          else if (hashCode == STRING_HASH)
          {
            return ColumnStatisticsType::STRING;
          }
          else if (hashCode == BINARY_HASH)
          {
            return ColumnStatisticsType::BINARY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ColumnStatisticsType>(hashCode);
          }

          return ColumnStatisticsType::NOT_SET;
        }

        Aws::String GetNameForColumnStatisticsType(ColumnStatisticsType enumValue)
        {
          switch(enumValue)
          {
          case ColumnStatisticsType::BOOLEAN:
            return "BOOLEAN";
          case ColumnStatisticsType::DATE:
            return "DATE";
          case ColumnStatisticsType::DECIMAL:
            return "DECIMAL";
          case ColumnStatisticsType::DOUBLE:
            return "DOUBLE";
          case ColumnStatisticsType::LONG:
            return "LONG";
          case ColumnStatisticsType::STRING:
            return "STRING";
          case ColumnStatisticsType::BINARY:
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

      } // namespace ColumnStatisticsTypeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
