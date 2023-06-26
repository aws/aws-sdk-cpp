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
  enum class HostnameType
  {
    NOT_SET,
    ip_name,
    resource_name
  };

namespace HostnameTypeMapper
{
AWS_EC2_API HostnameType GetHostnameTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForHostnameType(HostnameType value);
} // namespace HostnameTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
