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
    AWS_BATCH_API EksContainer();
    AWS_BATCH_API EksContainer(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API EksContainer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the container. If the name isn't specified, the default name
     * "<code>Default</code>" is used. Each container in a pod must have a unique
     * name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the container. If the name isn't specified, the default name
     * "<code>Default</code>" is used. Each container in a pod must have a unique
     * name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the container. If the name isn't specified, the default name
     * "<code>Default</code>" is used. Each container in a pod must have a unique
     * name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the container. If the name isn't specified, the default name
     * "<code>Default</code>" is used. Each container in a pod must have a unique
     * name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the container. If the name isn't specified, the default name
     * "<code>Default</code>" is used. Each container in a pod must have a unique
     * name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the container. If the name isn't specified, the default name
     * "<code>Default</code>" is used. Each container in a pod must have a unique
     * name.</p>
     */
    inline EksContainer& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the container. If the name isn't specified, the default name
     * "<code>Default</code>" is used. Each container in a pod must have a unique
     * name.</p>
     */
    inline EksContainer& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the container. If the name isn't specified, the default name
     * "<code>Default</code>" is used. Each container in a pod must have a unique
     * name.</p>
     */
    inline EksContainer& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Docker image used to start the container.</p>
     */
    inline const Aws::String& GetImage() const{ return m_image; }

    /**
     * <p>The Docker image used to start the container.</p>
     */
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }

    /**
     * <p>The Docker image used to start the container.</p>
     */
    inline void SetImage(const Aws::String& value) { m_imageHasBeenSet = true; m_image = value; }

    /**
     * <p>The Docker image used to start the container.</p>
     */
    inline void SetImage(Aws::String&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }

    /**
     * <p>The Docker image used to start the container.</p>
     */
    inline void SetImage(const char* value) { m_imageHasBeenSet = true; m_image.assign(value); }

    /**
     * <p>The Docker image used to start the container.</p>
     */
    inline EksContainer& WithImage(const Aws::String& value) { SetImage(value); return *this;}

    /**
     * <p>The Docker image used to start the container.</p>
     */
    inline EksContainer& WithImage(Aws::String&& value) { SetImage(std::move(value)); return *this;}

    /**
     * <p>The Docker image used to start the container.</p>
     */
    inline EksContainer& WithImage(const char* value) { SetImage(value); return *this;}


    /**
     * <p>The image pull policy for the container. Supported values are
     * <code>Always</code>, <code>IfNotPresent</code>, and <code>Never</code>. This
     * parameter defaults to <code>IfNotPresent</code>. However, if the
     * <code>:latest</code> tag is specified, it defaults to <code>Always</code>. For
     * more information, see <a
     * href="https://kubernetes.io/docs/concepts/containers/images/#updating-images">Updating
     * images</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline const Aws::String& GetImagePullPolicy() const{ return m_imagePullPolicy; }

    /**
     * <p>The image pull policy for the container. Supported values are
     * <code>Always</code>, <code>IfNotPresent</code>, and <code>Never</code>. This
     * parameter defaults to <code>IfNotPresent</code>. However, if the
     * <code>:latest</code> tag is specified, it defaults to <code>Always</code>. For
     * more information, see <a
     * href="https://kubernetes.io/docs/concepts/containers/images/#updating-images">Updating
     * images</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline bool ImagePullPolicyHasBeenSet() const { return m_imagePullPolicyHasBeenSet; }

    /**
     * <p>The image pull policy for the container. Supported values are
     * <code>Always</code>, <code>IfNotPresent</code>, and <code>Never</code>. This
     * parameter defaults to <code>IfNotPresent</code>. However, if the
     * <code>:latest</code> tag is specified, it defaults to <code>Always</code>. For
     * more information, see <a
     * href="https://kubernetes.io/docs/concepts/containers/images/#updating-images">Updating
     * images</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline void SetImagePullPolicy(const Aws::String& value) { m_imagePullPolicyHasBeenSet = true; m_imagePullPolicy = value; }

    /**
     * <p>The image pull policy for the container. Supported values are
     * <code>Always</code>, <code>IfNotPresent</code>, and <code>Never</code>. This
     * parameter defaults to <code>IfNotPresent</code>. However, if the
     * <code>:latest</code> tag is specified, it defaults to <code>Always</code>. For
     * more information, see <a
     * href="https://kubernetes.io/docs/concepts/containers/images/#updating-images">Updating
     * images</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline void SetImagePullPolicy(Aws::String&& value) { m_imagePullPolicyHasBeenSet = true; m_imagePullPolicy = std::move(value); }

    /**
     * <p>The image pull policy for the container. Supported values are
     * <code>Always</code>, <code>IfNotPresent</code>, and <code>Never</code>. This
     * parameter defaults to <code>IfNotPresent</code>. However, if the
     * <code>:latest</code> tag is specified, it defaults to <code>Always</code>. For
     * more information, see <a
     * href="https://kubernetes.io/docs/concepts/containers/images/#updating-images">Updating
     * images</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline void SetImagePullPolicy(const char* value) { m_imagePullPolicyHasBeenSet = true; m_imagePullPolicy.assign(value); }

    /**
     * <p>The image pull policy for the container. Supported values are
     * <code>Always</code>, <code>IfNotPresent</code>, and <code>Never</code>. This
     * parameter defaults to <code>IfNotPresent</code>. However, if the
     * <code>:latest</code> tag is specified, it defaults to <code>Always</code>. For
     * more information, see <a
     * href="https://kubernetes.io/docs/concepts/containers/images/#updating-images">Updating
     * images</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline EksContainer& WithImagePullPolicy(const Aws::String& value) { SetImagePullPolicy(value); return *this;}

    /**
     * <p>The image pull policy for the container. Supported values are
     * <code>Always</code>, <code>IfNotPresent</code>, and <code>Never</code>. This
     * parameter defaults to <code>IfNotPresent</code>. However, if the
     * <code>:latest</code> tag is specified, it defaults to <code>Always</code>. For
     * more information, see <a
     * href="https://kubernetes.io/docs/concepts/containers/images/#updating-images">Updating
     * images</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline EksContainer& WithImagePullPolicy(Aws::String&& value) { SetImagePullPolicy(std::move(value)); return *this;}

    /**
     * <p>The image pull policy for the container. Supported values are
     * <code>Always</code>, <code>IfNotPresent</code>, and <code>Never</code>. This
     * parameter defaults to <code>IfNotPresent</code>. However, if the
     * <code>:latest</code> tag is specified, it defaults to <code>Always</code>. For
     * more information, see <a
     * href="https://kubernetes.io/docs/concepts/containers/images/#updating-images">Updating
     * images</a> in the <i>Kubernetes documentation</i>.</p>
     */
    inline EksContainer& WithImagePullPolicy(const char* value) { SetImagePullPolicy(value); return *this;}


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
    inline const Aws::Vector<Aws::String>& GetCommand() const{ return m_command; }

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
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }

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
    inline void SetCommand(const Aws::Vector<Aws::String>& value) { m_commandHasBeenSet = true; m_command = value; }

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
    inline void SetCommand(Aws::Vector<Aws::String>&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }

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
    inline EksContainer& WithCommand(const Aws::Vector<Aws::String>& value) { SetCommand(value); return *this;}

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
    inline EksContainer& WithCommand(Aws::Vector<Aws::String>&& value) { SetCommand(std::move(value)); return *this;}

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
    inline EksContainer& AddCommand(const Aws::String& value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }

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
    inline EksContainer& AddCommand(Aws::String&& value) { m_commandHasBeenSet = true; m_command.push_back(std::move(value)); return *this; }

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
    inline EksContainer& AddCommand(const char* value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }


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
     * href="https://docs.docker.com/engine/reference/builder/#cmd">CMD</a> in the
     * <i>Dockerfile reference</i> and <a
     * href="https://kubernetes.io/docs/tasks/inject-data-application/define-command-argument-container/">Define
     * a command and arguments for a pod</a> in the <i>Kubernetes
     * documentation</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetArgs() const{ return m_args; }

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
     * href="https://docs.docker.com/engine/reference/builder/#cmd">CMD</a> in the
     * <i>Dockerfile reference</i> and <a
     * href="https://kubernetes.io/docs/tasks/inject-data-application/define-command-argument-container/">Define
     * a command and arguments for a pod</a> in the <i>Kubernetes
     * documentation</i>.</p>
     */
    inline bool ArgsHasBeenSet() const { return m_argsHasBeenSet; }

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
     * href="https://docs.docker.com/engine/reference/builder/#cmd">CMD</a> in the
     * <i>Dockerfile reference</i> and <a
     * href="https://kubernetes.io/docs/tasks/inject-data-application/define-command-argument-container/">Define
     * a command and arguments for a pod</a> in the <i>Kubernetes
     * documentation</i>.</p>
     */
    inline void SetArgs(const Aws::Vector<Aws::String>& value) { m_argsHasBeenSet = true; m_args = value; }

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
     * href="https://docs.docker.com/engine/reference/builder/#cmd">CMD</a> in the
     * <i>Dockerfile reference</i> and <a
     * href="https://kubernetes.io/docs/tasks/inject-data-application/define-command-argument-container/">Define
     * a command and arguments for a pod</a> in the <i>Kubernetes
     * documentation</i>.</p>
     */
    inline void SetArgs(Aws::Vector<Aws::String>&& value) { m_argsHasBeenSet = true; m_args = std::move(value); }

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
     * href="https://docs.docker.com/engine/reference/builder/#cmd">CMD</a> in the
     * <i>Dockerfile reference</i> and <a
     * href="https://kubernetes.io/docs/tasks/inject-data-application/define-command-argument-container/">Define
     * a command and arguments for a pod</a> in the <i>Kubernetes
     * documentation</i>.</p>
     */
    inline EksContainer& WithArgs(const Aws::Vector<Aws::String>& value) { SetArgs(value); return *this;}

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
     * href="https://docs.docker.com/engine/reference/builder/#cmd">CMD</a> in the
     * <i>Dockerfile reference</i> and <a
     * href="https://kubernetes.io/docs/tasks/inject-data-application/define-command-argument-container/">Define
     * a command and arguments for a pod</a> in the <i>Kubernetes
     * documentation</i>.</p>
     */
    inline EksContainer& WithArgs(Aws::Vector<Aws::String>&& value) { SetArgs(std::move(value)); return *this;}

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
     * href="https://docs.docker.com/engine/reference/builder/#cmd">CMD</a> in the
     * <i>Dockerfile reference</i> and <a
     * href="https://kubernetes.io/docs/tasks/inject-data-application/define-command-argument-container/">Define
     * a command and arguments for a pod</a> in the <i>Kubernetes
     * documentation</i>.</p>
     */
    inline EksContainer& AddArgs(const Aws::String& value) { m_argsHasBeenSet = true; m_args.push_back(value); return *this; }

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
     * href="https://docs.docker.com/engine/reference/builder/#cmd">CMD</a> in the
     * <i>Dockerfile reference</i> and <a
     * href="https://kubernetes.io/docs/tasks/inject-data-application/define-command-argument-container/">Define
     * a command and arguments for a pod</a> in the <i>Kubernetes
     * documentation</i>.</p>
     */
    inline EksContainer& AddArgs(Aws::String&& value) { m_argsHasBeenSet = true; m_args.push_back(std::move(value)); return *this; }

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
     * href="https://docs.docker.com/engine/reference/builder/#cmd">CMD</a> in the
     * <i>Dockerfile reference</i> and <a
     * href="https://kubernetes.io/docs/tasks/inject-data-application/define-command-argument-container/">Define
     * a command and arguments for a pod</a> in the <i>Kubernetes
     * documentation</i>.</p>
     */
    inline EksContainer& AddArgs(const char* value) { m_argsHasBeenSet = true; m_args.push_back(value); return *this; }


    /**
     * <p>The environment variables to pass to a container.</p>  <p>Environment
     * variables cannot start with "<code>AWS_BATCH</code>". This naming convention is
     * reserved for variables that Batch sets.</p> 
     */
    inline const Aws::Vector<EksContainerEnvironmentVariable>& GetEnv() const{ return m_env; }

    /**
     * <p>The environment variables to pass to a container.</p>  <p>Environment
     * variables cannot start with "<code>AWS_BATCH</code>". This naming convention is
     * reserved for variables that Batch sets.</p> 
     */
    inline bool EnvHasBeenSet() const { return m_envHasBeenSet; }

    /**
     * <p>The environment variables to pass to a container.</p>  <p>Environment
     * variables cannot start with "<code>AWS_BATCH</code>". This naming convention is
     * reserved for variables that Batch sets.</p> 
     */
    inline void SetEnv(const Aws::Vector<EksContainerEnvironmentVariable>& value) { m_envHasBeenSet = true; m_env = value; }

    /**
     * <p>The environment variables to pass to a container.</p>  <p>Environment
     * variables cannot start with "<code>AWS_BATCH</code>". This naming convention is
     * reserved for variables that Batch sets.</p> 
     */
    inline void SetEnv(Aws::Vector<EksContainerEnvironmentVariable>&& value) { m_envHasBeenSet = true; m_env = std::move(value); }

    /**
     * <p>The environment variables to pass to a container.</p>  <p>Environment
     * variables cannot start with "<code>AWS_BATCH</code>". This naming convention is
     * reserved for variables that Batch sets.</p> 
     */
    inline EksContainer& WithEnv(const Aws::Vector<EksContainerEnvironmentVariable>& value) { SetEnv(value); return *this;}

    /**
     * <p>The environment variables to pass to a container.</p>  <p>Environment
     * variables cannot start with "<code>AWS_BATCH</code>". This naming convention is
     * reserved for variables that Batch sets.</p> 
     */
    inline EksContainer& WithEnv(Aws::Vector<EksContainerEnvironmentVariable>&& value) { SetEnv(std::move(value)); return *this;}

    /**
     * <p>The environment variables to pass to a container.</p>  <p>Environment
     * variables cannot start with "<code>AWS_BATCH</code>". This naming convention is
     * reserved for variables that Batch sets.</p> 
     */
    inline EksContainer& AddEnv(const EksContainerEnvironmentVariable& value) { m_envHasBeenSet = true; m_env.push_back(value); return *this; }

    /**
     * <p>The environment variables to pass to a container.</p>  <p>Environment
     * variables cannot start with "<code>AWS_BATCH</code>". This naming convention is
     * reserved for variables that Batch sets.</p> 
     */
    inline EksContainer& AddEnv(EksContainerEnvironmentVariable&& value) { m_envHasBeenSet = true; m_env.push_back(std::move(value)); return *this; }


    /**
     * <p>The type and amount of resources to assign to a container. The supported
     * resources include <code>memory</code>, <code>cpu</code>, and
     * <code>nvidia.com/gpu</code>. For more information, see <a
     * href="https://kubernetes.io/docs/concepts/configuration/manage-resources-containers/">Resource
     * management for pods and containers</a> in the <i>Kubernetes
     * documentation</i>.</p>
     */
    inline const EksContainerResourceRequirements& GetResources() const{ return m_resources; }

    /**
     * <p>The type and amount of resources to assign to a container. The supported
     * resources include <code>memory</code>, <code>cpu</code>, and
     * <code>nvidia.com/gpu</code>. For more information, see <a
     * href="https://kubernetes.io/docs/concepts/configuration/manage-resources-containers/">Resource
     * management for pods and containers</a> in the <i>Kubernetes
     * documentation</i>.</p>
     */
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }

    /**
     * <p>The type and amount of resources to assign to a container. The supported
     * resources include <code>memory</code>, <code>cpu</code>, and
     * <code>nvidia.com/gpu</code>. For more information, see <a
     * href="https://kubernetes.io/docs/concepts/configuration/manage-resources-containers/">Resource
     * management for pods and containers</a> in the <i>Kubernetes
     * documentation</i>.</p>
     */
    inline void SetResources(const EksContainerResourceRequirements& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * <p>The type and amount of resources to assign to a container. The supported
     * resources include <code>memory</code>, <code>cpu</code>, and
     * <code>nvidia.com/gpu</code>. For more information, see <a
     * href="https://kubernetes.io/docs/concepts/configuration/manage-resources-containers/">Resource
     * management for pods and containers</a> in the <i>Kubernetes
     * documentation</i>.</p>
     */
    inline void SetResources(EksContainerResourceRequirements&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }

    /**
     * <p>The type and amount of resources to assign to a container. The supported
     * resources include <code>memory</code>, <code>cpu</code>, and
     * <code>nvidia.com/gpu</code>. For more information, see <a
     * href="https://kubernetes.io/docs/concepts/configuration/manage-resources-containers/">Resource
     * management for pods and containers</a> in the <i>Kubernetes
     * documentation</i>.</p>
     */
    inline EksContainer& WithResources(const EksContainerResourceRequirements& value) { SetResources(value); return *this;}

    /**
     * <p>The type and amount of resources to assign to a container. The supported
     * resources include <code>memory</code>, <code>cpu</code>, and
     * <code>nvidia.com/gpu</code>. For more information, see <a
     * href="https://kubernetes.io/docs/concepts/configuration/manage-resources-containers/">Resource
     * management for pods and containers</a> in the <i>Kubernetes
     * documentation</i>.</p>
     */
    inline EksContainer& WithResources(EksContainerResourceRequirements&& value) { SetResources(std::move(value)); return *this;}


    /**
     * <p>The volume mounts for the container. Batch supports <code>emptyDir</code>,
     * <code>hostPath</code>, and <code>secret</code> volume types. For more
     * information about volumes and volume mounts in Kubernetes, see <a
     * href="https://kubernetes.io/docs/concepts/storage/volumes/">Volumes</a> in the
     * <i>Kubernetes documentation</i>.</p>
     */
    inline const Aws::Vector<EksContainerVolumeMount>& GetVolumeMounts() const{ return m_volumeMounts; }

    /**
     * <p>The volume mounts for the container. Batch supports <code>emptyDir</code>,
     * <code>hostPath</code>, and <code>secret</code> volume types. For more
     * information about volumes and volume mounts in Kubernetes, see <a
     * href="https://kubernetes.io/docs/concepts/storage/volumes/">Volumes</a> in the
     * <i>Kubernetes documentation</i>.</p>
     */
    inline bool VolumeMountsHasBeenSet() const { return m_volumeMountsHasBeenSet; }

    /**
     * <p>The volume mounts for the container. Batch supports <code>emptyDir</code>,
     * <code>hostPath</code>, and <code>secret</code> volume types. For more
     * information about volumes and volume mounts in Kubernetes, see <a
     * href="https://kubernetes.io/docs/concepts/storage/volumes/">Volumes</a> in the
     * <i>Kubernetes documentation</i>.</p>
     */
    inline void SetVolumeMounts(const Aws::Vector<EksContainerVolumeMount>& value) { m_volumeMountsHasBeenSet = true; m_volumeMounts = value; }

    /**
     * <p>The volume mounts for the container. Batch supports <code>emptyDir</code>,
     * <code>hostPath</code>, and <code>secret</code> volume types. For more
     * information about volumes and volume mounts in Kubernetes, see <a
     * href="https://kubernetes.io/docs/concepts/storage/volumes/">Volumes</a> in the
     * <i>Kubernetes documentation</i>.</p>
     */
    inline void SetVolumeMounts(Aws::Vector<EksContainerVolumeMount>&& value) { m_volumeMountsHasBeenSet = true; m_volumeMounts = std::move(value); }

    /**
     * <p>The volume mounts for the container. Batch supports <code>emptyDir</code>,
     * <code>hostPath</code>, and <code>secret</code> volume types. For more
     * information about volumes and volume mounts in Kubernetes, see <a
     * href="https://kubernetes.io/docs/concepts/storage/volumes/">Volumes</a> in the
     * <i>Kubernetes documentation</i>.</p>
     */
    inline EksContainer& WithVolumeMounts(const Aws::Vector<EksContainerVolumeMount>& value) { SetVolumeMounts(value); return *this;}

    /**
     * <p>The volume mounts for the container. Batch supports <code>emptyDir</code>,
     * <code>hostPath</code>, and <code>secret</code> volume types. For more
     * information about volumes and volume mounts in Kubernetes, see <a
     * href="https://kubernetes.io/docs/concepts/storage/volumes/">Volumes</a> in the
     * <i>Kubernetes documentation</i>.</p>
     */
    inline EksContainer& WithVolumeMounts(Aws::Vector<EksContainerVolumeMount>&& value) { SetVolumeMounts(std::move(value)); return *this;}

    /**
     * <p>The volume mounts for the container. Batch supports <code>emptyDir</code>,
     * <code>hostPath</code>, and <code>secret</code> volume types. For more
     * information about volumes and volume mounts in Kubernetes, see <a
     * href="https://kubernetes.io/docs/concepts/storage/volumes/">Volumes</a> in the
     * <i>Kubernetes documentation</i>.</p>
     */
    inline EksContainer& AddVolumeMounts(const EksContainerVolumeMount& value) { m_volumeMountsHasBeenSet = true; m_volumeMounts.push_back(value); return *this; }

    /**
     * <p>The volume mounts for the container. Batch supports <code>emptyDir</code>,
     * <code>hostPath</code>, and <code>secret</code> volume types. For more
     * information about volumes and volume mounts in Kubernetes, see <a
     * href="https://kubernetes.io/docs/concepts/storage/volumes/">Volumes</a> in the
     * <i>Kubernetes documentation</i>.</p>
     */
    inline EksContainer& AddVolumeMounts(EksContainerVolumeMount&& value) { m_volumeMountsHasBeenSet = true; m_volumeMounts.push_back(std::move(value)); return *this; }


    /**
     * <p>The security context for a job. For more information, see <a
     * href="https://kubernetes.io/docs/tasks/configure-pod-container/security-context/">Configure
     * a security context for a pod or container</a> in the <i>Kubernetes
     * documentation</i>.</p>
     */
    inline const EksContainerSecurityContext& GetSecurityContext() const{ return m_securityContext; }

    /**
     * <p>The security context for a job. For more information, see <a
     * href="https://kubernetes.io/docs/tasks/configure-pod-container/security-context/">Configure
     * a security context for a pod or container</a> in the <i>Kubernetes
     * documentation</i>.</p>
     */
    inline bool SecurityContextHasBeenSet() const { return m_securityContextHasBeenSet; }

    /**
     * <p>The security context for a job. For more information, see <a
     * href="https://kubernetes.io/docs/tasks/configure-pod-container/security-context/">Configure
     * a security context for a pod or container</a> in the <i>Kubernetes
     * documentation</i>.</p>
     */
    inline void SetSecurityContext(const EksContainerSecurityContext& value) { m_securityContextHasBeenSet = true; m_securityContext = value; }

    /**
     * <p>The security context for a job. For more information, see <a
     * href="https://kubernetes.io/docs/tasks/configure-pod-container/security-context/">Configure
     * a security context for a pod or container</a> in the <i>Kubernetes
     * documentation</i>.</p>
     */
    inline void SetSecurityContext(EksContainerSecurityContext&& value) { m_securityContextHasBeenSet = true; m_securityContext = std::move(value); }

    /**
     * <p>The security context for a job. For more information, see <a
     * href="https://kubernetes.io/docs/tasks/configure-pod-container/security-context/">Configure
     * a security context for a pod or container</a> in the <i>Kubernetes
     * documentation</i>.</p>
     */
    inline EksContainer& WithSecurityContext(const EksContainerSecurityContext& value) { SetSecurityContext(value); return *this;}

    /**
     * <p>The security context for a job. For more information, see <a
     * href="https://kubernetes.io/docs/tasks/configure-pod-container/security-context/">Configure
     * a security context for a pod or container</a> in the <i>Kubernetes
     * documentation</i>.</p>
     */
    inline EksContainer& WithSecurityContext(EksContainerSecurityContext&& value) { SetSecurityContext(std::move(value)); return *this;}

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
