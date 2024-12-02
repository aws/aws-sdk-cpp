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
  enum class ReportState
  {
    NOT_SET,
    running,
    cancelled,
    complete,
    error
  };

namespace ReportStateMapper
{
AWS_EC2_API ReportState GetReportStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForReportState(ReportState value);
} // namespace ReportStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
