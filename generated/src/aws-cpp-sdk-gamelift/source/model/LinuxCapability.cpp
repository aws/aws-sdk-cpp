/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/gamelift/model/LinuxCapability.h>

using namespace Aws::Utils;

namespace Aws {
namespace GameLift {
namespace Model {
namespace LinuxCapabilityMapper {

static const int AUDIT_CONTROL_HASH = HashingUtils::HashString("AUDIT_CONTROL");
static const int AUDIT_WRITE_HASH = HashingUtils::HashString("AUDIT_WRITE");
static const int BLOCK_SUSPEND_HASH = HashingUtils::HashString("BLOCK_SUSPEND");
static const int CHOWN_HASH = HashingUtils::HashString("CHOWN");
static const int DAC_OVERRIDE_HASH = HashingUtils::HashString("DAC_OVERRIDE");
static const int DAC_READ_SEARCH_HASH = HashingUtils::HashString("DAC_READ_SEARCH");
static const int FOWNER_HASH = HashingUtils::HashString("FOWNER");
static const int FSETID_HASH = HashingUtils::HashString("FSETID");
static const int IPC_LOCK_HASH = HashingUtils::HashString("IPC_LOCK");
static const int IPC_OWNER_HASH = HashingUtils::HashString("IPC_OWNER");
static const int KILL_HASH = HashingUtils::HashString("KILL");
static const int LEASE_HASH = HashingUtils::HashString("LEASE");
static const int LINUX_IMMUTABLE_HASH = HashingUtils::HashString("LINUX_IMMUTABLE");
static const int MAC_ADMIN_HASH = HashingUtils::HashString("MAC_ADMIN");
static const int MAC_OVERRIDE_HASH = HashingUtils::HashString("MAC_OVERRIDE");
static const int MKNOD_HASH = HashingUtils::HashString("MKNOD");
static const int NET_ADMIN_HASH = HashingUtils::HashString("NET_ADMIN");
static const int NET_BIND_SERVICE_HASH = HashingUtils::HashString("NET_BIND_SERVICE");
static const int NET_BROADCAST_HASH = HashingUtils::HashString("NET_BROADCAST");
static const int NET_RAW_HASH = HashingUtils::HashString("NET_RAW");
static const int SETFCAP_HASH = HashingUtils::HashString("SETFCAP");
static const int SETGID_HASH = HashingUtils::HashString("SETGID");
static const int SETPCAP_HASH = HashingUtils::HashString("SETPCAP");
static const int SETUID_HASH = HashingUtils::HashString("SETUID");
static const int SYS_ADMIN_HASH = HashingUtils::HashString("SYS_ADMIN");
static const int SYS_BOOT_HASH = HashingUtils::HashString("SYS_BOOT");
static const int SYS_CHROOT_HASH = HashingUtils::HashString("SYS_CHROOT");
static const int SYS_MODULE_HASH = HashingUtils::HashString("SYS_MODULE");
static const int SYS_NICE_HASH = HashingUtils::HashString("SYS_NICE");
static const int SYS_PACCT_HASH = HashingUtils::HashString("SYS_PACCT");
static const int SYS_PTRACE_HASH = HashingUtils::HashString("SYS_PTRACE");
static const int SYS_RAWIO_HASH = HashingUtils::HashString("SYS_RAWIO");
static const int SYS_RESOURCE_HASH = HashingUtils::HashString("SYS_RESOURCE");
static const int SYS_TIME_HASH = HashingUtils::HashString("SYS_TIME");
static const int SYS_TTY_CONFIG_HASH = HashingUtils::HashString("SYS_TTY_CONFIG");
static const int SYSLOG_HASH = HashingUtils::HashString("SYSLOG");
static const int WAKE_ALARM_HASH = HashingUtils::HashString("WAKE_ALARM");

LinuxCapability GetLinuxCapabilityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AUDIT_CONTROL_HASH) {
    return LinuxCapability::AUDIT_CONTROL;
  } else if (hashCode == AUDIT_WRITE_HASH) {
    return LinuxCapability::AUDIT_WRITE;
  } else if (hashCode == BLOCK_SUSPEND_HASH) {
    return LinuxCapability::BLOCK_SUSPEND;
  } else if (hashCode == CHOWN_HASH) {
    return LinuxCapability::CHOWN;
  } else if (hashCode == DAC_OVERRIDE_HASH) {
    return LinuxCapability::DAC_OVERRIDE;
  } else if (hashCode == DAC_READ_SEARCH_HASH) {
    return LinuxCapability::DAC_READ_SEARCH;
  } else if (hashCode == FOWNER_HASH) {
    return LinuxCapability::FOWNER;
  } else if (hashCode == FSETID_HASH) {
    return LinuxCapability::FSETID;
  } else if (hashCode == IPC_LOCK_HASH) {
    return LinuxCapability::IPC_LOCK;
  } else if (hashCode == IPC_OWNER_HASH) {
    return LinuxCapability::IPC_OWNER;
  } else if (hashCode == KILL_HASH) {
    return LinuxCapability::KILL;
  } else if (hashCode == LEASE_HASH) {
    return LinuxCapability::LEASE;
  } else if (hashCode == LINUX_IMMUTABLE_HASH) {
    return LinuxCapability::LINUX_IMMUTABLE;
  } else if (hashCode == MAC_ADMIN_HASH) {
    return LinuxCapability::MAC_ADMIN;
  } else if (hashCode == MAC_OVERRIDE_HASH) {
    return LinuxCapability::MAC_OVERRIDE;
  } else if (hashCode == MKNOD_HASH) {
    return LinuxCapability::MKNOD;
  } else if (hashCode == NET_ADMIN_HASH) {
    return LinuxCapability::NET_ADMIN;
  } else if (hashCode == NET_BIND_SERVICE_HASH) {
    return LinuxCapability::NET_BIND_SERVICE;
  } else if (hashCode == NET_BROADCAST_HASH) {
    return LinuxCapability::NET_BROADCAST;
  } else if (hashCode == NET_RAW_HASH) {
    return LinuxCapability::NET_RAW;
  } else if (hashCode == SETFCAP_HASH) {
    return LinuxCapability::SETFCAP;
  } else if (hashCode == SETGID_HASH) {
    return LinuxCapability::SETGID;
  } else if (hashCode == SETPCAP_HASH) {
    return LinuxCapability::SETPCAP;
  } else if (hashCode == SETUID_HASH) {
    return LinuxCapability::SETUID;
  } else if (hashCode == SYS_ADMIN_HASH) {
    return LinuxCapability::SYS_ADMIN;
  } else if (hashCode == SYS_BOOT_HASH) {
    return LinuxCapability::SYS_BOOT;
  } else if (hashCode == SYS_CHROOT_HASH) {
    return LinuxCapability::SYS_CHROOT;
  } else if (hashCode == SYS_MODULE_HASH) {
    return LinuxCapability::SYS_MODULE;
  } else if (hashCode == SYS_NICE_HASH) {
    return LinuxCapability::SYS_NICE;
  } else if (hashCode == SYS_PACCT_HASH) {
    return LinuxCapability::SYS_PACCT;
  } else if (hashCode == SYS_PTRACE_HASH) {
    return LinuxCapability::SYS_PTRACE;
  } else if (hashCode == SYS_RAWIO_HASH) {
    return LinuxCapability::SYS_RAWIO;
  } else if (hashCode == SYS_RESOURCE_HASH) {
    return LinuxCapability::SYS_RESOURCE;
  } else if (hashCode == SYS_TIME_HASH) {
    return LinuxCapability::SYS_TIME;
  } else if (hashCode == SYS_TTY_CONFIG_HASH) {
    return LinuxCapability::SYS_TTY_CONFIG;
  } else if (hashCode == SYSLOG_HASH) {
    return LinuxCapability::SYSLOG;
  } else if (hashCode == WAKE_ALARM_HASH) {
    return LinuxCapability::WAKE_ALARM;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<LinuxCapability>(hashCode);
  }

  return LinuxCapability::NOT_SET;
}

Aws::String GetNameForLinuxCapability(LinuxCapability enumValue) {
  switch (enumValue) {
    case LinuxCapability::NOT_SET:
      return {};
    case LinuxCapability::AUDIT_CONTROL:
      return "AUDIT_CONTROL";
    case LinuxCapability::AUDIT_WRITE:
      return "AUDIT_WRITE";
    case LinuxCapability::BLOCK_SUSPEND:
      return "BLOCK_SUSPEND";
    case LinuxCapability::CHOWN:
      return "CHOWN";
    case LinuxCapability::DAC_OVERRIDE:
      return "DAC_OVERRIDE";
    case LinuxCapability::DAC_READ_SEARCH:
      return "DAC_READ_SEARCH";
    case LinuxCapability::FOWNER:
      return "FOWNER";
    case LinuxCapability::FSETID:
      return "FSETID";
    case LinuxCapability::IPC_LOCK:
      return "IPC_LOCK";
    case LinuxCapability::IPC_OWNER:
      return "IPC_OWNER";
    case LinuxCapability::KILL:
      return "KILL";
    case LinuxCapability::LEASE:
      return "LEASE";
    case LinuxCapability::LINUX_IMMUTABLE:
      return "LINUX_IMMUTABLE";
    case LinuxCapability::MAC_ADMIN:
      return "MAC_ADMIN";
    case LinuxCapability::MAC_OVERRIDE:
      return "MAC_OVERRIDE";
    case LinuxCapability::MKNOD:
      return "MKNOD";
    case LinuxCapability::NET_ADMIN:
      return "NET_ADMIN";
    case LinuxCapability::NET_BIND_SERVICE:
      return "NET_BIND_SERVICE";
    case LinuxCapability::NET_BROADCAST:
      return "NET_BROADCAST";
    case LinuxCapability::NET_RAW:
      return "NET_RAW";
    case LinuxCapability::SETFCAP:
      return "SETFCAP";
    case LinuxCapability::SETGID:
      return "SETGID";
    case LinuxCapability::SETPCAP:
      return "SETPCAP";
    case LinuxCapability::SETUID:
      return "SETUID";
    case LinuxCapability::SYS_ADMIN:
      return "SYS_ADMIN";
    case LinuxCapability::SYS_BOOT:
      return "SYS_BOOT";
    case LinuxCapability::SYS_CHROOT:
      return "SYS_CHROOT";
    case LinuxCapability::SYS_MODULE:
      return "SYS_MODULE";
    case LinuxCapability::SYS_NICE:
      return "SYS_NICE";
    case LinuxCapability::SYS_PACCT:
      return "SYS_PACCT";
    case LinuxCapability::SYS_PTRACE:
      return "SYS_PTRACE";
    case LinuxCapability::SYS_RAWIO:
      return "SYS_RAWIO";
    case LinuxCapability::SYS_RESOURCE:
      return "SYS_RESOURCE";
    case LinuxCapability::SYS_TIME:
      return "SYS_TIME";
    case LinuxCapability::SYS_TTY_CONFIG:
      return "SYS_TTY_CONFIG";
    case LinuxCapability::SYSLOG:
      return "SYSLOG";
    case LinuxCapability::WAKE_ALARM:
      return "WAKE_ALARM";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LinuxCapabilityMapper
}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
