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
#include <aws/es/model/ESPartitionInstanceType.h>
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
      namespace ESPartitionInstanceTypeMapper
      {

        static const int m3_medium_elasticsearch_HASH = HashingUtils::HashString("m3.medium.elasticsearch");
        static const int m3_large_elasticsearch_HASH = HashingUtils::HashString("m3.large.elasticsearch");
        static const int m3_xlarge_elasticsearch_HASH = HashingUtils::HashString("m3.xlarge.elasticsearch");
        static const int m3_2xlarge_elasticsearch_HASH = HashingUtils::HashString("m3.2xlarge.elasticsearch");
        static const int m4_large_elasticsearch_HASH = HashingUtils::HashString("m4.large.elasticsearch");
        static const int m4_xlarge_elasticsearch_HASH = HashingUtils::HashString("m4.xlarge.elasticsearch");
        static const int m4_2xlarge_elasticsearch_HASH = HashingUtils::HashString("m4.2xlarge.elasticsearch");
        static const int m4_4xlarge_elasticsearch_HASH = HashingUtils::HashString("m4.4xlarge.elasticsearch");
        static const int m4_10xlarge_elasticsearch_HASH = HashingUtils::HashString("m4.10xlarge.elasticsearch");
        static const int t2_micro_elasticsearch_HASH = HashingUtils::HashString("t2.micro.elasticsearch");
        static const int t2_small_elasticsearch_HASH = HashingUtils::HashString("t2.small.elasticsearch");
        static const int t2_medium_elasticsearch_HASH = HashingUtils::HashString("t2.medium.elasticsearch");
        static const int r3_large_elasticsearch_HASH = HashingUtils::HashString("r3.large.elasticsearch");
        static const int r3_xlarge_elasticsearch_HASH = HashingUtils::HashString("r3.xlarge.elasticsearch");
        static const int r3_2xlarge_elasticsearch_HASH = HashingUtils::HashString("r3.2xlarge.elasticsearch");
        static const int r3_4xlarge_elasticsearch_HASH = HashingUtils::HashString("r3.4xlarge.elasticsearch");
        static const int r3_8xlarge_elasticsearch_HASH = HashingUtils::HashString("r3.8xlarge.elasticsearch");
        static const int i2_xlarge_elasticsearch_HASH = HashingUtils::HashString("i2.xlarge.elasticsearch");
        static const int i2_2xlarge_elasticsearch_HASH = HashingUtils::HashString("i2.2xlarge.elasticsearch");


        ESPartitionInstanceType GetESPartitionInstanceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == m3_medium_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::m3_medium_elasticsearch;
          }
          else if (hashCode == m3_large_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::m3_large_elasticsearch;
          }
          else if (hashCode == m3_xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::m3_xlarge_elasticsearch;
          }
          else if (hashCode == m3_2xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::m3_2xlarge_elasticsearch;
          }
          else if (hashCode == m4_large_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::m4_large_elasticsearch;
          }
          else if (hashCode == m4_xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::m4_xlarge_elasticsearch;
          }
          else if (hashCode == m4_2xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::m4_2xlarge_elasticsearch;
          }
          else if (hashCode == m4_4xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::m4_4xlarge_elasticsearch;
          }
          else if (hashCode == m4_10xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::m4_10xlarge_elasticsearch;
          }
          else if (hashCode == t2_micro_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::t2_micro_elasticsearch;
          }
          else if (hashCode == t2_small_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::t2_small_elasticsearch;
          }
          else if (hashCode == t2_medium_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::t2_medium_elasticsearch;
          }
          else if (hashCode == r3_large_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::r3_large_elasticsearch;
          }
          else if (hashCode == r3_xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::r3_xlarge_elasticsearch;
          }
          else if (hashCode == r3_2xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::r3_2xlarge_elasticsearch;
          }
          else if (hashCode == r3_4xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::r3_4xlarge_elasticsearch;
          }
          else if (hashCode == r3_8xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::r3_8xlarge_elasticsearch;
          }
          else if (hashCode == i2_xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::i2_xlarge_elasticsearch;
          }
          else if (hashCode == i2_2xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::i2_2xlarge_elasticsearch;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ESPartitionInstanceType>(hashCode);
          }

          return ESPartitionInstanceType::NOT_SET;
        }

        Aws::String GetNameForESPartitionInstanceType(ESPartitionInstanceType enumValue)
        {
          switch(enumValue)
          {
          case ESPartitionInstanceType::m3_medium_elasticsearch:
            return "m3.medium.elasticsearch";
          case ESPartitionInstanceType::m3_large_elasticsearch:
            return "m3.large.elasticsearch";
          case ESPartitionInstanceType::m3_xlarge_elasticsearch:
            return "m3.xlarge.elasticsearch";
          case ESPartitionInstanceType::m3_2xlarge_elasticsearch:
            return "m3.2xlarge.elasticsearch";
          case ESPartitionInstanceType::m4_large_elasticsearch:
            return "m4.large.elasticsearch";
          case ESPartitionInstanceType::m4_xlarge_elasticsearch:
            return "m4.xlarge.elasticsearch";
          case ESPartitionInstanceType::m4_2xlarge_elasticsearch:
            return "m4.2xlarge.elasticsearch";
          case ESPartitionInstanceType::m4_4xlarge_elasticsearch:
            return "m4.4xlarge.elasticsearch";
          case ESPartitionInstanceType::m4_10xlarge_elasticsearch:
            return "m4.10xlarge.elasticsearch";
          case ESPartitionInstanceType::t2_micro_elasticsearch:
            return "t2.micro.elasticsearch";
          case ESPartitionInstanceType::t2_small_elasticsearch:
            return "t2.small.elasticsearch";
          case ESPartitionInstanceType::t2_medium_elasticsearch:
            return "t2.medium.elasticsearch";
          case ESPartitionInstanceType::r3_large_elasticsearch:
            return "r3.large.elasticsearch";
          case ESPartitionInstanceType::r3_xlarge_elasticsearch:
            return "r3.xlarge.elasticsearch";
          case ESPartitionInstanceType::r3_2xlarge_elasticsearch:
            return "r3.2xlarge.elasticsearch";
          case ESPartitionInstanceType::r3_4xlarge_elasticsearch:
            return "r3.4xlarge.elasticsearch";
          case ESPartitionInstanceType::r3_8xlarge_elasticsearch:
            return "r3.8xlarge.elasticsearch";
          case ESPartitionInstanceType::i2_xlarge_elasticsearch:
            return "i2.xlarge.elasticsearch";
          case ESPartitionInstanceType::i2_2xlarge_elasticsearch:
            return "i2.2xlarge.elasticsearch";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ESPartitionInstanceTypeMapper
    } // namespace Model
  } // namespace ElasticsearchService
} // namespace Aws
