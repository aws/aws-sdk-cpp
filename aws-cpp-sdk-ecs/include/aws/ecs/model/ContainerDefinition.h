/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ecs/model/LogConfiguration.h>
#include <aws/ecs/model/PortMapping.h>
#include <aws/ecs/model/KeyValuePair.h>
#include <aws/ecs/model/MountPoint.h>
#include <aws/ecs/model/VolumeFrom.h>
#include <aws/ecs/model/HostEntry.h>
#include <aws/ecs/model/Ulimit.h>

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

  /**
   * <p>Container definitions are used in task definitions to describe the different
   * containers that are launched as part of a task.</p>
   */
  class AWS_ECS_API ContainerDefinition
  {
  public:
    ContainerDefinition();
    ContainerDefinition(const Aws::Utils::Json::JsonValue& jsonValue);
    ContainerDefinition& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of a container. If you are linking multiple containers together in a
     * task definition, the <code>name</code> of one container can be entered in the
     * <code>links</code> of another container to connect the containers. Up to 255
     * letters (uppercase and lowercase), numbers, hyphens, and underscores are
     * allowed. This parameter maps to <code>name</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--name</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of a container. If you are linking multiple containers together in a
     * task definition, the <code>name</code> of one container can be entered in the
     * <code>links</code> of another container to connect the containers. Up to 255
     * letters (uppercase and lowercase), numbers, hyphens, and underscores are
     * allowed. This parameter maps to <code>name</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--name</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of a container. If you are linking multiple containers together in a
     * task definition, the <code>name</code> of one container can be entered in the
     * <code>links</code> of another container to connect the containers. Up to 255
     * letters (uppercase and lowercase), numbers, hyphens, and underscores are
     * allowed. This parameter maps to <code>name</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--name</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of a container. If you are linking multiple containers together in a
     * task definition, the <code>name</code> of one container can be entered in the
     * <code>links</code> of another container to connect the containers. Up to 255
     * letters (uppercase and lowercase), numbers, hyphens, and underscores are
     * allowed. This parameter maps to <code>name</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--name</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of a container. If you are linking multiple containers together in a
     * task definition, the <code>name</code> of one container can be entered in the
     * <code>links</code> of another container to connect the containers. Up to 255
     * letters (uppercase and lowercase), numbers, hyphens, and underscores are
     * allowed. This parameter maps to <code>name</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--name</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. </p>
     */
    inline ContainerDefinition& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of a container. If you are linking multiple containers together in a
     * task definition, the <code>name</code> of one container can be entered in the
     * <code>links</code> of another container to connect the containers. Up to 255
     * letters (uppercase and lowercase), numbers, hyphens, and underscores are
     * allowed. This parameter maps to <code>name</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--name</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. </p>
     */
    inline ContainerDefinition& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of a container. If you are linking multiple containers together in a
     * task definition, the <code>name</code> of one container can be entered in the
     * <code>links</code> of another container to connect the containers. Up to 255
     * letters (uppercase and lowercase), numbers, hyphens, and underscores are
     * allowed. This parameter maps to <code>name</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--name</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. </p>
     */
    inline ContainerDefinition& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The image used to start a container. This string is passed directly to the
     * Docker daemon. Images in the Docker Hub registry are available by default. Other
     * repositories are specified with <code>
     * <i>repository-url</i>/<i>image</i>:<i>tag</i> </code>. Up to 255 letters
     * (uppercase and lowercase), numbers, hyphens, underscores, colons, periods,
     * forward slashes, and number signs are allowed. This parameter maps to
     * <code>Image</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>IMAGE</code> parameter of <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <ul>
     * <li> <p>Images in official repositories on Docker Hub use a single name (for
     * example, <code>ubuntu</code> or <code>mongo</code>).</p> </li> <li> <p>Images in
     * other repositories on Docker Hub are qualified with an organization name (for
     * example, <code>amazon/amazon-ecs-agent</code>).</p> </li> <li> <p>Images in
     * other online repositories are qualified further by a domain name (for example,
     * <code>quay.io/assemblyline/ubuntu</code>).</p> </li> </ul>
     */
    inline const Aws::String& GetImage() const{ return m_image; }

    /**
     * <p>The image used to start a container. This string is passed directly to the
     * Docker daemon. Images in the Docker Hub registry are available by default. Other
     * repositories are specified with <code>
     * <i>repository-url</i>/<i>image</i>:<i>tag</i> </code>. Up to 255 letters
     * (uppercase and lowercase), numbers, hyphens, underscores, colons, periods,
     * forward slashes, and number signs are allowed. This parameter maps to
     * <code>Image</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>IMAGE</code> parameter of <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <ul>
     * <li> <p>Images in official repositories on Docker Hub use a single name (for
     * example, <code>ubuntu</code> or <code>mongo</code>).</p> </li> <li> <p>Images in
     * other repositories on Docker Hub are qualified with an organization name (for
     * example, <code>amazon/amazon-ecs-agent</code>).</p> </li> <li> <p>Images in
     * other online repositories are qualified further by a domain name (for example,
     * <code>quay.io/assemblyline/ubuntu</code>).</p> </li> </ul>
     */
    inline void SetImage(const Aws::String& value) { m_imageHasBeenSet = true; m_image = value; }

    /**
     * <p>The image used to start a container. This string is passed directly to the
     * Docker daemon. Images in the Docker Hub registry are available by default. Other
     * repositories are specified with <code>
     * <i>repository-url</i>/<i>image</i>:<i>tag</i> </code>. Up to 255 letters
     * (uppercase and lowercase), numbers, hyphens, underscores, colons, periods,
     * forward slashes, and number signs are allowed. This parameter maps to
     * <code>Image</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>IMAGE</code> parameter of <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <ul>
     * <li> <p>Images in official repositories on Docker Hub use a single name (for
     * example, <code>ubuntu</code> or <code>mongo</code>).</p> </li> <li> <p>Images in
     * other repositories on Docker Hub are qualified with an organization name (for
     * example, <code>amazon/amazon-ecs-agent</code>).</p> </li> <li> <p>Images in
     * other online repositories are qualified further by a domain name (for example,
     * <code>quay.io/assemblyline/ubuntu</code>).</p> </li> </ul>
     */
    inline void SetImage(Aws::String&& value) { m_imageHasBeenSet = true; m_image = value; }

    /**
     * <p>The image used to start a container. This string is passed directly to the
     * Docker daemon. Images in the Docker Hub registry are available by default. Other
     * repositories are specified with <code>
     * <i>repository-url</i>/<i>image</i>:<i>tag</i> </code>. Up to 255 letters
     * (uppercase and lowercase), numbers, hyphens, underscores, colons, periods,
     * forward slashes, and number signs are allowed. This parameter maps to
     * <code>Image</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>IMAGE</code> parameter of <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <ul>
     * <li> <p>Images in official repositories on Docker Hub use a single name (for
     * example, <code>ubuntu</code> or <code>mongo</code>).</p> </li> <li> <p>Images in
     * other repositories on Docker Hub are qualified with an organization name (for
     * example, <code>amazon/amazon-ecs-agent</code>).</p> </li> <li> <p>Images in
     * other online repositories are qualified further by a domain name (for example,
     * <code>quay.io/assemblyline/ubuntu</code>).</p> </li> </ul>
     */
    inline void SetImage(const char* value) { m_imageHasBeenSet = true; m_image.assign(value); }

    /**
     * <p>The image used to start a container. This string is passed directly to the
     * Docker daemon. Images in the Docker Hub registry are available by default. Other
     * repositories are specified with <code>
     * <i>repository-url</i>/<i>image</i>:<i>tag</i> </code>. Up to 255 letters
     * (uppercase and lowercase), numbers, hyphens, underscores, colons, periods,
     * forward slashes, and number signs are allowed. This parameter maps to
     * <code>Image</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>IMAGE</code> parameter of <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <ul>
     * <li> <p>Images in official repositories on Docker Hub use a single name (for
     * example, <code>ubuntu</code> or <code>mongo</code>).</p> </li> <li> <p>Images in
     * other repositories on Docker Hub are qualified with an organization name (for
     * example, <code>amazon/amazon-ecs-agent</code>).</p> </li> <li> <p>Images in
     * other online repositories are qualified further by a domain name (for example,
     * <code>quay.io/assemblyline/ubuntu</code>).</p> </li> </ul>
     */
    inline ContainerDefinition& WithImage(const Aws::String& value) { SetImage(value); return *this;}

    /**
     * <p>The image used to start a container. This string is passed directly to the
     * Docker daemon. Images in the Docker Hub registry are available by default. Other
     * repositories are specified with <code>
     * <i>repository-url</i>/<i>image</i>:<i>tag</i> </code>. Up to 255 letters
     * (uppercase and lowercase), numbers, hyphens, underscores, colons, periods,
     * forward slashes, and number signs are allowed. This parameter maps to
     * <code>Image</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>IMAGE</code> parameter of <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <ul>
     * <li> <p>Images in official repositories on Docker Hub use a single name (for
     * example, <code>ubuntu</code> or <code>mongo</code>).</p> </li> <li> <p>Images in
     * other repositories on Docker Hub are qualified with an organization name (for
     * example, <code>amazon/amazon-ecs-agent</code>).</p> </li> <li> <p>Images in
     * other online repositories are qualified further by a domain name (for example,
     * <code>quay.io/assemblyline/ubuntu</code>).</p> </li> </ul>
     */
    inline ContainerDefinition& WithImage(Aws::String&& value) { SetImage(value); return *this;}

    /**
     * <p>The image used to start a container. This string is passed directly to the
     * Docker daemon. Images in the Docker Hub registry are available by default. Other
     * repositories are specified with <code>
     * <i>repository-url</i>/<i>image</i>:<i>tag</i> </code>. Up to 255 letters
     * (uppercase and lowercase), numbers, hyphens, underscores, colons, periods,
     * forward slashes, and number signs are allowed. This parameter maps to
     * <code>Image</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>IMAGE</code> parameter of <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <ul>
     * <li> <p>Images in official repositories on Docker Hub use a single name (for
     * example, <code>ubuntu</code> or <code>mongo</code>).</p> </li> <li> <p>Images in
     * other repositories on Docker Hub are qualified with an organization name (for
     * example, <code>amazon/amazon-ecs-agent</code>).</p> </li> <li> <p>Images in
     * other online repositories are qualified further by a domain name (for example,
     * <code>quay.io/assemblyline/ubuntu</code>).</p> </li> </ul>
     */
    inline ContainerDefinition& WithImage(const char* value) { SetImage(value); return *this;}

    /**
     * <p>The number of <code>cpu</code> units reserved for the container. A container
     * instance has 1,024 <code>cpu</code> units for every CPU core. This parameter
     * specifies the minimum amount of CPU to reserve for a container, and containers
     * share unallocated CPU units with other containers on the instance with the same
     * ratio as their allocated amount. This parameter maps to <code>CpuShares</code>
     * in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--cpu-shares</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <note>
     * <p>You can determine the number of CPU units that are available per EC2 instance
     * type by multiplying the vCPUs listed for that instance type on the <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instances</a> detail
     * page by 1,024.</p> </note> <p>For example, if you run a single-container task on
     * a single-core instance type with 512 CPU units specified for that container, and
     * that is the only task running on the container instance, that container could
     * use the full 1,024 CPU unit share at any given time. However, if you launched
     * another copy of the same task on that container instance, each task would be
     * guaranteed a minimum of 512 CPU units when needed, and each container could
     * float to higher CPU usage if the other container was not using it, but if both
     * tasks were 100% active all of the time, they would be limited to 512 CPU
     * units.</p> <p>The Docker daemon on the container instance uses the CPU value to
     * calculate the relative CPU share ratios for running containers. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/run/#cpu-share-constraint">CPU
     * share constraint</a> in the Docker documentation. The minimum valid CPU share
     * value that the Linux kernel allows is 2; however, the CPU parameter is not
     * required, and you can use CPU values below 2 in your container definitions. For
     * CPU values below 2 (including null), the behavior varies based on your Amazon
     * ECS container agent version:</p> <ul> <li> <p> <b>Agent versions less than or
     * equal to 1.1.0:</b> Null and zero CPU values are passed to Docker as 0, which
     * Docker then converts to 1,024 CPU shares. CPU values of 1 are passed to Docker
     * as 1, which the Linux kernel converts to 2 CPU shares.</p> </li> <li> <p>
     * <b>Agent versions greater than or equal to 1.2.0:</b> Null, zero, and CPU values
     * of 1 are passed to Docker as 2.</p> </li> </ul>
     */
    inline int GetCpu() const{ return m_cpu; }

    /**
     * <p>The number of <code>cpu</code> units reserved for the container. A container
     * instance has 1,024 <code>cpu</code> units for every CPU core. This parameter
     * specifies the minimum amount of CPU to reserve for a container, and containers
     * share unallocated CPU units with other containers on the instance with the same
     * ratio as their allocated amount. This parameter maps to <code>CpuShares</code>
     * in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--cpu-shares</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <note>
     * <p>You can determine the number of CPU units that are available per EC2 instance
     * type by multiplying the vCPUs listed for that instance type on the <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instances</a> detail
     * page by 1,024.</p> </note> <p>For example, if you run a single-container task on
     * a single-core instance type with 512 CPU units specified for that container, and
     * that is the only task running on the container instance, that container could
     * use the full 1,024 CPU unit share at any given time. However, if you launched
     * another copy of the same task on that container instance, each task would be
     * guaranteed a minimum of 512 CPU units when needed, and each container could
     * float to higher CPU usage if the other container was not using it, but if both
     * tasks were 100% active all of the time, they would be limited to 512 CPU
     * units.</p> <p>The Docker daemon on the container instance uses the CPU value to
     * calculate the relative CPU share ratios for running containers. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/run/#cpu-share-constraint">CPU
     * share constraint</a> in the Docker documentation. The minimum valid CPU share
     * value that the Linux kernel allows is 2; however, the CPU parameter is not
     * required, and you can use CPU values below 2 in your container definitions. For
     * CPU values below 2 (including null), the behavior varies based on your Amazon
     * ECS container agent version:</p> <ul> <li> <p> <b>Agent versions less than or
     * equal to 1.1.0:</b> Null and zero CPU values are passed to Docker as 0, which
     * Docker then converts to 1,024 CPU shares. CPU values of 1 are passed to Docker
     * as 1, which the Linux kernel converts to 2 CPU shares.</p> </li> <li> <p>
     * <b>Agent versions greater than or equal to 1.2.0:</b> Null, zero, and CPU values
     * of 1 are passed to Docker as 2.</p> </li> </ul>
     */
    inline void SetCpu(int value) { m_cpuHasBeenSet = true; m_cpu = value; }

    /**
     * <p>The number of <code>cpu</code> units reserved for the container. A container
     * instance has 1,024 <code>cpu</code> units for every CPU core. This parameter
     * specifies the minimum amount of CPU to reserve for a container, and containers
     * share unallocated CPU units with other containers on the instance with the same
     * ratio as their allocated amount. This parameter maps to <code>CpuShares</code>
     * in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--cpu-shares</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <note>
     * <p>You can determine the number of CPU units that are available per EC2 instance
     * type by multiplying the vCPUs listed for that instance type on the <a
     * href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2 Instances</a> detail
     * page by 1,024.</p> </note> <p>For example, if you run a single-container task on
     * a single-core instance type with 512 CPU units specified for that container, and
     * that is the only task running on the container instance, that container could
     * use the full 1,024 CPU unit share at any given time. However, if you launched
     * another copy of the same task on that container instance, each task would be
     * guaranteed a minimum of 512 CPU units when needed, and each container could
     * float to higher CPU usage if the other container was not using it, but if both
     * tasks were 100% active all of the time, they would be limited to 512 CPU
     * units.</p> <p>The Docker daemon on the container instance uses the CPU value to
     * calculate the relative CPU share ratios for running containers. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/run/#cpu-share-constraint">CPU
     * share constraint</a> in the Docker documentation. The minimum valid CPU share
     * value that the Linux kernel allows is 2; however, the CPU parameter is not
     * required, and you can use CPU values below 2 in your container definitions. For
     * CPU values below 2 (including null), the behavior varies based on your Amazon
     * ECS container agent version:</p> <ul> <li> <p> <b>Agent versions less than or
     * equal to 1.1.0:</b> Null and zero CPU values are passed to Docker as 0, which
     * Docker then converts to 1,024 CPU shares. CPU values of 1 are passed to Docker
     * as 1, which the Linux kernel converts to 2 CPU shares.</p> </li> <li> <p>
     * <b>Agent versions greater than or equal to 1.2.0:</b> Null, zero, and CPU values
     * of 1 are passed to Docker as 2.</p> </li> </ul>
     */
    inline ContainerDefinition& WithCpu(int value) { SetCpu(value); return *this;}

    /**
     * <p>The hard limit (in MiB) of memory to present to the container. If your
     * container attempts to exceed the memory specified here, the container is killed.
     * This parameter maps to <code>Memory</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--memory</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <p>You
     * must specify a non-zero integer for one or both of <code>memory</code> or
     * <code>memoryReservation</code> in container definitions. If you specify both,
     * <code>memory</code> must be greater than <code>memoryReservation</code>. If you
     * specify <code>memoryReservation</code>, then that value is subtracted from the
     * available memory resources for the container instance on which the container is
     * placed; otherwise, the value of <code>memory</code> is used.</p> <p>The Docker
     * daemon reserves a minimum of 4 MiB of memory for a container, so you should not
     * specify fewer than 4 MiB of memory for your containers. </p>
     */
    inline int GetMemory() const{ return m_memory; }

    /**
     * <p>The hard limit (in MiB) of memory to present to the container. If your
     * container attempts to exceed the memory specified here, the container is killed.
     * This parameter maps to <code>Memory</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--memory</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <p>You
     * must specify a non-zero integer for one or both of <code>memory</code> or
     * <code>memoryReservation</code> in container definitions. If you specify both,
     * <code>memory</code> must be greater than <code>memoryReservation</code>. If you
     * specify <code>memoryReservation</code>, then that value is subtracted from the
     * available memory resources for the container instance on which the container is
     * placed; otherwise, the value of <code>memory</code> is used.</p> <p>The Docker
     * daemon reserves a minimum of 4 MiB of memory for a container, so you should not
     * specify fewer than 4 MiB of memory for your containers. </p>
     */
    inline void SetMemory(int value) { m_memoryHasBeenSet = true; m_memory = value; }

    /**
     * <p>The hard limit (in MiB) of memory to present to the container. If your
     * container attempts to exceed the memory specified here, the container is killed.
     * This parameter maps to <code>Memory</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--memory</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <p>You
     * must specify a non-zero integer for one or both of <code>memory</code> or
     * <code>memoryReservation</code> in container definitions. If you specify both,
     * <code>memory</code> must be greater than <code>memoryReservation</code>. If you
     * specify <code>memoryReservation</code>, then that value is subtracted from the
     * available memory resources for the container instance on which the container is
     * placed; otherwise, the value of <code>memory</code> is used.</p> <p>The Docker
     * daemon reserves a minimum of 4 MiB of memory for a container, so you should not
     * specify fewer than 4 MiB of memory for your containers. </p>
     */
    inline ContainerDefinition& WithMemory(int value) { SetMemory(value); return *this;}

    /**
     * <p>The soft limit (in MiB) of memory to reserve for the container. When system
     * memory is under heavy contention, Docker attempts to keep the container memory
     * to this soft limit; however, your container can consume more memory when it
     * needs to, up to either the hard limit specified with the <code>memory</code>
     * parameter (if applicable), or all of the available memory on the container
     * instance, whichever comes first. This parameter maps to
     * <code>MemoryReservation</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--memory-reservation</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <p>You
     * must specify a non-zero integer for one or both of <code>memory</code> or
     * <code>memoryReservation</code> in container definitions. If you specify both,
     * <code>memory</code> must be greater than <code>memoryReservation</code>. If you
     * specify <code>memoryReservation</code>, then that value is subtracted from the
     * available memory resources for the container instance on which the container is
     * placed; otherwise, the value of <code>memory</code> is used.</p> <p>For example,
     * if your container normally uses 128 MiB of memory, but occasionally bursts to
     * 256 MiB of memory for short periods of time, you can set a
     * <code>memoryReservation</code> of 128 MiB, and a <code>memory</code> hard limit
     * of 300 MiB. This configuration would allow the container to only reserve 128 MiB
     * of memory from the remaining resources on the container instance, but also allow
     * the container to consume more memory resources when needed.</p>
     */
    inline int GetMemoryReservation() const{ return m_memoryReservation; }

    /**
     * <p>The soft limit (in MiB) of memory to reserve for the container. When system
     * memory is under heavy contention, Docker attempts to keep the container memory
     * to this soft limit; however, your container can consume more memory when it
     * needs to, up to either the hard limit specified with the <code>memory</code>
     * parameter (if applicable), or all of the available memory on the container
     * instance, whichever comes first. This parameter maps to
     * <code>MemoryReservation</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--memory-reservation</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <p>You
     * must specify a non-zero integer for one or both of <code>memory</code> or
     * <code>memoryReservation</code> in container definitions. If you specify both,
     * <code>memory</code> must be greater than <code>memoryReservation</code>. If you
     * specify <code>memoryReservation</code>, then that value is subtracted from the
     * available memory resources for the container instance on which the container is
     * placed; otherwise, the value of <code>memory</code> is used.</p> <p>For example,
     * if your container normally uses 128 MiB of memory, but occasionally bursts to
     * 256 MiB of memory for short periods of time, you can set a
     * <code>memoryReservation</code> of 128 MiB, and a <code>memory</code> hard limit
     * of 300 MiB. This configuration would allow the container to only reserve 128 MiB
     * of memory from the remaining resources on the container instance, but also allow
     * the container to consume more memory resources when needed.</p>
     */
    inline void SetMemoryReservation(int value) { m_memoryReservationHasBeenSet = true; m_memoryReservation = value; }

    /**
     * <p>The soft limit (in MiB) of memory to reserve for the container. When system
     * memory is under heavy contention, Docker attempts to keep the container memory
     * to this soft limit; however, your container can consume more memory when it
     * needs to, up to either the hard limit specified with the <code>memory</code>
     * parameter (if applicable), or all of the available memory on the container
     * instance, whichever comes first. This parameter maps to
     * <code>MemoryReservation</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--memory-reservation</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <p>You
     * must specify a non-zero integer for one or both of <code>memory</code> or
     * <code>memoryReservation</code> in container definitions. If you specify both,
     * <code>memory</code> must be greater than <code>memoryReservation</code>. If you
     * specify <code>memoryReservation</code>, then that value is subtracted from the
     * available memory resources for the container instance on which the container is
     * placed; otherwise, the value of <code>memory</code> is used.</p> <p>For example,
     * if your container normally uses 128 MiB of memory, but occasionally bursts to
     * 256 MiB of memory for short periods of time, you can set a
     * <code>memoryReservation</code> of 128 MiB, and a <code>memory</code> hard limit
     * of 300 MiB. This configuration would allow the container to only reserve 128 MiB
     * of memory from the remaining resources on the container instance, but also allow
     * the container to consume more memory resources when needed.</p>
     */
    inline ContainerDefinition& WithMemoryReservation(int value) { SetMemoryReservation(value); return *this;}

    /**
     * <p>The <code>link</code> parameter allows containers to communicate with each
     * other without the need for port mappings, using the <code>name</code> parameter
     * and optionally, an <code>alias</code> for the link. This construct is analogous
     * to <code>name:alias</code> in Docker links. Up to 255 letters (uppercase and
     * lowercase), numbers, hyphens, and underscores are allowed for each
     * <code>name</code> and <code>alias</code>. For more information on linking Docker
     * containers, see <a
     * href="https://docs.docker.com/engine/userguide/networking/default_network/dockerlinks/">https://docs.docker.com/engine/userguide/networking/default_network/dockerlinks/</a>.
     * This parameter maps to <code>Links</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--link</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     * <important> <p>Containers that are collocated on a single container instance may
     * be able to communicate with each other without requiring links or host port
     * mappings. Network isolation is achieved on the container instance using security
     * groups and VPC settings.</p> </important>
     */
    inline const Aws::Vector<Aws::String>& GetLinks() const{ return m_links; }

    /**
     * <p>The <code>link</code> parameter allows containers to communicate with each
     * other without the need for port mappings, using the <code>name</code> parameter
     * and optionally, an <code>alias</code> for the link. This construct is analogous
     * to <code>name:alias</code> in Docker links. Up to 255 letters (uppercase and
     * lowercase), numbers, hyphens, and underscores are allowed for each
     * <code>name</code> and <code>alias</code>. For more information on linking Docker
     * containers, see <a
     * href="https://docs.docker.com/engine/userguide/networking/default_network/dockerlinks/">https://docs.docker.com/engine/userguide/networking/default_network/dockerlinks/</a>.
     * This parameter maps to <code>Links</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--link</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     * <important> <p>Containers that are collocated on a single container instance may
     * be able to communicate with each other without requiring links or host port
     * mappings. Network isolation is achieved on the container instance using security
     * groups and VPC settings.</p> </important>
     */
    inline void SetLinks(const Aws::Vector<Aws::String>& value) { m_linksHasBeenSet = true; m_links = value; }

    /**
     * <p>The <code>link</code> parameter allows containers to communicate with each
     * other without the need for port mappings, using the <code>name</code> parameter
     * and optionally, an <code>alias</code> for the link. This construct is analogous
     * to <code>name:alias</code> in Docker links. Up to 255 letters (uppercase and
     * lowercase), numbers, hyphens, and underscores are allowed for each
     * <code>name</code> and <code>alias</code>. For more information on linking Docker
     * containers, see <a
     * href="https://docs.docker.com/engine/userguide/networking/default_network/dockerlinks/">https://docs.docker.com/engine/userguide/networking/default_network/dockerlinks/</a>.
     * This parameter maps to <code>Links</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--link</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     * <important> <p>Containers that are collocated on a single container instance may
     * be able to communicate with each other without requiring links or host port
     * mappings. Network isolation is achieved on the container instance using security
     * groups and VPC settings.</p> </important>
     */
    inline void SetLinks(Aws::Vector<Aws::String>&& value) { m_linksHasBeenSet = true; m_links = value; }

    /**
     * <p>The <code>link</code> parameter allows containers to communicate with each
     * other without the need for port mappings, using the <code>name</code> parameter
     * and optionally, an <code>alias</code> for the link. This construct is analogous
     * to <code>name:alias</code> in Docker links. Up to 255 letters (uppercase and
     * lowercase), numbers, hyphens, and underscores are allowed for each
     * <code>name</code> and <code>alias</code>. For more information on linking Docker
     * containers, see <a
     * href="https://docs.docker.com/engine/userguide/networking/default_network/dockerlinks/">https://docs.docker.com/engine/userguide/networking/default_network/dockerlinks/</a>.
     * This parameter maps to <code>Links</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--link</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     * <important> <p>Containers that are collocated on a single container instance may
     * be able to communicate with each other without requiring links or host port
     * mappings. Network isolation is achieved on the container instance using security
     * groups and VPC settings.</p> </important>
     */
    inline ContainerDefinition& WithLinks(const Aws::Vector<Aws::String>& value) { SetLinks(value); return *this;}

    /**
     * <p>The <code>link</code> parameter allows containers to communicate with each
     * other without the need for port mappings, using the <code>name</code> parameter
     * and optionally, an <code>alias</code> for the link. This construct is analogous
     * to <code>name:alias</code> in Docker links. Up to 255 letters (uppercase and
     * lowercase), numbers, hyphens, and underscores are allowed for each
     * <code>name</code> and <code>alias</code>. For more information on linking Docker
     * containers, see <a
     * href="https://docs.docker.com/engine/userguide/networking/default_network/dockerlinks/">https://docs.docker.com/engine/userguide/networking/default_network/dockerlinks/</a>.
     * This parameter maps to <code>Links</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--link</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     * <important> <p>Containers that are collocated on a single container instance may
     * be able to communicate with each other without requiring links or host port
     * mappings. Network isolation is achieved on the container instance using security
     * groups and VPC settings.</p> </important>
     */
    inline ContainerDefinition& WithLinks(Aws::Vector<Aws::String>&& value) { SetLinks(value); return *this;}

    /**
     * <p>The <code>link</code> parameter allows containers to communicate with each
     * other without the need for port mappings, using the <code>name</code> parameter
     * and optionally, an <code>alias</code> for the link. This construct is analogous
     * to <code>name:alias</code> in Docker links. Up to 255 letters (uppercase and
     * lowercase), numbers, hyphens, and underscores are allowed for each
     * <code>name</code> and <code>alias</code>. For more information on linking Docker
     * containers, see <a
     * href="https://docs.docker.com/engine/userguide/networking/default_network/dockerlinks/">https://docs.docker.com/engine/userguide/networking/default_network/dockerlinks/</a>.
     * This parameter maps to <code>Links</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--link</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     * <important> <p>Containers that are collocated on a single container instance may
     * be able to communicate with each other without requiring links or host port
     * mappings. Network isolation is achieved on the container instance using security
     * groups and VPC settings.</p> </important>
     */
    inline ContainerDefinition& AddLinks(const Aws::String& value) { m_linksHasBeenSet = true; m_links.push_back(value); return *this; }

    /**
     * <p>The <code>link</code> parameter allows containers to communicate with each
     * other without the need for port mappings, using the <code>name</code> parameter
     * and optionally, an <code>alias</code> for the link. This construct is analogous
     * to <code>name:alias</code> in Docker links. Up to 255 letters (uppercase and
     * lowercase), numbers, hyphens, and underscores are allowed for each
     * <code>name</code> and <code>alias</code>. For more information on linking Docker
     * containers, see <a
     * href="https://docs.docker.com/engine/userguide/networking/default_network/dockerlinks/">https://docs.docker.com/engine/userguide/networking/default_network/dockerlinks/</a>.
     * This parameter maps to <code>Links</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--link</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     * <important> <p>Containers that are collocated on a single container instance may
     * be able to communicate with each other without requiring links or host port
     * mappings. Network isolation is achieved on the container instance using security
     * groups and VPC settings.</p> </important>
     */
    inline ContainerDefinition& AddLinks(Aws::String&& value) { m_linksHasBeenSet = true; m_links.push_back(value); return *this; }

    /**
     * <p>The <code>link</code> parameter allows containers to communicate with each
     * other without the need for port mappings, using the <code>name</code> parameter
     * and optionally, an <code>alias</code> for the link. This construct is analogous
     * to <code>name:alias</code> in Docker links. Up to 255 letters (uppercase and
     * lowercase), numbers, hyphens, and underscores are allowed for each
     * <code>name</code> and <code>alias</code>. For more information on linking Docker
     * containers, see <a
     * href="https://docs.docker.com/engine/userguide/networking/default_network/dockerlinks/">https://docs.docker.com/engine/userguide/networking/default_network/dockerlinks/</a>.
     * This parameter maps to <code>Links</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--link</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     * <important> <p>Containers that are collocated on a single container instance may
     * be able to communicate with each other without requiring links or host port
     * mappings. Network isolation is achieved on the container instance using security
     * groups and VPC settings.</p> </important>
     */
    inline ContainerDefinition& AddLinks(const char* value) { m_linksHasBeenSet = true; m_links.push_back(value); return *this; }

    /**
     * <p>The list of port mappings for the container. Port mappings allow containers
     * to access ports on the host container instance to send or receive traffic. This
     * parameter maps to <code>PortBindings</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--publish</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. If the
     * network mode of a task definition is set to <code>none</code>, then you cannot
     * specify port mappings. If the network mode of a task definition is set to
     * <code>host</code>, then host ports must either be undefined or they must match
     * the container port in the port mapping.</p> <note> <p>After a task reaches the
     * <code>RUNNING</code> status, manual and automatic host and container port
     * assignments are visible in the <b>Network Bindings</b> section of a container
     * description of a selected task in the Amazon ECS console, or the
     * <code>networkBindings</code> section <a>DescribeTasks</a> responses.</p> </note>
     */
    inline const Aws::Vector<PortMapping>& GetPortMappings() const{ return m_portMappings; }

    /**
     * <p>The list of port mappings for the container. Port mappings allow containers
     * to access ports on the host container instance to send or receive traffic. This
     * parameter maps to <code>PortBindings</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--publish</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. If the
     * network mode of a task definition is set to <code>none</code>, then you cannot
     * specify port mappings. If the network mode of a task definition is set to
     * <code>host</code>, then host ports must either be undefined or they must match
     * the container port in the port mapping.</p> <note> <p>After a task reaches the
     * <code>RUNNING</code> status, manual and automatic host and container port
     * assignments are visible in the <b>Network Bindings</b> section of a container
     * description of a selected task in the Amazon ECS console, or the
     * <code>networkBindings</code> section <a>DescribeTasks</a> responses.</p> </note>
     */
    inline void SetPortMappings(const Aws::Vector<PortMapping>& value) { m_portMappingsHasBeenSet = true; m_portMappings = value; }

    /**
     * <p>The list of port mappings for the container. Port mappings allow containers
     * to access ports on the host container instance to send or receive traffic. This
     * parameter maps to <code>PortBindings</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--publish</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. If the
     * network mode of a task definition is set to <code>none</code>, then you cannot
     * specify port mappings. If the network mode of a task definition is set to
     * <code>host</code>, then host ports must either be undefined or they must match
     * the container port in the port mapping.</p> <note> <p>After a task reaches the
     * <code>RUNNING</code> status, manual and automatic host and container port
     * assignments are visible in the <b>Network Bindings</b> section of a container
     * description of a selected task in the Amazon ECS console, or the
     * <code>networkBindings</code> section <a>DescribeTasks</a> responses.</p> </note>
     */
    inline void SetPortMappings(Aws::Vector<PortMapping>&& value) { m_portMappingsHasBeenSet = true; m_portMappings = value; }

    /**
     * <p>The list of port mappings for the container. Port mappings allow containers
     * to access ports on the host container instance to send or receive traffic. This
     * parameter maps to <code>PortBindings</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--publish</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. If the
     * network mode of a task definition is set to <code>none</code>, then you cannot
     * specify port mappings. If the network mode of a task definition is set to
     * <code>host</code>, then host ports must either be undefined or they must match
     * the container port in the port mapping.</p> <note> <p>After a task reaches the
     * <code>RUNNING</code> status, manual and automatic host and container port
     * assignments are visible in the <b>Network Bindings</b> section of a container
     * description of a selected task in the Amazon ECS console, or the
     * <code>networkBindings</code> section <a>DescribeTasks</a> responses.</p> </note>
     */
    inline ContainerDefinition& WithPortMappings(const Aws::Vector<PortMapping>& value) { SetPortMappings(value); return *this;}

    /**
     * <p>The list of port mappings for the container. Port mappings allow containers
     * to access ports on the host container instance to send or receive traffic. This
     * parameter maps to <code>PortBindings</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--publish</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. If the
     * network mode of a task definition is set to <code>none</code>, then you cannot
     * specify port mappings. If the network mode of a task definition is set to
     * <code>host</code>, then host ports must either be undefined or they must match
     * the container port in the port mapping.</p> <note> <p>After a task reaches the
     * <code>RUNNING</code> status, manual and automatic host and container port
     * assignments are visible in the <b>Network Bindings</b> section of a container
     * description of a selected task in the Amazon ECS console, or the
     * <code>networkBindings</code> section <a>DescribeTasks</a> responses.</p> </note>
     */
    inline ContainerDefinition& WithPortMappings(Aws::Vector<PortMapping>&& value) { SetPortMappings(value); return *this;}

    /**
     * <p>The list of port mappings for the container. Port mappings allow containers
     * to access ports on the host container instance to send or receive traffic. This
     * parameter maps to <code>PortBindings</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--publish</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. If the
     * network mode of a task definition is set to <code>none</code>, then you cannot
     * specify port mappings. If the network mode of a task definition is set to
     * <code>host</code>, then host ports must either be undefined or they must match
     * the container port in the port mapping.</p> <note> <p>After a task reaches the
     * <code>RUNNING</code> status, manual and automatic host and container port
     * assignments are visible in the <b>Network Bindings</b> section of a container
     * description of a selected task in the Amazon ECS console, or the
     * <code>networkBindings</code> section <a>DescribeTasks</a> responses.</p> </note>
     */
    inline ContainerDefinition& AddPortMappings(const PortMapping& value) { m_portMappingsHasBeenSet = true; m_portMappings.push_back(value); return *this; }

    /**
     * <p>The list of port mappings for the container. Port mappings allow containers
     * to access ports on the host container instance to send or receive traffic. This
     * parameter maps to <code>PortBindings</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--publish</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. If the
     * network mode of a task definition is set to <code>none</code>, then you cannot
     * specify port mappings. If the network mode of a task definition is set to
     * <code>host</code>, then host ports must either be undefined or they must match
     * the container port in the port mapping.</p> <note> <p>After a task reaches the
     * <code>RUNNING</code> status, manual and automatic host and container port
     * assignments are visible in the <b>Network Bindings</b> section of a container
     * description of a selected task in the Amazon ECS console, or the
     * <code>networkBindings</code> section <a>DescribeTasks</a> responses.</p> </note>
     */
    inline ContainerDefinition& AddPortMappings(PortMapping&& value) { m_portMappingsHasBeenSet = true; m_portMappings.push_back(value); return *this; }

    /**
     * <p>If the <code>essential</code> parameter of a container is marked as
     * <code>true</code>, and that container fails or stops for any reason, all other
     * containers that are part of the task are stopped. If the <code>essential</code>
     * parameter of a container is marked as <code>false</code>, then its failure does
     * not affect the rest of the containers in a task. If this parameter is omitted, a
     * container is assumed to be essential.</p> <p>All tasks must have at least one
     * essential container. If you have an application that is composed of multiple
     * containers, you should group containers that are used for a common purpose into
     * components, and separate the different components into multiple task
     * definitions. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/application_architecture.html">Application
     * Architecture</a> in the <i>Amazon EC2 Container Service Developer Guide</i>.</p>
     */
    inline bool GetEssential() const{ return m_essential; }

    /**
     * <p>If the <code>essential</code> parameter of a container is marked as
     * <code>true</code>, and that container fails or stops for any reason, all other
     * containers that are part of the task are stopped. If the <code>essential</code>
     * parameter of a container is marked as <code>false</code>, then its failure does
     * not affect the rest of the containers in a task. If this parameter is omitted, a
     * container is assumed to be essential.</p> <p>All tasks must have at least one
     * essential container. If you have an application that is composed of multiple
     * containers, you should group containers that are used for a common purpose into
     * components, and separate the different components into multiple task
     * definitions. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/application_architecture.html">Application
     * Architecture</a> in the <i>Amazon EC2 Container Service Developer Guide</i>.</p>
     */
    inline void SetEssential(bool value) { m_essentialHasBeenSet = true; m_essential = value; }

    /**
     * <p>If the <code>essential</code> parameter of a container is marked as
     * <code>true</code>, and that container fails or stops for any reason, all other
     * containers that are part of the task are stopped. If the <code>essential</code>
     * parameter of a container is marked as <code>false</code>, then its failure does
     * not affect the rest of the containers in a task. If this parameter is omitted, a
     * container is assumed to be essential.</p> <p>All tasks must have at least one
     * essential container. If you have an application that is composed of multiple
     * containers, you should group containers that are used for a common purpose into
     * components, and separate the different components into multiple task
     * definitions. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/application_architecture.html">Application
     * Architecture</a> in the <i>Amazon EC2 Container Service Developer Guide</i>.</p>
     */
    inline ContainerDefinition& WithEssential(bool value) { SetEssential(value); return *this;}

    /**
     * <important> <p>Early versions of the Amazon ECS container agent do not properly
     * handle <code>entryPoint</code> parameters. If you have problems using
     * <code>entryPoint</code>, update your container agent or enter your commands and
     * arguments as <code>command</code> array items instead.</p> </important> <p>The
     * entry point that is passed to the container. This parameter maps to
     * <code>Entrypoint</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--entrypoint</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#entrypoint">https://docs.docker.com/engine/reference/builder/#entrypoint</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEntryPoint() const{ return m_entryPoint; }

    /**
     * <important> <p>Early versions of the Amazon ECS container agent do not properly
     * handle <code>entryPoint</code> parameters. If you have problems using
     * <code>entryPoint</code>, update your container agent or enter your commands and
     * arguments as <code>command</code> array items instead.</p> </important> <p>The
     * entry point that is passed to the container. This parameter maps to
     * <code>Entrypoint</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--entrypoint</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#entrypoint">https://docs.docker.com/engine/reference/builder/#entrypoint</a>.</p>
     */
    inline void SetEntryPoint(const Aws::Vector<Aws::String>& value) { m_entryPointHasBeenSet = true; m_entryPoint = value; }

    /**
     * <important> <p>Early versions of the Amazon ECS container agent do not properly
     * handle <code>entryPoint</code> parameters. If you have problems using
     * <code>entryPoint</code>, update your container agent or enter your commands and
     * arguments as <code>command</code> array items instead.</p> </important> <p>The
     * entry point that is passed to the container. This parameter maps to
     * <code>Entrypoint</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--entrypoint</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#entrypoint">https://docs.docker.com/engine/reference/builder/#entrypoint</a>.</p>
     */
    inline void SetEntryPoint(Aws::Vector<Aws::String>&& value) { m_entryPointHasBeenSet = true; m_entryPoint = value; }

    /**
     * <important> <p>Early versions of the Amazon ECS container agent do not properly
     * handle <code>entryPoint</code> parameters. If you have problems using
     * <code>entryPoint</code>, update your container agent or enter your commands and
     * arguments as <code>command</code> array items instead.</p> </important> <p>The
     * entry point that is passed to the container. This parameter maps to
     * <code>Entrypoint</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--entrypoint</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#entrypoint">https://docs.docker.com/engine/reference/builder/#entrypoint</a>.</p>
     */
    inline ContainerDefinition& WithEntryPoint(const Aws::Vector<Aws::String>& value) { SetEntryPoint(value); return *this;}

    /**
     * <important> <p>Early versions of the Amazon ECS container agent do not properly
     * handle <code>entryPoint</code> parameters. If you have problems using
     * <code>entryPoint</code>, update your container agent or enter your commands and
     * arguments as <code>command</code> array items instead.</p> </important> <p>The
     * entry point that is passed to the container. This parameter maps to
     * <code>Entrypoint</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--entrypoint</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#entrypoint">https://docs.docker.com/engine/reference/builder/#entrypoint</a>.</p>
     */
    inline ContainerDefinition& WithEntryPoint(Aws::Vector<Aws::String>&& value) { SetEntryPoint(value); return *this;}

    /**
     * <important> <p>Early versions of the Amazon ECS container agent do not properly
     * handle <code>entryPoint</code> parameters. If you have problems using
     * <code>entryPoint</code>, update your container agent or enter your commands and
     * arguments as <code>command</code> array items instead.</p> </important> <p>The
     * entry point that is passed to the container. This parameter maps to
     * <code>Entrypoint</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--entrypoint</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#entrypoint">https://docs.docker.com/engine/reference/builder/#entrypoint</a>.</p>
     */
    inline ContainerDefinition& AddEntryPoint(const Aws::String& value) { m_entryPointHasBeenSet = true; m_entryPoint.push_back(value); return *this; }

    /**
     * <important> <p>Early versions of the Amazon ECS container agent do not properly
     * handle <code>entryPoint</code> parameters. If you have problems using
     * <code>entryPoint</code>, update your container agent or enter your commands and
     * arguments as <code>command</code> array items instead.</p> </important> <p>The
     * entry point that is passed to the container. This parameter maps to
     * <code>Entrypoint</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--entrypoint</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#entrypoint">https://docs.docker.com/engine/reference/builder/#entrypoint</a>.</p>
     */
    inline ContainerDefinition& AddEntryPoint(Aws::String&& value) { m_entryPointHasBeenSet = true; m_entryPoint.push_back(value); return *this; }

    /**
     * <important> <p>Early versions of the Amazon ECS container agent do not properly
     * handle <code>entryPoint</code> parameters. If you have problems using
     * <code>entryPoint</code>, update your container agent or enter your commands and
     * arguments as <code>command</code> array items instead.</p> </important> <p>The
     * entry point that is passed to the container. This parameter maps to
     * <code>Entrypoint</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--entrypoint</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#entrypoint">https://docs.docker.com/engine/reference/builder/#entrypoint</a>.</p>
     */
    inline ContainerDefinition& AddEntryPoint(const char* value) { m_entryPointHasBeenSet = true; m_entryPoint.push_back(value); return *this; }

    /**
     * <p>The command that is passed to the container. This parameter maps to
     * <code>Cmd</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>COMMAND</code> parameter to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">https://docs.docker.com/engine/reference/builder/#cmd</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCommand() const{ return m_command; }

    /**
     * <p>The command that is passed to the container. This parameter maps to
     * <code>Cmd</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>COMMAND</code> parameter to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">https://docs.docker.com/engine/reference/builder/#cmd</a>.</p>
     */
    inline void SetCommand(const Aws::Vector<Aws::String>& value) { m_commandHasBeenSet = true; m_command = value; }

    /**
     * <p>The command that is passed to the container. This parameter maps to
     * <code>Cmd</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>COMMAND</code> parameter to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">https://docs.docker.com/engine/reference/builder/#cmd</a>.</p>
     */
    inline void SetCommand(Aws::Vector<Aws::String>&& value) { m_commandHasBeenSet = true; m_command = value; }

    /**
     * <p>The command that is passed to the container. This parameter maps to
     * <code>Cmd</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>COMMAND</code> parameter to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">https://docs.docker.com/engine/reference/builder/#cmd</a>.</p>
     */
    inline ContainerDefinition& WithCommand(const Aws::Vector<Aws::String>& value) { SetCommand(value); return *this;}

    /**
     * <p>The command that is passed to the container. This parameter maps to
     * <code>Cmd</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>COMMAND</code> parameter to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">https://docs.docker.com/engine/reference/builder/#cmd</a>.</p>
     */
    inline ContainerDefinition& WithCommand(Aws::Vector<Aws::String>&& value) { SetCommand(value); return *this;}

    /**
     * <p>The command that is passed to the container. This parameter maps to
     * <code>Cmd</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>COMMAND</code> parameter to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">https://docs.docker.com/engine/reference/builder/#cmd</a>.</p>
     */
    inline ContainerDefinition& AddCommand(const Aws::String& value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }

    /**
     * <p>The command that is passed to the container. This parameter maps to
     * <code>Cmd</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>COMMAND</code> parameter to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">https://docs.docker.com/engine/reference/builder/#cmd</a>.</p>
     */
    inline ContainerDefinition& AddCommand(Aws::String&& value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }

    /**
     * <p>The command that is passed to the container. This parameter maps to
     * <code>Cmd</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>COMMAND</code> parameter to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">https://docs.docker.com/engine/reference/builder/#cmd</a>.</p>
     */
    inline ContainerDefinition& AddCommand(const char* value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }

    /**
     * <p>The environment variables to pass to a container. This parameter maps to
     * <code>Env</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--env</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     * <important> <p>We do not recommend using plain text environment variables for
     * sensitive information, such as credential data.</p> </important>
     */
    inline const Aws::Vector<KeyValuePair>& GetEnvironment() const{ return m_environment; }

    /**
     * <p>The environment variables to pass to a container. This parameter maps to
     * <code>Env</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--env</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     * <important> <p>We do not recommend using plain text environment variables for
     * sensitive information, such as credential data.</p> </important>
     */
    inline void SetEnvironment(const Aws::Vector<KeyValuePair>& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>The environment variables to pass to a container. This parameter maps to
     * <code>Env</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--env</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     * <important> <p>We do not recommend using plain text environment variables for
     * sensitive information, such as credential data.</p> </important>
     */
    inline void SetEnvironment(Aws::Vector<KeyValuePair>&& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>The environment variables to pass to a container. This parameter maps to
     * <code>Env</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--env</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     * <important> <p>We do not recommend using plain text environment variables for
     * sensitive information, such as credential data.</p> </important>
     */
    inline ContainerDefinition& WithEnvironment(const Aws::Vector<KeyValuePair>& value) { SetEnvironment(value); return *this;}

    /**
     * <p>The environment variables to pass to a container. This parameter maps to
     * <code>Env</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--env</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     * <important> <p>We do not recommend using plain text environment variables for
     * sensitive information, such as credential data.</p> </important>
     */
    inline ContainerDefinition& WithEnvironment(Aws::Vector<KeyValuePair>&& value) { SetEnvironment(value); return *this;}

    /**
     * <p>The environment variables to pass to a container. This parameter maps to
     * <code>Env</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--env</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     * <important> <p>We do not recommend using plain text environment variables for
     * sensitive information, such as credential data.</p> </important>
     */
    inline ContainerDefinition& AddEnvironment(const KeyValuePair& value) { m_environmentHasBeenSet = true; m_environment.push_back(value); return *this; }

    /**
     * <p>The environment variables to pass to a container. This parameter maps to
     * <code>Env</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--env</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     * <important> <p>We do not recommend using plain text environment variables for
     * sensitive information, such as credential data.</p> </important>
     */
    inline ContainerDefinition& AddEnvironment(KeyValuePair&& value) { m_environmentHasBeenSet = true; m_environment.push_back(value); return *this; }

    /**
     * <p>The mount points for data volumes in your container. This parameter maps to
     * <code>Volumes</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--volume</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline const Aws::Vector<MountPoint>& GetMountPoints() const{ return m_mountPoints; }

    /**
     * <p>The mount points for data volumes in your container. This parameter maps to
     * <code>Volumes</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--volume</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline void SetMountPoints(const Aws::Vector<MountPoint>& value) { m_mountPointsHasBeenSet = true; m_mountPoints = value; }

    /**
     * <p>The mount points for data volumes in your container. This parameter maps to
     * <code>Volumes</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--volume</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline void SetMountPoints(Aws::Vector<MountPoint>&& value) { m_mountPointsHasBeenSet = true; m_mountPoints = value; }

    /**
     * <p>The mount points for data volumes in your container. This parameter maps to
     * <code>Volumes</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--volume</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerDefinition& WithMountPoints(const Aws::Vector<MountPoint>& value) { SetMountPoints(value); return *this;}

    /**
     * <p>The mount points for data volumes in your container. This parameter maps to
     * <code>Volumes</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--volume</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerDefinition& WithMountPoints(Aws::Vector<MountPoint>&& value) { SetMountPoints(value); return *this;}

    /**
     * <p>The mount points for data volumes in your container. This parameter maps to
     * <code>Volumes</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--volume</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerDefinition& AddMountPoints(const MountPoint& value) { m_mountPointsHasBeenSet = true; m_mountPoints.push_back(value); return *this; }

    /**
     * <p>The mount points for data volumes in your container. This parameter maps to
     * <code>Volumes</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--volume</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerDefinition& AddMountPoints(MountPoint&& value) { m_mountPointsHasBeenSet = true; m_mountPoints.push_back(value); return *this; }

    /**
     * <p>Data volumes to mount from another container. This parameter maps to
     * <code>VolumesFrom</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--volumes-from</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline const Aws::Vector<VolumeFrom>& GetVolumesFrom() const{ return m_volumesFrom; }

    /**
     * <p>Data volumes to mount from another container. This parameter maps to
     * <code>VolumesFrom</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--volumes-from</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline void SetVolumesFrom(const Aws::Vector<VolumeFrom>& value) { m_volumesFromHasBeenSet = true; m_volumesFrom = value; }

    /**
     * <p>Data volumes to mount from another container. This parameter maps to
     * <code>VolumesFrom</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--volumes-from</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline void SetVolumesFrom(Aws::Vector<VolumeFrom>&& value) { m_volumesFromHasBeenSet = true; m_volumesFrom = value; }

    /**
     * <p>Data volumes to mount from another container. This parameter maps to
     * <code>VolumesFrom</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--volumes-from</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerDefinition& WithVolumesFrom(const Aws::Vector<VolumeFrom>& value) { SetVolumesFrom(value); return *this;}

    /**
     * <p>Data volumes to mount from another container. This parameter maps to
     * <code>VolumesFrom</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--volumes-from</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerDefinition& WithVolumesFrom(Aws::Vector<VolumeFrom>&& value) { SetVolumesFrom(value); return *this;}

    /**
     * <p>Data volumes to mount from another container. This parameter maps to
     * <code>VolumesFrom</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--volumes-from</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerDefinition& AddVolumesFrom(const VolumeFrom& value) { m_volumesFromHasBeenSet = true; m_volumesFrom.push_back(value); return *this; }

    /**
     * <p>Data volumes to mount from another container. This parameter maps to
     * <code>VolumesFrom</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--volumes-from</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerDefinition& AddVolumesFrom(VolumeFrom&& value) { m_volumesFromHasBeenSet = true; m_volumesFrom.push_back(value); return *this; }

    /**
     * <p>The hostname to use for your container. This parameter maps to
     * <code>Hostname</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--hostname</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline const Aws::String& GetHostname() const{ return m_hostname; }

    /**
     * <p>The hostname to use for your container. This parameter maps to
     * <code>Hostname</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--hostname</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline void SetHostname(const Aws::String& value) { m_hostnameHasBeenSet = true; m_hostname = value; }

    /**
     * <p>The hostname to use for your container. This parameter maps to
     * <code>Hostname</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--hostname</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline void SetHostname(Aws::String&& value) { m_hostnameHasBeenSet = true; m_hostname = value; }

    /**
     * <p>The hostname to use for your container. This parameter maps to
     * <code>Hostname</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--hostname</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline void SetHostname(const char* value) { m_hostnameHasBeenSet = true; m_hostname.assign(value); }

    /**
     * <p>The hostname to use for your container. This parameter maps to
     * <code>Hostname</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--hostname</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerDefinition& WithHostname(const Aws::String& value) { SetHostname(value); return *this;}

    /**
     * <p>The hostname to use for your container. This parameter maps to
     * <code>Hostname</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--hostname</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerDefinition& WithHostname(Aws::String&& value) { SetHostname(value); return *this;}

    /**
     * <p>The hostname to use for your container. This parameter maps to
     * <code>Hostname</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--hostname</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerDefinition& WithHostname(const char* value) { SetHostname(value); return *this;}

    /**
     * <p>The user name to use inside the container. This parameter maps to
     * <code>User</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--user</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline const Aws::String& GetUser() const{ return m_user; }

    /**
     * <p>The user name to use inside the container. This parameter maps to
     * <code>User</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--user</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline void SetUser(const Aws::String& value) { m_userHasBeenSet = true; m_user = value; }

    /**
     * <p>The user name to use inside the container. This parameter maps to
     * <code>User</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--user</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline void SetUser(Aws::String&& value) { m_userHasBeenSet = true; m_user = value; }

    /**
     * <p>The user name to use inside the container. This parameter maps to
     * <code>User</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--user</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline void SetUser(const char* value) { m_userHasBeenSet = true; m_user.assign(value); }

    /**
     * <p>The user name to use inside the container. This parameter maps to
     * <code>User</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--user</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerDefinition& WithUser(const Aws::String& value) { SetUser(value); return *this;}

    /**
     * <p>The user name to use inside the container. This parameter maps to
     * <code>User</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--user</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerDefinition& WithUser(Aws::String&& value) { SetUser(value); return *this;}

    /**
     * <p>The user name to use inside the container. This parameter maps to
     * <code>User</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--user</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerDefinition& WithUser(const char* value) { SetUser(value); return *this;}

    /**
     * <p>The working directory in which to run commands inside the container. This
     * parameter maps to <code>WorkingDir</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--workdir</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline const Aws::String& GetWorkingDirectory() const{ return m_workingDirectory; }

    /**
     * <p>The working directory in which to run commands inside the container. This
     * parameter maps to <code>WorkingDir</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--workdir</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline void SetWorkingDirectory(const Aws::String& value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory = value; }

    /**
     * <p>The working directory in which to run commands inside the container. This
     * parameter maps to <code>WorkingDir</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--workdir</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline void SetWorkingDirectory(Aws::String&& value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory = value; }

    /**
     * <p>The working directory in which to run commands inside the container. This
     * parameter maps to <code>WorkingDir</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--workdir</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline void SetWorkingDirectory(const char* value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory.assign(value); }

    /**
     * <p>The working directory in which to run commands inside the container. This
     * parameter maps to <code>WorkingDir</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--workdir</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerDefinition& WithWorkingDirectory(const Aws::String& value) { SetWorkingDirectory(value); return *this;}

    /**
     * <p>The working directory in which to run commands inside the container. This
     * parameter maps to <code>WorkingDir</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--workdir</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerDefinition& WithWorkingDirectory(Aws::String&& value) { SetWorkingDirectory(value); return *this;}

    /**
     * <p>The working directory in which to run commands inside the container. This
     * parameter maps to <code>WorkingDir</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--workdir</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerDefinition& WithWorkingDirectory(const char* value) { SetWorkingDirectory(value); return *this;}

    /**
     * <p>When this parameter is true, networking is disabled within the container.
     * This parameter maps to <code>NetworkDisabled</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a>.</p>
     */
    inline bool GetDisableNetworking() const{ return m_disableNetworking; }

    /**
     * <p>When this parameter is true, networking is disabled within the container.
     * This parameter maps to <code>NetworkDisabled</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a>.</p>
     */
    inline void SetDisableNetworking(bool value) { m_disableNetworkingHasBeenSet = true; m_disableNetworking = value; }

    /**
     * <p>When this parameter is true, networking is disabled within the container.
     * This parameter maps to <code>NetworkDisabled</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a>.</p>
     */
    inline ContainerDefinition& WithDisableNetworking(bool value) { SetDisableNetworking(value); return *this;}

    /**
     * <p>When this parameter is true, the container is given elevated privileges on
     * the host container instance (similar to the <code>root</code> user). This
     * parameter maps to <code>Privileged</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--privileged</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline bool GetPrivileged() const{ return m_privileged; }

    /**
     * <p>When this parameter is true, the container is given elevated privileges on
     * the host container instance (similar to the <code>root</code> user). This
     * parameter maps to <code>Privileged</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--privileged</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline void SetPrivileged(bool value) { m_privilegedHasBeenSet = true; m_privileged = value; }

    /**
     * <p>When this parameter is true, the container is given elevated privileges on
     * the host container instance (similar to the <code>root</code> user). This
     * parameter maps to <code>Privileged</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--privileged</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerDefinition& WithPrivileged(bool value) { SetPrivileged(value); return *this;}

    /**
     * <p>When this parameter is true, the container is given read-only access to its
     * root file system. This parameter maps to <code>ReadonlyRootfs</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--read-only</code> option to <code>docker
     * run</code>.</p>
     */
    inline bool GetReadonlyRootFilesystem() const{ return m_readonlyRootFilesystem; }

    /**
     * <p>When this parameter is true, the container is given read-only access to its
     * root file system. This parameter maps to <code>ReadonlyRootfs</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--read-only</code> option to <code>docker
     * run</code>.</p>
     */
    inline void SetReadonlyRootFilesystem(bool value) { m_readonlyRootFilesystemHasBeenSet = true; m_readonlyRootFilesystem = value; }

    /**
     * <p>When this parameter is true, the container is given read-only access to its
     * root file system. This parameter maps to <code>ReadonlyRootfs</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--read-only</code> option to <code>docker
     * run</code>.</p>
     */
    inline ContainerDefinition& WithReadonlyRootFilesystem(bool value) { SetReadonlyRootFilesystem(value); return *this;}

    /**
     * <p>A list of DNS servers that are presented to the container. This parameter
     * maps to <code>Dns</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--dns</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsServers() const{ return m_dnsServers; }

    /**
     * <p>A list of DNS servers that are presented to the container. This parameter
     * maps to <code>Dns</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--dns</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline void SetDnsServers(const Aws::Vector<Aws::String>& value) { m_dnsServersHasBeenSet = true; m_dnsServers = value; }

    /**
     * <p>A list of DNS servers that are presented to the container. This parameter
     * maps to <code>Dns</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--dns</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline void SetDnsServers(Aws::Vector<Aws::String>&& value) { m_dnsServersHasBeenSet = true; m_dnsServers = value; }

    /**
     * <p>A list of DNS servers that are presented to the container. This parameter
     * maps to <code>Dns</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--dns</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerDefinition& WithDnsServers(const Aws::Vector<Aws::String>& value) { SetDnsServers(value); return *this;}

    /**
     * <p>A list of DNS servers that are presented to the container. This parameter
     * maps to <code>Dns</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--dns</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerDefinition& WithDnsServers(Aws::Vector<Aws::String>&& value) { SetDnsServers(value); return *this;}

    /**
     * <p>A list of DNS servers that are presented to the container. This parameter
     * maps to <code>Dns</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--dns</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerDefinition& AddDnsServers(const Aws::String& value) { m_dnsServersHasBeenSet = true; m_dnsServers.push_back(value); return *this; }

    /**
     * <p>A list of DNS servers that are presented to the container. This parameter
     * maps to <code>Dns</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--dns</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerDefinition& AddDnsServers(Aws::String&& value) { m_dnsServersHasBeenSet = true; m_dnsServers.push_back(value); return *this; }

    /**
     * <p>A list of DNS servers that are presented to the container. This parameter
     * maps to <code>Dns</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--dns</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerDefinition& AddDnsServers(const char* value) { m_dnsServersHasBeenSet = true; m_dnsServers.push_back(value); return *this; }

    /**
     * <p>A list of DNS search domains that are presented to the container. This
     * parameter maps to <code>DnsSearch</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--dns-search</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsSearchDomains() const{ return m_dnsSearchDomains; }

    /**
     * <p>A list of DNS search domains that are presented to the container. This
     * parameter maps to <code>DnsSearch</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--dns-search</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline void SetDnsSearchDomains(const Aws::Vector<Aws::String>& value) { m_dnsSearchDomainsHasBeenSet = true; m_dnsSearchDomains = value; }

    /**
     * <p>A list of DNS search domains that are presented to the container. This
     * parameter maps to <code>DnsSearch</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--dns-search</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline void SetDnsSearchDomains(Aws::Vector<Aws::String>&& value) { m_dnsSearchDomainsHasBeenSet = true; m_dnsSearchDomains = value; }

    /**
     * <p>A list of DNS search domains that are presented to the container. This
     * parameter maps to <code>DnsSearch</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--dns-search</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerDefinition& WithDnsSearchDomains(const Aws::Vector<Aws::String>& value) { SetDnsSearchDomains(value); return *this;}

    /**
     * <p>A list of DNS search domains that are presented to the container. This
     * parameter maps to <code>DnsSearch</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--dns-search</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerDefinition& WithDnsSearchDomains(Aws::Vector<Aws::String>&& value) { SetDnsSearchDomains(value); return *this;}

    /**
     * <p>A list of DNS search domains that are presented to the container. This
     * parameter maps to <code>DnsSearch</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--dns-search</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerDefinition& AddDnsSearchDomains(const Aws::String& value) { m_dnsSearchDomainsHasBeenSet = true; m_dnsSearchDomains.push_back(value); return *this; }

    /**
     * <p>A list of DNS search domains that are presented to the container. This
     * parameter maps to <code>DnsSearch</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--dns-search</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerDefinition& AddDnsSearchDomains(Aws::String&& value) { m_dnsSearchDomainsHasBeenSet = true; m_dnsSearchDomains.push_back(value); return *this; }

    /**
     * <p>A list of DNS search domains that are presented to the container. This
     * parameter maps to <code>DnsSearch</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--dns-search</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerDefinition& AddDnsSearchDomains(const char* value) { m_dnsSearchDomainsHasBeenSet = true; m_dnsSearchDomains.push_back(value); return *this; }

    /**
     * <p>A list of hostnames and IP address mappings to append to the
     * <code>/etc/hosts</code> file on the container. This parameter maps to
     * <code>ExtraHosts</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--add-host</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline const Aws::Vector<HostEntry>& GetExtraHosts() const{ return m_extraHosts; }

    /**
     * <p>A list of hostnames and IP address mappings to append to the
     * <code>/etc/hosts</code> file on the container. This parameter maps to
     * <code>ExtraHosts</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--add-host</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline void SetExtraHosts(const Aws::Vector<HostEntry>& value) { m_extraHostsHasBeenSet = true; m_extraHosts = value; }

    /**
     * <p>A list of hostnames and IP address mappings to append to the
     * <code>/etc/hosts</code> file on the container. This parameter maps to
     * <code>ExtraHosts</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--add-host</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline void SetExtraHosts(Aws::Vector<HostEntry>&& value) { m_extraHostsHasBeenSet = true; m_extraHosts = value; }

    /**
     * <p>A list of hostnames and IP address mappings to append to the
     * <code>/etc/hosts</code> file on the container. This parameter maps to
     * <code>ExtraHosts</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--add-host</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerDefinition& WithExtraHosts(const Aws::Vector<HostEntry>& value) { SetExtraHosts(value); return *this;}

    /**
     * <p>A list of hostnames and IP address mappings to append to the
     * <code>/etc/hosts</code> file on the container. This parameter maps to
     * <code>ExtraHosts</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--add-host</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerDefinition& WithExtraHosts(Aws::Vector<HostEntry>&& value) { SetExtraHosts(value); return *this;}

    /**
     * <p>A list of hostnames and IP address mappings to append to the
     * <code>/etc/hosts</code> file on the container. This parameter maps to
     * <code>ExtraHosts</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--add-host</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerDefinition& AddExtraHosts(const HostEntry& value) { m_extraHostsHasBeenSet = true; m_extraHosts.push_back(value); return *this; }

    /**
     * <p>A list of hostnames and IP address mappings to append to the
     * <code>/etc/hosts</code> file on the container. This parameter maps to
     * <code>ExtraHosts</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--add-host</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerDefinition& AddExtraHosts(HostEntry&& value) { m_extraHostsHasBeenSet = true; m_extraHosts.push_back(value); return *this; }

    /**
     * <p>A list of strings to provide custom labels for SELinux and AppArmor
     * multi-level security systems. This parameter maps to <code>SecurityOpt</code> in
     * the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--security-opt</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <note>
     * <p>The Amazon ECS container agent running on a container instance must register
     * with the <code>ECS_SELINUX_CAPABLE=true</code> or
     * <code>ECS_APPARMOR_CAPABLE=true</code> environment variables before containers
     * placed on that instance can use these security options. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon
     * ECS Container Agent Configuration</a> in the <i>Amazon EC2 Container Service
     * Developer Guide</i>.</p> </note>
     */
    inline const Aws::Vector<Aws::String>& GetDockerSecurityOptions() const{ return m_dockerSecurityOptions; }

    /**
     * <p>A list of strings to provide custom labels for SELinux and AppArmor
     * multi-level security systems. This parameter maps to <code>SecurityOpt</code> in
     * the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--security-opt</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <note>
     * <p>The Amazon ECS container agent running on a container instance must register
     * with the <code>ECS_SELINUX_CAPABLE=true</code> or
     * <code>ECS_APPARMOR_CAPABLE=true</code> environment variables before containers
     * placed on that instance can use these security options. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon
     * ECS Container Agent Configuration</a> in the <i>Amazon EC2 Container Service
     * Developer Guide</i>.</p> </note>
     */
    inline void SetDockerSecurityOptions(const Aws::Vector<Aws::String>& value) { m_dockerSecurityOptionsHasBeenSet = true; m_dockerSecurityOptions = value; }

    /**
     * <p>A list of strings to provide custom labels for SELinux and AppArmor
     * multi-level security systems. This parameter maps to <code>SecurityOpt</code> in
     * the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--security-opt</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <note>
     * <p>The Amazon ECS container agent running on a container instance must register
     * with the <code>ECS_SELINUX_CAPABLE=true</code> or
     * <code>ECS_APPARMOR_CAPABLE=true</code> environment variables before containers
     * placed on that instance can use these security options. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon
     * ECS Container Agent Configuration</a> in the <i>Amazon EC2 Container Service
     * Developer Guide</i>.</p> </note>
     */
    inline void SetDockerSecurityOptions(Aws::Vector<Aws::String>&& value) { m_dockerSecurityOptionsHasBeenSet = true; m_dockerSecurityOptions = value; }

    /**
     * <p>A list of strings to provide custom labels for SELinux and AppArmor
     * multi-level security systems. This parameter maps to <code>SecurityOpt</code> in
     * the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--security-opt</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <note>
     * <p>The Amazon ECS container agent running on a container instance must register
     * with the <code>ECS_SELINUX_CAPABLE=true</code> or
     * <code>ECS_APPARMOR_CAPABLE=true</code> environment variables before containers
     * placed on that instance can use these security options. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon
     * ECS Container Agent Configuration</a> in the <i>Amazon EC2 Container Service
     * Developer Guide</i>.</p> </note>
     */
    inline ContainerDefinition& WithDockerSecurityOptions(const Aws::Vector<Aws::String>& value) { SetDockerSecurityOptions(value); return *this;}

    /**
     * <p>A list of strings to provide custom labels for SELinux and AppArmor
     * multi-level security systems. This parameter maps to <code>SecurityOpt</code> in
     * the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--security-opt</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <note>
     * <p>The Amazon ECS container agent running on a container instance must register
     * with the <code>ECS_SELINUX_CAPABLE=true</code> or
     * <code>ECS_APPARMOR_CAPABLE=true</code> environment variables before containers
     * placed on that instance can use these security options. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon
     * ECS Container Agent Configuration</a> in the <i>Amazon EC2 Container Service
     * Developer Guide</i>.</p> </note>
     */
    inline ContainerDefinition& WithDockerSecurityOptions(Aws::Vector<Aws::String>&& value) { SetDockerSecurityOptions(value); return *this;}

    /**
     * <p>A list of strings to provide custom labels for SELinux and AppArmor
     * multi-level security systems. This parameter maps to <code>SecurityOpt</code> in
     * the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--security-opt</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <note>
     * <p>The Amazon ECS container agent running on a container instance must register
     * with the <code>ECS_SELINUX_CAPABLE=true</code> or
     * <code>ECS_APPARMOR_CAPABLE=true</code> environment variables before containers
     * placed on that instance can use these security options. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon
     * ECS Container Agent Configuration</a> in the <i>Amazon EC2 Container Service
     * Developer Guide</i>.</p> </note>
     */
    inline ContainerDefinition& AddDockerSecurityOptions(const Aws::String& value) { m_dockerSecurityOptionsHasBeenSet = true; m_dockerSecurityOptions.push_back(value); return *this; }

    /**
     * <p>A list of strings to provide custom labels for SELinux and AppArmor
     * multi-level security systems. This parameter maps to <code>SecurityOpt</code> in
     * the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--security-opt</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <note>
     * <p>The Amazon ECS container agent running on a container instance must register
     * with the <code>ECS_SELINUX_CAPABLE=true</code> or
     * <code>ECS_APPARMOR_CAPABLE=true</code> environment variables before containers
     * placed on that instance can use these security options. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon
     * ECS Container Agent Configuration</a> in the <i>Amazon EC2 Container Service
     * Developer Guide</i>.</p> </note>
     */
    inline ContainerDefinition& AddDockerSecurityOptions(Aws::String&& value) { m_dockerSecurityOptionsHasBeenSet = true; m_dockerSecurityOptions.push_back(value); return *this; }

    /**
     * <p>A list of strings to provide custom labels for SELinux and AppArmor
     * multi-level security systems. This parameter maps to <code>SecurityOpt</code> in
     * the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--security-opt</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <note>
     * <p>The Amazon ECS container agent running on a container instance must register
     * with the <code>ECS_SELINUX_CAPABLE=true</code> or
     * <code>ECS_APPARMOR_CAPABLE=true</code> environment variables before containers
     * placed on that instance can use these security options. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon
     * ECS Container Agent Configuration</a> in the <i>Amazon EC2 Container Service
     * Developer Guide</i>.</p> </note>
     */
    inline ContainerDefinition& AddDockerSecurityOptions(const char* value) { m_dockerSecurityOptionsHasBeenSet = true; m_dockerSecurityOptions.push_back(value); return *this; }

    /**
     * <p>A key/value map of labels to add to the container. This parameter maps to
     * <code>Labels</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--label</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. This
     * parameter requires version 1.18 of the Docker Remote API or greater on your
     * container instance. To check the Docker Remote API version on your container
     * instance, log into your container instance and run the following command:
     * <code>sudo docker version | grep "Server API version"</code> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDockerLabels() const{ return m_dockerLabels; }

    /**
     * <p>A key/value map of labels to add to the container. This parameter maps to
     * <code>Labels</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--label</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. This
     * parameter requires version 1.18 of the Docker Remote API or greater on your
     * container instance. To check the Docker Remote API version on your container
     * instance, log into your container instance and run the following command:
     * <code>sudo docker version | grep "Server API version"</code> </p>
     */
    inline void SetDockerLabels(const Aws::Map<Aws::String, Aws::String>& value) { m_dockerLabelsHasBeenSet = true; m_dockerLabels = value; }

    /**
     * <p>A key/value map of labels to add to the container. This parameter maps to
     * <code>Labels</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--label</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. This
     * parameter requires version 1.18 of the Docker Remote API or greater on your
     * container instance. To check the Docker Remote API version on your container
     * instance, log into your container instance and run the following command:
     * <code>sudo docker version | grep "Server API version"</code> </p>
     */
    inline void SetDockerLabels(Aws::Map<Aws::String, Aws::String>&& value) { m_dockerLabelsHasBeenSet = true; m_dockerLabels = value; }

    /**
     * <p>A key/value map of labels to add to the container. This parameter maps to
     * <code>Labels</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--label</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. This
     * parameter requires version 1.18 of the Docker Remote API or greater on your
     * container instance. To check the Docker Remote API version on your container
     * instance, log into your container instance and run the following command:
     * <code>sudo docker version | grep "Server API version"</code> </p>
     */
    inline ContainerDefinition& WithDockerLabels(const Aws::Map<Aws::String, Aws::String>& value) { SetDockerLabels(value); return *this;}

    /**
     * <p>A key/value map of labels to add to the container. This parameter maps to
     * <code>Labels</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--label</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. This
     * parameter requires version 1.18 of the Docker Remote API or greater on your
     * container instance. To check the Docker Remote API version on your container
     * instance, log into your container instance and run the following command:
     * <code>sudo docker version | grep "Server API version"</code> </p>
     */
    inline ContainerDefinition& WithDockerLabels(Aws::Map<Aws::String, Aws::String>&& value) { SetDockerLabels(value); return *this;}

    /**
     * <p>A key/value map of labels to add to the container. This parameter maps to
     * <code>Labels</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--label</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. This
     * parameter requires version 1.18 of the Docker Remote API or greater on your
     * container instance. To check the Docker Remote API version on your container
     * instance, log into your container instance and run the following command:
     * <code>sudo docker version | grep "Server API version"</code> </p>
     */
    inline ContainerDefinition& AddDockerLabels(const Aws::String& key, const Aws::String& value) { m_dockerLabelsHasBeenSet = true; m_dockerLabels[key] = value; return *this; }

    /**
     * <p>A key/value map of labels to add to the container. This parameter maps to
     * <code>Labels</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--label</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. This
     * parameter requires version 1.18 of the Docker Remote API or greater on your
     * container instance. To check the Docker Remote API version on your container
     * instance, log into your container instance and run the following command:
     * <code>sudo docker version | grep "Server API version"</code> </p>
     */
    inline ContainerDefinition& AddDockerLabels(Aws::String&& key, const Aws::String& value) { m_dockerLabelsHasBeenSet = true; m_dockerLabels[key] = value; return *this; }

    /**
     * <p>A key/value map of labels to add to the container. This parameter maps to
     * <code>Labels</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--label</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. This
     * parameter requires version 1.18 of the Docker Remote API or greater on your
     * container instance. To check the Docker Remote API version on your container
     * instance, log into your container instance and run the following command:
     * <code>sudo docker version | grep "Server API version"</code> </p>
     */
    inline ContainerDefinition& AddDockerLabels(const Aws::String& key, Aws::String&& value) { m_dockerLabelsHasBeenSet = true; m_dockerLabels[key] = value; return *this; }

    /**
     * <p>A key/value map of labels to add to the container. This parameter maps to
     * <code>Labels</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--label</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. This
     * parameter requires version 1.18 of the Docker Remote API or greater on your
     * container instance. To check the Docker Remote API version on your container
     * instance, log into your container instance and run the following command:
     * <code>sudo docker version | grep "Server API version"</code> </p>
     */
    inline ContainerDefinition& AddDockerLabels(Aws::String&& key, Aws::String&& value) { m_dockerLabelsHasBeenSet = true; m_dockerLabels[key] = value; return *this; }

    /**
     * <p>A key/value map of labels to add to the container. This parameter maps to
     * <code>Labels</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--label</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. This
     * parameter requires version 1.18 of the Docker Remote API or greater on your
     * container instance. To check the Docker Remote API version on your container
     * instance, log into your container instance and run the following command:
     * <code>sudo docker version | grep "Server API version"</code> </p>
     */
    inline ContainerDefinition& AddDockerLabels(const char* key, Aws::String&& value) { m_dockerLabelsHasBeenSet = true; m_dockerLabels[key] = value; return *this; }

    /**
     * <p>A key/value map of labels to add to the container. This parameter maps to
     * <code>Labels</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--label</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. This
     * parameter requires version 1.18 of the Docker Remote API or greater on your
     * container instance. To check the Docker Remote API version on your container
     * instance, log into your container instance and run the following command:
     * <code>sudo docker version | grep "Server API version"</code> </p>
     */
    inline ContainerDefinition& AddDockerLabels(Aws::String&& key, const char* value) { m_dockerLabelsHasBeenSet = true; m_dockerLabels[key] = value; return *this; }

    /**
     * <p>A key/value map of labels to add to the container. This parameter maps to
     * <code>Labels</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--label</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. This
     * parameter requires version 1.18 of the Docker Remote API or greater on your
     * container instance. To check the Docker Remote API version on your container
     * instance, log into your container instance and run the following command:
     * <code>sudo docker version | grep "Server API version"</code> </p>
     */
    inline ContainerDefinition& AddDockerLabels(const char* key, const char* value) { m_dockerLabelsHasBeenSet = true; m_dockerLabels[key] = value; return *this; }

    /**
     * <p>A list of <code>ulimits</code> to set in the container. This parameter maps
     * to <code>Ulimits</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--ulimit</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. Valid
     * naming values are displayed in the <a>Ulimit</a> data type. This parameter
     * requires version 1.18 of the Docker Remote API or greater on your container
     * instance. To check the Docker Remote API version on your container instance, log
     * into your container instance and run the following command: <code>sudo docker
     * version | grep "Server API version"</code> </p>
     */
    inline const Aws::Vector<Ulimit>& GetUlimits() const{ return m_ulimits; }

    /**
     * <p>A list of <code>ulimits</code> to set in the container. This parameter maps
     * to <code>Ulimits</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--ulimit</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. Valid
     * naming values are displayed in the <a>Ulimit</a> data type. This parameter
     * requires version 1.18 of the Docker Remote API or greater on your container
     * instance. To check the Docker Remote API version on your container instance, log
     * into your container instance and run the following command: <code>sudo docker
     * version | grep "Server API version"</code> </p>
     */
    inline void SetUlimits(const Aws::Vector<Ulimit>& value) { m_ulimitsHasBeenSet = true; m_ulimits = value; }

    /**
     * <p>A list of <code>ulimits</code> to set in the container. This parameter maps
     * to <code>Ulimits</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--ulimit</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. Valid
     * naming values are displayed in the <a>Ulimit</a> data type. This parameter
     * requires version 1.18 of the Docker Remote API or greater on your container
     * instance. To check the Docker Remote API version on your container instance, log
     * into your container instance and run the following command: <code>sudo docker
     * version | grep "Server API version"</code> </p>
     */
    inline void SetUlimits(Aws::Vector<Ulimit>&& value) { m_ulimitsHasBeenSet = true; m_ulimits = value; }

    /**
     * <p>A list of <code>ulimits</code> to set in the container. This parameter maps
     * to <code>Ulimits</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--ulimit</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. Valid
     * naming values are displayed in the <a>Ulimit</a> data type. This parameter
     * requires version 1.18 of the Docker Remote API or greater on your container
     * instance. To check the Docker Remote API version on your container instance, log
     * into your container instance and run the following command: <code>sudo docker
     * version | grep "Server API version"</code> </p>
     */
    inline ContainerDefinition& WithUlimits(const Aws::Vector<Ulimit>& value) { SetUlimits(value); return *this;}

    /**
     * <p>A list of <code>ulimits</code> to set in the container. This parameter maps
     * to <code>Ulimits</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--ulimit</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. Valid
     * naming values are displayed in the <a>Ulimit</a> data type. This parameter
     * requires version 1.18 of the Docker Remote API or greater on your container
     * instance. To check the Docker Remote API version on your container instance, log
     * into your container instance and run the following command: <code>sudo docker
     * version | grep "Server API version"</code> </p>
     */
    inline ContainerDefinition& WithUlimits(Aws::Vector<Ulimit>&& value) { SetUlimits(value); return *this;}

    /**
     * <p>A list of <code>ulimits</code> to set in the container. This parameter maps
     * to <code>Ulimits</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--ulimit</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. Valid
     * naming values are displayed in the <a>Ulimit</a> data type. This parameter
     * requires version 1.18 of the Docker Remote API or greater on your container
     * instance. To check the Docker Remote API version on your container instance, log
     * into your container instance and run the following command: <code>sudo docker
     * version | grep "Server API version"</code> </p>
     */
    inline ContainerDefinition& AddUlimits(const Ulimit& value) { m_ulimitsHasBeenSet = true; m_ulimits.push_back(value); return *this; }

    /**
     * <p>A list of <code>ulimits</code> to set in the container. This parameter maps
     * to <code>Ulimits</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--ulimit</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. Valid
     * naming values are displayed in the <a>Ulimit</a> data type. This parameter
     * requires version 1.18 of the Docker Remote API or greater on your container
     * instance. To check the Docker Remote API version on your container instance, log
     * into your container instance and run the following command: <code>sudo docker
     * version | grep "Server API version"</code> </p>
     */
    inline ContainerDefinition& AddUlimits(Ulimit&& value) { m_ulimitsHasBeenSet = true; m_ulimits.push_back(value); return *this; }

    /**
     * <p>The log configuration specification for the container. This parameter maps to
     * <code>LogConfig</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--log-driver</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. By default,
     * containers use the same logging driver that the Docker daemon uses; however the
     * container may use a different logging driver than the Docker daemon by
     * specifying a log driver with this parameter in the container definition. To use
     * a different logging driver for a container, the log system must be configured
     * properly on the container instance (or on a different log server for remote
     * logging options). For more information on the options for different supported
     * log drivers, see <a
     * href="https://docs.docker.com/engine/admin/logging/overview/">Configure logging
     * drivers</a> in the Docker documentation.</p> <note> <p>Amazon ECS currently
     * supports a subset of the logging drivers available to the Docker daemon (shown
     * in the <a>LogConfiguration</a> data type). Currently unsupported log drivers may
     * be available in future releases of the Amazon ECS container agent.</p> </note>
     * <p>This parameter requires version 1.18 of the Docker Remote API or greater on
     * your container instance. To check the Docker Remote API version on your
     * container instance, log into your container instance and run the following
     * command: <code>sudo docker version | grep "Server API version"</code> </p>
     * <note> <p>The Amazon ECS container agent running on a container instance must
     * register the logging drivers available on that instance with the
     * <code>ECS_AVAILABLE_LOGGING_DRIVERS</code> environment variable before
     * containers placed on that instance can use these log configuration options. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon
     * ECS Container Agent Configuration</a> in the <i>Amazon EC2 Container Service
     * Developer Guide</i>.</p> </note>
     */
    inline const LogConfiguration& GetLogConfiguration() const{ return m_logConfiguration; }

    /**
     * <p>The log configuration specification for the container. This parameter maps to
     * <code>LogConfig</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--log-driver</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. By default,
     * containers use the same logging driver that the Docker daemon uses; however the
     * container may use a different logging driver than the Docker daemon by
     * specifying a log driver with this parameter in the container definition. To use
     * a different logging driver for a container, the log system must be configured
     * properly on the container instance (or on a different log server for remote
     * logging options). For more information on the options for different supported
     * log drivers, see <a
     * href="https://docs.docker.com/engine/admin/logging/overview/">Configure logging
     * drivers</a> in the Docker documentation.</p> <note> <p>Amazon ECS currently
     * supports a subset of the logging drivers available to the Docker daemon (shown
     * in the <a>LogConfiguration</a> data type). Currently unsupported log drivers may
     * be available in future releases of the Amazon ECS container agent.</p> </note>
     * <p>This parameter requires version 1.18 of the Docker Remote API or greater on
     * your container instance. To check the Docker Remote API version on your
     * container instance, log into your container instance and run the following
     * command: <code>sudo docker version | grep "Server API version"</code> </p>
     * <note> <p>The Amazon ECS container agent running on a container instance must
     * register the logging drivers available on that instance with the
     * <code>ECS_AVAILABLE_LOGGING_DRIVERS</code> environment variable before
     * containers placed on that instance can use these log configuration options. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon
     * ECS Container Agent Configuration</a> in the <i>Amazon EC2 Container Service
     * Developer Guide</i>.</p> </note>
     */
    inline void SetLogConfiguration(const LogConfiguration& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = value; }

    /**
     * <p>The log configuration specification for the container. This parameter maps to
     * <code>LogConfig</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--log-driver</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. By default,
     * containers use the same logging driver that the Docker daemon uses; however the
     * container may use a different logging driver than the Docker daemon by
     * specifying a log driver with this parameter in the container definition. To use
     * a different logging driver for a container, the log system must be configured
     * properly on the container instance (or on a different log server for remote
     * logging options). For more information on the options for different supported
     * log drivers, see <a
     * href="https://docs.docker.com/engine/admin/logging/overview/">Configure logging
     * drivers</a> in the Docker documentation.</p> <note> <p>Amazon ECS currently
     * supports a subset of the logging drivers available to the Docker daemon (shown
     * in the <a>LogConfiguration</a> data type). Currently unsupported log drivers may
     * be available in future releases of the Amazon ECS container agent.</p> </note>
     * <p>This parameter requires version 1.18 of the Docker Remote API or greater on
     * your container instance. To check the Docker Remote API version on your
     * container instance, log into your container instance and run the following
     * command: <code>sudo docker version | grep "Server API version"</code> </p>
     * <note> <p>The Amazon ECS container agent running on a container instance must
     * register the logging drivers available on that instance with the
     * <code>ECS_AVAILABLE_LOGGING_DRIVERS</code> environment variable before
     * containers placed on that instance can use these log configuration options. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon
     * ECS Container Agent Configuration</a> in the <i>Amazon EC2 Container Service
     * Developer Guide</i>.</p> </note>
     */
    inline void SetLogConfiguration(LogConfiguration&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = value; }

    /**
     * <p>The log configuration specification for the container. This parameter maps to
     * <code>LogConfig</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--log-driver</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. By default,
     * containers use the same logging driver that the Docker daemon uses; however the
     * container may use a different logging driver than the Docker daemon by
     * specifying a log driver with this parameter in the container definition. To use
     * a different logging driver for a container, the log system must be configured
     * properly on the container instance (or on a different log server for remote
     * logging options). For more information on the options for different supported
     * log drivers, see <a
     * href="https://docs.docker.com/engine/admin/logging/overview/">Configure logging
     * drivers</a> in the Docker documentation.</p> <note> <p>Amazon ECS currently
     * supports a subset of the logging drivers available to the Docker daemon (shown
     * in the <a>LogConfiguration</a> data type). Currently unsupported log drivers may
     * be available in future releases of the Amazon ECS container agent.</p> </note>
     * <p>This parameter requires version 1.18 of the Docker Remote API or greater on
     * your container instance. To check the Docker Remote API version on your
     * container instance, log into your container instance and run the following
     * command: <code>sudo docker version | grep "Server API version"</code> </p>
     * <note> <p>The Amazon ECS container agent running on a container instance must
     * register the logging drivers available on that instance with the
     * <code>ECS_AVAILABLE_LOGGING_DRIVERS</code> environment variable before
     * containers placed on that instance can use these log configuration options. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon
     * ECS Container Agent Configuration</a> in the <i>Amazon EC2 Container Service
     * Developer Guide</i>.</p> </note>
     */
    inline ContainerDefinition& WithLogConfiguration(const LogConfiguration& value) { SetLogConfiguration(value); return *this;}

    /**
     * <p>The log configuration specification for the container. This parameter maps to
     * <code>LogConfig</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--log-driver</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. By default,
     * containers use the same logging driver that the Docker daemon uses; however the
     * container may use a different logging driver than the Docker daemon by
     * specifying a log driver with this parameter in the container definition. To use
     * a different logging driver for a container, the log system must be configured
     * properly on the container instance (or on a different log server for remote
     * logging options). For more information on the options for different supported
     * log drivers, see <a
     * href="https://docs.docker.com/engine/admin/logging/overview/">Configure logging
     * drivers</a> in the Docker documentation.</p> <note> <p>Amazon ECS currently
     * supports a subset of the logging drivers available to the Docker daemon (shown
     * in the <a>LogConfiguration</a> data type). Currently unsupported log drivers may
     * be available in future releases of the Amazon ECS container agent.</p> </note>
     * <p>This parameter requires version 1.18 of the Docker Remote API or greater on
     * your container instance. To check the Docker Remote API version on your
     * container instance, log into your container instance and run the following
     * command: <code>sudo docker version | grep "Server API version"</code> </p>
     * <note> <p>The Amazon ECS container agent running on a container instance must
     * register the logging drivers available on that instance with the
     * <code>ECS_AVAILABLE_LOGGING_DRIVERS</code> environment variable before
     * containers placed on that instance can use these log configuration options. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon
     * ECS Container Agent Configuration</a> in the <i>Amazon EC2 Container Service
     * Developer Guide</i>.</p> </note>
     */
    inline ContainerDefinition& WithLogConfiguration(LogConfiguration&& value) { SetLogConfiguration(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_image;
    bool m_imageHasBeenSet;
    int m_cpu;
    bool m_cpuHasBeenSet;
    int m_memory;
    bool m_memoryHasBeenSet;
    int m_memoryReservation;
    bool m_memoryReservationHasBeenSet;
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
    Aws::String m_hostname;
    bool m_hostnameHasBeenSet;
    Aws::String m_user;
    bool m_userHasBeenSet;
    Aws::String m_workingDirectory;
    bool m_workingDirectoryHasBeenSet;
    bool m_disableNetworking;
    bool m_disableNetworkingHasBeenSet;
    bool m_privileged;
    bool m_privilegedHasBeenSet;
    bool m_readonlyRootFilesystem;
    bool m_readonlyRootFilesystemHasBeenSet;
    Aws::Vector<Aws::String> m_dnsServers;
    bool m_dnsServersHasBeenSet;
    Aws::Vector<Aws::String> m_dnsSearchDomains;
    bool m_dnsSearchDomainsHasBeenSet;
    Aws::Vector<HostEntry> m_extraHosts;
    bool m_extraHostsHasBeenSet;
    Aws::Vector<Aws::String> m_dockerSecurityOptions;
    bool m_dockerSecurityOptionsHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_dockerLabels;
    bool m_dockerLabelsHasBeenSet;
    Aws::Vector<Ulimit> m_ulimits;
    bool m_ulimitsHasBeenSet;
    LogConfiguration m_logConfiguration;
    bool m_logConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
