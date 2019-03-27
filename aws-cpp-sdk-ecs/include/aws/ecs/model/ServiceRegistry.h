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
   * <p>Details of the service registry.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ServiceRegistry">AWS
   * API Reference</a></p>
   */
  class AWS_ECS_API ServiceRegistry
  {
  public:
    ServiceRegistry();
    ServiceRegistry(Aws::Utils::Json::JsonView jsonValue);
    ServiceRegistry& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the service registry. The currently
     * supported service registry is AWS Cloud Map. For more information, see <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/api/API_CreateService.html">CreateService</a>.</p>
     */
    inline const Aws::String& GetRegistryArn() const{ return m_registryArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service registry. The currently
     * supported service registry is AWS Cloud Map. For more information, see <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/api/API_CreateService.html">CreateService</a>.</p>
     */
    inline bool RegistryArnHasBeenSet() const { return m_registryArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service registry. The currently
     * supported service registry is AWS Cloud Map. For more information, see <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/api/API_CreateService.html">CreateService</a>.</p>
     */
    inline void SetRegistryArn(const Aws::String& value) { m_registryArnHasBeenSet = true; m_registryArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service registry. The currently
     * supported service registry is AWS Cloud Map. For more information, see <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/api/API_CreateService.html">CreateService</a>.</p>
     */
    inline void SetRegistryArn(Aws::String&& value) { m_registryArnHasBeenSet = true; m_registryArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service registry. The currently
     * supported service registry is AWS Cloud Map. For more information, see <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/api/API_CreateService.html">CreateService</a>.</p>
     */
    inline void SetRegistryArn(const char* value) { m_registryArnHasBeenSet = true; m_registryArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service registry. The currently
     * supported service registry is AWS Cloud Map. For more information, see <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/api/API_CreateService.html">CreateService</a>.</p>
     */
    inline ServiceRegistry& WithRegistryArn(const Aws::String& value) { SetRegistryArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service registry. The currently
     * supported service registry is AWS Cloud Map. For more information, see <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/api/API_CreateService.html">CreateService</a>.</p>
     */
    inline ServiceRegistry& WithRegistryArn(Aws::String&& value) { SetRegistryArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service registry. The currently
     * supported service registry is AWS Cloud Map. For more information, see <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/api/API_CreateService.html">CreateService</a>.</p>
     */
    inline ServiceRegistry& WithRegistryArn(const char* value) { SetRegistryArn(value); return *this;}


    /**
     * <p>The port value used if your service discovery service specified an SRV
     * record. This field may be used if both the <code>awsvpc</code> network mode and
     * SRV records are used.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port value used if your service discovery service specified an SRV
     * record. This field may be used if both the <code>awsvpc</code> network mode and
     * SRV records are used.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port value used if your service discovery service specified an SRV
     * record. This field may be used if both the <code>awsvpc</code> network mode and
     * SRV records are used.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port value used if your service discovery service specified an SRV
     * record. This field may be used if both the <code>awsvpc</code> network mode and
     * SRV records are used.</p>
     */
    inline ServiceRegistry& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The container name value, already specified in the task definition, to be
     * used for your service discovery service. If the task definition that your
     * service task specifies uses the <code>bridge</code> or <code>host</code> network
     * mode, you must specify a <code>containerName</code> and
     * <code>containerPort</code> combination from the task definition. If the task
     * definition that your service task specifies uses the <code>awsvpc</code> network
     * mode and a type SRV DNS record is used, you must specify either a
     * <code>containerName</code> and <code>containerPort</code> combination or a
     * <code>port</code> value, but not both.</p>
     */
    inline const Aws::String& GetContainerName() const{ return m_containerName; }

    /**
     * <p>The container name value, already specified in the task definition, to be
     * used for your service discovery service. If the task definition that your
     * service task specifies uses the <code>bridge</code> or <code>host</code> network
     * mode, you must specify a <code>containerName</code> and
     * <code>containerPort</code> combination from the task definition. If the task
     * definition that your service task specifies uses the <code>awsvpc</code> network
     * mode and a type SRV DNS record is used, you must specify either a
     * <code>containerName</code> and <code>containerPort</code> combination or a
     * <code>port</code> value, but not both.</p>
     */
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }

    /**
     * <p>The container name value, already specified in the task definition, to be
     * used for your service discovery service. If the task definition that your
     * service task specifies uses the <code>bridge</code> or <code>host</code> network
     * mode, you must specify a <code>containerName</code> and
     * <code>containerPort</code> combination from the task definition. If the task
     * definition that your service task specifies uses the <code>awsvpc</code> network
     * mode and a type SRV DNS record is used, you must specify either a
     * <code>containerName</code> and <code>containerPort</code> combination or a
     * <code>port</code> value, but not both.</p>
     */
    inline void SetContainerName(const Aws::String& value) { m_containerNameHasBeenSet = true; m_containerName = value; }

    /**
     * <p>The container name value, already specified in the task definition, to be
     * used for your service discovery service. If the task definition that your
     * service task specifies uses the <code>bridge</code> or <code>host</code> network
     * mode, you must specify a <code>containerName</code> and
     * <code>containerPort</code> combination from the task definition. If the task
     * definition that your service task specifies uses the <code>awsvpc</code> network
     * mode and a type SRV DNS record is used, you must specify either a
     * <code>containerName</code> and <code>containerPort</code> combination or a
     * <code>port</code> value, but not both.</p>
     */
    inline void SetContainerName(Aws::String&& value) { m_containerNameHasBeenSet = true; m_containerName = std::move(value); }

    /**
     * <p>The container name value, already specified in the task definition, to be
     * used for your service discovery service. If the task definition that your
     * service task specifies uses the <code>bridge</code> or <code>host</code> network
     * mode, you must specify a <code>containerName</code> and
     * <code>containerPort</code> combination from the task definition. If the task
     * definition that your service task specifies uses the <code>awsvpc</code> network
     * mode and a type SRV DNS record is used, you must specify either a
     * <code>containerName</code> and <code>containerPort</code> combination or a
     * <code>port</code> value, but not both.</p>
     */
    inline void SetContainerName(const char* value) { m_containerNameHasBeenSet = true; m_containerName.assign(value); }

    /**
     * <p>The container name value, already specified in the task definition, to be
     * used for your service discovery service. If the task definition that your
     * service task specifies uses the <code>bridge</code> or <code>host</code> network
     * mode, you must specify a <code>containerName</code> and
     * <code>containerPort</code> combination from the task definition. If the task
     * definition that your service task specifies uses the <code>awsvpc</code> network
     * mode and a type SRV DNS record is used, you must specify either a
     * <code>containerName</code> and <code>containerPort</code> combination or a
     * <code>port</code> value, but not both.</p>
     */
    inline ServiceRegistry& WithContainerName(const Aws::String& value) { SetContainerName(value); return *this;}

    /**
     * <p>The container name value, already specified in the task definition, to be
     * used for your service discovery service. If the task definition that your
     * service task specifies uses the <code>bridge</code> or <code>host</code> network
     * mode, you must specify a <code>containerName</code> and
     * <code>containerPort</code> combination from the task definition. If the task
     * definition that your service task specifies uses the <code>awsvpc</code> network
     * mode and a type SRV DNS record is used, you must specify either a
     * <code>containerName</code> and <code>containerPort</code> combination or a
     * <code>port</code> value, but not both.</p>
     */
    inline ServiceRegistry& WithContainerName(Aws::String&& value) { SetContainerName(std::move(value)); return *this;}

    /**
     * <p>The container name value, already specified in the task definition, to be
     * used for your service discovery service. If the task definition that your
     * service task specifies uses the <code>bridge</code> or <code>host</code> network
     * mode, you must specify a <code>containerName</code> and
     * <code>containerPort</code> combination from the task definition. If the task
     * definition that your service task specifies uses the <code>awsvpc</code> network
     * mode and a type SRV DNS record is used, you must specify either a
     * <code>containerName</code> and <code>containerPort</code> combination or a
     * <code>port</code> value, but not both.</p>
     */
    inline ServiceRegistry& WithContainerName(const char* value) { SetContainerName(value); return *this;}


    /**
     * <p>The port value, already specified in the task definition, to be used for your
     * service discovery service. If the task definition your service task specifies
     * uses the <code>bridge</code> or <code>host</code> network mode, you must specify
     * a <code>containerName</code> and <code>containerPort</code> combination from the
     * task definition. If the task definition your service task specifies uses the
     * <code>awsvpc</code> network mode and a type SRV DNS record is used, you must
     * specify either a <code>containerName</code> and <code>containerPort</code>
     * combination or a <code>port</code> value, but not both.</p>
     */
    inline int GetContainerPort() const{ return m_containerPort; }

    /**
     * <p>The port value, already specified in the task definition, to be used for your
     * service discovery service. If the task definition your service task specifies
     * uses the <code>bridge</code> or <code>host</code> network mode, you must specify
     * a <code>containerName</code> and <code>containerPort</code> combination from the
     * task definition. If the task definition your service task specifies uses the
     * <code>awsvpc</code> network mode and a type SRV DNS record is used, you must
     * specify either a <code>containerName</code> and <code>containerPort</code>
     * combination or a <code>port</code> value, but not both.</p>
     */
    inline bool ContainerPortHasBeenSet() const { return m_containerPortHasBeenSet; }

    /**
     * <p>The port value, already specified in the task definition, to be used for your
     * service discovery service. If the task definition your service task specifies
     * uses the <code>bridge</code> or <code>host</code> network mode, you must specify
     * a <code>containerName</code> and <code>containerPort</code> combination from the
     * task definition. If the task definition your service task specifies uses the
     * <code>awsvpc</code> network mode and a type SRV DNS record is used, you must
     * specify either a <code>containerName</code> and <code>containerPort</code>
     * combination or a <code>port</code> value, but not both.</p>
     */
    inline void SetContainerPort(int value) { m_containerPortHasBeenSet = true; m_containerPort = value; }

    /**
     * <p>The port value, already specified in the task definition, to be used for your
     * service discovery service. If the task definition your service task specifies
     * uses the <code>bridge</code> or <code>host</code> network mode, you must specify
     * a <code>containerName</code> and <code>containerPort</code> combination from the
     * task definition. If the task definition your service task specifies uses the
     * <code>awsvpc</code> network mode and a type SRV DNS record is used, you must
     * specify either a <code>containerName</code> and <code>containerPort</code>
     * combination or a <code>port</code> value, but not both.</p>
     */
    inline ServiceRegistry& WithContainerPort(int value) { SetContainerPort(value); return *this;}

  private:

    Aws::String m_registryArn;
    bool m_registryArnHasBeenSet;

    int m_port;
    bool m_portHasBeenSet;

    Aws::String m_containerName;
    bool m_containerNameHasBeenSet;

    int m_containerPort;
    bool m_containerPortHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
