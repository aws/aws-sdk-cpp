/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/ProxyConfigurationType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/KeyValuePair.h>
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
   * <p>The configuration details for the App Mesh proxy.</p> <p>For tasks that use
   * the EC2 launch type, the container instances require at least version 1.26.0 of
   * the container agent and at least version 1.26.0-1 of the <code>ecs-init</code>
   * package to use a proxy configuration. If your container instances are launched
   * from the Amazon ECS optimized AMI version <code>20190301</code> or later, then
   * they contain the required versions of the container agent and
   * <code>ecs-init</code>. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html">Amazon
   * ECS-optimized Linux AMI</a> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ProxyConfiguration">AWS
   * API Reference</a></p>
   */
  class ProxyConfiguration
  {
  public:
    AWS_ECS_API ProxyConfiguration() = default;
    AWS_ECS_API ProxyConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ProxyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The proxy type. The only supported value is <code>APPMESH</code>.</p>
     */
    inline ProxyConfigurationType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ProxyConfigurationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ProxyConfiguration& WithType(ProxyConfigurationType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the container that will serve as the App Mesh proxy.</p>
     */
    inline const Aws::String& GetContainerName() const { return m_containerName; }
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }
    template<typename ContainerNameT = Aws::String>
    void SetContainerName(ContainerNameT&& value) { m_containerNameHasBeenSet = true; m_containerName = std::forward<ContainerNameT>(value); }
    template<typename ContainerNameT = Aws::String>
    ProxyConfiguration& WithContainerName(ContainerNameT&& value) { SetContainerName(std::forward<ContainerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The set of network configuration parameters to provide the Container Network
     * Interface (CNI) plugin, specified as key-value pairs.</p> <ul> <li> <p>
     * <code>IgnoredUID</code> - (Required) The user ID (UID) of the proxy container as
     * defined by the <code>user</code> parameter in a container definition. This is
     * used to ensure the proxy ignores its own traffic. If <code>IgnoredGID</code> is
     * specified, this field can be empty.</p> </li> <li> <p> <code>IgnoredGID</code> -
     * (Required) The group ID (GID) of the proxy container as defined by the
     * <code>user</code> parameter in a container definition. This is used to ensure
     * the proxy ignores its own traffic. If <code>IgnoredUID</code> is specified, this
     * field can be empty.</p> </li> <li> <p> <code>AppPorts</code> - (Required) The
     * list of ports that the application uses. Network traffic to these ports is
     * forwarded to the <code>ProxyIngressPort</code> and
     * <code>ProxyEgressPort</code>.</p> </li> <li> <p> <code>ProxyIngressPort</code> -
     * (Required) Specifies the port that incoming traffic to the <code>AppPorts</code>
     * is directed to.</p> </li> <li> <p> <code>ProxyEgressPort</code> - (Required)
     * Specifies the port that outgoing traffic from the <code>AppPorts</code> is
     * directed to.</p> </li> <li> <p> <code>EgressIgnoredPorts</code> - (Required) The
     * egress traffic going to the specified ports is ignored and not redirected to the
     * <code>ProxyEgressPort</code>. It can be an empty list.</p> </li> <li> <p>
     * <code>EgressIgnoredIPs</code> - (Required) The egress traffic going to the
     * specified IP addresses is ignored and not redirected to the
     * <code>ProxyEgressPort</code>. It can be an empty list.</p> </li> </ul>
     */
    inline const Aws::Vector<KeyValuePair>& GetProperties() const { return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    template<typename PropertiesT = Aws::Vector<KeyValuePair>>
    void SetProperties(PropertiesT&& value) { m_propertiesHasBeenSet = true; m_properties = std::forward<PropertiesT>(value); }
    template<typename PropertiesT = Aws::Vector<KeyValuePair>>
    ProxyConfiguration& WithProperties(PropertiesT&& value) { SetProperties(std::forward<PropertiesT>(value)); return *this;}
    template<typename PropertiesT = KeyValuePair>
    ProxyConfiguration& AddProperties(PropertiesT&& value) { m_propertiesHasBeenSet = true; m_properties.emplace_back(std::forward<PropertiesT>(value)); return *this; }
    ///@}
  private:

    ProxyConfigurationType m_type{ProxyConfigurationType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_containerName;
    bool m_containerNameHasBeenSet = false;

    Aws::Vector<KeyValuePair> m_properties;
    bool m_propertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
