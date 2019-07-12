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

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{
  enum class ESPartitionInstanceType
  {
    NOT_SET,
    m3_medium_elasticsearch,
    m3_large_elasticsearch,
    m3_xlarge_elasticsearch,
    m3_2xlarge_elasticsearch,
    m4_large_elasticsearch,
    m4_xlarge_elasticsearch,
    m4_2xlarge_elasticsearch,
    m4_4xlarge_elasticsearch,
    m4_10xlarge_elasticsearch,
    m5_large_elasticsearch,
    m5_xlarge_elasticsearch,
    m5_2xlarge_elasticsearch,
    m5_4xlarge_elasticsearch,
    m5_12xlarge_elasticsearch,
    r5_large_elasticsearch,
    r5_xlarge_elasticsearch,
    r5_2xlarge_elasticsearch,
    r5_4xlarge_elasticsearch,
    r5_12xlarge_elasticsearch,
    c5_large_elasticsearch,
    c5_xlarge_elasticsearch,
    c5_2xlarge_elasticsearch,
    c5_4xlarge_elasticsearch,
    c5_9xlarge_elasticsearch,
    c5_18xlarge_elasticsearch,
    t2_micro_elasticsearch,
    t2_small_elasticsearch,
    t2_medium_elasticsearch,
    r3_large_elasticsearch,
    r3_xlarge_elasticsearch,
    r3_2xlarge_elasticsearch,
    r3_4xlarge_elasticsearch,
    r3_8xlarge_elasticsearch,
    i2_xlarge_elasticsearch,
    i2_2xlarge_elasticsearch,
    d2_xlarge_elasticsearch,
    d2_2xlarge_elasticsearch,
    d2_4xlarge_elasticsearch,
    d2_8xlarge_elasticsearch,
    c4_large_elasticsearch,
    c4_xlarge_elasticsearch,
    c4_2xlarge_elasticsearch,
    c4_4xlarge_elasticsearch,
    c4_8xlarge_elasticsearch,
    r4_large_elasticsearch,
    r4_xlarge_elasticsearch,
    r4_2xlarge_elasticsearch,
    r4_4xlarge_elasticsearch,
    r4_8xlarge_elasticsearch,
    r4_16xlarge_elasticsearch,
    i3_large_elasticsearch,
    i3_xlarge_elasticsearch,
    i3_2xlarge_elasticsearch,
    i3_4xlarge_elasticsearch,
    i3_8xlarge_elasticsearch,
    i3_16xlarge_elasticsearch
  };

namespace ESPartitionInstanceTypeMapper
{
AWS_ELASTICSEARCHSERVICE_API ESPartitionInstanceType GetESPartitionInstanceTypeForName(const Aws::String& name);

AWS_ELASTICSEARCHSERVICE_API Aws::String GetNameForESPartitionInstanceType(ESPartitionInstanceType value);
} // namespace ESPartitionInstanceTypeMapper
} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
