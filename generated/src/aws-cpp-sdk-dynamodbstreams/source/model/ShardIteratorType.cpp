/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodbstreams/model/ShardIteratorType.h>
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
      namespace ShardIteratorTypeMapper
      {

        static constexpr uint32_t TRIM_HORIZON_HASH = ConstExprHashingUtils::HashString("TRIM_HORIZON");
        static constexpr uint32_t LATEST_HASH = ConstExprHashingUtils::HashString("LATEST");
        static constexpr uint32_t AT_SEQUENCE_NUMBER_HASH = ConstExprHashingUtils::HashString("AT_SEQUENCE_NUMBER");
        static constexpr uint32_t AFTER_SEQUENCE_NUMBER_HASH = ConstExprHashingUtils::HashString("AFTER_SEQUENCE_NUMBER");


        ShardIteratorType GetShardIteratorTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRIM_HORIZON_HASH)
          {
            return ShardIteratorType::TRIM_HORIZON;
          }
          else if (hashCode == LATEST_HASH)
          {
            return ShardIteratorType::LATEST;
          }
          else if (hashCode == AT_SEQUENCE_NUMBER_HASH)
          {
            return ShardIteratorType::AT_SEQUENCE_NUMBER;
          }
          else if (hashCode == AFTER_SEQUENCE_NUMBER_HASH)
          {
            return ShardIteratorType::AFTER_SEQUENCE_NUMBER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ShardIteratorType>(hashCode);
          }

          return ShardIteratorType::NOT_SET;
        }

        Aws::String GetNameForShardIteratorType(ShardIteratorType enumValue)
        {
          switch(enumValue)
          {
          case ShardIteratorType::NOT_SET:
            return {};
          case ShardIteratorType::TRIM_HORIZON:
            return "TRIM_HORIZON";
          case ShardIteratorType::LATEST:
            return "LATEST";
          case ShardIteratorType::AT_SEQUENCE_NUMBER:
            return "AT_SEQUENCE_NUMBER";
          case ShardIteratorType::AFTER_SEQUENCE_NUMBER:
            return "AFTER_SEQUENCE_NUMBER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ShardIteratorTypeMapper
    } // namespace Model
  } // namespace DynamoDBStreams
} // namespace Aws
