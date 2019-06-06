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
   * <p>The configuration details for the App Mesh proxy.</p> <p>For tasks using the
   * EC2 launch type, the container instances require at least version 1.26.0 of the
   * container agent and at least version 1.26.0-1 of the <code>ecs-init</code>
   * package to enable a proxy configuration. If your container instances are
   * launched from the Amazon ECS-optimized AMI version <code>20190301</code> or
   * later, then they contain the required versions of the container agent and
   * <code>ecs-init</code>. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html">Amazon
   * ECS-optimized Linux AMI</a> in the <i>Amazon Elastic Container Service Developer
   * Guide</i>.</p> <p>For tasks using the Fargate launch type, the task or service
   * requires platform version 1.3.0 or later.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ProxyConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_ECS_API ProxyConfiguration
  {
  public:
    ProxyConfiguration();
    ProxyConfiguration(Aws::Utils::Json::JsonView jsonValue);
    ProxyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The proxy type. The only supported value is <code>APPMESH</code>.</p>
     */
    inline const ProxyConfigurationType& GetType() const{ return m_type; }

    /**
     * <p>The proxy type. The only supported value is <code>APPMESH</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The proxy type. The only supported value is <code>APPMESH</code>.</p>
     */
    inline void SetType(const ProxyConfigurationType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The proxy type. The only supported value is <code>APPMESH</code>.</p>
     */
    inline void SetType(ProxyConfigurationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The proxy type. The only supported value is <code>APPMESH</code>.</p>
     */
    inline ProxyConfiguration& WithType(const ProxyConfigurationType& value) { SetType(value); return *this;}

    /**
     * <p>The proxy type. The only supported value is <code>APPMESH</code>.</p>
     */
    inline ProxyConfiguration& WithType(ProxyConfigurationType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The name of the container that will serve as the App Mesh proxy.</p>
     */
    inline const Aws::String& GetContainerName() const{ return m_containerName; }

    /**
     * <p>The name of the container that will serve as the App Mesh proxy.</p>
     */
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }

    /**
     * <p>The name of the container that will serve as the App Mesh proxy.</p>
     */
    inline void SetContainerName(const Aws::String& value) { m_containerNameHasBeenSet = true; m_containerName = value; }

    /**
     * <p>The name of the container that will serve as the App Mesh proxy.</p>
     */
    inline void SetContainerName(Aws::String&& value) { m_containerNameHasBeenSet = true; m_containerName = std::move(value); }

    /**
     * <p>The name of the container that will serve as the App Mesh proxy.</p>
     */
    inline void SetContainerName(const char* value) { m_containerNameHasBeenSet = true; m_containerName.assign(value); }

    /**
     * <p>The name of the container that will serve as the App Mesh proxy.</p>
     */
    inline ProxyConfiguration& WithContainerName(const Aws::String& value) { SetContainerName(value); return *this;}

    /**
     * <p>The name of the container that will serve as the App Mesh proxy.</p>
     */
    inline ProxyConfiguration& WithContainerName(Aws::String&& value) { SetContainerName(std::move(value)); return *this;}

    /**
     * <p>The name of the container that will serve as the App Mesh proxy.</p>
     */
    inline ProxyConfiguration& WithContainerName(const char* value) { SetContainerName(value); return *this;}


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
    inline const Aws::Vector<KeyValuePair>& GetProperties() const{ return m_properties; }

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
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }

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
    inline void SetProperties(const Aws::Vector<KeyValuePair>& value) { m_propertiesHasBeenSet = true; m_properties = value; }

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
    inline void SetProperties(Aws::Vector<KeyValuePair>&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }

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
    inline ProxyConfiguration& WithProperties(const Aws::Vector<KeyValuePair>& value) { SetProperties(value); return *this;}

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
    inline ProxyConfiguration& WithProperties(Aws::Vector<KeyValuePair>&& value) { SetProperties(std::move(value)); return *this;}

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
    inline ProxyConfiguration& AddProperties(const KeyValuePair& value) { m_propertiesHasBeenSet = true; m_properties.push_back(value); return *this; }

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
    inline ProxyConfiguration& AddProperties(KeyValuePair&& value) { m_propertiesHasBeenSet = true; m_properties.push_back(std::move(value)); return *this; }

  private:

    ProxyConfigurationType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_containerName;
    bool m_containerNameHasBeenSet;

    Aws::Vector<KeyValuePair> m_properties;
    bool m_propertiesHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
