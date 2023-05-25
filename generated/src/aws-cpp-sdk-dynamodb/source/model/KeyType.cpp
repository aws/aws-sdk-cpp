/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/KeyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DynamoDB
  {
    namespace Model
    {
      namespace KeyTypeMapper
      {

        static const int HASH_HASH = HashingUtils::HashString("HASH");
        static const int RANGE_HASH = HashingUtils::HashString("RANGE");


        KeyType GetKeyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HASH_HASH)
          {
            return KeyType::HASH;
          }
          else if (hashCode == RANGE_HASH)
          {
            return KeyType::RANGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KeyType>(hashCode);
          }

          return KeyType::NOT_SET;
        }

        Aws::String GetNameForKeyType(KeyType enumValue)
        {
          switch(enumValue)
          {
          case KeyType::HASH:
            return "HASH";
          case KeyType::RANGE:
            return "RANGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KeyTypeMapper
    } // namespace Model
  } // namespace DynamoDB
} // namespace Aws
