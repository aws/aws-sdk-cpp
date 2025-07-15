/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodbstreams/model/ShardFilterType.h>
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
      namespace ShardFilterTypeMapper
      {

        static const int CHILD_SHARDS_HASH = HashingUtils::HashString("CHILD_SHARDS");


        ShardFilterType GetShardFilterTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CHILD_SHARDS_HASH)
          {
            return ShardFilterType::CHILD_SHARDS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ShardFilterType>(hashCode);
          }

          return ShardFilterType::NOT_SET;
        }

        Aws::String GetNameForShardFilterType(ShardFilterType enumValue)
        {
          switch(enumValue)
          {
          case ShardFilterType::NOT_SET:
            return {};
          case ShardFilterType::CHILD_SHARDS:
            return "CHILD_SHARDS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ShardFilterTypeMapper
    } // namespace Model
  } // namespace DynamoDBStreams
} // namespace Aws
