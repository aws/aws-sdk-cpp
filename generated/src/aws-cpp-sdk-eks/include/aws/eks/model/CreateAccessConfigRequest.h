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
   * <p>The access configuration information for the cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/CreateAccessConfigRequest">AWS
   * API Reference</a></p>
   */
  class CreateAccessConfigRequest
  {
  public:
    AWS_EKS_API CreateAccessConfigRequest();
    AWS_EKS_API CreateAccessConfigRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API CreateAccessConfigRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether or not the cluster creator IAM principal was set as a
     * cluster admin access entry during cluster creation time. The default value is
     * <code>true</code>.</p>
     */
    inline bool GetBootstrapClusterCreatorAdminPermissions() const{ return m_bootstrapClusterCreatorAdminPermissions; }

    /**
     * <p>Specifies whether or not the cluster creator IAM principal was set as a
     * cluster admin access entry during cluster creation time. The default value is
     * <code>true</code>.</p>
     */
    inline bool BootstrapClusterCreatorAdminPermissionsHasBeenSet() const { return m_bootstrapClusterCreatorAdminPermissionsHasBeenSet; }

    /**
     * <p>Specifies whether or not the cluster creator IAM principal was set as a
     * cluster admin access entry during cluster creation time. The default value is
     * <code>true</code>.</p>
     */
    inline void SetBootstrapClusterCreatorAdminPermissions(bool value) { m_bootstrapClusterCreatorAdminPermissionsHasBeenSet = true; m_bootstrapClusterCreatorAdminPermissions = value; }

    /**
     * <p>Specifies whether or not the cluster creator IAM principal was set as a
     * cluster admin access entry during cluster creation time. The default value is
     * <code>true</code>.</p>
     */
    inline CreateAccessConfigRequest& WithBootstrapClusterCreatorAdminPermissions(bool value) { SetBootstrapClusterCreatorAdminPermissions(value); return *this;}


    /**
     * <p>The desired authentication mode for the cluster. If you create a cluster by
     * using the EKS API, Amazon Web Services SDKs, or CloudFormation, the default is
     * <code>CONFIG_MAP</code>. If you create the cluster by using the Amazon Web
     * Services Management Console, the default value is
     * <code>API_AND_CONFIG_MAP</code>.</p>
     */
    inline const AuthenticationMode& GetAuthenticationMode() const{ return m_authenticationMode; }

    /**
     * <p>The desired authentication mode for the cluster. If you create a cluster by
     * using the EKS API, Amazon Web Services SDKs, or CloudFormation, the default is
     * <code>CONFIG_MAP</code>. If you create the cluster by using the Amazon Web
     * Services Management Console, the default value is
     * <code>API_AND_CONFIG_MAP</code>.</p>
     */
    inline bool AuthenticationModeHasBeenSet() const { return m_authenticationModeHasBeenSet; }

    /**
     * <p>The desired authentication mode for the cluster. If you create a cluster by
     * using the EKS API, Amazon Web Services SDKs, or CloudFormation, the default is
     * <code>CONFIG_MAP</code>. If you create the cluster by using the Amazon Web
     * Services Management Console, the default value is
     * <code>API_AND_CONFIG_MAP</code>.</p>
     */
    inline void SetAuthenticationMode(const AuthenticationMode& value) { m_authenticationModeHasBeenSet = true; m_authenticationMode = value; }

    /**
     * <p>The desired authentication mode for the cluster. If you create a cluster by
     * using the EKS API, Amazon Web Services SDKs, or CloudFormation, the default is
     * <code>CONFIG_MAP</code>. If you create the cluster by using the Amazon Web
     * Services Management Console, the default value is
     * <code>API_AND_CONFIG_MAP</code>.</p>
     */
    inline void SetAuthenticationMode(AuthenticationMode&& value) { m_authenticationModeHasBeenSet = true; m_authenticationMode = std::move(value); }

    /**
     * <p>The desired authentication mode for the cluster. If you create a cluster by
     * using the EKS API, Amazon Web Services SDKs, or CloudFormation, the default is
     * <code>CONFIG_MAP</code>. If you create the cluster by using the Amazon Web
     * Services Management Console, the default value is
     * <code>API_AND_CONFIG_MAP</code>.</p>
     */
    inline CreateAccessConfigRequest& WithAuthenticationMode(const AuthenticationMode& value) { SetAuthenticationMode(value); return *this;}

    /**
     * <p>The desired authentication mode for the cluster. If you create a cluster by
     * using the EKS API, Amazon Web Services SDKs, or CloudFormation, the default is
     * <code>CONFIG_MAP</code>. If you create the cluster by using the Amazon Web
     * Services Management Console, the default value is
     * <code>API_AND_CONFIG_MAP</code>.</p>
     */
    inline CreateAccessConfigRequest& WithAuthenticationMode(AuthenticationMode&& value) { SetAuthenticationMode(std::move(value)); return *this;}

  private:

    bool m_bootstrapClusterCreatorAdminPermissions;
    bool m_bootstrapClusterCreatorAdminPermissionsHasBeenSet = false;

    AuthenticationMode m_authenticationMode;
    bool m_authenticationModeHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
