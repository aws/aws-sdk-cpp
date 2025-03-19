/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>The Linux capabilities to add or remove from the default Docker configuration
   * for a container defined in the task definition. For more detailed information
   * about these Linux capabilities, see the <a
   * href="http://man7.org/linux/man-pages/man7/capabilities.7.html">capabilities(7)</a>
   * Linux manual page.</p> <p>The following describes how Docker processes the Linux
   * capabilities specified in the <code>add</code> and <code>drop</code> request
   * parameters. For information about the latest behavior, see <a
   * href="https://forums.docker.com/t/docker-compose-order-of-cap-drop-and-cap-add/97136/1">Docker
   * Compose: order of cap_drop and cap_add</a> in the Docker Community Forum.</p>
   * <ul> <li> <p>When the container is a privleged container, the container
   * capabilities are all of the default Docker capabilities. The capabilities
   * specified in the <code>add</code> request parameter, and the <code>drop</code>
   * request parameter are ignored.</p> </li> <li> <p>When the <code>add</code>
   * request parameter is set to ALL, the container capabilities are all of the
   * default Docker capabilities, excluding those specified in the <code>drop</code>
   * request parameter.</p> </li> <li> <p>When the <code>drop</code> request
   * parameter is set to ALL, the container capabilities are the capabilities
   * specified in the <code>add</code> request parameter.</p> </li> <li> <p>When the
   * <code>add</code> request parameter and the <code>drop</code> request parameter
   * are both empty, the capabilities the container capabilities are all of the
   * default Docker capabilities.</p> </li> <li> <p>The default is to first drop the
   * capabilities specified in the <code>drop</code> request parameter, and then add
   * the capabilities specified in the <code>add</code> request parameter.</p> </li>
   * </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/KernelCapabilities">AWS
   * API Reference</a></p>
   */
  class KernelCapabilities
  {
  public:
    AWS_ECS_API KernelCapabilities() = default;
    AWS_ECS_API KernelCapabilities(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API KernelCapabilities& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Linux capabilities for the container that have been added to the default
     * configuration provided by Docker. This parameter maps to <code>CapAdd</code> in
     * the docker container create command and the <code>--cap-add</code> option to
     * docker run.</p>  <p>Tasks launched on Fargate only support adding the
     * <code>SYS_PTRACE</code> kernel capability.</p>  <p>Valid values:
     * <code>"ALL" | "AUDIT_CONTROL" | "AUDIT_WRITE" | "BLOCK_SUSPEND" | "CHOWN" |
     * "DAC_OVERRIDE" | "DAC_READ_SEARCH" | "FOWNER" | "FSETID" | "IPC_LOCK" |
     * "IPC_OWNER" | "KILL" | "LEASE" | "LINUX_IMMUTABLE" | "MAC_ADMIN" |
     * "MAC_OVERRIDE" | "MKNOD" | "NET_ADMIN" | "NET_BIND_SERVICE" | "NET_BROADCAST" |
     * "NET_RAW" | "SETFCAP" | "SETGID" | "SETPCAP" | "SETUID" | "SYS_ADMIN" |
     * "SYS_BOOT" | "SYS_CHROOT" | "SYS_MODULE" | "SYS_NICE" | "SYS_PACCT" |
     * "SYS_PTRACE" | "SYS_RAWIO" | "SYS_RESOURCE" | "SYS_TIME" | "SYS_TTY_CONFIG" |
     * "SYSLOG" | "WAKE_ALARM"</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetAdd() const { return m_add; }
    inline bool AddHasBeenSet() const { return m_addHasBeenSet; }
    template<typename AddT = Aws::Vector<Aws::String>>
    void SetAdd(AddT&& value) { m_addHasBeenSet = true; m_add = std::forward<AddT>(value); }
    template<typename AddT = Aws::Vector<Aws::String>>
    KernelCapabilities& WithAdd(AddT&& value) { SetAdd(std::forward<AddT>(value)); return *this;}
    template<typename AddT = Aws::String>
    KernelCapabilities& AddAdd(AddT&& value) { m_addHasBeenSet = true; m_add.emplace_back(std::forward<AddT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Linux capabilities for the container that have been removed from the
     * default configuration provided by Docker. This parameter maps to
     * <code>CapDrop</code> in the docker container create command and the
     * <code>--cap-drop</code> option to docker run.</p> <p>Valid values: <code>"ALL" |
     * "AUDIT_CONTROL" | "AUDIT_WRITE" | "BLOCK_SUSPEND" | "CHOWN" | "DAC_OVERRIDE" |
     * "DAC_READ_SEARCH" | "FOWNER" | "FSETID" | "IPC_LOCK" | "IPC_OWNER" | "KILL" |
     * "LEASE" | "LINUX_IMMUTABLE" | "MAC_ADMIN" | "MAC_OVERRIDE" | "MKNOD" |
     * "NET_ADMIN" | "NET_BIND_SERVICE" | "NET_BROADCAST" | "NET_RAW" | "SETFCAP" |
     * "SETGID" | "SETPCAP" | "SETUID" | "SYS_ADMIN" | "SYS_BOOT" | "SYS_CHROOT" |
     * "SYS_MODULE" | "SYS_NICE" | "SYS_PACCT" | "SYS_PTRACE" | "SYS_RAWIO" |
     * "SYS_RESOURCE" | "SYS_TIME" | "SYS_TTY_CONFIG" | "SYSLOG" | "WAKE_ALARM"</code>
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetDrop() const { return m_drop; }
    inline bool DropHasBeenSet() const { return m_dropHasBeenSet; }
    template<typename DropT = Aws::Vector<Aws::String>>
    void SetDrop(DropT&& value) { m_dropHasBeenSet = true; m_drop = std::forward<DropT>(value); }
    template<typename DropT = Aws::Vector<Aws::String>>
    KernelCapabilities& WithDrop(DropT&& value) { SetDrop(std::forward<DropT>(value)); return *this;}
    template<typename DropT = Aws::String>
    KernelCapabilities& AddDrop(DropT&& value) { m_dropHasBeenSet = true; m_drop.emplace_back(std::forward<DropT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_add;
    bool m_addHasBeenSet = false;

    Aws::Vector<Aws::String> m_drop;
    bool m_dropHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
