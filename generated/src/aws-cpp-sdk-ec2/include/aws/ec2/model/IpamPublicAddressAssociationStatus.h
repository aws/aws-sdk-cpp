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
  enum class IpamPublicAddressAssociationStatus
  {
    NOT_SET,
    associated,
    disassociated
  };

namespace IpamPublicAddressAssociationStatusMapper
{
AWS_EC2_API IpamPublicAddressAssociationStatus GetIpamPublicAddressAssociationStatusForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForIpamPublicAddressAssociationStatus(IpamPublicAddressAssociationStatus value);
} // namespace IpamPublicAddressAssociationStatusMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
