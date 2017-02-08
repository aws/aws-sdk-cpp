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
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/Volume.h>
#include <aws/batch/model/KeyValuePair.h>
#include <aws/batch/model/MountPoint.h>
#include <aws/batch/model/Ulimit.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
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
    ContainerProperties(const Aws::Utils::Json::JsonValue& jsonValue);
    ContainerProperties& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

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
     * <li> <p>Images in Amazon ECR repositories use the full registry and repository
     * URI (for example,
     * <code>012345678910.dkr.ecr.&lt;region-name&gt;.amazonaws.com/&lt;repository-name&gt;</code>).
     * </p> </li> <li> <p>Images in official repositories on Docker Hub use a single
     * name (for example, <code>ubuntu</code> or <code>mongo</code>).</p> </li> <li>
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
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>IMAGE</code> parameter of <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <ul>
     * <li> <p>Images in Amazon ECR repositories use the full registry and repository
     * URI (for example,
     * <code>012345678910.dkr.ecr.&lt;region-name&gt;.amazonaws.com/&lt;repository-name&gt;</code>).
     * </p> </li> <li> <p>Images in official repositories on Docker Hub use a single
     * name (for example, <code>ubuntu</code> or <code>mongo</code>).</p> </li> <li>
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
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>IMAGE</code> parameter of <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <ul>
     * <li> <p>Images in Amazon ECR repositories use the full registry and repository
     * URI (for example,
     * <code>012345678910.dkr.ecr.&lt;region-name&gt;.amazonaws.com/&lt;repository-name&gt;</code>).
     * </p> </li> <li> <p>Images in official repositories on Docker Hub use a single
     * name (for example, <code>ubuntu</code> or <code>mongo</code>).</p> </li> <li>
     * <p>Images in other repositories on Docker Hub are qualified with an organization
     * name (for example, <code>amazon/amazon-ecs-agent</code>).</p> </li> <li>
     * <p>Images in other online repositories are qualified further by a domain name
     * (for example, <code>quay.io/assemblyline/ubuntu</code>).</p> </li> </ul>
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
     * <li> <p>Images in Amazon ECR repositories use the full registry and repository
     * URI (for example,
     * <code>012345678910.dkr.ecr.&lt;region-name&gt;.amazonaws.com/&lt;repository-name&gt;</code>).
     * </p> </li> <li> <p>Images in official repositories on Docker Hub use a single
     * name (for example, <code>ubuntu</code> or <code>mongo</code>).</p> </li> <li>
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
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>IMAGE</code> parameter of <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <ul>
     * <li> <p>Images in Amazon ECR repositories use the full registry and repository
     * URI (for example,
     * <code>012345678910.dkr.ecr.&lt;region-name&gt;.amazonaws.com/&lt;repository-name&gt;</code>).
     * </p> </li> <li> <p>Images in official repositories on Docker Hub use a single
     * name (for example, <code>ubuntu</code> or <code>mongo</code>).</p> </li> <li>
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
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>IMAGE</code> parameter of <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <ul>
     * <li> <p>Images in Amazon ECR repositories use the full registry and repository
     * URI (for example,
     * <code>012345678910.dkr.ecr.&lt;region-name&gt;.amazonaws.com/&lt;repository-name&gt;</code>).
     * </p> </li> <li> <p>Images in official repositories on Docker Hub use a single
     * name (for example, <code>ubuntu</code> or <code>mongo</code>).</p> </li> <li>
     * <p>Images in other repositories on Docker Hub are qualified with an organization
     * name (for example, <code>amazon/amazon-ecs-agent</code>).</p> </li> <li>
     * <p>Images in other online repositories are qualified further by a domain name
     * (for example, <code>quay.io/assemblyline/ubuntu</code>).</p> </li> </ul>
     */
    inline ContainerProperties& WithImage(Aws::String&& value) { SetImage(value); return *this;}

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
     * <li> <p>Images in Amazon ECR repositories use the full registry and repository
     * URI (for example,
     * <code>012345678910.dkr.ecr.&lt;region-name&gt;.amazonaws.com/&lt;repository-name&gt;</code>).
     * </p> </li> <li> <p>Images in official repositories on Docker Hub use a single
     * name (for example, <code>ubuntu</code> or <code>mongo</code>).</p> </li> <li>
     * <p>Images in other repositories on Docker Hub are qualified with an organization
     * name (for example, <code>amazon/amazon-ecs-agent</code>).</p> </li> <li>
     * <p>Images in other online repositories are qualified further by a domain name
     * (for example, <code>quay.io/assemblyline/ubuntu</code>).</p> </li> </ul>
     */
    inline ContainerProperties& WithImage(const char* value) { SetImage(value); return *this;}

    /**
     * <p>The number of vCPUs reserved for the container. This parameter maps to
     * <code>CpuShares</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--cpu-shares</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. Each vCPU
     * is equivalent to 1,024 CPU shares.</p>
     */
    inline int GetVcpus() const{ return m_vcpus; }

    /**
     * <p>The number of vCPUs reserved for the container. This parameter maps to
     * <code>CpuShares</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--cpu-shares</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. Each vCPU
     * is equivalent to 1,024 CPU shares.</p>
     */
    inline void SetVcpus(int value) { m_vcpusHasBeenSet = true; m_vcpus = value; }

    /**
     * <p>The number of vCPUs reserved for the container. This parameter maps to
     * <code>CpuShares</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--cpu-shares</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. Each vCPU
     * is equivalent to 1,024 CPU shares.</p>
     */
    inline ContainerProperties& WithVcpus(int value) { SetVcpus(value); return *this;}

    /**
     * <p>The hard limit (in MiB) of memory to present to the container. If your
     * container attempts to exceed the memory specified here, the container is killed.
     * This parameter maps to <code>Memory</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--memory</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
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
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
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
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerProperties& WithMemory(int value) { SetMemory(value); return *this;}

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
    inline ContainerProperties& WithCommand(const Aws::Vector<Aws::String>& value) { SetCommand(value); return *this;}

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
    inline ContainerProperties& WithCommand(Aws::Vector<Aws::String>&& value) { SetCommand(value); return *this;}

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
    inline ContainerProperties& AddCommand(const Aws::String& value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }

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
    inline ContainerProperties& AddCommand(Aws::String&& value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }

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
    inline void SetJobRoleArn(const Aws::String& value) { m_jobRoleArnHasBeenSet = true; m_jobRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the container can assume
     * for AWS permissions.</p>
     */
    inline void SetJobRoleArn(Aws::String&& value) { m_jobRoleArnHasBeenSet = true; m_jobRoleArn = value; }

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
    inline ContainerProperties& WithJobRoleArn(Aws::String&& value) { SetJobRoleArn(value); return *this;}

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
    inline void SetVolumes(const Aws::Vector<Volume>& value) { m_volumesHasBeenSet = true; m_volumes = value; }

    /**
     * <p>A list of data volumes used in a job.</p>
     */
    inline void SetVolumes(Aws::Vector<Volume>&& value) { m_volumesHasBeenSet = true; m_volumes = value; }

    /**
     * <p>A list of data volumes used in a job.</p>
     */
    inline ContainerProperties& WithVolumes(const Aws::Vector<Volume>& value) { SetVolumes(value); return *this;}

    /**
     * <p>A list of data volumes used in a job.</p>
     */
    inline ContainerProperties& WithVolumes(Aws::Vector<Volume>&& value) { SetVolumes(value); return *this;}

    /**
     * <p>A list of data volumes used in a job.</p>
     */
    inline ContainerProperties& AddVolumes(const Volume& value) { m_volumesHasBeenSet = true; m_volumes.push_back(value); return *this; }

    /**
     * <p>A list of data volumes used in a job.</p>
     */
    inline ContainerProperties& AddVolumes(Volume&& value) { m_volumesHasBeenSet = true; m_volumes.push_back(value); return *this; }

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
    inline ContainerProperties& WithEnvironment(const Aws::Vector<KeyValuePair>& value) { SetEnvironment(value); return *this;}

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
    inline ContainerProperties& WithEnvironment(Aws::Vector<KeyValuePair>&& value) { SetEnvironment(value); return *this;}

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
    inline ContainerProperties& AddEnvironment(const KeyValuePair& value) { m_environmentHasBeenSet = true; m_environment.push_back(value); return *this; }

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
    inline ContainerProperties& AddEnvironment(KeyValuePair&& value) { m_environmentHasBeenSet = true; m_environment.push_back(value); return *this; }

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
    inline ContainerProperties& WithMountPoints(const Aws::Vector<MountPoint>& value) { SetMountPoints(value); return *this;}

    /**
     * <p>The mount points for data volumes in your container. This parameter maps to
     * <code>Volumes</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--volume</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerProperties& WithMountPoints(Aws::Vector<MountPoint>&& value) { SetMountPoints(value); return *this;}

    /**
     * <p>The mount points for data volumes in your container. This parameter maps to
     * <code>Volumes</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--volume</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerProperties& AddMountPoints(const MountPoint& value) { m_mountPointsHasBeenSet = true; m_mountPoints.push_back(value); return *this; }

    /**
     * <p>The mount points for data volumes in your container. This parameter maps to
     * <code>Volumes</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--volume</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerProperties& AddMountPoints(MountPoint&& value) { m_mountPointsHasBeenSet = true; m_mountPoints.push_back(value); return *this; }

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
    inline ContainerProperties& WithReadonlyRootFilesystem(bool value) { SetReadonlyRootFilesystem(value); return *this;}

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
    inline ContainerProperties& WithPrivileged(bool value) { SetPrivileged(value); return *this;}

    /**
     * <p>A list of <code>ulimits</code> to set in the container. This parameter maps
     * to <code>Ulimits</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--ulimit</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline const Aws::Vector<Ulimit>& GetUlimits() const{ return m_ulimits; }

    /**
     * <p>A list of <code>ulimits</code> to set in the container. This parameter maps
     * to <code>Ulimits</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--ulimit</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline void SetUlimits(const Aws::Vector<Ulimit>& value) { m_ulimitsHasBeenSet = true; m_ulimits = value; }

    /**
     * <p>A list of <code>ulimits</code> to set in the container. This parameter maps
     * to <code>Ulimits</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--ulimit</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline void SetUlimits(Aws::Vector<Ulimit>&& value) { m_ulimitsHasBeenSet = true; m_ulimits = value; }

    /**
     * <p>A list of <code>ulimits</code> to set in the container. This parameter maps
     * to <code>Ulimits</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--ulimit</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerProperties& WithUlimits(const Aws::Vector<Ulimit>& value) { SetUlimits(value); return *this;}

    /**
     * <p>A list of <code>ulimits</code> to set in the container. This parameter maps
     * to <code>Ulimits</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--ulimit</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerProperties& WithUlimits(Aws::Vector<Ulimit>&& value) { SetUlimits(value); return *this;}

    /**
     * <p>A list of <code>ulimits</code> to set in the container. This parameter maps
     * to <code>Ulimits</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--ulimit</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerProperties& AddUlimits(const Ulimit& value) { m_ulimitsHasBeenSet = true; m_ulimits.push_back(value); return *this; }

    /**
     * <p>A list of <code>ulimits</code> to set in the container. This parameter maps
     * to <code>Ulimits</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--ulimit</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerProperties& AddUlimits(Ulimit&& value) { m_ulimitsHasBeenSet = true; m_ulimits.push_back(value); return *this; }

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
    inline ContainerProperties& WithUser(const Aws::String& value) { SetUser(value); return *this;}

    /**
     * <p>The user name to use inside the container. This parameter maps to
     * <code>User</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--user</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerProperties& WithUser(Aws::String&& value) { SetUser(value); return *this;}

    /**
     * <p>The user name to use inside the container. This parameter maps to
     * <code>User</code> in the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/#create-a-container">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/reference/api/docker_remote_api_v1.23/">Docker
     * Remote API</a> and the <code>--user</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p>
     */
    inline ContainerProperties& WithUser(const char* value) { SetUser(value); return *this;}

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
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
