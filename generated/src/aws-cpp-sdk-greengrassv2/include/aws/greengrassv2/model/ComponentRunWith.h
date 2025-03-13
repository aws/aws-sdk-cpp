/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrassv2/model/SystemResourceLimits.h>
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
namespace GreengrassV2
{
namespace Model
{

  /**
   * <p>Contains information system user and group that the IoT Greengrass Core
   * software uses to run component processes on the core device. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/configure-greengrass-core-v2.html#configure-component-user">Configure
   * the user and group that run components</a> in the <i>IoT Greengrass V2 Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ComponentRunWith">AWS
   * API Reference</a></p>
   */
  class ComponentRunWith
  {
  public:
    AWS_GREENGRASSV2_API ComponentRunWith() = default;
    AWS_GREENGRASSV2_API ComponentRunWith(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API ComponentRunWith& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The POSIX system user and, optionally, group to use to run this component on
     * Linux core devices. The user, and group if specified, must exist on each Linux
     * core device. Specify the user and group separated by a colon (<code>:</code>) in
     * the following format: <code>user:group</code>. The group is optional. If you
     * don't specify a group, the IoT Greengrass Core software uses the primary user
     * for the group.</p> <p>If you omit this parameter, the IoT Greengrass Core
     * software uses the default system user and group that you configure on the
     * Greengrass nucleus component. For more information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/configure-greengrass-core-v2.html#configure-component-user">Configure
     * the user and group that run components</a>.</p>
     */
    inline const Aws::String& GetPosixUser() const { return m_posixUser; }
    inline bool PosixUserHasBeenSet() const { return m_posixUserHasBeenSet; }
    template<typename PosixUserT = Aws::String>
    void SetPosixUser(PosixUserT&& value) { m_posixUserHasBeenSet = true; m_posixUser = std::forward<PosixUserT>(value); }
    template<typename PosixUserT = Aws::String>
    ComponentRunWith& WithPosixUser(PosixUserT&& value) { SetPosixUser(std::forward<PosixUserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system resource limits to apply to this component's process on the core
     * device. IoT Greengrass currently supports this feature on only Linux core
     * devices.</p> <p>If you omit this parameter, the IoT Greengrass Core software
     * uses the default system resource limits that you configure on the Greengrass
     * nucleus component. For more information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/configure-greengrass-core-v2.html#configure-component-system-resource-limits">Configure
     * system resource limits for components</a>.</p>
     */
    inline const SystemResourceLimits& GetSystemResourceLimits() const { return m_systemResourceLimits; }
    inline bool SystemResourceLimitsHasBeenSet() const { return m_systemResourceLimitsHasBeenSet; }
    template<typename SystemResourceLimitsT = SystemResourceLimits>
    void SetSystemResourceLimits(SystemResourceLimitsT&& value) { m_systemResourceLimitsHasBeenSet = true; m_systemResourceLimits = std::forward<SystemResourceLimitsT>(value); }
    template<typename SystemResourceLimitsT = SystemResourceLimits>
    ComponentRunWith& WithSystemResourceLimits(SystemResourceLimitsT&& value) { SetSystemResourceLimits(std::forward<SystemResourceLimitsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Windows user to use to run this component on Windows core devices. The
     * user must exist on each Windows core device, and its name and password must be
     * in the LocalSystem account's Credentials Manager instance.</p> <p>If you omit
     * this parameter, the IoT Greengrass Core software uses the default Windows user
     * that you configure on the Greengrass nucleus component. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/configure-greengrass-core-v2.html#configure-component-user">Configure
     * the user and group that run components</a>.</p>
     */
    inline const Aws::String& GetWindowsUser() const { return m_windowsUser; }
    inline bool WindowsUserHasBeenSet() const { return m_windowsUserHasBeenSet; }
    template<typename WindowsUserT = Aws::String>
    void SetWindowsUser(WindowsUserT&& value) { m_windowsUserHasBeenSet = true; m_windowsUser = std::forward<WindowsUserT>(value); }
    template<typename WindowsUserT = Aws::String>
    ComponentRunWith& WithWindowsUser(WindowsUserT&& value) { SetWindowsUser(std::forward<WindowsUserT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_posixUser;
    bool m_posixUserHasBeenSet = false;

    SystemResourceLimits m_systemResourceLimits;
    bool m_systemResourceLimitsHasBeenSet = false;

    Aws::String m_windowsUser;
    bool m_windowsUserHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
