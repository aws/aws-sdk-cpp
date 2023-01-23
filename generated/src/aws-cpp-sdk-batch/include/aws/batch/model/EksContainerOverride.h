/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/EksContainerResourceRequirements.h>
#include <aws/batch/model/EksContainerEnvironmentVariable.h>
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
   * <p>Object representing any Kubernetes overrides to a job definition that's used
   * in a <a>SubmitJob</a> API operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/EksContainerOverride">AWS
   * API Reference</a></p>
   */
  class EksContainerOverride
  {
  public:
    AWS_BATCH_API EksContainerOverride();
    AWS_BATCH_API EksContainerOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API EksContainerOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The override of the Docker image that's used to start the container.</p>
     */
    inline const Aws::String& GetImage() const{ return m_image; }

    /**
     * <p>The override of the Docker image that's used to start the container.</p>
     */
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }

    /**
     * <p>The override of the Docker image that's used to start the container.</p>
     */
    inline void SetImage(const Aws::String& value) { m_imageHasBeenSet = true; m_image = value; }

    /**
     * <p>The override of the Docker image that's used to start the container.</p>
     */
    inline void SetImage(Aws::String&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }

    /**
     * <p>The override of the Docker image that's used to start the container.</p>
     */
    inline void SetImage(const char* value) { m_imageHasBeenSet = true; m_image.assign(value); }

    /**
     * <p>The override of the Docker image that's used to start the container.</p>
     */
    inline EksContainerOverride& WithImage(const Aws::String& value) { SetImage(value); return *this;}

    /**
     * <p>The override of the Docker image that's used to start the container.</p>
     */
    inline EksContainerOverride& WithImage(Aws::String&& value) { SetImage(std::move(value)); return *this;}

    /**
     * <p>The override of the Docker image that's used to start the container.</p>
     */
    inline EksContainerOverride& WithImage(const char* value) { SetImage(value); return *this;}


    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the job definition.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCommand() const{ return m_command; }

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the job definition.</p>
     */
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the job definition.</p>
     */
    inline void SetCommand(const Aws::Vector<Aws::String>& value) { m_commandHasBeenSet = true; m_command = value; }

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the job definition.</p>
     */
    inline void SetCommand(Aws::Vector<Aws::String>&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the job definition.</p>
     */
    inline EksContainerOverride& WithCommand(const Aws::Vector<Aws::String>& value) { SetCommand(value); return *this;}

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the job definition.</p>
     */
    inline EksContainerOverride& WithCommand(Aws::Vector<Aws::String>&& value) { SetCommand(std::move(value)); return *this;}

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the job definition.</p>
     */
    inline EksContainerOverride& AddCommand(const Aws::String& value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the job definition.</p>
     */
    inline EksContainerOverride& AddCommand(Aws::String&& value) { m_commandHasBeenSet = true; m_command.push_back(std::move(value)); return *this; }

    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the job definition.</p>
     */
    inline EksContainerOverride& AddCommand(const char* value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }


    /**
     * <p>The arguments to the entrypoint to send to the container that overrides the
     * default arguments from the Docker image or the job definition. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">CMD</a> in the
     * <i>Dockerfile reference</i> and <a
     * href="https://kubernetes.io/docs/tasks/inject-data-application/define-command-argument-container/">Define
     * a command an arguments for a pod</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetArgs() const{ return m_args; }

    /**
     * <p>The arguments to the entrypoint to send to the container that overrides the
     * default arguments from the Docker image or the job definition. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">CMD</a> in the
     * <i>Dockerfile reference</i> and <a
     * href="https://kubernetes.io/docs/tasks/inject-data-application/define-command-argument-container/">Define
     * a command an arguments for a pod</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline bool ArgsHasBeenSet() const { return m_argsHasBeenSet; }

    /**
     * <p>The arguments to the entrypoint to send to the container that overrides the
     * default arguments from the Docker image or the job definition. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">CMD</a> in the
     * <i>Dockerfile reference</i> and <a
     * href="https://kubernetes.io/docs/tasks/inject-data-application/define-command-argument-container/">Define
     * a command an arguments for a pod</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline void SetArgs(const Aws::Vector<Aws::String>& value) { m_argsHasBeenSet = true; m_args = value; }

    /**
     * <p>The arguments to the entrypoint to send to the container that overrides the
     * default arguments from the Docker image or the job definition. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">CMD</a> in the
     * <i>Dockerfile reference</i> and <a
     * href="https://kubernetes.io/docs/tasks/inject-data-application/define-command-argument-container/">Define
     * a command an arguments for a pod</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline void SetArgs(Aws::Vector<Aws::String>&& value) { m_argsHasBeenSet = true; m_args = std::move(value); }

    /**
     * <p>The arguments to the entrypoint to send to the container that overrides the
     * default arguments from the Docker image or the job definition. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">CMD</a> in the
     * <i>Dockerfile reference</i> and <a
     * href="https://kubernetes.io/docs/tasks/inject-data-application/define-command-argument-container/">Define
     * a command an arguments for a pod</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline EksContainerOverride& WithArgs(const Aws::Vector<Aws::String>& value) { SetArgs(value); return *this;}

    /**
     * <p>The arguments to the entrypoint to send to the container that overrides the
     * default arguments from the Docker image or the job definition. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">CMD</a> in the
     * <i>Dockerfile reference</i> and <a
     * href="https://kubernetes.io/docs/tasks/inject-data-application/define-command-argument-container/">Define
     * a command an arguments for a pod</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline EksContainerOverride& WithArgs(Aws::Vector<Aws::String>&& value) { SetArgs(std::move(value)); return *this;}

    /**
     * <p>The arguments to the entrypoint to send to the container that overrides the
     * default arguments from the Docker image or the job definition. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">CMD</a> in the
     * <i>Dockerfile reference</i> and <a
     * href="https://kubernetes.io/docs/tasks/inject-data-application/define-command-argument-container/">Define
     * a command an arguments for a pod</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline EksContainerOverride& AddArgs(const Aws::String& value) { m_argsHasBeenSet = true; m_args.push_back(value); return *this; }

    /**
     * <p>The arguments to the entrypoint to send to the container that overrides the
     * default arguments from the Docker image or the job definition. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">CMD</a> in the
     * <i>Dockerfile reference</i> and <a
     * href="https://kubernetes.io/docs/tasks/inject-data-application/define-command-argument-container/">Define
     * a command an arguments for a pod</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline EksContainerOverride& AddArgs(Aws::String&& value) { m_argsHasBeenSet = true; m_args.push_back(std::move(value)); return *this; }

    /**
     * <p>The arguments to the entrypoint to send to the container that overrides the
     * default arguments from the Docker image or the job definition. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">CMD</a> in the
     * <i>Dockerfile reference</i> and <a
     * href="https://kubernetes.io/docs/tasks/inject-data-application/define-command-argument-container/">Define
     * a command an arguments for a pod</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline EksContainerOverride& AddArgs(const char* value) { m_argsHasBeenSet = true; m_args.push_back(value); return *this; }


    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch. Or, you can
     * override the existing environment variables from the Docker image or the job
     * definition.</p>  <p>Environment variables cannot start with
     * "<code>AWS_BATCH</code>". This naming convention is reserved for variables that
     * Batch sets.</p> 
     */
    inline const Aws::Vector<EksContainerEnvironmentVariable>& GetEnv() const{ return m_env; }

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch. Or, you can
     * override the existing environment variables from the Docker image or the job
     * definition.</p>  <p>Environment variables cannot start with
     * "<code>AWS_BATCH</code>". This naming convention is reserved for variables that
     * Batch sets.</p> 
     */
    inline bool EnvHasBeenSet() const { return m_envHasBeenSet; }

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch. Or, you can
     * override the existing environment variables from the Docker image or the job
     * definition.</p>  <p>Environment variables cannot start with
     * "<code>AWS_BATCH</code>". This naming convention is reserved for variables that
     * Batch sets.</p> 
     */
    inline void SetEnv(const Aws::Vector<EksContainerEnvironmentVariable>& value) { m_envHasBeenSet = true; m_env = value; }

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch. Or, you can
     * override the existing environment variables from the Docker image or the job
     * definition.</p>  <p>Environment variables cannot start with
     * "<code>AWS_BATCH</code>". This naming convention is reserved for variables that
     * Batch sets.</p> 
     */
    inline void SetEnv(Aws::Vector<EksContainerEnvironmentVariable>&& value) { m_envHasBeenSet = true; m_env = std::move(value); }

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch. Or, you can
     * override the existing environment variables from the Docker image or the job
     * definition.</p>  <p>Environment variables cannot start with
     * "<code>AWS_BATCH</code>". This naming convention is reserved for variables that
     * Batch sets.</p> 
     */
    inline EksContainerOverride& WithEnv(const Aws::Vector<EksContainerEnvironmentVariable>& value) { SetEnv(value); return *this;}

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch. Or, you can
     * override the existing environment variables from the Docker image or the job
     * definition.</p>  <p>Environment variables cannot start with
     * "<code>AWS_BATCH</code>". This naming convention is reserved for variables that
     * Batch sets.</p> 
     */
    inline EksContainerOverride& WithEnv(Aws::Vector<EksContainerEnvironmentVariable>&& value) { SetEnv(std::move(value)); return *this;}

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch. Or, you can
     * override the existing environment variables from the Docker image or the job
     * definition.</p>  <p>Environment variables cannot start with
     * "<code>AWS_BATCH</code>". This naming convention is reserved for variables that
     * Batch sets.</p> 
     */
    inline EksContainerOverride& AddEnv(const EksContainerEnvironmentVariable& value) { m_envHasBeenSet = true; m_env.push_back(value); return *this; }

    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch. Or, you can
     * override the existing environment variables from the Docker image or the job
     * definition.</p>  <p>Environment variables cannot start with
     * "<code>AWS_BATCH</code>". This naming convention is reserved for variables that
     * Batch sets.</p> 
     */
    inline EksContainerOverride& AddEnv(EksContainerEnvironmentVariable&& value) { m_envHasBeenSet = true; m_env.push_back(std::move(value)); return *this; }


    /**
     * <p>The type and amount of resources to assign to a container. These override the
     * settings in the job definition. The supported resources include
     * <code>memory</code>, <code>cpu</code>, and <code>nvidia.com/gpu</code>. For more
     * information, see <a
     * href="https://kubernetes.io/docs/concepts/configuration/manage-resources-containers/">Resource
     * management for pods and containers</a> in the <i>Kubernetes
     * documentation</i>.</p>
     */
    inline const EksContainerResourceRequirements& GetResources() const{ return m_resources; }

    /**
     * <p>The type and amount of resources to assign to a container. These override the
     * settings in the job definition. The supported resources include
     * <code>memory</code>, <code>cpu</code>, and <code>nvidia.com/gpu</code>. For more
     * information, see <a
     * href="https://kubernetes.io/docs/concepts/configuration/manage-resources-containers/">Resource
     * management for pods and containers</a> in the <i>Kubernetes
     * documentation</i>.</p>
     */
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }

    /**
     * <p>The type and amount of resources to assign to a container. These override the
     * settings in the job definition. The supported resources include
     * <code>memory</code>, <code>cpu</code>, and <code>nvidia.com/gpu</code>. For more
     * information, see <a
     * href="https://kubernetes.io/docs/concepts/configuration/manage-resources-containers/">Resource
     * management for pods and containers</a> in the <i>Kubernetes
     * documentation</i>.</p>
     */
    inline void SetResources(const EksContainerResourceRequirements& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * <p>The type and amount of resources to assign to a container. These override the
     * settings in the job definition. The supported resources include
     * <code>memory</code>, <code>cpu</code>, and <code>nvidia.com/gpu</code>. For more
     * information, see <a
     * href="https://kubernetes.io/docs/concepts/configuration/manage-resources-containers/">Resource
     * management for pods and containers</a> in the <i>Kubernetes
     * documentation</i>.</p>
     */
    inline void SetResources(EksContainerResourceRequirements&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }

    /**
     * <p>The type and amount of resources to assign to a container. These override the
     * settings in the job definition. The supported resources include
     * <code>memory</code>, <code>cpu</code>, and <code>nvidia.com/gpu</code>. For more
     * information, see <a
     * href="https://kubernetes.io/docs/concepts/configuration/manage-resources-containers/">Resource
     * management for pods and containers</a> in the <i>Kubernetes
     * documentation</i>.</p>
     */
    inline EksContainerOverride& WithResources(const EksContainerResourceRequirements& value) { SetResources(value); return *this;}

    /**
     * <p>The type and amount of resources to assign to a container. These override the
     * settings in the job definition. The supported resources include
     * <code>memory</code>, <code>cpu</code>, and <code>nvidia.com/gpu</code>. For more
     * information, see <a
     * href="https://kubernetes.io/docs/concepts/configuration/manage-resources-containers/">Resource
     * management for pods and containers</a> in the <i>Kubernetes
     * documentation</i>.</p>
     */
    inline EksContainerOverride& WithResources(EksContainerResourceRequirements&& value) { SetResources(std::move(value)); return *this;}

  private:

    Aws::String m_image;
    bool m_imageHasBeenSet = false;

    Aws::Vector<Aws::String> m_command;
    bool m_commandHasBeenSet = false;

    Aws::Vector<Aws::String> m_args;
    bool m_argsHasBeenSet = false;

    Aws::Vector<EksContainerEnvironmentVariable> m_env;
    bool m_envHasBeenSet = false;

    EksContainerResourceRequirements m_resources;
    bool m_resourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
