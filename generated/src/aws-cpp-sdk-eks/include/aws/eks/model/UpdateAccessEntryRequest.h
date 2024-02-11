/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/EKSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EKS
{
namespace Model
{

  /**
   */
  class UpdateAccessEntryRequest : public EKSRequest
  {
  public:
    AWS_EKS_API UpdateAccessEntryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAccessEntry"; }

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
    inline UpdateAccessEntryRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The name of your cluster.</p>
     */
    inline UpdateAccessEntryRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The name of your cluster.</p>
     */
    inline UpdateAccessEntryRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}


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
    inline UpdateAccessEntryRequest& WithPrincipalArn(const Aws::String& value) { SetPrincipalArn(value); return *this;}

    /**
     * <p>The ARN of the IAM principal for the <code>AccessEntry</code>.</p>
     */
    inline UpdateAccessEntryRequest& WithPrincipalArn(Aws::String&& value) { SetPrincipalArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM principal for the <code>AccessEntry</code>.</p>
     */
    inline UpdateAccessEntryRequest& WithPrincipalArn(const char* value) { SetPrincipalArn(value); return *this;}


    /**
     * <p>The value for <code>name</code> that you've specified for <code>kind:
     * Group</code> as a <code>subject</code> in a Kubernetes <code>RoleBinding</code>
     * or <code>ClusterRoleBinding</code> object. Amazon EKS doesn't confirm that the
     * value for <code>name</code> exists in any bindings on your cluster. You can
     * specify one or more names.</p> <p>Kubernetes authorizes the
     * <code>principalArn</code> of the access entry to access any cluster objects that
     * you've specified in a Kubernetes <code>Role</code> or <code>ClusterRole</code>
     * object that is also specified in a binding's <code>roleRef</code>. For more
     * information about creating Kubernetes <code>RoleBinding</code>,
     * <code>ClusterRoleBinding</code>, <code>Role</code>, or <code>ClusterRole</code>
     * objects, see <a
     * href="https://kubernetes.io/docs/reference/access-authn-authz/rbac/">Using RBAC
     * Authorization in the Kubernetes documentation</a>.</p> <p>If you want Amazon EKS
     * to authorize the <code>principalArn</code> (instead of, or in addition to
     * Kubernetes authorizing the <code>principalArn</code>), you can associate one or
     * more access policies to the access entry using
     * <code>AssociateAccessPolicy</code>. If you associate any access policies, the
     * <code>principalARN</code> has all permissions assigned in the associated access
     * policies and all permissions in any Kubernetes <code>Role</code> or
     * <code>ClusterRole</code> objects that the group names are bound to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetKubernetesGroups() const{ return m_kubernetesGroups; }

    /**
     * <p>The value for <code>name</code> that you've specified for <code>kind:
     * Group</code> as a <code>subject</code> in a Kubernetes <code>RoleBinding</code>
     * or <code>ClusterRoleBinding</code> object. Amazon EKS doesn't confirm that the
     * value for <code>name</code> exists in any bindings on your cluster. You can
     * specify one or more names.</p> <p>Kubernetes authorizes the
     * <code>principalArn</code> of the access entry to access any cluster objects that
     * you've specified in a Kubernetes <code>Role</code> or <code>ClusterRole</code>
     * object that is also specified in a binding's <code>roleRef</code>. For more
     * information about creating Kubernetes <code>RoleBinding</code>,
     * <code>ClusterRoleBinding</code>, <code>Role</code>, or <code>ClusterRole</code>
     * objects, see <a
     * href="https://kubernetes.io/docs/reference/access-authn-authz/rbac/">Using RBAC
     * Authorization in the Kubernetes documentation</a>.</p> <p>If you want Amazon EKS
     * to authorize the <code>principalArn</code> (instead of, or in addition to
     * Kubernetes authorizing the <code>principalArn</code>), you can associate one or
     * more access policies to the access entry using
     * <code>AssociateAccessPolicy</code>. If you associate any access policies, the
     * <code>principalARN</code> has all permissions assigned in the associated access
     * policies and all permissions in any Kubernetes <code>Role</code> or
     * <code>ClusterRole</code> objects that the group names are bound to.</p>
     */
    inline bool KubernetesGroupsHasBeenSet() const { return m_kubernetesGroupsHasBeenSet; }

    /**
     * <p>The value for <code>name</code> that you've specified for <code>kind:
     * Group</code> as a <code>subject</code> in a Kubernetes <code>RoleBinding</code>
     * or <code>ClusterRoleBinding</code> object. Amazon EKS doesn't confirm that the
     * value for <code>name</code> exists in any bindings on your cluster. You can
     * specify one or more names.</p> <p>Kubernetes authorizes the
     * <code>principalArn</code> of the access entry to access any cluster objects that
     * you've specified in a Kubernetes <code>Role</code> or <code>ClusterRole</code>
     * object that is also specified in a binding's <code>roleRef</code>. For more
     * information about creating Kubernetes <code>RoleBinding</code>,
     * <code>ClusterRoleBinding</code>, <code>Role</code>, or <code>ClusterRole</code>
     * objects, see <a
     * href="https://kubernetes.io/docs/reference/access-authn-authz/rbac/">Using RBAC
     * Authorization in the Kubernetes documentation</a>.</p> <p>If you want Amazon EKS
     * to authorize the <code>principalArn</code> (instead of, or in addition to
     * Kubernetes authorizing the <code>principalArn</code>), you can associate one or
     * more access policies to the access entry using
     * <code>AssociateAccessPolicy</code>. If you associate any access policies, the
     * <code>principalARN</code> has all permissions assigned in the associated access
     * policies and all permissions in any Kubernetes <code>Role</code> or
     * <code>ClusterRole</code> objects that the group names are bound to.</p>
     */
    inline void SetKubernetesGroups(const Aws::Vector<Aws::String>& value) { m_kubernetesGroupsHasBeenSet = true; m_kubernetesGroups = value; }

    /**
     * <p>The value for <code>name</code> that you've specified for <code>kind:
     * Group</code> as a <code>subject</code> in a Kubernetes <code>RoleBinding</code>
     * or <code>ClusterRoleBinding</code> object. Amazon EKS doesn't confirm that the
     * value for <code>name</code> exists in any bindings on your cluster. You can
     * specify one or more names.</p> <p>Kubernetes authorizes the
     * <code>principalArn</code> of the access entry to access any cluster objects that
     * you've specified in a Kubernetes <code>Role</code> or <code>ClusterRole</code>
     * object that is also specified in a binding's <code>roleRef</code>. For more
     * information about creating Kubernetes <code>RoleBinding</code>,
     * <code>ClusterRoleBinding</code>, <code>Role</code>, or <code>ClusterRole</code>
     * objects, see <a
     * href="https://kubernetes.io/docs/reference/access-authn-authz/rbac/">Using RBAC
     * Authorization in the Kubernetes documentation</a>.</p> <p>If you want Amazon EKS
     * to authorize the <code>principalArn</code> (instead of, or in addition to
     * Kubernetes authorizing the <code>principalArn</code>), you can associate one or
     * more access policies to the access entry using
     * <code>AssociateAccessPolicy</code>. If you associate any access policies, the
     * <code>principalARN</code> has all permissions assigned in the associated access
     * policies and all permissions in any Kubernetes <code>Role</code> or
     * <code>ClusterRole</code> objects that the group names are bound to.</p>
     */
    inline void SetKubernetesGroups(Aws::Vector<Aws::String>&& value) { m_kubernetesGroupsHasBeenSet = true; m_kubernetesGroups = std::move(value); }

    /**
     * <p>The value for <code>name</code> that you've specified for <code>kind:
     * Group</code> as a <code>subject</code> in a Kubernetes <code>RoleBinding</code>
     * or <code>ClusterRoleBinding</code> object. Amazon EKS doesn't confirm that the
     * value for <code>name</code> exists in any bindings on your cluster. You can
     * specify one or more names.</p> <p>Kubernetes authorizes the
     * <code>principalArn</code> of the access entry to access any cluster objects that
     * you've specified in a Kubernetes <code>Role</code> or <code>ClusterRole</code>
     * object that is also specified in a binding's <code>roleRef</code>. For more
     * information about creating Kubernetes <code>RoleBinding</code>,
     * <code>ClusterRoleBinding</code>, <code>Role</code>, or <code>ClusterRole</code>
     * objects, see <a
     * href="https://kubernetes.io/docs/reference/access-authn-authz/rbac/">Using RBAC
     * Authorization in the Kubernetes documentation</a>.</p> <p>If you want Amazon EKS
     * to authorize the <code>principalArn</code> (instead of, or in addition to
     * Kubernetes authorizing the <code>principalArn</code>), you can associate one or
     * more access policies to the access entry using
     * <code>AssociateAccessPolicy</code>. If you associate any access policies, the
     * <code>principalARN</code> has all permissions assigned in the associated access
     * policies and all permissions in any Kubernetes <code>Role</code> or
     * <code>ClusterRole</code> objects that the group names are bound to.</p>
     */
    inline UpdateAccessEntryRequest& WithKubernetesGroups(const Aws::Vector<Aws::String>& value) { SetKubernetesGroups(value); return *this;}

    /**
     * <p>The value for <code>name</code> that you've specified for <code>kind:
     * Group</code> as a <code>subject</code> in a Kubernetes <code>RoleBinding</code>
     * or <code>ClusterRoleBinding</code> object. Amazon EKS doesn't confirm that the
     * value for <code>name</code> exists in any bindings on your cluster. You can
     * specify one or more names.</p> <p>Kubernetes authorizes the
     * <code>principalArn</code> of the access entry to access any cluster objects that
     * you've specified in a Kubernetes <code>Role</code> or <code>ClusterRole</code>
     * object that is also specified in a binding's <code>roleRef</code>. For more
     * information about creating Kubernetes <code>RoleBinding</code>,
     * <code>ClusterRoleBinding</code>, <code>Role</code>, or <code>ClusterRole</code>
     * objects, see <a
     * href="https://kubernetes.io/docs/reference/access-authn-authz/rbac/">Using RBAC
     * Authorization in the Kubernetes documentation</a>.</p> <p>If you want Amazon EKS
     * to authorize the <code>principalArn</code> (instead of, or in addition to
     * Kubernetes authorizing the <code>principalArn</code>), you can associate one or
     * more access policies to the access entry using
     * <code>AssociateAccessPolicy</code>. If you associate any access policies, the
     * <code>principalARN</code> has all permissions assigned in the associated access
     * policies and all permissions in any Kubernetes <code>Role</code> or
     * <code>ClusterRole</code> objects that the group names are bound to.</p>
     */
    inline UpdateAccessEntryRequest& WithKubernetesGroups(Aws::Vector<Aws::String>&& value) { SetKubernetesGroups(std::move(value)); return *this;}

    /**
     * <p>The value for <code>name</code> that you've specified for <code>kind:
     * Group</code> as a <code>subject</code> in a Kubernetes <code>RoleBinding</code>
     * or <code>ClusterRoleBinding</code> object. Amazon EKS doesn't confirm that the
     * value for <code>name</code> exists in any bindings on your cluster. You can
     * specify one or more names.</p> <p>Kubernetes authorizes the
     * <code>principalArn</code> of the access entry to access any cluster objects that
     * you've specified in a Kubernetes <code>Role</code> or <code>ClusterRole</code>
     * object that is also specified in a binding's <code>roleRef</code>. For more
     * information about creating Kubernetes <code>RoleBinding</code>,
     * <code>ClusterRoleBinding</code>, <code>Role</code>, or <code>ClusterRole</code>
     * objects, see <a
     * href="https://kubernetes.io/docs/reference/access-authn-authz/rbac/">Using RBAC
     * Authorization in the Kubernetes documentation</a>.</p> <p>If you want Amazon EKS
     * to authorize the <code>principalArn</code> (instead of, or in addition to
     * Kubernetes authorizing the <code>principalArn</code>), you can associate one or
     * more access policies to the access entry using
     * <code>AssociateAccessPolicy</code>. If you associate any access policies, the
     * <code>principalARN</code> has all permissions assigned in the associated access
     * policies and all permissions in any Kubernetes <code>Role</code> or
     * <code>ClusterRole</code> objects that the group names are bound to.</p>
     */
    inline UpdateAccessEntryRequest& AddKubernetesGroups(const Aws::String& value) { m_kubernetesGroupsHasBeenSet = true; m_kubernetesGroups.push_back(value); return *this; }

    /**
     * <p>The value for <code>name</code> that you've specified for <code>kind:
     * Group</code> as a <code>subject</code> in a Kubernetes <code>RoleBinding</code>
     * or <code>ClusterRoleBinding</code> object. Amazon EKS doesn't confirm that the
     * value for <code>name</code> exists in any bindings on your cluster. You can
     * specify one or more names.</p> <p>Kubernetes authorizes the
     * <code>principalArn</code> of the access entry to access any cluster objects that
     * you've specified in a Kubernetes <code>Role</code> or <code>ClusterRole</code>
     * object that is also specified in a binding's <code>roleRef</code>. For more
     * information about creating Kubernetes <code>RoleBinding</code>,
     * <code>ClusterRoleBinding</code>, <code>Role</code>, or <code>ClusterRole</code>
     * objects, see <a
     * href="https://kubernetes.io/docs/reference/access-authn-authz/rbac/">Using RBAC
     * Authorization in the Kubernetes documentation</a>.</p> <p>If you want Amazon EKS
     * to authorize the <code>principalArn</code> (instead of, or in addition to
     * Kubernetes authorizing the <code>principalArn</code>), you can associate one or
     * more access policies to the access entry using
     * <code>AssociateAccessPolicy</code>. If you associate any access policies, the
     * <code>principalARN</code> has all permissions assigned in the associated access
     * policies and all permissions in any Kubernetes <code>Role</code> or
     * <code>ClusterRole</code> objects that the group names are bound to.</p>
     */
    inline UpdateAccessEntryRequest& AddKubernetesGroups(Aws::String&& value) { m_kubernetesGroupsHasBeenSet = true; m_kubernetesGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>The value for <code>name</code> that you've specified for <code>kind:
     * Group</code> as a <code>subject</code> in a Kubernetes <code>RoleBinding</code>
     * or <code>ClusterRoleBinding</code> object. Amazon EKS doesn't confirm that the
     * value for <code>name</code> exists in any bindings on your cluster. You can
     * specify one or more names.</p> <p>Kubernetes authorizes the
     * <code>principalArn</code> of the access entry to access any cluster objects that
     * you've specified in a Kubernetes <code>Role</code> or <code>ClusterRole</code>
     * object that is also specified in a binding's <code>roleRef</code>. For more
     * information about creating Kubernetes <code>RoleBinding</code>,
     * <code>ClusterRoleBinding</code>, <code>Role</code>, or <code>ClusterRole</code>
     * objects, see <a
     * href="https://kubernetes.io/docs/reference/access-authn-authz/rbac/">Using RBAC
     * Authorization in the Kubernetes documentation</a>.</p> <p>If you want Amazon EKS
     * to authorize the <code>principalArn</code> (instead of, or in addition to
     * Kubernetes authorizing the <code>principalArn</code>), you can associate one or
     * more access policies to the access entry using
     * <code>AssociateAccessPolicy</code>. If you associate any access policies, the
     * <code>principalARN</code> has all permissions assigned in the associated access
     * policies and all permissions in any Kubernetes <code>Role</code> or
     * <code>ClusterRole</code> objects that the group names are bound to.</p>
     */
    inline UpdateAccessEntryRequest& AddKubernetesGroups(const char* value) { m_kubernetesGroupsHasBeenSet = true; m_kubernetesGroups.push_back(value); return *this; }


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline UpdateAccessEntryRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline UpdateAccessEntryRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline UpdateAccessEntryRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The username to authenticate to Kubernetes with. We recommend not specifying
     * a username and letting Amazon EKS specify it for you. For more information about
     * the value Amazon EKS specifies for you, or constraints before specifying your
     * own username, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/access-entries.html#creating-access-entries">Creating
     * access entries</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The username to authenticate to Kubernetes with. We recommend not specifying
     * a username and letting Amazon EKS specify it for you. For more information about
     * the value Amazon EKS specifies for you, or constraints before specifying your
     * own username, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/access-entries.html#creating-access-entries">Creating
     * access entries</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>The username to authenticate to Kubernetes with. We recommend not specifying
     * a username and letting Amazon EKS specify it for you. For more information about
     * the value Amazon EKS specifies for you, or constraints before specifying your
     * own username, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/access-entries.html#creating-access-entries">Creating
     * access entries</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The username to authenticate to Kubernetes with. We recommend not specifying
     * a username and letting Amazon EKS specify it for you. For more information about
     * the value Amazon EKS specifies for you, or constraints before specifying your
     * own username, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/access-entries.html#creating-access-entries">Creating
     * access entries</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>The username to authenticate to Kubernetes with. We recommend not specifying
     * a username and letting Amazon EKS specify it for you. For more information about
     * the value Amazon EKS specifies for you, or constraints before specifying your
     * own username, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/access-entries.html#creating-access-entries">Creating
     * access entries</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The username to authenticate to Kubernetes with. We recommend not specifying
     * a username and letting Amazon EKS specify it for you. For more information about
     * the value Amazon EKS specifies for you, or constraints before specifying your
     * own username, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/access-entries.html#creating-access-entries">Creating
     * access entries</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline UpdateAccessEntryRequest& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The username to authenticate to Kubernetes with. We recommend not specifying
     * a username and letting Amazon EKS specify it for you. For more information about
     * the value Amazon EKS specifies for you, or constraints before specifying your
     * own username, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/access-entries.html#creating-access-entries">Creating
     * access entries</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline UpdateAccessEntryRequest& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The username to authenticate to Kubernetes with. We recommend not specifying
     * a username and letting Amazon EKS specify it for you. For more information about
     * the value Amazon EKS specifies for you, or constraints before specifying your
     * own username, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/access-entries.html#creating-access-entries">Creating
     * access entries</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline UpdateAccessEntryRequest& WithUsername(const char* value) { SetUsername(value); return *this;}

  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_principalArn;
    bool m_principalArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_kubernetesGroups;
    bool m_kubernetesGroupsHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
