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
  enum class DnsRecordIpType
  {
    NOT_SET,
    ipv4,
    dualstack,
    ipv6,
    service_defined
  };

namespace DnsRecordIpTypeMapper
{
AWS_EC2_API DnsRecordIpType GetDnsRecordIpTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForDnsRecordIpType(DnsRecordIpType value);
} // namespace DnsRecordIpTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
