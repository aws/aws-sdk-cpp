/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/EKSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/AccessScope.h>
#include <utility>

namespace Aws
{
namespace EKS
{
namespace Model
{

  /**
   */
  class AssociateAccessPolicyRequest : public EKSRequest
  {
  public:
    AWS_EKS_API AssociateAccessPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateAccessPolicy"; }

    AWS_EKS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of your cluster.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }
    inline AssociateAccessPolicyRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}
    inline AssociateAccessPolicyRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}
    inline AssociateAccessPolicyRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM user or role for the
     * <code>AccessEntry</code> that you're associating the access policy to. </p>
     */
    inline const Aws::String& GetPrincipalArn() const{ return m_principalArn; }
    inline bool PrincipalArnHasBeenSet() const { return m_principalArnHasBeenSet; }
    inline void SetPrincipalArn(const Aws::String& value) { m_principalArnHasBeenSet = true; m_principalArn = value; }
    inline void SetPrincipalArn(Aws::String&& value) { m_principalArnHasBeenSet = true; m_principalArn = std::move(value); }
    inline void SetPrincipalArn(const char* value) { m_principalArnHasBeenSet = true; m_principalArn.assign(value); }
    inline AssociateAccessPolicyRequest& WithPrincipalArn(const Aws::String& value) { SetPrincipalArn(value); return *this;}
    inline AssociateAccessPolicyRequest& WithPrincipalArn(Aws::String&& value) { SetPrincipalArn(std::move(value)); return *this;}
    inline AssociateAccessPolicyRequest& WithPrincipalArn(const char* value) { SetPrincipalArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the <code>AccessPolicy</code> that you're associating. For a list
     * of ARNs, use <code>ListAccessPolicies</code>.</p>
     */
    inline const Aws::String& GetPolicyArn() const{ return m_policyArn; }
    inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
    inline void SetPolicyArn(const Aws::String& value) { m_policyArnHasBeenSet = true; m_policyArn = value; }
    inline void SetPolicyArn(Aws::String&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::move(value); }
    inline void SetPolicyArn(const char* value) { m_policyArnHasBeenSet = true; m_policyArn.assign(value); }
    inline AssociateAccessPolicyRequest& WithPolicyArn(const Aws::String& value) { SetPolicyArn(value); return *this;}
    inline AssociateAccessPolicyRequest& WithPolicyArn(Aws::String&& value) { SetPolicyArn(std::move(value)); return *this;}
    inline AssociateAccessPolicyRequest& WithPolicyArn(const char* value) { SetPolicyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scope for the <code>AccessPolicy</code>. You can scope access policies to
     * an entire cluster or to specific Kubernetes namespaces.</p>
     */
    inline const AccessScope& GetAccessScope() const{ return m_accessScope; }
    inline bool AccessScopeHasBeenSet() const { return m_accessScopeHasBeenSet; }
    inline void SetAccessScope(const AccessScope& value) { m_accessScopeHasBeenSet = true; m_accessScope = value; }
    inline void SetAccessScope(AccessScope&& value) { m_accessScopeHasBeenSet = true; m_accessScope = std::move(value); }
    inline AssociateAccessPolicyRequest& WithAccessScope(const AccessScope& value) { SetAccessScope(value); return *this;}
    inline AssociateAccessPolicyRequest& WithAccessScope(AccessScope&& value) { SetAccessScope(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_principalArn;
    bool m_principalArnHasBeenSet = false;

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;

    AccessScope m_accessScope;
    bool m_accessScopeHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
