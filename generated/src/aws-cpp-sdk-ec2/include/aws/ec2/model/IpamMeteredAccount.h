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
  enum class IpamMeteredAccount
  {
    NOT_SET,
    ipam_owner,
    resource_owner
  };

namespace IpamMeteredAccountMapper
{
AWS_EC2_API IpamMeteredAccount GetIpamMeteredAccountForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForIpamMeteredAccount(IpamMeteredAccount value);
} // namespace IpamMeteredAccountMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
