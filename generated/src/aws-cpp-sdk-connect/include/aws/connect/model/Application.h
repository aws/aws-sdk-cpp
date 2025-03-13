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
    AWS_CONNECT_API Application() = default;
    AWS_CONNECT_API Application(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Application& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Namespace of the application that you want to give access to.</p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    Application& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permissions that the agent is granted on the application. Only the
     * <code>ACCESS</code> permission is supported.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApplicationPermissions() const { return m_applicationPermissions; }
    inline bool ApplicationPermissionsHasBeenSet() const { return m_applicationPermissionsHasBeenSet; }
    template<typename ApplicationPermissionsT = Aws::Vector<Aws::String>>
    void SetApplicationPermissions(ApplicationPermissionsT&& value) { m_applicationPermissionsHasBeenSet = true; m_applicationPermissions = std::forward<ApplicationPermissionsT>(value); }
    template<typename ApplicationPermissionsT = Aws::Vector<Aws::String>>
    Application& WithApplicationPermissions(ApplicationPermissionsT&& value) { SetApplicationPermissions(std::forward<ApplicationPermissionsT>(value)); return *this;}
    template<typename ApplicationPermissionsT = Aws::String>
    Application& AddApplicationPermissions(ApplicationPermissionsT&& value) { m_applicationPermissionsHasBeenSet = true; m_applicationPermissions.emplace_back(std::forward<ApplicationPermissionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::Vector<Aws::String> m_applicationPermissions;
    bool m_applicationPermissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
