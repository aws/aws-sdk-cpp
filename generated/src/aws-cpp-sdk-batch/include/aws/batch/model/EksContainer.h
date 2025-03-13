/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/EksContainerResourceRequirements.h>
#include <aws/batch/model/EksContainerSecurityContext.h>
#include <aws/batch/model/EksContainerEnvironmentVariable.h>
#include <aws/batch/model/EksContainerVolumeMount.h>
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
   * <p>EKS container properties are used in job definitions for Amazon EKS based job
   * definitions to describe the properties for a container node in the pod that's
   * launched as part of a job. This can't be specified for Amazon ECS based job
   * definitions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/EksContainer">AWS
   * API Reference</a></p>
   */
  class EksContainer
  {
  public:
    AWS_BATCH_API EksContainer() = default;
    AWS_BATCH_API EksContainer(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API EksContainer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the container. If the name isn't specified, the default name
     * "<code>Default</code>" is used. Each container in a pod must have a unique
     * name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    EksContainer& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Docker image used to start the container.</p>
     */
    inline const Aws::String& GetImage() const { return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    template<typename ImageT = Aws::String>
    void SetImage(ImageT&& value) { m_imageHasBeenSet = true; m_image = std::forward<ImageT>(value); }
    template<typename ImageT = Aws::String>
    EksContainer& WithImage(ImageT&& value) { SetImage(std::forward<ImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image pull policy for the container. Supported values are
     * <code>Always</code>, <code>IfNotPresent</code>, and <code>Never</code>. This
     * parameter defaults to <code>IfNotPresent</code>. However, if the
     * <code>:latest</code> tag is specified, it defaults to <code>Always</code>. For
     * more information, see <a
     * href="https://kubernetes.io/docs/concepts/containers/images/#updating-images">Updating
     * images</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline const Aws::String& GetImagePullPolicy() const { return m_imagePullPolicy; }
    inline bool ImagePullPolicyHasBeenSet() const { return m_imagePullPolicyHasBeenSet; }
    template<typename ImagePullPolicyT = Aws::String>
    void SetImagePullPolicy(ImagePullPolicyT&& value) { m_imagePullPolicyHasBeenSet = true; m_imagePullPolicy = std::forward<ImagePullPolicyT>(value); }
    template<typename ImagePullPolicyT = Aws::String>
    EksContainer& WithImagePullPolicy(ImagePullPolicyT&& value) { SetImagePullPolicy(std::forward<ImagePullPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entrypoint for the container. This isn't run within a shell. If this
     * isn't specified, the <code>ENTRYPOINT</code> of the container image is used.
     * Environment variable references are expanded using the container's
     * environment.</p> <p>If the referenced environment variable doesn't exist, the
     * reference in the command isn't changed. For example, if the reference is to
     * "<code>$(NAME1)</code>" and the <code>NAME1</code> environment variable doesn't
     * exist, the command string will remain "<code>$(NAME1)</code>." <code>$$</code>
     * is replaced with <code>$</code> and the resulting string isn't expanded. For
     * example, <code>$$(VAR_NAME)</code> will be passed as <code>$(VAR_NAME)</code>
     * whether or not the <code>VAR_NAME</code> environment variable exists. The
     * entrypoint can't be updated. For more information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#entrypoint">ENTRYPOINT</a>
     * in the <i>Dockerfile reference</i> and <a
     * href="https://kubernetes.io/docs/tasks/inject-data-application/define-command-argument-container/">Define
     * a command and arguments for a container</a> and <a
     * href="https://kubernetes.io/docs/reference/kubernetes-api/workload-resources/pod-v1/#entrypoint">Entrypoint</a>
     * in the <i>Kubernetes documentation</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCommand() const { return m_command; }
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
    template<typename CommandT = Aws::Vector<Aws::String>>
    void SetCommand(CommandT&& value) { m_commandHasBeenSet = true; m_command = std::forward<CommandT>(value); }
    template<typename CommandT = Aws::Vector<Aws::String>>
    EksContainer& WithCommand(CommandT&& value) { SetCommand(std::forward<CommandT>(value)); return *this;}
    template<typename CommandT = Aws::String>
    EksContainer& AddCommand(CommandT&& value) { m_commandHasBeenSet = true; m_command.emplace_back(std::forward<CommandT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of arguments to the entrypoint. If this isn't specified, the
     * <code>CMD</code> of the container image is used. This corresponds to the
     * <code>args</code> member in the <a
     * href="https://kubernetes.io/docs/reference/kubernetes-api/workload-resources/pod-v1/#entrypoint">Entrypoint</a>
     * portion of the <a
     * href="https://kubernetes.io/docs/reference/kubernetes-api/workload-resources/pod-v1/">Pod</a>
     * in Kubernetes. Environment variable references are expanded using the
     * container's environment.</p> <p>If the referenced environment variable doesn't
     * exist, the reference in the command isn't changed. For example, if the reference
     * is to "<code>$(NAME1)</code>" and the <code>NAME1</code> environment variable
     * doesn't exist, the command string will remain "<code>$(NAME1)</code>."
     * <code>$$</code> is replaced with <code>$</code>, and the resulting string isn't
     * expanded. For example, <code>$$(VAR_NAME)</code> is passed as
     * <code>$(VAR_NAME)</code> whether or not the <code>VAR_NAME</code> environment
     * variable exists. For more information, see <a
     * href="https://docs.docker.com/engine/reference/builder/#cmd">Dockerfile
     * reference: CMD</a> and <a
     * href="https://kubernetes.io/docs/tasks/inject-data-application/define-command-argument-container/">Define
     * a command and arguments for a pod</a> in the <i>Kubernetes
     * documentation</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetArgs() const { return m_args; }
    inline bool ArgsHasBeenSet() const { return m_argsHasBeenSet; }
    template<typename ArgsT = Aws::Vector<Aws::String>>
    void SetArgs(ArgsT&& value) { m_argsHasBeenSet = true; m_args = std::forward<ArgsT>(value); }
    template<typename ArgsT = Aws::Vector<Aws::String>>
    EksContainer& WithArgs(ArgsT&& value) { SetArgs(std::forward<ArgsT>(value)); return *this;}
    template<typename ArgsT = Aws::String>
    EksContainer& AddArgs(ArgsT&& value) { m_argsHasBeenSet = true; m_args.emplace_back(std::forward<ArgsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The environment variables to pass to a container.</p>  <p>Environment
     * variables cannot start with "<code>AWS_BATCH</code>". This naming convention is
     * reserved for variables that Batch sets.</p> 
     */
    inline const Aws::Vector<EksContainerEnvironmentVariable>& GetEnv() const { return m_env; }
    inline bool EnvHasBeenSet() const { return m_envHasBeenSet; }
    template<typename EnvT = Aws::Vector<EksContainerEnvironmentVariable>>
    void SetEnv(EnvT&& value) { m_envHasBeenSet = true; m_env = std::forward<EnvT>(value); }
    template<typename EnvT = Aws::Vector<EksContainerEnvironmentVariable>>
    EksContainer& WithEnv(EnvT&& value) { SetEnv(std::forward<EnvT>(value)); return *this;}
    template<typename EnvT = EksContainerEnvironmentVariable>
    EksContainer& AddEnv(EnvT&& value) { m_envHasBeenSet = true; m_env.emplace_back(std::forward<EnvT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type and amount of resources to assign to a container. The supported
     * resources include <code>memory</code>, <code>cpu</code>, and
     * <code>nvidia.com/gpu</code>. For more information, see <a
     * href="https://kubernetes.io/docs/concepts/configuration/manage-resources-containers/">Resource
     * management for pods and containers</a> in the <i>Kubernetes
     * documentation</i>.</p>
     */
    inline const EksContainerResourceRequirements& GetResources() const { return m_resources; }
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    template<typename ResourcesT = EksContainerResourceRequirements>
    void SetResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources = std::forward<ResourcesT>(value); }
    template<typename ResourcesT = EksContainerResourceRequirements>
    EksContainer& WithResources(ResourcesT&& value) { SetResources(std::forward<ResourcesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The volume mounts for the container. Batch supports <code>emptyDir</code>,
     * <code>hostPath</code>, and <code>secret</code> volume types. For more
     * information about volumes and volume mounts in Kubernetes, see <a
     * href="https://kubernetes.io/docs/concepts/storage/volumes/">Volumes</a> in the
     * <i>Kubernetes documentation</i>.</p>
     */
    inline const Aws::Vector<EksContainerVolumeMount>& GetVolumeMounts() const { return m_volumeMounts; }
    inline bool VolumeMountsHasBeenSet() const { return m_volumeMountsHasBeenSet; }
    template<typename VolumeMountsT = Aws::Vector<EksContainerVolumeMount>>
    void SetVolumeMounts(VolumeMountsT&& value) { m_volumeMountsHasBeenSet = true; m_volumeMounts = std::forward<VolumeMountsT>(value); }
    template<typename VolumeMountsT = Aws::Vector<EksContainerVolumeMount>>
    EksContainer& WithVolumeMounts(VolumeMountsT&& value) { SetVolumeMounts(std::forward<VolumeMountsT>(value)); return *this;}
    template<typename VolumeMountsT = EksContainerVolumeMount>
    EksContainer& AddVolumeMounts(VolumeMountsT&& value) { m_volumeMountsHasBeenSet = true; m_volumeMounts.emplace_back(std::forward<VolumeMountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The security context for a job. For more information, see <a
     * href="https://kubernetes.io/docs/tasks/configure-pod-container/security-context/">Configure
     * a security context for a pod or container</a> in the <i>Kubernetes
     * documentation</i>.</p>
     */
    inline const EksContainerSecurityContext& GetSecurityContext() const { return m_securityContext; }
    inline bool SecurityContextHasBeenSet() const { return m_securityContextHasBeenSet; }
    template<typename SecurityContextT = EksContainerSecurityContext>
    void SetSecurityContext(SecurityContextT&& value) { m_securityContextHasBeenSet = true; m_securityContext = std::forward<SecurityContextT>(value); }
    template<typename SecurityContextT = EksContainerSecurityContext>
    EksContainer& WithSecurityContext(SecurityContextT&& value) { SetSecurityContext(std::forward<SecurityContextT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_image;
    bool m_imageHasBeenSet = false;

    Aws::String m_imagePullPolicy;
    bool m_imagePullPolicyHasBeenSet = false;

    Aws::Vector<Aws::String> m_command;
    bool m_commandHasBeenSet = false;

    Aws::Vector<Aws::String> m_args;
    bool m_argsHasBeenSet = false;

    Aws::Vector<EksContainerEnvironmentVariable> m_env;
    bool m_envHasBeenSet = false;

    EksContainerResourceRequirements m_resources;
    bool m_resourcesHasBeenSet = false;

    Aws::Vector<EksContainerVolumeMount> m_volumeMounts;
    bool m_volumeMountsHasBeenSet = false;

    EksContainerSecurityContext m_securityContext;
    bool m_securityContextHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
