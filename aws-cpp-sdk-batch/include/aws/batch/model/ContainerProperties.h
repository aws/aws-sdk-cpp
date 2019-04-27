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
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/Volume.h>
#include <aws/batch/model/KeyValuePair.h>
#include <aws/batch/model/MountPoint.h>
#include <aws/batch/model/Ulimit.h>
#include <aws/batch/model/ResourceRequirement.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>Container properties are used in job definitions to describe the container
   * that is launched as part of a job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ContainerProperties">AWS
   * API Reference</a></p>
   */
  class AWS_BATCH_API ContainerProperties
  {
  public:
    ContainerProperties();
    ContainerProperties(Aws::Utils::Json::JsonView jsonValue);
    ContainerProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The image used to start a container. This string is passed directly to the
     * Docker daemon. Images in the Docker Hub registry are available by default. Other
     * repositories are specified with <code>
     * <i>repository-url</i>/<i>image</i>:<i>tag</i> </code>. Up to 255 letters
     * (uppercase and lowercase), numbers, hyphens, underscores, colons, periods,
     * forward slashes, and number signs are allowed. This parameter maps to
     * <code>Image</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>IMAGE</code> parameter of <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <ul>
     * <li> <p>Images in Amazon ECR repositories use the full registry and repository
     * URI (for example,
     * <code>012345678910.dkr.ecr.&lt;region-name&gt;.amazonaws.com/&lt;repository-name&gt;</code>).</p>
     * </li> <li> <p>Images in official repositories on Docker Hub use a single name
     * (for example, <code>ubuntu</code> or <code>mongo</code>).</p> </li> <li>
     * <p>Images in other repositories on Docker Hub are qualified with an organization
     * name (for example, <code>amazon/amazon-ecs-agent</code>).</p> </li> <li>
     * <p>Images in other online repositories are qualified further by a domain name
     * (for example, <code>quay.io/assemblyline/ubuntu</code>).</p> </li> </ul>
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
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>IMAGE</code> parameter of <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <ul>
     * <li> <p>Images in Amazon ECR repositories use the full registry and repository
     * URI (for example,
     * <code>012345678910.dkr.ecr.&lt;region-name&gt;.amazonaws.com/&lt;repository-name&gt;</code>).</p>
     * </li> <li> <p>Images in official repositories on Docker Hub use a single name
     * (for example, <code>ubuntu</code> or <code>mongo</code>).</p> </li> <li>
     * <p>Images in other repositories on Docker Hub are qualified with an organization
     * name (for example, <code>amazon/amazon-ecs-agent</code>).</p> </li> <li>
     * <p>Images in other online repositories are qualified further by a domain name
     * (for example, <code>quay.io/assemblyline/ubuntu</code>).</p> </li> </ul>
     */
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }

    /**
     * <p>The image used to start a container. This string is passed directly to the
     * Docker daemon. Images in the Docker Hub registry are available by default. Other
     * repositories are specified with <code>
     * <i>repository-url</i>/<i>image</i>:<i>tag</i> </code>. Up to 255 letters
     * (uppercase and lowercase), numbers, hyphens, underscores, colons, periods,
     * forward slashes, and number signs are allowed. This parameter maps to
     * <code>Image</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>IMAGE</code> parameter of <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <ul>
     * <li> <p>Images in Amazon ECR repositories use the full registry and repository
     * URI (for example,
     * <code>012345678910.dkr.ecr.&lt;region-name&gt;.amazonaws.com/&lt;repository-name&gt;</code>).</p>
     * </li> <li> <p>Images in official repositories on Docker Hub use a single name
     * (for example, <code>ubuntu</code> or <code>mongo</code>).</p> </li> <li>
     * <p>Images in other repositories on Docker Hub are qualified with an organization
     * name (for example, <code>amazon/amazon-ecs-agent</code>).</p> </li> <li>
     * <p>Images in other online repositories are qualified further by a domain name
     * (for example, <code>quay.io/assemblyline/ubuntu</code>).</p> </li> </ul>
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
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>IMAGE</code> parameter of <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <ul>
     * <li> <p>Images in Amazon ECR repositories use the full registry and repository
     * URI (for example,
     * <code>012345678910.dkr.ecr.&lt;region-name&gt;.amazonaws.com/&lt;repository-name&gt;</code>).</p>
     * </li> <li> <p>Images in official repositories on Docker Hub use a single name
     * (for example, <code>ubuntu</code> or <code>mongo</code>).</p> </li> <li>
     * <p>Images in other repositories on Docker Hub are qualified with an organization
     * name (for example, <code>amazon/amazon-ecs-agent</code>).</p> </li> <li>
     * <p>Images in other online repositories are qualified further by a domain name
     * (for example, <code>quay.io/assemblyline/ubuntu</code>).</p> </li> </ul>
     */
    inline void SetImage(Aws::String&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }

    /**
     * <p>The image used to start a container. This string is passed directly to the
     * Docker daemon. Images in the Docker Hub registry are available by default. Other
     * repositories are specified with <code>
     * <i>repository-url</i>/<i>image</i>:<i>tag</i> </code>. Up to 255 letters
     * (uppercase and lowercase), numbers, hyphens, underscores, colons, periods,
     * forward slashes, and number signs are allowed. This parameter maps to
     * <code>Image</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>IMAGE</code> parameter of <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <ul>
     * <li> <p>Images in Amazon ECR repositories use the full registry and repository
     * URI (for example,
     * <code>012345678910.dkr.ecr.&lt;region-name&gt;.amazonaws.com/&lt;repository-name&gt;</code>).</p>
     * </li> <li> <p>Images in official repositories on Docker Hub use a single name
     * (for example, <code>ubuntu</code> or <code>mongo</code>).</p> </li> <li>
     * <p>Images in other repositories on Docker Hub are qualified with an organization
     * name (for example, <code>amazon/amazon-ecs-agent</code>).</p> </li> <li>
     * <p>Images in other online repositories are qualified further by a domain name
     * (for example, <code>quay.io/assemblyline/ubuntu</code>).</p> </li> </ul>
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
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>IMAGE</code> parameter of <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <ul>
     * <li> <p>Images in Amazon ECR repositories use the full registry and repository
     * URI (for example,
     * <code>012345678910.dkr.ecr.&lt;region-name&gt;.amazonaws.com/&lt;repository-name&gt;</code>).</p>
     * </li> <li> <p>Images in official repositories on Docker Hub use a single name
     * (for example, <code>ubuntu</code> or <code>mongo</code>).</p> </li> <li>
     * <p>Images in other repositories on Docker Hub are qualified with an organization
     * name (for example, <code>amazon/amazon-ecs-agent</code>).</p> </li> <li>
     * <p>Images in other online repositories are qualified further by a domain name
     * (for example, <code>quay.io/assemblyline/ubuntu</code>).</p> </li> </ul>
     */
    inline ContainerProperties& WithImage(const Aws::String& value) { SetImage(value); return *this;}

    /**
     * <p>The image used to start a container. This string is passed directly to the
     * Docker daemon. Images in the Docker Hub registry are available by default. Other
     * repositories are specified with <code>
     * <i>repository-url</i>/<i>image</i>:<i>tag</i> </code>. Up to 255 letters
     * (uppercase and lowercase), numbers, hyphens, underscores, colons, periods,
     * forward slashes, and number signs are allowed. This parameter maps to
     * <code>Image</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>IMAGE</code> parameter of <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <ul>
     * <li> <p>Images in Amazon ECR repositories use the full registry and repository
     * URI (for example,
     * <code>012345678910.dkr.ecr.&lt;region-name&gt;.amazonaws.com/&lt;repository-name&gt;</code>).</p>
     * </li> <li> <p>Images in official repositories on Docker Hub use a single name
     * (for example, <code>ubuntu</code> or <code>mongo</code>).</p> </li> <li>
     * <p>Images in other repositories on Docker Hub are qualified with an organization
     * name (for example, <code>amazon/amazon-ecs-agent</code>).</p> </li> <li>
     * <p>Images in other online repositories are qualified further by a domain name
     * (for example, <code>quay.io/assemblyline/ubuntu</code>).</p> </li> </ul>
     */
    inline ContainerProperties& WithImage(Aws::String&& value) { SetImage(std::move(value)); return *this;}

    /**
     * <p>The image used to start a container. This string is passed directly to the
     * Docker daemon. Images in the Docker Hub registry are available by default. Other
     * repositories are specified with <code>
     * <i>repository-url</i>/<i>image</i>:<i>tag</i> </code>. Up to 255 letters
     * (uppercase and lowercase), numbers, hyphens, underscores, colons, periods,
     * forward slashes, and number signs are allowed. This parameter maps to
     * <code>Image</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>IMAGE</code> parameter of <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <ul>
     * <li> <p>Images in Amazon ECR repositories use the full registry and repository
     * URI (for example,
     * <code>012345678910.dkr.ecr.&lt;region-name&gt;.amazonaws.com/&lt;repository-name&gt;</code>).</p>
     * </li> <li> <p>Images in official repositories on Docker Hub use a single name
     * (for example, <code>ubuntu</code> or <code>mongo</code>).</p> </li> <li>
     * <p>Images in other repositories on Docker Hub are qualified with an organization
     * name (for example, <code>amazon/amazon-ecs-agent</code>).</p> </li> <li>
     * <p>Images in other online repositories are qualified further by a domain name
     * (for example, <code>quay.io/assemblyline/ubuntu</code>).</p> </li> </ul>
     */
    inline ContainerProperties& WithImage(const char* value) { SetImage(value); return *this;}


    /**
     * <p>The number of vCPUs reserved for the container. This parameter maps to
     * <code>CpuShares</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--cpu-shares</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. Each vCPU
     * is equivalent to 1,024 CPU shares. You must specify at least one vCPU.</p>
     */
    inline int GetVcpus() const{ return m_vcpus; }

    /**
     * <p>The number of vCPUs reserved for the container. This parameter maps to
     * <code>CpuShares</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--cpu-shares</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. Each vCPU
     * is equivalent to 1,024 CPU shares. You must specify at least one vCPU.</p>
     */
    inline bool VcpusHasBeenSet() const { return m_vcpusHasBeenSet; }

    /**
     * <p>The number of vCPUs reserved for the container. This parameter maps to
     * <code>CpuShares</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--cpu-shares</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. Each vCPU
     * is equivalent to 1,024 CPU shares. You must specify at least one vCPU.</p>
     */
    inline void SetVcpus(int value) { m_vcpusHasBeenSet = true; m_vcpus = value; }

    /**
     * <p>The number of vCPUs reserved for the container. This parameter maps to
     * <code>CpuShares</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--cpu-shares</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. Each vCPU
     * is equivalent to 1,024 CPU shares. You must specify at least one vCPU.</p>
     */
    inline ContainerProperties& WithVcpus(int value) { SetVcpus(value); return *this;}


    /**
     * <p>The hard limit (in MiB) of memory to present to the container. If your
     * container attempts to exceed the memory specified here, the container is killed.
     * This parameter maps to <code>Memory</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--memory</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. You must
     * specify at least 4 MiB of memory for a job.</p> <note> <p>If you are trying to
     * maximize your resource utilization by providing your jobs as much memory as
     * possible for a particular instance type, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/memory-management.html">Memory
     * Management</a> in the <i>AWS Batch User Guide</i>.</p> </note>
     */
    inline int GetMemory() const{ return m_memory; }

    /**
     * <p>The hard limit (in MiB) of memory to present to the container. If your
     * container attempts to exceed the memory specified here, the container is killed.
     * This parameter maps to <code>Memory</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--memory</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. You must
     * specify at least 4 MiB of memory for a job.</p> <note> <p>If you are trying to
     * maximize your resource utilization by providing your jobs as much memory as
     * possible for a particular instance type, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/memory-management.html">Memory
     * Management</a> in the <i>AWS Batch User Guide</i>.</p> </note>
     */
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }

    /**
     * <p>The hard limit (in MiB) of memory to present to the container. If your
     * container attempts to exceed the memory specified here, the container is killed.
     * This parameter maps to <code>Memory</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--memory</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. You must
     * specify at least 4 MiB of memory for a job.</p> <note> <p>If you are trying to
     * maximize your resource utilization by providing your jobs as much memory as
     * possible for a particular instance type, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/memory-management.html">Memory
     * Management</a> in the <i>AWS Batch User Guide</i>.</p> </note>
     */
    inline void SetMemory(int value) { m_memoryHasBeenSet = true; m_memory = value; }

    /**
     * <p>The hard limit (in MiB) of memory to present to the container. If your
     * container attempts to exceed the memory specified here, the container is killed.
     * This parameter maps to <code>Memory</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--memory</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. You must
     * specify at least 4 MiB of memory for a job.</p> <note> <p>If you are trying to
     * maximize your resource utilization by providing your jobs as much memory as
     * possible for a particular instance type, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/memory-management.html">Memory
     * Management</a> in the <i>AWS Batch User Guide</i>.</p> </note>
     */
    inline ContainerProperties& WithMemory(int value) { SetMemory(value); return *this;}


    /**
     * <p>The command that is passed to the container. This parameter maps to
     * <code>Cmd</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>COMMAND</code> parameter to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">https://docs.docker.com/engine/reference/builder/#cmd</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCommand() const{ return m_command; }

    /**
     * <p>The command that is passed to the container. This parameter maps to
     * <code>Cmd</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>COMMAND</code> parameter to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">https://docs.docker.com/engine/reference/builder/#cmd</a>.</p>
     */
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }

    /**
     * <p>The command that is passed to the container. This parameter maps to
     * <code>Cmd</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>COMMAND</code> parameter to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">https://docs.docker.com/engine/reference/builder/#cmd</a>.</p>
     */
    inline void SetCommand(const Aws::Vector<Aws::String>& value) { m_commandHasBeenSet = true; m_command = value; }

    /**
     * <p>The command that is passed to the container. This parameter maps to
     * <code>Cmd</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>COMMAND</code> parameter to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">https://docs.docker.com/engine/reference/builder/#cmd</a>.</p>
     */
    inline void SetCommand(Aws::Vector<Aws::String>&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }

    /**
     * <p>The command that is passed to the container. This parameter maps to
     * <code>Cmd</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>COMMAND</code> parameter to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">https://docs.docker.com/engine/reference/builder/#cmd</a>.</p>
     */
    inline ContainerProperties& WithCommand(const Aws::Vector<Aws::String>& value) { SetCommand(value); return *this;}

    /**
     * <p>The command that is passed to the container. This parameter maps to
     * <code>Cmd</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>COMMAND</code> parameter to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">https://docs.docker.com/engine/reference/builder/#cmd</a>.</p>
     */
    inline ContainerProperties& WithCommand(Aws::Vector<Aws::String>&& value) { SetCommand(std::move(value)); return *this;}

    /**
     * <p>The command that is passed to the container. This parameter maps to
     * <code>Cmd</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>COMMAND</code> parameter to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">https://docs.docker.com/engine/reference/builder/#cmd</a>.</p>
     */
    inline ContainerProperties& AddCommand(const Aws::String& value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }

    /**
     * <p>The command that is passed to the container. This parameter maps to
     * <code>Cmd</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>COMMAND</code> parameter to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">https://docs.docker.com/engine/reference/builder/#cmd</a>.</p>
     */
    inline ContainerProperties& AddCommand(Aws::String&& value) { m_commandHasBeenSet = true; m_command.push_back(std::move(value)); return *this; }

    /**
     * <p>The command that is passed to the container. This parameter maps to
     * <code>Cmd</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>COMMAND</code> parameter to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">https://docs.docker.com/engine/reference/builder/#cmd</a>.</p>
     */
    inline ContainerProperties& AddCommand(const char* value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the container can assume
     * for AWS permissions.</p>
     */
    inline const Aws::String& GetJobRoleArn() const{ return m_jobRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the container can assume
     * for AWS permissions.</p>
     */
    inline bool JobRoleArnHasBeenSet() const { return m_jobRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the container can assume
     * for AWS permissions.</p>
     */
    inline void SetJobRoleArn(const Aws::String& value) { m_jobRoleArnHasBeenSet = true; m_jobRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the container can assume
     * for AWS permissions.</p>
     */
    inline void SetJobRoleArn(Aws::String&& value) { m_jobRoleArnHasBeenSet = true; m_jobRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the container can assume
     * for AWS permissions.</p>
     */
    inline void SetJobRoleArn(const char* value) { m_jobRoleArnHasBeenSet = true; m_jobRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the container can assume
     * for AWS permissions.</p>
     */
    inline ContainerProperties& WithJobRoleArn(const Aws::String& value) { SetJobRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the container can assume
     * for AWS permissions.</p>
     */
    inline ContainerProperties& WithJobRoleArn(Aws::String&& value) { SetJobRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the container can assume
     * for AWS permissions.</p>
     */
    inline ContainerProperties& WithJobRoleArn(const char* value) { SetJobRoleArn(value); return *this;}


    /**
     * <p>A list of data volumes used in a job.</p>
     */
    inline const Aws::Vector<Volume>& GetVolumes() const{ return m_volumes; }

    /**
     * <p>A list of data volumes used in a job.</p>
     */
    inline bool VolumesHasBeenSet() const { return m_volumesHasBeenSet; }

    /**
     * <p>A list of data volumes used in a job.</p>
     */
    inline void SetVolumes(const Aws::Vector<Volume>& value) { m_volumesHasBeenSet = true; m_volumes = value; }

    /**
     * <p>A list of data volumes used in a job.</p>
     */
    inline void SetVolumes(Aws::Vector<Volume>&& value) { m_volumesHasBeenSet = true; m_volumes = std::move(value); }

    /**
     * <p>A list of data volumes used in a job.</p>
     */
    inline ContainerProperties& WithVolumes(const Aws::Vector<Volume>& value) { SetVolumes(value); return *this;}

    /**
     * <p>A list of data volumes used in a job.</p>
     */
    inline ContainerProperties& WithVolumes(Aws::Vector<Volume>&& value) { SetVolumes(std::move(value)); return *this;}

    /**
     * <p>A list of data volumes used in a job.</p>
     */
    inline ContainerProperties& AddVolumes(const Volume& value) { m_volumesHasBeenSet = true; m_volumes.push_back(value); return *this; }

    /**
     * <p>A list of data volumes used in a job.</p>
     */
    inline ContainerProperties& AddVolumes(Volume&& value) { m_volumesHasBeenSet = true; m_volumes.push_back(std::move(value)); return *this; }


    /**
     * <p>The environment variables to pass to a container. This parameter maps to
     * <code>Env</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--env</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     * <important> <p>We do not recommend using plaintext environment variables for
     * sensitive information, such as credential data.</p> </important> <note>
     * <p>Environment variables must not start with <code>AWS_BATCH</code>; this naming
     * convention is reserved for variables that are set by the AWS Batch service.</p>
     * </note>
     */
    inline const Aws::Vector<KeyValuePair>& GetEnvironment() const{ return m_environment; }

    /**
     * <p>The environment variables to pass to a container. This parameter maps to
     * <code>Env</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--env</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     * <important> <p>We do not recommend using plaintext environment variables for
     * sensitive information, such as credential data.</p> </important> <note>
     * <p>Environment variables must not start with <code>AWS_BATCH</code>; this naming
     * convention is reserved for variables that are set by the AWS Batch service.</p>
     * </note>
     */
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }

    /**
     * <p>The environment variables to pass to a container. This parameter maps to
     * <code>Env</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--env</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     * <important> <p>We do not recommend using plaintext environment variables for
     * sensitive information, such as credential data.</p> </important> <note>
     * <p>Environment variables must not start with <code>AWS_BATCH</code>; this naming
     * convention is reserved for variables that are set by the AWS Batch service.</p>
     * </note>
     */
    inline void SetEnvironment(const Aws::Vector<KeyValuePair>& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>The environment variables to pass to a container. This parameter maps to
     * <code>Env</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--env</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     * <important> <p>We do not recommend using plaintext environment variables for
     * sensitive information, such as credential data.</p> </important> <note>
     * <p>Environment variables must not start with <code>AWS_BATCH</code>; this naming
     * convention is reserved for variables that are set by the AWS Batch service.</p>
     * </note>
     */
    inline void SetEnvironment(Aws::Vector<KeyValuePair>&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }

    /**
     * <p>The environment variables to pass to a container. This parameter maps to
     * <code>Env</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--env</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     * <important> <p>We do not recommend using plaintext environment variables for
     * sensitive information, such as credential data.</p> </important> <note>
     * <p>Environment variables must not start with <code>AWS_BATCH</code>; this naming
     * convention is reserved for variables that are set by the AWS Batch service.</p>
     * </note>
     */
    inline ContainerProperties& WithEnvironment(const Aws::Vector<KeyValuePair>& value) { SetEnvironment(value); return *this;}

    /**
     * <p>The environment variables to pass to a container. This parameter maps to
     * <code>Env</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--env</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     * <important> <p>We do not recommend using plaintext environment variables for
     * sensitive information, such as credential data.</p> </important> <note>
     * <p>Environment variables must not start with <code>AWS_BATCH</code>; this naming
     * convention is reserved for variables that are set by the AWS Batch service.</p>
     * </note>
     */
    inline ContainerProperties& WithEnvironment(Aws::Vector<KeyValuePair>&& value) { SetEnvironment(std::move(value)); return *this;}

    /**
     * <p>The environment variables to pass to a container. This parameter maps to
     * <code>Env</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--env</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     * <important> <p>We do not recommend using plaintext environment variables for
     * sensitive information, such as credential data.</p> </important> <note>
     * <p>Environment variables must not start with <code>AWS_BATCH</code>; this naming
     * convention is reserved for variables that are set by the AWS Batch service.</p>
     * </note>
     */
    inline ContainerProperties& AddEnvironment(const KeyValuePair& value) { m_environmentHasBeenSet = true; m_environment.push_back(value); return *this; }

    /**
     * <p>The environment variables to pass to a container. This parameter maps to
     * <code>Env</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--env</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     * <important> <p>We do not recommend using plaintext environment variables for
     * sensitive information, such as credential data.</p> </important> <note>
     * <p>Environment variables must not start with <code>AWS_BATCH</code>; this naming
     * convention is reserved for variables that are set by the AWS Batch service.</p>
     * </note>
     */
    inline ContainerProperties& AddEnvironment(KeyValuePair&& value) { m_environmentHasBeenSet = true; m_environment.push_back(std::move(value)); return *this; }


    /**
     * <p>The mount points for data volumes in your container. This parameter maps to
     * <code>Volumes</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--volume</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline const Aws::Vector<MountPoint>& GetMountPoints() const{ return m_mountPoints; }

    /**
     * <p>The mount points for data volumes in your container. This parameter maps to
     * <code>Volumes</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--volume</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline bool MountPointsHasBeenSet() const { return m_mountPointsHasBeenSet; }

    /**
     * <p>The mount points for data volumes in your container. This parameter maps to
     * <code>Volumes</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--volume</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline void SetMountPoints(const Aws::Vector<MountPoint>& value) { m_mountPointsHasBeenSet = true; m_mountPoints = value; }

    /**
     * <p>The mount points for data volumes in your container. This parameter maps to
     * <code>Volumes</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--volume</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline void SetMountPoints(Aws::Vector<MountPoint>&& value) { m_mountPointsHasBeenSet = true; m_mountPoints = std::move(value); }

    /**
     * <p>The mount points for data volumes in your container. This parameter maps to
     * <code>Volumes</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--volume</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerProperties& WithMountPoints(const Aws::Vector<MountPoint>& value) { SetMountPoints(value); return *this;}

    /**
     * <p>The mount points for data volumes in your container. This parameter maps to
     * <code>Volumes</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--volume</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerProperties& WithMountPoints(Aws::Vector<MountPoint>&& value) { SetMountPoints(std::move(value)); return *this;}

    /**
     * <p>The mount points for data volumes in your container. This parameter maps to
     * <code>Volumes</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--volume</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerProperties& AddMountPoints(const MountPoint& value) { m_mountPointsHasBeenSet = true; m_mountPoints.push_back(value); return *this; }

    /**
     * <p>The mount points for data volumes in your container. This parameter maps to
     * <code>Volumes</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--volume</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerProperties& AddMountPoints(MountPoint&& value) { m_mountPointsHasBeenSet = true; m_mountPoints.push_back(std::move(value)); return *this; }


    /**
     * <p>When this parameter is true, the container is given read-only access to its
     * root file system. This parameter maps to <code>ReadonlyRootfs</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--read-only</code> option to <code>docker run</code>.</p>
     */
    inline bool GetReadonlyRootFilesystem() const{ return m_readonlyRootFilesystem; }

    /**
     * <p>When this parameter is true, the container is given read-only access to its
     * root file system. This parameter maps to <code>ReadonlyRootfs</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--read-only</code> option to <code>docker run</code>.</p>
     */
    inline bool ReadonlyRootFilesystemHasBeenSet() const { return m_readonlyRootFilesystemHasBeenSet; }

    /**
     * <p>When this parameter is true, the container is given read-only access to its
     * root file system. This parameter maps to <code>ReadonlyRootfs</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--read-only</code> option to <code>docker run</code>.</p>
     */
    inline void SetReadonlyRootFilesystem(bool value) { m_readonlyRootFilesystemHasBeenSet = true; m_readonlyRootFilesystem = value; }

    /**
     * <p>When this parameter is true, the container is given read-only access to its
     * root file system. This parameter maps to <code>ReadonlyRootfs</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--read-only</code> option to <code>docker run</code>.</p>
     */
    inline ContainerProperties& WithReadonlyRootFilesystem(bool value) { SetReadonlyRootFilesystem(value); return *this;}


    /**
     * <p>When this parameter is true, the container is given elevated privileges on
     * the host container instance (similar to the <code>root</code> user). This
     * parameter maps to <code>Privileged</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--privileged</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline bool GetPrivileged() const{ return m_privileged; }

    /**
     * <p>When this parameter is true, the container is given elevated privileges on
     * the host container instance (similar to the <code>root</code> user). This
     * parameter maps to <code>Privileged</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--privileged</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline bool PrivilegedHasBeenSet() const { return m_privilegedHasBeenSet; }

    /**
     * <p>When this parameter is true, the container is given elevated privileges on
     * the host container instance (similar to the <code>root</code> user). This
     * parameter maps to <code>Privileged</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--privileged</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline void SetPrivileged(bool value) { m_privilegedHasBeenSet = true; m_privileged = value; }

    /**
     * <p>When this parameter is true, the container is given elevated privileges on
     * the host container instance (similar to the <code>root</code> user). This
     * parameter maps to <code>Privileged</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--privileged</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerProperties& WithPrivileged(bool value) { SetPrivileged(value); return *this;}


    /**
     * <p>A list of <code>ulimits</code> to set in the container. This parameter maps
     * to <code>Ulimits</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--ulimit</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline const Aws::Vector<Ulimit>& GetUlimits() const{ return m_ulimits; }

    /**
     * <p>A list of <code>ulimits</code> to set in the container. This parameter maps
     * to <code>Ulimits</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--ulimit</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline bool UlimitsHasBeenSet() const { return m_ulimitsHasBeenSet; }

    /**
     * <p>A list of <code>ulimits</code> to set in the container. This parameter maps
     * to <code>Ulimits</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--ulimit</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline void SetUlimits(const Aws::Vector<Ulimit>& value) { m_ulimitsHasBeenSet = true; m_ulimits = value; }

    /**
     * <p>A list of <code>ulimits</code> to set in the container. This parameter maps
     * to <code>Ulimits</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--ulimit</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline void SetUlimits(Aws::Vector<Ulimit>&& value) { m_ulimitsHasBeenSet = true; m_ulimits = std::move(value); }

    /**
     * <p>A list of <code>ulimits</code> to set in the container. This parameter maps
     * to <code>Ulimits</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--ulimit</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerProperties& WithUlimits(const Aws::Vector<Ulimit>& value) { SetUlimits(value); return *this;}

    /**
     * <p>A list of <code>ulimits</code> to set in the container. This parameter maps
     * to <code>Ulimits</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--ulimit</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerProperties& WithUlimits(Aws::Vector<Ulimit>&& value) { SetUlimits(std::move(value)); return *this;}

    /**
     * <p>A list of <code>ulimits</code> to set in the container. This parameter maps
     * to <code>Ulimits</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--ulimit</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerProperties& AddUlimits(const Ulimit& value) { m_ulimitsHasBeenSet = true; m_ulimits.push_back(value); return *this; }

    /**
     * <p>A list of <code>ulimits</code> to set in the container. This parameter maps
     * to <code>Ulimits</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--ulimit</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerProperties& AddUlimits(Ulimit&& value) { m_ulimitsHasBeenSet = true; m_ulimits.push_back(std::move(value)); return *this; }


    /**
     * <p>The user name to use inside the container. This parameter maps to
     * <code>User</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--user</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline const Aws::String& GetUser() const{ return m_user; }

    /**
     * <p>The user name to use inside the container. This parameter maps to
     * <code>User</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--user</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }

    /**
     * <p>The user name to use inside the container. This parameter maps to
     * <code>User</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--user</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline void SetUser(const Aws::String& value) { m_userHasBeenSet = true; m_user = value; }

    /**
     * <p>The user name to use inside the container. This parameter maps to
     * <code>User</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--user</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline void SetUser(Aws::String&& value) { m_userHasBeenSet = true; m_user = std::move(value); }

    /**
     * <p>The user name to use inside the container. This parameter maps to
     * <code>User</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--user</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline void SetUser(const char* value) { m_userHasBeenSet = true; m_user.assign(value); }

    /**
     * <p>The user name to use inside the container. This parameter maps to
     * <code>User</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--user</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerProperties& WithUser(const Aws::String& value) { SetUser(value); return *this;}

    /**
     * <p>The user name to use inside the container. This parameter maps to
     * <code>User</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--user</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerProperties& WithUser(Aws::String&& value) { SetUser(std::move(value)); return *this;}

    /**
     * <p>The user name to use inside the container. This parameter maps to
     * <code>User</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--user</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerProperties& WithUser(const char* value) { SetUser(value); return *this;}


    /**
     * <p>The instance type to use for a multi-node parallel job. Currently all node
     * groups in a multi-node parallel job must use the same instance type. This
     * parameter is not valid for single-node container jobs.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type to use for a multi-node parallel job. Currently all node
     * groups in a multi-node parallel job must use the same instance type. This
     * parameter is not valid for single-node container jobs.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type to use for a multi-node parallel job. Currently all node
     * groups in a multi-node parallel job must use the same instance type. This
     * parameter is not valid for single-node container jobs.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type to use for a multi-node parallel job. Currently all node
     * groups in a multi-node parallel job must use the same instance type. This
     * parameter is not valid for single-node container jobs.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type to use for a multi-node parallel job. Currently all node
     * groups in a multi-node parallel job must use the same instance type. This
     * parameter is not valid for single-node container jobs.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The instance type to use for a multi-node parallel job. Currently all node
     * groups in a multi-node parallel job must use the same instance type. This
     * parameter is not valid for single-node container jobs.</p>
     */
    inline ContainerProperties& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type to use for a multi-node parallel job. Currently all node
     * groups in a multi-node parallel job must use the same instance type. This
     * parameter is not valid for single-node container jobs.</p>
     */
    inline ContainerProperties& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type to use for a multi-node parallel job. Currently all node
     * groups in a multi-node parallel job must use the same instance type. This
     * parameter is not valid for single-node container jobs.</p>
     */
    inline ContainerProperties& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>The type and amount of a resource to assign to a container. Currently, the
     * only supported resource is <code>GPU</code>.</p>
     */
    inline const Aws::Vector<ResourceRequirement>& GetResourceRequirements() const{ return m_resourceRequirements; }

    /**
     * <p>The type and amount of a resource to assign to a container. Currently, the
     * only supported resource is <code>GPU</code>.</p>
     */
    inline bool ResourceRequirementsHasBeenSet() const { return m_resourceRequirementsHasBeenSet; }

    /**
     * <p>The type and amount of a resource to assign to a container. Currently, the
     * only supported resource is <code>GPU</code>.</p>
     */
    inline void SetResourceRequirements(const Aws::Vector<ResourceRequirement>& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements = value; }

    /**
     * <p>The type and amount of a resource to assign to a container. Currently, the
     * only supported resource is <code>GPU</code>.</p>
     */
    inline void SetResourceRequirements(Aws::Vector<ResourceRequirement>&& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements = std::move(value); }

    /**
     * <p>The type and amount of a resource to assign to a container. Currently, the
     * only supported resource is <code>GPU</code>.</p>
     */
    inline ContainerProperties& WithResourceRequirements(const Aws::Vector<ResourceRequirement>& value) { SetResourceRequirements(value); return *this;}

    /**
     * <p>The type and amount of a resource to assign to a container. Currently, the
     * only supported resource is <code>GPU</code>.</p>
     */
    inline ContainerProperties& WithResourceRequirements(Aws::Vector<ResourceRequirement>&& value) { SetResourceRequirements(std::move(value)); return *this;}

    /**
     * <p>The type and amount of a resource to assign to a container. Currently, the
     * only supported resource is <code>GPU</code>.</p>
     */
    inline ContainerProperties& AddResourceRequirements(const ResourceRequirement& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements.push_back(value); return *this; }

    /**
     * <p>The type and amount of a resource to assign to a container. Currently, the
     * only supported resource is <code>GPU</code>.</p>
     */
    inline ContainerProperties& AddResourceRequirements(ResourceRequirement&& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_image;
    bool m_imageHasBeenSet;

    int m_vcpus;
    bool m_vcpusHasBeenSet;

    int m_memory;
    bool m_memoryHasBeenSet;

    Aws::Vector<Aws::String> m_command;
    bool m_commandHasBeenSet;

    Aws::String m_jobRoleArn;
    bool m_jobRoleArnHasBeenSet;

    Aws::Vector<Volume> m_volumes;
    bool m_volumesHasBeenSet;

    Aws::Vector<KeyValuePair> m_environment;
    bool m_environmentHasBeenSet;

    Aws::Vector<MountPoint> m_mountPoints;
    bool m_mountPointsHasBeenSet;

    bool m_readonlyRootFilesystem;
    bool m_readonlyRootFilesystemHasBeenSet;

    bool m_privileged;
    bool m_privilegedHasBeenSet;

    Aws::Vector<Ulimit> m_ulimits;
    bool m_ulimitsHasBeenSet;

    Aws::String m_user;
    bool m_userHasBeenSet;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;

    Aws::Vector<ResourceRequirement> m_resourceRequirements;
    bool m_resourceRequirementsHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
