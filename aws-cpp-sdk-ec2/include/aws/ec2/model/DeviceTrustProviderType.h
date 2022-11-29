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
  enum class DeviceTrustProviderType
  {
    NOT_SET,
    jamf,
    crowdstrike
  };

namespace DeviceTrustProviderTypeMapper
{
AWS_EC2_API DeviceTrustProviderType GetDeviceTrustProviderTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForDeviceTrustProviderType(DeviceTrustProviderType value);
} // namespace DeviceTrustProviderTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
