/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis/model/ShardFilterType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Kinesis
  {
    namespace Model
    {
      namespace ShardFilterTypeMapper
      {

        static constexpr uint32_t AFTER_SHARD_ID_HASH = ConstExprHashingUtils::HashString("AFTER_SHARD_ID");
        static constexpr uint32_t AT_TRIM_HORIZON_HASH = ConstExprHashingUtils::HashString("AT_TRIM_HORIZON");
        static constexpr uint32_t FROM_TRIM_HORIZON_HASH = ConstExprHashingUtils::HashString("FROM_TRIM_HORIZON");
        static constexpr uint32_t AT_LATEST_HASH = ConstExprHashingUtils::HashString("AT_LATEST");
        static constexpr uint32_t AT_TIMESTAMP_HASH = ConstExprHashingUtils::HashString("AT_TIMESTAMP");
        static constexpr uint32_t FROM_TIMESTAMP_HASH = ConstExprHashingUtils::HashString("FROM_TIMESTAMP");


        ShardFilterType GetShardFilterTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AFTER_SHARD_ID_HASH)
          {
            return ShardFilterType::AFTER_SHARD_ID;
          }
          else if (hashCode == AT_TRIM_HORIZON_HASH)
          {
            return ShardFilterType::AT_TRIM_HORIZON;
          }
          else if (hashCode == FROM_TRIM_HORIZON_HASH)
          {
            return ShardFilterType::FROM_TRIM_HORIZON;
          }
          else if (hashCode == AT_LATEST_HASH)
          {
            return ShardFilterType::AT_LATEST;
          }
          else if (hashCode == AT_TIMESTAMP_HASH)
          {
            return ShardFilterType::AT_TIMESTAMP;
          }
          else if (hashCode == FROM_TIMESTAMP_HASH)
          {
            return ShardFilterType::FROM_TIMESTAMP;
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
          case ShardFilterType::AFTER_SHARD_ID:
            return "AFTER_SHARD_ID";
          case ShardFilterType::AT_TRIM_HORIZON:
            return "AT_TRIM_HORIZON";
          case ShardFilterType::FROM_TRIM_HORIZON:
            return "FROM_TRIM_HORIZON";
          case ShardFilterType::AT_LATEST:
            return "AT_LATEST";
          case ShardFilterType::AT_TIMESTAMP:
            return "AT_TIMESTAMP";
          case ShardFilterType::FROM_TIMESTAMP:
            return "FROM_TIMESTAMP";
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
  } // namespace Kinesis
} // namespace Aws
