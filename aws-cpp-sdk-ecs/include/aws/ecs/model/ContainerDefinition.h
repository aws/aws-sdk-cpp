/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/PortMapping.h>
#include <aws/ecs/model/KeyValuePair.h>
#include <aws/ecs/model/MountPoint.h>
#include <aws/ecs/model/VolumeFrom.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ECS
{
namespace Model
{
  /*
    <p>Container definitions are used in task definitions to describe the different containers that are launched as part of a task.</p>
  */
  class AWS_ECS_API ContainerDefinition
  {
  public:
    ContainerDefinition();
    ContainerDefinition(const Aws::Utils::Json::JsonValue& jsonValue);
    ContainerDefinition& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /*
     <p>The name of a container. If you are linking multiple containers together in a task definition, the <code>name</code> of one container can be entered in the <code>links</code> of another container to connect the containers.</p>
    */
    inline const Aws::String& GetName() const{ return m_name; }

    /*
     <p>The name of a container. If you are linking multiple containers together in a task definition, the <code>name</code> of one container can be entered in the <code>links</code> of another container to connect the containers.</p>
    */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /*
     <p>The name of a container. If you are linking multiple containers together in a task definition, the <code>name</code> of one container can be entered in the <code>links</code> of another container to connect the containers.</p>
    */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /*
     <p>The name of a container. If you are linking multiple containers together in a task definition, the <code>name</code> of one container can be entered in the <code>links</code> of another container to connect the containers.</p>
    */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /*
     <p>The name of a container. If you are linking multiple containers together in a task definition, the <code>name</code> of one container can be entered in the <code>links</code> of another container to connect the containers.</p>
    */
    inline ContainerDefinition& WithName(const Aws::String& value) { SetName(value); return *this;}

    /*
     <p>The name of a container. If you are linking multiple containers together in a task definition, the <code>name</code> of one container can be entered in the <code>links</code> of another container to connect the containers.</p>
    */
    inline ContainerDefinition& WithName(Aws::String&& value) { SetName(value); return *this;}

    /*
     <p>The name of a container. If you are linking multiple containers together in a task definition, the <code>name</code> of one container can be entered in the <code>links</code> of another container to connect the containers.</p>
    */
    inline ContainerDefinition& WithName(const char* value) { SetName(value); return *this;}

    /*
     <p>The image used to start a container. This string is passed directly to the Docker daemon. Images in the Docker Hub registry are available by default. Other repositories are specified with <code><i>repository-url</i>/<i>image</i>:<i>tag</i></code>.</p>
    */
    inline const Aws::String& GetImage() const{ return m_image; }

    /*
     <p>The image used to start a container. This string is passed directly to the Docker daemon. Images in the Docker Hub registry are available by default. Other repositories are specified with <code><i>repository-url</i>/<i>image</i>:<i>tag</i></code>.</p>
    */
    inline void SetImage(const Aws::String& value) { m_imageHasBeenSet = true; m_image = value; }

    /*
     <p>The image used to start a container. This string is passed directly to the Docker daemon. Images in the Docker Hub registry are available by default. Other repositories are specified with <code><i>repository-url</i>/<i>image</i>:<i>tag</i></code>.</p>
    */
    inline void SetImage(Aws::String&& value) { m_imageHasBeenSet = true; m_image = value; }

    /*
     <p>The image used to start a container. This string is passed directly to the Docker daemon. Images in the Docker Hub registry are available by default. Other repositories are specified with <code><i>repository-url</i>/<i>image</i>:<i>tag</i></code>.</p>
    */
    inline void SetImage(const char* value) { m_imageHasBeenSet = true; m_image.assign(value); }

    /*
     <p>The image used to start a container. This string is passed directly to the Docker daemon. Images in the Docker Hub registry are available by default. Other repositories are specified with <code><i>repository-url</i>/<i>image</i>:<i>tag</i></code>.</p>
    */
    inline ContainerDefinition& WithImage(const Aws::String& value) { SetImage(value); return *this;}

    /*
     <p>The image used to start a container. This string is passed directly to the Docker daemon. Images in the Docker Hub registry are available by default. Other repositories are specified with <code><i>repository-url</i>/<i>image</i>:<i>tag</i></code>.</p>
    */
    inline ContainerDefinition& WithImage(Aws::String&& value) { SetImage(value); return *this;}

    /*
     <p>The image used to start a container. This string is passed directly to the Docker daemon. Images in the Docker Hub registry are available by default. Other repositories are specified with <code><i>repository-url</i>/<i>image</i>:<i>tag</i></code>.</p>
    */
    inline ContainerDefinition& WithImage(const char* value) { SetImage(value); return *this;}

    /*
     <p>The number of <code>cpu</code> units reserved for the container. A container instance has 1,024 <code>cpu</code> units for every CPU core. This parameter specifies the minimum amount of CPU to reserve for a container, and containers share unallocated CPU units with other containers on the instance with the same ratio as their allocated amount.</p> <p>For example, if you run a single-container task on a single-core instance type with 512 CPU units specified for that container, and that is the only task running on the container instance, that container could use the full 1,024 CPU unit share at any given time. However, if you launched another copy of the same task on that container instance, each task would be guaranteed a minimum of 512 CPU units when needed, and each container could float to higher CPU usage if the other container was not using it, but if both tasks were 100% active all of the time, they would be limited to 512 CPU units.</p> <p>The Docker daemon on the container instance uses the CPU value to calculate the relative CPU share ratios for running containers. For more information, see <a href="https://docs.docker.com/reference/run/#cpu-share-constraint">CPU share constraint</a> in the Docker documentation. The minimum valid CPU share value that the Linux kernel will allow is 2; however, the CPU parameter is not required, and you can use CPU values below 2 in your container definitions. For CPU values below 2 (including null), the behavior varies based on your Amazon ECS container agent version:</p> <ul> <li> <b>Agent versions less than or equal to 1.1.0:</b> Null and zero CPU values are passed to Docker as 0, which Docker then converts to 1,024 CPU shares. CPU values of 1 are passed to Docker as 1, which the Linux kernel converts to 2 CPU shares.</li> <li> <b>Agent versions greater than or equal to 1.2.0:</b> Null, zero, and CPU values of 1 are passed to Docker as 2.</li> </ul>
    */
    inline long GetCpu() const{ return m_cpu; }

    /*
     <p>The number of <code>cpu</code> units reserved for the container. A container instance has 1,024 <code>cpu</code> units for every CPU core. This parameter specifies the minimum amount of CPU to reserve for a container, and containers share unallocated CPU units with other containers on the instance with the same ratio as their allocated amount.</p> <p>For example, if you run a single-container task on a single-core instance type with 512 CPU units specified for that container, and that is the only task running on the container instance, that container could use the full 1,024 CPU unit share at any given time. However, if you launched another copy of the same task on that container instance, each task would be guaranteed a minimum of 512 CPU units when needed, and each container could float to higher CPU usage if the other container was not using it, but if both tasks were 100% active all of the time, they would be limited to 512 CPU units.</p> <p>The Docker daemon on the container instance uses the CPU value to calculate the relative CPU share ratios for running containers. For more information, see <a href="https://docs.docker.com/reference/run/#cpu-share-constraint">CPU share constraint</a> in the Docker documentation. The minimum valid CPU share value that the Linux kernel will allow is 2; however, the CPU parameter is not required, and you can use CPU values below 2 in your container definitions. For CPU values below 2 (including null), the behavior varies based on your Amazon ECS container agent version:</p> <ul> <li> <b>Agent versions less than or equal to 1.1.0:</b> Null and zero CPU values are passed to Docker as 0, which Docker then converts to 1,024 CPU shares. CPU values of 1 are passed to Docker as 1, which the Linux kernel converts to 2 CPU shares.</li> <li> <b>Agent versions greater than or equal to 1.2.0:</b> Null, zero, and CPU values of 1 are passed to Docker as 2.</li> </ul>
    */
    inline void SetCpu(long value) { m_cpuHasBeenSet = true; m_cpu = value; }

    /*
     <p>The number of <code>cpu</code> units reserved for the container. A container instance has 1,024 <code>cpu</code> units for every CPU core. This parameter specifies the minimum amount of CPU to reserve for a container, and containers share unallocated CPU units with other containers on the instance with the same ratio as their allocated amount.</p> <p>For example, if you run a single-container task on a single-core instance type with 512 CPU units specified for that container, and that is the only task running on the container instance, that container could use the full 1,024 CPU unit share at any given time. However, if you launched another copy of the same task on that container instance, each task would be guaranteed a minimum of 512 CPU units when needed, and each container could float to higher CPU usage if the other container was not using it, but if both tasks were 100% active all of the time, they would be limited to 512 CPU units.</p> <p>The Docker daemon on the container instance uses the CPU value to calculate the relative CPU share ratios for running containers. For more information, see <a href="https://docs.docker.com/reference/run/#cpu-share-constraint">CPU share constraint</a> in the Docker documentation. The minimum valid CPU share value that the Linux kernel will allow is 2; however, the CPU parameter is not required, and you can use CPU values below 2 in your container definitions. For CPU values below 2 (including null), the behavior varies based on your Amazon ECS container agent version:</p> <ul> <li> <b>Agent versions less than or equal to 1.1.0:</b> Null and zero CPU values are passed to Docker as 0, which Docker then converts to 1,024 CPU shares. CPU values of 1 are passed to Docker as 1, which the Linux kernel converts to 2 CPU shares.</li> <li> <b>Agent versions greater than or equal to 1.2.0:</b> Null, zero, and CPU values of 1 are passed to Docker as 2.</li> </ul>
    */
    inline ContainerDefinition& WithCpu(long value) { SetCpu(value); return *this;}

    /*
     <p>The number of MiB of memory reserved for the container. If your container attempts to exceed the memory allocated here, the container is killed.</p>
    */
    inline long GetMemory() const{ return m_memory; }

    /*
     <p>The number of MiB of memory reserved for the container. If your container attempts to exceed the memory allocated here, the container is killed.</p>
    */
    inline void SetMemory(long value) { m_memoryHasBeenSet = true; m_memory = value; }

    /*
     <p>The number of MiB of memory reserved for the container. If your container attempts to exceed the memory allocated here, the container is killed.</p>
    */
    inline ContainerDefinition& WithMemory(long value) { SetMemory(value); return *this;}

    /*
     <p>The <code>link</code> parameter allows containers to communicate with each other without the need for port mappings, using the <code>name</code> parameter. The <code>name:internalName</code> construct is analogous to <code>name:alias</code> in Docker links. For more information on linking Docker containers, see <a href="https://docs.docker.com/userguide/dockerlinks/">https://docs.docker.com/userguide/dockerlinks/</a>.</p> <important> <p>Containers that are collocated on a single container instance may be able to communicate with each other without requiring links or host port mappings. Network isolation is achieved on the container instance using security groups and VPC settings.</p> </important>
    */
    inline const Aws::Vector<Aws::String>& GetLinks() const{ return m_links; }

    /*
     <p>The <code>link</code> parameter allows containers to communicate with each other without the need for port mappings, using the <code>name</code> parameter. The <code>name:internalName</code> construct is analogous to <code>name:alias</code> in Docker links. For more information on linking Docker containers, see <a href="https://docs.docker.com/userguide/dockerlinks/">https://docs.docker.com/userguide/dockerlinks/</a>.</p> <important> <p>Containers that are collocated on a single container instance may be able to communicate with each other without requiring links or host port mappings. Network isolation is achieved on the container instance using security groups and VPC settings.</p> </important>
    */
    inline void SetLinks(const Aws::Vector<Aws::String>& value) { m_linksHasBeenSet = true; m_links = value; }

    /*
     <p>The <code>link</code> parameter allows containers to communicate with each other without the need for port mappings, using the <code>name</code> parameter. The <code>name:internalName</code> construct is analogous to <code>name:alias</code> in Docker links. For more information on linking Docker containers, see <a href="https://docs.docker.com/userguide/dockerlinks/">https://docs.docker.com/userguide/dockerlinks/</a>.</p> <important> <p>Containers that are collocated on a single container instance may be able to communicate with each other without requiring links or host port mappings. Network isolation is achieved on the container instance using security groups and VPC settings.</p> </important>
    */
    inline void SetLinks(Aws::Vector<Aws::String>&& value) { m_linksHasBeenSet = true; m_links = value; }

    /*
     <p>The <code>link</code> parameter allows containers to communicate with each other without the need for port mappings, using the <code>name</code> parameter. The <code>name:internalName</code> construct is analogous to <code>name:alias</code> in Docker links. For more information on linking Docker containers, see <a href="https://docs.docker.com/userguide/dockerlinks/">https://docs.docker.com/userguide/dockerlinks/</a>.</p> <important> <p>Containers that are collocated on a single container instance may be able to communicate with each other without requiring links or host port mappings. Network isolation is achieved on the container instance using security groups and VPC settings.</p> </important>
    */
    inline ContainerDefinition& WithLinks(const Aws::Vector<Aws::String>& value) { SetLinks(value); return *this;}

    /*
     <p>The <code>link</code> parameter allows containers to communicate with each other without the need for port mappings, using the <code>name</code> parameter. The <code>name:internalName</code> construct is analogous to <code>name:alias</code> in Docker links. For more information on linking Docker containers, see <a href="https://docs.docker.com/userguide/dockerlinks/">https://docs.docker.com/userguide/dockerlinks/</a>.</p> <important> <p>Containers that are collocated on a single container instance may be able to communicate with each other without requiring links or host port mappings. Network isolation is achieved on the container instance using security groups and VPC settings.</p> </important>
    */
    inline ContainerDefinition& WithLinks(Aws::Vector<Aws::String>&& value) { SetLinks(value); return *this;}

    /*
     <p>The <code>link</code> parameter allows containers to communicate with each other without the need for port mappings, using the <code>name</code> parameter. The <code>name:internalName</code> construct is analogous to <code>name:alias</code> in Docker links. For more information on linking Docker containers, see <a href="https://docs.docker.com/userguide/dockerlinks/">https://docs.docker.com/userguide/dockerlinks/</a>.</p> <important> <p>Containers that are collocated on a single container instance may be able to communicate with each other without requiring links or host port mappings. Network isolation is achieved on the container instance using security groups and VPC settings.</p> </important>
    */
    inline ContainerDefinition& AddLinks(const Aws::String& value) { m_linksHasBeenSet = true; m_links.push_back(value); return *this; }

    /*
     <p>The <code>link</code> parameter allows containers to communicate with each other without the need for port mappings, using the <code>name</code> parameter. The <code>name:internalName</code> construct is analogous to <code>name:alias</code> in Docker links. For more information on linking Docker containers, see <a href="https://docs.docker.com/userguide/dockerlinks/">https://docs.docker.com/userguide/dockerlinks/</a>.</p> <important> <p>Containers that are collocated on a single container instance may be able to communicate with each other without requiring links or host port mappings. Network isolation is achieved on the container instance using security groups and VPC settings.</p> </important>
    */
    inline ContainerDefinition& AddLinks(Aws::String&& value) { m_linksHasBeenSet = true; m_links.push_back(value); return *this; }

    /*
     <p>The <code>link</code> parameter allows containers to communicate with each other without the need for port mappings, using the <code>name</code> parameter. The <code>name:internalName</code> construct is analogous to <code>name:alias</code> in Docker links. For more information on linking Docker containers, see <a href="https://docs.docker.com/userguide/dockerlinks/">https://docs.docker.com/userguide/dockerlinks/</a>.</p> <important> <p>Containers that are collocated on a single container instance may be able to communicate with each other without requiring links or host port mappings. Network isolation is achieved on the container instance using security groups and VPC settings.</p> </important>
    */
    inline ContainerDefinition& AddLinks(const char* value) { m_linksHasBeenSet = true; m_links.push_back(value); return *this; }

    /*
     <p>The list of port mappings for the container.</p>
    */
    inline const Aws::Vector<PortMapping>& GetPortMappings() const{ return m_portMappings; }

    /*
     <p>The list of port mappings for the container.</p>
    */
    inline void SetPortMappings(const Aws::Vector<PortMapping>& value) { m_portMappingsHasBeenSet = true; m_portMappings = value; }

    /*
     <p>The list of port mappings for the container.</p>
    */
    inline void SetPortMappings(Aws::Vector<PortMapping>&& value) { m_portMappingsHasBeenSet = true; m_portMappings = value; }

    /*
     <p>The list of port mappings for the container.</p>
    */
    inline ContainerDefinition& WithPortMappings(const Aws::Vector<PortMapping>& value) { SetPortMappings(value); return *this;}

    /*
     <p>The list of port mappings for the container.</p>
    */
    inline ContainerDefinition& WithPortMappings(Aws::Vector<PortMapping>&& value) { SetPortMappings(value); return *this;}

    /*
     <p>The list of port mappings for the container.</p>
    */
    inline ContainerDefinition& AddPortMappings(const PortMapping& value) { m_portMappingsHasBeenSet = true; m_portMappings.push_back(value); return *this; }

    /*
     <p>The list of port mappings for the container.</p>
    */
    inline ContainerDefinition& AddPortMappings(PortMapping&& value) { m_portMappingsHasBeenSet = true; m_portMappings.push_back(value); return *this; }

    /*
     <p>If the <code>essential</code> parameter of a container is marked as <code>true</code>, the failure of that container will stop the task. If the <code>essential</code> parameter of a container is marked as <code>false</code>, then its failure will not affect the rest of the containers in a task. If this parameter is omitted, a container is assumed to be essential.</p> <note> <p>All tasks must have at least one essential container.</p> </note>
    */
    inline bool GetEssential() const{ return m_essential; }

    /*
     <p>If the <code>essential</code> parameter of a container is marked as <code>true</code>, the failure of that container will stop the task. If the <code>essential</code> parameter of a container is marked as <code>false</code>, then its failure will not affect the rest of the containers in a task. If this parameter is omitted, a container is assumed to be essential.</p> <note> <p>All tasks must have at least one essential container.</p> </note>
    */
    inline void SetEssential(bool value) { m_essentialHasBeenSet = true; m_essential = value; }

    /*
     <p>If the <code>essential</code> parameter of a container is marked as <code>true</code>, the failure of that container will stop the task. If the <code>essential</code> parameter of a container is marked as <code>false</code>, then its failure will not affect the rest of the containers in a task. If this parameter is omitted, a container is assumed to be essential.</p> <note> <p>All tasks must have at least one essential container.</p> </note>
    */
    inline ContainerDefinition& WithEssential(bool value) { SetEssential(value); return *this;}

    /*
     <important> <p>Early versions of the Amazon ECS container agent do not properly handle <code>entryPoint</code> parameters. If you have problems using <code>entryPoint</code>, update your container agent or enter your commands and arguments as <code>command</code> array items instead.</p> </important> <p>The <code>ENTRYPOINT</code> that is passed to the container. For more information on the Docker <code>ENTRYPOINT</code> parameter, see <a href="https://docs.docker.com/reference/builder/#entrypoint">https://docs.docker.com/reference/builder/#entrypoint</a>.</p>
    */
    inline const Aws::Vector<Aws::String>& GetEntryPoint() const{ return m_entryPoint; }

    /*
     <important> <p>Early versions of the Amazon ECS container agent do not properly handle <code>entryPoint</code> parameters. If you have problems using <code>entryPoint</code>, update your container agent or enter your commands and arguments as <code>command</code> array items instead.</p> </important> <p>The <code>ENTRYPOINT</code> that is passed to the container. For more information on the Docker <code>ENTRYPOINT</code> parameter, see <a href="https://docs.docker.com/reference/builder/#entrypoint">https://docs.docker.com/reference/builder/#entrypoint</a>.</p>
    */
    inline void SetEntryPoint(const Aws::Vector<Aws::String>& value) { m_entryPointHasBeenSet = true; m_entryPoint = value; }

    /*
     <important> <p>Early versions of the Amazon ECS container agent do not properly handle <code>entryPoint</code> parameters. If you have problems using <code>entryPoint</code>, update your container agent or enter your commands and arguments as <code>command</code> array items instead.</p> </important> <p>The <code>ENTRYPOINT</code> that is passed to the container. For more information on the Docker <code>ENTRYPOINT</code> parameter, see <a href="https://docs.docker.com/reference/builder/#entrypoint">https://docs.docker.com/reference/builder/#entrypoint</a>.</p>
    */
    inline void SetEntryPoint(Aws::Vector<Aws::String>&& value) { m_entryPointHasBeenSet = true; m_entryPoint = value; }

    /*
     <important> <p>Early versions of the Amazon ECS container agent do not properly handle <code>entryPoint</code> parameters. If you have problems using <code>entryPoint</code>, update your container agent or enter your commands and arguments as <code>command</code> array items instead.</p> </important> <p>The <code>ENTRYPOINT</code> that is passed to the container. For more information on the Docker <code>ENTRYPOINT</code> parameter, see <a href="https://docs.docker.com/reference/builder/#entrypoint">https://docs.docker.com/reference/builder/#entrypoint</a>.</p>
    */
    inline ContainerDefinition& WithEntryPoint(const Aws::Vector<Aws::String>& value) { SetEntryPoint(value); return *this;}

    /*
     <important> <p>Early versions of the Amazon ECS container agent do not properly handle <code>entryPoint</code> parameters. If you have problems using <code>entryPoint</code>, update your container agent or enter your commands and arguments as <code>command</code> array items instead.</p> </important> <p>The <code>ENTRYPOINT</code> that is passed to the container. For more information on the Docker <code>ENTRYPOINT</code> parameter, see <a href="https://docs.docker.com/reference/builder/#entrypoint">https://docs.docker.com/reference/builder/#entrypoint</a>.</p>
    */
    inline ContainerDefinition& WithEntryPoint(Aws::Vector<Aws::String>&& value) { SetEntryPoint(value); return *this;}

    /*
     <important> <p>Early versions of the Amazon ECS container agent do not properly handle <code>entryPoint</code> parameters. If you have problems using <code>entryPoint</code>, update your container agent or enter your commands and arguments as <code>command</code> array items instead.</p> </important> <p>The <code>ENTRYPOINT</code> that is passed to the container. For more information on the Docker <code>ENTRYPOINT</code> parameter, see <a href="https://docs.docker.com/reference/builder/#entrypoint">https://docs.docker.com/reference/builder/#entrypoint</a>.</p>
    */
    inline ContainerDefinition& AddEntryPoint(const Aws::String& value) { m_entryPointHasBeenSet = true; m_entryPoint.push_back(value); return *this; }

    /*
     <important> <p>Early versions of the Amazon ECS container agent do not properly handle <code>entryPoint</code> parameters. If you have problems using <code>entryPoint</code>, update your container agent or enter your commands and arguments as <code>command</code> array items instead.</p> </important> <p>The <code>ENTRYPOINT</code> that is passed to the container. For more information on the Docker <code>ENTRYPOINT</code> parameter, see <a href="https://docs.docker.com/reference/builder/#entrypoint">https://docs.docker.com/reference/builder/#entrypoint</a>.</p>
    */
    inline ContainerDefinition& AddEntryPoint(Aws::String&& value) { m_entryPointHasBeenSet = true; m_entryPoint.push_back(value); return *this; }

    /*
     <important> <p>Early versions of the Amazon ECS container agent do not properly handle <code>entryPoint</code> parameters. If you have problems using <code>entryPoint</code>, update your container agent or enter your commands and arguments as <code>command</code> array items instead.</p> </important> <p>The <code>ENTRYPOINT</code> that is passed to the container. For more information on the Docker <code>ENTRYPOINT</code> parameter, see <a href="https://docs.docker.com/reference/builder/#entrypoint">https://docs.docker.com/reference/builder/#entrypoint</a>.</p>
    */
    inline ContainerDefinition& AddEntryPoint(const char* value) { m_entryPointHasBeenSet = true; m_entryPoint.push_back(value); return *this; }

    /*
     <p>The <code>CMD</code> that is passed to the container. For more information on the Docker <code>CMD</code> parameter, see <a href="https://docs.docker.com/reference/builder/#cmd">https://docs.docker.com/reference/builder/#cmd</a>.</p>
    */
    inline const Aws::Vector<Aws::String>& GetCommand() const{ return m_command; }

    /*
     <p>The <code>CMD</code> that is passed to the container. For more information on the Docker <code>CMD</code> parameter, see <a href="https://docs.docker.com/reference/builder/#cmd">https://docs.docker.com/reference/builder/#cmd</a>.</p>
    */
    inline void SetCommand(const Aws::Vector<Aws::String>& value) { m_commandHasBeenSet = true; m_command = value; }

    /*
     <p>The <code>CMD</code> that is passed to the container. For more information on the Docker <code>CMD</code> parameter, see <a href="https://docs.docker.com/reference/builder/#cmd">https://docs.docker.com/reference/builder/#cmd</a>.</p>
    */
    inline void SetCommand(Aws::Vector<Aws::String>&& value) { m_commandHasBeenSet = true; m_command = value; }

    /*
     <p>The <code>CMD</code> that is passed to the container. For more information on the Docker <code>CMD</code> parameter, see <a href="https://docs.docker.com/reference/builder/#cmd">https://docs.docker.com/reference/builder/#cmd</a>.</p>
    */
    inline ContainerDefinition& WithCommand(const Aws::Vector<Aws::String>& value) { SetCommand(value); return *this;}

    /*
     <p>The <code>CMD</code> that is passed to the container. For more information on the Docker <code>CMD</code> parameter, see <a href="https://docs.docker.com/reference/builder/#cmd">https://docs.docker.com/reference/builder/#cmd</a>.</p>
    */
    inline ContainerDefinition& WithCommand(Aws::Vector<Aws::String>&& value) { SetCommand(value); return *this;}

    /*
     <p>The <code>CMD</code> that is passed to the container. For more information on the Docker <code>CMD</code> parameter, see <a href="https://docs.docker.com/reference/builder/#cmd">https://docs.docker.com/reference/builder/#cmd</a>.</p>
    */
    inline ContainerDefinition& AddCommand(const Aws::String& value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }

    /*
     <p>The <code>CMD</code> that is passed to the container. For more information on the Docker <code>CMD</code> parameter, see <a href="https://docs.docker.com/reference/builder/#cmd">https://docs.docker.com/reference/builder/#cmd</a>.</p>
    */
    inline ContainerDefinition& AddCommand(Aws::String&& value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }

    /*
     <p>The <code>CMD</code> that is passed to the container. For more information on the Docker <code>CMD</code> parameter, see <a href="https://docs.docker.com/reference/builder/#cmd">https://docs.docker.com/reference/builder/#cmd</a>.</p>
    */
    inline ContainerDefinition& AddCommand(const char* value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }

    /*
     <p>The environment variables to pass to a container.</p>
    */
    inline const Aws::Vector<KeyValuePair>& GetEnvironment() const{ return m_environment; }

    /*
     <p>The environment variables to pass to a container.</p>
    */
    inline void SetEnvironment(const Aws::Vector<KeyValuePair>& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /*
     <p>The environment variables to pass to a container.</p>
    */
    inline void SetEnvironment(Aws::Vector<KeyValuePair>&& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /*
     <p>The environment variables to pass to a container.</p>
    */
    inline ContainerDefinition& WithEnvironment(const Aws::Vector<KeyValuePair>& value) { SetEnvironment(value); return *this;}

    /*
     <p>The environment variables to pass to a container.</p>
    */
    inline ContainerDefinition& WithEnvironment(Aws::Vector<KeyValuePair>&& value) { SetEnvironment(value); return *this;}

    /*
     <p>The environment variables to pass to a container.</p>
    */
    inline ContainerDefinition& AddEnvironment(const KeyValuePair& value) { m_environmentHasBeenSet = true; m_environment.push_back(value); return *this; }

    /*
     <p>The environment variables to pass to a container.</p>
    */
    inline ContainerDefinition& AddEnvironment(KeyValuePair&& value) { m_environmentHasBeenSet = true; m_environment.push_back(value); return *this; }

    /*
     <p>The mount points for data volumes in your container.</p>
    */
    inline const Aws::Vector<MountPoint>& GetMountPoints() const{ return m_mountPoints; }

    /*
     <p>The mount points for data volumes in your container.</p>
    */
    inline void SetMountPoints(const Aws::Vector<MountPoint>& value) { m_mountPointsHasBeenSet = true; m_mountPoints = value; }

    /*
     <p>The mount points for data volumes in your container.</p>
    */
    inline void SetMountPoints(Aws::Vector<MountPoint>&& value) { m_mountPointsHasBeenSet = true; m_mountPoints = value; }

    /*
     <p>The mount points for data volumes in your container.</p>
    */
    inline ContainerDefinition& WithMountPoints(const Aws::Vector<MountPoint>& value) { SetMountPoints(value); return *this;}

    /*
     <p>The mount points for data volumes in your container.</p>
    */
    inline ContainerDefinition& WithMountPoints(Aws::Vector<MountPoint>&& value) { SetMountPoints(value); return *this;}

    /*
     <p>The mount points for data volumes in your container.</p>
    */
    inline ContainerDefinition& AddMountPoints(const MountPoint& value) { m_mountPointsHasBeenSet = true; m_mountPoints.push_back(value); return *this; }

    /*
     <p>The mount points for data volumes in your container.</p>
    */
    inline ContainerDefinition& AddMountPoints(MountPoint&& value) { m_mountPointsHasBeenSet = true; m_mountPoints.push_back(value); return *this; }

    /*
     <p>Data volumes to mount from another container.</p>
    */
    inline const Aws::Vector<VolumeFrom>& GetVolumesFrom() const{ return m_volumesFrom; }

    /*
     <p>Data volumes to mount from another container.</p>
    */
    inline void SetVolumesFrom(const Aws::Vector<VolumeFrom>& value) { m_volumesFromHasBeenSet = true; m_volumesFrom = value; }

    /*
     <p>Data volumes to mount from another container.</p>
    */
    inline void SetVolumesFrom(Aws::Vector<VolumeFrom>&& value) { m_volumesFromHasBeenSet = true; m_volumesFrom = value; }

    /*
     <p>Data volumes to mount from another container.</p>
    */
    inline ContainerDefinition& WithVolumesFrom(const Aws::Vector<VolumeFrom>& value) { SetVolumesFrom(value); return *this;}

    /*
     <p>Data volumes to mount from another container.</p>
    */
    inline ContainerDefinition& WithVolumesFrom(Aws::Vector<VolumeFrom>&& value) { SetVolumesFrom(value); return *this;}

    /*
     <p>Data volumes to mount from another container.</p>
    */
    inline ContainerDefinition& AddVolumesFrom(const VolumeFrom& value) { m_volumesFromHasBeenSet = true; m_volumesFrom.push_back(value); return *this; }

    /*
     <p>Data volumes to mount from another container.</p>
    */
    inline ContainerDefinition& AddVolumesFrom(VolumeFrom&& value) { m_volumesFromHasBeenSet = true; m_volumesFrom.push_back(value); return *this; }

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_image;
    bool m_imageHasBeenSet;
    long m_cpu;
    bool m_cpuHasBeenSet;
    long m_memory;
    bool m_memoryHasBeenSet;
    Aws::Vector<Aws::String> m_links;
    bool m_linksHasBeenSet;
    Aws::Vector<PortMapping> m_portMappings;
    bool m_portMappingsHasBeenSet;
    bool m_essential;
    bool m_essentialHasBeenSet;
    Aws::Vector<Aws::String> m_entryPoint;
    bool m_entryPointHasBeenSet;
    Aws::Vector<Aws::String> m_command;
    bool m_commandHasBeenSet;
    Aws::Vector<KeyValuePair> m_environment;
    bool m_environmentHasBeenSet;
    Aws::Vector<MountPoint> m_mountPoints;
    bool m_mountPointsHasBeenSet;
    Aws::Vector<VolumeFrom> m_volumesFrom;
    bool m_volumesFromHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
