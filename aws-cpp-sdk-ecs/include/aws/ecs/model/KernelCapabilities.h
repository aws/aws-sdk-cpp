/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ECS
{
namespace Model
{

  /**
   * <p>The Linux capabilities for the container that are added to or dropped from
   * the default configuration provided by Docker. For more information on the
   * default capabilities and the non-default available capabilities, see <a
   * href="https://docs.docker.com/engine/reference/run/#runtime-privilege-and-linux-capabilities">Runtime
   * privilege and Linux capabilities</a> in the <i>Docker run reference</i>. For
   * more detailed information on these Linux capabilities, see the <a
   * href="http://man7.org/linux/man-pages/man7/capabilities.7.html">capabilities(7)</a>
   * Linux manual page.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/KernelCapabilities">AWS
   * API Reference</a></p>
   */
  class AWS_ECS_API KernelCapabilities
  {
  public:
    KernelCapabilities();
    KernelCapabilities(Aws::Utils::Json::JsonView jsonValue);
    KernelCapabilities& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Linux capabilities for the container that have been added to the default
     * configuration provided by Docker. This parameter maps to <code>CapAdd</code> in
     * the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--cap-add</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <note>
     * <p>If you are using tasks that use the Fargate launch type, the <code>add</code>
     * parameter is not supported.</p> </note> <p>Valid values: <code>"ALL" |
     * "AUDIT_CONTROL" | "AUDIT_WRITE" | "BLOCK_SUSPEND" | "CHOWN" | "DAC_OVERRIDE" |
     * "DAC_READ_SEARCH" | "FOWNER" | "FSETID" | "IPC_LOCK" | "IPC_OWNER" | "KILL" |
     * "LEASE" | "LINUX_IMMUTABLE" | "MAC_ADMIN" | "MAC_OVERRIDE" | "MKNOD" |
     * "NET_ADMIN" | "NET_BIND_SERVICE" | "NET_BROADCAST" | "NET_RAW" | "SETFCAP" |
     * "SETGID" | "SETPCAP" | "SETUID" | "SYS_ADMIN" | "SYS_BOOT" | "SYS_CHROOT" |
     * "SYS_MODULE" | "SYS_NICE" | "SYS_PACCT" | "SYS_PTRACE" | "SYS_RAWIO" |
     * "SYS_RESOURCE" | "SYS_TIME" | "SYS_TTY_CONFIG" | "SYSLOG" | "WAKE_ALARM"</code>
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetAdd() const{ return m_add; }

    /**
     * <p>The Linux capabilities for the container that have been added to the default
     * configuration provided by Docker. This parameter maps to <code>CapAdd</code> in
     * the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--cap-add</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <note>
     * <p>If you are using tasks that use the Fargate launch type, the <code>add</code>
     * parameter is not supported.</p> </note> <p>Valid values: <code>"ALL" |
     * "AUDIT_CONTROL" | "AUDIT_WRITE" | "BLOCK_SUSPEND" | "CHOWN" | "DAC_OVERRIDE" |
     * "DAC_READ_SEARCH" | "FOWNER" | "FSETID" | "IPC_LOCK" | "IPC_OWNER" | "KILL" |
     * "LEASE" | "LINUX_IMMUTABLE" | "MAC_ADMIN" | "MAC_OVERRIDE" | "MKNOD" |
     * "NET_ADMIN" | "NET_BIND_SERVICE" | "NET_BROADCAST" | "NET_RAW" | "SETFCAP" |
     * "SETGID" | "SETPCAP" | "SETUID" | "SYS_ADMIN" | "SYS_BOOT" | "SYS_CHROOT" |
     * "SYS_MODULE" | "SYS_NICE" | "SYS_PACCT" | "SYS_PTRACE" | "SYS_RAWIO" |
     * "SYS_RESOURCE" | "SYS_TIME" | "SYS_TTY_CONFIG" | "SYSLOG" | "WAKE_ALARM"</code>
     * </p>
     */
    inline bool AddHasBeenSet() const { return m_addHasBeenSet; }

    /**
     * <p>The Linux capabilities for the container that have been added to the default
     * configuration provided by Docker. This parameter maps to <code>CapAdd</code> in
     * the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--cap-add</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <note>
     * <p>If you are using tasks that use the Fargate launch type, the <code>add</code>
     * parameter is not supported.</p> </note> <p>Valid values: <code>"ALL" |
     * "AUDIT_CONTROL" | "AUDIT_WRITE" | "BLOCK_SUSPEND" | "CHOWN" | "DAC_OVERRIDE" |
     * "DAC_READ_SEARCH" | "FOWNER" | "FSETID" | "IPC_LOCK" | "IPC_OWNER" | "KILL" |
     * "LEASE" | "LINUX_IMMUTABLE" | "MAC_ADMIN" | "MAC_OVERRIDE" | "MKNOD" |
     * "NET_ADMIN" | "NET_BIND_SERVICE" | "NET_BROADCAST" | "NET_RAW" | "SETFCAP" |
     * "SETGID" | "SETPCAP" | "SETUID" | "SYS_ADMIN" | "SYS_BOOT" | "SYS_CHROOT" |
     * "SYS_MODULE" | "SYS_NICE" | "SYS_PACCT" | "SYS_PTRACE" | "SYS_RAWIO" |
     * "SYS_RESOURCE" | "SYS_TIME" | "SYS_TTY_CONFIG" | "SYSLOG" | "WAKE_ALARM"</code>
     * </p>
     */
    inline void SetAdd(const Aws::Vector<Aws::String>& value) { m_addHasBeenSet = true; m_add = value; }

    /**
     * <p>The Linux capabilities for the container that have been added to the default
     * configuration provided by Docker. This parameter maps to <code>CapAdd</code> in
     * the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--cap-add</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <note>
     * <p>If you are using tasks that use the Fargate launch type, the <code>add</code>
     * parameter is not supported.</p> </note> <p>Valid values: <code>"ALL" |
     * "AUDIT_CONTROL" | "AUDIT_WRITE" | "BLOCK_SUSPEND" | "CHOWN" | "DAC_OVERRIDE" |
     * "DAC_READ_SEARCH" | "FOWNER" | "FSETID" | "IPC_LOCK" | "IPC_OWNER" | "KILL" |
     * "LEASE" | "LINUX_IMMUTABLE" | "MAC_ADMIN" | "MAC_OVERRIDE" | "MKNOD" |
     * "NET_ADMIN" | "NET_BIND_SERVICE" | "NET_BROADCAST" | "NET_RAW" | "SETFCAP" |
     * "SETGID" | "SETPCAP" | "SETUID" | "SYS_ADMIN" | "SYS_BOOT" | "SYS_CHROOT" |
     * "SYS_MODULE" | "SYS_NICE" | "SYS_PACCT" | "SYS_PTRACE" | "SYS_RAWIO" |
     * "SYS_RESOURCE" | "SYS_TIME" | "SYS_TTY_CONFIG" | "SYSLOG" | "WAKE_ALARM"</code>
     * </p>
     */
    inline void SetAdd(Aws::Vector<Aws::String>&& value) { m_addHasBeenSet = true; m_add = std::move(value); }

    /**
     * <p>The Linux capabilities for the container that have been added to the default
     * configuration provided by Docker. This parameter maps to <code>CapAdd</code> in
     * the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--cap-add</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <note>
     * <p>If you are using tasks that use the Fargate launch type, the <code>add</code>
     * parameter is not supported.</p> </note> <p>Valid values: <code>"ALL" |
     * "AUDIT_CONTROL" | "AUDIT_WRITE" | "BLOCK_SUSPEND" | "CHOWN" | "DAC_OVERRIDE" |
     * "DAC_READ_SEARCH" | "FOWNER" | "FSETID" | "IPC_LOCK" | "IPC_OWNER" | "KILL" |
     * "LEASE" | "LINUX_IMMUTABLE" | "MAC_ADMIN" | "MAC_OVERRIDE" | "MKNOD" |
     * "NET_ADMIN" | "NET_BIND_SERVICE" | "NET_BROADCAST" | "NET_RAW" | "SETFCAP" |
     * "SETGID" | "SETPCAP" | "SETUID" | "SYS_ADMIN" | "SYS_BOOT" | "SYS_CHROOT" |
     * "SYS_MODULE" | "SYS_NICE" | "SYS_PACCT" | "SYS_PTRACE" | "SYS_RAWIO" |
     * "SYS_RESOURCE" | "SYS_TIME" | "SYS_TTY_CONFIG" | "SYSLOG" | "WAKE_ALARM"</code>
     * </p>
     */
    inline KernelCapabilities& WithAdd(const Aws::Vector<Aws::String>& value) { SetAdd(value); return *this;}

    /**
     * <p>The Linux capabilities for the container that have been added to the default
     * configuration provided by Docker. This parameter maps to <code>CapAdd</code> in
     * the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--cap-add</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <note>
     * <p>If you are using tasks that use the Fargate launch type, the <code>add</code>
     * parameter is not supported.</p> </note> <p>Valid values: <code>"ALL" |
     * "AUDIT_CONTROL" | "AUDIT_WRITE" | "BLOCK_SUSPEND" | "CHOWN" | "DAC_OVERRIDE" |
     * "DAC_READ_SEARCH" | "FOWNER" | "FSETID" | "IPC_LOCK" | "IPC_OWNER" | "KILL" |
     * "LEASE" | "LINUX_IMMUTABLE" | "MAC_ADMIN" | "MAC_OVERRIDE" | "MKNOD" |
     * "NET_ADMIN" | "NET_BIND_SERVICE" | "NET_BROADCAST" | "NET_RAW" | "SETFCAP" |
     * "SETGID" | "SETPCAP" | "SETUID" | "SYS_ADMIN" | "SYS_BOOT" | "SYS_CHROOT" |
     * "SYS_MODULE" | "SYS_NICE" | "SYS_PACCT" | "SYS_PTRACE" | "SYS_RAWIO" |
     * "SYS_RESOURCE" | "SYS_TIME" | "SYS_TTY_CONFIG" | "SYSLOG" | "WAKE_ALARM"</code>
     * </p>
     */
    inline KernelCapabilities& WithAdd(Aws::Vector<Aws::String>&& value) { SetAdd(std::move(value)); return *this;}

    /**
     * <p>The Linux capabilities for the container that have been added to the default
     * configuration provided by Docker. This parameter maps to <code>CapAdd</code> in
     * the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--cap-add</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <note>
     * <p>If you are using tasks that use the Fargate launch type, the <code>add</code>
     * parameter is not supported.</p> </note> <p>Valid values: <code>"ALL" |
     * "AUDIT_CONTROL" | "AUDIT_WRITE" | "BLOCK_SUSPEND" | "CHOWN" | "DAC_OVERRIDE" |
     * "DAC_READ_SEARCH" | "FOWNER" | "FSETID" | "IPC_LOCK" | "IPC_OWNER" | "KILL" |
     * "LEASE" | "LINUX_IMMUTABLE" | "MAC_ADMIN" | "MAC_OVERRIDE" | "MKNOD" |
     * "NET_ADMIN" | "NET_BIND_SERVICE" | "NET_BROADCAST" | "NET_RAW" | "SETFCAP" |
     * "SETGID" | "SETPCAP" | "SETUID" | "SYS_ADMIN" | "SYS_BOOT" | "SYS_CHROOT" |
     * "SYS_MODULE" | "SYS_NICE" | "SYS_PACCT" | "SYS_PTRACE" | "SYS_RAWIO" |
     * "SYS_RESOURCE" | "SYS_TIME" | "SYS_TTY_CONFIG" | "SYSLOG" | "WAKE_ALARM"</code>
     * </p>
     */
    inline KernelCapabilities& AddAdd(const Aws::String& value) { m_addHasBeenSet = true; m_add.push_back(value); return *this; }

    /**
     * <p>The Linux capabilities for the container that have been added to the default
     * configuration provided by Docker. This parameter maps to <code>CapAdd</code> in
     * the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--cap-add</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <note>
     * <p>If you are using tasks that use the Fargate launch type, the <code>add</code>
     * parameter is not supported.</p> </note> <p>Valid values: <code>"ALL" |
     * "AUDIT_CONTROL" | "AUDIT_WRITE" | "BLOCK_SUSPEND" | "CHOWN" | "DAC_OVERRIDE" |
     * "DAC_READ_SEARCH" | "FOWNER" | "FSETID" | "IPC_LOCK" | "IPC_OWNER" | "KILL" |
     * "LEASE" | "LINUX_IMMUTABLE" | "MAC_ADMIN" | "MAC_OVERRIDE" | "MKNOD" |
     * "NET_ADMIN" | "NET_BIND_SERVICE" | "NET_BROADCAST" | "NET_RAW" | "SETFCAP" |
     * "SETGID" | "SETPCAP" | "SETUID" | "SYS_ADMIN" | "SYS_BOOT" | "SYS_CHROOT" |
     * "SYS_MODULE" | "SYS_NICE" | "SYS_PACCT" | "SYS_PTRACE" | "SYS_RAWIO" |
     * "SYS_RESOURCE" | "SYS_TIME" | "SYS_TTY_CONFIG" | "SYSLOG" | "WAKE_ALARM"</code>
     * </p>
     */
    inline KernelCapabilities& AddAdd(Aws::String&& value) { m_addHasBeenSet = true; m_add.push_back(std::move(value)); return *this; }

    /**
     * <p>The Linux capabilities for the container that have been added to the default
     * configuration provided by Docker. This parameter maps to <code>CapAdd</code> in
     * the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--cap-add</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <note>
     * <p>If you are using tasks that use the Fargate launch type, the <code>add</code>
     * parameter is not supported.</p> </note> <p>Valid values: <code>"ALL" |
     * "AUDIT_CONTROL" | "AUDIT_WRITE" | "BLOCK_SUSPEND" | "CHOWN" | "DAC_OVERRIDE" |
     * "DAC_READ_SEARCH" | "FOWNER" | "FSETID" | "IPC_LOCK" | "IPC_OWNER" | "KILL" |
     * "LEASE" | "LINUX_IMMUTABLE" | "MAC_ADMIN" | "MAC_OVERRIDE" | "MKNOD" |
     * "NET_ADMIN" | "NET_BIND_SERVICE" | "NET_BROADCAST" | "NET_RAW" | "SETFCAP" |
     * "SETGID" | "SETPCAP" | "SETUID" | "SYS_ADMIN" | "SYS_BOOT" | "SYS_CHROOT" |
     * "SYS_MODULE" | "SYS_NICE" | "SYS_PACCT" | "SYS_PTRACE" | "SYS_RAWIO" |
     * "SYS_RESOURCE" | "SYS_TIME" | "SYS_TTY_CONFIG" | "SYSLOG" | "WAKE_ALARM"</code>
     * </p>
     */
    inline KernelCapabilities& AddAdd(const char* value) { m_addHasBeenSet = true; m_add.push_back(value); return *this; }


    /**
     * <p>The Linux capabilities for the container that have been removed from the
     * default configuration provided by Docker. This parameter maps to
     * <code>CapDrop</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--cap-drop</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     * <p>Valid values: <code>"ALL" | "AUDIT_CONTROL" | "AUDIT_WRITE" | "BLOCK_SUSPEND"
     * | "CHOWN" | "DAC_OVERRIDE" | "DAC_READ_SEARCH" | "FOWNER" | "FSETID" |
     * "IPC_LOCK" | "IPC_OWNER" | "KILL" | "LEASE" | "LINUX_IMMUTABLE" | "MAC_ADMIN" |
     * "MAC_OVERRIDE" | "MKNOD" | "NET_ADMIN" | "NET_BIND_SERVICE" | "NET_BROADCAST" |
     * "NET_RAW" | "SETFCAP" | "SETGID" | "SETPCAP" | "SETUID" | "SYS_ADMIN" |
     * "SYS_BOOT" | "SYS_CHROOT" | "SYS_MODULE" | "SYS_NICE" | "SYS_PACCT" |
     * "SYS_PTRACE" | "SYS_RAWIO" | "SYS_RESOURCE" | "SYS_TIME" | "SYS_TTY_CONFIG" |
     * "SYSLOG" | "WAKE_ALARM"</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetDrop() const{ return m_drop; }

    /**
     * <p>The Linux capabilities for the container that have been removed from the
     * default configuration provided by Docker. This parameter maps to
     * <code>CapDrop</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--cap-drop</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     * <p>Valid values: <code>"ALL" | "AUDIT_CONTROL" | "AUDIT_WRITE" | "BLOCK_SUSPEND"
     * | "CHOWN" | "DAC_OVERRIDE" | "DAC_READ_SEARCH" | "FOWNER" | "FSETID" |
     * "IPC_LOCK" | "IPC_OWNER" | "KILL" | "LEASE" | "LINUX_IMMUTABLE" | "MAC_ADMIN" |
     * "MAC_OVERRIDE" | "MKNOD" | "NET_ADMIN" | "NET_BIND_SERVICE" | "NET_BROADCAST" |
     * "NET_RAW" | "SETFCAP" | "SETGID" | "SETPCAP" | "SETUID" | "SYS_ADMIN" |
     * "SYS_BOOT" | "SYS_CHROOT" | "SYS_MODULE" | "SYS_NICE" | "SYS_PACCT" |
     * "SYS_PTRACE" | "SYS_RAWIO" | "SYS_RESOURCE" | "SYS_TIME" | "SYS_TTY_CONFIG" |
     * "SYSLOG" | "WAKE_ALARM"</code> </p>
     */
    inline bool DropHasBeenSet() const { return m_dropHasBeenSet; }

    /**
     * <p>The Linux capabilities for the container that have been removed from the
     * default configuration provided by Docker. This parameter maps to
     * <code>CapDrop</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--cap-drop</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     * <p>Valid values: <code>"ALL" | "AUDIT_CONTROL" | "AUDIT_WRITE" | "BLOCK_SUSPEND"
     * | "CHOWN" | "DAC_OVERRIDE" | "DAC_READ_SEARCH" | "FOWNER" | "FSETID" |
     * "IPC_LOCK" | "IPC_OWNER" | "KILL" | "LEASE" | "LINUX_IMMUTABLE" | "MAC_ADMIN" |
     * "MAC_OVERRIDE" | "MKNOD" | "NET_ADMIN" | "NET_BIND_SERVICE" | "NET_BROADCAST" |
     * "NET_RAW" | "SETFCAP" | "SETGID" | "SETPCAP" | "SETUID" | "SYS_ADMIN" |
     * "SYS_BOOT" | "SYS_CHROOT" | "SYS_MODULE" | "SYS_NICE" | "SYS_PACCT" |
     * "SYS_PTRACE" | "SYS_RAWIO" | "SYS_RESOURCE" | "SYS_TIME" | "SYS_TTY_CONFIG" |
     * "SYSLOG" | "WAKE_ALARM"</code> </p>
     */
    inline void SetDrop(const Aws::Vector<Aws::String>& value) { m_dropHasBeenSet = true; m_drop = value; }

    /**
     * <p>The Linux capabilities for the container that have been removed from the
     * default configuration provided by Docker. This parameter maps to
     * <code>CapDrop</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--cap-drop</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     * <p>Valid values: <code>"ALL" | "AUDIT_CONTROL" | "AUDIT_WRITE" | "BLOCK_SUSPEND"
     * | "CHOWN" | "DAC_OVERRIDE" | "DAC_READ_SEARCH" | "FOWNER" | "FSETID" |
     * "IPC_LOCK" | "IPC_OWNER" | "KILL" | "LEASE" | "LINUX_IMMUTABLE" | "MAC_ADMIN" |
     * "MAC_OVERRIDE" | "MKNOD" | "NET_ADMIN" | "NET_BIND_SERVICE" | "NET_BROADCAST" |
     * "NET_RAW" | "SETFCAP" | "SETGID" | "SETPCAP" | "SETUID" | "SYS_ADMIN" |
     * "SYS_BOOT" | "SYS_CHROOT" | "SYS_MODULE" | "SYS_NICE" | "SYS_PACCT" |
     * "SYS_PTRACE" | "SYS_RAWIO" | "SYS_RESOURCE" | "SYS_TIME" | "SYS_TTY_CONFIG" |
     * "SYSLOG" | "WAKE_ALARM"</code> </p>
     */
    inline void SetDrop(Aws::Vector<Aws::String>&& value) { m_dropHasBeenSet = true; m_drop = std::move(value); }

    /**
     * <p>The Linux capabilities for the container that have been removed from the
     * default configuration provided by Docker. This parameter maps to
     * <code>CapDrop</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--cap-drop</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     * <p>Valid values: <code>"ALL" | "AUDIT_CONTROL" | "AUDIT_WRITE" | "BLOCK_SUSPEND"
     * | "CHOWN" | "DAC_OVERRIDE" | "DAC_READ_SEARCH" | "FOWNER" | "FSETID" |
     * "IPC_LOCK" | "IPC_OWNER" | "KILL" | "LEASE" | "LINUX_IMMUTABLE" | "MAC_ADMIN" |
     * "MAC_OVERRIDE" | "MKNOD" | "NET_ADMIN" | "NET_BIND_SERVICE" | "NET_BROADCAST" |
     * "NET_RAW" | "SETFCAP" | "SETGID" | "SETPCAP" | "SETUID" | "SYS_ADMIN" |
     * "SYS_BOOT" | "SYS_CHROOT" | "SYS_MODULE" | "SYS_NICE" | "SYS_PACCT" |
     * "SYS_PTRACE" | "SYS_RAWIO" | "SYS_RESOURCE" | "SYS_TIME" | "SYS_TTY_CONFIG" |
     * "SYSLOG" | "WAKE_ALARM"</code> </p>
     */
    inline KernelCapabilities& WithDrop(const Aws::Vector<Aws::String>& value) { SetDrop(value); return *this;}

    /**
     * <p>The Linux capabilities for the container that have been removed from the
     * default configuration provided by Docker. This parameter maps to
     * <code>CapDrop</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--cap-drop</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     * <p>Valid values: <code>"ALL" | "AUDIT_CONTROL" | "AUDIT_WRITE" | "BLOCK_SUSPEND"
     * | "CHOWN" | "DAC_OVERRIDE" | "DAC_READ_SEARCH" | "FOWNER" | "FSETID" |
     * "IPC_LOCK" | "IPC_OWNER" | "KILL" | "LEASE" | "LINUX_IMMUTABLE" | "MAC_ADMIN" |
     * "MAC_OVERRIDE" | "MKNOD" | "NET_ADMIN" | "NET_BIND_SERVICE" | "NET_BROADCAST" |
     * "NET_RAW" | "SETFCAP" | "SETGID" | "SETPCAP" | "SETUID" | "SYS_ADMIN" |
     * "SYS_BOOT" | "SYS_CHROOT" | "SYS_MODULE" | "SYS_NICE" | "SYS_PACCT" |
     * "SYS_PTRACE" | "SYS_RAWIO" | "SYS_RESOURCE" | "SYS_TIME" | "SYS_TTY_CONFIG" |
     * "SYSLOG" | "WAKE_ALARM"</code> </p>
     */
    inline KernelCapabilities& WithDrop(Aws::Vector<Aws::String>&& value) { SetDrop(std::move(value)); return *this;}

    /**
     * <p>The Linux capabilities for the container that have been removed from the
     * default configuration provided by Docker. This parameter maps to
     * <code>CapDrop</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--cap-drop</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     * <p>Valid values: <code>"ALL" | "AUDIT_CONTROL" | "AUDIT_WRITE" | "BLOCK_SUSPEND"
     * | "CHOWN" | "DAC_OVERRIDE" | "DAC_READ_SEARCH" | "FOWNER" | "FSETID" |
     * "IPC_LOCK" | "IPC_OWNER" | "KILL" | "LEASE" | "LINUX_IMMUTABLE" | "MAC_ADMIN" |
     * "MAC_OVERRIDE" | "MKNOD" | "NET_ADMIN" | "NET_BIND_SERVICE" | "NET_BROADCAST" |
     * "NET_RAW" | "SETFCAP" | "SETGID" | "SETPCAP" | "SETUID" | "SYS_ADMIN" |
     * "SYS_BOOT" | "SYS_CHROOT" | "SYS_MODULE" | "SYS_NICE" | "SYS_PACCT" |
     * "SYS_PTRACE" | "SYS_RAWIO" | "SYS_RESOURCE" | "SYS_TIME" | "SYS_TTY_CONFIG" |
     * "SYSLOG" | "WAKE_ALARM"</code> </p>
     */
    inline KernelCapabilities& AddDrop(const Aws::String& value) { m_dropHasBeenSet = true; m_drop.push_back(value); return *this; }

    /**
     * <p>The Linux capabilities for the container that have been removed from the
     * default configuration provided by Docker. This parameter maps to
     * <code>CapDrop</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--cap-drop</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     * <p>Valid values: <code>"ALL" | "AUDIT_CONTROL" | "AUDIT_WRITE" | "BLOCK_SUSPEND"
     * | "CHOWN" | "DAC_OVERRIDE" | "DAC_READ_SEARCH" | "FOWNER" | "FSETID" |
     * "IPC_LOCK" | "IPC_OWNER" | "KILL" | "LEASE" | "LINUX_IMMUTABLE" | "MAC_ADMIN" |
     * "MAC_OVERRIDE" | "MKNOD" | "NET_ADMIN" | "NET_BIND_SERVICE" | "NET_BROADCAST" |
     * "NET_RAW" | "SETFCAP" | "SETGID" | "SETPCAP" | "SETUID" | "SYS_ADMIN" |
     * "SYS_BOOT" | "SYS_CHROOT" | "SYS_MODULE" | "SYS_NICE" | "SYS_PACCT" |
     * "SYS_PTRACE" | "SYS_RAWIO" | "SYS_RESOURCE" | "SYS_TIME" | "SYS_TTY_CONFIG" |
     * "SYSLOG" | "WAKE_ALARM"</code> </p>
     */
    inline KernelCapabilities& AddDrop(Aws::String&& value) { m_dropHasBeenSet = true; m_drop.push_back(std::move(value)); return *this; }

    /**
     * <p>The Linux capabilities for the container that have been removed from the
     * default configuration provided by Docker. This parameter maps to
     * <code>CapDrop</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--cap-drop</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     * <p>Valid values: <code>"ALL" | "AUDIT_CONTROL" | "AUDIT_WRITE" | "BLOCK_SUSPEND"
     * | "CHOWN" | "DAC_OVERRIDE" | "DAC_READ_SEARCH" | "FOWNER" | "FSETID" |
     * "IPC_LOCK" | "IPC_OWNER" | "KILL" | "LEASE" | "LINUX_IMMUTABLE" | "MAC_ADMIN" |
     * "MAC_OVERRIDE" | "MKNOD" | "NET_ADMIN" | "NET_BIND_SERVICE" | "NET_BROADCAST" |
     * "NET_RAW" | "SETFCAP" | "SETGID" | "SETPCAP" | "SETUID" | "SYS_ADMIN" |
     * "SYS_BOOT" | "SYS_CHROOT" | "SYS_MODULE" | "SYS_NICE" | "SYS_PACCT" |
     * "SYS_PTRACE" | "SYS_RAWIO" | "SYS_RESOURCE" | "SYS_TIME" | "SYS_TTY_CONFIG" |
     * "SYSLOG" | "WAKE_ALARM"</code> </p>
     */
    inline KernelCapabilities& AddDrop(const char* value) { m_dropHasBeenSet = true; m_drop.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_add;
    bool m_addHasBeenSet;

    Aws::Vector<Aws::String> m_drop;
    bool m_dropHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
