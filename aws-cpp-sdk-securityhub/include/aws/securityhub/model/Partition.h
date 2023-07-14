/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{
  enum class Partition
  {
    NOT_SET,
    aws,
    aws_cn,
    aws_us_gov
  };

namespace PartitionMapper
{
AWS_SECURITYHUB_API Partition GetPartitionForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForPartition(Partition value);
} // namespace PartitionMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
