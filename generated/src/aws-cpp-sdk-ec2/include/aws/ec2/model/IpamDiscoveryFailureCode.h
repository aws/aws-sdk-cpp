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
  enum class IpamDiscoveryFailureCode
  {
    NOT_SET,
    assume_role_failure,
    throttling_failure,
    unauthorized_failure
  };

namespace IpamDiscoveryFailureCodeMapper
{
AWS_EC2_API IpamDiscoveryFailureCode GetIpamDiscoveryFailureCodeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForIpamDiscoveryFailureCode(IpamDiscoveryFailureCode value);
} // namespace IpamDiscoveryFailureCodeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
