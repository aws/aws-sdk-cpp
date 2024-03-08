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
  enum class CapacityReservationInstancePlatform
  {
    NOT_SET,
    Linux_UNIX,
    Red_Hat_Enterprise_Linux,
    SUSE_Linux,
    Windows,
    Windows_with_SQL_Server,
    Windows_with_SQL_Server_Enterprise,
    Windows_with_SQL_Server_Standard,
    Windows_with_SQL_Server_Web,
    Linux_with_SQL_Server_Standard,
    Linux_with_SQL_Server_Web,
    Linux_with_SQL_Server_Enterprise,
    RHEL_with_SQL_Server_Standard,
    RHEL_with_SQL_Server_Enterprise,
    RHEL_with_SQL_Server_Web,
    RHEL_with_HA,
    RHEL_with_HA_and_SQL_Server_Standard,
    RHEL_with_HA_and_SQL_Server_Enterprise,
    Ubuntu_Pro
  };

namespace CapacityReservationInstancePlatformMapper
{
AWS_EC2_API CapacityReservationInstancePlatform GetCapacityReservationInstancePlatformForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForCapacityReservationInstancePlatform(CapacityReservationInstancePlatform value);
} // namespace CapacityReservationInstancePlatformMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
