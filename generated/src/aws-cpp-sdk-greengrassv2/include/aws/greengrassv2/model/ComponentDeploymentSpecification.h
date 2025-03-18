/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrassv2/model/ComponentConfigurationUpdate.h>
#include <aws/greengrassv2/model/ComponentRunWith.h>
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
   * <p>Contains information about a component to deploy.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ComponentDeploymentSpecification">AWS
   * API Reference</a></p>
   */
  class ComponentDeploymentSpecification
  {
  public:
    AWS_GREENGRASSV2_API ComponentDeploymentSpecification() = default;
    AWS_GREENGRASSV2_API ComponentDeploymentSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API ComponentDeploymentSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version of the component.</p>
     */
    inline const Aws::String& GetComponentVersion() const { return m_componentVersion; }
    inline bool ComponentVersionHasBeenSet() const { return m_componentVersionHasBeenSet; }
    template<typename ComponentVersionT = Aws::String>
    void SetComponentVersion(ComponentVersionT&& value) { m_componentVersionHasBeenSet = true; m_componentVersion = std::forward<ComponentVersionT>(value); }
    template<typename ComponentVersionT = Aws::String>
    ComponentDeploymentSpecification& WithComponentVersion(ComponentVersionT&& value) { SetComponentVersion(std::forward<ComponentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration updates to deploy for the component. You can define
     * <i>reset</i> updates and <i>merge</i> updates. A reset updates the keys that you
     * specify to the default configuration for the component. A merge updates the core
     * device's component configuration with the keys and values that you specify. The
     * IoT Greengrass Core software applies reset updates before it applies merge
     * updates. For more information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/update-component-configurations.html">Update
     * component configurations</a> in the <i>IoT Greengrass V2 Developer
     * Guide</i>.</p>
     */
    inline const ComponentConfigurationUpdate& GetConfigurationUpdate() const { return m_configurationUpdate; }
    inline bool ConfigurationUpdateHasBeenSet() const { return m_configurationUpdateHasBeenSet; }
    template<typename ConfigurationUpdateT = ComponentConfigurationUpdate>
    void SetConfigurationUpdate(ConfigurationUpdateT&& value) { m_configurationUpdateHasBeenSet = true; m_configurationUpdate = std::forward<ConfigurationUpdateT>(value); }
    template<typename ConfigurationUpdateT = ComponentConfigurationUpdate>
    ComponentDeploymentSpecification& WithConfigurationUpdate(ConfigurationUpdateT&& value) { SetConfigurationUpdate(std::forward<ConfigurationUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system user and group that the IoT Greengrass Core software uses to run
     * component processes on the core device. If you omit this parameter, the IoT
     * Greengrass Core software uses the system user and group that you configure for
     * the core device. For more information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/configure-greengrass-core-v2.html#configure-component-user">Configure
     * the user and group that run components</a> in the <i>IoT Greengrass V2 Developer
     * Guide</i>.</p>
     */
    inline const ComponentRunWith& GetRunWith() const { return m_runWith; }
    inline bool RunWithHasBeenSet() const { return m_runWithHasBeenSet; }
    template<typename RunWithT = ComponentRunWith>
    void SetRunWith(RunWithT&& value) { m_runWithHasBeenSet = true; m_runWith = std::forward<RunWithT>(value); }
    template<typename RunWithT = ComponentRunWith>
    ComponentDeploymentSpecification& WithRunWith(RunWithT&& value) { SetRunWith(std::forward<RunWithT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_componentVersion;
    bool m_componentVersionHasBeenSet = false;

    ComponentConfigurationUpdate m_configurationUpdate;
    bool m_configurationUpdateHasBeenSet = false;

    ComponentRunWith m_runWith;
    bool m_runWithHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
