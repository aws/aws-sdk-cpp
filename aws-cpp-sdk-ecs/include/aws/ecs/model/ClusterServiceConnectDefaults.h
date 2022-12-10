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
   * <p>Use this parameter to set a default Service Connect namespace. After you set
   * a default Service Connect namespace, any new services with Service Connect
   * turned on that are created in the cluster are added as client services in the
   * namespace. This setting only applies to new services that set the
   * <code>enabled</code> parameter to <code>true</code> in the
   * <code>ServiceConnectConfiguration</code>. You can set the namespace of each
   * service individually in the <code>ServiceConnectConfiguration</code> to override
   * this default parameter.</p> <p>Tasks that run in a namespace can use short names
   * to connect to services in the namespace. Tasks can connect to services across
   * all of the clusters in the namespace. Tasks connect through a managed proxy
   * container that collects logs and metrics for increased visibility. Only the
   * tasks that Amazon ECS services create are supported with Service Connect. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-connect.html">Service
   * Connect</a> in the <i>Amazon Elastic Container Service Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ClusterServiceConnectDefaults">AWS
   * API Reference</a></p>
   */
  class ClusterServiceConnectDefaults
  {
  public:
    AWS_ECS_API ClusterServiceConnectDefaults();
    AWS_ECS_API ClusterServiceConnectDefaults(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ClusterServiceConnectDefaults& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The namespace name or full Amazon Resource Name (ARN) of the Cloud Map
     * namespace. When you create a service and don't specify a Service Connect
     * configuration, this namespace is used.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace name or full Amazon Resource Name (ARN) of the Cloud Map
     * namespace. When you create a service and don't specify a Service Connect
     * configuration, this namespace is used.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace name or full Amazon Resource Name (ARN) of the Cloud Map
     * namespace. When you create a service and don't specify a Service Connect
     * configuration, this namespace is used.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace name or full Amazon Resource Name (ARN) of the Cloud Map
     * namespace. When you create a service and don't specify a Service Connect
     * configuration, this namespace is used.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace name or full Amazon Resource Name (ARN) of the Cloud Map
     * namespace. When you create a service and don't specify a Service Connect
     * configuration, this namespace is used.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace name or full Amazon Resource Name (ARN) of the Cloud Map
     * namespace. When you create a service and don't specify a Service Connect
     * configuration, this namespace is used.</p>
     */
    inline ClusterServiceConnectDefaults& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace name or full Amazon Resource Name (ARN) of the Cloud Map
     * namespace. When you create a service and don't specify a Service Connect
     * configuration, this namespace is used.</p>
     */
    inline ClusterServiceConnectDefaults& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace name or full Amazon Resource Name (ARN) of the Cloud Map
     * namespace. When you create a service and don't specify a Service Connect
     * configuration, this namespace is used.</p>
     */
    inline ClusterServiceConnectDefaults& WithNamespace(const char* value) { SetNamespace(value); return *this;}

  private:

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
