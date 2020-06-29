/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
