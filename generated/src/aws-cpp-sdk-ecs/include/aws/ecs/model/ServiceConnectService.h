/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/TimeoutConfiguration.h>
#include <aws/ecs/model/ServiceConnectTlsConfiguration.h>
#include <aws/ecs/model/ServiceConnectClientAlias.h>
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
   * <p>The Service Connect service object configuration. For more information, see
   * <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-connect.html">Service
   * Connect</a> in the <i>Amazon Elastic Container Service Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ServiceConnectService">AWS
   * API Reference</a></p>
   */
  class ServiceConnectService
  {
  public:
    AWS_ECS_API ServiceConnectService() = default;
    AWS_ECS_API ServiceConnectService(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ServiceConnectService& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>portName</code> must match the name of one of the
     * <code>portMappings</code> from all the containers in the task definition of this
     * Amazon ECS service.</p>
     */
    inline const Aws::String& GetPortName() const { return m_portName; }
    inline bool PortNameHasBeenSet() const { return m_portNameHasBeenSet; }
    template<typename PortNameT = Aws::String>
    void SetPortName(PortNameT&& value) { m_portNameHasBeenSet = true; m_portName = std::forward<PortNameT>(value); }
    template<typename PortNameT = Aws::String>
    ServiceConnectService& WithPortName(PortNameT&& value) { SetPortName(std::forward<PortNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>discoveryName</code> is the name of the new Cloud Map service that
     * Amazon ECS creates for this Amazon ECS service. This must be unique within the
     * Cloud Map namespace. The name can contain up to 64 characters. The name can
     * include lowercase letters, numbers, underscores (_), and hyphens (-). The name
     * can't start with a hyphen.</p> <p>If the <code>discoveryName</code> isn't
     * specified, the port mapping name from the task definition is used in
     * <code>portName.namespace</code>.</p>
     */
    inline const Aws::String& GetDiscoveryName() const { return m_discoveryName; }
    inline bool DiscoveryNameHasBeenSet() const { return m_discoveryNameHasBeenSet; }
    template<typename DiscoveryNameT = Aws::String>
    void SetDiscoveryName(DiscoveryNameT&& value) { m_discoveryNameHasBeenSet = true; m_discoveryName = std::forward<DiscoveryNameT>(value); }
    template<typename DiscoveryNameT = Aws::String>
    ServiceConnectService& WithDiscoveryName(DiscoveryNameT&& value) { SetDiscoveryName(std::forward<DiscoveryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of client aliases for this Service Connect service. You use these to
     * assign names that can be used by client applications. The maximum number of
     * client aliases that you can have in this list is 1.</p> <p>Each alias
     * ("endpoint") is a fully-qualified name and port number that other Amazon ECS
     * tasks ("clients") can use to connect to this service.</p> <p>Each name and port
     * mapping must be unique within the namespace.</p> <p>For each
     * <code>ServiceConnectService</code>, you must provide at least one
     * <code>clientAlias</code> with one <code>port</code>.</p>
     */
    inline const Aws::Vector<ServiceConnectClientAlias>& GetClientAliases() const { return m_clientAliases; }
    inline bool ClientAliasesHasBeenSet() const { return m_clientAliasesHasBeenSet; }
    template<typename ClientAliasesT = Aws::Vector<ServiceConnectClientAlias>>
    void SetClientAliases(ClientAliasesT&& value) { m_clientAliasesHasBeenSet = true; m_clientAliases = std::forward<ClientAliasesT>(value); }
    template<typename ClientAliasesT = Aws::Vector<ServiceConnectClientAlias>>
    ServiceConnectService& WithClientAliases(ClientAliasesT&& value) { SetClientAliases(std::forward<ClientAliasesT>(value)); return *this;}
    template<typename ClientAliasesT = ServiceConnectClientAlias>
    ServiceConnectService& AddClientAliases(ClientAliasesT&& value) { m_clientAliasesHasBeenSet = true; m_clientAliases.emplace_back(std::forward<ClientAliasesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The port number for the Service Connect proxy to listen on.</p> <p>Use the
     * value of this field to bypass the proxy for traffic on the port number specified
     * in the named <code>portMapping</code> in the task definition of this
     * application, and then use it in your VPC security groups to allow traffic into
     * the proxy for this Amazon ECS service.</p> <p>In <code>awsvpc</code> mode and
     * Fargate, the default value is the container port number. The container port
     * number is in the <code>portMapping</code> in the task definition. In bridge
     * mode, the default value is the ephemeral port of the Service Connect proxy.</p>
     */
    inline int GetIngressPortOverride() const { return m_ingressPortOverride; }
    inline bool IngressPortOverrideHasBeenSet() const { return m_ingressPortOverrideHasBeenSet; }
    inline void SetIngressPortOverride(int value) { m_ingressPortOverrideHasBeenSet = true; m_ingressPortOverride = value; }
    inline ServiceConnectService& WithIngressPortOverride(int value) { SetIngressPortOverride(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A reference to an object that represents the configured timeouts for Service
     * Connect.</p>
     */
    inline const TimeoutConfiguration& GetTimeout() const { return m_timeout; }
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }
    template<typename TimeoutT = TimeoutConfiguration>
    void SetTimeout(TimeoutT&& value) { m_timeoutHasBeenSet = true; m_timeout = std::forward<TimeoutT>(value); }
    template<typename TimeoutT = TimeoutConfiguration>
    ServiceConnectService& WithTimeout(TimeoutT&& value) { SetTimeout(std::forward<TimeoutT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A reference to an object that represents a Transport Layer Security (TLS)
     * configuration.</p>
     */
    inline const ServiceConnectTlsConfiguration& GetTls() const { return m_tls; }
    inline bool TlsHasBeenSet() const { return m_tlsHasBeenSet; }
    template<typename TlsT = ServiceConnectTlsConfiguration>
    void SetTls(TlsT&& value) { m_tlsHasBeenSet = true; m_tls = std::forward<TlsT>(value); }
    template<typename TlsT = ServiceConnectTlsConfiguration>
    ServiceConnectService& WithTls(TlsT&& value) { SetTls(std::forward<TlsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_portName;
    bool m_portNameHasBeenSet = false;

    Aws::String m_discoveryName;
    bool m_discoveryNameHasBeenSet = false;

    Aws::Vector<ServiceConnectClientAlias> m_clientAliases;
    bool m_clientAliasesHasBeenSet = false;

    int m_ingressPortOverride{0};
    bool m_ingressPortOverrideHasBeenSet = false;

    TimeoutConfiguration m_timeout;
    bool m_timeoutHasBeenSet = false;

    ServiceConnectTlsConfiguration m_tls;
    bool m_tlsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
