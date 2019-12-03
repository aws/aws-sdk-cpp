/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
          case DataType::STRING:
            return "STRING";
          case DataType::INTEGER:
            return "INTEGER";
          case DataType::FLOAT:
            return "FLOAT";
          case DataType::BOOLEAN:
            return "BOOLEAN";
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
