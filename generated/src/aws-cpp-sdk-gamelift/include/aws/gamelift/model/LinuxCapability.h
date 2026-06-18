/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/GameLift_EXPORTS.h>

namespace Aws {
namespace GameLift {
namespace Model {
enum class LinuxCapability {
  NOT_SET,
  AUDIT_CONTROL,
  AUDIT_WRITE,
  BLOCK_SUSPEND,
  CHOWN,
  DAC_OVERRIDE,
  DAC_READ_SEARCH,
  FOWNER,
  FSETID,
  IPC_LOCK,
  IPC_OWNER,
  KILL,
  LEASE,
  LINUX_IMMUTABLE,
  MAC_ADMIN,
  MAC_OVERRIDE,
  MKNOD,
  NET_ADMIN,
  NET_BIND_SERVICE,
  NET_BROADCAST,
  NET_RAW,
  SETFCAP,
  SETGID,
  SETPCAP,
  SETUID,
  SYS_ADMIN,
  SYS_BOOT,
  SYS_CHROOT,
  SYS_MODULE,
  SYS_NICE,
  SYS_PACCT,
  SYS_PTRACE,
  SYS_RAWIO,
  SYS_RESOURCE,
  SYS_TIME,
  SYS_TTY_CONFIG,
  SYSLOG,
  WAKE_ALARM
};

namespace LinuxCapabilityMapper {
AWS_GAMELIFT_API LinuxCapability GetLinuxCapabilityForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForLinuxCapability(LinuxCapability value);
}  // namespace LinuxCapabilityMapper
}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
