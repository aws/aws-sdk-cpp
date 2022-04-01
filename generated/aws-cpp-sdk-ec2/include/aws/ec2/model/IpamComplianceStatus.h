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
  enum class IpamComplianceStatus
  {
    NOT_SET,
    compliant,
    noncompliant,
    unmanaged,
    ignored
  };

namespace IpamComplianceStatusMapper
{
AWS_EC2_API IpamComplianceStatus GetIpamComplianceStatusForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForIpamComplianceStatus(IpamComplianceStatus value);
} // namespace IpamComplianceStatusMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
