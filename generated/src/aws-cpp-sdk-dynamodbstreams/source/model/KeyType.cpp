/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodbstreams/model/KeyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DynamoDBStreams
  {
    namespace Model
    {
      namespace KeyTypeMapper
      {

        static constexpr uint32_t HASH_HASH = ConstExprHashingUtils::HashString("HASH");
        static constexpr uint32_t RANGE_HASH = ConstExprHashingUtils::HashString("RANGE");


        KeyType GetKeyTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case KeyType::NOT_SET:
            return {};
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
  } // namespace DynamoDBStreams
} // namespace Aws
