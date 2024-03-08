/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/AuthenticationMode.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>The access configuration for the cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/AccessConfigResponse">AWS
   * API Reference</a></p>
   */
  class AccessConfigResponse
  {
  public:
    AWS_EKS_API AccessConfigResponse();
    AWS_EKS_API AccessConfigResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API AccessConfigResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether or not the cluster creator IAM principal was set as a
     * cluster admin access entry during cluster creation time.</p>
     */
    inline bool GetBootstrapClusterCreatorAdminPermissions() const{ return m_bootstrapClusterCreatorAdminPermissions; }

    /**
     * <p>Specifies whether or not the cluster creator IAM principal was set as a
     * cluster admin access entry during cluster creation time.</p>
     */
    inline bool BootstrapClusterCreatorAdminPermissionsHasBeenSet() const { return m_bootstrapClusterCreatorAdminPermissionsHasBeenSet; }

    /**
     * <p>Specifies whether or not the cluster creator IAM principal was set as a
     * cluster admin access entry during cluster creation time.</p>
     */
    inline void SetBootstrapClusterCreatorAdminPermissions(bool value) { m_bootstrapClusterCreatorAdminPermissionsHasBeenSet = true; m_bootstrapClusterCreatorAdminPermissions = value; }

    /**
     * <p>Specifies whether or not the cluster creator IAM principal was set as a
     * cluster admin access entry during cluster creation time.</p>
     */
    inline AccessConfigResponse& WithBootstrapClusterCreatorAdminPermissions(bool value) { SetBootstrapClusterCreatorAdminPermissions(value); return *this;}


    /**
     * <p>The current authentication mode of the cluster.</p>
     */
    inline const AuthenticationMode& GetAuthenticationMode() const{ return m_authenticationMode; }

    /**
     * <p>The current authentication mode of the cluster.</p>
     */
    inline bool AuthenticationModeHasBeenSet() const { return m_authenticationModeHasBeenSet; }

    /**
     * <p>The current authentication mode of the cluster.</p>
     */
    inline void SetAuthenticationMode(const AuthenticationMode& value) { m_authenticationModeHasBeenSet = true; m_authenticationMode = value; }

    /**
     * <p>The current authentication mode of the cluster.</p>
     */
    inline void SetAuthenticationMode(AuthenticationMode&& value) { m_authenticationModeHasBeenSet = true; m_authenticationMode = std::move(value); }

    /**
     * <p>The current authentication mode of the cluster.</p>
     */
    inline AccessConfigResponse& WithAuthenticationMode(const AuthenticationMode& value) { SetAuthenticationMode(value); return *this;}

    /**
     * <p>The current authentication mode of the cluster.</p>
     */
    inline AccessConfigResponse& WithAuthenticationMode(AuthenticationMode&& value) { SetAuthenticationMode(std::move(value)); return *this;}

  private:

    bool m_bootstrapClusterCreatorAdminPermissions;
    bool m_bootstrapClusterCreatorAdminPermissionsHasBeenSet = false;

    AuthenticationMode m_authenticationMode;
    bool m_authenticationModeHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
