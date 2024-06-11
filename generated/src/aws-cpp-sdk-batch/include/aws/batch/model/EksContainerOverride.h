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
   * in a <a
   * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_SubmitJob.html">SubmitJob</a>
   * API operation.</p><p><h3>See Also:</h3>   <a
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


    ///@{
    /**
     * <p>A pointer to the container that you want to override. The name must match a
     * unique container name that you wish to override.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline EksContainerOverride& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline EksContainerOverride& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline EksContainerOverride& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The override of the Docker image that's used to start the container.</p>
     */
    inline const Aws::String& GetImage() const{ return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    inline void SetImage(const Aws::String& value) { m_imageHasBeenSet = true; m_image = value; }
    inline void SetImage(Aws::String&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }
    inline void SetImage(const char* value) { m_imageHasBeenSet = true; m_image.assign(value); }
    inline EksContainerOverride& WithImage(const Aws::String& value) { SetImage(value); return *this;}
    inline EksContainerOverride& WithImage(Aws::String&& value) { SetImage(std::move(value)); return *this;}
    inline EksContainerOverride& WithImage(const char* value) { SetImage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The command to send to the container that overrides the default command from
     * the Docker image or the job definition.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCommand() const{ return m_command; }
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
    inline void SetCommand(const Aws::Vector<Aws::String>& value) { m_commandHasBeenSet = true; m_command = value; }
    inline void SetCommand(Aws::Vector<Aws::String>&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }
    inline EksContainerOverride& WithCommand(const Aws::Vector<Aws::String>& value) { SetCommand(value); return *this;}
    inline EksContainerOverride& WithCommand(Aws::Vector<Aws::String>&& value) { SetCommand(std::move(value)); return *this;}
    inline EksContainerOverride& AddCommand(const Aws::String& value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }
    inline EksContainerOverride& AddCommand(Aws::String&& value) { m_commandHasBeenSet = true; m_command.push_back(std::move(value)); return *this; }
    inline EksContainerOverride& AddCommand(const char* value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The arguments to the entrypoint to send to the container that overrides the
     * default arguments from the Docker image or the job definition. For more
     * information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">Dockerfile
     * reference: CMD</a> and <a
     * href="https://kubernetes.io/docs/tasks/inject-data-application/define-command-argument-container/">Define
     * a command an arguments for a pod</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetArgs() const{ return m_args; }
    inline bool ArgsHasBeenSet() const { return m_argsHasBeenSet; }
    inline void SetArgs(const Aws::Vector<Aws::String>& value) { m_argsHasBeenSet = true; m_args = value; }
    inline void SetArgs(Aws::Vector<Aws::String>&& value) { m_argsHasBeenSet = true; m_args = std::move(value); }
    inline EksContainerOverride& WithArgs(const Aws::Vector<Aws::String>& value) { SetArgs(value); return *this;}
    inline EksContainerOverride& WithArgs(Aws::Vector<Aws::String>&& value) { SetArgs(std::move(value)); return *this;}
    inline EksContainerOverride& AddArgs(const Aws::String& value) { m_argsHasBeenSet = true; m_args.push_back(value); return *this; }
    inline EksContainerOverride& AddArgs(Aws::String&& value) { m_argsHasBeenSet = true; m_args.push_back(std::move(value)); return *this; }
    inline EksContainerOverride& AddArgs(const char* value) { m_argsHasBeenSet = true; m_args.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The environment variables to send to the container. You can add new
     * environment variables, which are added to the container at launch. Or, you can
     * override the existing environment variables from the Docker image or the job
     * definition.</p>  <p>Environment variables cannot start with
     * "<code>AWS_BATCH</code>". This naming convention is reserved for variables that
     * Batch sets.</p> 
     */
    inline const Aws::Vector<EksContainerEnvironmentVariable>& GetEnv() const{ return m_env; }
    inline bool EnvHasBeenSet() const { return m_envHasBeenSet; }
    inline void SetEnv(const Aws::Vector<EksContainerEnvironmentVariable>& value) { m_envHasBeenSet = true; m_env = value; }
    inline void SetEnv(Aws::Vector<EksContainerEnvironmentVariable>&& value) { m_envHasBeenSet = true; m_env = std::move(value); }
    inline EksContainerOverride& WithEnv(const Aws::Vector<EksContainerEnvironmentVariable>& value) { SetEnv(value); return *this;}
    inline EksContainerOverride& WithEnv(Aws::Vector<EksContainerEnvironmentVariable>&& value) { SetEnv(std::move(value)); return *this;}
    inline EksContainerOverride& AddEnv(const EksContainerEnvironmentVariable& value) { m_envHasBeenSet = true; m_env.push_back(value); return *this; }
    inline EksContainerOverride& AddEnv(EksContainerEnvironmentVariable&& value) { m_envHasBeenSet = true; m_env.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
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
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    inline void SetResources(const EksContainerResourceRequirements& value) { m_resourcesHasBeenSet = true; m_resources = value; }
    inline void SetResources(EksContainerResourceRequirements&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }
    inline EksContainerOverride& WithResources(const EksContainerResourceRequirements& value) { SetResources(value); return *this;}
    inline EksContainerOverride& WithResources(EksContainerResourceRequirements&& value) { SetResources(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

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
