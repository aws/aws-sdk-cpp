/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * href="https://docs.docker.com/engine/reference/run/">docker run</a>.</p> <note>
   * <p>It is not recommended that you specify network-related
   * <code>systemControls</code> parameters for multiple containers in a single task
   * that also uses either the <code>awsvpc</code> or <code>host</code> network
   * modes. When you do, the container that is started last will determine which
   * <code>systemControls</code> parameters take effect.</p> </note><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/SystemControl">AWS
   * API Reference</a></p>
   */
  class AWS_ECS_API SystemControl
  {
  public:
    SystemControl();
    SystemControl(Aws::Utils::Json::JsonView jsonValue);
    SystemControl& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The namespaced kernel parameter to set a <code>value</code> for.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

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
     * <p>The value for the namespaced kernel parameter specifed in
     * <code>namespace</code>.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value for the namespaced kernel parameter specifed in
     * <code>namespace</code>.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value for the namespaced kernel parameter specifed in
     * <code>namespace</code>.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value for the namespaced kernel parameter specifed in
     * <code>namespace</code>.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value for the namespaced kernel parameter specifed in
     * <code>namespace</code>.</p>
     */
    inline SystemControl& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value for the namespaced kernel parameter specifed in
     * <code>namespace</code>.</p>
     */
    inline SystemControl& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value for the namespaced kernel parameter specifed in
     * <code>namespace</code>.</p>
     */
    inline SystemControl& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
