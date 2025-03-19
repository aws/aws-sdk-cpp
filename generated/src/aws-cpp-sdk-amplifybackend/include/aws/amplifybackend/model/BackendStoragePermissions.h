/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/amplifybackend/model/AuthenticatedElement.h>
#include <aws/amplifybackend/model/UnAuthenticatedElement.h>
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
namespace AmplifyBackend
{
namespace Model
{

  /**
   * <p>Describes the read, write, and delete permissions users have against your
   * storage S3 bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/BackendStoragePermissions">AWS
   * API Reference</a></p>
   */
  class BackendStoragePermissions
  {
  public:
    AWS_AMPLIFYBACKEND_API BackendStoragePermissions() = default;
    AWS_AMPLIFYBACKEND_API BackendStoragePermissions(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API BackendStoragePermissions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Lists all authenticated user read, write, and delete permissions for your S3
     * bucket.</p>
     */
    inline const Aws::Vector<AuthenticatedElement>& GetAuthenticated() const { return m_authenticated; }
    inline bool AuthenticatedHasBeenSet() const { return m_authenticatedHasBeenSet; }
    template<typename AuthenticatedT = Aws::Vector<AuthenticatedElement>>
    void SetAuthenticated(AuthenticatedT&& value) { m_authenticatedHasBeenSet = true; m_authenticated = std::forward<AuthenticatedT>(value); }
    template<typename AuthenticatedT = Aws::Vector<AuthenticatedElement>>
    BackendStoragePermissions& WithAuthenticated(AuthenticatedT&& value) { SetAuthenticated(std::forward<AuthenticatedT>(value)); return *this;}
    inline BackendStoragePermissions& AddAuthenticated(AuthenticatedElement value) { m_authenticatedHasBeenSet = true; m_authenticated.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Lists all unauthenticated user read, write, and delete permissions for your
     * S3 bucket.</p>
     */
    inline const Aws::Vector<UnAuthenticatedElement>& GetUnAuthenticated() const { return m_unAuthenticated; }
    inline bool UnAuthenticatedHasBeenSet() const { return m_unAuthenticatedHasBeenSet; }
    template<typename UnAuthenticatedT = Aws::Vector<UnAuthenticatedElement>>
    void SetUnAuthenticated(UnAuthenticatedT&& value) { m_unAuthenticatedHasBeenSet = true; m_unAuthenticated = std::forward<UnAuthenticatedT>(value); }
    template<typename UnAuthenticatedT = Aws::Vector<UnAuthenticatedElement>>
    BackendStoragePermissions& WithUnAuthenticated(UnAuthenticatedT&& value) { SetUnAuthenticated(std::forward<UnAuthenticatedT>(value)); return *this;}
    inline BackendStoragePermissions& AddUnAuthenticated(UnAuthenticatedElement value) { m_unAuthenticatedHasBeenSet = true; m_unAuthenticated.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<AuthenticatedElement> m_authenticated;
    bool m_authenticatedHasBeenSet = false;

    Aws::Vector<UnAuthenticatedElement> m_unAuthenticated;
    bool m_unAuthenticatedHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
