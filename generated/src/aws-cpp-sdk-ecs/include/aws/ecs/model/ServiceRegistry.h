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
    AWS_ECS_API ServiceRegistry() = default;
    AWS_ECS_API ServiceRegistry(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ServiceRegistry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service registry. The currently
     * supported service registry is Cloud Map. For more information, see <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/api/API_CreateService.html">CreateService</a>.</p>
     */
    inline const Aws::String& GetRegistryArn() const { return m_registryArn; }
    inline bool RegistryArnHasBeenSet() const { return m_registryArnHasBeenSet; }
    template<typename RegistryArnT = Aws::String>
    void SetRegistryArn(RegistryArnT&& value) { m_registryArnHasBeenSet = true; m_registryArn = std::forward<RegistryArnT>(value); }
    template<typename RegistryArnT = Aws::String>
    ServiceRegistry& WithRegistryArn(RegistryArnT&& value) { SetRegistryArn(std::forward<RegistryArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port value used if your service discovery service specified an SRV
     * record. This field might be used if both the <code>awsvpc</code> network mode
     * and SRV records are used.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline ServiceRegistry& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetContainerName() const { return m_containerName; }
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }
    template<typename ContainerNameT = Aws::String>
    void SetContainerName(ContainerNameT&& value) { m_containerNameHasBeenSet = true; m_containerName = std::forward<ContainerNameT>(value); }
    template<typename ContainerNameT = Aws::String>
    ServiceRegistry& WithContainerName(ContainerNameT&& value) { SetContainerName(std::forward<ContainerNameT>(value)); return *this;}
    ///@}

    ///@{
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
    inline int GetContainerPort() const { return m_containerPort; }
    inline bool ContainerPortHasBeenSet() const { return m_containerPortHasBeenSet; }
    inline void SetContainerPort(int value) { m_containerPortHasBeenSet = true; m_containerPort = value; }
    inline ServiceRegistry& WithContainerPort(int value) { SetContainerPort(value); return *this;}
    ///@}
  private:

    Aws::String m_registryArn;
    bool m_registryArnHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Aws::String m_containerName;
    bool m_containerNameHasBeenSet = false;

    int m_containerPort{0};
    bool m_containerPortHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
