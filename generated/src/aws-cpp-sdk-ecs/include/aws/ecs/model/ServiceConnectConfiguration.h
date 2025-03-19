/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/LogConfiguration.h>
#include <aws/ecs/model/ServiceConnectService.h>
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
   * <p>The Service Connect configuration of your Amazon ECS service. The
   * configuration for this service to discover and connect to services, and be
   * discovered by, and connected from, other services within a namespace.</p>
   * <p>Tasks that run in a namespace can use short names to connect to services in
   * the namespace. Tasks can connect to services across all of the clusters in the
   * namespace. Tasks connect through a managed proxy container that collects logs
   * and metrics for increased visibility. Only the tasks that Amazon ECS services
   * create are supported with Service Connect. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-connect.html">Service
   * Connect</a> in the <i>Amazon Elastic Container Service Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ServiceConnectConfiguration">AWS
   * API Reference</a></p>
   */
  class ServiceConnectConfiguration
  {
  public:
    AWS_ECS_API ServiceConnectConfiguration() = default;
    AWS_ECS_API ServiceConnectConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ServiceConnectConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether to use Service Connect with this service.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline ServiceConnectConfiguration& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace name or full Amazon Resource Name (ARN) of the Cloud Map
     * namespace for use with Service Connect. The namespace must be in the same Amazon
     * Web Services Region as the Amazon ECS service and cluster. The type of namespace
     * doesn't affect Service Connect. For more information about Cloud Map, see <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/dg/working-with-services.html">Working
     * with Services</a> in the <i>Cloud Map Developer Guide</i>.</p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    ServiceConnectConfiguration& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of Service Connect service objects. These are names and aliases
     * (also known as endpoints) that are used by other Amazon ECS services to connect
     * to this service. </p> <p>This field is not required for a "client" Amazon ECS
     * service that's a member of a namespace only to connect to other services within
     * the namespace. An example of this would be a frontend application that accepts
     * incoming requests from either a load balancer that's attached to the service or
     * by other means.</p> <p>An object selects a port from the task definition,
     * assigns a name for the Cloud Map service, and a list of aliases (endpoints) and
     * ports for client applications to refer to this service.</p>
     */
    inline const Aws::Vector<ServiceConnectService>& GetServices() const { return m_services; }
    inline bool ServicesHasBeenSet() const { return m_servicesHasBeenSet; }
    template<typename ServicesT = Aws::Vector<ServiceConnectService>>
    void SetServices(ServicesT&& value) { m_servicesHasBeenSet = true; m_services = std::forward<ServicesT>(value); }
    template<typename ServicesT = Aws::Vector<ServiceConnectService>>
    ServiceConnectConfiguration& WithServices(ServicesT&& value) { SetServices(std::forward<ServicesT>(value)); return *this;}
    template<typename ServicesT = ServiceConnectService>
    ServiceConnectConfiguration& AddServices(ServicesT&& value) { m_servicesHasBeenSet = true; m_services.emplace_back(std::forward<ServicesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const LogConfiguration& GetLogConfiguration() const { return m_logConfiguration; }
    inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }
    template<typename LogConfigurationT = LogConfiguration>
    void SetLogConfiguration(LogConfigurationT&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = std::forward<LogConfigurationT>(value); }
    template<typename LogConfigurationT = LogConfiguration>
    ServiceConnectConfiguration& WithLogConfiguration(LogConfigurationT&& value) { SetLogConfiguration(std::forward<LogConfigurationT>(value)); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::Vector<ServiceConnectService> m_services;
    bool m_servicesHasBeenSet = false;

    LogConfiguration m_logConfiguration;
    bool m_logConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
