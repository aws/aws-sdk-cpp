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
        static const int m5_large_elasticsearch_HASH = HashingUtils::HashString("m5.large.elasticsearch");
        static const int m5_xlarge_elasticsearch_HASH = HashingUtils::HashString("m5.xlarge.elasticsearch");
        static const int m5_2xlarge_elasticsearch_HASH = HashingUtils::HashString("m5.2xlarge.elasticsearch");
        static const int m5_4xlarge_elasticsearch_HASH = HashingUtils::HashString("m5.4xlarge.elasticsearch");
        static const int m5_12xlarge_elasticsearch_HASH = HashingUtils::HashString("m5.12xlarge.elasticsearch");
        static const int r5_large_elasticsearch_HASH = HashingUtils::HashString("r5.large.elasticsearch");
        static const int r5_xlarge_elasticsearch_HASH = HashingUtils::HashString("r5.xlarge.elasticsearch");
        static const int r5_2xlarge_elasticsearch_HASH = HashingUtils::HashString("r5.2xlarge.elasticsearch");
        static const int r5_4xlarge_elasticsearch_HASH = HashingUtils::HashString("r5.4xlarge.elasticsearch");
        static const int r5_12xlarge_elasticsearch_HASH = HashingUtils::HashString("r5.12xlarge.elasticsearch");
        static const int c5_large_elasticsearch_HASH = HashingUtils::HashString("c5.large.elasticsearch");
        static const int c5_xlarge_elasticsearch_HASH = HashingUtils::HashString("c5.xlarge.elasticsearch");
        static const int c5_2xlarge_elasticsearch_HASH = HashingUtils::HashString("c5.2xlarge.elasticsearch");
        static const int c5_4xlarge_elasticsearch_HASH = HashingUtils::HashString("c5.4xlarge.elasticsearch");
        static const int c5_9xlarge_elasticsearch_HASH = HashingUtils::HashString("c5.9xlarge.elasticsearch");
        static const int c5_18xlarge_elasticsearch_HASH = HashingUtils::HashString("c5.18xlarge.elasticsearch");
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
        static const int d2_xlarge_elasticsearch_HASH = HashingUtils::HashString("d2.xlarge.elasticsearch");
        static const int d2_2xlarge_elasticsearch_HASH = HashingUtils::HashString("d2.2xlarge.elasticsearch");
        static const int d2_4xlarge_elasticsearch_HASH = HashingUtils::HashString("d2.4xlarge.elasticsearch");
        static const int d2_8xlarge_elasticsearch_HASH = HashingUtils::HashString("d2.8xlarge.elasticsearch");
        static const int c4_large_elasticsearch_HASH = HashingUtils::HashString("c4.large.elasticsearch");
        static const int c4_xlarge_elasticsearch_HASH = HashingUtils::HashString("c4.xlarge.elasticsearch");
        static const int c4_2xlarge_elasticsearch_HASH = HashingUtils::HashString("c4.2xlarge.elasticsearch");
        static const int c4_4xlarge_elasticsearch_HASH = HashingUtils::HashString("c4.4xlarge.elasticsearch");
        static const int c4_8xlarge_elasticsearch_HASH = HashingUtils::HashString("c4.8xlarge.elasticsearch");
        static const int r4_large_elasticsearch_HASH = HashingUtils::HashString("r4.large.elasticsearch");
        static const int r4_xlarge_elasticsearch_HASH = HashingUtils::HashString("r4.xlarge.elasticsearch");
        static const int r4_2xlarge_elasticsearch_HASH = HashingUtils::HashString("r4.2xlarge.elasticsearch");
        static const int r4_4xlarge_elasticsearch_HASH = HashingUtils::HashString("r4.4xlarge.elasticsearch");
        static const int r4_8xlarge_elasticsearch_HASH = HashingUtils::HashString("r4.8xlarge.elasticsearch");
        static const int r4_16xlarge_elasticsearch_HASH = HashingUtils::HashString("r4.16xlarge.elasticsearch");
        static const int i3_large_elasticsearch_HASH = HashingUtils::HashString("i3.large.elasticsearch");
        static const int i3_xlarge_elasticsearch_HASH = HashingUtils::HashString("i3.xlarge.elasticsearch");
        static const int i3_2xlarge_elasticsearch_HASH = HashingUtils::HashString("i3.2xlarge.elasticsearch");
        static const int i3_4xlarge_elasticsearch_HASH = HashingUtils::HashString("i3.4xlarge.elasticsearch");
        static const int i3_8xlarge_elasticsearch_HASH = HashingUtils::HashString("i3.8xlarge.elasticsearch");
        static const int i3_16xlarge_elasticsearch_HASH = HashingUtils::HashString("i3.16xlarge.elasticsearch");


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
          else if (hashCode == m5_large_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::m5_large_elasticsearch;
          }
          else if (hashCode == m5_xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::m5_xlarge_elasticsearch;
          }
          else if (hashCode == m5_2xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::m5_2xlarge_elasticsearch;
          }
          else if (hashCode == m5_4xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::m5_4xlarge_elasticsearch;
          }
          else if (hashCode == m5_12xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::m5_12xlarge_elasticsearch;
          }
          else if (hashCode == r5_large_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::r5_large_elasticsearch;
          }
          else if (hashCode == r5_xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::r5_xlarge_elasticsearch;
          }
          else if (hashCode == r5_2xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::r5_2xlarge_elasticsearch;
          }
          else if (hashCode == r5_4xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::r5_4xlarge_elasticsearch;
          }
          else if (hashCode == r5_12xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::r5_12xlarge_elasticsearch;
          }
          else if (hashCode == c5_large_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::c5_large_elasticsearch;
          }
          else if (hashCode == c5_xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::c5_xlarge_elasticsearch;
          }
          else if (hashCode == c5_2xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::c5_2xlarge_elasticsearch;
          }
          else if (hashCode == c5_4xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::c5_4xlarge_elasticsearch;
          }
          else if (hashCode == c5_9xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::c5_9xlarge_elasticsearch;
          }
          else if (hashCode == c5_18xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::c5_18xlarge_elasticsearch;
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
          else if (hashCode == d2_xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::d2_xlarge_elasticsearch;
          }
          else if (hashCode == d2_2xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::d2_2xlarge_elasticsearch;
          }
          else if (hashCode == d2_4xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::d2_4xlarge_elasticsearch;
          }
          else if (hashCode == d2_8xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::d2_8xlarge_elasticsearch;
          }
          else if (hashCode == c4_large_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::c4_large_elasticsearch;
          }
          else if (hashCode == c4_xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::c4_xlarge_elasticsearch;
          }
          else if (hashCode == c4_2xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::c4_2xlarge_elasticsearch;
          }
          else if (hashCode == c4_4xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::c4_4xlarge_elasticsearch;
          }
          else if (hashCode == c4_8xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::c4_8xlarge_elasticsearch;
          }
          else if (hashCode == r4_large_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::r4_large_elasticsearch;
          }
          else if (hashCode == r4_xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::r4_xlarge_elasticsearch;
          }
          else if (hashCode == r4_2xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::r4_2xlarge_elasticsearch;
          }
          else if (hashCode == r4_4xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::r4_4xlarge_elasticsearch;
          }
          else if (hashCode == r4_8xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::r4_8xlarge_elasticsearch;
          }
          else if (hashCode == r4_16xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::r4_16xlarge_elasticsearch;
          }
          else if (hashCode == i3_large_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::i3_large_elasticsearch;
          }
          else if (hashCode == i3_xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::i3_xlarge_elasticsearch;
          }
          else if (hashCode == i3_2xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::i3_2xlarge_elasticsearch;
          }
          else if (hashCode == i3_4xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::i3_4xlarge_elasticsearch;
          }
          else if (hashCode == i3_8xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::i3_8xlarge_elasticsearch;
          }
          else if (hashCode == i3_16xlarge_elasticsearch_HASH)
          {
            return ESPartitionInstanceType::i3_16xlarge_elasticsearch;
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
          case ESPartitionInstanceType::m5_large_elasticsearch:
            return "m5.large.elasticsearch";
          case ESPartitionInstanceType::m5_xlarge_elasticsearch:
            return "m5.xlarge.elasticsearch";
          case ESPartitionInstanceType::m5_2xlarge_elasticsearch:
            return "m5.2xlarge.elasticsearch";
          case ESPartitionInstanceType::m5_4xlarge_elasticsearch:
            return "m5.4xlarge.elasticsearch";
          case ESPartitionInstanceType::m5_12xlarge_elasticsearch:
            return "m5.12xlarge.elasticsearch";
          case ESPartitionInstanceType::r5_large_elasticsearch:
            return "r5.large.elasticsearch";
          case ESPartitionInstanceType::r5_xlarge_elasticsearch:
            return "r5.xlarge.elasticsearch";
          case ESPartitionInstanceType::r5_2xlarge_elasticsearch:
            return "r5.2xlarge.elasticsearch";
          case ESPartitionInstanceType::r5_4xlarge_elasticsearch:
            return "r5.4xlarge.elasticsearch";
          case ESPartitionInstanceType::r5_12xlarge_elasticsearch:
            return "r5.12xlarge.elasticsearch";
          case ESPartitionInstanceType::c5_large_elasticsearch:
            return "c5.large.elasticsearch";
          case ESPartitionInstanceType::c5_xlarge_elasticsearch:
            return "c5.xlarge.elasticsearch";
          case ESPartitionInstanceType::c5_2xlarge_elasticsearch:
            return "c5.2xlarge.elasticsearch";
          case ESPartitionInstanceType::c5_4xlarge_elasticsearch:
            return "c5.4xlarge.elasticsearch";
          case ESPartitionInstanceType::c5_9xlarge_elasticsearch:
            return "c5.9xlarge.elasticsearch";
          case ESPartitionInstanceType::c5_18xlarge_elasticsearch:
            return "c5.18xlarge.elasticsearch";
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
          case ESPartitionInstanceType::d2_xlarge_elasticsearch:
            return "d2.xlarge.elasticsearch";
          case ESPartitionInstanceType::d2_2xlarge_elasticsearch:
            return "d2.2xlarge.elasticsearch";
          case ESPartitionInstanceType::d2_4xlarge_elasticsearch:
            return "d2.4xlarge.elasticsearch";
          case ESPartitionInstanceType::d2_8xlarge_elasticsearch:
            return "d2.8xlarge.elasticsearch";
          case ESPartitionInstanceType::c4_large_elasticsearch:
            return "c4.large.elasticsearch";
          case ESPartitionInstanceType::c4_xlarge_elasticsearch:
            return "c4.xlarge.elasticsearch";
          case ESPartitionInstanceType::c4_2xlarge_elasticsearch:
            return "c4.2xlarge.elasticsearch";
          case ESPartitionInstanceType::c4_4xlarge_elasticsearch:
            return "c4.4xlarge.elasticsearch";
          case ESPartitionInstanceType::c4_8xlarge_elasticsearch:
            return "c4.8xlarge.elasticsearch";
          case ESPartitionInstanceType::r4_large_elasticsearch:
            return "r4.large.elasticsearch";
          case ESPartitionInstanceType::r4_xlarge_elasticsearch:
            return "r4.xlarge.elasticsearch";
          case ESPartitionInstanceType::r4_2xlarge_elasticsearch:
            return "r4.2xlarge.elasticsearch";
          case ESPartitionInstanceType::r4_4xlarge_elasticsearch:
            return "r4.4xlarge.elasticsearch";
          case ESPartitionInstanceType::r4_8xlarge_elasticsearch:
            return "r4.8xlarge.elasticsearch";
          case ESPartitionInstanceType::r4_16xlarge_elasticsearch:
            return "r4.16xlarge.elasticsearch";
          case ESPartitionInstanceType::i3_large_elasticsearch:
            return "i3.large.elasticsearch";
          case ESPartitionInstanceType::i3_xlarge_elasticsearch:
            return "i3.xlarge.elasticsearch";
          case ESPartitionInstanceType::i3_2xlarge_elasticsearch:
            return "i3.2xlarge.elasticsearch";
          case ESPartitionInstanceType::i3_4xlarge_elasticsearch:
            return "i3.4xlarge.elasticsearch";
          case ESPartitionInstanceType::i3_8xlarge_elasticsearch:
            return "i3.8xlarge.elasticsearch";
          case ESPartitionInstanceType::i3_16xlarge_elasticsearch:
            return "i3.16xlarge.elasticsearch";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ESPartitionInstanceTypeMapper
    } // namespace Model
  } // namespace ElasticsearchService
} // namespace Aws
