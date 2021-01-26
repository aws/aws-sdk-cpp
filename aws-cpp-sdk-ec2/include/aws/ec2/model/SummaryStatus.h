/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class SummaryStatus
  {
    NOT_SET,
    ok,
    impaired,
    insufficient_data,
    not_applicable,
    initializing
  };

namespace SummaryStatusMapper
{
AWS_EC2_API SummaryStatus GetSummaryStatusForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForSummaryStatus(SummaryStatus value);
} // namespace SummaryStatusMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
