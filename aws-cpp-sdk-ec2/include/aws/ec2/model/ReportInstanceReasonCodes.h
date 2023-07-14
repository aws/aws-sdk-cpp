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
  enum class ReportInstanceReasonCodes
  {
    NOT_SET,
    instance_stuck_in_state,
    unresponsive,
    not_accepting_credentials,
    password_not_available,
    performance_network,
    performance_instance_store,
    performance_ebs_volume,
    performance_other,
    other
  };

namespace ReportInstanceReasonCodesMapper
{
AWS_EC2_API ReportInstanceReasonCodes GetReportInstanceReasonCodesForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForReportInstanceReasonCodes(ReportInstanceReasonCodes value);
} // namespace ReportInstanceReasonCodesMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
