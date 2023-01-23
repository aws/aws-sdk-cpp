/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ebs/EBS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EBS
{
namespace Model
{
  enum class ChecksumAggregationMethod
  {
    NOT_SET,
    LINEAR
  };

namespace ChecksumAggregationMethodMapper
{
AWS_EBS_API ChecksumAggregationMethod GetChecksumAggregationMethodForName(const Aws::String& name);

AWS_EBS_API Aws::String GetNameForChecksumAggregationMethod(ChecksumAggregationMethod value);
} // namespace ChecksumAggregationMethodMapper
} // namespace Model
} // namespace EBS
} // namespace Aws
