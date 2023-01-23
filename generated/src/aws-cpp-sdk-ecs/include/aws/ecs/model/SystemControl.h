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
   * run</a>.</p> <p>We don't recommend that you specify network-related
   * <code>systemControls</code> parameters for multiple containers in a single task.
   * This task also uses either the <code>awsvpc</code> or <code>host</code> network
   * mode. It does it for the following reasons.</p> <ul> <li> <p>For tasks that use
   * the <code>awsvpc</code> network mode, if you set <code>systemControls</code> for
   * any container, it applies to all containers in the task. If you set different
   * <code>systemControls</code> for multiple containers in a single task, the
   * container that's started last determines which <code>systemControls</code> take
   * effect.</p> </li> <li> <p>For tasks that use the <code>host</code> network mode,
   * the <code>systemControls</code> parameter applies to the container instance's
   * kernel parameter and that of all containers of any tasks running on that
   * container instance.</p> </li> </ul><p><h3>See Also:</h3>   <a
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
     * <p>The value for the namespaced kernel parameter that's specified in
     * <code>namespace</code>.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value for the namespaced kernel parameter that's specified in
     * <code>namespace</code>.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value for the namespaced kernel parameter that's specified in
     * <code>namespace</code>.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value for the namespaced kernel parameter that's specified in
     * <code>namespace</code>.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value for the namespaced kernel parameter that's specified in
     * <code>namespace</code>.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value for the namespaced kernel parameter that's specified in
     * <code>namespace</code>.</p>
     */
    inline SystemControl& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value for the namespaced kernel parameter that's specified in
     * <code>namespace</code>.</p>
     */
    inline SystemControl& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value for the namespaced kernel parameter that's specified in
     * <code>namespace</code>.</p>
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
