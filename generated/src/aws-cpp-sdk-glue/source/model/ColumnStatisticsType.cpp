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

        static constexpr uint32_t BOOLEAN_HASH = ConstExprHashingUtils::HashString("BOOLEAN");
        static constexpr uint32_t DATE_HASH = ConstExprHashingUtils::HashString("DATE");
        static constexpr uint32_t DECIMAL_HASH = ConstExprHashingUtils::HashString("DECIMAL");
        static constexpr uint32_t DOUBLE_HASH = ConstExprHashingUtils::HashString("DOUBLE");
        static constexpr uint32_t LONG_HASH = ConstExprHashingUtils::HashString("LONG");
        static constexpr uint32_t STRING_HASH = ConstExprHashingUtils::HashString("STRING");
        static constexpr uint32_t BINARY_HASH = ConstExprHashingUtils::HashString("BINARY");


        ColumnStatisticsType GetColumnStatisticsTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case ColumnStatisticsType::NOT_SET:
            return {};
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
