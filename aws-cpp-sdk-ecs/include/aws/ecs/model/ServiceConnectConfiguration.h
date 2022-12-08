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
    AWS_ECS_API ServiceConnectConfiguration();
    AWS_ECS_API ServiceConnectConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ServiceConnectConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether to use Service Connect with this service.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Specifies whether to use Service Connect with this service.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Specifies whether to use Service Connect with this service.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Specifies whether to use Service Connect with this service.</p>
     */
    inline ServiceConnectConfiguration& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The namespace name or full Amazon Resource Name (ARN) of the Cloud Map
     * namespace for use with Service Connect. The namespace must be in the same Amazon
     * Web Services Region as the Amazon ECS service and cluster. The type of namespace
     * doesn't affect Service Connect. For more information about Cloud Map, see <a
     * href="https://docs.aws.amazon.com/">Working with Services</a> in the <i>Cloud
     * Map Developer Guide</i>.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace name or full Amazon Resource Name (ARN) of the Cloud Map
     * namespace for use with Service Connect. The namespace must be in the same Amazon
     * Web Services Region as the Amazon ECS service and cluster. The type of namespace
     * doesn't affect Service Connect. For more information about Cloud Map, see <a
     * href="https://docs.aws.amazon.com/">Working with Services</a> in the <i>Cloud
     * Map Developer Guide</i>.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace name or full Amazon Resource Name (ARN) of the Cloud Map
     * namespace for use with Service Connect. The namespace must be in the same Amazon
     * Web Services Region as the Amazon ECS service and cluster. The type of namespace
     * doesn't affect Service Connect. For more information about Cloud Map, see <a
     * href="https://docs.aws.amazon.com/">Working with Services</a> in the <i>Cloud
     * Map Developer Guide</i>.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace name or full Amazon Resource Name (ARN) of the Cloud Map
     * namespace for use with Service Connect. The namespace must be in the same Amazon
     * Web Services Region as the Amazon ECS service and cluster. The type of namespace
     * doesn't affect Service Connect. For more information about Cloud Map, see <a
     * href="https://docs.aws.amazon.com/">Working with Services</a> in the <i>Cloud
     * Map Developer Guide</i>.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace name or full Amazon Resource Name (ARN) of the Cloud Map
     * namespace for use with Service Connect. The namespace must be in the same Amazon
     * Web Services Region as the Amazon ECS service and cluster. The type of namespace
     * doesn't affect Service Connect. For more information about Cloud Map, see <a
     * href="https://docs.aws.amazon.com/">Working with Services</a> in the <i>Cloud
     * Map Developer Guide</i>.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace name or full Amazon Resource Name (ARN) of the Cloud Map
     * namespace for use with Service Connect. The namespace must be in the same Amazon
     * Web Services Region as the Amazon ECS service and cluster. The type of namespace
     * doesn't affect Service Connect. For more information about Cloud Map, see <a
     * href="https://docs.aws.amazon.com/">Working with Services</a> in the <i>Cloud
     * Map Developer Guide</i>.</p>
     */
    inline ServiceConnectConfiguration& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace name or full Amazon Resource Name (ARN) of the Cloud Map
     * namespace for use with Service Connect. The namespace must be in the same Amazon
     * Web Services Region as the Amazon ECS service and cluster. The type of namespace
     * doesn't affect Service Connect. For more information about Cloud Map, see <a
     * href="https://docs.aws.amazon.com/">Working with Services</a> in the <i>Cloud
     * Map Developer Guide</i>.</p>
     */
    inline ServiceConnectConfiguration& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace name or full Amazon Resource Name (ARN) of the Cloud Map
     * namespace for use with Service Connect. The namespace must be in the same Amazon
     * Web Services Region as the Amazon ECS service and cluster. The type of namespace
     * doesn't affect Service Connect. For more information about Cloud Map, see <a
     * href="https://docs.aws.amazon.com/">Working with Services</a> in the <i>Cloud
     * Map Developer Guide</i>.</p>
     */
    inline ServiceConnectConfiguration& WithNamespace(const char* value) { SetNamespace(value); return *this;}


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
    inline const Aws::Vector<ServiceConnectService>& GetServices() const{ return m_services; }

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
    inline bool ServicesHasBeenSet() const { return m_servicesHasBeenSet; }

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
    inline void SetServices(const Aws::Vector<ServiceConnectService>& value) { m_servicesHasBeenSet = true; m_services = value; }

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
    inline void SetServices(Aws::Vector<ServiceConnectService>&& value) { m_servicesHasBeenSet = true; m_services = std::move(value); }

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
    inline ServiceConnectConfiguration& WithServices(const Aws::Vector<ServiceConnectService>& value) { SetServices(value); return *this;}

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
    inline ServiceConnectConfiguration& WithServices(Aws::Vector<ServiceConnectService>&& value) { SetServices(std::move(value)); return *this;}

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
    inline ServiceConnectConfiguration& AddServices(const ServiceConnectService& value) { m_servicesHasBeenSet = true; m_services.push_back(value); return *this; }

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
    inline ServiceConnectConfiguration& AddServices(ServiceConnectService&& value) { m_servicesHasBeenSet = true; m_services.push_back(std::move(value)); return *this; }


    
    inline const LogConfiguration& GetLogConfiguration() const{ return m_logConfiguration; }

    
    inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }

    
    inline void SetLogConfiguration(const LogConfiguration& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = value; }

    
    inline void SetLogConfiguration(LogConfiguration&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = std::move(value); }

    
    inline ServiceConnectConfiguration& WithLogConfiguration(const LogConfiguration& value) { SetLogConfiguration(value); return *this;}

    
    inline ServiceConnectConfiguration& WithLogConfiguration(LogConfiguration&& value) { SetLogConfiguration(std::move(value)); return *this;}

  private:

    bool m_enabled;
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
