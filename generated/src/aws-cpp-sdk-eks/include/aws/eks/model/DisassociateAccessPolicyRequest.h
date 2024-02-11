/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/EKSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EKS
{
namespace Model
{

  /**
   */
  class DisassociateAccessPolicyRequest : public EKSRequest
  {
  public:
    AWS_EKS_API DisassociateAccessPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateAccessPolicy"; }

    AWS_EKS_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of your cluster.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>The name of your cluster.</p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>The name of your cluster.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>The name of your cluster.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>The name of your cluster.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>The name of your cluster.</p>
     */
    inline DisassociateAccessPolicyRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The name of your cluster.</p>
     */
    inline DisassociateAccessPolicyRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The name of your cluster.</p>
     */
    inline DisassociateAccessPolicyRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>The ARN of the IAM principal for the <code>AccessEntry</code>.</p>
     */
    inline const Aws::String& GetPrincipalArn() const{ return m_principalArn; }

    /**
     * <p>The ARN of the IAM principal for the <code>AccessEntry</code>.</p>
     */
    inline bool PrincipalArnHasBeenSet() const { return m_principalArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM principal for the <code>AccessEntry</code>.</p>
     */
    inline void SetPrincipalArn(const Aws::String& value) { m_principalArnHasBeenSet = true; m_principalArn = value; }

    /**
     * <p>The ARN of the IAM principal for the <code>AccessEntry</code>.</p>
     */
    inline void SetPrincipalArn(Aws::String&& value) { m_principalArnHasBeenSet = true; m_principalArn = std::move(value); }

    /**
     * <p>The ARN of the IAM principal for the <code>AccessEntry</code>.</p>
     */
    inline void SetPrincipalArn(const char* value) { m_principalArnHasBeenSet = true; m_principalArn.assign(value); }

    /**
     * <p>The ARN of the IAM principal for the <code>AccessEntry</code>.</p>
     */
    inline DisassociateAccessPolicyRequest& WithPrincipalArn(const Aws::String& value) { SetPrincipalArn(value); return *this;}

    /**
     * <p>The ARN of the IAM principal for the <code>AccessEntry</code>.</p>
     */
    inline DisassociateAccessPolicyRequest& WithPrincipalArn(Aws::String&& value) { SetPrincipalArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM principal for the <code>AccessEntry</code>.</p>
     */
    inline DisassociateAccessPolicyRequest& WithPrincipalArn(const char* value) { SetPrincipalArn(value); return *this;}


    /**
     * <p>The ARN of the policy to disassociate from the access entry. For a list of
     * associated policies ARNs, use <code>ListAssociatedAccessPolicies</code>.</p>
     */
    inline const Aws::String& GetPolicyArn() const{ return m_policyArn; }

    /**
     * <p>The ARN of the policy to disassociate from the access entry. For a list of
     * associated policies ARNs, use <code>ListAssociatedAccessPolicies</code>.</p>
     */
    inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }

    /**
     * <p>The ARN of the policy to disassociate from the access entry. For a list of
     * associated policies ARNs, use <code>ListAssociatedAccessPolicies</code>.</p>
     */
    inline void SetPolicyArn(const Aws::String& value) { m_policyArnHasBeenSet = true; m_policyArn = value; }

    /**
     * <p>The ARN of the policy to disassociate from the access entry. For a list of
     * associated policies ARNs, use <code>ListAssociatedAccessPolicies</code>.</p>
     */
    inline void SetPolicyArn(Aws::String&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::move(value); }

    /**
     * <p>The ARN of the policy to disassociate from the access entry. For a list of
     * associated policies ARNs, use <code>ListAssociatedAccessPolicies</code>.</p>
     */
    inline void SetPolicyArn(const char* value) { m_policyArnHasBeenSet = true; m_policyArn.assign(value); }

    /**
     * <p>The ARN of the policy to disassociate from the access entry. For a list of
     * associated policies ARNs, use <code>ListAssociatedAccessPolicies</code>.</p>
     */
    inline DisassociateAccessPolicyRequest& WithPolicyArn(const Aws::String& value) { SetPolicyArn(value); return *this;}

    /**
     * <p>The ARN of the policy to disassociate from the access entry. For a list of
     * associated policies ARNs, use <code>ListAssociatedAccessPolicies</code>.</p>
     */
    inline DisassociateAccessPolicyRequest& WithPolicyArn(Aws::String&& value) { SetPolicyArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the policy to disassociate from the access entry. For a list of
     * associated policies ARNs, use <code>ListAssociatedAccessPolicies</code>.</p>
     */
    inline DisassociateAccessPolicyRequest& WithPolicyArn(const char* value) { SetPolicyArn(value); return *this;}

  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_principalArn;
    bool m_principalArnHasBeenSet = false;

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
