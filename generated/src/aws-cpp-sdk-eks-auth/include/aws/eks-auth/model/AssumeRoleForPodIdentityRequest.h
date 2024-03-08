/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks-auth/EKSAuth_EXPORTS.h>
#include <aws/eks-auth/EKSAuthRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EKSAuth
{
namespace Model
{

  /**
   */
  class AssumeRoleForPodIdentityRequest : public EKSAuthRequest
  {
  public:
    AWS_EKSAUTH_API AssumeRoleForPodIdentityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssumeRoleForPodIdentity"; }

    AWS_EKSAUTH_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the cluster for the request.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>The name of the cluster for the request.</p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>The name of the cluster for the request.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>The name of the cluster for the request.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>The name of the cluster for the request.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>The name of the cluster for the request.</p>
     */
    inline AssumeRoleForPodIdentityRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The name of the cluster for the request.</p>
     */
    inline AssumeRoleForPodIdentityRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The name of the cluster for the request.</p>
     */
    inline AssumeRoleForPodIdentityRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>The token of the Kubernetes service account for the pod.</p>
     */
    inline const Aws::String& GetToken() const{ return m_token; }

    /**
     * <p>The token of the Kubernetes service account for the pod.</p>
     */
    inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }

    /**
     * <p>The token of the Kubernetes service account for the pod.</p>
     */
    inline void SetToken(const Aws::String& value) { m_tokenHasBeenSet = true; m_token = value; }

    /**
     * <p>The token of the Kubernetes service account for the pod.</p>
     */
    inline void SetToken(Aws::String&& value) { m_tokenHasBeenSet = true; m_token = std::move(value); }

    /**
     * <p>The token of the Kubernetes service account for the pod.</p>
     */
    inline void SetToken(const char* value) { m_tokenHasBeenSet = true; m_token.assign(value); }

    /**
     * <p>The token of the Kubernetes service account for the pod.</p>
     */
    inline AssumeRoleForPodIdentityRequest& WithToken(const Aws::String& value) { SetToken(value); return *this;}

    /**
     * <p>The token of the Kubernetes service account for the pod.</p>
     */
    inline AssumeRoleForPodIdentityRequest& WithToken(Aws::String&& value) { SetToken(std::move(value)); return *this;}

    /**
     * <p>The token of the Kubernetes service account for the pod.</p>
     */
    inline AssumeRoleForPodIdentityRequest& WithToken(const char* value) { SetToken(value); return *this;}

  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_token;
    bool m_tokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EKSAuth
} // namespace Aws
