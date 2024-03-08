/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/LinuxParameters.h>
#include <aws/batch/model/LogConfiguration.h>
#include <aws/batch/model/RepositoryCredentials.h>
#include <aws/batch/model/TaskContainerDependency.h>
#include <aws/batch/model/KeyValuePair.h>
#include <aws/batch/model/MountPoint.h>
#include <aws/batch/model/ResourceRequirement.h>
#include <aws/batch/model/Secret.h>
#include <aws/batch/model/Ulimit.h>
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
   * <p>Container properties are used for Amazon ECS-based job definitions. These
   * properties to describe the container that's launched as part of a
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/TaskContainerProperties">AWS
   * API Reference</a></p>
   */
  class TaskContainerProperties
  {
  public:
    AWS_BATCH_API TaskContainerProperties();
    AWS_BATCH_API TaskContainerProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API TaskContainerProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The command that's passed to the container. This parameter maps to
     * <code>Cmd</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>COMMAND</code> parameter to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">Dockerfile
     * reference: CMD</a>.</p>
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
     * href="https://docs.docker.com/engine/reference/builder/#cmd">Dockerfile
     * reference: CMD</a>.</p>
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
     * href="https://docs.docker.com/engine/reference/builder/#cmd">Dockerfile
     * reference: CMD</a>.</p>
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
     * href="https://docs.docker.com/engine/reference/builder/#cmd">Dockerfile
     * reference: CMD</a>.</p>
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
     * href="https://docs.docker.com/engine/reference/builder/#cmd">Dockerfile
     * reference: CMD</a>.</p>
     */
    inline TaskContainerProperties& WithCommand(const Aws::Vector<Aws::String>& value) { SetCommand(value); return *this;}

    /**
     * <p>The command that's passed to the container. This parameter maps to
     * <code>Cmd</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>COMMAND</code> parameter to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">Dockerfile
     * reference: CMD</a>.</p>
     */
    inline TaskContainerProperties& WithCommand(Aws::Vector<Aws::String>&& value) { SetCommand(std::move(value)); return *this;}

    /**
     * <p>The command that's passed to the container. This parameter maps to
     * <code>Cmd</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>COMMAND</code> parameter to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">Dockerfile
     * reference: CMD</a>.</p>
     */
    inline TaskContainerProperties& AddCommand(const Aws::String& value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }

    /**
     * <p>The command that's passed to the container. This parameter maps to
     * <code>Cmd</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>COMMAND</code> parameter to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">Dockerfile
     * reference: CMD</a>.</p>
     */
    inline TaskContainerProperties& AddCommand(Aws::String&& value) { m_commandHasBeenSet = true; m_command.push_back(std::move(value)); return *this; }

    /**
     * <p>The command that's passed to the container. This parameter maps to
     * <code>Cmd</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>COMMAND</code> parameter to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">Dockerfile
     * reference: CMD</a>.</p>
     */
    inline TaskContainerProperties& AddCommand(const char* value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }


    /**
     * <p>A list of containers that this container depends on.</p>
     */
    inline const Aws::Vector<TaskContainerDependency>& GetDependsOn() const{ return m_dependsOn; }

    /**
     * <p>A list of containers that this container depends on.</p>
     */
    inline bool DependsOnHasBeenSet() const { return m_dependsOnHasBeenSet; }

    /**
     * <p>A list of containers that this container depends on.</p>
     */
    inline void SetDependsOn(const Aws::Vector<TaskContainerDependency>& value) { m_dependsOnHasBeenSet = true; m_dependsOn = value; }

    /**
     * <p>A list of containers that this container depends on.</p>
     */
    inline void SetDependsOn(Aws::Vector<TaskContainerDependency>&& value) { m_dependsOnHasBeenSet = true; m_dependsOn = std::move(value); }

    /**
     * <p>A list of containers that this container depends on.</p>
     */
    inline TaskContainerProperties& WithDependsOn(const Aws::Vector<TaskContainerDependency>& value) { SetDependsOn(value); return *this;}

    /**
     * <p>A list of containers that this container depends on.</p>
     */
    inline TaskContainerProperties& WithDependsOn(Aws::Vector<TaskContainerDependency>&& value) { SetDependsOn(std::move(value)); return *this;}

    /**
     * <p>A list of containers that this container depends on.</p>
     */
    inline TaskContainerProperties& AddDependsOn(const TaskContainerDependency& value) { m_dependsOnHasBeenSet = true; m_dependsOn.push_back(value); return *this; }

    /**
     * <p>A list of containers that this container depends on.</p>
     */
    inline TaskContainerProperties& AddDependsOn(TaskContainerDependency&& value) { m_dependsOnHasBeenSet = true; m_dependsOn.push_back(std::move(value)); return *this; }


    /**
     * <p>The environment variables to pass to a container. This parameter maps to Env
     * inthe <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--env</code> parameter to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. </p>
     *  <p>We don't recommend using plaintext environment variables for
     * sensitive information, such as credential data.</p>  
     * <p>Environment variables cannot start with <code>AWS_BATCH</code>. This naming
     * convention is reserved for variables that Batch sets.</p> 
     */
    inline const Aws::Vector<KeyValuePair>& GetEnvironment() const{ return m_environment; }

    /**
     * <p>The environment variables to pass to a container. This parameter maps to Env
     * inthe <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--env</code> parameter to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. </p>
     *  <p>We don't recommend using plaintext environment variables for
     * sensitive information, such as credential data.</p>  
     * <p>Environment variables cannot start with <code>AWS_BATCH</code>. This naming
     * convention is reserved for variables that Batch sets.</p> 
     */
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }

    /**
     * <p>The environment variables to pass to a container. This parameter maps to Env
     * inthe <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--env</code> parameter to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. </p>
     *  <p>We don't recommend using plaintext environment variables for
     * sensitive information, such as credential data.</p>  
     * <p>Environment variables cannot start with <code>AWS_BATCH</code>. This naming
     * convention is reserved for variables that Batch sets.</p> 
     */
    inline void SetEnvironment(const Aws::Vector<KeyValuePair>& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>The environment variables to pass to a container. This parameter maps to Env
     * inthe <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--env</code> parameter to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. </p>
     *  <p>We don't recommend using plaintext environment variables for
     * sensitive information, such as credential data.</p>  
     * <p>Environment variables cannot start with <code>AWS_BATCH</code>. This naming
     * convention is reserved for variables that Batch sets.</p> 
     */
    inline void SetEnvironment(Aws::Vector<KeyValuePair>&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }

    /**
     * <p>The environment variables to pass to a container. This parameter maps to Env
     * inthe <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--env</code> parameter to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. </p>
     *  <p>We don't recommend using plaintext environment variables for
     * sensitive information, such as credential data.</p>  
     * <p>Environment variables cannot start with <code>AWS_BATCH</code>. This naming
     * convention is reserved for variables that Batch sets.</p> 
     */
    inline TaskContainerProperties& WithEnvironment(const Aws::Vector<KeyValuePair>& value) { SetEnvironment(value); return *this;}

    /**
     * <p>The environment variables to pass to a container. This parameter maps to Env
     * inthe <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--env</code> parameter to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. </p>
     *  <p>We don't recommend using plaintext environment variables for
     * sensitive information, such as credential data.</p>  
     * <p>Environment variables cannot start with <code>AWS_BATCH</code>. This naming
     * convention is reserved for variables that Batch sets.</p> 
     */
    inline TaskContainerProperties& WithEnvironment(Aws::Vector<KeyValuePair>&& value) { SetEnvironment(std::move(value)); return *this;}

    /**
     * <p>The environment variables to pass to a container. This parameter maps to Env
     * inthe <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--env</code> parameter to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. </p>
     *  <p>We don't recommend using plaintext environment variables for
     * sensitive information, such as credential data.</p>  
     * <p>Environment variables cannot start with <code>AWS_BATCH</code>. This naming
     * convention is reserved for variables that Batch sets.</p> 
     */
    inline TaskContainerProperties& AddEnvironment(const KeyValuePair& value) { m_environmentHasBeenSet = true; m_environment.push_back(value); return *this; }

    /**
     * <p>The environment variables to pass to a container. This parameter maps to Env
     * inthe <a
     * href="https://docs.docker.com/engine/api/v1.23/#create-a-container">Create a
     * container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.23/">Docker Remote API</a> and the
     * <code>--env</code> parameter to <a
     * href="https://docs.docker.com/engine/reference/run/">docker run</a>. </p>
     *  <p>We don't recommend using plaintext environment variables for
     * sensitive information, such as credential data.</p>  
     * <p>Environment variables cannot start with <code>AWS_BATCH</code>. This naming
     * convention is reserved for variables that Batch sets.</p> 
     */
    inline TaskContainerProperties& AddEnvironment(KeyValuePair&& value) { m_environmentHasBeenSet = true; m_environment.push_back(std::move(value)); return *this; }


    /**
     * <p>If the essential parameter of a container is marked as <code>true</code>, and
     * that container fails or stops for any reason, all other containers that are part
     * of the task are stopped. If the <code>essential</code> parameter of a container
     * is marked as false, its failure doesn't affect the rest of the containers in a
     * task. If this parameter is omitted, a container is assumed to be essential.</p>
     * <p>All jobs must have at least one essential container. If you have an
     * application that's composed of multiple containers, group containers that are
     * used for a common purpose into components, and separate the different components
     * into multiple task definitions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/application_architecture.html">Application
     * Architecture</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline bool GetEssential() const{ return m_essential; }

    /**
     * <p>If the essential parameter of a container is marked as <code>true</code>, and
     * that container fails or stops for any reason, all other containers that are part
     * of the task are stopped. If the <code>essential</code> parameter of a container
     * is marked as false, its failure doesn't affect the rest of the containers in a
     * task. If this parameter is omitted, a container is assumed to be essential.</p>
     * <p>All jobs must have at least one essential container. If you have an
     * application that's composed of multiple containers, group containers that are
     * used for a common purpose into components, and separate the different components
     * into multiple task definitions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/application_architecture.html">Application
     * Architecture</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline bool EssentialHasBeenSet() const { return m_essentialHasBeenSet; }

    /**
     * <p>If the essential parameter of a container is marked as <code>true</code>, and
     * that container fails or stops for any reason, all other containers that are part
     * of the task are stopped. If the <code>essential</code> parameter of a container
     * is marked as false, its failure doesn't affect the rest of the containers in a
     * task. If this parameter is omitted, a container is assumed to be essential.</p>
     * <p>All jobs must have at least one essential container. If you have an
     * application that's composed of multiple containers, group containers that are
     * used for a common purpose into components, and separate the different components
     * into multiple task definitions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/application_architecture.html">Application
     * Architecture</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetEssential(bool value) { m_essentialHasBeenSet = true; m_essential = value; }

    /**
     * <p>If the essential parameter of a container is marked as <code>true</code>, and
     * that container fails or stops for any reason, all other containers that are part
     * of the task are stopped. If the <code>essential</code> parameter of a container
     * is marked as false, its failure doesn't affect the rest of the containers in a
     * task. If this parameter is omitted, a container is assumed to be essential.</p>
     * <p>All jobs must have at least one essential container. If you have an
     * application that's composed of multiple containers, group containers that are
     * used for a common purpose into components, and separate the different components
     * into multiple task definitions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/application_architecture.html">Application
     * Architecture</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskContainerProperties& WithEssential(bool value) { SetEssential(value); return *this;}


    /**
     * <p>The image used to start a container. This string is passed directly to the
     * Docker daemon. By default, images in the Docker Hub registry are available.
     * Other repositories are specified with either
     * <code>repository-url/image:tag</code> or
     * <code>repository-url/image@digest</code>. Up to 255 letters (uppercase and
     * lowercase), numbers, hyphens, underscores, colons, periods, forward slashes, and
     * number signs are allowed. This parameter maps to <code>Image</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>IMAGE</code> parameter of the <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">
     * <i>docker run</i> </a>.</p>
     */
    inline const Aws::String& GetImage() const{ return m_image; }

    /**
     * <p>The image used to start a container. This string is passed directly to the
     * Docker daemon. By default, images in the Docker Hub registry are available.
     * Other repositories are specified with either
     * <code>repository-url/image:tag</code> or
     * <code>repository-url/image@digest</code>. Up to 255 letters (uppercase and
     * lowercase), numbers, hyphens, underscores, colons, periods, forward slashes, and
     * number signs are allowed. This parameter maps to <code>Image</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>IMAGE</code> parameter of the <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">
     * <i>docker run</i> </a>.</p>
     */
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }

    /**
     * <p>The image used to start a container. This string is passed directly to the
     * Docker daemon. By default, images in the Docker Hub registry are available.
     * Other repositories are specified with either
     * <code>repository-url/image:tag</code> or
     * <code>repository-url/image@digest</code>. Up to 255 letters (uppercase and
     * lowercase), numbers, hyphens, underscores, colons, periods, forward slashes, and
     * number signs are allowed. This parameter maps to <code>Image</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>IMAGE</code> parameter of the <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">
     * <i>docker run</i> </a>.</p>
     */
    inline void SetImage(const Aws::String& value) { m_imageHasBeenSet = true; m_image = value; }

    /**
     * <p>The image used to start a container. This string is passed directly to the
     * Docker daemon. By default, images in the Docker Hub registry are available.
     * Other repositories are specified with either
     * <code>repository-url/image:tag</code> or
     * <code>repository-url/image@digest</code>. Up to 255 letters (uppercase and
     * lowercase), numbers, hyphens, underscores, colons, periods, forward slashes, and
     * number signs are allowed. This parameter maps to <code>Image</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>IMAGE</code> parameter of the <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">
     * <i>docker run</i> </a>.</p>
     */
    inline void SetImage(Aws::String&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }

    /**
     * <p>The image used to start a container. This string is passed directly to the
     * Docker daemon. By default, images in the Docker Hub registry are available.
     * Other repositories are specified with either
     * <code>repository-url/image:tag</code> or
     * <code>repository-url/image@digest</code>. Up to 255 letters (uppercase and
     * lowercase), numbers, hyphens, underscores, colons, periods, forward slashes, and
     * number signs are allowed. This parameter maps to <code>Image</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>IMAGE</code> parameter of the <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">
     * <i>docker run</i> </a>.</p>
     */
    inline void SetImage(const char* value) { m_imageHasBeenSet = true; m_image.assign(value); }

    /**
     * <p>The image used to start a container. This string is passed directly to the
     * Docker daemon. By default, images in the Docker Hub registry are available.
     * Other repositories are specified with either
     * <code>repository-url/image:tag</code> or
     * <code>repository-url/image@digest</code>. Up to 255 letters (uppercase and
     * lowercase), numbers, hyphens, underscores, colons, periods, forward slashes, and
     * number signs are allowed. This parameter maps to <code>Image</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>IMAGE</code> parameter of the <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">
     * <i>docker run</i> </a>.</p>
     */
    inline TaskContainerProperties& WithImage(const Aws::String& value) { SetImage(value); return *this;}

    /**
     * <p>The image used to start a container. This string is passed directly to the
     * Docker daemon. By default, images in the Docker Hub registry are available.
     * Other repositories are specified with either
     * <code>repository-url/image:tag</code> or
     * <code>repository-url/image@digest</code>. Up to 255 letters (uppercase and
     * lowercase), numbers, hyphens, underscores, colons, periods, forward slashes, and
     * number signs are allowed. This parameter maps to <code>Image</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>IMAGE</code> parameter of the <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">
     * <i>docker run</i> </a>.</p>
     */
    inline TaskContainerProperties& WithImage(Aws::String&& value) { SetImage(std::move(value)); return *this;}

    /**
     * <p>The image used to start a container. This string is passed directly to the
     * Docker daemon. By default, images in the Docker Hub registry are available.
     * Other repositories are specified with either
     * <code>repository-url/image:tag</code> or
     * <code>repository-url/image@digest</code>. Up to 255 letters (uppercase and
     * lowercase), numbers, hyphens, underscores, colons, periods, forward slashes, and
     * number signs are allowed. This parameter maps to <code>Image</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>IMAGE</code> parameter of the <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">
     * <i>docker run</i> </a>.</p>
     */
    inline TaskContainerProperties& WithImage(const char* value) { SetImage(value); return *this;}


    /**
     * <p>Linux-specific modifications that are applied to the container, such as Linux
     * kernel capabilities. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_KernelCapabilities.html">KernelCapabilities</a>.</p>
     */
    inline const LinuxParameters& GetLinuxParameters() const{ return m_linuxParameters; }

    /**
     * <p>Linux-specific modifications that are applied to the container, such as Linux
     * kernel capabilities. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_KernelCapabilities.html">KernelCapabilities</a>.</p>
     */
    inline bool LinuxParametersHasBeenSet() const { return m_linuxParametersHasBeenSet; }

    /**
     * <p>Linux-specific modifications that are applied to the container, such as Linux
     * kernel capabilities. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_KernelCapabilities.html">KernelCapabilities</a>.</p>
     */
    inline void SetLinuxParameters(const LinuxParameters& value) { m_linuxParametersHasBeenSet = true; m_linuxParameters = value; }

    /**
     * <p>Linux-specific modifications that are applied to the container, such as Linux
     * kernel capabilities. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_KernelCapabilities.html">KernelCapabilities</a>.</p>
     */
    inline void SetLinuxParameters(LinuxParameters&& value) { m_linuxParametersHasBeenSet = true; m_linuxParameters = std::move(value); }

    /**
     * <p>Linux-specific modifications that are applied to the container, such as Linux
     * kernel capabilities. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_KernelCapabilities.html">KernelCapabilities</a>.</p>
     */
    inline TaskContainerProperties& WithLinuxParameters(const LinuxParameters& value) { SetLinuxParameters(value); return *this;}

    /**
     * <p>Linux-specific modifications that are applied to the container, such as Linux
     * kernel capabilities. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_KernelCapabilities.html">KernelCapabilities</a>.</p>
     */
    inline TaskContainerProperties& WithLinuxParameters(LinuxParameters&& value) { SetLinuxParameters(std::move(value)); return *this;}


    /**
     * <p>The log configuration specification for the container.</p> <p>This parameter
     * maps to <code>LogConfig</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--log-driver</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <p>By default, containers use the same logging driver that the
     * Docker daemon uses. However the container can use a different logging driver
     * than the Docker daemon by specifying a log driver with this parameter in the
     * container definition. To use a different logging driver for a container, the log
     * system must be configured properly on the container instance (or on a different
     * log server for remote logging options). For more information about the options
     * for different supported log drivers, see <a
     * href="https://docs.docker.com/engine/admin/logging/overview/">Configure logging
     * drivers </a> in the <i>Docker documentation</i>.</p>  <p>Amazon ECS
     * currently supports a subset of the logging drivers available to the Docker
     * daemon (shown in the <code>LogConfiguration</code> data type). Additional log
     * drivers may be available in future releases of the Amazon ECS container
     * agent.</p>  <p>This parameter requires version 1.18 of the Docker Remote
     * API or greater on your container instance. To check the Docker Remote API
     * version on your container instance, log in to your container instance and run
     * the following command: sudo docker version <code>--format
     * '{{.Server.APIVersion}}'</code> </p>  <p>The Amazon ECS container agent
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
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--log-driver</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <p>By default, containers use the same logging driver that the
     * Docker daemon uses. However the container can use a different logging driver
     * than the Docker daemon by specifying a log driver with this parameter in the
     * container definition. To use a different logging driver for a container, the log
     * system must be configured properly on the container instance (or on a different
     * log server for remote logging options). For more information about the options
     * for different supported log drivers, see <a
     * href="https://docs.docker.com/engine/admin/logging/overview/">Configure logging
     * drivers </a> in the <i>Docker documentation</i>.</p>  <p>Amazon ECS
     * currently supports a subset of the logging drivers available to the Docker
     * daemon (shown in the <code>LogConfiguration</code> data type). Additional log
     * drivers may be available in future releases of the Amazon ECS container
     * agent.</p>  <p>This parameter requires version 1.18 of the Docker Remote
     * API or greater on your container instance. To check the Docker Remote API
     * version on your container instance, log in to your container instance and run
     * the following command: sudo docker version <code>--format
     * '{{.Server.APIVersion}}'</code> </p>  <p>The Amazon ECS container agent
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
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--log-driver</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <p>By default, containers use the same logging driver that the
     * Docker daemon uses. However the container can use a different logging driver
     * than the Docker daemon by specifying a log driver with this parameter in the
     * container definition. To use a different logging driver for a container, the log
     * system must be configured properly on the container instance (or on a different
     * log server for remote logging options). For more information about the options
     * for different supported log drivers, see <a
     * href="https://docs.docker.com/engine/admin/logging/overview/">Configure logging
     * drivers </a> in the <i>Docker documentation</i>.</p>  <p>Amazon ECS
     * currently supports a subset of the logging drivers available to the Docker
     * daemon (shown in the <code>LogConfiguration</code> data type). Additional log
     * drivers may be available in future releases of the Amazon ECS container
     * agent.</p>  <p>This parameter requires version 1.18 of the Docker Remote
     * API or greater on your container instance. To check the Docker Remote API
     * version on your container instance, log in to your container instance and run
     * the following command: sudo docker version <code>--format
     * '{{.Server.APIVersion}}'</code> </p>  <p>The Amazon ECS container agent
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
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--log-driver</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <p>By default, containers use the same logging driver that the
     * Docker daemon uses. However the container can use a different logging driver
     * than the Docker daemon by specifying a log driver with this parameter in the
     * container definition. To use a different logging driver for a container, the log
     * system must be configured properly on the container instance (or on a different
     * log server for remote logging options). For more information about the options
     * for different supported log drivers, see <a
     * href="https://docs.docker.com/engine/admin/logging/overview/">Configure logging
     * drivers </a> in the <i>Docker documentation</i>.</p>  <p>Amazon ECS
     * currently supports a subset of the logging drivers available to the Docker
     * daemon (shown in the <code>LogConfiguration</code> data type). Additional log
     * drivers may be available in future releases of the Amazon ECS container
     * agent.</p>  <p>This parameter requires version 1.18 of the Docker Remote
     * API or greater on your container instance. To check the Docker Remote API
     * version on your container instance, log in to your container instance and run
     * the following command: sudo docker version <code>--format
     * '{{.Server.APIVersion}}'</code> </p>  <p>The Amazon ECS container agent
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
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--log-driver</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <p>By default, containers use the same logging driver that the
     * Docker daemon uses. However the container can use a different logging driver
     * than the Docker daemon by specifying a log driver with this parameter in the
     * container definition. To use a different logging driver for a container, the log
     * system must be configured properly on the container instance (or on a different
     * log server for remote logging options). For more information about the options
     * for different supported log drivers, see <a
     * href="https://docs.docker.com/engine/admin/logging/overview/">Configure logging
     * drivers </a> in the <i>Docker documentation</i>.</p>  <p>Amazon ECS
     * currently supports a subset of the logging drivers available to the Docker
     * daemon (shown in the <code>LogConfiguration</code> data type). Additional log
     * drivers may be available in future releases of the Amazon ECS container
     * agent.</p>  <p>This parameter requires version 1.18 of the Docker Remote
     * API or greater on your container instance. To check the Docker Remote API
     * version on your container instance, log in to your container instance and run
     * the following command: sudo docker version <code>--format
     * '{{.Server.APIVersion}}'</code> </p>  <p>The Amazon ECS container agent
     * running on a container instance must register the logging drivers available on
     * that instance with the <code>ECS_AVAILABLE_LOGGING_DRIVERS</code> environment
     * variable before containers placed on that instance can use these log
     * configuration options. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon
     * ECS container agent configuration</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p> 
     */
    inline TaskContainerProperties& WithLogConfiguration(const LogConfiguration& value) { SetLogConfiguration(value); return *this;}

    /**
     * <p>The log configuration specification for the container.</p> <p>This parameter
     * maps to <code>LogConfig</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--log-driver</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <p>By default, containers use the same logging driver that the
     * Docker daemon uses. However the container can use a different logging driver
     * than the Docker daemon by specifying a log driver with this parameter in the
     * container definition. To use a different logging driver for a container, the log
     * system must be configured properly on the container instance (or on a different
     * log server for remote logging options). For more information about the options
     * for different supported log drivers, see <a
     * href="https://docs.docker.com/engine/admin/logging/overview/">Configure logging
     * drivers </a> in the <i>Docker documentation</i>.</p>  <p>Amazon ECS
     * currently supports a subset of the logging drivers available to the Docker
     * daemon (shown in the <code>LogConfiguration</code> data type). Additional log
     * drivers may be available in future releases of the Amazon ECS container
     * agent.</p>  <p>This parameter requires version 1.18 of the Docker Remote
     * API or greater on your container instance. To check the Docker Remote API
     * version on your container instance, log in to your container instance and run
     * the following command: sudo docker version <code>--format
     * '{{.Server.APIVersion}}'</code> </p>  <p>The Amazon ECS container agent
     * running on a container instance must register the logging drivers available on
     * that instance with the <code>ECS_AVAILABLE_LOGGING_DRIVERS</code> environment
     * variable before containers placed on that instance can use these log
     * configuration options. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-config.html">Amazon
     * ECS container agent configuration</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p> 
     */
    inline TaskContainerProperties& WithLogConfiguration(LogConfiguration&& value) { SetLogConfiguration(std::move(value)); return *this;}


    /**
     * <p>The mount points for data volumes in your container.</p> <p>This parameter
     * maps to <code>Volumes</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <a href="">--volume</a> option to <a
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
     * <a href="">--volume</a> option to <a
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
     * <a href="">--volume</a> option to <a
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
     * <a href="">--volume</a> option to <a
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
     * <a href="">--volume</a> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <p>Windows containers can mount whole directories on the same drive
     * as <code>$env:ProgramData</code>. Windows containers can't mount directories on
     * a different drive, and mount point can't be across drives.</p>
     */
    inline TaskContainerProperties& WithMountPoints(const Aws::Vector<MountPoint>& value) { SetMountPoints(value); return *this;}

    /**
     * <p>The mount points for data volumes in your container.</p> <p>This parameter
     * maps to <code>Volumes</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <a href="">--volume</a> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <p>Windows containers can mount whole directories on the same drive
     * as <code>$env:ProgramData</code>. Windows containers can't mount directories on
     * a different drive, and mount point can't be across drives.</p>
     */
    inline TaskContainerProperties& WithMountPoints(Aws::Vector<MountPoint>&& value) { SetMountPoints(std::move(value)); return *this;}

    /**
     * <p>The mount points for data volumes in your container.</p> <p>This parameter
     * maps to <code>Volumes</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <a href="">--volume</a> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <p>Windows containers can mount whole directories on the same drive
     * as <code>$env:ProgramData</code>. Windows containers can't mount directories on
     * a different drive, and mount point can't be across drives.</p>
     */
    inline TaskContainerProperties& AddMountPoints(const MountPoint& value) { m_mountPointsHasBeenSet = true; m_mountPoints.push_back(value); return *this; }

    /**
     * <p>The mount points for data volumes in your container.</p> <p>This parameter
     * maps to <code>Volumes</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <a href="">--volume</a> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p> <p>Windows containers can mount whole directories on the same drive
     * as <code>$env:ProgramData</code>. Windows containers can't mount directories on
     * a different drive, and mount point can't be across drives.</p>
     */
    inline TaskContainerProperties& AddMountPoints(MountPoint&& value) { m_mountPointsHasBeenSet = true; m_mountPoints.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of a container. The name can be used as a unique identifier to
     * target your <code>dependsOn</code> and <code>Overrides</code> objects. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of a container. The name can be used as a unique identifier to
     * target your <code>dependsOn</code> and <code>Overrides</code> objects. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of a container. The name can be used as a unique identifier to
     * target your <code>dependsOn</code> and <code>Overrides</code> objects. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of a container. The name can be used as a unique identifier to
     * target your <code>dependsOn</code> and <code>Overrides</code> objects. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of a container. The name can be used as a unique identifier to
     * target your <code>dependsOn</code> and <code>Overrides</code> objects. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of a container. The name can be used as a unique identifier to
     * target your <code>dependsOn</code> and <code>Overrides</code> objects. </p>
     */
    inline TaskContainerProperties& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of a container. The name can be used as a unique identifier to
     * target your <code>dependsOn</code> and <code>Overrides</code> objects. </p>
     */
    inline TaskContainerProperties& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of a container. The name can be used as a unique identifier to
     * target your <code>dependsOn</code> and <code>Overrides</code> objects. </p>
     */
    inline TaskContainerProperties& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>When this parameter is <code>true</code>, the container is given elevated
     * privileges on the host container instance (similar to the <code>root</code>
     * user). This parameter maps to <code>Privileged</code> in the <a
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
     * <p>When this parameter is <code>true</code>, the container is given elevated
     * privileges on the host container instance (similar to the <code>root</code>
     * user). This parameter maps to <code>Privileged</code> in the <a
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
     * <p>When this parameter is <code>true</code>, the container is given elevated
     * privileges on the host container instance (similar to the <code>root</code>
     * user). This parameter maps to <code>Privileged</code> in the <a
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
     * <p>When this parameter is <code>true</code>, the container is given elevated
     * privileges on the host container instance (similar to the <code>root</code>
     * user). This parameter maps to <code>Privileged</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
     * <code>--privileged</code> option to <a
     * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
     * run</a>.</p>  <p>This parameter is not supported for Windows containers or
     * tasks run on Fargate.</p> 
     */
    inline TaskContainerProperties& WithPrivileged(bool value) { SetPrivileged(value); return *this;}


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
    inline TaskContainerProperties& WithReadonlyRootFilesystem(bool value) { SetReadonlyRootFilesystem(value); return *this;}


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
    inline TaskContainerProperties& WithRepositoryCredentials(const RepositoryCredentials& value) { SetRepositoryCredentials(value); return *this;}

    /**
     * <p>The private repository authentication credentials to use.</p>
     */
    inline TaskContainerProperties& WithRepositoryCredentials(RepositoryCredentials&& value) { SetRepositoryCredentials(std::move(value)); return *this;}


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
    inline TaskContainerProperties& WithResourceRequirements(const Aws::Vector<ResourceRequirement>& value) { SetResourceRequirements(value); return *this;}

    /**
     * <p>The type and amount of a resource to assign to a container. The only
     * supported resource is a GPU.</p>
     */
    inline TaskContainerProperties& WithResourceRequirements(Aws::Vector<ResourceRequirement>&& value) { SetResourceRequirements(std::move(value)); return *this;}

    /**
     * <p>The type and amount of a resource to assign to a container. The only
     * supported resource is a GPU.</p>
     */
    inline TaskContainerProperties& AddResourceRequirements(const ResourceRequirement& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements.push_back(value); return *this; }

    /**
     * <p>The type and amount of a resource to assign to a container. The only
     * supported resource is a GPU.</p>
     */
    inline TaskContainerProperties& AddResourceRequirements(ResourceRequirement&& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements.push_back(std::move(value)); return *this; }


    /**
     * <p>The secrets to pass to the container. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data.html">Specifying
     * Sensitive Data</a> in the Amazon Elastic Container Service Developer Guide.</p>
     */
    inline const Aws::Vector<Secret>& GetSecrets() const{ return m_secrets; }

    /**
     * <p>The secrets to pass to the container. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data.html">Specifying
     * Sensitive Data</a> in the Amazon Elastic Container Service Developer Guide.</p>
     */
    inline bool SecretsHasBeenSet() const { return m_secretsHasBeenSet; }

    /**
     * <p>The secrets to pass to the container. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data.html">Specifying
     * Sensitive Data</a> in the Amazon Elastic Container Service Developer Guide.</p>
     */
    inline void SetSecrets(const Aws::Vector<Secret>& value) { m_secretsHasBeenSet = true; m_secrets = value; }

    /**
     * <p>The secrets to pass to the container. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data.html">Specifying
     * Sensitive Data</a> in the Amazon Elastic Container Service Developer Guide.</p>
     */
    inline void SetSecrets(Aws::Vector<Secret>&& value) { m_secretsHasBeenSet = true; m_secrets = std::move(value); }

    /**
     * <p>The secrets to pass to the container. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data.html">Specifying
     * Sensitive Data</a> in the Amazon Elastic Container Service Developer Guide.</p>
     */
    inline TaskContainerProperties& WithSecrets(const Aws::Vector<Secret>& value) { SetSecrets(value); return *this;}

    /**
     * <p>The secrets to pass to the container. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data.html">Specifying
     * Sensitive Data</a> in the Amazon Elastic Container Service Developer Guide.</p>
     */
    inline TaskContainerProperties& WithSecrets(Aws::Vector<Secret>&& value) { SetSecrets(std::move(value)); return *this;}

    /**
     * <p>The secrets to pass to the container. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data.html">Specifying
     * Sensitive Data</a> in the Amazon Elastic Container Service Developer Guide.</p>
     */
    inline TaskContainerProperties& AddSecrets(const Secret& value) { m_secretsHasBeenSet = true; m_secrets.push_back(value); return *this; }

    /**
     * <p>The secrets to pass to the container. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/specifying-sensitive-data.html">Specifying
     * Sensitive Data</a> in the Amazon Elastic Container Service Developer Guide.</p>
     */
    inline TaskContainerProperties& AddSecrets(Secret&& value) { m_secretsHasBeenSet = true; m_secrets.push_back(std::move(value)); return *this; }


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
     * run</a>.</p> <p>Amazon ECS tasks hosted on Fargate use the default resource
     * limit values set by the operating system with the exception of the nofile
     * resource limit parameter which Fargate overrides. The <code>nofile</code>
     * resource limit sets a restriction on the number of open files that a container
     * can use. The default <code>nofile</code> soft limit is <code>1024</code> and the
     * default hard limit is <code>65535</code>.</p> <p>This parameter requires version
     * 1.18 of the Docker Remote API or greater on your container instance. To check
     * the Docker Remote API version on your container instance, log in to your
     * container instance and run the following command: sudo docker version
     * <code>--format '{{.Server.APIVersion}}'</code> </p>  <p>This parameter is
     * not supported for Windows containers.</p> 
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
     * run</a>.</p> <p>Amazon ECS tasks hosted on Fargate use the default resource
     * limit values set by the operating system with the exception of the nofile
     * resource limit parameter which Fargate overrides. The <code>nofile</code>
     * resource limit sets a restriction on the number of open files that a container
     * can use. The default <code>nofile</code> soft limit is <code>1024</code> and the
     * default hard limit is <code>65535</code>.</p> <p>This parameter requires version
     * 1.18 of the Docker Remote API or greater on your container instance. To check
     * the Docker Remote API version on your container instance, log in to your
     * container instance and run the following command: sudo docker version
     * <code>--format '{{.Server.APIVersion}}'</code> </p>  <p>This parameter is
     * not supported for Windows containers.</p> 
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
     * run</a>.</p> <p>Amazon ECS tasks hosted on Fargate use the default resource
     * limit values set by the operating system with the exception of the nofile
     * resource limit parameter which Fargate overrides. The <code>nofile</code>
     * resource limit sets a restriction on the number of open files that a container
     * can use. The default <code>nofile</code> soft limit is <code>1024</code> and the
     * default hard limit is <code>65535</code>.</p> <p>This parameter requires version
     * 1.18 of the Docker Remote API or greater on your container instance. To check
     * the Docker Remote API version on your container instance, log in to your
     * container instance and run the following command: sudo docker version
     * <code>--format '{{.Server.APIVersion}}'</code> </p>  <p>This parameter is
     * not supported for Windows containers.</p> 
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
     * run</a>.</p> <p>Amazon ECS tasks hosted on Fargate use the default resource
     * limit values set by the operating system with the exception of the nofile
     * resource limit parameter which Fargate overrides. The <code>nofile</code>
     * resource limit sets a restriction on the number of open files that a container
     * can use. The default <code>nofile</code> soft limit is <code>1024</code> and the
     * default hard limit is <code>65535</code>.</p> <p>This parameter requires version
     * 1.18 of the Docker Remote API or greater on your container instance. To check
     * the Docker Remote API version on your container instance, log in to your
     * container instance and run the following command: sudo docker version
     * <code>--format '{{.Server.APIVersion}}'</code> </p>  <p>This parameter is
     * not supported for Windows containers.</p> 
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
     * run</a>.</p> <p>Amazon ECS tasks hosted on Fargate use the default resource
     * limit values set by the operating system with the exception of the nofile
     * resource limit parameter which Fargate overrides. The <code>nofile</code>
     * resource limit sets a restriction on the number of open files that a container
     * can use. The default <code>nofile</code> soft limit is <code>1024</code> and the
     * default hard limit is <code>65535</code>.</p> <p>This parameter requires version
     * 1.18 of the Docker Remote API or greater on your container instance. To check
     * the Docker Remote API version on your container instance, log in to your
     * container instance and run the following command: sudo docker version
     * <code>--format '{{.Server.APIVersion}}'</code> </p>  <p>This parameter is
     * not supported for Windows containers.</p> 
     */
    inline TaskContainerProperties& WithUlimits(const Aws::Vector<Ulimit>& value) { SetUlimits(value); return *this;}

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
     * run</a>.</p> <p>Amazon ECS tasks hosted on Fargate use the default resource
     * limit values set by the operating system with the exception of the nofile
     * resource limit parameter which Fargate overrides. The <code>nofile</code>
     * resource limit sets a restriction on the number of open files that a container
     * can use. The default <code>nofile</code> soft limit is <code>1024</code> and the
     * default hard limit is <code>65535</code>.</p> <p>This parameter requires version
     * 1.18 of the Docker Remote API or greater on your container instance. To check
     * the Docker Remote API version on your container instance, log in to your
     * container instance and run the following command: sudo docker version
     * <code>--format '{{.Server.APIVersion}}'</code> </p>  <p>This parameter is
     * not supported for Windows containers.</p> 
     */
    inline TaskContainerProperties& WithUlimits(Aws::Vector<Ulimit>&& value) { SetUlimits(std::move(value)); return *this;}

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
     * run</a>.</p> <p>Amazon ECS tasks hosted on Fargate use the default resource
     * limit values set by the operating system with the exception of the nofile
     * resource limit parameter which Fargate overrides. The <code>nofile</code>
     * resource limit sets a restriction on the number of open files that a container
     * can use. The default <code>nofile</code> soft limit is <code>1024</code> and the
     * default hard limit is <code>65535</code>.</p> <p>This parameter requires version
     * 1.18 of the Docker Remote API or greater on your container instance. To check
     * the Docker Remote API version on your container instance, log in to your
     * container instance and run the following command: sudo docker version
     * <code>--format '{{.Server.APIVersion}}'</code> </p>  <p>This parameter is
     * not supported for Windows containers.</p> 
     */
    inline TaskContainerProperties& AddUlimits(const Ulimit& value) { m_ulimitsHasBeenSet = true; m_ulimits.push_back(value); return *this; }

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
     * run</a>.</p> <p>Amazon ECS tasks hosted on Fargate use the default resource
     * limit values set by the operating system with the exception of the nofile
     * resource limit parameter which Fargate overrides. The <code>nofile</code>
     * resource limit sets a restriction on the number of open files that a container
     * can use. The default <code>nofile</code> soft limit is <code>1024</code> and the
     * default hard limit is <code>65535</code>.</p> <p>This parameter requires version
     * 1.18 of the Docker Remote API or greater on your container instance. To check
     * the Docker Remote API version on your container instance, log in to your
     * container instance and run the following command: sudo docker version
     * <code>--format '{{.Server.APIVersion}}'</code> </p>  <p>This parameter is
     * not supported for Windows containers.</p> 
     */
    inline TaskContainerProperties& AddUlimits(Ulimit&& value) { m_ulimitsHasBeenSet = true; m_ulimits.push_back(std::move(value)); return *this; }


    /**
     * <p>The user to use inside the container. This parameter maps to User in the
     * Create a container section of the Docker Remote API and the --user option to
     * docker run.</p>  <p>When running tasks using the <code>host</code> network
     * mode, don't run containers using the <code>root user (UID 0)</code>. We
     * recommend using a non-root user for better security.</p>  <p>You can
     * specify the <code>user</code> using the following formats. If specifying a UID
     * or GID, you must specify it as a positive integer.</p> <ul> <li> <p>
     * <code>user</code> </p> </li> <li> <p> <code>user:group</code> </p> </li> <li>
     * <p> <code>uid</code> </p> </li> <li> <p> <code>uid:gid</code> </p> </li> <li>
     * <p> <code>user:gi</code> </p> </li> <li> <p> <code>uid:group</code> </p> </li>
     * </ul>  <p>This parameter is not supported for Windows containers.</p>
     * 
     */
    inline const Aws::String& GetUser() const{ return m_user; }

    /**
     * <p>The user to use inside the container. This parameter maps to User in the
     * Create a container section of the Docker Remote API and the --user option to
     * docker run.</p>  <p>When running tasks using the <code>host</code> network
     * mode, don't run containers using the <code>root user (UID 0)</code>. We
     * recommend using a non-root user for better security.</p>  <p>You can
     * specify the <code>user</code> using the following formats. If specifying a UID
     * or GID, you must specify it as a positive integer.</p> <ul> <li> <p>
     * <code>user</code> </p> </li> <li> <p> <code>user:group</code> </p> </li> <li>
     * <p> <code>uid</code> </p> </li> <li> <p> <code>uid:gid</code> </p> </li> <li>
     * <p> <code>user:gi</code> </p> </li> <li> <p> <code>uid:group</code> </p> </li>
     * </ul>  <p>This parameter is not supported for Windows containers.</p>
     * 
     */
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }

    /**
     * <p>The user to use inside the container. This parameter maps to User in the
     * Create a container section of the Docker Remote API and the --user option to
     * docker run.</p>  <p>When running tasks using the <code>host</code> network
     * mode, don't run containers using the <code>root user (UID 0)</code>. We
     * recommend using a non-root user for better security.</p>  <p>You can
     * specify the <code>user</code> using the following formats. If specifying a UID
     * or GID, you must specify it as a positive integer.</p> <ul> <li> <p>
     * <code>user</code> </p> </li> <li> <p> <code>user:group</code> </p> </li> <li>
     * <p> <code>uid</code> </p> </li> <li> <p> <code>uid:gid</code> </p> </li> <li>
     * <p> <code>user:gi</code> </p> </li> <li> <p> <code>uid:group</code> </p> </li>
     * </ul>  <p>This parameter is not supported for Windows containers.</p>
     * 
     */
    inline void SetUser(const Aws::String& value) { m_userHasBeenSet = true; m_user = value; }

    /**
     * <p>The user to use inside the container. This parameter maps to User in the
     * Create a container section of the Docker Remote API and the --user option to
     * docker run.</p>  <p>When running tasks using the <code>host</code> network
     * mode, don't run containers using the <code>root user (UID 0)</code>. We
     * recommend using a non-root user for better security.</p>  <p>You can
     * specify the <code>user</code> using the following formats. If specifying a UID
     * or GID, you must specify it as a positive integer.</p> <ul> <li> <p>
     * <code>user</code> </p> </li> <li> <p> <code>user:group</code> </p> </li> <li>
     * <p> <code>uid</code> </p> </li> <li> <p> <code>uid:gid</code> </p> </li> <li>
     * <p> <code>user:gi</code> </p> </li> <li> <p> <code>uid:group</code> </p> </li>
     * </ul>  <p>This parameter is not supported for Windows containers.</p>
     * 
     */
    inline void SetUser(Aws::String&& value) { m_userHasBeenSet = true; m_user = std::move(value); }

    /**
     * <p>The user to use inside the container. This parameter maps to User in the
     * Create a container section of the Docker Remote API and the --user option to
     * docker run.</p>  <p>When running tasks using the <code>host</code> network
     * mode, don't run containers using the <code>root user (UID 0)</code>. We
     * recommend using a non-root user for better security.</p>  <p>You can
     * specify the <code>user</code> using the following formats. If specifying a UID
     * or GID, you must specify it as a positive integer.</p> <ul> <li> <p>
     * <code>user</code> </p> </li> <li> <p> <code>user:group</code> </p> </li> <li>
     * <p> <code>uid</code> </p> </li> <li> <p> <code>uid:gid</code> </p> </li> <li>
     * <p> <code>user:gi</code> </p> </li> <li> <p> <code>uid:group</code> </p> </li>
     * </ul>  <p>This parameter is not supported for Windows containers.</p>
     * 
     */
    inline void SetUser(const char* value) { m_userHasBeenSet = true; m_user.assign(value); }

    /**
     * <p>The user to use inside the container. This parameter maps to User in the
     * Create a container section of the Docker Remote API and the --user option to
     * docker run.</p>  <p>When running tasks using the <code>host</code> network
     * mode, don't run containers using the <code>root user (UID 0)</code>. We
     * recommend using a non-root user for better security.</p>  <p>You can
     * specify the <code>user</code> using the following formats. If specifying a UID
     * or GID, you must specify it as a positive integer.</p> <ul> <li> <p>
     * <code>user</code> </p> </li> <li> <p> <code>user:group</code> </p> </li> <li>
     * <p> <code>uid</code> </p> </li> <li> <p> <code>uid:gid</code> </p> </li> <li>
     * <p> <code>user:gi</code> </p> </li> <li> <p> <code>uid:group</code> </p> </li>
     * </ul>  <p>This parameter is not supported for Windows containers.</p>
     * 
     */
    inline TaskContainerProperties& WithUser(const Aws::String& value) { SetUser(value); return *this;}

    /**
     * <p>The user to use inside the container. This parameter maps to User in the
     * Create a container section of the Docker Remote API and the --user option to
     * docker run.</p>  <p>When running tasks using the <code>host</code> network
     * mode, don't run containers using the <code>root user (UID 0)</code>. We
     * recommend using a non-root user for better security.</p>  <p>You can
     * specify the <code>user</code> using the following formats. If specifying a UID
     * or GID, you must specify it as a positive integer.</p> <ul> <li> <p>
     * <code>user</code> </p> </li> <li> <p> <code>user:group</code> </p> </li> <li>
     * <p> <code>uid</code> </p> </li> <li> <p> <code>uid:gid</code> </p> </li> <li>
     * <p> <code>user:gi</code> </p> </li> <li> <p> <code>uid:group</code> </p> </li>
     * </ul>  <p>This parameter is not supported for Windows containers.</p>
     * 
     */
    inline TaskContainerProperties& WithUser(Aws::String&& value) { SetUser(std::move(value)); return *this;}

    /**
     * <p>The user to use inside the container. This parameter maps to User in the
     * Create a container section of the Docker Remote API and the --user option to
     * docker run.</p>  <p>When running tasks using the <code>host</code> network
     * mode, don't run containers using the <code>root user (UID 0)</code>. We
     * recommend using a non-root user for better security.</p>  <p>You can
     * specify the <code>user</code> using the following formats. If specifying a UID
     * or GID, you must specify it as a positive integer.</p> <ul> <li> <p>
     * <code>user</code> </p> </li> <li> <p> <code>user:group</code> </p> </li> <li>
     * <p> <code>uid</code> </p> </li> <li> <p> <code>uid:gid</code> </p> </li> <li>
     * <p> <code>user:gi</code> </p> </li> <li> <p> <code>uid:group</code> </p> </li>
     * </ul>  <p>This parameter is not supported for Windows containers.</p>
     * 
     */
    inline TaskContainerProperties& WithUser(const char* value) { SetUser(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_command;
    bool m_commandHasBeenSet = false;

    Aws::Vector<TaskContainerDependency> m_dependsOn;
    bool m_dependsOnHasBeenSet = false;

    Aws::Vector<KeyValuePair> m_environment;
    bool m_environmentHasBeenSet = false;

    bool m_essential;
    bool m_essentialHasBeenSet = false;

    Aws::String m_image;
    bool m_imageHasBeenSet = false;

    LinuxParameters m_linuxParameters;
    bool m_linuxParametersHasBeenSet = false;

    LogConfiguration m_logConfiguration;
    bool m_logConfigurationHasBeenSet = false;

    Aws::Vector<MountPoint> m_mountPoints;
    bool m_mountPointsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_privileged;
    bool m_privilegedHasBeenSet = false;

    bool m_readonlyRootFilesystem;
    bool m_readonlyRootFilesystemHasBeenSet = false;

    RepositoryCredentials m_repositoryCredentials;
    bool m_repositoryCredentialsHasBeenSet = false;

    Aws::Vector<ResourceRequirement> m_resourceRequirements;
    bool m_resourceRequirementsHasBeenSet = false;

    Aws::Vector<Secret> m_secrets;
    bool m_secretsHasBeenSet = false;

    Aws::Vector<Ulimit> m_ulimits;
    bool m_ulimitsHasBeenSet = false;

    Aws::String m_user;
    bool m_userHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
