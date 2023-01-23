/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

            return {};
          }
        }

      } // namespace DynamoKeyTypeMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
