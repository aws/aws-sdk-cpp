/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iot/model/DynamoKeyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace DynamoKeyTypeMapper
      {

        static const int STRING_HASH = HashingUtils::HashString("STRING");
        static const int NUMBER_HASH = HashingUtils::HashString("NUMBER");


        DynamoKeyType GetDynamoKeyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STRING_HASH)
          {
            return DynamoKeyType::STRING;
          }
          else if (hashCode == NUMBER_HASH)
          {
            return DynamoKeyType::NUMBER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DynamoKeyType>(hashCode);
          }

          return DynamoKeyType::NOT_SET;
        }

        Aws::String GetNameForDynamoKeyType(DynamoKeyType enumValue)
        {
          switch(enumValue)
          {
          case DynamoKeyType::STRING:
            return "STRING";
          case DynamoKeyType::NUMBER:
            return "NUMBER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace DynamoKeyTypeMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
