/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>This API is in preview release for Amazon Connect and is subject to
   * change.</p> <p>A third-party application's metadata.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/Application">AWS
   * API Reference</a></p>
   */
  class Application
  {
  public:
    AWS_CONNECT_API Application();
    AWS_CONNECT_API Application(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Application& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Namespace of the application that you want to give access to.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>Namespace of the application that you want to give access to.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>Namespace of the application that you want to give access to.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>Namespace of the application that you want to give access to.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>Namespace of the application that you want to give access to.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>Namespace of the application that you want to give access to.</p>
     */
    inline Application& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>Namespace of the application that you want to give access to.</p>
     */
    inline Application& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>Namespace of the application that you want to give access to.</p>
     */
    inline Application& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>The permissions that the agent is granted on the application. Only the
     * <code>ACCESS</code> permission is supported.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApplicationPermissions() const{ return m_applicationPermissions; }

    /**
     * <p>The permissions that the agent is granted on the application. Only the
     * <code>ACCESS</code> permission is supported.</p>
     */
    inline bool ApplicationPermissionsHasBeenSet() const { return m_applicationPermissionsHasBeenSet; }

    /**
     * <p>The permissions that the agent is granted on the application. Only the
     * <code>ACCESS</code> permission is supported.</p>
     */
    inline void SetApplicationPermissions(const Aws::Vector<Aws::String>& value) { m_applicationPermissionsHasBeenSet = true; m_applicationPermissions = value; }

    /**
     * <p>The permissions that the agent is granted on the application. Only the
     * <code>ACCESS</code> permission is supported.</p>
     */
    inline void SetApplicationPermissions(Aws::Vector<Aws::String>&& value) { m_applicationPermissionsHasBeenSet = true; m_applicationPermissions = std::move(value); }

    /**
     * <p>The permissions that the agent is granted on the application. Only the
     * <code>ACCESS</code> permission is supported.</p>
     */
    inline Application& WithApplicationPermissions(const Aws::Vector<Aws::String>& value) { SetApplicationPermissions(value); return *this;}

    /**
     * <p>The permissions that the agent is granted on the application. Only the
     * <code>ACCESS</code> permission is supported.</p>
     */
    inline Application& WithApplicationPermissions(Aws::Vector<Aws::String>&& value) { SetApplicationPermissions(std::move(value)); return *this;}

    /**
     * <p>The permissions that the agent is granted on the application. Only the
     * <code>ACCESS</code> permission is supported.</p>
     */
    inline Application& AddApplicationPermissions(const Aws::String& value) { m_applicationPermissionsHasBeenSet = true; m_applicationPermissions.push_back(value); return *this; }

    /**
     * <p>The permissions that the agent is granted on the application. Only the
     * <code>ACCESS</code> permission is supported.</p>
     */
    inline Application& AddApplicationPermissions(Aws::String&& value) { m_applicationPermissionsHasBeenSet = true; m_applicationPermissions.push_back(std::move(value)); return *this; }

    /**
     * <p>The permissions that the agent is granted on the application. Only the
     * <code>ACCESS</code> permission is supported.</p>
     */
    inline Application& AddApplicationPermissions(const char* value) { m_applicationPermissionsHasBeenSet = true; m_applicationPermissions.push_back(value); return *this; }

  private:

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::Vector<Aws::String> m_applicationPermissions;
    bool m_applicationPermissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
