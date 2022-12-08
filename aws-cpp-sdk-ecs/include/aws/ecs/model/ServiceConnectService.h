/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_ECS_API ServiceConnectService();
    AWS_ECS_API ServiceConnectService(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ServiceConnectService& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <code>portName</code> must match the name of one of the
     * <code>portMappings</code> from all the containers in the task definition of this
     * Amazon ECS service.</p>
     */
    inline const Aws::String& GetPortName() const{ return m_portName; }

    /**
     * <p>The <code>portName</code> must match the name of one of the
     * <code>portMappings</code> from all the containers in the task definition of this
     * Amazon ECS service.</p>
     */
    inline bool PortNameHasBeenSet() const { return m_portNameHasBeenSet; }

    /**
     * <p>The <code>portName</code> must match the name of one of the
     * <code>portMappings</code> from all the containers in the task definition of this
     * Amazon ECS service.</p>
     */
    inline void SetPortName(const Aws::String& value) { m_portNameHasBeenSet = true; m_portName = value; }

    /**
     * <p>The <code>portName</code> must match the name of one of the
     * <code>portMappings</code> from all the containers in the task definition of this
     * Amazon ECS service.</p>
     */
    inline void SetPortName(Aws::String&& value) { m_portNameHasBeenSet = true; m_portName = std::move(value); }

    /**
     * <p>The <code>portName</code> must match the name of one of the
     * <code>portMappings</code> from all the containers in the task definition of this
     * Amazon ECS service.</p>
     */
    inline void SetPortName(const char* value) { m_portNameHasBeenSet = true; m_portName.assign(value); }

    /**
     * <p>The <code>portName</code> must match the name of one of the
     * <code>portMappings</code> from all the containers in the task definition of this
     * Amazon ECS service.</p>
     */
    inline ServiceConnectService& WithPortName(const Aws::String& value) { SetPortName(value); return *this;}

    /**
     * <p>The <code>portName</code> must match the name of one of the
     * <code>portMappings</code> from all the containers in the task definition of this
     * Amazon ECS service.</p>
     */
    inline ServiceConnectService& WithPortName(Aws::String&& value) { SetPortName(std::move(value)); return *this;}

    /**
     * <p>The <code>portName</code> must match the name of one of the
     * <code>portMappings</code> from all the containers in the task definition of this
     * Amazon ECS service.</p>
     */
    inline ServiceConnectService& WithPortName(const char* value) { SetPortName(value); return *this;}


    /**
     * <p>The <code>discoveryName</code> is the name of the new Cloud Map service that
     * Amazon ECS creates for this Amazon ECS service. This must be unique within the
     * Cloud Map namespace. The name can contain up to 64 characters. The name can
     * include lowercase letters, numbers, underscores (_), and hyphens (-). The name
     * can't start with a hyphen.</p> <p>If this parameter isn't specified, the default
     * value of <code>discoveryName.namespace</code> is used. If the
     * <code>discoveryName</code> isn't specified, the port mapping name from the task
     * definition is used in <code>portName.namespace</code>.</p>
     */
    inline const Aws::String& GetDiscoveryName() const{ return m_discoveryName; }

    /**
     * <p>The <code>discoveryName</code> is the name of the new Cloud Map service that
     * Amazon ECS creates for this Amazon ECS service. This must be unique within the
     * Cloud Map namespace. The name can contain up to 64 characters. The name can
     * include lowercase letters, numbers, underscores (_), and hyphens (-). The name
     * can't start with a hyphen.</p> <p>If this parameter isn't specified, the default
     * value of <code>discoveryName.namespace</code> is used. If the
     * <code>discoveryName</code> isn't specified, the port mapping name from the task
     * definition is used in <code>portName.namespace</code>.</p>
     */
    inline bool DiscoveryNameHasBeenSet() const { return m_discoveryNameHasBeenSet; }

    /**
     * <p>The <code>discoveryName</code> is the name of the new Cloud Map service that
     * Amazon ECS creates for this Amazon ECS service. This must be unique within the
     * Cloud Map namespace. The name can contain up to 64 characters. The name can
     * include lowercase letters, numbers, underscores (_), and hyphens (-). The name
     * can't start with a hyphen.</p> <p>If this parameter isn't specified, the default
     * value of <code>discoveryName.namespace</code> is used. If the
     * <code>discoveryName</code> isn't specified, the port mapping name from the task
     * definition is used in <code>portName.namespace</code>.</p>
     */
    inline void SetDiscoveryName(const Aws::String& value) { m_discoveryNameHasBeenSet = true; m_discoveryName = value; }

    /**
     * <p>The <code>discoveryName</code> is the name of the new Cloud Map service that
     * Amazon ECS creates for this Amazon ECS service. This must be unique within the
     * Cloud Map namespace. The name can contain up to 64 characters. The name can
     * include lowercase letters, numbers, underscores (_), and hyphens (-). The name
     * can't start with a hyphen.</p> <p>If this parameter isn't specified, the default
     * value of <code>discoveryName.namespace</code> is used. If the
     * <code>discoveryName</code> isn't specified, the port mapping name from the task
     * definition is used in <code>portName.namespace</code>.</p>
     */
    inline void SetDiscoveryName(Aws::String&& value) { m_discoveryNameHasBeenSet = true; m_discoveryName = std::move(value); }

    /**
     * <p>The <code>discoveryName</code> is the name of the new Cloud Map service that
     * Amazon ECS creates for this Amazon ECS service. This must be unique within the
     * Cloud Map namespace. The name can contain up to 64 characters. The name can
     * include lowercase letters, numbers, underscores (_), and hyphens (-). The name
     * can't start with a hyphen.</p> <p>If this parameter isn't specified, the default
     * value of <code>discoveryName.namespace</code> is used. If the
     * <code>discoveryName</code> isn't specified, the port mapping name from the task
     * definition is used in <code>portName.namespace</code>.</p>
     */
    inline void SetDiscoveryName(const char* value) { m_discoveryNameHasBeenSet = true; m_discoveryName.assign(value); }

    /**
     * <p>The <code>discoveryName</code> is the name of the new Cloud Map service that
     * Amazon ECS creates for this Amazon ECS service. This must be unique within the
     * Cloud Map namespace. The name can contain up to 64 characters. The name can
     * include lowercase letters, numbers, underscores (_), and hyphens (-). The name
     * can't start with a hyphen.</p> <p>If this parameter isn't specified, the default
     * value of <code>discoveryName.namespace</code> is used. If the
     * <code>discoveryName</code> isn't specified, the port mapping name from the task
     * definition is used in <code>portName.namespace</code>.</p>
     */
    inline ServiceConnectService& WithDiscoveryName(const Aws::String& value) { SetDiscoveryName(value); return *this;}

    /**
     * <p>The <code>discoveryName</code> is the name of the new Cloud Map service that
     * Amazon ECS creates for this Amazon ECS service. This must be unique within the
     * Cloud Map namespace. The name can contain up to 64 characters. The name can
     * include lowercase letters, numbers, underscores (_), and hyphens (-). The name
     * can't start with a hyphen.</p> <p>If this parameter isn't specified, the default
     * value of <code>discoveryName.namespace</code> is used. If the
     * <code>discoveryName</code> isn't specified, the port mapping name from the task
     * definition is used in <code>portName.namespace</code>.</p>
     */
    inline ServiceConnectService& WithDiscoveryName(Aws::String&& value) { SetDiscoveryName(std::move(value)); return *this;}

    /**
     * <p>The <code>discoveryName</code> is the name of the new Cloud Map service that
     * Amazon ECS creates for this Amazon ECS service. This must be unique within the
     * Cloud Map namespace. The name can contain up to 64 characters. The name can
     * include lowercase letters, numbers, underscores (_), and hyphens (-). The name
     * can't start with a hyphen.</p> <p>If this parameter isn't specified, the default
     * value of <code>discoveryName.namespace</code> is used. If the
     * <code>discoveryName</code> isn't specified, the port mapping name from the task
     * definition is used in <code>portName.namespace</code>.</p>
     */
    inline ServiceConnectService& WithDiscoveryName(const char* value) { SetDiscoveryName(value); return *this;}


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
    inline const Aws::Vector<ServiceConnectClientAlias>& GetClientAliases() const{ return m_clientAliases; }

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
    inline bool ClientAliasesHasBeenSet() const { return m_clientAliasesHasBeenSet; }

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
    inline void SetClientAliases(const Aws::Vector<ServiceConnectClientAlias>& value) { m_clientAliasesHasBeenSet = true; m_clientAliases = value; }

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
    inline void SetClientAliases(Aws::Vector<ServiceConnectClientAlias>&& value) { m_clientAliasesHasBeenSet = true; m_clientAliases = std::move(value); }

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
    inline ServiceConnectService& WithClientAliases(const Aws::Vector<ServiceConnectClientAlias>& value) { SetClientAliases(value); return *this;}

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
    inline ServiceConnectService& WithClientAliases(Aws::Vector<ServiceConnectClientAlias>&& value) { SetClientAliases(std::move(value)); return *this;}

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
    inline ServiceConnectService& AddClientAliases(const ServiceConnectClientAlias& value) { m_clientAliasesHasBeenSet = true; m_clientAliases.push_back(value); return *this; }

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
    inline ServiceConnectService& AddClientAliases(ServiceConnectClientAlias&& value) { m_clientAliasesHasBeenSet = true; m_clientAliases.push_back(std::move(value)); return *this; }


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
    inline int GetIngressPortOverride() const{ return m_ingressPortOverride; }

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
    inline bool IngressPortOverrideHasBeenSet() const { return m_ingressPortOverrideHasBeenSet; }

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
    inline void SetIngressPortOverride(int value) { m_ingressPortOverrideHasBeenSet = true; m_ingressPortOverride = value; }

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
    inline ServiceConnectService& WithIngressPortOverride(int value) { SetIngressPortOverride(value); return *this;}

  private:

    Aws::String m_portName;
    bool m_portNameHasBeenSet = false;

    Aws::String m_discoveryName;
    bool m_discoveryNameHasBeenSet = false;

    Aws::Vector<ServiceConnectClientAlias> m_clientAliases;
    bool m_clientAliasesHasBeenSet = false;

    int m_ingressPortOverride;
    bool m_ingressPortOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
