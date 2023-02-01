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
    AWS_AMPLIFYBACKEND_API BackendStoragePermissions();
    AWS_AMPLIFYBACKEND_API BackendStoragePermissions(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API BackendStoragePermissions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Lists all authenticated user read, write, and delete permissions for your S3
     * bucket.</p>
     */
    inline const Aws::Vector<AuthenticatedElement>& GetAuthenticated() const{ return m_authenticated; }

    /**
     * <p>Lists all authenticated user read, write, and delete permissions for your S3
     * bucket.</p>
     */
    inline bool AuthenticatedHasBeenSet() const { return m_authenticatedHasBeenSet; }

    /**
     * <p>Lists all authenticated user read, write, and delete permissions for your S3
     * bucket.</p>
     */
    inline void SetAuthenticated(const Aws::Vector<AuthenticatedElement>& value) { m_authenticatedHasBeenSet = true; m_authenticated = value; }

    /**
     * <p>Lists all authenticated user read, write, and delete permissions for your S3
     * bucket.</p>
     */
    inline void SetAuthenticated(Aws::Vector<AuthenticatedElement>&& value) { m_authenticatedHasBeenSet = true; m_authenticated = std::move(value); }

    /**
     * <p>Lists all authenticated user read, write, and delete permissions for your S3
     * bucket.</p>
     */
    inline BackendStoragePermissions& WithAuthenticated(const Aws::Vector<AuthenticatedElement>& value) { SetAuthenticated(value); return *this;}

    /**
     * <p>Lists all authenticated user read, write, and delete permissions for your S3
     * bucket.</p>
     */
    inline BackendStoragePermissions& WithAuthenticated(Aws::Vector<AuthenticatedElement>&& value) { SetAuthenticated(std::move(value)); return *this;}

    /**
     * <p>Lists all authenticated user read, write, and delete permissions for your S3
     * bucket.</p>
     */
    inline BackendStoragePermissions& AddAuthenticated(const AuthenticatedElement& value) { m_authenticatedHasBeenSet = true; m_authenticated.push_back(value); return *this; }

    /**
     * <p>Lists all authenticated user read, write, and delete permissions for your S3
     * bucket.</p>
     */
    inline BackendStoragePermissions& AddAuthenticated(AuthenticatedElement&& value) { m_authenticatedHasBeenSet = true; m_authenticated.push_back(std::move(value)); return *this; }


    /**
     * <p>Lists all unauthenticated user read, write, and delete permissions for your
     * S3 bucket.</p>
     */
    inline const Aws::Vector<UnAuthenticatedElement>& GetUnAuthenticated() const{ return m_unAuthenticated; }

    /**
     * <p>Lists all unauthenticated user read, write, and delete permissions for your
     * S3 bucket.</p>
     */
    inline bool UnAuthenticatedHasBeenSet() const { return m_unAuthenticatedHasBeenSet; }

    /**
     * <p>Lists all unauthenticated user read, write, and delete permissions for your
     * S3 bucket.</p>
     */
    inline void SetUnAuthenticated(const Aws::Vector<UnAuthenticatedElement>& value) { m_unAuthenticatedHasBeenSet = true; m_unAuthenticated = value; }

    /**
     * <p>Lists all unauthenticated user read, write, and delete permissions for your
     * S3 bucket.</p>
     */
    inline void SetUnAuthenticated(Aws::Vector<UnAuthenticatedElement>&& value) { m_unAuthenticatedHasBeenSet = true; m_unAuthenticated = std::move(value); }

    /**
     * <p>Lists all unauthenticated user read, write, and delete permissions for your
     * S3 bucket.</p>
     */
    inline BackendStoragePermissions& WithUnAuthenticated(const Aws::Vector<UnAuthenticatedElement>& value) { SetUnAuthenticated(value); return *this;}

    /**
     * <p>Lists all unauthenticated user read, write, and delete permissions for your
     * S3 bucket.</p>
     */
    inline BackendStoragePermissions& WithUnAuthenticated(Aws::Vector<UnAuthenticatedElement>&& value) { SetUnAuthenticated(std::move(value)); return *this;}

    /**
     * <p>Lists all unauthenticated user read, write, and delete permissions for your
     * S3 bucket.</p>
     */
    inline BackendStoragePermissions& AddUnAuthenticated(const UnAuthenticatedElement& value) { m_unAuthenticatedHasBeenSet = true; m_unAuthenticated.push_back(value); return *this; }

    /**
     * <p>Lists all unauthenticated user read, write, and delete permissions for your
     * S3 bucket.</p>
     */
    inline BackendStoragePermissions& AddUnAuthenticated(UnAuthenticatedElement&& value) { m_unAuthenticatedHasBeenSet = true; m_unAuthenticated.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AuthenticatedElement> m_authenticated;
    bool m_authenticatedHasBeenSet = false;

    Aws::Vector<UnAuthenticatedElement> m_unAuthenticated;
    bool m_unAuthenticatedHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
