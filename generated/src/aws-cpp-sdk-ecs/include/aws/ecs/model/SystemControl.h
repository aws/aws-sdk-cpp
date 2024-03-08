/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A list of namespaced kernel parameters to set in the container. This
   * parameter maps to <code>Sysctls</code> in the <a
   * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
   * a container</a> section of the <a
   * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a> and the
   * <code>--sysctl</code> option to <a
   * href="https://docs.docker.com/engine/reference/run/#security-configuration">docker
   * run</a>. For example, you can configure <code>net.ipv4.tcp_keepalive_time</code>
   * setting to maintain longer lived connections.</p> <p>We don't recommend that you
   * specify network-related <code>systemControls</code> parameters for multiple
   * containers in a single task that also uses either the <code>awsvpc</code> or
   * <code>host</code> network mode. Doing this has the following disadvantages:</p>
   * <ul> <li> <p>For tasks that use the <code>awsvpc</code> network mode including
   * Fargate, if you set <code>systemControls</code> for any container, it applies to
   * all containers in the task. If you set different <code>systemControls</code> for
   * multiple containers in a single task, the container that's started last
   * determines which <code>systemControls</code> take effect.</p> </li> <li> <p>For
   * tasks that use the <code>host</code> network mode, the network namespace
   * <code>systemControls</code> aren't supported.</p> </li> </ul> <p>If you're
   * setting an IPC resource namespace to use for the containers in the task, the
   * following conditions apply to your system controls. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task_definition_parameters.html#task_definition_ipcmode">IPC
   * mode</a>.</p> <ul> <li> <p>For tasks that use the <code>host</code> IPC mode,
   * IPC namespace <code>systemControls</code> aren't supported.</p> </li> <li>
   * <p>For tasks that use the <code>task</code> IPC mode, IPC namespace
   * <code>systemControls</code> values apply to all containers within a task.</p>
   * </li> </ul>  <p>This parameter is not supported for Windows
   * containers.</p>   <p>This parameter is only supported for tasks
   * that are hosted on Fargate if the tasks are using platform version
   * <code>1.4.0</code> or later (Linux). This isn't supported for Windows containers
   * on Fargate.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/SystemControl">AWS
   * API Reference</a></p>
   */
  class SystemControl
  {
  public:
    AWS_ECS_API SystemControl();
    AWS_ECS_API SystemControl(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API SystemControl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The namespaced kernel parameter to set a <code>value</code> for.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespaced kernel parameter to set a <code>value</code> for.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespaced kernel parameter to set a <code>value</code> for.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespaced kernel parameter to set a <code>value</code> for.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespaced kernel parameter to set a <code>value</code> for.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespaced kernel parameter to set a <code>value</code> for.</p>
     */
    inline SystemControl& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespaced kernel parameter to set a <code>value</code> for.</p>
     */
    inline SystemControl& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespaced kernel parameter to set a <code>value</code> for.</p>
     */
    inline SystemControl& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>The namespaced kernel parameter to set a <code>value</code> for.</p> <p>Valid
     * IPC namespace values: <code>"kernel.msgmax" | "kernel.msgmnb" | "kernel.msgmni"
     * | "kernel.sem" | "kernel.shmall" | "kernel.shmmax" | "kernel.shmmni" |
     * "kernel.shm_rmid_forced"</code>, and <code>Sysctls</code> that start with
     * <code>"fs.mqueue.*"</code> </p> <p>Valid network namespace values:
     * <code>Sysctls</code> that start with <code>"net.*"</code> </p> <p>All of these
     * values are supported by Fargate.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The namespaced kernel parameter to set a <code>value</code> for.</p> <p>Valid
     * IPC namespace values: <code>"kernel.msgmax" | "kernel.msgmnb" | "kernel.msgmni"
     * | "kernel.sem" | "kernel.shmall" | "kernel.shmmax" | "kernel.shmmni" |
     * "kernel.shm_rmid_forced"</code>, and <code>Sysctls</code> that start with
     * <code>"fs.mqueue.*"</code> </p> <p>Valid network namespace values:
     * <code>Sysctls</code> that start with <code>"net.*"</code> </p> <p>All of these
     * values are supported by Fargate.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The namespaced kernel parameter to set a <code>value</code> for.</p> <p>Valid
     * IPC namespace values: <code>"kernel.msgmax" | "kernel.msgmnb" | "kernel.msgmni"
     * | "kernel.sem" | "kernel.shmall" | "kernel.shmmax" | "kernel.shmmni" |
     * "kernel.shm_rmid_forced"</code>, and <code>Sysctls</code> that start with
     * <code>"fs.mqueue.*"</code> </p> <p>Valid network namespace values:
     * <code>Sysctls</code> that start with <code>"net.*"</code> </p> <p>All of these
     * values are supported by Fargate.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The namespaced kernel parameter to set a <code>value</code> for.</p> <p>Valid
     * IPC namespace values: <code>"kernel.msgmax" | "kernel.msgmnb" | "kernel.msgmni"
     * | "kernel.sem" | "kernel.shmall" | "kernel.shmmax" | "kernel.shmmni" |
     * "kernel.shm_rmid_forced"</code>, and <code>Sysctls</code> that start with
     * <code>"fs.mqueue.*"</code> </p> <p>Valid network namespace values:
     * <code>Sysctls</code> that start with <code>"net.*"</code> </p> <p>All of these
     * values are supported by Fargate.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The namespaced kernel parameter to set a <code>value</code> for.</p> <p>Valid
     * IPC namespace values: <code>"kernel.msgmax" | "kernel.msgmnb" | "kernel.msgmni"
     * | "kernel.sem" | "kernel.shmall" | "kernel.shmmax" | "kernel.shmmni" |
     * "kernel.shm_rmid_forced"</code>, and <code>Sysctls</code> that start with
     * <code>"fs.mqueue.*"</code> </p> <p>Valid network namespace values:
     * <code>Sysctls</code> that start with <code>"net.*"</code> </p> <p>All of these
     * values are supported by Fargate.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The namespaced kernel parameter to set a <code>value</code> for.</p> <p>Valid
     * IPC namespace values: <code>"kernel.msgmax" | "kernel.msgmnb" | "kernel.msgmni"
     * | "kernel.sem" | "kernel.shmall" | "kernel.shmmax" | "kernel.shmmni" |
     * "kernel.shm_rmid_forced"</code>, and <code>Sysctls</code> that start with
     * <code>"fs.mqueue.*"</code> </p> <p>Valid network namespace values:
     * <code>Sysctls</code> that start with <code>"net.*"</code> </p> <p>All of these
     * values are supported by Fargate.</p>
     */
    inline SystemControl& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The namespaced kernel parameter to set a <code>value</code> for.</p> <p>Valid
     * IPC namespace values: <code>"kernel.msgmax" | "kernel.msgmnb" | "kernel.msgmni"
     * | "kernel.sem" | "kernel.shmall" | "kernel.shmmax" | "kernel.shmmni" |
     * "kernel.shm_rmid_forced"</code>, and <code>Sysctls</code> that start with
     * <code>"fs.mqueue.*"</code> </p> <p>Valid network namespace values:
     * <code>Sysctls</code> that start with <code>"net.*"</code> </p> <p>All of these
     * values are supported by Fargate.</p>
     */
    inline SystemControl& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The namespaced kernel parameter to set a <code>value</code> for.</p> <p>Valid
     * IPC namespace values: <code>"kernel.msgmax" | "kernel.msgmnb" | "kernel.msgmni"
     * | "kernel.sem" | "kernel.shmall" | "kernel.shmmax" | "kernel.shmmni" |
     * "kernel.shm_rmid_forced"</code>, and <code>Sysctls</code> that start with
     * <code>"fs.mqueue.*"</code> </p> <p>Valid network namespace values:
     * <code>Sysctls</code> that start with <code>"net.*"</code> </p> <p>All of these
     * values are supported by Fargate.</p>
     */
    inline SystemControl& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
