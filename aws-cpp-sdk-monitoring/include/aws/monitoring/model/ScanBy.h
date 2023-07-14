/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{
  enum class ScanBy
  {
    NOT_SET,
    TimestampDescending,
    TimestampAscending
  };

namespace ScanByMapper
{
AWS_CLOUDWATCH_API ScanBy GetScanByForName(const Aws::String& name);

AWS_CLOUDWATCH_API Aws::String GetNameForScanBy(ScanBy value);
} // namespace ScanByMapper
} // namespace Model
} // namespace CloudWatch
} // namespace Aws
