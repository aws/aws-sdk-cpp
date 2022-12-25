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
   * <p>The details for the service registry.</p> <p>Each service may be associated
   * with one service registry. Multiple service registries for each service are not
   * supported.</p> <p>When you add, update, or remove the service registries
   * configuration, Amazon ECS starts a new deployment. New tasks are registered and
   * deregistered to the updated service registry configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ServiceRegistry">AWS
   * API Reference</a></p>
   */
  class ServiceRegistry
  {
  public:
    AWS_ECS_API ServiceRegistry();
    AWS_ECS_API ServiceRegistry(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ServiceRegistry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the service registry. The currently
     * supported service registry is Cloud Map. For more information, see <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/api/API_CreateService.html">CreateService</a>.</p>
     */
    inline const Aws::String& GetRegistryArn() const{ return m_registryArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service registry. The currently
     * supported service registry is Cloud Map. For more information, see <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/api/API_CreateService.html">CreateService</a>.</p>
     */
    inline bool RegistryArnHasBeenSet() const { return m_registryArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service registry. The currently
     * supported service registry is Cloud Map. For more information, see <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/api/API_CreateService.html">CreateService</a>.</p>
     */
    inline void SetRegistryArn(const Aws::String& value) { m_registryArnHasBeenSet = true; m_registryArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service registry. The currently
     * supported service registry is Cloud Map. For more information, see <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/api/API_CreateService.html">CreateService</a>.</p>
     */
    inline void SetRegistryArn(Aws::String&& value) { m_registryArnHasBeenSet = true; m_registryArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service registry. The currently
     * supported service registry is Cloud Map. For more information, see <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/api/API_CreateService.html">CreateService</a>.</p>
     */
    inline void SetRegistryArn(const char* value) { m_registryArnHasBeenSet = true; m_registryArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service registry. The currently
     * supported service registry is Cloud Map. For more information, see <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/api/API_CreateService.html">CreateService</a>.</p>
     */
    inline ServiceRegistry& WithRegistryArn(const Aws::String& value) { SetRegistryArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service registry. The currently
     * supported service registry is Cloud Map. For more information, see <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/api/API_CreateService.html">CreateService</a>.</p>
     */
    inline ServiceRegistry& WithRegistryArn(Aws::String&& value) { SetRegistryArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service registry. The currently
     * supported service registry is Cloud Map. For more information, see <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/api/API_CreateService.html">CreateService</a>.</p>
     */
    inline ServiceRegistry& WithRegistryArn(const char* value) { SetRegistryArn(value); return *this;}


    /**
     * <p>The port value used if your service discovery service specified an SRV
     * record. This field might be used if both the <code>awsvpc</code> network mode
     * and SRV records are used.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port value used if your service discovery service specified an SRV
     * record. This field might be used if both the <code>awsvpc</code> network mode
     * and SRV records are used.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port value used if your service discovery service specified an SRV
     * record. This field might be used if both the <code>awsvpc</code> network mode
     * and SRV records are used.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port value used if your service discovery service specified an SRV
     * record. This field might be used if both the <code>awsvpc</code> network mode
     * and SRV records are used.</p>
     */
    inline ServiceRegistry& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The container name value to be used for your service discovery service. It's
     * already specified in the task definition. If the task definition that your
     * service task specifies uses the <code>bridge</code> or <code>host</code> network
     * mode, you must specify a <code>containerName</code> and
     * <code>containerPort</code> combination from the task definition. If the task
     * definition that your service task specifies uses the <code>awsvpc</code> network
     * mode and a type SRV DNS record is used, you must specify either a
     * <code>containerName</code> and <code>containerPort</code> combination or a
     * <code>port</code> value. However, you can't specify both.</p>
     */
    inline const Aws::String& GetContainerName() const{ return m_containerName; }

    /**
     * <p>The container name value to be used for your service discovery service. It's
     * already specified in the task definition. If the task definition that your
     * service task specifies uses the <code>bridge</code> or <code>host</code> network
     * mode, you must specify a <code>containerName</code> and
     * <code>containerPort</code> combination from the task definition. If the task
     * definition that your service task specifies uses the <code>awsvpc</code> network
     * mode and a type SRV DNS record is used, you must specify either a
     * <code>containerName</code> and <code>containerPort</code> combination or a
     * <code>port</code> value. However, you can't specify both.</p>
     */
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }

    /**
     * <p>The container name value to be used for your service discovery service. It's
     * already specified in the task definition. If the task definition that your
     * service task specifies uses the <code>bridge</code> or <code>host</code> network
     * mode, you must specify a <code>containerName</code> and
     * <code>containerPort</code> combination from the task definition. If the task
     * definition that your service task specifies uses the <code>awsvpc</code> network
     * mode and a type SRV DNS record is used, you must specify either a
     * <code>containerName</code> and <code>containerPort</code> combination or a
     * <code>port</code> value. However, you can't specify both.</p>
     */
    inline void SetContainerName(const Aws::String& value) { m_containerNameHasBeenSet = true; m_containerName = value; }

    /**
     * <p>The container name value to be used for your service discovery service. It's
     * already specified in the task definition. If the task definition that your
     * service task specifies uses the <code>bridge</code> or <code>host</code> network
     * mode, you must specify a <code>containerName</code> and
     * <code>containerPort</code> combination from the task definition. If the task
     * definition that your service task specifies uses the <code>awsvpc</code> network
     * mode and a type SRV DNS record is used, you must specify either a
     * <code>containerName</code> and <code>containerPort</code> combination or a
     * <code>port</code> value. However, you can't specify both.</p>
     */
    inline void SetContainerName(Aws::String&& value) { m_containerNameHasBeenSet = true; m_containerName = std::move(value); }

    /**
     * <p>The container name value to be used for your service discovery service. It's
     * already specified in the task definition. If the task definition that your
     * service task specifies uses the <code>bridge</code> or <code>host</code> network
     * mode, you must specify a <code>containerName</code> and
     * <code>containerPort</code> combination from the task definition. If the task
     * definition that your service task specifies uses the <code>awsvpc</code> network
     * mode and a type SRV DNS record is used, you must specify either a
     * <code>containerName</code> and <code>containerPort</code> combination or a
     * <code>port</code> value. However, you can't specify both.</p>
     */
    inline void SetContainerName(const char* value) { m_containerNameHasBeenSet = true; m_containerName.assign(value); }

    /**
     * <p>The container name value to be used for your service discovery service. It's
     * already specified in the task definition. If the task definition that your
     * service task specifies uses the <code>bridge</code> or <code>host</code> network
     * mode, you must specify a <code>containerName</code> and
     * <code>containerPort</code> combination from the task definition. If the task
     * definition that your service task specifies uses the <code>awsvpc</code> network
     * mode and a type SRV DNS record is used, you must specify either a
     * <code>containerName</code> and <code>containerPort</code> combination or a
     * <code>port</code> value. However, you can't specify both.</p>
     */
    inline ServiceRegistry& WithContainerName(const Aws::String& value) { SetContainerName(value); return *this;}

    /**
     * <p>The container name value to be used for your service discovery service. It's
     * already specified in the task definition. If the task definition that your
     * service task specifies uses the <code>bridge</code> or <code>host</code> network
     * mode, you must specify a <code>containerName</code> and
     * <code>containerPort</code> combination from the task definition. If the task
     * definition that your service task specifies uses the <code>awsvpc</code> network
     * mode and a type SRV DNS record is used, you must specify either a
     * <code>containerName</code> and <code>containerPort</code> combination or a
     * <code>port</code> value. However, you can't specify both.</p>
     */
    inline ServiceRegistry& WithContainerName(Aws::String&& value) { SetContainerName(std::move(value)); return *this;}

    /**
     * <p>The container name value to be used for your service discovery service. It's
     * already specified in the task definition. If the task definition that your
     * service task specifies uses the <code>bridge</code> or <code>host</code> network
     * mode, you must specify a <code>containerName</code> and
     * <code>containerPort</code> combination from the task definition. If the task
     * definition that your service task specifies uses the <code>awsvpc</code> network
     * mode and a type SRV DNS record is used, you must specify either a
     * <code>containerName</code> and <code>containerPort</code> combination or a
     * <code>port</code> value. However, you can't specify both.</p>
     */
    inline ServiceRegistry& WithContainerName(const char* value) { SetContainerName(value); return *this;}


    /**
     * <p>The port value to be used for your service discovery service. It's already
     * specified in the task definition. If the task definition your service task
     * specifies uses the <code>bridge</code> or <code>host</code> network mode, you
     * must specify a <code>containerName</code> and <code>containerPort</code>
     * combination from the task definition. If the task definition your service task
     * specifies uses the <code>awsvpc</code> network mode and a type SRV DNS record is
     * used, you must specify either a <code>containerName</code> and
     * <code>containerPort</code> combination or a <code>port</code> value. However,
     * you can't specify both.</p>
     */
    inline int GetContainerPort() const{ return m_containerPort; }

    /**
     * <p>The port value to be used for your service discovery service. It's already
     * specified in the task definition. If the task definition your service task
     * specifies uses the <code>bridge</code> or <code>host</code> network mode, you
     * must specify a <code>containerName</code> and <code>containerPort</code>
     * combination from the task definition. If the task definition your service task
     * specifies uses the <code>awsvpc</code> network mode and a type SRV DNS record is
     * used, you must specify either a <code>containerName</code> and
     * <code>containerPort</code> combination or a <code>port</code> value. However,
     * you can't specify both.</p>
     */
    inline bool ContainerPortHasBeenSet() const { return m_containerPortHasBeenSet; }

    /**
     * <p>The port value to be used for your service discovery service. It's already
     * specified in the task definition. If the task definition your service task
     * specifies uses the <code>bridge</code> or <code>host</code> network mode, you
     * must specify a <code>containerName</code> and <code>containerPort</code>
     * combination from the task definition. If the task definition your service task
     * specifies uses the <code>awsvpc</code> network mode and a type SRV DNS record is
     * used, you must specify either a <code>containerName</code> and
     * <code>containerPort</code> combination or a <code>port</code> value. However,
     * you can't specify both.</p>
     */
    inline void SetContainerPort(int value) { m_containerPortHasBeenSet = true; m_containerPort = value; }

    /**
     * <p>The port value to be used for your service discovery service. It's already
     * specified in the task definition. If the task definition your service task
     * specifies uses the <code>bridge</code> or <code>host</code> network mode, you
     * must specify a <code>containerName</code> and <code>containerPort</code>
     * combination from the task definition. If the task definition your service task
     * specifies uses the <code>awsvpc</code> network mode and a type SRV DNS record is
     * used, you must specify either a <code>containerName</code> and
     * <code>containerPort</code> combination or a <code>port</code> value. However,
     * you can't specify both.</p>
     */
    inline ServiceRegistry& WithContainerPort(int value) { SetContainerPort(value); return *this;}

  private:

    Aws::String m_registryArn;
    bool m_registryArnHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_containerName;
    bool m_containerNameHasBeenSet = false;

    int m_containerPort;
    bool m_containerPortHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
