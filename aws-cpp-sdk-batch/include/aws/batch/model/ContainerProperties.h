/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/LinuxParameters.h>
#include <aws/batch/model/LogConfiguration.h>
#include <aws/batch/model/NetworkConfiguration.h>
#include <aws/batch/model/FargatePlatformConfiguration.h>
#include <aws/batch/model/Volume.h>
#include <aws/batch/model/KeyValuePair.h>
#include <aws/batch/model/MountPoint.h>
#include <aws/batch/model/Ulimit.h>
#include <aws/batch/model/ResourceRequirement.h>
#include <aws/batch/model/Secret.h>
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
   * <p>Container properties are used for Amazon ECS based job definitions. These
   * properties to describe the container that's launched as part of a
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ContainerProperties">AWS
   * API Reference</a></p>
   */
  class ContainerProperties
  {
  public:
    AWS_BATCH_API ContainerProperties();
    AWS_BATCH_API ContainerProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API ContainerProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The image used to start a container. This string is passed directly to the
     * Docker daemon. Images in the Docker Hub registry are available by default. Other
     * repositories are specified with <code>
     * <i>repository-url</i>/<i>image</i>:<i>tag</i> </code>. It can be 255 characters
     * long. It can contain uppercase and lowercase letters, numbers, hyphens (-),
     * underscores (_), colons (:), periods (.), forward slashes (/), and number signs
     * (#). This parameter maps to <code>Image</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>IMAGE</code> parameter of <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> 
     * <p>Docker image architecture must match the processor architecture of the
     * compute resources that they're scheduled on. For example, ARM-based Docker
     * images can only run on ARM-based compute resources.</p>  <ul> <li>
     * <p>Images in Amazon ECR Public repositories use the full
     * <code>registry/repository[:tag]</code> or
     * <code>registry/repository[@digest]</code> naming conventions. For example,
     * <code>public.ecr.aws/<i>registry_alias</i>/<i>my-web-app</i>:<i>latest</i>
     * </code>.</p> </li> <li> <p>Images in Amazon ECR repositories use the full
     * registry and repository URI (for example,
     * <code>123456789012.dkr.ecr.&lt;region-name&gt;.amazonaws.com/&lt;repository-name&gt;</code>).</p>
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
     * <i>repository-url</i>/<i>image</i>:<i>tag</i> </code>. It can be 255 characters
     * long. It can contain uppercase and lowercase letters, numbers, hyphens (-),
     * underscores (_), colons (:), periods (.), forward slashes (/), and number signs
     * (#). This parameter maps to <code>Image</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>IMAGE</code> parameter of <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> 
     * <p>Docker image architecture must match the processor architecture of the
     * compute resources that they're scheduled on. For example, ARM-based Docker
     * images can only run on ARM-based compute resources.</p>  <ul> <li>
     * <p>Images in Amazon ECR Public repositories use the full
     * <code>registry/repository[:tag]</code> or
     * <code>registry/repository[@digest]</code> naming conventions. For example,
     * <code>public.ecr.aws/<i>registry_alias</i>/<i>my-web-app</i>:<i>latest</i>
     * </code>.</p> </li> <li> <p>Images in Amazon ECR repositories use the full
     * registry and repository URI (for example,
     * <code>123456789012.dkr.ecr.&lt;region-name&gt;.amazonaws.com/&lt;repository-name&gt;</code>).</p>
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
     * <i>repository-url</i>/<i>image</i>:<i>tag</i> </code>. It can be 255 characters
     * long. It can contain uppercase and lowercase letters, numbers, hyphens (-),
     * underscores (_), colons (:), periods (.), forward slashes (/), and number signs
     * (#). This parameter maps to <code>Image</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>IMAGE</code> parameter of <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> 
     * <p>Docker image architecture must match the processor architecture of the
     * compute resources that they're scheduled on. For example, ARM-based Docker
     * images can only run on ARM-based compute resources.</p>  <ul> <li>
     * <p>Images in Amazon ECR Public repositories use the full
     * <code>registry/repository[:tag]</code> or
     * <code>registry/repository[@digest]</code> naming conventions. For example,
     * <code>public.ecr.aws/<i>registry_alias</i>/<i>my-web-app</i>:<i>latest</i>
     * </code>.</p> </li> <li> <p>Images in Amazon ECR repositories use the full
     * registry and repository URI (for example,
     * <code>123456789012.dkr.ecr.&lt;region-name&gt;.amazonaws.com/&lt;repository-name&gt;</code>).</p>
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
     * <i>repository-url</i>/<i>image</i>:<i>tag</i> </code>. It can be 255 characters
     * long. It can contain uppercase and lowercase letters, numbers, hyphens (-),
     * underscores (_), colons (:), periods (.), forward slashes (/), and number signs
     * (#). This parameter maps to <code>Image</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>IMAGE</code> parameter of <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> 
     * <p>Docker image architecture must match the processor architecture of the
     * compute resources that they're scheduled on. For example, ARM-based Docker
     * images can only run on ARM-based compute resources.</p>  <ul> <li>
     * <p>Images in Amazon ECR Public repositories use the full
     * <code>registry/repository[:tag]</code> or
     * <code>registry/repository[@digest]</code> naming conventions. For example,
     * <code>public.ecr.aws/<i>registry_alias</i>/<i>my-web-app</i>:<i>latest</i>
     * </code>.</p> </li> <li> <p>Images in Amazon ECR repositories use the full
     * registry and repository URI (for example,
     * <code>123456789012.dkr.ecr.&lt;region-name&gt;.amazonaws.com/&lt;repository-name&gt;</code>).</p>
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
     * <i>repository-url</i>/<i>image</i>:<i>tag</i> </code>. It can be 255 characters
     * long. It can contain uppercase and lowercase letters, numbers, hyphens (-),
     * underscores (_), colons (:), periods (.), forward slashes (/), and number signs
     * (#). This parameter maps to <code>Image</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>IMAGE</code> parameter of <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> 
     * <p>Docker image architecture must match the processor architecture of the
     * compute resources that they're scheduled on. For example, ARM-based Docker
     * images can only run on ARM-based compute resources.</p>  <ul> <li>
     * <p>Images in Amazon ECR Public repositories use the full
     * <code>registry/repository[:tag]</code> or
     * <code>registry/repository[@digest]</code> naming conventions. For example,
     * <code>public.ecr.aws/<i>registry_alias</i>/<i>my-web-app</i>:<i>latest</i>
     * </code>.</p> </li> <li> <p>Images in Amazon ECR repositories use the full
     * registry and repository URI (for example,
     * <code>123456789012.dkr.ecr.&lt;region-name&gt;.amazonaws.com/&lt;repository-name&gt;</code>).</p>
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
     * <i>repository-url</i>/<i>image</i>:<i>tag</i> </code>. It can be 255 characters
     * long. It can contain uppercase and lowercase letters, numbers, hyphens (-),
     * underscores (_), colons (:), periods (.), forward slashes (/), and number signs
     * (#). This parameter maps to <code>Image</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>IMAGE</code> parameter of <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> 
     * <p>Docker image architecture must match the processor architecture of the
     * compute resources that they're scheduled on. For example, ARM-based Docker
     * images can only run on ARM-based compute resources.</p>  <ul> <li>
     * <p>Images in Amazon ECR Public repositories use the full
     * <code>registry/repository[:tag]</code> or
     * <code>registry/repository[@digest]</code> naming conventions. For example,
     * <code>public.ecr.aws/<i>registry_alias</i>/<i>my-web-app</i>:<i>latest</i>
     * </code>.</p> </li> <li> <p>Images in Amazon ECR repositories use the full
     * registry and repository URI (for example,
     * <code>123456789012.dkr.ecr.&lt;region-name&gt;.amazonaws.com/&lt;repository-name&gt;</code>).</p>
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
     * <i>repository-url</i>/<i>image</i>:<i>tag</i> </code>. It can be 255 characters
     * long. It can contain uppercase and lowercase letters, numbers, hyphens (-),
     * underscores (_), colons (:), periods (.), forward slashes (/), and number signs
     * (#). This parameter maps to <code>Image</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>IMAGE</code> parameter of <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> 
     * <p>Docker image architecture must match the processor architecture of the
     * compute resources that they're scheduled on. For example, ARM-based Docker
     * images can only run on ARM-based compute resources.</p>  <ul> <li>
     * <p>Images in Amazon ECR Public repositories use the full
     * <code>registry/repository[:tag]</code> or
     * <code>registry/repository[@digest]</code> naming conventions. For example,
     * <code>public.ecr.aws/<i>registry_alias</i>/<i>my-web-app</i>:<i>latest</i>
     * </code>.</p> </li> <li> <p>Images in Amazon ECR repositories use the full
     * registry and repository URI (for example,
     * <code>123456789012.dkr.ecr.&lt;region-name&gt;.amazonaws.com/&lt;repository-name&gt;</code>).</p>
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
     * <i>repository-url</i>/<i>image</i>:<i>tag</i> </code>. It can be 255 characters
     * long. It can contain uppercase and lowercase letters, numbers, hyphens (-),
     * underscores (_), colons (:), periods (.), forward slashes (/), and number signs
     * (#). This parameter maps to <code>Image</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>IMAGE</code> parameter of <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> 
     * <p>Docker image architecture must match the processor architecture of the
     * compute resources that they're scheduled on. For example, ARM-based Docker
     * images can only run on ARM-based compute resources.</p>  <ul> <li>
     * <p>Images in Amazon ECR Public repositories use the full
     * <code>registry/repository[:tag]</code> or
     * <code>registry/repository[@digest]</code> naming conventions. For example,
     * <code>public.ecr.aws/<i>registry_alias</i>/<i>my-web-app</i>:<i>latest</i>
     * </code>.</p> </li> <li> <p>Images in Amazon ECR repositories use the full
     * registry and repository URI (for example,
     * <code>123456789012.dkr.ecr.&lt;region-name&gt;.amazonaws.com/&lt;repository-name&gt;</code>).</p>
     * </li> <li> <p>Images in official repositories on Docker Hub use a single name
     * (for example, <code>ubuntu</code> or <code>mongo</code>).</p> </li> <li>
     * <p>Images in other repositories on Docker Hub are qualified with an organization
     * name (for example, <code>amazon/amazon-ecs-agent</code>).</p> </li> <li>
     * <p>Images in other online repositories are qualified further by a domain name
     * (for example, <code>quay.io/assemblyline/ubuntu</code>).</p> </li> </ul>
     */
    inline ContainerProperties& WithImage(const char* value) { SetImage(value); return *this;}


    /**
     * <p>The command that's passed to the container. This parameter maps to
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
     * <p>The command that's passed to the container. This parameter maps to
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
     * <p>The command that's passed to the container. This parameter maps to
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
     * <p>The command that's passed to the container. This parameter maps to
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
     * <p>The command that's passed to the container. This parameter maps to
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
     * <p>The command that's passed to the container. This parameter maps to
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
     * <p>The command that's passed to the container. This parameter maps to
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
     * <p>The command that's passed to the container. This parameter maps to
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
     * <p>The command that's passed to the container. This parameter maps to
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
     * for Amazon Web Services permissions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
     * roles for tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetJobRoleArn() const{ return m_jobRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the container can assume
     * for Amazon Web Services permissions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
     * roles for tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline bool JobRoleArnHasBeenSet() const { return m_jobRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the container can assume
     * for Amazon Web Services permissions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
     * roles for tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetJobRoleArn(const Aws::String& value) { m_jobRoleArnHasBeenSet = true; m_jobRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the container can assume
     * for Amazon Web Services permissions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
     * roles for tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetJobRoleArn(Aws::String&& value) { m_jobRoleArnHasBeenSet = true; m_jobRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the container can assume
     * for Amazon Web Services permissions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
     * roles for tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetJobRoleArn(const char* value) { m_jobRoleArnHasBeenSet = true; m_jobRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the container can assume
     * for Amazon Web Services permissions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
     * roles for tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline ContainerProperties& WithJobRoleArn(const Aws::String& value) { SetJobRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the container can assume
     * for Amazon Web Services permissions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
     * roles for tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline ContainerProperties& WithJobRoleArn(Aws::String&& value) { SetJobRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that the container can assume
     * for Amazon Web Services permissions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-iam-roles.html">IAM
     * roles for tasks</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline ContainerProperties& WithJobRoleArn(const char* value) { SetJobRoleArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the execution role that Batch can assume.
     * For jobs that run on Fargate resources, you must provide an execution role. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/execution-IAM-role.html">Batch
     * execution IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution role that Batch can assume.
     * For jobs that run on Fargate resources, you must provide an execution role. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/execution-IAM-role.html">Batch
     * execution IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution role that Batch can assume.
     * For jobs that run on Fargate resources, you must provide an execution role. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/execution-IAM-role.html">Batch
     * execution IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution role that Batch can assume.
     * For jobs that run on Fargate resources, you must provide an execution role. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/execution-IAM-role.html">Batch
     * execution IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution role that Batch can assume.
     * For jobs that run on Fargate resources, you must provide an execution role. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/execution-IAM-role.html">Batch
     * execution IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution role that Batch can assume.
     * For jobs that run on Fargate resources, you must provide an execution role. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/execution-IAM-role.html">Batch
     * execution IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline ContainerProperties& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the execution role that Batch can assume.
     * For jobs that run on Fargate resources, you must provide an execution role. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/execution-IAM-role.html">Batch
     * execution IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline ContainerProperties& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the execution role that Batch can assume.
     * For jobs that run on Fargate resources, you must provide an execution role. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/execution-IAM-role.html">Batch
     * execution IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline ContainerProperties& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}


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
     *  <p>We don't recommend using plaintext environment variables for
     * sensitive information, such as credential data.</p>  
     * <p>Environment variables cannot start with "<code>AWS_BATCH</code>". This naming
     * convention is reserved for variables that Batch sets.</p> 
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
     *  <p>We don't recommend using plaintext environment variables for
     * sensitive information, such as credential data.</p>  
     * <p>Environment variables cannot start with "<code>AWS_BATCH</code>". This naming
     * convention is reserved for variables that Batch sets.</p> 
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
     *  <p>We don't recommend using plaintext environment variables for
     * sensitive information, such as credential data.</p>  
     * <p>Environment variables cannot start with "<code>AWS_BATCH</code>". This naming
     * convention is reserved for variables that Batch sets.</p> 
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
     *  <p>We don't recommend using plaintext environment variables for
     * sensitive information, such as credential data.</p>  
     * <p>Environment variables cannot start with "<code>AWS_BATCH</code>". This naming
     * convention is reserved for variables that Batch sets.</p> 
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
     *  <p>We don't recommend using plaintext environment variables for
     * sensitive information, such as credential data.</p>  
     * <p>Environment variables cannot start with "<code>AWS_BATCH</code>". This naming
     * convention is reserved for variables that Batch sets.</p> 
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
     *  <p>We don't recommend using plaintext environment variables for
     * sensitive information, such as credential data.</p>  
     * <p>Environment variables cannot start with "<code>AWS_BATCH</code>". This naming
     * convention is reserved for variables that Batch sets.</p> 
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
     *  <p>We don't recommend using plaintext environment variables for
     * sensitive information, such as credential data.</p>  
     * <p>Environment variables cannot start with "<code>AWS_BATCH</code>". This naming
     * convention is reserved for variables that Batch sets.</p> 
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
     *  <p>We don't recommend using plaintext environment variables for
     * sensitive information, such as credential data.</p>  
     * <p>Environment variables cannot start with "<code>AWS_BATCH</code>". This naming
     * convention is reserved for variables that Batch sets.</p> 
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
     * <p>When this parameter is true, the container is given elevated permissions on
     * the host container instance (similar to the <code>root</code> user). This
     * parameter maps to <code>Privileged</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--privileged</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. The default
     * value is false.</p>  <p>This parameter isn't applicable to jobs that are
     * running on Fargate resources and shouldn't be provided, or specified as
     * false.</p> 
     */
    inline bool GetPrivileged() const{ return m_privileged; }

    /**
     * <p>When this parameter is true, the container is given elevated permissions on
     * the host container instance (similar to the <code>root</code> user). This
     * parameter maps to <code>Privileged</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--privileged</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. The default
     * value is false.</p>  <p>This parameter isn't applicable to jobs that are
     * running on Fargate resources and shouldn't be provided, or specified as
     * false.</p> 
     */
    inline bool PrivilegedHasBeenSet() const { return m_privilegedHasBeenSet; }

    /**
     * <p>When this parameter is true, the container is given elevated permissions on
     * the host container instance (similar to the <code>root</code> user). This
     * parameter maps to <code>Privileged</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--privileged</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. The default
     * value is false.</p>  <p>This parameter isn't applicable to jobs that are
     * running on Fargate resources and shouldn't be provided, or specified as
     * false.</p> 
     */
    inline void SetPrivileged(bool value) { m_privilegedHasBeenSet = true; m_privileged = value; }

    /**
     * <p>When this parameter is true, the container is given elevated permissions on
     * the host container instance (similar to the <code>root</code> user). This
     * parameter maps to <code>Privileged</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--privileged</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. The default
     * value is false.</p>  <p>This parameter isn't applicable to jobs that are
     * running on Fargate resources and shouldn't be provided, or specified as
     * false.</p> 
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
     * <p>This parameter isn't applicable to jobs that are running on Fargate resources
     * and shouldn't be provided.</p> 
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
     * <p>This parameter isn't applicable to jobs that are running on Fargate resources
     * and shouldn't be provided.</p> 
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
     * <p>This parameter isn't applicable to jobs that are running on Fargate resources
     * and shouldn't be provided.</p> 
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
     * <p>This parameter isn't applicable to jobs that are running on Fargate resources
     * and shouldn't be provided.</p> 
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
     * <p>This parameter isn't applicable to jobs that are running on Fargate resources
     * and shouldn't be provided.</p> 
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
     * <p>This parameter isn't applicable to jobs that are running on Fargate resources
     * and shouldn't be provided.</p> 
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
     * <p>This parameter isn't applicable to jobs that are running on Fargate resources
     * and shouldn't be provided.</p> 
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
     * <p>This parameter isn't applicable to jobs that are running on Fargate resources
     * and shouldn't be provided.</p> 
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
     * <p>The instance type to use for a multi-node parallel job. All node groups in a
     * multi-node parallel job must use the same instance type.</p>  <p>This
     * parameter isn't applicable to single-node container jobs or jobs that run on
     * Fargate resources, and shouldn't be provided.</p> 
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type to use for a multi-node parallel job. All node groups in a
     * multi-node parallel job must use the same instance type.</p>  <p>This
     * parameter isn't applicable to single-node container jobs or jobs that run on
     * Fargate resources, and shouldn't be provided.</p> 
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type to use for a multi-node parallel job. All node groups in a
     * multi-node parallel job must use the same instance type.</p>  <p>This
     * parameter isn't applicable to single-node container jobs or jobs that run on
     * Fargate resources, and shouldn't be provided.</p> 
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type to use for a multi-node parallel job. All node groups in a
     * multi-node parallel job must use the same instance type.</p>  <p>This
     * parameter isn't applicable to single-node container jobs or jobs that run on
     * Fargate resources, and shouldn't be provided.</p> 
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type to use for a multi-node parallel job. All node groups in a
     * multi-node parallel job must use the same instance type.</p>  <p>This
     * parameter isn't applicable to single-node container jobs or jobs that run on
     * Fargate resources, and shouldn't be provided.</p> 
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The instance type to use for a multi-node parallel job. All node groups in a
     * multi-node parallel job must use the same instance type.</p>  <p>This
     * parameter isn't applicable to single-node container jobs or jobs that run on
     * Fargate resources, and shouldn't be provided.</p> 
     */
    inline ContainerProperties& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type to use for a multi-node parallel job. All node groups in a
     * multi-node parallel job must use the same instance type.</p>  <p>This
     * parameter isn't applicable to single-node container jobs or jobs that run on
     * Fargate resources, and shouldn't be provided.</p> 
     */
    inline ContainerProperties& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type to use for a multi-node parallel job. All node groups in a
     * multi-node parallel job must use the same instance type.</p>  <p>This
     * parameter isn't applicable to single-node container jobs or jobs that run on
     * Fargate resources, and shouldn't be provided.</p> 
     */
    inline ContainerProperties& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>The type and amount of resources to assign to a container. The supported
     * resources include <code>GPU</code>, <code>MEMORY</code>, and
     * <code>VCPU</code>.</p>
     */
    inline const Aws::Vector<ResourceRequirement>& GetResourceRequirements() const{ return m_resourceRequirements; }

    /**
     * <p>The type and amount of resources to assign to a container. The supported
     * resources include <code>GPU</code>, <code>MEMORY</code>, and
     * <code>VCPU</code>.</p>
     */
    inline bool ResourceRequirementsHasBeenSet() const { return m_resourceRequirementsHasBeenSet; }

    /**
     * <p>The type and amount of resources to assign to a container. The supported
     * resources include <code>GPU</code>, <code>MEMORY</code>, and
     * <code>VCPU</code>.</p>
     */
    inline void SetResourceRequirements(const Aws::Vector<ResourceRequirement>& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements = value; }

    /**
     * <p>The type and amount of resources to assign to a container. The supported
     * resources include <code>GPU</code>, <code>MEMORY</code>, and
     * <code>VCPU</code>.</p>
     */
    inline void SetResourceRequirements(Aws::Vector<ResourceRequirement>&& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements = std::move(value); }

    /**
     * <p>The type and amount of resources to assign to a container. The supported
     * resources include <code>GPU</code>, <code>MEMORY</code>, and
     * <code>VCPU</code>.</p>
     */
    inline ContainerProperties& WithResourceRequirements(const Aws::Vector<ResourceRequirement>& value) { SetResourceRequirements(value); return *this;}

    /**
     * <p>The type and amount of resources to assign to a container. The supported
     * resources include <code>GPU</code>, <code>MEMORY</code>, and
     * <code>VCPU</code>.</p>
     */
    inline ContainerProperties& WithResourceRequirements(Aws::Vector<ResourceRequirement>&& value) { SetResourceRequirements(std::move(value)); return *this;}

    /**
     * <p>The type and amount of resources to assign to a container. The supported
     * resources include <code>GPU</code>, <code>MEMORY</code>, and
     * <code>VCPU</code>.</p>
     */
    inline ContainerProperties& AddResourceRequirements(const ResourceRequirement& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements.push_back(value); return *this; }

    /**
     * <p>The type and amount of resources to assign to a container. The supported
     * resources include <code>GPU</code>, <code>MEMORY</code>, and
     * <code>VCPU</code>.</p>
     */
    inline ContainerProperties& AddResourceRequirements(ResourceRequirement&& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements.push_back(std::move(value)); return *this; }


    /**
     * <p>Linux-specific modifications that are applied to the container, such as
     * details for device mappings.</p>
     */
    inline const LinuxParameters& GetLinuxParameters() const{ return m_linuxParameters; }

    /**
     * <p>Linux-specific modifications that are applied to the container, such as
     * details for device mappings.</p>
     */
    inline bool LinuxParametersHasBeenSet() const { return m_linuxParametersHasBeenSet; }

    /**
     * <p>Linux-specific modifications that are applied to the container, such as
     * details for device mappings.</p>
     */
    inline void SetLinuxParameters(const LinuxParameters& value) { m_linuxParametersHasBeenSet = true; m_linuxParameters = value; }

    /**
     * <p>Linux-specific modifications that are applied to the container, such as
     * details for device mappings.</p>
     */
    inline void SetLinuxParameters(LinuxParameters&& value) { m_linuxParametersHasBeenSet = true; m_linuxParameters = std::move(value); }

    /**
     * <p>Linux-specific modifications that are applied to the container, such as
     * details for device mappings.</p>
     */
    inline ContainerProperties& WithLinuxParameters(const LinuxParameters& value) { SetLinuxParameters(value); return *this;}

    /**
     * <p>Linux-specific modifications that are applied to the container, such as
     * details for device mappings.</p>
     */
    inline ContainerProperties& WithLinuxParameters(LinuxParameters&& value) { SetLinuxParameters(std::move(value)); return *this;}


    /**
     * <p>The log configuration specification for the container.</p> <p>This parameter
     * maps to <code>LogConfig</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--log-driver</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. By default,
     * containers use the same logging driver that the Docker daemon uses. However the
     * container might use a different logging driver than the Docker daemon by
     * specifying a log driver with this parameter in the container definition. To use
     * a different logging driver for a container, the log system must be configured
     * properly on the container instance (or on a different log server for remote
     * logging options). For more information on the options for different supported
     * log drivers, see <a
     * href="https://docs.docker.com/engine/admin/logging/overview/">Configure logging
     * drivers</a> in the Docker documentation.</p>  <p>Batch currently supports
     * a subset of the logging drivers available to the Docker daemon (shown in the
     * <a>LogConfiguration</a> data type).</p>  <p>This parameter requires
     * version 1.18 of the Docker Remote API or greater on your container instance. To
     * check the Docker Remote API version on your container instance, log in to your
     * container instance and run the following command: <code>sudo docker version |
     * grep "Server API version"</code> </p>  <p>The Amazon ECS container agent
     * running on a container instance must register the logging drivers available on
     * that instance with the <code>ECS_AVAILABLE_LOGGING_DRIVERS</code> environment
     * variable before containers placed on that instance can use these log
     * configuration options. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon
     * ECS container agent configuration</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p> 
     */
    inline const LogConfiguration& GetLogConfiguration() const{ return m_logConfiguration; }

    /**
     * <p>The log configuration specification for the container.</p> <p>This parameter
     * maps to <code>LogConfig</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--log-driver</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. By default,
     * containers use the same logging driver that the Docker daemon uses. However the
     * container might use a different logging driver than the Docker daemon by
     * specifying a log driver with this parameter in the container definition. To use
     * a different logging driver for a container, the log system must be configured
     * properly on the container instance (or on a different log server for remote
     * logging options). For more information on the options for different supported
     * log drivers, see <a
     * href="https://docs.docker.com/engine/admin/logging/overview/">Configure logging
     * drivers</a> in the Docker documentation.</p>  <p>Batch currently supports
     * a subset of the logging drivers available to the Docker daemon (shown in the
     * <a>LogConfiguration</a> data type).</p>  <p>This parameter requires
     * version 1.18 of the Docker Remote API or greater on your container instance. To
     * check the Docker Remote API version on your container instance, log in to your
     * container instance and run the following command: <code>sudo docker version |
     * grep "Server API version"</code> </p>  <p>The Amazon ECS container agent
     * running on a container instance must register the logging drivers available on
     * that instance with the <code>ECS_AVAILABLE_LOGGING_DRIVERS</code> environment
     * variable before containers placed on that instance can use these log
     * configuration options. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon
     * ECS container agent configuration</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p> 
     */
    inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }

    /**
     * <p>The log configuration specification for the container.</p> <p>This parameter
     * maps to <code>LogConfig</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--log-driver</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. By default,
     * containers use the same logging driver that the Docker daemon uses. However the
     * container might use a different logging driver than the Docker daemon by
     * specifying a log driver with this parameter in the container definition. To use
     * a different logging driver for a container, the log system must be configured
     * properly on the container instance (or on a different log server for remote
     * logging options). For more information on the options for different supported
     * log drivers, see <a
     * href="https://docs.docker.com/engine/admin/logging/overview/">Configure logging
     * drivers</a> in the Docker documentation.</p>  <p>Batch currently supports
     * a subset of the logging drivers available to the Docker daemon (shown in the
     * <a>LogConfiguration</a> data type).</p>  <p>This parameter requires
     * version 1.18 of the Docker Remote API or greater on your container instance. To
     * check the Docker Remote API version on your container instance, log in to your
     * container instance and run the following command: <code>sudo docker version |
     * grep "Server API version"</code> </p>  <p>The Amazon ECS container agent
     * running on a container instance must register the logging drivers available on
     * that instance with the <code>ECS_AVAILABLE_LOGGING_DRIVERS</code> environment
     * variable before containers placed on that instance can use these log
     * configuration options. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon
     * ECS container agent configuration</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p> 
     */
    inline void SetLogConfiguration(const LogConfiguration& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = value; }

    /**
     * <p>The log configuration specification for the container.</p> <p>This parameter
     * maps to <code>LogConfig</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--log-driver</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. By default,
     * containers use the same logging driver that the Docker daemon uses. However the
     * container might use a different logging driver than the Docker daemon by
     * specifying a log driver with this parameter in the container definition. To use
     * a different logging driver for a container, the log system must be configured
     * properly on the container instance (or on a different log server for remote
     * logging options). For more information on the options for different supported
     * log drivers, see <a
     * href="https://docs.docker.com/engine/admin/logging/overview/">Configure logging
     * drivers</a> in the Docker documentation.</p>  <p>Batch currently supports
     * a subset of the logging drivers available to the Docker daemon (shown in the
     * <a>LogConfiguration</a> data type).</p>  <p>This parameter requires
     * version 1.18 of the Docker Remote API or greater on your container instance. To
     * check the Docker Remote API version on your container instance, log in to your
     * container instance and run the following command: <code>sudo docker version |
     * grep "Server API version"</code> </p>  <p>The Amazon ECS container agent
     * running on a container instance must register the logging drivers available on
     * that instance with the <code>ECS_AVAILABLE_LOGGING_DRIVERS</code> environment
     * variable before containers placed on that instance can use these log
     * configuration options. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon
     * ECS container agent configuration</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p> 
     */
    inline void SetLogConfiguration(LogConfiguration&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = std::move(value); }

    /**
     * <p>The log configuration specification for the container.</p> <p>This parameter
     * maps to <code>LogConfig</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--log-driver</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. By default,
     * containers use the same logging driver that the Docker daemon uses. However the
     * container might use a different logging driver than the Docker daemon by
     * specifying a log driver with this parameter in the container definition. To use
     * a different logging driver for a container, the log system must be configured
     * properly on the container instance (or on a different log server for remote
     * logging options). For more information on the options for different supported
     * log drivers, see <a
     * href="https://docs.docker.com/engine/admin/logging/overview/">Configure logging
     * drivers</a> in the Docker documentation.</p>  <p>Batch currently supports
     * a subset of the logging drivers available to the Docker daemon (shown in the
     * <a>LogConfiguration</a> data type).</p>  <p>This parameter requires
     * version 1.18 of the Docker Remote API or greater on your container instance. To
     * check the Docker Remote API version on your container instance, log in to your
     * container instance and run the following command: <code>sudo docker version |
     * grep "Server API version"</code> </p>  <p>The Amazon ECS container agent
     * running on a container instance must register the logging drivers available on
     * that instance with the <code>ECS_AVAILABLE_LOGGING_DRIVERS</code> environment
     * variable before containers placed on that instance can use these log
     * configuration options. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon
     * ECS container agent configuration</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p> 
     */
    inline ContainerProperties& WithLogConfiguration(const LogConfiguration& value) { SetLogConfiguration(value); return *this;}

    /**
     * <p>The log configuration specification for the container.</p> <p>This parameter
     * maps to <code>LogConfig</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--log-driver</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. By default,
     * containers use the same logging driver that the Docker daemon uses. However the
     * container might use a different logging driver than the Docker daemon by
     * specifying a log driver with this parameter in the container definition. To use
     * a different logging driver for a container, the log system must be configured
     * properly on the container instance (or on a different log server for remote
     * logging options). For more information on the options for different supported
     * log drivers, see <a
     * href="https://docs.docker.com/engine/admin/logging/overview/">Configure logging
     * drivers</a> in the Docker documentation.</p>  <p>Batch currently supports
     * a subset of the logging drivers available to the Docker daemon (shown in the
     * <a>LogConfiguration</a> data type).</p>  <p>This parameter requires
     * version 1.18 of the Docker Remote API or greater on your container instance. To
     * check the Docker Remote API version on your container instance, log in to your
     * container instance and run the following command: <code>sudo docker version |
     * grep "Server API version"</code> </p>  <p>The Amazon ECS container agent
     * running on a container instance must register the logging drivers available on
     * that instance with the <code>ECS_AVAILABLE_LOGGING_DRIVERS</code> environment
     * variable before containers placed on that instance can use these log
     * configuration options. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon
     * ECS container agent configuration</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p> 
     */
    inline ContainerProperties& WithLogConfiguration(LogConfiguration&& value) { SetLogConfiguration(std::move(value)); return *this;}


    /**
     * <p>The secrets for the container. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/specifying-sensitive-data.html">Specifying
     * sensitive data</a> in the <i>Batch User Guide</i>.</p>
     */
    inline const Aws::Vector<Secret>& GetSecrets() const{ return m_secrets; }

    /**
     * <p>The secrets for the container. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/specifying-sensitive-data.html">Specifying
     * sensitive data</a> in the <i>Batch User Guide</i>.</p>
     */
    inline bool SecretsHasBeenSet() const { return m_secretsHasBeenSet; }

    /**
     * <p>The secrets for the container. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/specifying-sensitive-data.html">Specifying
     * sensitive data</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetSecrets(const Aws::Vector<Secret>& value) { m_secretsHasBeenSet = true; m_secrets = value; }

    /**
     * <p>The secrets for the container. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/specifying-sensitive-data.html">Specifying
     * sensitive data</a> in the <i>Batch User Guide</i>.</p>
     */
    inline void SetSecrets(Aws::Vector<Secret>&& value) { m_secretsHasBeenSet = true; m_secrets = std::move(value); }

    /**
     * <p>The secrets for the container. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/specifying-sensitive-data.html">Specifying
     * sensitive data</a> in the <i>Batch User Guide</i>.</p>
     */
    inline ContainerProperties& WithSecrets(const Aws::Vector<Secret>& value) { SetSecrets(value); return *this;}

    /**
     * <p>The secrets for the container. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/specifying-sensitive-data.html">Specifying
     * sensitive data</a> in the <i>Batch User Guide</i>.</p>
     */
    inline ContainerProperties& WithSecrets(Aws::Vector<Secret>&& value) { SetSecrets(std::move(value)); return *this;}

    /**
     * <p>The secrets for the container. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/specifying-sensitive-data.html">Specifying
     * sensitive data</a> in the <i>Batch User Guide</i>.</p>
     */
    inline ContainerProperties& AddSecrets(const Secret& value) { m_secretsHasBeenSet = true; m_secrets.push_back(value); return *this; }

    /**
     * <p>The secrets for the container. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/specifying-sensitive-data.html">Specifying
     * sensitive data</a> in the <i>Batch User Guide</i>.</p>
     */
    inline ContainerProperties& AddSecrets(Secret&& value) { m_secretsHasBeenSet = true; m_secrets.push_back(std::move(value)); return *this; }


    /**
     * <p>The network configuration for jobs that are running on Fargate resources.
     * Jobs that are running on EC2 resources must not specify this parameter.</p>
     */
    inline const NetworkConfiguration& GetNetworkConfiguration() const{ return m_networkConfiguration; }

    /**
     * <p>The network configuration for jobs that are running on Fargate resources.
     * Jobs that are running on EC2 resources must not specify this parameter.</p>
     */
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }

    /**
     * <p>The network configuration for jobs that are running on Fargate resources.
     * Jobs that are running on EC2 resources must not specify this parameter.</p>
     */
    inline void SetNetworkConfiguration(const NetworkConfiguration& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = value; }

    /**
     * <p>The network configuration for jobs that are running on Fargate resources.
     * Jobs that are running on EC2 resources must not specify this parameter.</p>
     */
    inline void SetNetworkConfiguration(NetworkConfiguration&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::move(value); }

    /**
     * <p>The network configuration for jobs that are running on Fargate resources.
     * Jobs that are running on EC2 resources must not specify this parameter.</p>
     */
    inline ContainerProperties& WithNetworkConfiguration(const NetworkConfiguration& value) { SetNetworkConfiguration(value); return *this;}

    /**
     * <p>The network configuration for jobs that are running on Fargate resources.
     * Jobs that are running on EC2 resources must not specify this parameter.</p>
     */
    inline ContainerProperties& WithNetworkConfiguration(NetworkConfiguration&& value) { SetNetworkConfiguration(std::move(value)); return *this;}


    /**
     * <p>The platform configuration for jobs that are running on Fargate resources.
     * Jobs that are running on EC2 resources must not specify this parameter.</p>
     */
    inline const FargatePlatformConfiguration& GetFargatePlatformConfiguration() const{ return m_fargatePlatformConfiguration; }

    /**
     * <p>The platform configuration for jobs that are running on Fargate resources.
     * Jobs that are running on EC2 resources must not specify this parameter.</p>
     */
    inline bool FargatePlatformConfigurationHasBeenSet() const { return m_fargatePlatformConfigurationHasBeenSet; }

    /**
     * <p>The platform configuration for jobs that are running on Fargate resources.
     * Jobs that are running on EC2 resources must not specify this parameter.</p>
     */
    inline void SetFargatePlatformConfiguration(const FargatePlatformConfiguration& value) { m_fargatePlatformConfigurationHasBeenSet = true; m_fargatePlatformConfiguration = value; }

    /**
     * <p>The platform configuration for jobs that are running on Fargate resources.
     * Jobs that are running on EC2 resources must not specify this parameter.</p>
     */
    inline void SetFargatePlatformConfiguration(FargatePlatformConfiguration&& value) { m_fargatePlatformConfigurationHasBeenSet = true; m_fargatePlatformConfiguration = std::move(value); }

    /**
     * <p>The platform configuration for jobs that are running on Fargate resources.
     * Jobs that are running on EC2 resources must not specify this parameter.</p>
     */
    inline ContainerProperties& WithFargatePlatformConfiguration(const FargatePlatformConfiguration& value) { SetFargatePlatformConfiguration(value); return *this;}

    /**
     * <p>The platform configuration for jobs that are running on Fargate resources.
     * Jobs that are running on EC2 resources must not specify this parameter.</p>
     */
    inline ContainerProperties& WithFargatePlatformConfiguration(FargatePlatformConfiguration&& value) { SetFargatePlatformConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_image;
    bool m_imageHasBeenSet = false;

    Aws::Vector<Aws::String> m_command;
    bool m_commandHasBeenSet = false;

    Aws::String m_jobRoleArn;
    bool m_jobRoleArnHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    Aws::Vector<Volume> m_volumes;
    bool m_volumesHasBeenSet = false;

    Aws::Vector<KeyValuePair> m_environment;
    bool m_environmentHasBeenSet = false;

    Aws::Vector<MountPoint> m_mountPoints;
    bool m_mountPointsHasBeenSet = false;

    bool m_readonlyRootFilesystem;
    bool m_readonlyRootFilesystemHasBeenSet = false;

    bool m_privileged;
    bool m_privilegedHasBeenSet = false;

    Aws::Vector<Ulimit> m_ulimits;
    bool m_ulimitsHasBeenSet = false;

    Aws::String m_user;
    bool m_userHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::Vector<ResourceRequirement> m_resourceRequirements;
    bool m_resourceRequirementsHasBeenSet = false;

    LinuxParameters m_linuxParameters;
    bool m_linuxParametersHasBeenSet = false;

    LogConfiguration m_logConfiguration;
    bool m_logConfigurationHasBeenSet = false;

    Aws::Vector<Secret> m_secrets;
    bool m_secretsHasBeenSet = false;

    NetworkConfiguration m_networkConfiguration;
    bool m_networkConfigurationHasBeenSet = false;

    FargatePlatformConfiguration m_fargatePlatformConfiguration;
    bool m_fargatePlatformConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
