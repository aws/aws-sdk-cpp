/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lightsail/model/ContainerServiceProtocol.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the settings of a container that will be launched, or that is
   * launched, to an Amazon Lightsail container service.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/Container">AWS
   * API Reference</a></p>
   */
  class Container
  {
  public:
    AWS_LIGHTSAIL_API Container() = default;
    AWS_LIGHTSAIL_API Container(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Container& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the image used for the container.</p> <p>Container images sourced
     * from your Lightsail container service, that are registered and stored on your
     * service, start with a colon (<code>:</code>). For example, if your container
     * service name is <code>container-service-1</code>, the container image label is
     * <code>mystaticsite</code>, and you want to use the third (<code>3</code>)
     * version of the registered container image, then you should specify
     * <code>:container-service-1.mystaticsite.3</code>. To use the latest version of a
     * container image, specify <code>latest</code> instead of a version number (for
     * example, <code>:container-service-1.mystaticsite.latest</code>). Lightsail will
     * automatically use the highest numbered version of the registered container
     * image.</p> <p>Container images sourced from a public registry like Docker Hub
     * don't start with a colon. For example, <code>nginx:latest</code> or
     * <code>nginx</code>.</p>
     */
    inline const Aws::String& GetImage() const { return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    template<typename ImageT = Aws::String>
    void SetImage(ImageT&& value) { m_imageHasBeenSet = true; m_image = std::forward<ImageT>(value); }
    template<typename ImageT = Aws::String>
    Container& WithImage(ImageT&& value) { SetImage(std::forward<ImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch command for the container.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCommand() const { return m_command; }
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
    template<typename CommandT = Aws::Vector<Aws::String>>
    void SetCommand(CommandT&& value) { m_commandHasBeenSet = true; m_command = std::forward<CommandT>(value); }
    template<typename CommandT = Aws::Vector<Aws::String>>
    Container& WithCommand(CommandT&& value) { SetCommand(std::forward<CommandT>(value)); return *this;}
    template<typename CommandT = Aws::String>
    Container& AddCommand(CommandT&& value) { m_commandHasBeenSet = true; m_command.emplace_back(std::forward<CommandT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The environment variables of the container.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const { return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    template<typename EnvironmentT = Aws::Map<Aws::String, Aws::String>>
    void SetEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment = std::forward<EnvironmentT>(value); }
    template<typename EnvironmentT = Aws::Map<Aws::String, Aws::String>>
    Container& WithEnvironment(EnvironmentT&& value) { SetEnvironment(std::forward<EnvironmentT>(value)); return *this;}
    template<typename EnvironmentKeyT = Aws::String, typename EnvironmentValueT = Aws::String>
    Container& AddEnvironment(EnvironmentKeyT&& key, EnvironmentValueT&& value) {
      m_environmentHasBeenSet = true; m_environment.emplace(std::forward<EnvironmentKeyT>(key), std::forward<EnvironmentValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The open firewall ports of the container.</p>
     */
    inline const Aws::Map<Aws::String, ContainerServiceProtocol>& GetPorts() const { return m_ports; }
    inline bool PortsHasBeenSet() const { return m_portsHasBeenSet; }
    template<typename PortsT = Aws::Map<Aws::String, ContainerServiceProtocol>>
    void SetPorts(PortsT&& value) { m_portsHasBeenSet = true; m_ports = std::forward<PortsT>(value); }
    template<typename PortsT = Aws::Map<Aws::String, ContainerServiceProtocol>>
    Container& WithPorts(PortsT&& value) { SetPorts(std::forward<PortsT>(value)); return *this;}
    inline Container& AddPorts(Aws::String key, ContainerServiceProtocol value) {
      m_portsHasBeenSet = true; m_ports.emplace(key, value); return *this;
    }
    ///@}
  private:

    Aws::String m_image;
    bool m_imageHasBeenSet = false;

    Aws::Vector<Aws::String> m_command;
    bool m_commandHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environment;
    bool m_environmentHasBeenSet = false;

    Aws::Map<Aws::String, ContainerServiceProtocol> m_ports;
    bool m_portsHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
