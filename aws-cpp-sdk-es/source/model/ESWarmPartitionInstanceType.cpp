/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/ESWarmPartitionInstanceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticsearchService
  {
    namespace Model
    {
      namespace ESWarmPartitionInstanceTypeMapper
      {

        static const int ultrawarm1_medium_elasticsearch_HASH = HashingUtils::HashString("ultrawarm1.medium.elasticsearch");
        static const int ultrawarm1_large_elasticsearch_HASH = HashingUtils::HashString("ultrawarm1.large.elasticsearch");


        ESWarmPartitionInstanceType GetESWarmPartitionInstanceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ultrawarm1_medium_elasticsearch_HASH)
          {
            return ESWarmPartitionInstanceType::ultrawarm1_medium_elasticsearch;
          }
          else if (hashCode == ultrawarm1_large_elasticsearch_HASH)
          {
            return ESWarmPartitionInstanceType::ultrawarm1_large_elasticsearch;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ESWarmPartitionInstanceType>(hashCode);
          }

          return ESWarmPartitionInstanceType::NOT_SET;
        }

        Aws::String GetNameForESWarmPartitionInstanceType(ESWarmPartitionInstanceType enumValue)
        {
          switch(enumValue)
          {
          case ESWarmPartitionInstanceType::ultrawarm1_medium_elasticsearch:
            return "ultrawarm1.medium.elasticsearch";
          case ESWarmPartitionInstanceType::ultrawarm1_large_elasticsearch:
            return "ultrawarm1.large.elasticsearch";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ESWarmPartitionInstanceTypeMapper
    } // namespace Model
  } // namespace ElasticsearchService
} // namespace Aws
