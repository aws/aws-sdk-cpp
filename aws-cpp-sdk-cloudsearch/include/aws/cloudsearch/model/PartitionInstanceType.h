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
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudSearch
{
namespace Model
{
  enum class PartitionInstanceType
  {
    NOT_SET,
    search_m1_small,
    search_m1_large,
    search_m2_xlarge,
    search_m2_2xlarge,
    search_m3_medium,
    search_m3_large,
    search_m3_xlarge,
    search_m3_2xlarge
  };

namespace PartitionInstanceTypeMapper
{
AWS_CLOUDSEARCH_API PartitionInstanceType GetPartitionInstanceTypeForName(const Aws::String& name);

AWS_CLOUDSEARCH_API Aws::String GetNameForPartitionInstanceType(PartitionInstanceType value);
} // namespace PartitionInstanceTypeMapper
} // namespace Model
} // namespace CloudSearch
} // namespace Aws
