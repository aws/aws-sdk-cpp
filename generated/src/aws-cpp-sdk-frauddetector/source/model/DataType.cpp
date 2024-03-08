/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/DataType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FraudDetector
  {
    namespace Model
    {
      namespace DataTypeMapper
      {

        static const int STRING_HASH = HashingUtils::HashString("STRING");
        static const int INTEGER_HASH = HashingUtils::HashString("INTEGER");
        static const int FLOAT_HASH = HashingUtils::HashString("FLOAT");
        static const int BOOLEAN_HASH = HashingUtils::HashString("BOOLEAN");
        static const int DATETIME_HASH = HashingUtils::HashString("DATETIME");


        DataType GetDataTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STRING_HASH)
          {
            return DataType::STRING;
          }
          else if (hashCode == INTEGER_HASH)
          {
            return DataType::INTEGER;
          }
          else if (hashCode == FLOAT_HASH)
          {
            return DataType::FLOAT;
          }
          else if (hashCode == BOOLEAN_HASH)
          {
            return DataType::BOOLEAN;
          }
          else if (hashCode == DATETIME_HASH)
          {
            return DataType::DATETIME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataType>(hashCode);
          }

          return DataType::NOT_SET;
        }

        Aws::String GetNameForDataType(DataType enumValue)
        {
          switch(enumValue)
          {
          case DataType::NOT_SET:
            return {};
          case DataType::STRING:
            return "STRING";
          case DataType::INTEGER:
            return "INTEGER";
          case DataType::FLOAT:
            return "FLOAT";
          case DataType::BOOLEAN:
            return "BOOLEAN";
          case DataType::DATETIME:
            return "DATETIME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataTypeMapper
    } // namespace Model
  } // namespace FraudDetector
} // namespace Aws
