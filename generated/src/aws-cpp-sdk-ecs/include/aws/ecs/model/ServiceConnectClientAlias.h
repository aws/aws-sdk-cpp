/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Each alias ("endpoint") is a fully-qualified name and port number that other
   * tasks ("clients") can use to connect to this service.</p> <p>Each name and port
   * mapping must be unique within the namespace.</p> <p>Tasks that run in a
   * namespace can use short names to connect to services in the namespace. Tasks can
   * connect to services across all of the clusters in the namespace. Tasks connect
   * through a managed proxy container that collects logs and metrics for increased
   * visibility. Only the tasks that Amazon ECS services create are supported with
   * Service Connect. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-connect.html">Service
   * Connect</a> in the <i>Amazon Elastic Container Service Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ServiceConnectClientAlias">AWS
   * API Reference</a></p>
   */
  class ServiceConnectClientAlias
  {
  public:
    AWS_ECS_API ServiceConnectClientAlias();
    AWS_ECS_API ServiceConnectClientAlias(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ServiceConnectClientAlias& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The listening port number for the Service Connect proxy. This port is
     * available inside of all of the tasks within the same namespace.</p> <p>To avoid
     * changing your applications in client Amazon ECS services, set this to the same
     * port that the client application uses by default. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-connect.html">Service
     * Connect</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The listening port number for the Service Connect proxy. This port is
     * available inside of all of the tasks within the same namespace.</p> <p>To avoid
     * changing your applications in client Amazon ECS services, set this to the same
     * port that the client application uses by default. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-connect.html">Service
     * Connect</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The listening port number for the Service Connect proxy. This port is
     * available inside of all of the tasks within the same namespace.</p> <p>To avoid
     * changing your applications in client Amazon ECS services, set this to the same
     * port that the client application uses by default. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-connect.html">Service
     * Connect</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The listening port number for the Service Connect proxy. This port is
     * available inside of all of the tasks within the same namespace.</p> <p>To avoid
     * changing your applications in client Amazon ECS services, set this to the same
     * port that the client application uses by default. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-connect.html">Service
     * Connect</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline ServiceConnectClientAlias& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The <code>dnsName</code> is the name that you use in the applications of
     * client tasks to connect to this service. The name must be a valid DNS name but
     * doesn't need to be fully-qualified. The name can include up to 127 characters.
     * The name can include lowercase letters, numbers, underscores (_), hyphens (-),
     * and periods (.). The name can't start with a hyphen.</p> <p>If this parameter
     * isn't specified, the default value of <code>discoveryName.namespace</code> is
     * used. If the <code>discoveryName</code> isn't specified, the port mapping name
     * from the task definition is used in <code>portName.namespace</code>.</p> <p>To
     * avoid changing your applications in client Amazon ECS services, set this to the
     * same name that the client application uses by default. For example, a few common
     * names are <code>database</code>, <code>db</code>, or the lowercase name of a
     * database, such as <code>mysql</code> or <code>redis</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-connect.html">Service
     * Connect</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline const Aws::String& GetDnsName() const{ return m_dnsName; }

    /**
     * <p>The <code>dnsName</code> is the name that you use in the applications of
     * client tasks to connect to this service. The name must be a valid DNS name but
     * doesn't need to be fully-qualified. The name can include up to 127 characters.
     * The name can include lowercase letters, numbers, underscores (_), hyphens (-),
     * and periods (.). The name can't start with a hyphen.</p> <p>If this parameter
     * isn't specified, the default value of <code>discoveryName.namespace</code> is
     * used. If the <code>discoveryName</code> isn't specified, the port mapping name
     * from the task definition is used in <code>portName.namespace</code>.</p> <p>To
     * avoid changing your applications in client Amazon ECS services, set this to the
     * same name that the client application uses by default. For example, a few common
     * names are <code>database</code>, <code>db</code>, or the lowercase name of a
     * database, such as <code>mysql</code> or <code>redis</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-connect.html">Service
     * Connect</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline bool DnsNameHasBeenSet() const { return m_dnsNameHasBeenSet; }

    /**
     * <p>The <code>dnsName</code> is the name that you use in the applications of
     * client tasks to connect to this service. The name must be a valid DNS name but
     * doesn't need to be fully-qualified. The name can include up to 127 characters.
     * The name can include lowercase letters, numbers, underscores (_), hyphens (-),
     * and periods (.). The name can't start with a hyphen.</p> <p>If this parameter
     * isn't specified, the default value of <code>discoveryName.namespace</code> is
     * used. If the <code>discoveryName</code> isn't specified, the port mapping name
     * from the task definition is used in <code>portName.namespace</code>.</p> <p>To
     * avoid changing your applications in client Amazon ECS services, set this to the
     * same name that the client application uses by default. For example, a few common
     * names are <code>database</code>, <code>db</code>, or the lowercase name of a
     * database, such as <code>mysql</code> or <code>redis</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-connect.html">Service
     * Connect</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline void SetDnsName(const Aws::String& value) { m_dnsNameHasBeenSet = true; m_dnsName = value; }

    /**
     * <p>The <code>dnsName</code> is the name that you use in the applications of
     * client tasks to connect to this service. The name must be a valid DNS name but
     * doesn't need to be fully-qualified. The name can include up to 127 characters.
     * The name can include lowercase letters, numbers, underscores (_), hyphens (-),
     * and periods (.). The name can't start with a hyphen.</p> <p>If this parameter
     * isn't specified, the default value of <code>discoveryName.namespace</code> is
     * used. If the <code>discoveryName</code> isn't specified, the port mapping name
     * from the task definition is used in <code>portName.namespace</code>.</p> <p>To
     * avoid changing your applications in client Amazon ECS services, set this to the
     * same name that the client application uses by default. For example, a few common
     * names are <code>database</code>, <code>db</code>, or the lowercase name of a
     * database, such as <code>mysql</code> or <code>redis</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-connect.html">Service
     * Connect</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline void SetDnsName(Aws::String&& value) { m_dnsNameHasBeenSet = true; m_dnsName = std::move(value); }

    /**
     * <p>The <code>dnsName</code> is the name that you use in the applications of
     * client tasks to connect to this service. The name must be a valid DNS name but
     * doesn't need to be fully-qualified. The name can include up to 127 characters.
     * The name can include lowercase letters, numbers, underscores (_), hyphens (-),
     * and periods (.). The name can't start with a hyphen.</p> <p>If this parameter
     * isn't specified, the default value of <code>discoveryName.namespace</code> is
     * used. If the <code>discoveryName</code> isn't specified, the port mapping name
     * from the task definition is used in <code>portName.namespace</code>.</p> <p>To
     * avoid changing your applications in client Amazon ECS services, set this to the
     * same name that the client application uses by default. For example, a few common
     * names are <code>database</code>, <code>db</code>, or the lowercase name of a
     * database, such as <code>mysql</code> or <code>redis</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-connect.html">Service
     * Connect</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline void SetDnsName(const char* value) { m_dnsNameHasBeenSet = true; m_dnsName.assign(value); }

    /**
     * <p>The <code>dnsName</code> is the name that you use in the applications of
     * client tasks to connect to this service. The name must be a valid DNS name but
     * doesn't need to be fully-qualified. The name can include up to 127 characters.
     * The name can include lowercase letters, numbers, underscores (_), hyphens (-),
     * and periods (.). The name can't start with a hyphen.</p> <p>If this parameter
     * isn't specified, the default value of <code>discoveryName.namespace</code> is
     * used. If the <code>discoveryName</code> isn't specified, the port mapping name
     * from the task definition is used in <code>portName.namespace</code>.</p> <p>To
     * avoid changing your applications in client Amazon ECS services, set this to the
     * same name that the client application uses by default. For example, a few common
     * names are <code>database</code>, <code>db</code>, or the lowercase name of a
     * database, such as <code>mysql</code> or <code>redis</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-connect.html">Service
     * Connect</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline ServiceConnectClientAlias& WithDnsName(const Aws::String& value) { SetDnsName(value); return *this;}

    /**
     * <p>The <code>dnsName</code> is the name that you use in the applications of
     * client tasks to connect to this service. The name must be a valid DNS name but
     * doesn't need to be fully-qualified. The name can include up to 127 characters.
     * The name can include lowercase letters, numbers, underscores (_), hyphens (-),
     * and periods (.). The name can't start with a hyphen.</p> <p>If this parameter
     * isn't specified, the default value of <code>discoveryName.namespace</code> is
     * used. If the <code>discoveryName</code> isn't specified, the port mapping name
     * from the task definition is used in <code>portName.namespace</code>.</p> <p>To
     * avoid changing your applications in client Amazon ECS services, set this to the
     * same name that the client application uses by default. For example, a few common
     * names are <code>database</code>, <code>db</code>, or the lowercase name of a
     * database, such as <code>mysql</code> or <code>redis</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-connect.html">Service
     * Connect</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline ServiceConnectClientAlias& WithDnsName(Aws::String&& value) { SetDnsName(std::move(value)); return *this;}

    /**
     * <p>The <code>dnsName</code> is the name that you use in the applications of
     * client tasks to connect to this service. The name must be a valid DNS name but
     * doesn't need to be fully-qualified. The name can include up to 127 characters.
     * The name can include lowercase letters, numbers, underscores (_), hyphens (-),
     * and periods (.). The name can't start with a hyphen.</p> <p>If this parameter
     * isn't specified, the default value of <code>discoveryName.namespace</code> is
     * used. If the <code>discoveryName</code> isn't specified, the port mapping name
     * from the task definition is used in <code>portName.namespace</code>.</p> <p>To
     * avoid changing your applications in client Amazon ECS services, set this to the
     * same name that the client application uses by default. For example, a few common
     * names are <code>database</code>, <code>db</code>, or the lowercase name of a
     * database, such as <code>mysql</code> or <code>redis</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-connect.html">Service
     * Connect</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline ServiceConnectClientAlias& WithDnsName(const char* value) { SetDnsName(value); return *this;}

  private:

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_dnsName;
    bool m_dnsNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
