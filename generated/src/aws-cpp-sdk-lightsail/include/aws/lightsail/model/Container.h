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
    AWS_LIGHTSAIL_API Container();
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
    inline const Aws::String& GetImage() const{ return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    inline void SetImage(const Aws::String& value) { m_imageHasBeenSet = true; m_image = value; }
    inline void SetImage(Aws::String&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }
    inline void SetImage(const char* value) { m_imageHasBeenSet = true; m_image.assign(value); }
    inline Container& WithImage(const Aws::String& value) { SetImage(value); return *this;}
    inline Container& WithImage(Aws::String&& value) { SetImage(std::move(value)); return *this;}
    inline Container& WithImage(const char* value) { SetImage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch command for the container.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCommand() const{ return m_command; }
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
    inline void SetCommand(const Aws::Vector<Aws::String>& value) { m_commandHasBeenSet = true; m_command = value; }
    inline void SetCommand(Aws::Vector<Aws::String>&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }
    inline Container& WithCommand(const Aws::Vector<Aws::String>& value) { SetCommand(value); return *this;}
    inline Container& WithCommand(Aws::Vector<Aws::String>&& value) { SetCommand(std::move(value)); return *this;}
    inline Container& AddCommand(const Aws::String& value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }
    inline Container& AddCommand(Aws::String&& value) { m_commandHasBeenSet = true; m_command.push_back(std::move(value)); return *this; }
    inline Container& AddCommand(const char* value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The environment variables of the container.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const{ return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    inline void SetEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { m_environmentHasBeenSet = true; m_environment = value; }
    inline void SetEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }
    inline Container& WithEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironment(value); return *this;}
    inline Container& WithEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironment(std::move(value)); return *this;}
    inline Container& AddEnvironment(const Aws::String& key, const Aws::String& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, value); return *this; }
    inline Container& AddEnvironment(Aws::String&& key, const Aws::String& value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), value); return *this; }
    inline Container& AddEnvironment(const Aws::String& key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, std::move(value)); return *this; }
    inline Container& AddEnvironment(Aws::String&& key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), std::move(value)); return *this; }
    inline Container& AddEnvironment(const char* key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, std::move(value)); return *this; }
    inline Container& AddEnvironment(Aws::String&& key, const char* value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), value); return *this; }
    inline Container& AddEnvironment(const char* key, const char* value) { m_environmentHasBeenSet = true; m_environment.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The open firewall ports of the container.</p>
     */
    inline const Aws::Map<Aws::String, ContainerServiceProtocol>& GetPorts() const{ return m_ports; }
    inline bool PortsHasBeenSet() const { return m_portsHasBeenSet; }
    inline void SetPorts(const Aws::Map<Aws::String, ContainerServiceProtocol>& value) { m_portsHasBeenSet = true; m_ports = value; }
    inline void SetPorts(Aws::Map<Aws::String, ContainerServiceProtocol>&& value) { m_portsHasBeenSet = true; m_ports = std::move(value); }
    inline Container& WithPorts(const Aws::Map<Aws::String, ContainerServiceProtocol>& value) { SetPorts(value); return *this;}
    inline Container& WithPorts(Aws::Map<Aws::String, ContainerServiceProtocol>&& value) { SetPorts(std::move(value)); return *this;}
    inline Container& AddPorts(const Aws::String& key, const ContainerServiceProtocol& value) { m_portsHasBeenSet = true; m_ports.emplace(key, value); return *this; }
    inline Container& AddPorts(Aws::String&& key, const ContainerServiceProtocol& value) { m_portsHasBeenSet = true; m_ports.emplace(std::move(key), value); return *this; }
    inline Container& AddPorts(const Aws::String& key, ContainerServiceProtocol&& value) { m_portsHasBeenSet = true; m_ports.emplace(key, std::move(value)); return *this; }
    inline Container& AddPorts(Aws::String&& key, ContainerServiceProtocol&& value) { m_portsHasBeenSet = true; m_ports.emplace(std::move(key), std::move(value)); return *this; }
    inline Container& AddPorts(const char* key, ContainerServiceProtocol&& value) { m_portsHasBeenSet = true; m_ports.emplace(key, std::move(value)); return *this; }
    inline Container& AddPorts(const char* key, const ContainerServiceProtocol& value) { m_portsHasBeenSet = true; m_ports.emplace(key, value); return *this; }
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
