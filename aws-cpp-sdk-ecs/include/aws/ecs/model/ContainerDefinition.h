/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/RepositoryCredentials.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/LinuxParameters.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ecs/model/LogConfiguration.h>
#include <aws/ecs/model/HealthCheck.h>
#include <aws/ecs/model/FirelensConfiguration.h>
#include <aws/ecs/model/PortMapping.h>
#include <aws/ecs/model/KeyValuePair.h>
#include <aws/ecs/model/EnvironmentFile.h>
#include <aws/ecs/model/MountPoint.h>
#include <aws/ecs/model/VolumeFrom.h>
#include <aws/ecs/model/Secret.h>
#include <aws/ecs/model/ContainerDependency.h>
#include <aws/ecs/model/HostEntry.h>
#include <aws/ecs/model/Ulimit.h>
#include <aws/ecs/model/SystemControl.h>
#include <aws/ecs/model/ResourceRequirement.h>
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
   * <p>Container definitions are used in task definitions to describe the different
   * containers that are launched as part of a task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ContainerDefinition">AWS
   * API Reference</a></p>
   */
  class ContainerDefinition
  {
  public:
    AWS_ECS_API ContainerDefinition();
    AWS_ECS_API ContainerDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ContainerDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of a container. If you're linking multiple containers together in a
     * task definition, the <code>name</code> of one container can be entered in the
     * <code>links</code> of another container to connect the containers. Up to 255
     * letters (uppercase and lowercase), numbers, underscores, and hyphens are
     * allowed. This parameter maps to <code>name</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--name</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of a container. If you're linking multiple containers together in a
     * task definition, the <code>name</code> of one container can be entered in the
     * <code>links</code> of another container to connect the containers. Up to 255
     * letters (uppercase and lowercase), numbers, underscores, and hyphens are
     * allowed. This parameter maps to <code>name</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--name</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of a container. If you're linking multiple containers together in a
     * task definition, the <code>name</code> of one container can be entered in the
     * <code>links</code> of another container to connect the containers. Up to 255
     * letters (uppercase and lowercase), numbers, underscores, and hyphens are
     * allowed. This parameter maps to <code>name</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--name</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of a container. If you're linking multiple containers together in a
     * task definition, the <code>name</code> of one container can be entered in the
     * <code>links</code> of another container to connect the containers. Up to 255
     * letters (uppercase and lowercase), numbers, underscores, and hyphens are
     * allowed. This parameter maps to <code>name</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--name</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of a container. If you're linking multiple containers together in a
     * task definition, the <code>name</code> of one container can be entered in the
     * <code>links</code> of another container to connect the containers. Up to 255
     * letters (uppercase and lowercase), numbers, underscores, and hyphens are
     * allowed. This parameter maps to <code>name</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--name</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of a container. If you're linking multiple containers together in a
     * task definition, the <code>name</code> of one container can be entered in the
     * <code>links</code> of another container to connect the containers. Up to 255
     * letters (uppercase and lowercase), numbers, underscores, and hyphens are
     * allowed. This parameter maps to <code>name</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--name</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. </p>
     */
    inline ContainerDefinition& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of a container. If you're linking multiple containers together in a
     * task definition, the <code>name</code> of one container can be entered in the
     * <code>links</code> of another container to connect the containers. Up to 255
     * letters (uppercase and lowercase), numbers, underscores, and hyphens are
     * allowed. This parameter maps to <code>name</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--name</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. </p>
     */
    inline ContainerDefinition& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of a container. If you're linking multiple containers together in a
     * task definition, the <code>name</code> of one container can be entered in the
     * <code>links</code> of another container to connect the containers. Up to 255
     * letters (uppercase and lowercase), numbers, underscores, and hyphens are
     * allowed. This parameter maps to <code>name</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--name</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. </p>
     */
    inline ContainerDefinition& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The image used to start a container. This string is passed directly to the
     * Docker daemon. By default, images in the Docker Hub registry are available.
     * Other repositories are specified with either <code>
     * <i>repository-url</i>/<i>image</i>:<i>tag</i> </code> or <code>
     * <i>repository-url</i>/<i>image</i>@<i>digest</i> </code>. Up to 255 letters
     * (uppercase and lowercase), numbers, hyphens, underscores, colons, periods,
     * forward slashes, and number signs are allowed. This parameter maps to
     * <code>Image</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>IMAGE</code> parameter of <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <ul> <li> <p>When a new task starts, the Amazon ECS container agent
     * pulls the latest version of the specified image and tag for the container to
     * use. However, subsequent updates to a repository image aren't propagated to
     * already running tasks.</p> </li> <li> <p>Images in Amazon ECR repositories can
     * be specified by either using the full <code>registry/repository:tag</code> or
     * <code>registry/repository@digest</code>. For example,
     * <code>012345678910.dkr.ecr.&lt;region-name&gt;.amazonaws.com/&lt;repository-name&gt;:latest</code>
     * or
     * <code>012345678910.dkr.ecr.&lt;region-name&gt;.amazonaws.com/&lt;repository-name&gt;@sha256:94afd1f2e64d908bc90dbca0035a5b567EXAMPLE</code>.
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
     * Docker daemon. By default, images in the Docker Hub registry are available.
     * Other repositories are specified with either <code>
     * <i>repository-url</i>/<i>image</i>:<i>tag</i> </code> or <code>
     * <i>repository-url</i>/<i>image</i>@<i>digest</i> </code>. Up to 255 letters
     * (uppercase and lowercase), numbers, hyphens, underscores, colons, periods,
     * forward slashes, and number signs are allowed. This parameter maps to
     * <code>Image</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>IMAGE</code> parameter of <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <ul> <li> <p>When a new task starts, the Amazon ECS container agent
     * pulls the latest version of the specified image and tag for the container to
     * use. However, subsequent updates to a repository image aren't propagated to
     * already running tasks.</p> </li> <li> <p>Images in Amazon ECR repositories can
     * be specified by either using the full <code>registry/repository:tag</code> or
     * <code>registry/repository@digest</code>. For example,
     * <code>012345678910.dkr.ecr.&lt;region-name&gt;.amazonaws.com/&lt;repository-name&gt;:latest</code>
     * or
     * <code>012345678910.dkr.ecr.&lt;region-name&gt;.amazonaws.com/&lt;repository-name&gt;@sha256:94afd1f2e64d908bc90dbca0035a5b567EXAMPLE</code>.
     * </p> </li> <li> <p>Images in official repositories on Docker Hub use a single
     * name (for example, <code>ubuntu</code> or <code>mongo</code>).</p> </li> <li>
     * <p>Images in other repositories on Docker Hub are qualified with an organization
     * name (for example, <code>amazon/amazon-ecs-agent</code>).</p> </li> <li>
     * <p>Images in other online repositories are qualified further by a domain name
     * (for example, <code>quay.io/assemblyline/ubuntu</code>).</p> </li> </ul>
     */
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }

    /**
     * <p>The image used to start a container. This string is passed directly to the
     * Docker daemon. By default, images in the Docker Hub registry are available.
     * Other repositories are specified with either <code>
     * <i>repository-url</i>/<i>image</i>:<i>tag</i> </code> or <code>
     * <i>repository-url</i>/<i>image</i>@<i>digest</i> </code>. Up to 255 letters
     * (uppercase and lowercase), numbers, hyphens, underscores, colons, periods,
     * forward slashes, and number signs are allowed. This parameter maps to
     * <code>Image</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>IMAGE</code> parameter of <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <ul> <li> <p>When a new task starts, the Amazon ECS container agent
     * pulls the latest version of the specified image and tag for the container to
     * use. However, subsequent updates to a repository image aren't propagated to
     * already running tasks.</p> </li> <li> <p>Images in Amazon ECR repositories can
     * be specified by either using the full <code>registry/repository:tag</code> or
     * <code>registry/repository@digest</code>. For example,
     * <code>012345678910.dkr.ecr.&lt;region-name&gt;.amazonaws.com/&lt;repository-name&gt;:latest</code>
     * or
     * <code>012345678910.dkr.ecr.&lt;region-name&gt;.amazonaws.com/&lt;repository-name&gt;@sha256:94afd1f2e64d908bc90dbca0035a5b567EXAMPLE</code>.
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
     * Docker daemon. By default, images in the Docker Hub registry are available.
     * Other repositories are specified with either <code>
     * <i>repository-url</i>/<i>image</i>:<i>tag</i> </code> or <code>
     * <i>repository-url</i>/<i>image</i>@<i>digest</i> </code>. Up to 255 letters
     * (uppercase and lowercase), numbers, hyphens, underscores, colons, periods,
     * forward slashes, and number signs are allowed. This parameter maps to
     * <code>Image</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>IMAGE</code> parameter of <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <ul> <li> <p>When a new task starts, the Amazon ECS container agent
     * pulls the latest version of the specified image and tag for the container to
     * use. However, subsequent updates to a repository image aren't propagated to
     * already running tasks.</p> </li> <li> <p>Images in Amazon ECR repositories can
     * be specified by either using the full <code>registry/repository:tag</code> or
     * <code>registry/repository@digest</code>. For example,
     * <code>012345678910.dkr.ecr.&lt;region-name&gt;.amazonaws.com/&lt;repository-name&gt;:latest</code>
     * or
     * <code>012345678910.dkr.ecr.&lt;region-name&gt;.amazonaws.com/&lt;repository-name&gt;@sha256:94afd1f2e64d908bc90dbca0035a5b567EXAMPLE</code>.
     * </p> </li> <li> <p>Images in official repositories on Docker Hub use a single
     * name (for example, <code>ubuntu</code> or <code>mongo</code>).</p> </li> <li>
     * <p>Images in other repositories on Docker Hub are qualified with an organization
     * name (for example, <code>amazon/amazon-ecs-agent</code>).</p> </li> <li>
     * <p>Images in other online repositories are qualified further by a domain name
     * (for example, <code>quay.io/assemblyline/ubuntu</code>).</p> </li> </ul>
     */
    inline void SetImage(Aws::String&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }

    /**
     * <p>The image used to start a container. This string is passed directly to the
     * Docker daemon. By default, images in the Docker Hub registry are available.
     * Other repositories are specified with either <code>
     * <i>repository-url</i>/<i>image</i>:<i>tag</i> </code> or <code>
     * <i>repository-url</i>/<i>image</i>@<i>digest</i> </code>. Up to 255 letters
     * (uppercase and lowercase), numbers, hyphens, underscores, colons, periods,
     * forward slashes, and number signs are allowed. This parameter maps to
     * <code>Image</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>IMAGE</code> parameter of <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <ul> <li> <p>When a new task starts, the Amazon ECS container agent
     * pulls the latest version of the specified image and tag for the container to
     * use. However, subsequent updates to a repository image aren't propagated to
     * already running tasks.</p> </li> <li> <p>Images in Amazon ECR repositories can
     * be specified by either using the full <code>registry/repository:tag</code> or
     * <code>registry/repository@digest</code>. For example,
     * <code>012345678910.dkr.ecr.&lt;region-name&gt;.amazonaws.com/&lt;repository-name&gt;:latest</code>
     * or
     * <code>012345678910.dkr.ecr.&lt;region-name&gt;.amazonaws.com/&lt;repository-name&gt;@sha256:94afd1f2e64d908bc90dbca0035a5b567EXAMPLE</code>.
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
     * Docker daemon. By default, images in the Docker Hub registry are available.
     * Other repositories are specified with either <code>
     * <i>repository-url</i>/<i>image</i>:<i>tag</i> </code> or <code>
     * <i>repository-url</i>/<i>image</i>@<i>digest</i> </code>. Up to 255 letters
     * (uppercase and lowercase), numbers, hyphens, underscores, colons, periods,
     * forward slashes, and number signs are allowed. This parameter maps to
     * <code>Image</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>IMAGE</code> parameter of <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <ul> <li> <p>When a new task starts, the Amazon ECS container agent
     * pulls the latest version of the specified image and tag for the container to
     * use. However, subsequent updates to a repository image aren't propagated to
     * already running tasks.</p> </li> <li> <p>Images in Amazon ECR repositories can
     * be specified by either using the full <code>registry/repository:tag</code> or
     * <code>registry/repository@digest</code>. For example,
     * <code>012345678910.dkr.ecr.&lt;region-name&gt;.amazonaws.com/&lt;repository-name&gt;:latest</code>
     * or
     * <code>012345678910.dkr.ecr.&lt;region-name&gt;.amazonaws.com/&lt;repository-name&gt;@sha256:94afd1f2e64d908bc90dbca0035a5b567EXAMPLE</code>.
     * </p> </li> <li> <p>Images in official repositories on Docker Hub use a single
     * name (for example, <code>ubuntu</code> or <code>mongo</code>).</p> </li> <li>
     * <p>Images in other repositories on Docker Hub are qualified with an organization
     * name (for example, <code>amazon/amazon-ecs-agent</code>).</p> </li> <li>
     * <p>Images in other online repositories are qualified further by a domain name
     * (for example, <code>quay.io/assemblyline/ubuntu</code>).</p> </li> </ul>
     */
    inline ContainerDefinition& WithImage(const Aws::String& value) { SetImage(value); return *this;}

    /**
     * <p>The image used to start a container. This string is passed directly to the
     * Docker daemon. By default, images in the Docker Hub registry are available.
     * Other repositories are specified with either <code>
     * <i>repository-url</i>/<i>image</i>:<i>tag</i> </code> or <code>
     * <i>repository-url</i>/<i>image</i>@<i>digest</i> </code>. Up to 255 letters
     * (uppercase and lowercase), numbers, hyphens, underscores, colons, periods,
     * forward slashes, and number signs are allowed. This parameter maps to
     * <code>Image</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>IMAGE</code> parameter of <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <ul> <li> <p>When a new task starts, the Amazon ECS container agent
     * pulls the latest version of the specified image and tag for the container to
     * use. However, subsequent updates to a repository image aren't propagated to
     * already running tasks.</p> </li> <li> <p>Images in Amazon ECR repositories can
     * be specified by either using the full <code>registry/repository:tag</code> or
     * <code>registry/repository@digest</code>. For example,
     * <code>012345678910.dkr.ecr.&lt;region-name&gt;.amazonaws.com/&lt;repository-name&gt;:latest</code>
     * or
     * <code>012345678910.dkr.ecr.&lt;region-name&gt;.amazonaws.com/&lt;repository-name&gt;@sha256:94afd1f2e64d908bc90dbca0035a5b567EXAMPLE</code>.
     * </p> </li> <li> <p>Images in official repositories on Docker Hub use a single
     * name (for example, <code>ubuntu</code> or <code>mongo</code>).</p> </li> <li>
     * <p>Images in other repositories on Docker Hub are qualified with an organization
     * name (for example, <code>amazon/amazon-ecs-agent</code>).</p> </li> <li>
     * <p>Images in other online repositories are qualified further by a domain name
     * (for example, <code>quay.io/assemblyline/ubuntu</code>).</p> </li> </ul>
     */
    inline ContainerDefinition& WithImage(Aws::String&& value) { SetImage(std::move(value)); return *this;}

    /**
     * <p>The image used to start a container. This string is passed directly to the
     * Docker daemon. By default, images in the Docker Hub registry are available.
     * Other repositories are specified with either <code>
     * <i>repository-url</i>/<i>image</i>:<i>tag</i> </code> or <code>
     * <i>repository-url</i>/<i>image</i>@<i>digest</i> </code>. Up to 255 letters
     * (uppercase and lowercase), numbers, hyphens, underscores, colons, periods,
     * forward slashes, and number signs are allowed. This parameter maps to
     * <code>Image</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>IMAGE</code> parameter of <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <ul> <li> <p>When a new task starts, the Amazon ECS container agent
     * pulls the latest version of the specified image and tag for the container to
     * use. However, subsequent updates to a repository image aren't propagated to
     * already running tasks.</p> </li> <li> <p>Images in Amazon ECR repositories can
     * be specified by either using the full <code>registry/repository:tag</code> or
     * <code>registry/repository@digest</code>. For example,
     * <code>012345678910.dkr.ecr.&lt;region-name&gt;.amazonaws.com/&lt;repository-name&gt;:latest</code>
     * or
     * <code>012345678910.dkr.ecr.&lt;region-name&gt;.amazonaws.com/&lt;repository-name&gt;@sha256:94afd1f2e64d908bc90dbca0035a5b567EXAMPLE</code>.
     * </p> </li> <li> <p>Images in official repositories on Docker Hub use a single
     * name (for example, <code>ubuntu</code> or <code>mongo</code>).</p> </li> <li>
     * <p>Images in other repositories on Docker Hub are qualified with an organization
     * name (for example, <code>amazon/amazon-ecs-agent</code>).</p> </li> <li>
     * <p>Images in other online repositories are qualified further by a domain name
     * (for example, <code>quay.io/assemblyline/ubuntu</code>).</p> </li> </ul>
     */
    inline ContainerDefinition& WithImage(const char* value) { SetImage(value); return *this;}


    /**
     * <p>The private repository authentication credentials to use.</p>
     */
    inline const RepositoryCredentials& GetRepositoryCredentials() const{ return m_repositoryCredentials; }

    /**
     * <p>The private repository authentication credentials to use.</p>
     */
    inline bool RepositoryCredentialsHasBeenSet() const { return m_repositoryCredentialsHasBeenSet; }

    /**
     * <p>The private repository authentication credentials to use.</p>
     */
    inline void SetRepositoryCredentials(const RepositoryCredentials& value) { m_repositoryCredentialsHasBeenSet = true; m_repositoryCredentials = value; }

    /**
     * <p>The private repository authentication credentials to use.</p>
     */
    inline void SetRepositoryCredentials(RepositoryCredentials&& value) { m_repositoryCredentialsHasBeenSet = true; m_repositoryCredentials = std::move(value); }

    /**
     * <p>The private repository authentication credentials to use.</p>
     */
    inline ContainerDefinition& WithRepositoryCredentials(const RepositoryCredentials& value) { SetRepositoryCredentials(value); return *this;}

    /**
     * <p>The private repository authentication credentials to use.</p>
     */
    inline ContainerDefinition& WithRepositoryCredentials(RepositoryCredentials&& value) { SetRepositoryCredentials(std::move(value)); return *this;}


    /**
     * <p>The number of <code>cpu</code> units reserved for the container. This
     * parameter maps to <code>CpuShares</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--cpu-shares</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <p>This field is optional for tasks using the Fargate launch type,
     * and the only requirement is that the total amount of CPU reserved for all
     * containers within a task be lower than the task-level <code>cpu</code>
     * value.</p>  <p>You can determine the number of CPU units that are
     * available per EC2 instance type by multiplying the vCPUs listed for that
     * instance type on the <a href="http://aws.amazon.com/ec2/instance-types/">Amazon
     * EC2 Instances</a> detail page by 1,024.</p>  <p>Linux containers share
     * unallocated CPU units with other containers on the container instance with the
     * same ratio as their allocated amount. For example, if you run a single-container
     * task on a single-core instance type with 512 CPU units specified for that
     * container, and that's the only task running on the container instance, that
     * container could use the full 1,024 CPU unit share at any given time. However, if
     * you launched another copy of the same task on that container instance, each task
     * is guaranteed a minimum of 512 CPU units when needed. Moreover, each container
     * could float to higher CPU usage if the other container was not using it. If both
     * tasks were 100% active all of the time, they would be limited to 512 CPU
     * units.</p> <p>On Linux container instances, the Docker daemon on the container
     * instance uses the CPU value to calculate the relative CPU share ratios for
     * running containers. For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#cpu-share-constraint">CPU
     * share constraint</a> in the Docker documentation. The minimum valid CPU share
     * value that the Linux kernel allows is 2. However, the CPU parameter isn't
     * required, and you can use CPU values below 2 in your container definitions. For
     * CPU values below 2 (including null), the behavior varies based on your Amazon
     * ECS container agent version:</p> <ul> <li> <p> <b>Agent versions less than or
     * equal to 1.1.0:</b> Null and zero CPU values are passed to Docker as 0, which
     * Docker then converts to 1,024 CPU shares. CPU values of 1 are passed to Docker
     * as 1, which the Linux kernel converts to two CPU shares.</p> </li> <li> <p>
     * <b>Agent versions greater than or equal to 1.2.0:</b> Null, zero, and CPU values
     * of 1 are passed to Docker as 2.</p> </li> </ul> <p>On Windows container
     * instances, the CPU limit is enforced as an absolute limit, or a quota. Windows
     * containers only have access to the specified amount of CPU that's described in
     * the task definition. A null or zero CPU value is passed to Docker as
     * <code>0</code>, which Windows interprets as 1% of one CPU.</p>
     */
    inline int GetCpu() const{ return m_cpu; }

    /**
     * <p>The number of <code>cpu</code> units reserved for the container. This
     * parameter maps to <code>CpuShares</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--cpu-shares</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <p>This field is optional for tasks using the Fargate launch type,
     * and the only requirement is that the total amount of CPU reserved for all
     * containers within a task be lower than the task-level <code>cpu</code>
     * value.</p>  <p>You can determine the number of CPU units that are
     * available per EC2 instance type by multiplying the vCPUs listed for that
     * instance type on the <a href="http://aws.amazon.com/ec2/instance-types/">Amazon
     * EC2 Instances</a> detail page by 1,024.</p>  <p>Linux containers share
     * unallocated CPU units with other containers on the container instance with the
     * same ratio as their allocated amount. For example, if you run a single-container
     * task on a single-core instance type with 512 CPU units specified for that
     * container, and that's the only task running on the container instance, that
     * container could use the full 1,024 CPU unit share at any given time. However, if
     * you launched another copy of the same task on that container instance, each task
     * is guaranteed a minimum of 512 CPU units when needed. Moreover, each container
     * could float to higher CPU usage if the other container was not using it. If both
     * tasks were 100% active all of the time, they would be limited to 512 CPU
     * units.</p> <p>On Linux container instances, the Docker daemon on the container
     * instance uses the CPU value to calculate the relative CPU share ratios for
     * running containers. For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#cpu-share-constraint">CPU
     * share constraint</a> in the Docker documentation. The minimum valid CPU share
     * value that the Linux kernel allows is 2. However, the CPU parameter isn't
     * required, and you can use CPU values below 2 in your container definitions. For
     * CPU values below 2 (including null), the behavior varies based on your Amazon
     * ECS container agent version:</p> <ul> <li> <p> <b>Agent versions less than or
     * equal to 1.1.0:</b> Null and zero CPU values are passed to Docker as 0, which
     * Docker then converts to 1,024 CPU shares. CPU values of 1 are passed to Docker
     * as 1, which the Linux kernel converts to two CPU shares.</p> </li> <li> <p>
     * <b>Agent versions greater than or equal to 1.2.0:</b> Null, zero, and CPU values
     * of 1 are passed to Docker as 2.</p> </li> </ul> <p>On Windows container
     * instances, the CPU limit is enforced as an absolute limit, or a quota. Windows
     * containers only have access to the specified amount of CPU that's described in
     * the task definition. A null or zero CPU value is passed to Docker as
     * <code>0</code>, which Windows interprets as 1% of one CPU.</p>
     */
    inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }

    /**
     * <p>The number of <code>cpu</code> units reserved for the container. This
     * parameter maps to <code>CpuShares</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--cpu-shares</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <p>This field is optional for tasks using the Fargate launch type,
     * and the only requirement is that the total amount of CPU reserved for all
     * containers within a task be lower than the task-level <code>cpu</code>
     * value.</p>  <p>You can determine the number of CPU units that are
     * available per EC2 instance type by multiplying the vCPUs listed for that
     * instance type on the <a href="http://aws.amazon.com/ec2/instance-types/">Amazon
     * EC2 Instances</a> detail page by 1,024.</p>  <p>Linux containers share
     * unallocated CPU units with other containers on the container instance with the
     * same ratio as their allocated amount. For example, if you run a single-container
     * task on a single-core instance type with 512 CPU units specified for that
     * container, and that's the only task running on the container instance, that
     * container could use the full 1,024 CPU unit share at any given time. However, if
     * you launched another copy of the same task on that container instance, each task
     * is guaranteed a minimum of 512 CPU units when needed. Moreover, each container
     * could float to higher CPU usage if the other container was not using it. If both
     * tasks were 100% active all of the time, they would be limited to 512 CPU
     * units.</p> <p>On Linux container instances, the Docker daemon on the container
     * instance uses the CPU value to calculate the relative CPU share ratios for
     * running containers. For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#cpu-share-constraint">CPU
     * share constraint</a> in the Docker documentation. The minimum valid CPU share
     * value that the Linux kernel allows is 2. However, the CPU parameter isn't
     * required, and you can use CPU values below 2 in your container definitions. For
     * CPU values below 2 (including null), the behavior varies based on your Amazon
     * ECS container agent version:</p> <ul> <li> <p> <b>Agent versions less than or
     * equal to 1.1.0:</b> Null and zero CPU values are passed to Docker as 0, which
     * Docker then converts to 1,024 CPU shares. CPU values of 1 are passed to Docker
     * as 1, which the Linux kernel converts to two CPU shares.</p> </li> <li> <p>
     * <b>Agent versions greater than or equal to 1.2.0:</b> Null, zero, and CPU values
     * of 1 are passed to Docker as 2.</p> </li> </ul> <p>On Windows container
     * instances, the CPU limit is enforced as an absolute limit, or a quota. Windows
     * containers only have access to the specified amount of CPU that's described in
     * the task definition. A null or zero CPU value is passed to Docker as
     * <code>0</code>, which Windows interprets as 1% of one CPU.</p>
     */
    inline void SetCpu(int value) { m_cpuHasBeenSet = true; m_cpu = value; }

    /**
     * <p>The number of <code>cpu</code> units reserved for the container. This
     * parameter maps to <code>CpuShares</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--cpu-shares</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <p>This field is optional for tasks using the Fargate launch type,
     * and the only requirement is that the total amount of CPU reserved for all
     * containers within a task be lower than the task-level <code>cpu</code>
     * value.</p>  <p>You can determine the number of CPU units that are
     * available per EC2 instance type by multiplying the vCPUs listed for that
     * instance type on the <a href="http://aws.amazon.com/ec2/instance-types/">Amazon
     * EC2 Instances</a> detail page by 1,024.</p>  <p>Linux containers share
     * unallocated CPU units with other containers on the container instance with the
     * same ratio as their allocated amount. For example, if you run a single-container
     * task on a single-core instance type with 512 CPU units specified for that
     * container, and that's the only task running on the container instance, that
     * container could use the full 1,024 CPU unit share at any given time. However, if
     * you launched another copy of the same task on that container instance, each task
     * is guaranteed a minimum of 512 CPU units when needed. Moreover, each container
     * could float to higher CPU usage if the other container was not using it. If both
     * tasks were 100% active all of the time, they would be limited to 512 CPU
     * units.</p> <p>On Linux container instances, the Docker daemon on the container
     * instance uses the CPU value to calculate the relative CPU share ratios for
     * running containers. For more information, see <a
     * href="https://docs.docker.com/engine/reference/run/#cpu-share-constraint">CPU
     * share constraint</a> in the Docker documentation. The minimum valid CPU share
     * value that the Linux kernel allows is 2. However, the CPU parameter isn't
     * required, and you can use CPU values below 2 in your container definitions. For
     * CPU values below 2 (including null), the behavior varies based on your Amazon
     * ECS container agent version:</p> <ul> <li> <p> <b>Agent versions less than or
     * equal to 1.1.0:</b> Null and zero CPU values are passed to Docker as 0, which
     * Docker then converts to 1,024 CPU shares. CPU values of 1 are passed to Docker
     * as 1, which the Linux kernel converts to two CPU shares.</p> </li> <li> <p>
     * <b>Agent versions greater than or equal to 1.2.0:</b> Null, zero, and CPU values
     * of 1 are passed to Docker as 2.</p> </li> </ul> <p>On Windows container
     * instances, the CPU limit is enforced as an absolute limit, or a quota. Windows
     * containers only have access to the specified amount of CPU that's described in
     * the task definition. A null or zero CPU value is passed to Docker as
     * <code>0</code>, which Windows interprets as 1% of one CPU.</p>
     */
    inline ContainerDefinition& WithCpu(int value) { SetCpu(value); return *this;}


    /**
     * <p>The amount (in MiB) of memory to present to the container. If your container
     * attempts to exceed the memory specified here, the container is killed. The total
     * amount of memory reserved for all containers within a task must be lower than
     * the task <code>memory</code> value, if one is specified. This parameter maps to
     * <code>Memory</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--memory</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <p>If using the Fargate launch type, this parameter is
     * optional.</p> <p>If using the EC2 launch type, you must specify either a
     * task-level memory value or a container-level memory value. If you specify both a
     * container-level <code>memory</code> and <code>memoryReservation</code> value,
     * <code>memory</code> must be greater than <code>memoryReservation</code>. If you
     * specify <code>memoryReservation</code>, then that value is subtracted from the
     * available memory resources for the container instance where the container is
     * placed. Otherwise, the value of <code>memory</code> is used.</p> <p>The Docker
     * 20.10.0 or later daemon reserves a minimum of 6 MiB of memory for a container.
     * So, don't specify less than 6 MiB of memory for your containers. </p> <p>The
     * Docker 19.03.13-ce or earlier daemon reserves a minimum of 4 MiB of memory for a
     * container. So, don't specify less than 4 MiB of memory for your containers.</p>
     */
    inline int GetMemory() const{ return m_memory; }

    /**
     * <p>The amount (in MiB) of memory to present to the container. If your container
     * attempts to exceed the memory specified here, the container is killed. The total
     * amount of memory reserved for all containers within a task must be lower than
     * the task <code>memory</code> value, if one is specified. This parameter maps to
     * <code>Memory</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--memory</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <p>If using the Fargate launch type, this parameter is
     * optional.</p> <p>If using the EC2 launch type, you must specify either a
     * task-level memory value or a container-level memory value. If you specify both a
     * container-level <code>memory</code> and <code>memoryReservation</code> value,
     * <code>memory</code> must be greater than <code>memoryReservation</code>. If you
     * specify <code>memoryReservation</code>, then that value is subtracted from the
     * available memory resources for the container instance where the container is
     * placed. Otherwise, the value of <code>memory</code> is used.</p> <p>The Docker
     * 20.10.0 or later daemon reserves a minimum of 6 MiB of memory for a container.
     * So, don't specify less than 6 MiB of memory for your containers. </p> <p>The
     * Docker 19.03.13-ce or earlier daemon reserves a minimum of 4 MiB of memory for a
     * container. So, don't specify less than 4 MiB of memory for your containers.</p>
     */
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }

    /**
     * <p>The amount (in MiB) of memory to present to the container. If your container
     * attempts to exceed the memory specified here, the container is killed. The total
     * amount of memory reserved for all containers within a task must be lower than
     * the task <code>memory</code> value, if one is specified. This parameter maps to
     * <code>Memory</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--memory</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <p>If using the Fargate launch type, this parameter is
     * optional.</p> <p>If using the EC2 launch type, you must specify either a
     * task-level memory value or a container-level memory value. If you specify both a
     * container-level <code>memory</code> and <code>memoryReservation</code> value,
     * <code>memory</code> must be greater than <code>memoryReservation</code>. If you
     * specify <code>memoryReservation</code>, then that value is subtracted from the
     * available memory resources for the container instance where the container is
     * placed. Otherwise, the value of <code>memory</code> is used.</p> <p>The Docker
     * 20.10.0 or later daemon reserves a minimum of 6 MiB of memory for a container.
     * So, don't specify less than 6 MiB of memory for your containers. </p> <p>The
     * Docker 19.03.13-ce or earlier daemon reserves a minimum of 4 MiB of memory for a
     * container. So, don't specify less than 4 MiB of memory for your containers.</p>
     */
    inline void SetMemory(int value) { m_memoryHasBeenSet = true; m_memory = value; }

    /**
     * <p>The amount (in MiB) of memory to present to the container. If your container
     * attempts to exceed the memory specified here, the container is killed. The total
     * amount of memory reserved for all containers within a task must be lower than
     * the task <code>memory</code> value, if one is specified. This parameter maps to
     * <code>Memory</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--memory</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <p>If using the Fargate launch type, this parameter is
     * optional.</p> <p>If using the EC2 launch type, you must specify either a
     * task-level memory value or a container-level memory value. If you specify both a
     * container-level <code>memory</code> and <code>memoryReservation</code> value,
     * <code>memory</code> must be greater than <code>memoryReservation</code>. If you
     * specify <code>memoryReservation</code>, then that value is subtracted from the
     * available memory resources for the container instance where the container is
     * placed. Otherwise, the value of <code>memory</code> is used.</p> <p>The Docker
     * 20.10.0 or later daemon reserves a minimum of 6 MiB of memory for a container.
     * So, don't specify less than 6 MiB of memory for your containers. </p> <p>The
     * Docker 19.03.13-ce or earlier daemon reserves a minimum of 4 MiB of memory for a
     * container. So, don't specify less than 4 MiB of memory for your containers.</p>
     */
    inline ContainerDefinition& WithMemory(int value) { SetMemory(value); return *this;}


    /**
     * <p>The soft limit (in MiB) of memory to reserve for the container. When system
     * memory is under heavy contention, Docker attempts to keep the container memory
     * to this soft limit. However, your container can consume more memory when it
     * needs to, up to either the hard limit specified with the <code>memory</code>
     * parameter (if applicable), or all of the available memory on the container
     * instance, whichever comes first. This parameter maps to
     * <code>MemoryReservation</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--memory-reservation</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <p>If a task-level memory value is not specified, you must specify
     * a non-zero integer for one or both of <code>memory</code> or
     * <code>memoryReservation</code> in a container definition. If you specify both,
     * <code>memory</code> must be greater than <code>memoryReservation</code>. If you
     * specify <code>memoryReservation</code>, then that value is subtracted from the
     * available memory resources for the container instance where the container is
     * placed. Otherwise, the value of <code>memory</code> is used.</p> <p>For example,
     * if your container normally uses 128 MiB of memory, but occasionally bursts to
     * 256 MiB of memory for short periods of time, you can set a
     * <code>memoryReservation</code> of 128 MiB, and a <code>memory</code> hard limit
     * of 300 MiB. This configuration would allow the container to only reserve 128 MiB
     * of memory from the remaining resources on the container instance, but also allow
     * the container to consume more memory resources when needed.</p> <p>The Docker
     * 20.10.0 or later daemon reserves a minimum of 6 MiB of memory for a container.
     * So, don't specify less than 6 MiB of memory for your containers. </p> <p>The
     * Docker 19.03.13-ce or earlier daemon reserves a minimum of 4 MiB of memory for a
     * container. So, don't specify less than 4 MiB of memory for your containers.</p>
     */
    inline int GetMemoryReservation() const{ return m_memoryReservation; }

    /**
     * <p>The soft limit (in MiB) of memory to reserve for the container. When system
     * memory is under heavy contention, Docker attempts to keep the container memory
     * to this soft limit. However, your container can consume more memory when it
     * needs to, up to either the hard limit specified with the <code>memory</code>
     * parameter (if applicable), or all of the available memory on the container
     * instance, whichever comes first. This parameter maps to
     * <code>MemoryReservation</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--memory-reservation</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <p>If a task-level memory value is not specified, you must specify
     * a non-zero integer for one or both of <code>memory</code> or
     * <code>memoryReservation</code> in a container definition. If you specify both,
     * <code>memory</code> must be greater than <code>memoryReservation</code>. If you
     * specify <code>memoryReservation</code>, then that value is subtracted from the
     * available memory resources for the container instance where the container is
     * placed. Otherwise, the value of <code>memory</code> is used.</p> <p>For example,
     * if your container normally uses 128 MiB of memory, but occasionally bursts to
     * 256 MiB of memory for short periods of time, you can set a
     * <code>memoryReservation</code> of 128 MiB, and a <code>memory</code> hard limit
     * of 300 MiB. This configuration would allow the container to only reserve 128 MiB
     * of memory from the remaining resources on the container instance, but also allow
     * the container to consume more memory resources when needed.</p> <p>The Docker
     * 20.10.0 or later daemon reserves a minimum of 6 MiB of memory for a container.
     * So, don't specify less than 6 MiB of memory for your containers. </p> <p>The
     * Docker 19.03.13-ce or earlier daemon reserves a minimum of 4 MiB of memory for a
     * container. So, don't specify less than 4 MiB of memory for your containers.</p>
     */
    inline bool MemoryReservationHasBeenSet() const { return m_memoryReservationHasBeenSet; }

    /**
     * <p>The soft limit (in MiB) of memory to reserve for the container. When system
     * memory is under heavy contention, Docker attempts to keep the container memory
     * to this soft limit. However, your container can consume more memory when it
     * needs to, up to either the hard limit specified with the <code>memory</code>
     * parameter (if applicable), or all of the available memory on the container
     * instance, whichever comes first. This parameter maps to
     * <code>MemoryReservation</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--memory-reservation</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <p>If a task-level memory value is not specified, you must specify
     * a non-zero integer for one or both of <code>memory</code> or
     * <code>memoryReservation</code> in a container definition. If you specify both,
     * <code>memory</code> must be greater than <code>memoryReservation</code>. If you
     * specify <code>memoryReservation</code>, then that value is subtracted from the
     * available memory resources for the container instance where the container is
     * placed. Otherwise, the value of <code>memory</code> is used.</p> <p>For example,
     * if your container normally uses 128 MiB of memory, but occasionally bursts to
     * 256 MiB of memory for short periods of time, you can set a
     * <code>memoryReservation</code> of 128 MiB, and a <code>memory</code> hard limit
     * of 300 MiB. This configuration would allow the container to only reserve 128 MiB
     * of memory from the remaining resources on the container instance, but also allow
     * the container to consume more memory resources when needed.</p> <p>The Docker
     * 20.10.0 or later daemon reserves a minimum of 6 MiB of memory for a container.
     * So, don't specify less than 6 MiB of memory for your containers. </p> <p>The
     * Docker 19.03.13-ce or earlier daemon reserves a minimum of 4 MiB of memory for a
     * container. So, don't specify less than 4 MiB of memory for your containers.</p>
     */
    inline void SetMemoryReservation(int value) { m_memoryReservationHasBeenSet = true; m_memoryReservation = value; }

    /**
     * <p>The soft limit (in MiB) of memory to reserve for the container. When system
     * memory is under heavy contention, Docker attempts to keep the container memory
     * to this soft limit. However, your container can consume more memory when it
     * needs to, up to either the hard limit specified with the <code>memory</code>
     * parameter (if applicable), or all of the available memory on the container
     * instance, whichever comes first. This parameter maps to
     * <code>MemoryReservation</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--memory-reservation</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <p>If a task-level memory value is not specified, you must specify
     * a non-zero integer for one or both of <code>memory</code> or
     * <code>memoryReservation</code> in a container definition. If you specify both,
     * <code>memory</code> must be greater than <code>memoryReservation</code>. If you
     * specify <code>memoryReservation</code>, then that value is subtracted from the
     * available memory resources for the container instance where the container is
     * placed. Otherwise, the value of <code>memory</code> is used.</p> <p>For example,
     * if your container normally uses 128 MiB of memory, but occasionally bursts to
     * 256 MiB of memory for short periods of time, you can set a
     * <code>memoryReservation</code> of 128 MiB, and a <code>memory</code> hard limit
     * of 300 MiB. This configuration would allow the container to only reserve 128 MiB
     * of memory from the remaining resources on the container instance, but also allow
     * the container to consume more memory resources when needed.</p> <p>The Docker
     * 20.10.0 or later daemon reserves a minimum of 6 MiB of memory for a container.
     * So, don't specify less than 6 MiB of memory for your containers. </p> <p>The
     * Docker 19.03.13-ce or earlier daemon reserves a minimum of 4 MiB of memory for a
     * container. So, don't specify less than 4 MiB of memory for your containers.</p>
     */
    inline ContainerDefinition& WithMemoryReservation(int value) { SetMemoryReservation(value); return *this;}


    /**
     * <p>The <code>links</code> parameter allows containers to communicate with each
     * other without the need for port mappings. This parameter is only supported if
     * the network mode of a task definition is <code>bridge</code>. The
     * <code>name:internalName</code> construct is analogous to <code>name:alias</code>
     * in Docker links. Up to 255 letters (uppercase and lowercase), numbers,
     * underscores, and hyphens are allowed. For more information about linking Docker
     * containers, go to <a href="https://docs.docker.com/network/links/">Legacy
     * container links</a> in the Docker documentation. This parameter maps to
     * <code>Links</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--link</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter is not supported for Windows
     * containers.</p>   <p>Containers that are collocated on a
     * single container instance may be able to communicate with each other without
     * requiring links or host port mappings. Network isolation is achieved on the
     * container instance using security groups and VPC settings.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetLinks() const{ return m_links; }

    /**
     * <p>The <code>links</code> parameter allows containers to communicate with each
     * other without the need for port mappings. This parameter is only supported if
     * the network mode of a task definition is <code>bridge</code>. The
     * <code>name:internalName</code> construct is analogous to <code>name:alias</code>
     * in Docker links. Up to 255 letters (uppercase and lowercase), numbers,
     * underscores, and hyphens are allowed. For more information about linking Docker
     * containers, go to <a href="https://docs.docker.com/network/links/">Legacy
     * container links</a> in the Docker documentation. This parameter maps to
     * <code>Links</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--link</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter is not supported for Windows
     * containers.</p>   <p>Containers that are collocated on a
     * single container instance may be able to communicate with each other without
     * requiring links or host port mappings. Network isolation is achieved on the
     * container instance using security groups and VPC settings.</p> 
     */
    inline bool LinksHasBeenSet() const { return m_linksHasBeenSet; }

    /**
     * <p>The <code>links</code> parameter allows containers to communicate with each
     * other without the need for port mappings. This parameter is only supported if
     * the network mode of a task definition is <code>bridge</code>. The
     * <code>name:internalName</code> construct is analogous to <code>name:alias</code>
     * in Docker links. Up to 255 letters (uppercase and lowercase), numbers,
     * underscores, and hyphens are allowed. For more information about linking Docker
     * containers, go to <a href="https://docs.docker.com/network/links/">Legacy
     * container links</a> in the Docker documentation. This parameter maps to
     * <code>Links</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--link</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter is not supported for Windows
     * containers.</p>   <p>Containers that are collocated on a
     * single container instance may be able to communicate with each other without
     * requiring links or host port mappings. Network isolation is achieved on the
     * container instance using security groups and VPC settings.</p> 
     */
    inline void SetLinks(const Aws::Vector<Aws::String>& value) { m_linksHasBeenSet = true; m_links = value; }

    /**
     * <p>The <code>links</code> parameter allows containers to communicate with each
     * other without the need for port mappings. This parameter is only supported if
     * the network mode of a task definition is <code>bridge</code>. The
     * <code>name:internalName</code> construct is analogous to <code>name:alias</code>
     * in Docker links. Up to 255 letters (uppercase and lowercase), numbers,
     * underscores, and hyphens are allowed. For more information about linking Docker
     * containers, go to <a href="https://docs.docker.com/network/links/">Legacy
     * container links</a> in the Docker documentation. This parameter maps to
     * <code>Links</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--link</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter is not supported for Windows
     * containers.</p>   <p>Containers that are collocated on a
     * single container instance may be able to communicate with each other without
     * requiring links or host port mappings. Network isolation is achieved on the
     * container instance using security groups and VPC settings.</p> 
     */
    inline void SetLinks(Aws::Vector<Aws::String>&& value) { m_linksHasBeenSet = true; m_links = std::move(value); }

    /**
     * <p>The <code>links</code> parameter allows containers to communicate with each
     * other without the need for port mappings. This parameter is only supported if
     * the network mode of a task definition is <code>bridge</code>. The
     * <code>name:internalName</code> construct is analogous to <code>name:alias</code>
     * in Docker links. Up to 255 letters (uppercase and lowercase), numbers,
     * underscores, and hyphens are allowed. For more information about linking Docker
     * containers, go to <a href="https://docs.docker.com/network/links/">Legacy
     * container links</a> in the Docker documentation. This parameter maps to
     * <code>Links</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--link</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter is not supported for Windows
     * containers.</p>   <p>Containers that are collocated on a
     * single container instance may be able to communicate with each other without
     * requiring links or host port mappings. Network isolation is achieved on the
     * container instance using security groups and VPC settings.</p> 
     */
    inline ContainerDefinition& WithLinks(const Aws::Vector<Aws::String>& value) { SetLinks(value); return *this;}

    /**
     * <p>The <code>links</code> parameter allows containers to communicate with each
     * other without the need for port mappings. This parameter is only supported if
     * the network mode of a task definition is <code>bridge</code>. The
     * <code>name:internalName</code> construct is analogous to <code>name:alias</code>
     * in Docker links. Up to 255 letters (uppercase and lowercase), numbers,
     * underscores, and hyphens are allowed. For more information about linking Docker
     * containers, go to <a href="https://docs.docker.com/network/links/">Legacy
     * container links</a> in the Docker documentation. This parameter maps to
     * <code>Links</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--link</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter is not supported for Windows
     * containers.</p>   <p>Containers that are collocated on a
     * single container instance may be able to communicate with each other without
     * requiring links or host port mappings. Network isolation is achieved on the
     * container instance using security groups and VPC settings.</p> 
     */
    inline ContainerDefinition& WithLinks(Aws::Vector<Aws::String>&& value) { SetLinks(std::move(value)); return *this;}

    /**
     * <p>The <code>links</code> parameter allows containers to communicate with each
     * other without the need for port mappings. This parameter is only supported if
     * the network mode of a task definition is <code>bridge</code>. The
     * <code>name:internalName</code> construct is analogous to <code>name:alias</code>
     * in Docker links. Up to 255 letters (uppercase and lowercase), numbers,
     * underscores, and hyphens are allowed. For more information about linking Docker
     * containers, go to <a href="https://docs.docker.com/network/links/">Legacy
     * container links</a> in the Docker documentation. This parameter maps to
     * <code>Links</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--link</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter is not supported for Windows
     * containers.</p>   <p>Containers that are collocated on a
     * single container instance may be able to communicate with each other without
     * requiring links or host port mappings. Network isolation is achieved on the
     * container instance using security groups and VPC settings.</p> 
     */
    inline ContainerDefinition& AddLinks(const Aws::String& value) { m_linksHasBeenSet = true; m_links.push_back(value); return *this; }

    /**
     * <p>The <code>links</code> parameter allows containers to communicate with each
     * other without the need for port mappings. This parameter is only supported if
     * the network mode of a task definition is <code>bridge</code>. The
     * <code>name:internalName</code> construct is analogous to <code>name:alias</code>
     * in Docker links. Up to 255 letters (uppercase and lowercase), numbers,
     * underscores, and hyphens are allowed. For more information about linking Docker
     * containers, go to <a href="https://docs.docker.com/network/links/">Legacy
     * container links</a> in the Docker documentation. This parameter maps to
     * <code>Links</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--link</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter is not supported for Windows
     * containers.</p>   <p>Containers that are collocated on a
     * single container instance may be able to communicate with each other without
     * requiring links or host port mappings. Network isolation is achieved on the
     * container instance using security groups and VPC settings.</p> 
     */
    inline ContainerDefinition& AddLinks(Aws::String&& value) { m_linksHasBeenSet = true; m_links.push_back(std::move(value)); return *this; }

    /**
     * <p>The <code>links</code> parameter allows containers to communicate with each
     * other without the need for port mappings. This parameter is only supported if
     * the network mode of a task definition is <code>bridge</code>. The
     * <code>name:internalName</code> construct is analogous to <code>name:alias</code>
     * in Docker links. Up to 255 letters (uppercase and lowercase), numbers,
     * underscores, and hyphens are allowed. For more information about linking Docker
     * containers, go to <a href="https://docs.docker.com/network/links/">Legacy
     * container links</a> in the Docker documentation. This parameter maps to
     * <code>Links</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--link</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter is not supported for Windows
     * containers.</p>   <p>Containers that are collocated on a
     * single container instance may be able to communicate with each other without
     * requiring links or host port mappings. Network isolation is achieved on the
     * container instance using security groups and VPC settings.</p> 
     */
    inline ContainerDefinition& AddLinks(const char* value) { m_linksHasBeenSet = true; m_links.push_back(value); return *this; }


    /**
     * <p>The list of port mappings for the container. Port mappings allow containers
     * to access ports on the host container instance to send or receive traffic.</p>
     * <p>For task definitions that use the <code>awsvpc</code> network mode, only
     * specify the <code>containerPort</code>. The <code>hostPort</code> can be left
     * blank or it must be the same value as the <code>containerPort</code>.</p>
     * <p>Port mappings on Windows use the <code>NetNAT</code> gateway address rather
     * than <code>localhost</code>. There's no loopback for port mappings on Windows,
     * so you can't access a container's mapped port from the host itself. </p> <p>This
     * parameter maps to <code>PortBindings</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--publish</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. If the network mode of a task definition is set to <code>none</code>,
     * then you can't specify port mappings. If the network mode of a task definition
     * is set to <code>host</code>, then host ports must either be undefined or they
     * must match the container port in the port mapping.</p>  <p>After a task
     * reaches the <code>RUNNING</code> status, manual and automatic host and container
     * port assignments are visible in the <b>Network Bindings</b> section of a
     * container description for a selected task in the Amazon ECS console. The
     * assignments are also visible in the <code>networkBindings</code> section
     * <a>DescribeTasks</a> responses.</p> 
     */
    inline const Aws::Vector<PortMapping>& GetPortMappings() const{ return m_portMappings; }

    /**
     * <p>The list of port mappings for the container. Port mappings allow containers
     * to access ports on the host container instance to send or receive traffic.</p>
     * <p>For task definitions that use the <code>awsvpc</code> network mode, only
     * specify the <code>containerPort</code>. The <code>hostPort</code> can be left
     * blank or it must be the same value as the <code>containerPort</code>.</p>
     * <p>Port mappings on Windows use the <code>NetNAT</code> gateway address rather
     * than <code>localhost</code>. There's no loopback for port mappings on Windows,
     * so you can't access a container's mapped port from the host itself. </p> <p>This
     * parameter maps to <code>PortBindings</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--publish</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. If the network mode of a task definition is set to <code>none</code>,
     * then you can't specify port mappings. If the network mode of a task definition
     * is set to <code>host</code>, then host ports must either be undefined or they
     * must match the container port in the port mapping.</p>  <p>After a task
     * reaches the <code>RUNNING</code> status, manual and automatic host and container
     * port assignments are visible in the <b>Network Bindings</b> section of a
     * container description for a selected task in the Amazon ECS console. The
     * assignments are also visible in the <code>networkBindings</code> section
     * <a>DescribeTasks</a> responses.</p> 
     */
    inline bool PortMappingsHasBeenSet() const { return m_portMappingsHasBeenSet; }

    /**
     * <p>The list of port mappings for the container. Port mappings allow containers
     * to access ports on the host container instance to send or receive traffic.</p>
     * <p>For task definitions that use the <code>awsvpc</code> network mode, only
     * specify the <code>containerPort</code>. The <code>hostPort</code> can be left
     * blank or it must be the same value as the <code>containerPort</code>.</p>
     * <p>Port mappings on Windows use the <code>NetNAT</code> gateway address rather
     * than <code>localhost</code>. There's no loopback for port mappings on Windows,
     * so you can't access a container's mapped port from the host itself. </p> <p>This
     * parameter maps to <code>PortBindings</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--publish</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. If the network mode of a task definition is set to <code>none</code>,
     * then you can't specify port mappings. If the network mode of a task definition
     * is set to <code>host</code>, then host ports must either be undefined or they
     * must match the container port in the port mapping.</p>  <p>After a task
     * reaches the <code>RUNNING</code> status, manual and automatic host and container
     * port assignments are visible in the <b>Network Bindings</b> section of a
     * container description for a selected task in the Amazon ECS console. The
     * assignments are also visible in the <code>networkBindings</code> section
     * <a>DescribeTasks</a> responses.</p> 
     */
    inline void SetPortMappings(const Aws::Vector<PortMapping>& value) { m_portMappingsHasBeenSet = true; m_portMappings = value; }

    /**
     * <p>The list of port mappings for the container. Port mappings allow containers
     * to access ports on the host container instance to send or receive traffic.</p>
     * <p>For task definitions that use the <code>awsvpc</code> network mode, only
     * specify the <code>containerPort</code>. The <code>hostPort</code> can be left
     * blank or it must be the same value as the <code>containerPort</code>.</p>
     * <p>Port mappings on Windows use the <code>NetNAT</code> gateway address rather
     * than <code>localhost</code>. There's no loopback for port mappings on Windows,
     * so you can't access a container's mapped port from the host itself. </p> <p>This
     * parameter maps to <code>PortBindings</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--publish</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. If the network mode of a task definition is set to <code>none</code>,
     * then you can't specify port mappings. If the network mode of a task definition
     * is set to <code>host</code>, then host ports must either be undefined or they
     * must match the container port in the port mapping.</p>  <p>After a task
     * reaches the <code>RUNNING</code> status, manual and automatic host and container
     * port assignments are visible in the <b>Network Bindings</b> section of a
     * container description for a selected task in the Amazon ECS console. The
     * assignments are also visible in the <code>networkBindings</code> section
     * <a>DescribeTasks</a> responses.</p> 
     */
    inline void SetPortMappings(Aws::Vector<PortMapping>&& value) { m_portMappingsHasBeenSet = true; m_portMappings = std::move(value); }

    /**
     * <p>The list of port mappings for the container. Port mappings allow containers
     * to access ports on the host container instance to send or receive traffic.</p>
     * <p>For task definitions that use the <code>awsvpc</code> network mode, only
     * specify the <code>containerPort</code>. The <code>hostPort</code> can be left
     * blank or it must be the same value as the <code>containerPort</code>.</p>
     * <p>Port mappings on Windows use the <code>NetNAT</code> gateway address rather
     * than <code>localhost</code>. There's no loopback for port mappings on Windows,
     * so you can't access a container's mapped port from the host itself. </p> <p>This
     * parameter maps to <code>PortBindings</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--publish</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. If the network mode of a task definition is set to <code>none</code>,
     * then you can't specify port mappings. If the network mode of a task definition
     * is set to <code>host</code>, then host ports must either be undefined or they
     * must match the container port in the port mapping.</p>  <p>After a task
     * reaches the <code>RUNNING</code> status, manual and automatic host and container
     * port assignments are visible in the <b>Network Bindings</b> section of a
     * container description for a selected task in the Amazon ECS console. The
     * assignments are also visible in the <code>networkBindings</code> section
     * <a>DescribeTasks</a> responses.</p> 
     */
    inline ContainerDefinition& WithPortMappings(const Aws::Vector<PortMapping>& value) { SetPortMappings(value); return *this;}

    /**
     * <p>The list of port mappings for the container. Port mappings allow containers
     * to access ports on the host container instance to send or receive traffic.</p>
     * <p>For task definitions that use the <code>awsvpc</code> network mode, only
     * specify the <code>containerPort</code>. The <code>hostPort</code> can be left
     * blank or it must be the same value as the <code>containerPort</code>.</p>
     * <p>Port mappings on Windows use the <code>NetNAT</code> gateway address rather
     * than <code>localhost</code>. There's no loopback for port mappings on Windows,
     * so you can't access a container's mapped port from the host itself. </p> <p>This
     * parameter maps to <code>PortBindings</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--publish</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. If the network mode of a task definition is set to <code>none</code>,
     * then you can't specify port mappings. If the network mode of a task definition
     * is set to <code>host</code>, then host ports must either be undefined or they
     * must match the container port in the port mapping.</p>  <p>After a task
     * reaches the <code>RUNNING</code> status, manual and automatic host and container
     * port assignments are visible in the <b>Network Bindings</b> section of a
     * container description for a selected task in the Amazon ECS console. The
     * assignments are also visible in the <code>networkBindings</code> section
     * <a>DescribeTasks</a> responses.</p> 
     */
    inline ContainerDefinition& WithPortMappings(Aws::Vector<PortMapping>&& value) { SetPortMappings(std::move(value)); return *this;}

    /**
     * <p>The list of port mappings for the container. Port mappings allow containers
     * to access ports on the host container instance to send or receive traffic.</p>
     * <p>For task definitions that use the <code>awsvpc</code> network mode, only
     * specify the <code>containerPort</code>. The <code>hostPort</code> can be left
     * blank or it must be the same value as the <code>containerPort</code>.</p>
     * <p>Port mappings on Windows use the <code>NetNAT</code> gateway address rather
     * than <code>localhost</code>. There's no loopback for port mappings on Windows,
     * so you can't access a container's mapped port from the host itself. </p> <p>This
     * parameter maps to <code>PortBindings</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--publish</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. If the network mode of a task definition is set to <code>none</code>,
     * then you can't specify port mappings. If the network mode of a task definition
     * is set to <code>host</code>, then host ports must either be undefined or they
     * must match the container port in the port mapping.</p>  <p>After a task
     * reaches the <code>RUNNING</code> status, manual and automatic host and container
     * port assignments are visible in the <b>Network Bindings</b> section of a
     * container description for a selected task in the Amazon ECS console. The
     * assignments are also visible in the <code>networkBindings</code> section
     * <a>DescribeTasks</a> responses.</p> 
     */
    inline ContainerDefinition& AddPortMappings(const PortMapping& value) { m_portMappingsHasBeenSet = true; m_portMappings.push_back(value); return *this; }

    /**
     * <p>The list of port mappings for the container. Port mappings allow containers
     * to access ports on the host container instance to send or receive traffic.</p>
     * <p>For task definitions that use the <code>awsvpc</code> network mode, only
     * specify the <code>containerPort</code>. The <code>hostPort</code> can be left
     * blank or it must be the same value as the <code>containerPort</code>.</p>
     * <p>Port mappings on Windows use the <code>NetNAT</code> gateway address rather
     * than <code>localhost</code>. There's no loopback for port mappings on Windows,
     * so you can't access a container's mapped port from the host itself. </p> <p>This
     * parameter maps to <code>PortBindings</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--publish</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. If the network mode of a task definition is set to <code>none</code>,
     * then you can't specify port mappings. If the network mode of a task definition
     * is set to <code>host</code>, then host ports must either be undefined or they
     * must match the container port in the port mapping.</p>  <p>After a task
     * reaches the <code>RUNNING</code> status, manual and automatic host and container
     * port assignments are visible in the <b>Network Bindings</b> section of a
     * container description for a selected task in the Amazon ECS console. The
     * assignments are also visible in the <code>networkBindings</code> section
     * <a>DescribeTasks</a> responses.</p> 
     */
    inline ContainerDefinition& AddPortMappings(PortMapping&& value) { m_portMappingsHasBeenSet = true; m_portMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>If the <code>essential</code> parameter of a container is marked as
     * <code>true</code>, and that container fails or stops for any reason, all other
     * containers that are part of the task are stopped. If the <code>essential</code>
     * parameter of a container is marked as <code>false</code>, its failure doesn't
     * affect the rest of the containers in a task. If this parameter is omitted, a
     * container is assumed to be essential.</p> <p>All tasks must have at least one
     * essential container. If you have an application that's composed of multiple
     * containers, group containers that are used for a common purpose into components,
     * and separate the different components into multiple task definitions. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/application_architecture.html">Application
     * Architecture</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline bool GetEssential() const{ return m_essential; }

    /**
     * <p>If the <code>essential</code> parameter of a container is marked as
     * <code>true</code>, and that container fails or stops for any reason, all other
     * containers that are part of the task are stopped. If the <code>essential</code>
     * parameter of a container is marked as <code>false</code>, its failure doesn't
     * affect the rest of the containers in a task. If this parameter is omitted, a
     * container is assumed to be essential.</p> <p>All tasks must have at least one
     * essential container. If you have an application that's composed of multiple
     * containers, group containers that are used for a common purpose into components,
     * and separate the different components into multiple task definitions. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/application_architecture.html">Application
     * Architecture</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline bool EssentialHasBeenSet() const { return m_essentialHasBeenSet; }

    /**
     * <p>If the <code>essential</code> parameter of a container is marked as
     * <code>true</code>, and that container fails or stops for any reason, all other
     * containers that are part of the task are stopped. If the <code>essential</code>
     * parameter of a container is marked as <code>false</code>, its failure doesn't
     * affect the rest of the containers in a task. If this parameter is omitted, a
     * container is assumed to be essential.</p> <p>All tasks must have at least one
     * essential container. If you have an application that's composed of multiple
     * containers, group containers that are used for a common purpose into components,
     * and separate the different components into multiple task definitions. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/application_architecture.html">Application
     * Architecture</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetEssential(bool value) { m_essentialHasBeenSet = true; m_essential = value; }

    /**
     * <p>If the <code>essential</code> parameter of a container is marked as
     * <code>true</code>, and that container fails or stops for any reason, all other
     * containers that are part of the task are stopped. If the <code>essential</code>
     * parameter of a container is marked as <code>false</code>, its failure doesn't
     * affect the rest of the containers in a task. If this parameter is omitted, a
     * container is assumed to be essential.</p> <p>All tasks must have at least one
     * essential container. If you have an application that's composed of multiple
     * containers, group containers that are used for a common purpose into components,
     * and separate the different components into multiple task definitions. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/application_architecture.html">Application
     * Architecture</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline ContainerDefinition& WithEssential(bool value) { SetEssential(value); return *this;}


    /**
     *  <p>Early versions of the Amazon ECS container agent don't properly
     * handle <code>entryPoint</code> parameters. If you have problems using
     * <code>entryPoint</code>, update your container agent or enter your commands and
     * arguments as <code>command</code> array items instead.</p>  <p>The
     * entry point that's passed to the container. This parameter maps to
     * <code>Entrypoint</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--entrypoint</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. For more information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#entrypoint">https://docs.docker.com/engine/reference/builder/#entrypoint</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEntryPoint() const{ return m_entryPoint; }

    /**
     *  <p>Early versions of the Amazon ECS container agent don't properly
     * handle <code>entryPoint</code> parameters. If you have problems using
     * <code>entryPoint</code>, update your container agent or enter your commands and
     * arguments as <code>command</code> array items instead.</p>  <p>The
     * entry point that's passed to the container. This parameter maps to
     * <code>Entrypoint</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--entrypoint</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. For more information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#entrypoint">https://docs.docker.com/engine/reference/builder/#entrypoint</a>.</p>
     */
    inline bool EntryPointHasBeenSet() const { return m_entryPointHasBeenSet; }

    /**
     *  <p>Early versions of the Amazon ECS container agent don't properly
     * handle <code>entryPoint</code> parameters. If you have problems using
     * <code>entryPoint</code>, update your container agent or enter your commands and
     * arguments as <code>command</code> array items instead.</p>  <p>The
     * entry point that's passed to the container. This parameter maps to
     * <code>Entrypoint</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--entrypoint</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. For more information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#entrypoint">https://docs.docker.com/engine/reference/builder/#entrypoint</a>.</p>
     */
    inline void SetEntryPoint(const Aws::Vector<Aws::String>& value) { m_entryPointHasBeenSet = true; m_entryPoint = value; }

    /**
     *  <p>Early versions of the Amazon ECS container agent don't properly
     * handle <code>entryPoint</code> parameters. If you have problems using
     * <code>entryPoint</code>, update your container agent or enter your commands and
     * arguments as <code>command</code> array items instead.</p>  <p>The
     * entry point that's passed to the container. This parameter maps to
     * <code>Entrypoint</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--entrypoint</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. For more information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#entrypoint">https://docs.docker.com/engine/reference/builder/#entrypoint</a>.</p>
     */
    inline void SetEntryPoint(Aws::Vector<Aws::String>&& value) { m_entryPointHasBeenSet = true; m_entryPoint = std::move(value); }

    /**
     *  <p>Early versions of the Amazon ECS container agent don't properly
     * handle <code>entryPoint</code> parameters. If you have problems using
     * <code>entryPoint</code>, update your container agent or enter your commands and
     * arguments as <code>command</code> array items instead.</p>  <p>The
     * entry point that's passed to the container. This parameter maps to
     * <code>Entrypoint</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--entrypoint</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. For more information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#entrypoint">https://docs.docker.com/engine/reference/builder/#entrypoint</a>.</p>
     */
    inline ContainerDefinition& WithEntryPoint(const Aws::Vector<Aws::String>& value) { SetEntryPoint(value); return *this;}

    /**
     *  <p>Early versions of the Amazon ECS container agent don't properly
     * handle <code>entryPoint</code> parameters. If you have problems using
     * <code>entryPoint</code>, update your container agent or enter your commands and
     * arguments as <code>command</code> array items instead.</p>  <p>The
     * entry point that's passed to the container. This parameter maps to
     * <code>Entrypoint</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--entrypoint</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. For more information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#entrypoint">https://docs.docker.com/engine/reference/builder/#entrypoint</a>.</p>
     */
    inline ContainerDefinition& WithEntryPoint(Aws::Vector<Aws::String>&& value) { SetEntryPoint(std::move(value)); return *this;}

    /**
     *  <p>Early versions of the Amazon ECS container agent don't properly
     * handle <code>entryPoint</code> parameters. If you have problems using
     * <code>entryPoint</code>, update your container agent or enter your commands and
     * arguments as <code>command</code> array items instead.</p>  <p>The
     * entry point that's passed to the container. This parameter maps to
     * <code>Entrypoint</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--entrypoint</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. For more information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#entrypoint">https://docs.docker.com/engine/reference/builder/#entrypoint</a>.</p>
     */
    inline ContainerDefinition& AddEntryPoint(const Aws::String& value) { m_entryPointHasBeenSet = true; m_entryPoint.push_back(value); return *this; }

    /**
     *  <p>Early versions of the Amazon ECS container agent don't properly
     * handle <code>entryPoint</code> parameters. If you have problems using
     * <code>entryPoint</code>, update your container agent or enter your commands and
     * arguments as <code>command</code> array items instead.</p>  <p>The
     * entry point that's passed to the container. This parameter maps to
     * <code>Entrypoint</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--entrypoint</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. For more information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#entrypoint">https://docs.docker.com/engine/reference/builder/#entrypoint</a>.</p>
     */
    inline ContainerDefinition& AddEntryPoint(Aws::String&& value) { m_entryPointHasBeenSet = true; m_entryPoint.push_back(std::move(value)); return *this; }

    /**
     *  <p>Early versions of the Amazon ECS container agent don't properly
     * handle <code>entryPoint</code> parameters. If you have problems using
     * <code>entryPoint</code>, update your container agent or enter your commands and
     * arguments as <code>command</code> array items instead.</p>  <p>The
     * entry point that's passed to the container. This parameter maps to
     * <code>Entrypoint</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--entrypoint</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. For more information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#entrypoint">https://docs.docker.com/engine/reference/builder/#entrypoint</a>.</p>
     */
    inline ContainerDefinition& AddEntryPoint(const char* value) { m_entryPointHasBeenSet = true; m_entryPoint.push_back(value); return *this; }


    /**
     * <p>The command that's passed to the container. This parameter maps to
     * <code>Cmd</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>COMMAND</code> parameter to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. For more information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">https://docs.docker.com/engine/reference/builder/#cmd</a>.
     * If there are multiple arguments, each argument is a separated string in the
     * array.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCommand() const{ return m_command; }

    /**
     * <p>The command that's passed to the container. This parameter maps to
     * <code>Cmd</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>COMMAND</code> parameter to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. For more information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">https://docs.docker.com/engine/reference/builder/#cmd</a>.
     * If there are multiple arguments, each argument is a separated string in the
     * array.</p>
     */
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }

    /**
     * <p>The command that's passed to the container. This parameter maps to
     * <code>Cmd</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>COMMAND</code> parameter to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. For more information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">https://docs.docker.com/engine/reference/builder/#cmd</a>.
     * If there are multiple arguments, each argument is a separated string in the
     * array.</p>
     */
    inline void SetCommand(const Aws::Vector<Aws::String>& value) { m_commandHasBeenSet = true; m_command = value; }

    /**
     * <p>The command that's passed to the container. This parameter maps to
     * <code>Cmd</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>COMMAND</code> parameter to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. For more information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">https://docs.docker.com/engine/reference/builder/#cmd</a>.
     * If there are multiple arguments, each argument is a separated string in the
     * array.</p>
     */
    inline void SetCommand(Aws::Vector<Aws::String>&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }

    /**
     * <p>The command that's passed to the container. This parameter maps to
     * <code>Cmd</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>COMMAND</code> parameter to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. For more information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">https://docs.docker.com/engine/reference/builder/#cmd</a>.
     * If there are multiple arguments, each argument is a separated string in the
     * array.</p>
     */
    inline ContainerDefinition& WithCommand(const Aws::Vector<Aws::String>& value) { SetCommand(value); return *this;}

    /**
     * <p>The command that's passed to the container. This parameter maps to
     * <code>Cmd</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>COMMAND</code> parameter to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. For more information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">https://docs.docker.com/engine/reference/builder/#cmd</a>.
     * If there are multiple arguments, each argument is a separated string in the
     * array.</p>
     */
    inline ContainerDefinition& WithCommand(Aws::Vector<Aws::String>&& value) { SetCommand(std::move(value)); return *this;}

    /**
     * <p>The command that's passed to the container. This parameter maps to
     * <code>Cmd</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>COMMAND</code> parameter to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. For more information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">https://docs.docker.com/engine/reference/builder/#cmd</a>.
     * If there are multiple arguments, each argument is a separated string in the
     * array.</p>
     */
    inline ContainerDefinition& AddCommand(const Aws::String& value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }

    /**
     * <p>The command that's passed to the container. This parameter maps to
     * <code>Cmd</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>COMMAND</code> parameter to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. For more information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">https://docs.docker.com/engine/reference/builder/#cmd</a>.
     * If there are multiple arguments, each argument is a separated string in the
     * array.</p>
     */
    inline ContainerDefinition& AddCommand(Aws::String&& value) { m_commandHasBeenSet = true; m_command.push_back(std::move(value)); return *this; }

    /**
     * <p>The command that's passed to the container. This parameter maps to
     * <code>Cmd</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>COMMAND</code> parameter to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. For more information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">https://docs.docker.com/engine/reference/builder/#cmd</a>.
     * If there are multiple arguments, each argument is a separated string in the
     * array.</p>
     */
    inline ContainerDefinition& AddCommand(const char* value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }


    /**
     * <p>The environment variables to pass to a container. This parameter maps to
     * <code>Env</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--env</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>We don't recommend that you use plaintext
     * environment variables for sensitive information, such as credential data.</p>
     * 
     */
    inline const Aws::Vector<KeyValuePair>& GetEnvironment() const{ return m_environment; }

    /**
     * <p>The environment variables to pass to a container. This parameter maps to
     * <code>Env</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--env</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>We don't recommend that you use plaintext
     * environment variables for sensitive information, such as credential data.</p>
     * 
     */
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }

    /**
     * <p>The environment variables to pass to a container. This parameter maps to
     * <code>Env</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--env</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>We don't recommend that you use plaintext
     * environment variables for sensitive information, such as credential data.</p>
     * 
     */
    inline void SetEnvironment(const Aws::Vector<KeyValuePair>& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>The environment variables to pass to a container. This parameter maps to
     * <code>Env</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--env</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>We don't recommend that you use plaintext
     * environment variables for sensitive information, such as credential data.</p>
     * 
     */
    inline void SetEnvironment(Aws::Vector<KeyValuePair>&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }

    /**
     * <p>The environment variables to pass to a container. This parameter maps to
     * <code>Env</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--env</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>We don't recommend that you use plaintext
     * environment variables for sensitive information, such as credential data.</p>
     * 
     */
    inline ContainerDefinition& WithEnvironment(const Aws::Vector<KeyValuePair>& value) { SetEnvironment(value); return *this;}

    /**
     * <p>The environment variables to pass to a container. This parameter maps to
     * <code>Env</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--env</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>We don't recommend that you use plaintext
     * environment variables for sensitive information, such as credential data.</p>
     * 
     */
    inline ContainerDefinition& WithEnvironment(Aws::Vector<KeyValuePair>&& value) { SetEnvironment(std::move(value)); return *this;}

    /**
     * <p>The environment variables to pass to a container. This parameter maps to
     * <code>Env</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--env</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>We don't recommend that you use plaintext
     * environment variables for sensitive information, such as credential data.</p>
     * 
     */
    inline ContainerDefinition& AddEnvironment(const KeyValuePair& value) { m_environmentHasBeenSet = true; m_environment.push_back(value); return *this; }

    /**
     * <p>The environment variables to pass to a container. This parameter maps to
     * <code>Env</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--env</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>We don't recommend that you use plaintext
     * environment variables for sensitive information, such as credential data.</p>
     * 
     */
    inline ContainerDefinition& AddEnvironment(KeyValuePair&& value) { m_environmentHasBeenSet = true; m_environment.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of files containing the environment variables to pass to a container.
     * This parameter maps to the <code>--env-file</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <p>You can specify up to ten environment files. The file must have
     * a <code>.env</code> file extension. Each line in an environment file contains an
     * environment variable in <code>VARIABLE=VALUE</code> format. Lines beginning with
     * <code>#</code> are treated as comments and are ignored. For more information
     * about the environment variable file syntax, see <a
     * href="https://docs.docker.com/compose/env-file/">Declare default environment
     * variables in file</a>.</p> <p>If there are environment variables specified using
     * the <code>environment</code> parameter in a container definition, they take
     * precedence over the variables contained within an environment file. If multiple
     * environment files are specified that contain the same variable, they're
     * processed from the top down. We recommend that you use unique variable names.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/taskdef-envfiles.html">Specifying
     * Environment Variables</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::Vector<EnvironmentFile>& GetEnvironmentFiles() const{ return m_environmentFiles; }

    /**
     * <p>A list of files containing the environment variables to pass to a container.
     * This parameter maps to the <code>--env-file</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <p>You can specify up to ten environment files. The file must have
     * a <code>.env</code> file extension. Each line in an environment file contains an
     * environment variable in <code>VARIABLE=VALUE</code> format. Lines beginning with
     * <code>#</code> are treated as comments and are ignored. For more information
     * about the environment variable file syntax, see <a
     * href="https://docs.docker.com/compose/env-file/">Declare default environment
     * variables in file</a>.</p> <p>If there are environment variables specified using
     * the <code>environment</code> parameter in a container definition, they take
     * precedence over the variables contained within an environment file. If multiple
     * environment files are specified that contain the same variable, they're
     * processed from the top down. We recommend that you use unique variable names.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/taskdef-envfiles.html">Specifying
     * Environment Variables</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline bool EnvironmentFilesHasBeenSet() const { return m_environmentFilesHasBeenSet; }

    /**
     * <p>A list of files containing the environment variables to pass to a container.
     * This parameter maps to the <code>--env-file</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <p>You can specify up to ten environment files. The file must have
     * a <code>.env</code> file extension. Each line in an environment file contains an
     * environment variable in <code>VARIABLE=VALUE</code> format. Lines beginning with
     * <code>#</code> are treated as comments and are ignored. For more information
     * about the environment variable file syntax, see <a
     * href="https://docs.docker.com/compose/env-file/">Declare default environment
     * variables in file</a>.</p> <p>If there are environment variables specified using
     * the <code>environment</code> parameter in a container definition, they take
     * precedence over the variables contained within an environment file. If multiple
     * environment files are specified that contain the same variable, they're
     * processed from the top down. We recommend that you use unique variable names.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/taskdef-envfiles.html">Specifying
     * Environment Variables</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetEnvironmentFiles(const Aws::Vector<EnvironmentFile>& value) { m_environmentFilesHasBeenSet = true; m_environmentFiles = value; }

    /**
     * <p>A list of files containing the environment variables to pass to a container.
     * This parameter maps to the <code>--env-file</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <p>You can specify up to ten environment files. The file must have
     * a <code>.env</code> file extension. Each line in an environment file contains an
     * environment variable in <code>VARIABLE=VALUE</code> format. Lines beginning with
     * <code>#</code> are treated as comments and are ignored. For more information
     * about the environment variable file syntax, see <a
     * href="https://docs.docker.com/compose/env-file/">Declare default environment
     * variables in file</a>.</p> <p>If there are environment variables specified using
     * the <code>environment</code> parameter in a container definition, they take
     * precedence over the variables contained within an environment file. If multiple
     * environment files are specified that contain the same variable, they're
     * processed from the top down. We recommend that you use unique variable names.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/taskdef-envfiles.html">Specifying
     * Environment Variables</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetEnvironmentFiles(Aws::Vector<EnvironmentFile>&& value) { m_environmentFilesHasBeenSet = true; m_environmentFiles = std::move(value); }

    /**
     * <p>A list of files containing the environment variables to pass to a container.
     * This parameter maps to the <code>--env-file</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <p>You can specify up to ten environment files. The file must have
     * a <code>.env</code> file extension. Each line in an environment file contains an
     * environment variable in <code>VARIABLE=VALUE</code> format. Lines beginning with
     * <code>#</code> are treated as comments and are ignored. For more information
     * about the environment variable file syntax, see <a
     * href="https://docs.docker.com/compose/env-file/">Declare default environment
     * variables in file</a>.</p> <p>If there are environment variables specified using
     * the <code>environment</code> parameter in a container definition, they take
     * precedence over the variables contained within an environment file. If multiple
     * environment files are specified that contain the same variable, they're
     * processed from the top down. We recommend that you use unique variable names.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/taskdef-envfiles.html">Specifying
     * Environment Variables</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline ContainerDefinition& WithEnvironmentFiles(const Aws::Vector<EnvironmentFile>& value) { SetEnvironmentFiles(value); return *this;}

    /**
     * <p>A list of files containing the environment variables to pass to a container.
     * This parameter maps to the <code>--env-file</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <p>You can specify up to ten environment files. The file must have
     * a <code>.env</code> file extension. Each line in an environment file contains an
     * environment variable in <code>VARIABLE=VALUE</code> format. Lines beginning with
     * <code>#</code> are treated as comments and are ignored. For more information
     * about the environment variable file syntax, see <a
     * href="https://docs.docker.com/compose/env-file/">Declare default environment
     * variables in file</a>.</p> <p>If there are environment variables specified using
     * the <code>environment</code> parameter in a container definition, they take
     * precedence over the variables contained within an environment file. If multiple
     * environment files are specified that contain the same variable, they're
     * processed from the top down. We recommend that you use unique variable names.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/taskdef-envfiles.html">Specifying
     * Environment Variables</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline ContainerDefinition& WithEnvironmentFiles(Aws::Vector<EnvironmentFile>&& value) { SetEnvironmentFiles(std::move(value)); return *this;}

    /**
     * <p>A list of files containing the environment variables to pass to a container.
     * This parameter maps to the <code>--env-file</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <p>You can specify up to ten environment files. The file must have
     * a <code>.env</code> file extension. Each line in an environment file contains an
     * environment variable in <code>VARIABLE=VALUE</code> format. Lines beginning with
     * <code>#</code> are treated as comments and are ignored. For more information
     * about the environment variable file syntax, see <a
     * href="https://docs.docker.com/compose/env-file/">Declare default environment
     * variables in file</a>.</p> <p>If there are environment variables specified using
     * the <code>environment</code> parameter in a container definition, they take
     * precedence over the variables contained within an environment file. If multiple
     * environment files are specified that contain the same variable, they're
     * processed from the top down. We recommend that you use unique variable names.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/taskdef-envfiles.html">Specifying
     * Environment Variables</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline ContainerDefinition& AddEnvironmentFiles(const EnvironmentFile& value) { m_environmentFilesHasBeenSet = true; m_environmentFiles.push_back(value); return *this; }

    /**
     * <p>A list of files containing the environment variables to pass to a container.
     * This parameter maps to the <code>--env-file</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <p>You can specify up to ten environment files. The file must have
     * a <code>.env</code> file extension. Each line in an environment file contains an
     * environment variable in <code>VARIABLE=VALUE</code> format. Lines beginning with
     * <code>#</code> are treated as comments and are ignored. For more information
     * about the environment variable file syntax, see <a
     * href="https://docs.docker.com/compose/env-file/">Declare default environment
     * variables in file</a>.</p> <p>If there are environment variables specified using
     * the <code>environment</code> parameter in a container definition, they take
     * precedence over the variables contained within an environment file. If multiple
     * environment files are specified that contain the same variable, they're
     * processed from the top down. We recommend that you use unique variable names.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/taskdef-envfiles.html">Specifying
     * Environment Variables</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline ContainerDefinition& AddEnvironmentFiles(EnvironmentFile&& value) { m_environmentFilesHasBeenSet = true; m_environmentFiles.push_back(std::move(value)); return *this; }


    /**
     * <p>The mount points for data volumes in your container.</p> <p>This parameter
     * maps to <code>Volumes</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--volume</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <p>Windows containers can mount whole directories on the same drive
     * as <code>$env:ProgramData</code>. Windows containers can't mount directories on
     * a different drive, and mount point can't be across drives.</p>
     */
    inline const Aws::Vector<MountPoint>& GetMountPoints() const{ return m_mountPoints; }

    /**
     * <p>The mount points for data volumes in your container.</p> <p>This parameter
     * maps to <code>Volumes</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--volume</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <p>Windows containers can mount whole directories on the same drive
     * as <code>$env:ProgramData</code>. Windows containers can't mount directories on
     * a different drive, and mount point can't be across drives.</p>
     */
    inline bool MountPointsHasBeenSet() const { return m_mountPointsHasBeenSet; }

    /**
     * <p>The mount points for data volumes in your container.</p> <p>This parameter
     * maps to <code>Volumes</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--volume</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <p>Windows containers can mount whole directories on the same drive
     * as <code>$env:ProgramData</code>. Windows containers can't mount directories on
     * a different drive, and mount point can't be across drives.</p>
     */
    inline void SetMountPoints(const Aws::Vector<MountPoint>& value) { m_mountPointsHasBeenSet = true; m_mountPoints = value; }

    /**
     * <p>The mount points for data volumes in your container.</p> <p>This parameter
     * maps to <code>Volumes</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--volume</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <p>Windows containers can mount whole directories on the same drive
     * as <code>$env:ProgramData</code>. Windows containers can't mount directories on
     * a different drive, and mount point can't be across drives.</p>
     */
    inline void SetMountPoints(Aws::Vector<MountPoint>&& value) { m_mountPointsHasBeenSet = true; m_mountPoints = std::move(value); }

    /**
     * <p>The mount points for data volumes in your container.</p> <p>This parameter
     * maps to <code>Volumes</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--volume</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <p>Windows containers can mount whole directories on the same drive
     * as <code>$env:ProgramData</code>. Windows containers can't mount directories on
     * a different drive, and mount point can't be across drives.</p>
     */
    inline ContainerDefinition& WithMountPoints(const Aws::Vector<MountPoint>& value) { SetMountPoints(value); return *this;}

    /**
     * <p>The mount points for data volumes in your container.</p> <p>This parameter
     * maps to <code>Volumes</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--volume</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <p>Windows containers can mount whole directories on the same drive
     * as <code>$env:ProgramData</code>. Windows containers can't mount directories on
     * a different drive, and mount point can't be across drives.</p>
     */
    inline ContainerDefinition& WithMountPoints(Aws::Vector<MountPoint>&& value) { SetMountPoints(std::move(value)); return *this;}

    /**
     * <p>The mount points for data volumes in your container.</p> <p>This parameter
     * maps to <code>Volumes</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--volume</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <p>Windows containers can mount whole directories on the same drive
     * as <code>$env:ProgramData</code>. Windows containers can't mount directories on
     * a different drive, and mount point can't be across drives.</p>
     */
    inline ContainerDefinition& AddMountPoints(const MountPoint& value) { m_mountPointsHasBeenSet = true; m_mountPoints.push_back(value); return *this; }

    /**
     * <p>The mount points for data volumes in your container.</p> <p>This parameter
     * maps to <code>Volumes</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--volume</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <p>Windows containers can mount whole directories on the same drive
     * as <code>$env:ProgramData</code>. Windows containers can't mount directories on
     * a different drive, and mount point can't be across drives.</p>
     */
    inline ContainerDefinition& AddMountPoints(MountPoint&& value) { m_mountPointsHasBeenSet = true; m_mountPoints.push_back(std::move(value)); return *this; }


    /**
     * <p>Data volumes to mount from another container. This parameter maps to
     * <code>VolumesFrom</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--volumes-from</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>
     */
    inline const Aws::Vector<VolumeFrom>& GetVolumesFrom() const{ return m_volumesFrom; }

    /**
     * <p>Data volumes to mount from another container. This parameter maps to
     * <code>VolumesFrom</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--volumes-from</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>
     */
    inline bool VolumesFromHasBeenSet() const { return m_volumesFromHasBeenSet; }

    /**
     * <p>Data volumes to mount from another container. This parameter maps to
     * <code>VolumesFrom</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--volumes-from</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>
     */
    inline void SetVolumesFrom(const Aws::Vector<VolumeFrom>& value) { m_volumesFromHasBeenSet = true; m_volumesFrom = value; }

    /**
     * <p>Data volumes to mount from another container. This parameter maps to
     * <code>VolumesFrom</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--volumes-from</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>
     */
    inline void SetVolumesFrom(Aws::Vector<VolumeFrom>&& value) { m_volumesFromHasBeenSet = true; m_volumesFrom = std::move(value); }

    /**
     * <p>Data volumes to mount from another container. This parameter maps to
     * <code>VolumesFrom</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--volumes-from</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>
     */
    inline ContainerDefinition& WithVolumesFrom(const Aws::Vector<VolumeFrom>& value) { SetVolumesFrom(value); return *this;}

    /**
     * <p>Data volumes to mount from another container. This parameter maps to
     * <code>VolumesFrom</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--volumes-from</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>
     */
    inline ContainerDefinition& WithVolumesFrom(Aws::Vector<VolumeFrom>&& value) { SetVolumesFrom(std::move(value)); return *this;}

    /**
     * <p>Data volumes to mount from another container. This parameter maps to
     * <code>VolumesFrom</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--volumes-from</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>
     */
    inline ContainerDefinition& AddVolumesFrom(const VolumeFrom& value) { m_volumesFromHasBeenSet = true; m_volumesFrom.push_back(value); return *this; }

    /**
     * <p>Data volumes to mount from another container. This parameter maps to
     * <code>VolumesFrom</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--volumes-from</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>
     */
    inline ContainerDefinition& AddVolumesFrom(VolumeFrom&& value) { m_volumesFromHasBeenSet = true; m_volumesFrom.push_back(std::move(value)); return *this; }


    /**
     * <p>Linux-specific modifications that are applied to the container, such as Linux
     * kernel capabilities. For more information see <a>KernelCapabilities</a>.</p>
     *  <p>This parameter is not supported for Windows containers.</p> 
     */
    inline const LinuxParameters& GetLinuxParameters() const{ return m_linuxParameters; }

    /**
     * <p>Linux-specific modifications that are applied to the container, such as Linux
     * kernel capabilities. For more information see <a>KernelCapabilities</a>.</p>
     *  <p>This parameter is not supported for Windows containers.</p> 
     */
    inline bool LinuxParametersHasBeenSet() const { return m_linuxParametersHasBeenSet; }

    /**
     * <p>Linux-specific modifications that are applied to the container, such as Linux
     * kernel capabilities. For more information see <a>KernelCapabilities</a>.</p>
     *  <p>This parameter is not supported for Windows containers.</p> 
     */
    inline void SetLinuxParameters(const LinuxParameters& value) { m_linuxParametersHasBeenSet = true; m_linuxParameters = value; }

    /**
     * <p>Linux-specific modifications that are applied to the container, such as Linux
     * kernel capabilities. For more information see <a>KernelCapabilities</a>.</p>
     *  <p>This parameter is not supported for Windows containers.</p> 
     */
    inline void SetLinuxParameters(LinuxParameters&& value) { m_linuxParametersHasBeenSet = true; m_linuxParameters = std::move(value); }

    /**
     * <p>Linux-specific modifications that are applied to the container, such as Linux
     * kernel capabilities. For more information see <a>KernelCapabilities</a>.</p>
     *  <p>This parameter is not supported for Windows containers.</p> 
     */
    inline ContainerDefinition& WithLinuxParameters(const LinuxParameters& value) { SetLinuxParameters(value); return *this;}

    /**
     * <p>Linux-specific modifications that are applied to the container, such as Linux
     * kernel capabilities. For more information see <a>KernelCapabilities</a>.</p>
     *  <p>This parameter is not supported for Windows containers.</p> 
     */
    inline ContainerDefinition& WithLinuxParameters(LinuxParameters&& value) { SetLinuxParameters(std::move(value)); return *this;}


    /**
     * <p>The secrets to pass to the container. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data.html">Specifying
     * Sensitive Data</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Secret>& GetSecrets() const{ return m_secrets; }

    /**
     * <p>The secrets to pass to the container. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data.html">Specifying
     * Sensitive Data</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline bool SecretsHasBeenSet() const { return m_secretsHasBeenSet; }

    /**
     * <p>The secrets to pass to the container. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data.html">Specifying
     * Sensitive Data</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetSecrets(const Aws::Vector<Secret>& value) { m_secretsHasBeenSet = true; m_secrets = value; }

    /**
     * <p>The secrets to pass to the container. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data.html">Specifying
     * Sensitive Data</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetSecrets(Aws::Vector<Secret>&& value) { m_secretsHasBeenSet = true; m_secrets = std::move(value); }

    /**
     * <p>The secrets to pass to the container. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data.html">Specifying
     * Sensitive Data</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline ContainerDefinition& WithSecrets(const Aws::Vector<Secret>& value) { SetSecrets(value); return *this;}

    /**
     * <p>The secrets to pass to the container. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data.html">Specifying
     * Sensitive Data</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline ContainerDefinition& WithSecrets(Aws::Vector<Secret>&& value) { SetSecrets(std::move(value)); return *this;}

    /**
     * <p>The secrets to pass to the container. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data.html">Specifying
     * Sensitive Data</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline ContainerDefinition& AddSecrets(const Secret& value) { m_secretsHasBeenSet = true; m_secrets.push_back(value); return *this; }

    /**
     * <p>The secrets to pass to the container. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data.html">Specifying
     * Sensitive Data</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline ContainerDefinition& AddSecrets(Secret&& value) { m_secretsHasBeenSet = true; m_secrets.push_back(std::move(value)); return *this; }


    /**
     * <p>The dependencies defined for container startup and shutdown. A container can
     * contain multiple dependencies on other containers in a task definition. When a
     * dependency is defined for container startup, for container shutdown it is
     * reversed.</p> <p>For tasks using the EC2 launch type, the container instances
     * require at least version 1.26.0 of the container agent to turn on container
     * dependencies. However, we recommend using the latest container agent version.
     * For information about checking your agent version and updating to the latest
     * version, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-update.html">Updating
     * the Amazon ECS Container Agent</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>. If you're using an Amazon ECS-optimized Linux AMI, your
     * instance needs at least version 1.26.0-1 of the <code>ecs-init</code> package.
     * If your container instances are launched from version <code>20190301</code> or
     * later, then they contain the required versions of the container agent and
     * <code>ecs-init</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html">Amazon
     * ECS-optimized Linux AMI</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>For tasks using the Fargate launch type, the task or service
     * requires the following platforms:</p> <ul> <li> <p>Linux platform version
     * <code>1.3.0</code> or later.</p> </li> <li> <p>Windows platform version
     * <code>1.0.0</code> or later.</p> </li> </ul>
     */
    inline const Aws::Vector<ContainerDependency>& GetDependsOn() const{ return m_dependsOn; }

    /**
     * <p>The dependencies defined for container startup and shutdown. A container can
     * contain multiple dependencies on other containers in a task definition. When a
     * dependency is defined for container startup, for container shutdown it is
     * reversed.</p> <p>For tasks using the EC2 launch type, the container instances
     * require at least version 1.26.0 of the container agent to turn on container
     * dependencies. However, we recommend using the latest container agent version.
     * For information about checking your agent version and updating to the latest
     * version, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-update.html">Updating
     * the Amazon ECS Container Agent</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>. If you're using an Amazon ECS-optimized Linux AMI, your
     * instance needs at least version 1.26.0-1 of the <code>ecs-init</code> package.
     * If your container instances are launched from version <code>20190301</code> or
     * later, then they contain the required versions of the container agent and
     * <code>ecs-init</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html">Amazon
     * ECS-optimized Linux AMI</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>For tasks using the Fargate launch type, the task or service
     * requires the following platforms:</p> <ul> <li> <p>Linux platform version
     * <code>1.3.0</code> or later.</p> </li> <li> <p>Windows platform version
     * <code>1.0.0</code> or later.</p> </li> </ul>
     */
    inline bool DependsOnHasBeenSet() const { return m_dependsOnHasBeenSet; }

    /**
     * <p>The dependencies defined for container startup and shutdown. A container can
     * contain multiple dependencies on other containers in a task definition. When a
     * dependency is defined for container startup, for container shutdown it is
     * reversed.</p> <p>For tasks using the EC2 launch type, the container instances
     * require at least version 1.26.0 of the container agent to turn on container
     * dependencies. However, we recommend using the latest container agent version.
     * For information about checking your agent version and updating to the latest
     * version, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-update.html">Updating
     * the Amazon ECS Container Agent</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>. If you're using an Amazon ECS-optimized Linux AMI, your
     * instance needs at least version 1.26.0-1 of the <code>ecs-init</code> package.
     * If your container instances are launched from version <code>20190301</code> or
     * later, then they contain the required versions of the container agent and
     * <code>ecs-init</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html">Amazon
     * ECS-optimized Linux AMI</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>For tasks using the Fargate launch type, the task or service
     * requires the following platforms:</p> <ul> <li> <p>Linux platform version
     * <code>1.3.0</code> or later.</p> </li> <li> <p>Windows platform version
     * <code>1.0.0</code> or later.</p> </li> </ul>
     */
    inline void SetDependsOn(const Aws::Vector<ContainerDependency>& value) { m_dependsOnHasBeenSet = true; m_dependsOn = value; }

    /**
     * <p>The dependencies defined for container startup and shutdown. A container can
     * contain multiple dependencies on other containers in a task definition. When a
     * dependency is defined for container startup, for container shutdown it is
     * reversed.</p> <p>For tasks using the EC2 launch type, the container instances
     * require at least version 1.26.0 of the container agent to turn on container
     * dependencies. However, we recommend using the latest container agent version.
     * For information about checking your agent version and updating to the latest
     * version, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-update.html">Updating
     * the Amazon ECS Container Agent</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>. If you're using an Amazon ECS-optimized Linux AMI, your
     * instance needs at least version 1.26.0-1 of the <code>ecs-init</code> package.
     * If your container instances are launched from version <code>20190301</code> or
     * later, then they contain the required versions of the container agent and
     * <code>ecs-init</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html">Amazon
     * ECS-optimized Linux AMI</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>For tasks using the Fargate launch type, the task or service
     * requires the following platforms:</p> <ul> <li> <p>Linux platform version
     * <code>1.3.0</code> or later.</p> </li> <li> <p>Windows platform version
     * <code>1.0.0</code> or later.</p> </li> </ul>
     */
    inline void SetDependsOn(Aws::Vector<ContainerDependency>&& value) { m_dependsOnHasBeenSet = true; m_dependsOn = std::move(value); }

    /**
     * <p>The dependencies defined for container startup and shutdown. A container can
     * contain multiple dependencies on other containers in a task definition. When a
     * dependency is defined for container startup, for container shutdown it is
     * reversed.</p> <p>For tasks using the EC2 launch type, the container instances
     * require at least version 1.26.0 of the container agent to turn on container
     * dependencies. However, we recommend using the latest container agent version.
     * For information about checking your agent version and updating to the latest
     * version, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-update.html">Updating
     * the Amazon ECS Container Agent</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>. If you're using an Amazon ECS-optimized Linux AMI, your
     * instance needs at least version 1.26.0-1 of the <code>ecs-init</code> package.
     * If your container instances are launched from version <code>20190301</code> or
     * later, then they contain the required versions of the container agent and
     * <code>ecs-init</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html">Amazon
     * ECS-optimized Linux AMI</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>For tasks using the Fargate launch type, the task or service
     * requires the following platforms:</p> <ul> <li> <p>Linux platform version
     * <code>1.3.0</code> or later.</p> </li> <li> <p>Windows platform version
     * <code>1.0.0</code> or later.</p> </li> </ul>
     */
    inline ContainerDefinition& WithDependsOn(const Aws::Vector<ContainerDependency>& value) { SetDependsOn(value); return *this;}

    /**
     * <p>The dependencies defined for container startup and shutdown. A container can
     * contain multiple dependencies on other containers in a task definition. When a
     * dependency is defined for container startup, for container shutdown it is
     * reversed.</p> <p>For tasks using the EC2 launch type, the container instances
     * require at least version 1.26.0 of the container agent to turn on container
     * dependencies. However, we recommend using the latest container agent version.
     * For information about checking your agent version and updating to the latest
     * version, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-update.html">Updating
     * the Amazon ECS Container Agent</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>. If you're using an Amazon ECS-optimized Linux AMI, your
     * instance needs at least version 1.26.0-1 of the <code>ecs-init</code> package.
     * If your container instances are launched from version <code>20190301</code> or
     * later, then they contain the required versions of the container agent and
     * <code>ecs-init</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html">Amazon
     * ECS-optimized Linux AMI</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>For tasks using the Fargate launch type, the task or service
     * requires the following platforms:</p> <ul> <li> <p>Linux platform version
     * <code>1.3.0</code> or later.</p> </li> <li> <p>Windows platform version
     * <code>1.0.0</code> or later.</p> </li> </ul>
     */
    inline ContainerDefinition& WithDependsOn(Aws::Vector<ContainerDependency>&& value) { SetDependsOn(std::move(value)); return *this;}

    /**
     * <p>The dependencies defined for container startup and shutdown. A container can
     * contain multiple dependencies on other containers in a task definition. When a
     * dependency is defined for container startup, for container shutdown it is
     * reversed.</p> <p>For tasks using the EC2 launch type, the container instances
     * require at least version 1.26.0 of the container agent to turn on container
     * dependencies. However, we recommend using the latest container agent version.
     * For information about checking your agent version and updating to the latest
     * version, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-update.html">Updating
     * the Amazon ECS Container Agent</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>. If you're using an Amazon ECS-optimized Linux AMI, your
     * instance needs at least version 1.26.0-1 of the <code>ecs-init</code> package.
     * If your container instances are launched from version <code>20190301</code> or
     * later, then they contain the required versions of the container agent and
     * <code>ecs-init</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html">Amazon
     * ECS-optimized Linux AMI</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>For tasks using the Fargate launch type, the task or service
     * requires the following platforms:</p> <ul> <li> <p>Linux platform version
     * <code>1.3.0</code> or later.</p> </li> <li> <p>Windows platform version
     * <code>1.0.0</code> or later.</p> </li> </ul>
     */
    inline ContainerDefinition& AddDependsOn(const ContainerDependency& value) { m_dependsOnHasBeenSet = true; m_dependsOn.push_back(value); return *this; }

    /**
     * <p>The dependencies defined for container startup and shutdown. A container can
     * contain multiple dependencies on other containers in a task definition. When a
     * dependency is defined for container startup, for container shutdown it is
     * reversed.</p> <p>For tasks using the EC2 launch type, the container instances
     * require at least version 1.26.0 of the container agent to turn on container
     * dependencies. However, we recommend using the latest container agent version.
     * For information about checking your agent version and updating to the latest
     * version, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-update.html">Updating
     * the Amazon ECS Container Agent</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>. If you're using an Amazon ECS-optimized Linux AMI, your
     * instance needs at least version 1.26.0-1 of the <code>ecs-init</code> package.
     * If your container instances are launched from version <code>20190301</code> or
     * later, then they contain the required versions of the container agent and
     * <code>ecs-init</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html">Amazon
     * ECS-optimized Linux AMI</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>For tasks using the Fargate launch type, the task or service
     * requires the following platforms:</p> <ul> <li> <p>Linux platform version
     * <code>1.3.0</code> or later.</p> </li> <li> <p>Windows platform version
     * <code>1.0.0</code> or later.</p> </li> </ul>
     */
    inline ContainerDefinition& AddDependsOn(ContainerDependency&& value) { m_dependsOnHasBeenSet = true; m_dependsOn.push_back(std::move(value)); return *this; }


    /**
     * <p>Time duration (in seconds) to wait before giving up on resolving dependencies
     * for a container. For example, you specify two containers in a task definition
     * with containerA having a dependency on containerB reaching a
     * <code>COMPLETE</code>, <code>SUCCESS</code>, or <code>HEALTHY</code> status. If
     * a <code>startTimeout</code> value is specified for containerB and it doesn't
     * reach the desired status within that time then containerA gives up and not
     * start. This results in the task transitioning to a <code>STOPPED</code>
     * state.</p>  <p>When the <code>ECS_CONTAINER_START_TIMEOUT</code> container
     * agent configuration variable is used, it's enforced independently from this
     * start timeout value.</p>  <p>For tasks using the Fargate launch type, the
     * task or service requires the following platforms:</p> <ul> <li> <p>Linux
     * platform version <code>1.3.0</code> or later.</p> </li> <li> <p>Windows platform
     * version <code>1.0.0</code> or later.</p> </li> </ul> <p>For tasks using the EC2
     * launch type, your container instances require at least version
     * <code>1.26.0</code> of the container agent to use a container start timeout
     * value. However, we recommend using the latest container agent version. For
     * information about checking your agent version and updating to the latest
     * version, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-update.html">Updating
     * the Amazon ECS Container Agent</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>. If you're using an Amazon ECS-optimized Linux AMI, your
     * instance needs at least version <code>1.26.0-1</code> of the
     * <code>ecs-init</code> package. If your container instances are launched from
     * version <code>20190301</code> or later, then they contain the required versions
     * of the container agent and <code>ecs-init</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html">Amazon
     * ECS-optimized Linux AMI</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline int GetStartTimeout() const{ return m_startTimeout; }

    /**
     * <p>Time duration (in seconds) to wait before giving up on resolving dependencies
     * for a container. For example, you specify two containers in a task definition
     * with containerA having a dependency on containerB reaching a
     * <code>COMPLETE</code>, <code>SUCCESS</code>, or <code>HEALTHY</code> status. If
     * a <code>startTimeout</code> value is specified for containerB and it doesn't
     * reach the desired status within that time then containerA gives up and not
     * start. This results in the task transitioning to a <code>STOPPED</code>
     * state.</p>  <p>When the <code>ECS_CONTAINER_START_TIMEOUT</code> container
     * agent configuration variable is used, it's enforced independently from this
     * start timeout value.</p>  <p>For tasks using the Fargate launch type, the
     * task or service requires the following platforms:</p> <ul> <li> <p>Linux
     * platform version <code>1.3.0</code> or later.</p> </li> <li> <p>Windows platform
     * version <code>1.0.0</code> or later.</p> </li> </ul> <p>For tasks using the EC2
     * launch type, your container instances require at least version
     * <code>1.26.0</code> of the container agent to use a container start timeout
     * value. However, we recommend using the latest container agent version. For
     * information about checking your agent version and updating to the latest
     * version, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-update.html">Updating
     * the Amazon ECS Container Agent</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>. If you're using an Amazon ECS-optimized Linux AMI, your
     * instance needs at least version <code>1.26.0-1</code> of the
     * <code>ecs-init</code> package. If your container instances are launched from
     * version <code>20190301</code> or later, then they contain the required versions
     * of the container agent and <code>ecs-init</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html">Amazon
     * ECS-optimized Linux AMI</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline bool StartTimeoutHasBeenSet() const { return m_startTimeoutHasBeenSet; }

    /**
     * <p>Time duration (in seconds) to wait before giving up on resolving dependencies
     * for a container. For example, you specify two containers in a task definition
     * with containerA having a dependency on containerB reaching a
     * <code>COMPLETE</code>, <code>SUCCESS</code>, or <code>HEALTHY</code> status. If
     * a <code>startTimeout</code> value is specified for containerB and it doesn't
     * reach the desired status within that time then containerA gives up and not
     * start. This results in the task transitioning to a <code>STOPPED</code>
     * state.</p>  <p>When the <code>ECS_CONTAINER_START_TIMEOUT</code> container
     * agent configuration variable is used, it's enforced independently from this
     * start timeout value.</p>  <p>For tasks using the Fargate launch type, the
     * task or service requires the following platforms:</p> <ul> <li> <p>Linux
     * platform version <code>1.3.0</code> or later.</p> </li> <li> <p>Windows platform
     * version <code>1.0.0</code> or later.</p> </li> </ul> <p>For tasks using the EC2
     * launch type, your container instances require at least version
     * <code>1.26.0</code> of the container agent to use a container start timeout
     * value. However, we recommend using the latest container agent version. For
     * information about checking your agent version and updating to the latest
     * version, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-update.html">Updating
     * the Amazon ECS Container Agent</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>. If you're using an Amazon ECS-optimized Linux AMI, your
     * instance needs at least version <code>1.26.0-1</code> of the
     * <code>ecs-init</code> package. If your container instances are launched from
     * version <code>20190301</code> or later, then they contain the required versions
     * of the container agent and <code>ecs-init</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html">Amazon
     * ECS-optimized Linux AMI</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetStartTimeout(int value) { m_startTimeoutHasBeenSet = true; m_startTimeout = value; }

    /**
     * <p>Time duration (in seconds) to wait before giving up on resolving dependencies
     * for a container. For example, you specify two containers in a task definition
     * with containerA having a dependency on containerB reaching a
     * <code>COMPLETE</code>, <code>SUCCESS</code>, or <code>HEALTHY</code> status. If
     * a <code>startTimeout</code> value is specified for containerB and it doesn't
     * reach the desired status within that time then containerA gives up and not
     * start. This results in the task transitioning to a <code>STOPPED</code>
     * state.</p>  <p>When the <code>ECS_CONTAINER_START_TIMEOUT</code> container
     * agent configuration variable is used, it's enforced independently from this
     * start timeout value.</p>  <p>For tasks using the Fargate launch type, the
     * task or service requires the following platforms:</p> <ul> <li> <p>Linux
     * platform version <code>1.3.0</code> or later.</p> </li> <li> <p>Windows platform
     * version <code>1.0.0</code> or later.</p> </li> </ul> <p>For tasks using the EC2
     * launch type, your container instances require at least version
     * <code>1.26.0</code> of the container agent to use a container start timeout
     * value. However, we recommend using the latest container agent version. For
     * information about checking your agent version and updating to the latest
     * version, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-update.html">Updating
     * the Amazon ECS Container Agent</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>. If you're using an Amazon ECS-optimized Linux AMI, your
     * instance needs at least version <code>1.26.0-1</code> of the
     * <code>ecs-init</code> package. If your container instances are launched from
     * version <code>20190301</code> or later, then they contain the required versions
     * of the container agent and <code>ecs-init</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html">Amazon
     * ECS-optimized Linux AMI</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline ContainerDefinition& WithStartTimeout(int value) { SetStartTimeout(value); return *this;}


    /**
     * <p>Time duration (in seconds) to wait before the container is forcefully killed
     * if it doesn't exit normally on its own.</p> <p>For tasks using the Fargate
     * launch type, the task or service requires the following platforms:</p> <ul> <li>
     * <p>Linux platform version <code>1.3.0</code> or later.</p> </li> <li> <p>Windows
     * platform version <code>1.0.0</code> or later.</p> </li> </ul> <p>The max stop
     * timeout value is 120 seconds and if the parameter is not specified, the default
     * value of 30 seconds is used.</p> <p>For tasks that use the EC2 launch type, if
     * the <code>stopTimeout</code> parameter isn't specified, the value set for the
     * Amazon ECS container agent configuration variable
     * <code>ECS_CONTAINER_STOP_TIMEOUT</code> is used. If neither the
     * <code>stopTimeout</code> parameter or the
     * <code>ECS_CONTAINER_STOP_TIMEOUT</code> agent configuration variable are set,
     * then the default values of 30 seconds for Linux containers and 30 seconds on
     * Windows containers are used. Your container instances require at least version
     * 1.26.0 of the container agent to use a container stop timeout value. However, we
     * recommend using the latest container agent version. For information about
     * checking your agent version and updating to the latest version, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-update.html">Updating
     * the Amazon ECS Container Agent</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>. If you're using an Amazon ECS-optimized Linux AMI, your
     * instance needs at least version 1.26.0-1 of the <code>ecs-init</code> package.
     * If your container instances are launched from version <code>20190301</code> or
     * later, then they contain the required versions of the container agent and
     * <code>ecs-init</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html">Amazon
     * ECS-optimized Linux AMI</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline int GetStopTimeout() const{ return m_stopTimeout; }

    /**
     * <p>Time duration (in seconds) to wait before the container is forcefully killed
     * if it doesn't exit normally on its own.</p> <p>For tasks using the Fargate
     * launch type, the task or service requires the following platforms:</p> <ul> <li>
     * <p>Linux platform version <code>1.3.0</code> or later.</p> </li> <li> <p>Windows
     * platform version <code>1.0.0</code> or later.</p> </li> </ul> <p>The max stop
     * timeout value is 120 seconds and if the parameter is not specified, the default
     * value of 30 seconds is used.</p> <p>For tasks that use the EC2 launch type, if
     * the <code>stopTimeout</code> parameter isn't specified, the value set for the
     * Amazon ECS container agent configuration variable
     * <code>ECS_CONTAINER_STOP_TIMEOUT</code> is used. If neither the
     * <code>stopTimeout</code> parameter or the
     * <code>ECS_CONTAINER_STOP_TIMEOUT</code> agent configuration variable are set,
     * then the default values of 30 seconds for Linux containers and 30 seconds on
     * Windows containers are used. Your container instances require at least version
     * 1.26.0 of the container agent to use a container stop timeout value. However, we
     * recommend using the latest container agent version. For information about
     * checking your agent version and updating to the latest version, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-update.html">Updating
     * the Amazon ECS Container Agent</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>. If you're using an Amazon ECS-optimized Linux AMI, your
     * instance needs at least version 1.26.0-1 of the <code>ecs-init</code> package.
     * If your container instances are launched from version <code>20190301</code> or
     * later, then they contain the required versions of the container agent and
     * <code>ecs-init</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html">Amazon
     * ECS-optimized Linux AMI</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline bool StopTimeoutHasBeenSet() const { return m_stopTimeoutHasBeenSet; }

    /**
     * <p>Time duration (in seconds) to wait before the container is forcefully killed
     * if it doesn't exit normally on its own.</p> <p>For tasks using the Fargate
     * launch type, the task or service requires the following platforms:</p> <ul> <li>
     * <p>Linux platform version <code>1.3.0</code> or later.</p> </li> <li> <p>Windows
     * platform version <code>1.0.0</code> or later.</p> </li> </ul> <p>The max stop
     * timeout value is 120 seconds and if the parameter is not specified, the default
     * value of 30 seconds is used.</p> <p>For tasks that use the EC2 launch type, if
     * the <code>stopTimeout</code> parameter isn't specified, the value set for the
     * Amazon ECS container agent configuration variable
     * <code>ECS_CONTAINER_STOP_TIMEOUT</code> is used. If neither the
     * <code>stopTimeout</code> parameter or the
     * <code>ECS_CONTAINER_STOP_TIMEOUT</code> agent configuration variable are set,
     * then the default values of 30 seconds for Linux containers and 30 seconds on
     * Windows containers are used. Your container instances require at least version
     * 1.26.0 of the container agent to use a container stop timeout value. However, we
     * recommend using the latest container agent version. For information about
     * checking your agent version and updating to the latest version, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-update.html">Updating
     * the Amazon ECS Container Agent</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>. If you're using an Amazon ECS-optimized Linux AMI, your
     * instance needs at least version 1.26.0-1 of the <code>ecs-init</code> package.
     * If your container instances are launched from version <code>20190301</code> or
     * later, then they contain the required versions of the container agent and
     * <code>ecs-init</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html">Amazon
     * ECS-optimized Linux AMI</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetStopTimeout(int value) { m_stopTimeoutHasBeenSet = true; m_stopTimeout = value; }

    /**
     * <p>Time duration (in seconds) to wait before the container is forcefully killed
     * if it doesn't exit normally on its own.</p> <p>For tasks using the Fargate
     * launch type, the task or service requires the following platforms:</p> <ul> <li>
     * <p>Linux platform version <code>1.3.0</code> or later.</p> </li> <li> <p>Windows
     * platform version <code>1.0.0</code> or later.</p> </li> </ul> <p>The max stop
     * timeout value is 120 seconds and if the parameter is not specified, the default
     * value of 30 seconds is used.</p> <p>For tasks that use the EC2 launch type, if
     * the <code>stopTimeout</code> parameter isn't specified, the value set for the
     * Amazon ECS container agent configuration variable
     * <code>ECS_CONTAINER_STOP_TIMEOUT</code> is used. If neither the
     * <code>stopTimeout</code> parameter or the
     * <code>ECS_CONTAINER_STOP_TIMEOUT</code> agent configuration variable are set,
     * then the default values of 30 seconds for Linux containers and 30 seconds on
     * Windows containers are used. Your container instances require at least version
     * 1.26.0 of the container agent to use a container stop timeout value. However, we
     * recommend using the latest container agent version. For information about
     * checking your agent version and updating to the latest version, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-update.html">Updating
     * the Amazon ECS Container Agent</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>. If you're using an Amazon ECS-optimized Linux AMI, your
     * instance needs at least version 1.26.0-1 of the <code>ecs-init</code> package.
     * If your container instances are launched from version <code>20190301</code> or
     * later, then they contain the required versions of the container agent and
     * <code>ecs-init</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html">Amazon
     * ECS-optimized Linux AMI</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline ContainerDefinition& WithStopTimeout(int value) { SetStopTimeout(value); return *this;}


    /**
     * <p>The hostname to use for your container. This parameter maps to
     * <code>Hostname</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--hostname</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>The <code>hostname</code> parameter is not supported if
     * you're using the <code>awsvpc</code> network mode.</p> 
     */
    inline const Aws::String& GetHostname() const{ return m_hostname; }

    /**
     * <p>The hostname to use for your container. This parameter maps to
     * <code>Hostname</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--hostname</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>The <code>hostname</code> parameter is not supported if
     * you're using the <code>awsvpc</code> network mode.</p> 
     */
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }

    /**
     * <p>The hostname to use for your container. This parameter maps to
     * <code>Hostname</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--hostname</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>The <code>hostname</code> parameter is not supported if
     * you're using the <code>awsvpc</code> network mode.</p> 
     */
    inline void SetHostname(const Aws::String& value) { m_hostnameHasBeenSet = true; m_hostname = value; }

    /**
     * <p>The hostname to use for your container. This parameter maps to
     * <code>Hostname</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--hostname</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>The <code>hostname</code> parameter is not supported if
     * you're using the <code>awsvpc</code> network mode.</p> 
     */
    inline void SetHostname(Aws::String&& value) { m_hostnameHasBeenSet = true; m_hostname = std::move(value); }

    /**
     * <p>The hostname to use for your container. This parameter maps to
     * <code>Hostname</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--hostname</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>The <code>hostname</code> parameter is not supported if
     * you're using the <code>awsvpc</code> network mode.</p> 
     */
    inline void SetHostname(const char* value) { m_hostnameHasBeenSet = true; m_hostname.assign(value); }

    /**
     * <p>The hostname to use for your container. This parameter maps to
     * <code>Hostname</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--hostname</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>The <code>hostname</code> parameter is not supported if
     * you're using the <code>awsvpc</code> network mode.</p> 
     */
    inline ContainerDefinition& WithHostname(const Aws::String& value) { SetHostname(value); return *this;}

    /**
     * <p>The hostname to use for your container. This parameter maps to
     * <code>Hostname</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--hostname</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>The <code>hostname</code> parameter is not supported if
     * you're using the <code>awsvpc</code> network mode.</p> 
     */
    inline ContainerDefinition& WithHostname(Aws::String&& value) { SetHostname(std::move(value)); return *this;}

    /**
     * <p>The hostname to use for your container. This parameter maps to
     * <code>Hostname</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--hostname</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>The <code>hostname</code> parameter is not supported if
     * you're using the <code>awsvpc</code> network mode.</p> 
     */
    inline ContainerDefinition& WithHostname(const char* value) { SetHostname(value); return *this;}


    /**
     * <p>The user to use inside the container. This parameter maps to
     * <code>User</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--user</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>When running tasks using the <code>host</code>
     * network mode, don't run containers using the root user (UID 0). We recommend
     * using a non-root user for better security.</p>  <p>You can specify
     * the <code>user</code> using the following formats. If specifying a UID or GID,
     * you must specify it as a positive integer.</p> <ul> <li> <p> <code>user</code>
     * </p> </li> <li> <p> <code>user:group</code> </p> </li> <li> <p> <code>uid</code>
     * </p> </li> <li> <p> <code>uid:gid</code> </p> </li> <li> <p>
     * <code>user:gid</code> </p> </li> <li> <p> <code>uid:group</code> </p> </li>
     * </ul>  <p>This parameter is not supported for Windows containers.</p>
     * 
     */
    inline const Aws::String& GetUser() const{ return m_user; }

    /**
     * <p>The user to use inside the container. This parameter maps to
     * <code>User</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--user</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>When running tasks using the <code>host</code>
     * network mode, don't run containers using the root user (UID 0). We recommend
     * using a non-root user for better security.</p>  <p>You can specify
     * the <code>user</code> using the following formats. If specifying a UID or GID,
     * you must specify it as a positive integer.</p> <ul> <li> <p> <code>user</code>
     * </p> </li> <li> <p> <code>user:group</code> </p> </li> <li> <p> <code>uid</code>
     * </p> </li> <li> <p> <code>uid:gid</code> </p> </li> <li> <p>
     * <code>user:gid</code> </p> </li> <li> <p> <code>uid:group</code> </p> </li>
     * </ul>  <p>This parameter is not supported for Windows containers.</p>
     * 
     */
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }

    /**
     * <p>The user to use inside the container. This parameter maps to
     * <code>User</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--user</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>When running tasks using the <code>host</code>
     * network mode, don't run containers using the root user (UID 0). We recommend
     * using a non-root user for better security.</p>  <p>You can specify
     * the <code>user</code> using the following formats. If specifying a UID or GID,
     * you must specify it as a positive integer.</p> <ul> <li> <p> <code>user</code>
     * </p> </li> <li> <p> <code>user:group</code> </p> </li> <li> <p> <code>uid</code>
     * </p> </li> <li> <p> <code>uid:gid</code> </p> </li> <li> <p>
     * <code>user:gid</code> </p> </li> <li> <p> <code>uid:group</code> </p> </li>
     * </ul>  <p>This parameter is not supported for Windows containers.</p>
     * 
     */
    inline void SetUser(const Aws::String& value) { m_userHasBeenSet = true; m_user = value; }

    /**
     * <p>The user to use inside the container. This parameter maps to
     * <code>User</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--user</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>When running tasks using the <code>host</code>
     * network mode, don't run containers using the root user (UID 0). We recommend
     * using a non-root user for better security.</p>  <p>You can specify
     * the <code>user</code> using the following formats. If specifying a UID or GID,
     * you must specify it as a positive integer.</p> <ul> <li> <p> <code>user</code>
     * </p> </li> <li> <p> <code>user:group</code> </p> </li> <li> <p> <code>uid</code>
     * </p> </li> <li> <p> <code>uid:gid</code> </p> </li> <li> <p>
     * <code>user:gid</code> </p> </li> <li> <p> <code>uid:group</code> </p> </li>
     * </ul>  <p>This parameter is not supported for Windows containers.</p>
     * 
     */
    inline void SetUser(Aws::String&& value) { m_userHasBeenSet = true; m_user = std::move(value); }

    /**
     * <p>The user to use inside the container. This parameter maps to
     * <code>User</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--user</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>When running tasks using the <code>host</code>
     * network mode, don't run containers using the root user (UID 0). We recommend
     * using a non-root user for better security.</p>  <p>You can specify
     * the <code>user</code> using the following formats. If specifying a UID or GID,
     * you must specify it as a positive integer.</p> <ul> <li> <p> <code>user</code>
     * </p> </li> <li> <p> <code>user:group</code> </p> </li> <li> <p> <code>uid</code>
     * </p> </li> <li> <p> <code>uid:gid</code> </p> </li> <li> <p>
     * <code>user:gid</code> </p> </li> <li> <p> <code>uid:group</code> </p> </li>
     * </ul>  <p>This parameter is not supported for Windows containers.</p>
     * 
     */
    inline void SetUser(const char* value) { m_userHasBeenSet = true; m_user.assign(value); }

    /**
     * <p>The user to use inside the container. This parameter maps to
     * <code>User</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--user</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>When running tasks using the <code>host</code>
     * network mode, don't run containers using the root user (UID 0). We recommend
     * using a non-root user for better security.</p>  <p>You can specify
     * the <code>user</code> using the following formats. If specifying a UID or GID,
     * you must specify it as a positive integer.</p> <ul> <li> <p> <code>user</code>
     * </p> </li> <li> <p> <code>user:group</code> </p> </li> <li> <p> <code>uid</code>
     * </p> </li> <li> <p> <code>uid:gid</code> </p> </li> <li> <p>
     * <code>user:gid</code> </p> </li> <li> <p> <code>uid:group</code> </p> </li>
     * </ul>  <p>This parameter is not supported for Windows containers.</p>
     * 
     */
    inline ContainerDefinition& WithUser(const Aws::String& value) { SetUser(value); return *this;}

    /**
     * <p>The user to use inside the container. This parameter maps to
     * <code>User</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--user</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>When running tasks using the <code>host</code>
     * network mode, don't run containers using the root user (UID 0). We recommend
     * using a non-root user for better security.</p>  <p>You can specify
     * the <code>user</code> using the following formats. If specifying a UID or GID,
     * you must specify it as a positive integer.</p> <ul> <li> <p> <code>user</code>
     * </p> </li> <li> <p> <code>user:group</code> </p> </li> <li> <p> <code>uid</code>
     * </p> </li> <li> <p> <code>uid:gid</code> </p> </li> <li> <p>
     * <code>user:gid</code> </p> </li> <li> <p> <code>uid:group</code> </p> </li>
     * </ul>  <p>This parameter is not supported for Windows containers.</p>
     * 
     */
    inline ContainerDefinition& WithUser(Aws::String&& value) { SetUser(std::move(value)); return *this;}

    /**
     * <p>The user to use inside the container. This parameter maps to
     * <code>User</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--user</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>When running tasks using the <code>host</code>
     * network mode, don't run containers using the root user (UID 0). We recommend
     * using a non-root user for better security.</p>  <p>You can specify
     * the <code>user</code> using the following formats. If specifying a UID or GID,
     * you must specify it as a positive integer.</p> <ul> <li> <p> <code>user</code>
     * </p> </li> <li> <p> <code>user:group</code> </p> </li> <li> <p> <code>uid</code>
     * </p> </li> <li> <p> <code>uid:gid</code> </p> </li> <li> <p>
     * <code>user:gid</code> </p> </li> <li> <p> <code>uid:group</code> </p> </li>
     * </ul>  <p>This parameter is not supported for Windows containers.</p>
     * 
     */
    inline ContainerDefinition& WithUser(const char* value) { SetUser(value); return *this;}


    /**
     * <p>The working directory to run commands inside the container in. This parameter
     * maps to <code>WorkingDir</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--workdir</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>
     */
    inline const Aws::String& GetWorkingDirectory() const{ return m_workingDirectory; }

    /**
     * <p>The working directory to run commands inside the container in. This parameter
     * maps to <code>WorkingDir</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--workdir</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>
     */
    inline bool WorkingDirectoryHasBeenSet() const { return m_workingDirectoryHasBeenSet; }

    /**
     * <p>The working directory to run commands inside the container in. This parameter
     * maps to <code>WorkingDir</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--workdir</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>
     */
    inline void SetWorkingDirectory(const Aws::String& value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory = value; }

    /**
     * <p>The working directory to run commands inside the container in. This parameter
     * maps to <code>WorkingDir</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--workdir</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>
     */
    inline void SetWorkingDirectory(Aws::String&& value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory = std::move(value); }

    /**
     * <p>The working directory to run commands inside the container in. This parameter
     * maps to <code>WorkingDir</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--workdir</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>
     */
    inline void SetWorkingDirectory(const char* value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory.assign(value); }

    /**
     * <p>The working directory to run commands inside the container in. This parameter
     * maps to <code>WorkingDir</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--workdir</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>
     */
    inline ContainerDefinition& WithWorkingDirectory(const Aws::String& value) { SetWorkingDirectory(value); return *this;}

    /**
     * <p>The working directory to run commands inside the container in. This parameter
     * maps to <code>WorkingDir</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--workdir</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>
     */
    inline ContainerDefinition& WithWorkingDirectory(Aws::String&& value) { SetWorkingDirectory(std::move(value)); return *this;}

    /**
     * <p>The working directory to run commands inside the container in. This parameter
     * maps to <code>WorkingDir</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--workdir</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>
     */
    inline ContainerDefinition& WithWorkingDirectory(const char* value) { SetWorkingDirectory(value); return *this;}


    /**
     * <p>When this parameter is true, networking is disabled within the container.
     * This parameter maps to <code>NetworkDisabled</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a>.</p>
     *  <p>This parameter is not supported for Windows containers.</p> 
     */
    inline bool GetDisableNetworking() const{ return m_disableNetworking; }

    /**
     * <p>When this parameter is true, networking is disabled within the container.
     * This parameter maps to <code>NetworkDisabled</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a>.</p>
     *  <p>This parameter is not supported for Windows containers.</p> 
     */
    inline bool DisableNetworkingHasBeenSet() const { return m_disableNetworkingHasBeenSet; }

    /**
     * <p>When this parameter is true, networking is disabled within the container.
     * This parameter maps to <code>NetworkDisabled</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a>.</p>
     *  <p>This parameter is not supported for Windows containers.</p> 
     */
    inline void SetDisableNetworking(bool value) { m_disableNetworkingHasBeenSet = true; m_disableNetworking = value; }

    /**
     * <p>When this parameter is true, networking is disabled within the container.
     * This parameter maps to <code>NetworkDisabled</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a>.</p>
     *  <p>This parameter is not supported for Windows containers.</p> 
     */
    inline ContainerDefinition& WithDisableNetworking(bool value) { SetDisableNetworking(value); return *this;}


    /**
     * <p>When this parameter is true, the container is given elevated privileges on
     * the host container instance (similar to the <code>root</code> user). This
     * parameter maps to <code>Privileged</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--privileged</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter is not supported for Windows containers or
     * tasks run on Fargate.</p> 
     */
    inline bool GetPrivileged() const{ return m_privileged; }

    /**
     * <p>When this parameter is true, the container is given elevated privileges on
     * the host container instance (similar to the <code>root</code> user). This
     * parameter maps to <code>Privileged</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--privileged</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter is not supported for Windows containers or
     * tasks run on Fargate.</p> 
     */
    inline bool PrivilegedHasBeenSet() const { return m_privilegedHasBeenSet; }

    /**
     * <p>When this parameter is true, the container is given elevated privileges on
     * the host container instance (similar to the <code>root</code> user). This
     * parameter maps to <code>Privileged</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--privileged</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter is not supported for Windows containers or
     * tasks run on Fargate.</p> 
     */
    inline void SetPrivileged(bool value) { m_privilegedHasBeenSet = true; m_privileged = value; }

    /**
     * <p>When this parameter is true, the container is given elevated privileges on
     * the host container instance (similar to the <code>root</code> user). This
     * parameter maps to <code>Privileged</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--privileged</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter is not supported for Windows containers or
     * tasks run on Fargate.</p> 
     */
    inline ContainerDefinition& WithPrivileged(bool value) { SetPrivileged(value); return *this;}


    /**
     * <p>When this parameter is true, the container is given read-only access to its
     * root file system. This parameter maps to <code>ReadonlyRootfs</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--read-only</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter is not supported for Windows
     * containers.</p> 
     */
    inline bool GetReadonlyRootFilesystem() const{ return m_readonlyRootFilesystem; }

    /**
     * <p>When this parameter is true, the container is given read-only access to its
     * root file system. This parameter maps to <code>ReadonlyRootfs</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--read-only</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter is not supported for Windows
     * containers.</p> 
     */
    inline bool ReadonlyRootFilesystemHasBeenSet() const { return m_readonlyRootFilesystemHasBeenSet; }

    /**
     * <p>When this parameter is true, the container is given read-only access to its
     * root file system. This parameter maps to <code>ReadonlyRootfs</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--read-only</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter is not supported for Windows
     * containers.</p> 
     */
    inline void SetReadonlyRootFilesystem(bool value) { m_readonlyRootFilesystemHasBeenSet = true; m_readonlyRootFilesystem = value; }

    /**
     * <p>When this parameter is true, the container is given read-only access to its
     * root file system. This parameter maps to <code>ReadonlyRootfs</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--read-only</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter is not supported for Windows
     * containers.</p> 
     */
    inline ContainerDefinition& WithReadonlyRootFilesystem(bool value) { SetReadonlyRootFilesystem(value); return *this;}


    /**
     * <p>A list of DNS servers that are presented to the container. This parameter
     * maps to <code>Dns</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--dns</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter is not supported for Windows
     * containers.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetDnsServers() const{ return m_dnsServers; }

    /**
     * <p>A list of DNS servers that are presented to the container. This parameter
     * maps to <code>Dns</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--dns</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter is not supported for Windows
     * containers.</p> 
     */
    inline bool DnsServersHasBeenSet() const { return m_dnsServersHasBeenSet; }

    /**
     * <p>A list of DNS servers that are presented to the container. This parameter
     * maps to <code>Dns</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--dns</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter is not supported for Windows
     * containers.</p> 
     */
    inline void SetDnsServers(const Aws::Vector<Aws::String>& value) { m_dnsServersHasBeenSet = true; m_dnsServers = value; }

    /**
     * <p>A list of DNS servers that are presented to the container. This parameter
     * maps to <code>Dns</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--dns</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter is not supported for Windows
     * containers.</p> 
     */
    inline void SetDnsServers(Aws::Vector<Aws::String>&& value) { m_dnsServersHasBeenSet = true; m_dnsServers = std::move(value); }

    /**
     * <p>A list of DNS servers that are presented to the container. This parameter
     * maps to <code>Dns</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--dns</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter is not supported for Windows
     * containers.</p> 
     */
    inline ContainerDefinition& WithDnsServers(const Aws::Vector<Aws::String>& value) { SetDnsServers(value); return *this;}

    /**
     * <p>A list of DNS servers that are presented to the container. This parameter
     * maps to <code>Dns</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--dns</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter is not supported for Windows
     * containers.</p> 
     */
    inline ContainerDefinition& WithDnsServers(Aws::Vector<Aws::String>&& value) { SetDnsServers(std::move(value)); return *this;}

    /**
     * <p>A list of DNS servers that are presented to the container. This parameter
     * maps to <code>Dns</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--dns</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter is not supported for Windows
     * containers.</p> 
     */
    inline ContainerDefinition& AddDnsServers(const Aws::String& value) { m_dnsServersHasBeenSet = true; m_dnsServers.push_back(value); return *this; }

    /**
     * <p>A list of DNS servers that are presented to the container. This parameter
     * maps to <code>Dns</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--dns</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter is not supported for Windows
     * containers.</p> 
     */
    inline ContainerDefinition& AddDnsServers(Aws::String&& value) { m_dnsServersHasBeenSet = true; m_dnsServers.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of DNS servers that are presented to the container. This parameter
     * maps to <code>Dns</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--dns</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter is not supported for Windows
     * containers.</p> 
     */
    inline ContainerDefinition& AddDnsServers(const char* value) { m_dnsServersHasBeenSet = true; m_dnsServers.push_back(value); return *this; }


    /**
     * <p>A list of DNS search domains that are presented to the container. This
     * parameter maps to <code>DnsSearch</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--dns-search</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter is not supported for Windows
     * containers.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetDnsSearchDomains() const{ return m_dnsSearchDomains; }

    /**
     * <p>A list of DNS search domains that are presented to the container. This
     * parameter maps to <code>DnsSearch</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--dns-search</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter is not supported for Windows
     * containers.</p> 
     */
    inline bool DnsSearchDomainsHasBeenSet() const { return m_dnsSearchDomainsHasBeenSet; }

    /**
     * <p>A list of DNS search domains that are presented to the container. This
     * parameter maps to <code>DnsSearch</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--dns-search</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter is not supported for Windows
     * containers.</p> 
     */
    inline void SetDnsSearchDomains(const Aws::Vector<Aws::String>& value) { m_dnsSearchDomainsHasBeenSet = true; m_dnsSearchDomains = value; }

    /**
     * <p>A list of DNS search domains that are presented to the container. This
     * parameter maps to <code>DnsSearch</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--dns-search</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter is not supported for Windows
     * containers.</p> 
     */
    inline void SetDnsSearchDomains(Aws::Vector<Aws::String>&& value) { m_dnsSearchDomainsHasBeenSet = true; m_dnsSearchDomains = std::move(value); }

    /**
     * <p>A list of DNS search domains that are presented to the container. This
     * parameter maps to <code>DnsSearch</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--dns-search</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter is not supported for Windows
     * containers.</p> 
     */
    inline ContainerDefinition& WithDnsSearchDomains(const Aws::Vector<Aws::String>& value) { SetDnsSearchDomains(value); return *this;}

    /**
     * <p>A list of DNS search domains that are presented to the container. This
     * parameter maps to <code>DnsSearch</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--dns-search</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter is not supported for Windows
     * containers.</p> 
     */
    inline ContainerDefinition& WithDnsSearchDomains(Aws::Vector<Aws::String>&& value) { SetDnsSearchDomains(std::move(value)); return *this;}

    /**
     * <p>A list of DNS search domains that are presented to the container. This
     * parameter maps to <code>DnsSearch</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--dns-search</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter is not supported for Windows
     * containers.</p> 
     */
    inline ContainerDefinition& AddDnsSearchDomains(const Aws::String& value) { m_dnsSearchDomainsHasBeenSet = true; m_dnsSearchDomains.push_back(value); return *this; }

    /**
     * <p>A list of DNS search domains that are presented to the container. This
     * parameter maps to <code>DnsSearch</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--dns-search</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter is not supported for Windows
     * containers.</p> 
     */
    inline ContainerDefinition& AddDnsSearchDomains(Aws::String&& value) { m_dnsSearchDomainsHasBeenSet = true; m_dnsSearchDomains.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of DNS search domains that are presented to the container. This
     * parameter maps to <code>DnsSearch</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--dns-search</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter is not supported for Windows
     * containers.</p> 
     */
    inline ContainerDefinition& AddDnsSearchDomains(const char* value) { m_dnsSearchDomainsHasBeenSet = true; m_dnsSearchDomains.push_back(value); return *this; }


    /**
     * <p>A list of hostnames and IP address mappings to append to the
     * <code>/etc/hosts</code> file on the container. This parameter maps to
     * <code>ExtraHosts</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--add-host</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter isn't supported for Windows containers or
     * tasks that use the <code>awsvpc</code> network mode.</p> 
     */
    inline const Aws::Vector<HostEntry>& GetExtraHosts() const{ return m_extraHosts; }

    /**
     * <p>A list of hostnames and IP address mappings to append to the
     * <code>/etc/hosts</code> file on the container. This parameter maps to
     * <code>ExtraHosts</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--add-host</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter isn't supported for Windows containers or
     * tasks that use the <code>awsvpc</code> network mode.</p> 
     */
    inline bool ExtraHostsHasBeenSet() const { return m_extraHostsHasBeenSet; }

    /**
     * <p>A list of hostnames and IP address mappings to append to the
     * <code>/etc/hosts</code> file on the container. This parameter maps to
     * <code>ExtraHosts</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--add-host</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter isn't supported for Windows containers or
     * tasks that use the <code>awsvpc</code> network mode.</p> 
     */
    inline void SetExtraHosts(const Aws::Vector<HostEntry>& value) { m_extraHostsHasBeenSet = true; m_extraHosts = value; }

    /**
     * <p>A list of hostnames and IP address mappings to append to the
     * <code>/etc/hosts</code> file on the container. This parameter maps to
     * <code>ExtraHosts</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--add-host</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter isn't supported for Windows containers or
     * tasks that use the <code>awsvpc</code> network mode.</p> 
     */
    inline void SetExtraHosts(Aws::Vector<HostEntry>&& value) { m_extraHostsHasBeenSet = true; m_extraHosts = std::move(value); }

    /**
     * <p>A list of hostnames and IP address mappings to append to the
     * <code>/etc/hosts</code> file on the container. This parameter maps to
     * <code>ExtraHosts</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--add-host</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter isn't supported for Windows containers or
     * tasks that use the <code>awsvpc</code> network mode.</p> 
     */
    inline ContainerDefinition& WithExtraHosts(const Aws::Vector<HostEntry>& value) { SetExtraHosts(value); return *this;}

    /**
     * <p>A list of hostnames and IP address mappings to append to the
     * <code>/etc/hosts</code> file on the container. This parameter maps to
     * <code>ExtraHosts</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--add-host</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter isn't supported for Windows containers or
     * tasks that use the <code>awsvpc</code> network mode.</p> 
     */
    inline ContainerDefinition& WithExtraHosts(Aws::Vector<HostEntry>&& value) { SetExtraHosts(std::move(value)); return *this;}

    /**
     * <p>A list of hostnames and IP address mappings to append to the
     * <code>/etc/hosts</code> file on the container. This parameter maps to
     * <code>ExtraHosts</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--add-host</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter isn't supported for Windows containers or
     * tasks that use the <code>awsvpc</code> network mode.</p> 
     */
    inline ContainerDefinition& AddExtraHosts(const HostEntry& value) { m_extraHostsHasBeenSet = true; m_extraHosts.push_back(value); return *this; }

    /**
     * <p>A list of hostnames and IP address mappings to append to the
     * <code>/etc/hosts</code> file on the container. This parameter maps to
     * <code>ExtraHosts</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--add-host</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter isn't supported for Windows containers or
     * tasks that use the <code>awsvpc</code> network mode.</p> 
     */
    inline ContainerDefinition& AddExtraHosts(HostEntry&& value) { m_extraHostsHasBeenSet = true; m_extraHosts.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of strings to provide custom labels for SELinux and AppArmor
     * multi-level security systems. This field isn't valid for containers in tasks
     * using the Fargate launch type.</p> <p>With Windows containers, this parameter
     * can be used to reference a credential spec file when configuring a container for
     * Active Directory authentication. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/windows-gmsa.html">Using
     * gMSAs for Windows Containers</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p> <p>This parameter maps to <code>SecurityOpt</code> in
     * the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--security-opt</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>The Amazon ECS container agent running on a container
     * instance must register with the <code>ECS_SELINUX_CAPABLE=true</code> or
     * <code>ECS_APPARMOR_CAPABLE=true</code> environment variables before containers
     * placed on that instance can use these security options. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon
     * ECS Container Agent Configuration</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>  <p>For more information about valid values, see
     * <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">Docker
     * Run Security Configuration</a>. </p> <p>Valid values: "no-new-privileges" |
     * "apparmor:PROFILE" | "label:value" | "credentialspec:CredentialSpecFilePath"</p>
     */
    inline const Aws::Vector<Aws::String>& GetDockerSecurityOptions() const{ return m_dockerSecurityOptions; }

    /**
     * <p>A list of strings to provide custom labels for SELinux and AppArmor
     * multi-level security systems. This field isn't valid for containers in tasks
     * using the Fargate launch type.</p> <p>With Windows containers, this parameter
     * can be used to reference a credential spec file when configuring a container for
     * Active Directory authentication. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/windows-gmsa.html">Using
     * gMSAs for Windows Containers</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p> <p>This parameter maps to <code>SecurityOpt</code> in
     * the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--security-opt</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>The Amazon ECS container agent running on a container
     * instance must register with the <code>ECS_SELINUX_CAPABLE=true</code> or
     * <code>ECS_APPARMOR_CAPABLE=true</code> environment variables before containers
     * placed on that instance can use these security options. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon
     * ECS Container Agent Configuration</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>  <p>For more information about valid values, see
     * <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">Docker
     * Run Security Configuration</a>. </p> <p>Valid values: "no-new-privileges" |
     * "apparmor:PROFILE" | "label:value" | "credentialspec:CredentialSpecFilePath"</p>
     */
    inline bool DockerSecurityOptionsHasBeenSet() const { return m_dockerSecurityOptionsHasBeenSet; }

    /**
     * <p>A list of strings to provide custom labels for SELinux and AppArmor
     * multi-level security systems. This field isn't valid for containers in tasks
     * using the Fargate launch type.</p> <p>With Windows containers, this parameter
     * can be used to reference a credential spec file when configuring a container for
     * Active Directory authentication. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/windows-gmsa.html">Using
     * gMSAs for Windows Containers</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p> <p>This parameter maps to <code>SecurityOpt</code> in
     * the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--security-opt</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>The Amazon ECS container agent running on a container
     * instance must register with the <code>ECS_SELINUX_CAPABLE=true</code> or
     * <code>ECS_APPARMOR_CAPABLE=true</code> environment variables before containers
     * placed on that instance can use these security options. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon
     * ECS Container Agent Configuration</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>  <p>For more information about valid values, see
     * <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">Docker
     * Run Security Configuration</a>. </p> <p>Valid values: "no-new-privileges" |
     * "apparmor:PROFILE" | "label:value" | "credentialspec:CredentialSpecFilePath"</p>
     */
    inline void SetDockerSecurityOptions(const Aws::Vector<Aws::String>& value) { m_dockerSecurityOptionsHasBeenSet = true; m_dockerSecurityOptions = value; }

    /**
     * <p>A list of strings to provide custom labels for SELinux and AppArmor
     * multi-level security systems. This field isn't valid for containers in tasks
     * using the Fargate launch type.</p> <p>With Windows containers, this parameter
     * can be used to reference a credential spec file when configuring a container for
     * Active Directory authentication. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/windows-gmsa.html">Using
     * gMSAs for Windows Containers</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p> <p>This parameter maps to <code>SecurityOpt</code> in
     * the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--security-opt</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>The Amazon ECS container agent running on a container
     * instance must register with the <code>ECS_SELINUX_CAPABLE=true</code> or
     * <code>ECS_APPARMOR_CAPABLE=true</code> environment variables before containers
     * placed on that instance can use these security options. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon
     * ECS Container Agent Configuration</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>  <p>For more information about valid values, see
     * <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">Docker
     * Run Security Configuration</a>. </p> <p>Valid values: "no-new-privileges" |
     * "apparmor:PROFILE" | "label:value" | "credentialspec:CredentialSpecFilePath"</p>
     */
    inline void SetDockerSecurityOptions(Aws::Vector<Aws::String>&& value) { m_dockerSecurityOptionsHasBeenSet = true; m_dockerSecurityOptions = std::move(value); }

    /**
     * <p>A list of strings to provide custom labels for SELinux and AppArmor
     * multi-level security systems. This field isn't valid for containers in tasks
     * using the Fargate launch type.</p> <p>With Windows containers, this parameter
     * can be used to reference a credential spec file when configuring a container for
     * Active Directory authentication. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/windows-gmsa.html">Using
     * gMSAs for Windows Containers</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p> <p>This parameter maps to <code>SecurityOpt</code> in
     * the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--security-opt</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>The Amazon ECS container agent running on a container
     * instance must register with the <code>ECS_SELINUX_CAPABLE=true</code> or
     * <code>ECS_APPARMOR_CAPABLE=true</code> environment variables before containers
     * placed on that instance can use these security options. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon
     * ECS Container Agent Configuration</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>  <p>For more information about valid values, see
     * <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">Docker
     * Run Security Configuration</a>. </p> <p>Valid values: "no-new-privileges" |
     * "apparmor:PROFILE" | "label:value" | "credentialspec:CredentialSpecFilePath"</p>
     */
    inline ContainerDefinition& WithDockerSecurityOptions(const Aws::Vector<Aws::String>& value) { SetDockerSecurityOptions(value); return *this;}

    /**
     * <p>A list of strings to provide custom labels for SELinux and AppArmor
     * multi-level security systems. This field isn't valid for containers in tasks
     * using the Fargate launch type.</p> <p>With Windows containers, this parameter
     * can be used to reference a credential spec file when configuring a container for
     * Active Directory authentication. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/windows-gmsa.html">Using
     * gMSAs for Windows Containers</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p> <p>This parameter maps to <code>SecurityOpt</code> in
     * the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--security-opt</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>The Amazon ECS container agent running on a container
     * instance must register with the <code>ECS_SELINUX_CAPABLE=true</code> or
     * <code>ECS_APPARMOR_CAPABLE=true</code> environment variables before containers
     * placed on that instance can use these security options. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon
     * ECS Container Agent Configuration</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>  <p>For more information about valid values, see
     * <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">Docker
     * Run Security Configuration</a>. </p> <p>Valid values: "no-new-privileges" |
     * "apparmor:PROFILE" | "label:value" | "credentialspec:CredentialSpecFilePath"</p>
     */
    inline ContainerDefinition& WithDockerSecurityOptions(Aws::Vector<Aws::String>&& value) { SetDockerSecurityOptions(std::move(value)); return *this;}

    /**
     * <p>A list of strings to provide custom labels for SELinux and AppArmor
     * multi-level security systems. This field isn't valid for containers in tasks
     * using the Fargate launch type.</p> <p>With Windows containers, this parameter
     * can be used to reference a credential spec file when configuring a container for
     * Active Directory authentication. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/windows-gmsa.html">Using
     * gMSAs for Windows Containers</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p> <p>This parameter maps to <code>SecurityOpt</code> in
     * the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--security-opt</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>The Amazon ECS container agent running on a container
     * instance must register with the <code>ECS_SELINUX_CAPABLE=true</code> or
     * <code>ECS_APPARMOR_CAPABLE=true</code> environment variables before containers
     * placed on that instance can use these security options. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon
     * ECS Container Agent Configuration</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>  <p>For more information about valid values, see
     * <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">Docker
     * Run Security Configuration</a>. </p> <p>Valid values: "no-new-privileges" |
     * "apparmor:PROFILE" | "label:value" | "credentialspec:CredentialSpecFilePath"</p>
     */
    inline ContainerDefinition& AddDockerSecurityOptions(const Aws::String& value) { m_dockerSecurityOptionsHasBeenSet = true; m_dockerSecurityOptions.push_back(value); return *this; }

    /**
     * <p>A list of strings to provide custom labels for SELinux and AppArmor
     * multi-level security systems. This field isn't valid for containers in tasks
     * using the Fargate launch type.</p> <p>With Windows containers, this parameter
     * can be used to reference a credential spec file when configuring a container for
     * Active Directory authentication. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/windows-gmsa.html">Using
     * gMSAs for Windows Containers</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p> <p>This parameter maps to <code>SecurityOpt</code> in
     * the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--security-opt</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>The Amazon ECS container agent running on a container
     * instance must register with the <code>ECS_SELINUX_CAPABLE=true</code> or
     * <code>ECS_APPARMOR_CAPABLE=true</code> environment variables before containers
     * placed on that instance can use these security options. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon
     * ECS Container Agent Configuration</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>  <p>For more information about valid values, see
     * <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">Docker
     * Run Security Configuration</a>. </p> <p>Valid values: "no-new-privileges" |
     * "apparmor:PROFILE" | "label:value" | "credentialspec:CredentialSpecFilePath"</p>
     */
    inline ContainerDefinition& AddDockerSecurityOptions(Aws::String&& value) { m_dockerSecurityOptionsHasBeenSet = true; m_dockerSecurityOptions.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of strings to provide custom labels for SELinux and AppArmor
     * multi-level security systems. This field isn't valid for containers in tasks
     * using the Fargate launch type.</p> <p>With Windows containers, this parameter
     * can be used to reference a credential spec file when configuring a container for
     * Active Directory authentication. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/windows-gmsa.html">Using
     * gMSAs for Windows Containers</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p> <p>This parameter maps to <code>SecurityOpt</code> in
     * the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--security-opt</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>The Amazon ECS container agent running on a container
     * instance must register with the <code>ECS_SELINUX_CAPABLE=true</code> or
     * <code>ECS_APPARMOR_CAPABLE=true</code> environment variables before containers
     * placed on that instance can use these security options. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon
     * ECS Container Agent Configuration</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p>  <p>For more information about valid values, see
     * <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">Docker
     * Run Security Configuration</a>. </p> <p>Valid values: "no-new-privileges" |
     * "apparmor:PROFILE" | "label:value" | "credentialspec:CredentialSpecFilePath"</p>
     */
    inline ContainerDefinition& AddDockerSecurityOptions(const char* value) { m_dockerSecurityOptionsHasBeenSet = true; m_dockerSecurityOptions.push_back(value); return *this; }


    /**
     * <p>When this parameter is <code>true</code>, you can deploy containerized
     * applications that require <code>stdin</code> or a <code>tty</code> to be
     * allocated. This parameter maps to <code>OpenStdin</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--interactive</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>
     */
    inline bool GetInteractive() const{ return m_interactive; }

    /**
     * <p>When this parameter is <code>true</code>, you can deploy containerized
     * applications that require <code>stdin</code> or a <code>tty</code> to be
     * allocated. This parameter maps to <code>OpenStdin</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--interactive</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>
     */
    inline bool InteractiveHasBeenSet() const { return m_interactiveHasBeenSet; }

    /**
     * <p>When this parameter is <code>true</code>, you can deploy containerized
     * applications that require <code>stdin</code> or a <code>tty</code> to be
     * allocated. This parameter maps to <code>OpenStdin</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--interactive</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>
     */
    inline void SetInteractive(bool value) { m_interactiveHasBeenSet = true; m_interactive = value; }

    /**
     * <p>When this parameter is <code>true</code>, you can deploy containerized
     * applications that require <code>stdin</code> or a <code>tty</code> to be
     * allocated. This parameter maps to <code>OpenStdin</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--interactive</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>
     */
    inline ContainerDefinition& WithInteractive(bool value) { SetInteractive(value); return *this;}


    /**
     * <p>When this parameter is <code>true</code>, a TTY is allocated. This parameter
     * maps to <code>Tty</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--tty</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>
     */
    inline bool GetPseudoTerminal() const{ return m_pseudoTerminal; }

    /**
     * <p>When this parameter is <code>true</code>, a TTY is allocated. This parameter
     * maps to <code>Tty</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--tty</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>
     */
    inline bool PseudoTerminalHasBeenSet() const { return m_pseudoTerminalHasBeenSet; }

    /**
     * <p>When this parameter is <code>true</code>, a TTY is allocated. This parameter
     * maps to <code>Tty</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--tty</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>
     */
    inline void SetPseudoTerminal(bool value) { m_pseudoTerminalHasBeenSet = true; m_pseudoTerminal = value; }

    /**
     * <p>When this parameter is <code>true</code>, a TTY is allocated. This parameter
     * maps to <code>Tty</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--tty</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>
     */
    inline ContainerDefinition& WithPseudoTerminal(bool value) { SetPseudoTerminal(value); return *this;}


    /**
     * <p>A key/value map of labels to add to the container. This parameter maps to
     * <code>Labels</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--label</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. This parameter requires version 1.18 of the Docker Remote API or
     * greater on your container instance. To check the Docker Remote API version on
     * your container instance, log in to your container instance and run the following
     * command: <code>sudo docker version --format '{{.Server.APIVersion}}'</code> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDockerLabels() const{ return m_dockerLabels; }

    /**
     * <p>A key/value map of labels to add to the container. This parameter maps to
     * <code>Labels</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--label</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. This parameter requires version 1.18 of the Docker Remote API or
     * greater on your container instance. To check the Docker Remote API version on
     * your container instance, log in to your container instance and run the following
     * command: <code>sudo docker version --format '{{.Server.APIVersion}}'</code> </p>
     */
    inline bool DockerLabelsHasBeenSet() const { return m_dockerLabelsHasBeenSet; }

    /**
     * <p>A key/value map of labels to add to the container. This parameter maps to
     * <code>Labels</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--label</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. This parameter requires version 1.18 of the Docker Remote API or
     * greater on your container instance. To check the Docker Remote API version on
     * your container instance, log in to your container instance and run the following
     * command: <code>sudo docker version --format '{{.Server.APIVersion}}'</code> </p>
     */
    inline void SetDockerLabels(const Aws::Map<Aws::String, Aws::String>& value) { m_dockerLabelsHasBeenSet = true; m_dockerLabels = value; }

    /**
     * <p>A key/value map of labels to add to the container. This parameter maps to
     * <code>Labels</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--label</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. This parameter requires version 1.18 of the Docker Remote API or
     * greater on your container instance. To check the Docker Remote API version on
     * your container instance, log in to your container instance and run the following
     * command: <code>sudo docker version --format '{{.Server.APIVersion}}'</code> </p>
     */
    inline void SetDockerLabels(Aws::Map<Aws::String, Aws::String>&& value) { m_dockerLabelsHasBeenSet = true; m_dockerLabels = std::move(value); }

    /**
     * <p>A key/value map of labels to add to the container. This parameter maps to
     * <code>Labels</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--label</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. This parameter requires version 1.18 of the Docker Remote API or
     * greater on your container instance. To check the Docker Remote API version on
     * your container instance, log in to your container instance and run the following
     * command: <code>sudo docker version --format '{{.Server.APIVersion}}'</code> </p>
     */
    inline ContainerDefinition& WithDockerLabels(const Aws::Map<Aws::String, Aws::String>& value) { SetDockerLabels(value); return *this;}

    /**
     * <p>A key/value map of labels to add to the container. This parameter maps to
     * <code>Labels</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--label</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. This parameter requires version 1.18 of the Docker Remote API or
     * greater on your container instance. To check the Docker Remote API version on
     * your container instance, log in to your container instance and run the following
     * command: <code>sudo docker version --format '{{.Server.APIVersion}}'</code> </p>
     */
    inline ContainerDefinition& WithDockerLabels(Aws::Map<Aws::String, Aws::String>&& value) { SetDockerLabels(std::move(value)); return *this;}

    /**
     * <p>A key/value map of labels to add to the container. This parameter maps to
     * <code>Labels</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--label</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. This parameter requires version 1.18 of the Docker Remote API or
     * greater on your container instance. To check the Docker Remote API version on
     * your container instance, log in to your container instance and run the following
     * command: <code>sudo docker version --format '{{.Server.APIVersion}}'</code> </p>
     */
    inline ContainerDefinition& AddDockerLabels(const Aws::String& key, const Aws::String& value) { m_dockerLabelsHasBeenSet = true; m_dockerLabels.emplace(key, value); return *this; }

    /**
     * <p>A key/value map of labels to add to the container. This parameter maps to
     * <code>Labels</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--label</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. This parameter requires version 1.18 of the Docker Remote API or
     * greater on your container instance. To check the Docker Remote API version on
     * your container instance, log in to your container instance and run the following
     * command: <code>sudo docker version --format '{{.Server.APIVersion}}'</code> </p>
     */
    inline ContainerDefinition& AddDockerLabels(Aws::String&& key, const Aws::String& value) { m_dockerLabelsHasBeenSet = true; m_dockerLabels.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key/value map of labels to add to the container. This parameter maps to
     * <code>Labels</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--label</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. This parameter requires version 1.18 of the Docker Remote API or
     * greater on your container instance. To check the Docker Remote API version on
     * your container instance, log in to your container instance and run the following
     * command: <code>sudo docker version --format '{{.Server.APIVersion}}'</code> </p>
     */
    inline ContainerDefinition& AddDockerLabels(const Aws::String& key, Aws::String&& value) { m_dockerLabelsHasBeenSet = true; m_dockerLabels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key/value map of labels to add to the container. This parameter maps to
     * <code>Labels</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--label</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. This parameter requires version 1.18 of the Docker Remote API or
     * greater on your container instance. To check the Docker Remote API version on
     * your container instance, log in to your container instance and run the following
     * command: <code>sudo docker version --format '{{.Server.APIVersion}}'</code> </p>
     */
    inline ContainerDefinition& AddDockerLabels(Aws::String&& key, Aws::String&& value) { m_dockerLabelsHasBeenSet = true; m_dockerLabels.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A key/value map of labels to add to the container. This parameter maps to
     * <code>Labels</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--label</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. This parameter requires version 1.18 of the Docker Remote API or
     * greater on your container instance. To check the Docker Remote API version on
     * your container instance, log in to your container instance and run the following
     * command: <code>sudo docker version --format '{{.Server.APIVersion}}'</code> </p>
     */
    inline ContainerDefinition& AddDockerLabels(const char* key, Aws::String&& value) { m_dockerLabelsHasBeenSet = true; m_dockerLabels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key/value map of labels to add to the container. This parameter maps to
     * <code>Labels</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--label</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. This parameter requires version 1.18 of the Docker Remote API or
     * greater on your container instance. To check the Docker Remote API version on
     * your container instance, log in to your container instance and run the following
     * command: <code>sudo docker version --format '{{.Server.APIVersion}}'</code> </p>
     */
    inline ContainerDefinition& AddDockerLabels(Aws::String&& key, const char* value) { m_dockerLabelsHasBeenSet = true; m_dockerLabels.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key/value map of labels to add to the container. This parameter maps to
     * <code>Labels</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--label</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. This parameter requires version 1.18 of the Docker Remote API or
     * greater on your container instance. To check the Docker Remote API version on
     * your container instance, log in to your container instance and run the following
     * command: <code>sudo docker version --format '{{.Server.APIVersion}}'</code> </p>
     */
    inline ContainerDefinition& AddDockerLabels(const char* key, const char* value) { m_dockerLabelsHasBeenSet = true; m_dockerLabels.emplace(key, value); return *this; }


    /**
     * <p>A list of <code>ulimits</code> to set in the container. If a
     * <code>ulimit</code> value is specified in a task definition, it overrides the
     * default values set by Docker. This parameter maps to <code>Ulimits</code> in the
     * <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--ulimit</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. Valid naming values are displayed in the <a>Ulimit</a> data type.</p>
     * <p>Amazon ECS tasks hosted on Fargate use the default resource limit values set
     * by the operating system with the exception of the <code>nofile</code> resource
     * limit parameter which Fargate overrides. The <code>nofile</code> resource limit
     * sets a restriction on the number of open files that a container can use. The
     * default <code>nofile</code> soft limit is <code>1024</code> and hard limit is
     * <code>4096</code>.</p> <p>This parameter requires version 1.18 of the Docker
     * Remote API or greater on your container instance. To check the Docker Remote API
     * version on your container instance, log in to your container instance and run
     * the following command: <code>sudo docker version --format
     * '{{.Server.APIVersion}}'</code> </p>  <p>This parameter is not supported
     * for Windows containers.</p> 
     */
    inline const Aws::Vector<Ulimit>& GetUlimits() const{ return m_ulimits; }

    /**
     * <p>A list of <code>ulimits</code> to set in the container. If a
     * <code>ulimit</code> value is specified in a task definition, it overrides the
     * default values set by Docker. This parameter maps to <code>Ulimits</code> in the
     * <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--ulimit</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. Valid naming values are displayed in the <a>Ulimit</a> data type.</p>
     * <p>Amazon ECS tasks hosted on Fargate use the default resource limit values set
     * by the operating system with the exception of the <code>nofile</code> resource
     * limit parameter which Fargate overrides. The <code>nofile</code> resource limit
     * sets a restriction on the number of open files that a container can use. The
     * default <code>nofile</code> soft limit is <code>1024</code> and hard limit is
     * <code>4096</code>.</p> <p>This parameter requires version 1.18 of the Docker
     * Remote API or greater on your container instance. To check the Docker Remote API
     * version on your container instance, log in to your container instance and run
     * the following command: <code>sudo docker version --format
     * '{{.Server.APIVersion}}'</code> </p>  <p>This parameter is not supported
     * for Windows containers.</p> 
     */
    inline bool UlimitsHasBeenSet() const { return m_ulimitsHasBeenSet; }

    /**
     * <p>A list of <code>ulimits</code> to set in the container. If a
     * <code>ulimit</code> value is specified in a task definition, it overrides the
     * default values set by Docker. This parameter maps to <code>Ulimits</code> in the
     * <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--ulimit</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. Valid naming values are displayed in the <a>Ulimit</a> data type.</p>
     * <p>Amazon ECS tasks hosted on Fargate use the default resource limit values set
     * by the operating system with the exception of the <code>nofile</code> resource
     * limit parameter which Fargate overrides. The <code>nofile</code> resource limit
     * sets a restriction on the number of open files that a container can use. The
     * default <code>nofile</code> soft limit is <code>1024</code> and hard limit is
     * <code>4096</code>.</p> <p>This parameter requires version 1.18 of the Docker
     * Remote API or greater on your container instance. To check the Docker Remote API
     * version on your container instance, log in to your container instance and run
     * the following command: <code>sudo docker version --format
     * '{{.Server.APIVersion}}'</code> </p>  <p>This parameter is not supported
     * for Windows containers.</p> 
     */
    inline void SetUlimits(const Aws::Vector<Ulimit>& value) { m_ulimitsHasBeenSet = true; m_ulimits = value; }

    /**
     * <p>A list of <code>ulimits</code> to set in the container. If a
     * <code>ulimit</code> value is specified in a task definition, it overrides the
     * default values set by Docker. This parameter maps to <code>Ulimits</code> in the
     * <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--ulimit</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. Valid naming values are displayed in the <a>Ulimit</a> data type.</p>
     * <p>Amazon ECS tasks hosted on Fargate use the default resource limit values set
     * by the operating system with the exception of the <code>nofile</code> resource
     * limit parameter which Fargate overrides. The <code>nofile</code> resource limit
     * sets a restriction on the number of open files that a container can use. The
     * default <code>nofile</code> soft limit is <code>1024</code> and hard limit is
     * <code>4096</code>.</p> <p>This parameter requires version 1.18 of the Docker
     * Remote API or greater on your container instance. To check the Docker Remote API
     * version on your container instance, log in to your container instance and run
     * the following command: <code>sudo docker version --format
     * '{{.Server.APIVersion}}'</code> </p>  <p>This parameter is not supported
     * for Windows containers.</p> 
     */
    inline void SetUlimits(Aws::Vector<Ulimit>&& value) { m_ulimitsHasBeenSet = true; m_ulimits = std::move(value); }

    /**
     * <p>A list of <code>ulimits</code> to set in the container. If a
     * <code>ulimit</code> value is specified in a task definition, it overrides the
     * default values set by Docker. This parameter maps to <code>Ulimits</code> in the
     * <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--ulimit</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. Valid naming values are displayed in the <a>Ulimit</a> data type.</p>
     * <p>Amazon ECS tasks hosted on Fargate use the default resource limit values set
     * by the operating system with the exception of the <code>nofile</code> resource
     * limit parameter which Fargate overrides. The <code>nofile</code> resource limit
     * sets a restriction on the number of open files that a container can use. The
     * default <code>nofile</code> soft limit is <code>1024</code> and hard limit is
     * <code>4096</code>.</p> <p>This parameter requires version 1.18 of the Docker
     * Remote API or greater on your container instance. To check the Docker Remote API
     * version on your container instance, log in to your container instance and run
     * the following command: <code>sudo docker version --format
     * '{{.Server.APIVersion}}'</code> </p>  <p>This parameter is not supported
     * for Windows containers.</p> 
     */
    inline ContainerDefinition& WithUlimits(const Aws::Vector<Ulimit>& value) { SetUlimits(value); return *this;}

    /**
     * <p>A list of <code>ulimits</code> to set in the container. If a
     * <code>ulimit</code> value is specified in a task definition, it overrides the
     * default values set by Docker. This parameter maps to <code>Ulimits</code> in the
     * <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--ulimit</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. Valid naming values are displayed in the <a>Ulimit</a> data type.</p>
     * <p>Amazon ECS tasks hosted on Fargate use the default resource limit values set
     * by the operating system with the exception of the <code>nofile</code> resource
     * limit parameter which Fargate overrides. The <code>nofile</code> resource limit
     * sets a restriction on the number of open files that a container can use. The
     * default <code>nofile</code> soft limit is <code>1024</code> and hard limit is
     * <code>4096</code>.</p> <p>This parameter requires version 1.18 of the Docker
     * Remote API or greater on your container instance. To check the Docker Remote API
     * version on your container instance, log in to your container instance and run
     * the following command: <code>sudo docker version --format
     * '{{.Server.APIVersion}}'</code> </p>  <p>This parameter is not supported
     * for Windows containers.</p> 
     */
    inline ContainerDefinition& WithUlimits(Aws::Vector<Ulimit>&& value) { SetUlimits(std::move(value)); return *this;}

    /**
     * <p>A list of <code>ulimits</code> to set in the container. If a
     * <code>ulimit</code> value is specified in a task definition, it overrides the
     * default values set by Docker. This parameter maps to <code>Ulimits</code> in the
     * <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--ulimit</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. Valid naming values are displayed in the <a>Ulimit</a> data type.</p>
     * <p>Amazon ECS tasks hosted on Fargate use the default resource limit values set
     * by the operating system with the exception of the <code>nofile</code> resource
     * limit parameter which Fargate overrides. The <code>nofile</code> resource limit
     * sets a restriction on the number of open files that a container can use. The
     * default <code>nofile</code> soft limit is <code>1024</code> and hard limit is
     * <code>4096</code>.</p> <p>This parameter requires version 1.18 of the Docker
     * Remote API or greater on your container instance. To check the Docker Remote API
     * version on your container instance, log in to your container instance and run
     * the following command: <code>sudo docker version --format
     * '{{.Server.APIVersion}}'</code> </p>  <p>This parameter is not supported
     * for Windows containers.</p> 
     */
    inline ContainerDefinition& AddUlimits(const Ulimit& value) { m_ulimitsHasBeenSet = true; m_ulimits.push_back(value); return *this; }

    /**
     * <p>A list of <code>ulimits</code> to set in the container. If a
     * <code>ulimit</code> value is specified in a task definition, it overrides the
     * default values set by Docker. This parameter maps to <code>Ulimits</code> in the
     * <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--ulimit</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. Valid naming values are displayed in the <a>Ulimit</a> data type.</p>
     * <p>Amazon ECS tasks hosted on Fargate use the default resource limit values set
     * by the operating system with the exception of the <code>nofile</code> resource
     * limit parameter which Fargate overrides. The <code>nofile</code> resource limit
     * sets a restriction on the number of open files that a container can use. The
     * default <code>nofile</code> soft limit is <code>1024</code> and hard limit is
     * <code>4096</code>.</p> <p>This parameter requires version 1.18 of the Docker
     * Remote API or greater on your container instance. To check the Docker Remote API
     * version on your container instance, log in to your container instance and run
     * the following command: <code>sudo docker version --format
     * '{{.Server.APIVersion}}'</code> </p>  <p>This parameter is not supported
     * for Windows containers.</p> 
     */
    inline ContainerDefinition& AddUlimits(Ulimit&& value) { m_ulimitsHasBeenSet = true; m_ulimits.push_back(std::move(value)); return *this; }


    /**
     * <p>The log configuration specification for the container.</p> <p>This parameter
     * maps to <code>LogConfig</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--log-driver</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. By default, containers use the same logging driver that the Docker
     * daemon uses. However the container can use a different logging driver than the
     * Docker daemon by specifying a log driver with this parameter in the container
     * definition. To use a different logging driver for a container, the log system
     * must be configured properly on the container instance (or on a different log
     * server for remote logging options). For more information about the options for
     * different supported log drivers, see <a
     * href="https://docs.docker.com/engine/admin/logging/overview/">Configure logging
     * drivers</a> in the Docker documentation.</p>  <p>Amazon ECS currently
     * supports a subset of the logging drivers available to the Docker daemon (shown
     * in the <a>LogConfiguration</a> data type). Additional log drivers may be
     * available in future releases of the Amazon ECS container agent.</p> 
     * <p>This parameter requires version 1.18 of the Docker Remote API or greater on
     * your container instance. To check the Docker Remote API version on your
     * container instance, log in to your container instance and run the following
     * command: <code>sudo docker version --format '{{.Server.APIVersion}}'</code> </p>
     *  <p>The Amazon ECS container agent running on a container instance must
     * register the logging drivers available on that instance with the
     * <code>ECS_AVAILABLE_LOGGING_DRIVERS</code> environment variable before
     * containers placed on that instance can use these log configuration options. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon
     * ECS Container Agent Configuration</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p> 
     */
    inline const LogConfiguration& GetLogConfiguration() const{ return m_logConfiguration; }

    /**
     * <p>The log configuration specification for the container.</p> <p>This parameter
     * maps to <code>LogConfig</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--log-driver</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. By default, containers use the same logging driver that the Docker
     * daemon uses. However the container can use a different logging driver than the
     * Docker daemon by specifying a log driver with this parameter in the container
     * definition. To use a different logging driver for a container, the log system
     * must be configured properly on the container instance (or on a different log
     * server for remote logging options). For more information about the options for
     * different supported log drivers, see <a
     * href="https://docs.docker.com/engine/admin/logging/overview/">Configure logging
     * drivers</a> in the Docker documentation.</p>  <p>Amazon ECS currently
     * supports a subset of the logging drivers available to the Docker daemon (shown
     * in the <a>LogConfiguration</a> data type). Additional log drivers may be
     * available in future releases of the Amazon ECS container agent.</p> 
     * <p>This parameter requires version 1.18 of the Docker Remote API or greater on
     * your container instance. To check the Docker Remote API version on your
     * container instance, log in to your container instance and run the following
     * command: <code>sudo docker version --format '{{.Server.APIVersion}}'</code> </p>
     *  <p>The Amazon ECS container agent running on a container instance must
     * register the logging drivers available on that instance with the
     * <code>ECS_AVAILABLE_LOGGING_DRIVERS</code> environment variable before
     * containers placed on that instance can use these log configuration options. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon
     * ECS Container Agent Configuration</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p> 
     */
    inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }

    /**
     * <p>The log configuration specification for the container.</p> <p>This parameter
     * maps to <code>LogConfig</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--log-driver</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. By default, containers use the same logging driver that the Docker
     * daemon uses. However the container can use a different logging driver than the
     * Docker daemon by specifying a log driver with this parameter in the container
     * definition. To use a different logging driver for a container, the log system
     * must be configured properly on the container instance (or on a different log
     * server for remote logging options). For more information about the options for
     * different supported log drivers, see <a
     * href="https://docs.docker.com/engine/admin/logging/overview/">Configure logging
     * drivers</a> in the Docker documentation.</p>  <p>Amazon ECS currently
     * supports a subset of the logging drivers available to the Docker daemon (shown
     * in the <a>LogConfiguration</a> data type). Additional log drivers may be
     * available in future releases of the Amazon ECS container agent.</p> 
     * <p>This parameter requires version 1.18 of the Docker Remote API or greater on
     * your container instance. To check the Docker Remote API version on your
     * container instance, log in to your container instance and run the following
     * command: <code>sudo docker version --format '{{.Server.APIVersion}}'</code> </p>
     *  <p>The Amazon ECS container agent running on a container instance must
     * register the logging drivers available on that instance with the
     * <code>ECS_AVAILABLE_LOGGING_DRIVERS</code> environment variable before
     * containers placed on that instance can use these log configuration options. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon
     * ECS Container Agent Configuration</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p> 
     */
    inline void SetLogConfiguration(const LogConfiguration& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = value; }

    /**
     * <p>The log configuration specification for the container.</p> <p>This parameter
     * maps to <code>LogConfig</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--log-driver</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. By default, containers use the same logging driver that the Docker
     * daemon uses. However the container can use a different logging driver than the
     * Docker daemon by specifying a log driver with this parameter in the container
     * definition. To use a different logging driver for a container, the log system
     * must be configured properly on the container instance (or on a different log
     * server for remote logging options). For more information about the options for
     * different supported log drivers, see <a
     * href="https://docs.docker.com/engine/admin/logging/overview/">Configure logging
     * drivers</a> in the Docker documentation.</p>  <p>Amazon ECS currently
     * supports a subset of the logging drivers available to the Docker daemon (shown
     * in the <a>LogConfiguration</a> data type). Additional log drivers may be
     * available in future releases of the Amazon ECS container agent.</p> 
     * <p>This parameter requires version 1.18 of the Docker Remote API or greater on
     * your container instance. To check the Docker Remote API version on your
     * container instance, log in to your container instance and run the following
     * command: <code>sudo docker version --format '{{.Server.APIVersion}}'</code> </p>
     *  <p>The Amazon ECS container agent running on a container instance must
     * register the logging drivers available on that instance with the
     * <code>ECS_AVAILABLE_LOGGING_DRIVERS</code> environment variable before
     * containers placed on that instance can use these log configuration options. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon
     * ECS Container Agent Configuration</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p> 
     */
    inline void SetLogConfiguration(LogConfiguration&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = std::move(value); }

    /**
     * <p>The log configuration specification for the container.</p> <p>This parameter
     * maps to <code>LogConfig</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--log-driver</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. By default, containers use the same logging driver that the Docker
     * daemon uses. However the container can use a different logging driver than the
     * Docker daemon by specifying a log driver with this parameter in the container
     * definition. To use a different logging driver for a container, the log system
     * must be configured properly on the container instance (or on a different log
     * server for remote logging options). For more information about the options for
     * different supported log drivers, see <a
     * href="https://docs.docker.com/engine/admin/logging/overview/">Configure logging
     * drivers</a> in the Docker documentation.</p>  <p>Amazon ECS currently
     * supports a subset of the logging drivers available to the Docker daemon (shown
     * in the <a>LogConfiguration</a> data type). Additional log drivers may be
     * available in future releases of the Amazon ECS container agent.</p> 
     * <p>This parameter requires version 1.18 of the Docker Remote API or greater on
     * your container instance. To check the Docker Remote API version on your
     * container instance, log in to your container instance and run the following
     * command: <code>sudo docker version --format '{{.Server.APIVersion}}'</code> </p>
     *  <p>The Amazon ECS container agent running on a container instance must
     * register the logging drivers available on that instance with the
     * <code>ECS_AVAILABLE_LOGGING_DRIVERS</code> environment variable before
     * containers placed on that instance can use these log configuration options. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon
     * ECS Container Agent Configuration</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p> 
     */
    inline ContainerDefinition& WithLogConfiguration(const LogConfiguration& value) { SetLogConfiguration(value); return *this;}

    /**
     * <p>The log configuration specification for the container.</p> <p>This parameter
     * maps to <code>LogConfig</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--log-driver</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>. By default, containers use the same logging driver that the Docker
     * daemon uses. However the container can use a different logging driver than the
     * Docker daemon by specifying a log driver with this parameter in the container
     * definition. To use a different logging driver for a container, the log system
     * must be configured properly on the container instance (or on a different log
     * server for remote logging options). For more information about the options for
     * different supported log drivers, see <a
     * href="https://docs.docker.com/engine/admin/logging/overview/">Configure logging
     * drivers</a> in the Docker documentation.</p>  <p>Amazon ECS currently
     * supports a subset of the logging drivers available to the Docker daemon (shown
     * in the <a>LogConfiguration</a> data type). Additional log drivers may be
     * available in future releases of the Amazon ECS container agent.</p> 
     * <p>This parameter requires version 1.18 of the Docker Remote API or greater on
     * your container instance. To check the Docker Remote API version on your
     * container instance, log in to your container instance and run the following
     * command: <code>sudo docker version --format '{{.Server.APIVersion}}'</code> </p>
     *  <p>The Amazon ECS container agent running on a container instance must
     * register the logging drivers available on that instance with the
     * <code>ECS_AVAILABLE_LOGGING_DRIVERS</code> environment variable before
     * containers placed on that instance can use these log configuration options. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon
     * ECS Container Agent Configuration</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p> 
     */
    inline ContainerDefinition& WithLogConfiguration(LogConfiguration&& value) { SetLogConfiguration(std::move(value)); return *this;}


    /**
     * <p>The container health check command and associated configuration parameters
     * for the container. This parameter maps to <code>HealthCheck</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>HEALTHCHECK</code> parameter of <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>
     */
    inline const HealthCheck& GetHealthCheck() const{ return m_healthCheck; }

    /**
     * <p>The container health check command and associated configuration parameters
     * for the container. This parameter maps to <code>HealthCheck</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>HEALTHCHECK</code> parameter of <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>
     */
    inline bool HealthCheckHasBeenSet() const { return m_healthCheckHasBeenSet; }

    /**
     * <p>The container health check command and associated configuration parameters
     * for the container. This parameter maps to <code>HealthCheck</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>HEALTHCHECK</code> parameter of <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>
     */
    inline void SetHealthCheck(const HealthCheck& value) { m_healthCheckHasBeenSet = true; m_healthCheck = value; }

    /**
     * <p>The container health check command and associated configuration parameters
     * for the container. This parameter maps to <code>HealthCheck</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>HEALTHCHECK</code> parameter of <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>
     */
    inline void SetHealthCheck(HealthCheck&& value) { m_healthCheckHasBeenSet = true; m_healthCheck = std::move(value); }

    /**
     * <p>The container health check command and associated configuration parameters
     * for the container. This parameter maps to <code>HealthCheck</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>HEALTHCHECK</code> parameter of <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>
     */
    inline ContainerDefinition& WithHealthCheck(const HealthCheck& value) { SetHealthCheck(value); return *this;}

    /**
     * <p>The container health check command and associated configuration parameters
     * for the container. This parameter maps to <code>HealthCheck</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>HEALTHCHECK</code> parameter of <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>
     */
    inline ContainerDefinition& WithHealthCheck(HealthCheck&& value) { SetHealthCheck(std::move(value)); return *this;}


    /**
     * <p>A list of namespaced kernel parameters to set in the container. This
     * parameter maps to <code>Sysctls</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--sysctl</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>We don't recommended that you specify network-related
     * <code>systemControls</code> parameters for multiple containers in a single task
     * that also uses either the <code>awsvpc</code> or <code>host</code> network
     * modes. For tasks that use the <code>awsvpc</code> network mode, the container
     * that's started last determines which <code>systemControls</code> parameters take
     * effect. For tasks that use the <code>host</code> network mode, it changes the
     * container instance's namespaced kernel parameters as well as the containers.</p>
     * 
     */
    inline const Aws::Vector<SystemControl>& GetSystemControls() const{ return m_systemControls; }

    /**
     * <p>A list of namespaced kernel parameters to set in the container. This
     * parameter maps to <code>Sysctls</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--sysctl</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>We don't recommended that you specify network-related
     * <code>systemControls</code> parameters for multiple containers in a single task
     * that also uses either the <code>awsvpc</code> or <code>host</code> network
     * modes. For tasks that use the <code>awsvpc</code> network mode, the container
     * that's started last determines which <code>systemControls</code> parameters take
     * effect. For tasks that use the <code>host</code> network mode, it changes the
     * container instance's namespaced kernel parameters as well as the containers.</p>
     * 
     */
    inline bool SystemControlsHasBeenSet() const { return m_systemControlsHasBeenSet; }

    /**
     * <p>A list of namespaced kernel parameters to set in the container. This
     * parameter maps to <code>Sysctls</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--sysctl</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>We don't recommended that you specify network-related
     * <code>systemControls</code> parameters for multiple containers in a single task
     * that also uses either the <code>awsvpc</code> or <code>host</code> network
     * modes. For tasks that use the <code>awsvpc</code> network mode, the container
     * that's started last determines which <code>systemControls</code> parameters take
     * effect. For tasks that use the <code>host</code> network mode, it changes the
     * container instance's namespaced kernel parameters as well as the containers.</p>
     * 
     */
    inline void SetSystemControls(const Aws::Vector<SystemControl>& value) { m_systemControlsHasBeenSet = true; m_systemControls = value; }

    /**
     * <p>A list of namespaced kernel parameters to set in the container. This
     * parameter maps to <code>Sysctls</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--sysctl</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>We don't recommended that you specify network-related
     * <code>systemControls</code> parameters for multiple containers in a single task
     * that also uses either the <code>awsvpc</code> or <code>host</code> network
     * modes. For tasks that use the <code>awsvpc</code> network mode, the container
     * that's started last determines which <code>systemControls</code> parameters take
     * effect. For tasks that use the <code>host</code> network mode, it changes the
     * container instance's namespaced kernel parameters as well as the containers.</p>
     * 
     */
    inline void SetSystemControls(Aws::Vector<SystemControl>&& value) { m_systemControlsHasBeenSet = true; m_systemControls = std::move(value); }

    /**
     * <p>A list of namespaced kernel parameters to set in the container. This
     * parameter maps to <code>Sysctls</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--sysctl</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>We don't recommended that you specify network-related
     * <code>systemControls</code> parameters for multiple containers in a single task
     * that also uses either the <code>awsvpc</code> or <code>host</code> network
     * modes. For tasks that use the <code>awsvpc</code> network mode, the container
     * that's started last determines which <code>systemControls</code> parameters take
     * effect. For tasks that use the <code>host</code> network mode, it changes the
     * container instance's namespaced kernel parameters as well as the containers.</p>
     * 
     */
    inline ContainerDefinition& WithSystemControls(const Aws::Vector<SystemControl>& value) { SetSystemControls(value); return *this;}

    /**
     * <p>A list of namespaced kernel parameters to set in the container. This
     * parameter maps to <code>Sysctls</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--sysctl</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>We don't recommended that you specify network-related
     * <code>systemControls</code> parameters for multiple containers in a single task
     * that also uses either the <code>awsvpc</code> or <code>host</code> network
     * modes. For tasks that use the <code>awsvpc</code> network mode, the container
     * that's started last determines which <code>systemControls</code> parameters take
     * effect. For tasks that use the <code>host</code> network mode, it changes the
     * container instance's namespaced kernel parameters as well as the containers.</p>
     * 
     */
    inline ContainerDefinition& WithSystemControls(Aws::Vector<SystemControl>&& value) { SetSystemControls(std::move(value)); return *this;}

    /**
     * <p>A list of namespaced kernel parameters to set in the container. This
     * parameter maps to <code>Sysctls</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--sysctl</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>We don't recommended that you specify network-related
     * <code>systemControls</code> parameters for multiple containers in a single task
     * that also uses either the <code>awsvpc</code> or <code>host</code> network
     * modes. For tasks that use the <code>awsvpc</code> network mode, the container
     * that's started last determines which <code>systemControls</code> parameters take
     * effect. For tasks that use the <code>host</code> network mode, it changes the
     * container instance's namespaced kernel parameters as well as the containers.</p>
     * 
     */
    inline ContainerDefinition& AddSystemControls(const SystemControl& value) { m_systemControlsHasBeenSet = true; m_systemControls.push_back(value); return *this; }

    /**
     * <p>A list of namespaced kernel parameters to set in the container. This
     * parameter maps to <code>Sysctls</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--sysctl</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>We don't recommended that you specify network-related
     * <code>systemControls</code> parameters for multiple containers in a single task
     * that also uses either the <code>awsvpc</code> or <code>host</code> network
     * modes. For tasks that use the <code>awsvpc</code> network mode, the container
     * that's started last determines which <code>systemControls</code> parameters take
     * effect. For tasks that use the <code>host</code> network mode, it changes the
     * container instance's namespaced kernel parameters as well as the containers.</p>
     * 
     */
    inline ContainerDefinition& AddSystemControls(SystemControl&& value) { m_systemControlsHasBeenSet = true; m_systemControls.push_back(std::move(value)); return *this; }


    /**
     * <p>The type and amount of a resource to assign to a container. The only
     * supported resource is a GPU.</p>
     */
    inline const Aws::Vector<ResourceRequirement>& GetResourceRequirements() const{ return m_resourceRequirements; }

    /**
     * <p>The type and amount of a resource to assign to a container. The only
     * supported resource is a GPU.</p>
     */
    inline bool ResourceRequirementsHasBeenSet() const { return m_resourceRequirementsHasBeenSet; }

    /**
     * <p>The type and amount of a resource to assign to a container. The only
     * supported resource is a GPU.</p>
     */
    inline void SetResourceRequirements(const Aws::Vector<ResourceRequirement>& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements = value; }

    /**
     * <p>The type and amount of a resource to assign to a container. The only
     * supported resource is a GPU.</p>
     */
    inline void SetResourceRequirements(Aws::Vector<ResourceRequirement>&& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements = std::move(value); }

    /**
     * <p>The type and amount of a resource to assign to a container. The only
     * supported resource is a GPU.</p>
     */
    inline ContainerDefinition& WithResourceRequirements(const Aws::Vector<ResourceRequirement>& value) { SetResourceRequirements(value); return *this;}

    /**
     * <p>The type and amount of a resource to assign to a container. The only
     * supported resource is a GPU.</p>
     */
    inline ContainerDefinition& WithResourceRequirements(Aws::Vector<ResourceRequirement>&& value) { SetResourceRequirements(std::move(value)); return *this;}

    /**
     * <p>The type and amount of a resource to assign to a container. The only
     * supported resource is a GPU.</p>
     */
    inline ContainerDefinition& AddResourceRequirements(const ResourceRequirement& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements.push_back(value); return *this; }

    /**
     * <p>The type and amount of a resource to assign to a container. The only
     * supported resource is a GPU.</p>
     */
    inline ContainerDefinition& AddResourceRequirements(ResourceRequirement&& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements.push_back(std::move(value)); return *this; }


    /**
     * <p>The FireLens configuration for the container. This is used to specify and
     * configure a log router for container logs. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/using_firelens.html">Custom
     * Log Routing</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const FirelensConfiguration& GetFirelensConfiguration() const{ return m_firelensConfiguration; }

    /**
     * <p>The FireLens configuration for the container. This is used to specify and
     * configure a log router for container logs. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/using_firelens.html">Custom
     * Log Routing</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline bool FirelensConfigurationHasBeenSet() const { return m_firelensConfigurationHasBeenSet; }

    /**
     * <p>The FireLens configuration for the container. This is used to specify and
     * configure a log router for container logs. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/using_firelens.html">Custom
     * Log Routing</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetFirelensConfiguration(const FirelensConfiguration& value) { m_firelensConfigurationHasBeenSet = true; m_firelensConfiguration = value; }

    /**
     * <p>The FireLens configuration for the container. This is used to specify and
     * configure a log router for container logs. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/using_firelens.html">Custom
     * Log Routing</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetFirelensConfiguration(FirelensConfiguration&& value) { m_firelensConfigurationHasBeenSet = true; m_firelensConfiguration = std::move(value); }

    /**
     * <p>The FireLens configuration for the container. This is used to specify and
     * configure a log router for container logs. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/using_firelens.html">Custom
     * Log Routing</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline ContainerDefinition& WithFirelensConfiguration(const FirelensConfiguration& value) { SetFirelensConfiguration(value); return *this;}

    /**
     * <p>The FireLens configuration for the container. This is used to specify and
     * configure a log router for container logs. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/using_firelens.html">Custom
     * Log Routing</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline ContainerDefinition& WithFirelensConfiguration(FirelensConfiguration&& value) { SetFirelensConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_image;
    bool m_imageHasBeenSet = false;

    RepositoryCredentials m_repositoryCredentials;
    bool m_repositoryCredentialsHasBeenSet = false;

    int m_cpu;
    bool m_cpuHasBeenSet = false;

    int m_memory;
    bool m_memoryHasBeenSet = false;

    int m_memoryReservation;
    bool m_memoryReservationHasBeenSet = false;

    Aws::Vector<Aws::String> m_links;
    bool m_linksHasBeenSet = false;

    Aws::Vector<PortMapping> m_portMappings;
    bool m_portMappingsHasBeenSet = false;

    bool m_essential;
    bool m_essentialHasBeenSet = false;

    Aws::Vector<Aws::String> m_entryPoint;
    bool m_entryPointHasBeenSet = false;

    Aws::Vector<Aws::String> m_command;
    bool m_commandHasBeenSet = false;

    Aws::Vector<KeyValuePair> m_environment;
    bool m_environmentHasBeenSet = false;

    Aws::Vector<EnvironmentFile> m_environmentFiles;
    bool m_environmentFilesHasBeenSet = false;

    Aws::Vector<MountPoint> m_mountPoints;
    bool m_mountPointsHasBeenSet = false;

    Aws::Vector<VolumeFrom> m_volumesFrom;
    bool m_volumesFromHasBeenSet = false;

    LinuxParameters m_linuxParameters;
    bool m_linuxParametersHasBeenSet = false;

    Aws::Vector<Secret> m_secrets;
    bool m_secretsHasBeenSet = false;

    Aws::Vector<ContainerDependency> m_dependsOn;
    bool m_dependsOnHasBeenSet = false;

    int m_startTimeout;
    bool m_startTimeoutHasBeenSet = false;

    int m_stopTimeout;
    bool m_stopTimeoutHasBeenSet = false;

    Aws::String m_hostname;
    bool m_hostnameHasBeenSet = false;

    Aws::String m_user;
    bool m_userHasBeenSet = false;

    Aws::String m_workingDirectory;
    bool m_workingDirectoryHasBeenSet = false;

    bool m_disableNetworking;
    bool m_disableNetworkingHasBeenSet = false;

    bool m_privileged;
    bool m_privilegedHasBeenSet = false;

    bool m_readonlyRootFilesystem;
    bool m_readonlyRootFilesystemHasBeenSet = false;

    Aws::Vector<Aws::String> m_dnsServers;
    bool m_dnsServersHasBeenSet = false;

    Aws::Vector<Aws::String> m_dnsSearchDomains;
    bool m_dnsSearchDomainsHasBeenSet = false;

    Aws::Vector<HostEntry> m_extraHosts;
    bool m_extraHostsHasBeenSet = false;

    Aws::Vector<Aws::String> m_dockerSecurityOptions;
    bool m_dockerSecurityOptionsHasBeenSet = false;

    bool m_interactive;
    bool m_interactiveHasBeenSet = false;

    bool m_pseudoTerminal;
    bool m_pseudoTerminalHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_dockerLabels;
    bool m_dockerLabelsHasBeenSet = false;

    Aws::Vector<Ulimit> m_ulimits;
    bool m_ulimitsHasBeenSet = false;

    LogConfiguration m_logConfiguration;
    bool m_logConfigurationHasBeenSet = false;

    HealthCheck m_healthCheck;
    bool m_healthCheckHasBeenSet = false;

    Aws::Vector<SystemControl> m_systemControls;
    bool m_systemControlsHasBeenSet = false;

    Aws::Vector<ResourceRequirement> m_resourceRequirements;
    bool m_resourceRequirementsHasBeenSet = false;

    FirelensConfiguration m_firelensConfiguration;
    bool m_firelensConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
