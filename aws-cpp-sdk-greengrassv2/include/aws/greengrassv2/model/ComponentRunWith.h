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
  class AWS_GREENGRASSV2_API ComponentRunWith
  {
  public:
    ComponentRunWith();
    ComponentRunWith(Aws::Utils::Json::JsonView jsonValue);
    ComponentRunWith& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The POSIX system user and (optional) group to use to run this component.
     * Specify the user and group separated by a colon (<code>:</code>) in the
     * following format: <code>user:group</code>. The group is optional. If you don't
     * specify a group, the IoT Greengrass Core software uses the primary user for the
     * group.</p> <p>If you omit this parameter, the IoT Greengrass Core software uses
     * the default system user and group that you configure on the Greengrass nucleus
     * component. For more information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/configure-greengrass-core-v2.html#configure-component-user">Configure
     * the user and group that run components</a>.</p>
     */
    inline const Aws::String& GetPosixUser() const{ return m_posixUser; }

    /**
     * <p>The POSIX system user and (optional) group to use to run this component.
     * Specify the user and group separated by a colon (<code>:</code>) in the
     * following format: <code>user:group</code>. The group is optional. If you don't
     * specify a group, the IoT Greengrass Core software uses the primary user for the
     * group.</p> <p>If you omit this parameter, the IoT Greengrass Core software uses
     * the default system user and group that you configure on the Greengrass nucleus
     * component. For more information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/configure-greengrass-core-v2.html#configure-component-user">Configure
     * the user and group that run components</a>.</p>
     */
    inline bool PosixUserHasBeenSet() const { return m_posixUserHasBeenSet; }

    /**
     * <p>The POSIX system user and (optional) group to use to run this component.
     * Specify the user and group separated by a colon (<code>:</code>) in the
     * following format: <code>user:group</code>. The group is optional. If you don't
     * specify a group, the IoT Greengrass Core software uses the primary user for the
     * group.</p> <p>If you omit this parameter, the IoT Greengrass Core software uses
     * the default system user and group that you configure on the Greengrass nucleus
     * component. For more information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/configure-greengrass-core-v2.html#configure-component-user">Configure
     * the user and group that run components</a>.</p>
     */
    inline void SetPosixUser(const Aws::String& value) { m_posixUserHasBeenSet = true; m_posixUser = value; }

    /**
     * <p>The POSIX system user and (optional) group to use to run this component.
     * Specify the user and group separated by a colon (<code>:</code>) in the
     * following format: <code>user:group</code>. The group is optional. If you don't
     * specify a group, the IoT Greengrass Core software uses the primary user for the
     * group.</p> <p>If you omit this parameter, the IoT Greengrass Core software uses
     * the default system user and group that you configure on the Greengrass nucleus
     * component. For more information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/configure-greengrass-core-v2.html#configure-component-user">Configure
     * the user and group that run components</a>.</p>
     */
    inline void SetPosixUser(Aws::String&& value) { m_posixUserHasBeenSet = true; m_posixUser = std::move(value); }

    /**
     * <p>The POSIX system user and (optional) group to use to run this component.
     * Specify the user and group separated by a colon (<code>:</code>) in the
     * following format: <code>user:group</code>. The group is optional. If you don't
     * specify a group, the IoT Greengrass Core software uses the primary user for the
     * group.</p> <p>If you omit this parameter, the IoT Greengrass Core software uses
     * the default system user and group that you configure on the Greengrass nucleus
     * component. For more information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/configure-greengrass-core-v2.html#configure-component-user">Configure
     * the user and group that run components</a>.</p>
     */
    inline void SetPosixUser(const char* value) { m_posixUserHasBeenSet = true; m_posixUser.assign(value); }

    /**
     * <p>The POSIX system user and (optional) group to use to run this component.
     * Specify the user and group separated by a colon (<code>:</code>) in the
     * following format: <code>user:group</code>. The group is optional. If you don't
     * specify a group, the IoT Greengrass Core software uses the primary user for the
     * group.</p> <p>If you omit this parameter, the IoT Greengrass Core software uses
     * the default system user and group that you configure on the Greengrass nucleus
     * component. For more information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/configure-greengrass-core-v2.html#configure-component-user">Configure
     * the user and group that run components</a>.</p>
     */
    inline ComponentRunWith& WithPosixUser(const Aws::String& value) { SetPosixUser(value); return *this;}

    /**
     * <p>The POSIX system user and (optional) group to use to run this component.
     * Specify the user and group separated by a colon (<code>:</code>) in the
     * following format: <code>user:group</code>. The group is optional. If you don't
     * specify a group, the IoT Greengrass Core software uses the primary user for the
     * group.</p> <p>If you omit this parameter, the IoT Greengrass Core software uses
     * the default system user and group that you configure on the Greengrass nucleus
     * component. For more information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/configure-greengrass-core-v2.html#configure-component-user">Configure
     * the user and group that run components</a>.</p>
     */
    inline ComponentRunWith& WithPosixUser(Aws::String&& value) { SetPosixUser(std::move(value)); return *this;}

    /**
     * <p>The POSIX system user and (optional) group to use to run this component.
     * Specify the user and group separated by a colon (<code>:</code>) in the
     * following format: <code>user:group</code>. The group is optional. If you don't
     * specify a group, the IoT Greengrass Core software uses the primary user for the
     * group.</p> <p>If you omit this parameter, the IoT Greengrass Core software uses
     * the default system user and group that you configure on the Greengrass nucleus
     * component. For more information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/configure-greengrass-core-v2.html#configure-component-user">Configure
     * the user and group that run components</a>.</p>
     */
    inline ComponentRunWith& WithPosixUser(const char* value) { SetPosixUser(value); return *this;}


    /**
     * <p>The system resource limits to apply to this component's process on the core
     * device.</p> <p>If you omit this parameter, the IoT Greengrass Core software uses
     * the default system resource limits that you configure on the Greengrass nucleus
     * component. For more information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/configure-greengrass-core-v2.html#configure-component-system-resource-limits">Configure
     * system resource limits for components</a>.</p>
     */
    inline const SystemResourceLimits& GetSystemResourceLimits() const{ return m_systemResourceLimits; }

    /**
     * <p>The system resource limits to apply to this component's process on the core
     * device.</p> <p>If you omit this parameter, the IoT Greengrass Core software uses
     * the default system resource limits that you configure on the Greengrass nucleus
     * component. For more information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/configure-greengrass-core-v2.html#configure-component-system-resource-limits">Configure
     * system resource limits for components</a>.</p>
     */
    inline bool SystemResourceLimitsHasBeenSet() const { return m_systemResourceLimitsHasBeenSet; }

    /**
     * <p>The system resource limits to apply to this component's process on the core
     * device.</p> <p>If you omit this parameter, the IoT Greengrass Core software uses
     * the default system resource limits that you configure on the Greengrass nucleus
     * component. For more information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/configure-greengrass-core-v2.html#configure-component-system-resource-limits">Configure
     * system resource limits for components</a>.</p>
     */
    inline void SetSystemResourceLimits(const SystemResourceLimits& value) { m_systemResourceLimitsHasBeenSet = true; m_systemResourceLimits = value; }

    /**
     * <p>The system resource limits to apply to this component's process on the core
     * device.</p> <p>If you omit this parameter, the IoT Greengrass Core software uses
     * the default system resource limits that you configure on the Greengrass nucleus
     * component. For more information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/configure-greengrass-core-v2.html#configure-component-system-resource-limits">Configure
     * system resource limits for components</a>.</p>
     */
    inline void SetSystemResourceLimits(SystemResourceLimits&& value) { m_systemResourceLimitsHasBeenSet = true; m_systemResourceLimits = std::move(value); }

    /**
     * <p>The system resource limits to apply to this component's process on the core
     * device.</p> <p>If you omit this parameter, the IoT Greengrass Core software uses
     * the default system resource limits that you configure on the Greengrass nucleus
     * component. For more information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/configure-greengrass-core-v2.html#configure-component-system-resource-limits">Configure
     * system resource limits for components</a>.</p>
     */
    inline ComponentRunWith& WithSystemResourceLimits(const SystemResourceLimits& value) { SetSystemResourceLimits(value); return *this;}

    /**
     * <p>The system resource limits to apply to this component's process on the core
     * device.</p> <p>If you omit this parameter, the IoT Greengrass Core software uses
     * the default system resource limits that you configure on the Greengrass nucleus
     * component. For more information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/configure-greengrass-core-v2.html#configure-component-system-resource-limits">Configure
     * system resource limits for components</a>.</p>
     */
    inline ComponentRunWith& WithSystemResourceLimits(SystemResourceLimits&& value) { SetSystemResourceLimits(std::move(value)); return *this;}

  private:

    Aws::String m_posixUser;
    bool m_posixUserHasBeenSet;

    SystemResourceLimits m_systemResourceLimits;
    bool m_systemResourceLimitsHasBeenSet;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
