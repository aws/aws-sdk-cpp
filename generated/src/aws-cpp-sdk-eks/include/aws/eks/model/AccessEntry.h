/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>An access entry allows an IAM principal (user or role) to access your
   * cluster. Access entries can replace the need to maintain the
   * <code>aws-auth</code> <code>ConfigMap</code> for authentication. For more
   * information about access entries, see <a
   * href="https://docs.aws.amazon.com/eks/latest/userguide/access-entries.html">Access
   * entries</a> in the <i>Amazon EKS User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/AccessEntry">AWS API
   * Reference</a></p>
   */
  class AccessEntry
  {
  public:
    AWS_EKS_API AccessEntry();
    AWS_EKS_API AccessEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API AccessEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline AccessEntry& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The name of your cluster.</p>
     */
    inline AccessEntry& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The name of your cluster.</p>
     */
    inline AccessEntry& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>The ARN of the IAM principal for the access entry. If you ever delete the IAM
     * principal with this ARN, the access entry isn't automatically deleted. We
     * recommend that you delete the access entry with an ARN for an IAM principal that
     * you delete. If you don't delete the access entry and ever recreate the IAM
     * principal, even if it has the same ARN, the access entry won't work. This is
     * because even though the ARN is the same for the recreated IAM principal, the
     * <code>roleID</code> or <code>userID</code> (you can see this with the Security
     * Token Service <code>GetCallerIdentity</code> API) is different for the recreated
     * IAM principal than it was for the original IAM principal. Even though you don't
     * see the IAM principal's <code>roleID</code> or <code>userID</code> for an access
     * entry, Amazon EKS stores it with the access entry.</p>
     */
    inline const Aws::String& GetPrincipalArn() const{ return m_principalArn; }

    /**
     * <p>The ARN of the IAM principal for the access entry. If you ever delete the IAM
     * principal with this ARN, the access entry isn't automatically deleted. We
     * recommend that you delete the access entry with an ARN for an IAM principal that
     * you delete. If you don't delete the access entry and ever recreate the IAM
     * principal, even if it has the same ARN, the access entry won't work. This is
     * because even though the ARN is the same for the recreated IAM principal, the
     * <code>roleID</code> or <code>userID</code> (you can see this with the Security
     * Token Service <code>GetCallerIdentity</code> API) is different for the recreated
     * IAM principal than it was for the original IAM principal. Even though you don't
     * see the IAM principal's <code>roleID</code> or <code>userID</code> for an access
     * entry, Amazon EKS stores it with the access entry.</p>
     */
    inline bool PrincipalArnHasBeenSet() const { return m_principalArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM principal for the access entry. If you ever delete the IAM
     * principal with this ARN, the access entry isn't automatically deleted. We
     * recommend that you delete the access entry with an ARN for an IAM principal that
     * you delete. If you don't delete the access entry and ever recreate the IAM
     * principal, even if it has the same ARN, the access entry won't work. This is
     * because even though the ARN is the same for the recreated IAM principal, the
     * <code>roleID</code> or <code>userID</code> (you can see this with the Security
     * Token Service <code>GetCallerIdentity</code> API) is different for the recreated
     * IAM principal than it was for the original IAM principal. Even though you don't
     * see the IAM principal's <code>roleID</code> or <code>userID</code> for an access
     * entry, Amazon EKS stores it with the access entry.</p>
     */
    inline void SetPrincipalArn(const Aws::String& value) { m_principalArnHasBeenSet = true; m_principalArn = value; }

    /**
     * <p>The ARN of the IAM principal for the access entry. If you ever delete the IAM
     * principal with this ARN, the access entry isn't automatically deleted. We
     * recommend that you delete the access entry with an ARN for an IAM principal that
     * you delete. If you don't delete the access entry and ever recreate the IAM
     * principal, even if it has the same ARN, the access entry won't work. This is
     * because even though the ARN is the same for the recreated IAM principal, the
     * <code>roleID</code> or <code>userID</code> (you can see this with the Security
     * Token Service <code>GetCallerIdentity</code> API) is different for the recreated
     * IAM principal than it was for the original IAM principal. Even though you don't
     * see the IAM principal's <code>roleID</code> or <code>userID</code> for an access
     * entry, Amazon EKS stores it with the access entry.</p>
     */
    inline void SetPrincipalArn(Aws::String&& value) { m_principalArnHasBeenSet = true; m_principalArn = std::move(value); }

    /**
     * <p>The ARN of the IAM principal for the access entry. If you ever delete the IAM
     * principal with this ARN, the access entry isn't automatically deleted. We
     * recommend that you delete the access entry with an ARN for an IAM principal that
     * you delete. If you don't delete the access entry and ever recreate the IAM
     * principal, even if it has the same ARN, the access entry won't work. This is
     * because even though the ARN is the same for the recreated IAM principal, the
     * <code>roleID</code> or <code>userID</code> (you can see this with the Security
     * Token Service <code>GetCallerIdentity</code> API) is different for the recreated
     * IAM principal than it was for the original IAM principal. Even though you don't
     * see the IAM principal's <code>roleID</code> or <code>userID</code> for an access
     * entry, Amazon EKS stores it with the access entry.</p>
     */
    inline void SetPrincipalArn(const char* value) { m_principalArnHasBeenSet = true; m_principalArn.assign(value); }

    /**
     * <p>The ARN of the IAM principal for the access entry. If you ever delete the IAM
     * principal with this ARN, the access entry isn't automatically deleted. We
     * recommend that you delete the access entry with an ARN for an IAM principal that
     * you delete. If you don't delete the access entry and ever recreate the IAM
     * principal, even if it has the same ARN, the access entry won't work. This is
     * because even though the ARN is the same for the recreated IAM principal, the
     * <code>roleID</code> or <code>userID</code> (you can see this with the Security
     * Token Service <code>GetCallerIdentity</code> API) is different for the recreated
     * IAM principal than it was for the original IAM principal. Even though you don't
     * see the IAM principal's <code>roleID</code> or <code>userID</code> for an access
     * entry, Amazon EKS stores it with the access entry.</p>
     */
    inline AccessEntry& WithPrincipalArn(const Aws::String& value) { SetPrincipalArn(value); return *this;}

    /**
     * <p>The ARN of the IAM principal for the access entry. If you ever delete the IAM
     * principal with this ARN, the access entry isn't automatically deleted. We
     * recommend that you delete the access entry with an ARN for an IAM principal that
     * you delete. If you don't delete the access entry and ever recreate the IAM
     * principal, even if it has the same ARN, the access entry won't work. This is
     * because even though the ARN is the same for the recreated IAM principal, the
     * <code>roleID</code> or <code>userID</code> (you can see this with the Security
     * Token Service <code>GetCallerIdentity</code> API) is different for the recreated
     * IAM principal than it was for the original IAM principal. Even though you don't
     * see the IAM principal's <code>roleID</code> or <code>userID</code> for an access
     * entry, Amazon EKS stores it with the access entry.</p>
     */
    inline AccessEntry& WithPrincipalArn(Aws::String&& value) { SetPrincipalArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM principal for the access entry. If you ever delete the IAM
     * principal with this ARN, the access entry isn't automatically deleted. We
     * recommend that you delete the access entry with an ARN for an IAM principal that
     * you delete. If you don't delete the access entry and ever recreate the IAM
     * principal, even if it has the same ARN, the access entry won't work. This is
     * because even though the ARN is the same for the recreated IAM principal, the
     * <code>roleID</code> or <code>userID</code> (you can see this with the Security
     * Token Service <code>GetCallerIdentity</code> API) is different for the recreated
     * IAM principal than it was for the original IAM principal. Even though you don't
     * see the IAM principal's <code>roleID</code> or <code>userID</code> for an access
     * entry, Amazon EKS stores it with the access entry.</p>
     */
    inline AccessEntry& WithPrincipalArn(const char* value) { SetPrincipalArn(value); return *this;}


    /**
     * <p>A <code>name</code> that you've specified in a Kubernetes
     * <code>RoleBinding</code> or <code>ClusterRoleBinding</code> object so that
     * Kubernetes authorizes the <code>principalARN</code> access to cluster
     * objects.</p>
     */
    inline const Aws::Vector<Aws::String>& GetKubernetesGroups() const{ return m_kubernetesGroups; }

    /**
     * <p>A <code>name</code> that you've specified in a Kubernetes
     * <code>RoleBinding</code> or <code>ClusterRoleBinding</code> object so that
     * Kubernetes authorizes the <code>principalARN</code> access to cluster
     * objects.</p>
     */
    inline bool KubernetesGroupsHasBeenSet() const { return m_kubernetesGroupsHasBeenSet; }

    /**
     * <p>A <code>name</code> that you've specified in a Kubernetes
     * <code>RoleBinding</code> or <code>ClusterRoleBinding</code> object so that
     * Kubernetes authorizes the <code>principalARN</code> access to cluster
     * objects.</p>
     */
    inline void SetKubernetesGroups(const Aws::Vector<Aws::String>& value) { m_kubernetesGroupsHasBeenSet = true; m_kubernetesGroups = value; }

    /**
     * <p>A <code>name</code> that you've specified in a Kubernetes
     * <code>RoleBinding</code> or <code>ClusterRoleBinding</code> object so that
     * Kubernetes authorizes the <code>principalARN</code> access to cluster
     * objects.</p>
     */
    inline void SetKubernetesGroups(Aws::Vector<Aws::String>&& value) { m_kubernetesGroupsHasBeenSet = true; m_kubernetesGroups = std::move(value); }

    /**
     * <p>A <code>name</code> that you've specified in a Kubernetes
     * <code>RoleBinding</code> or <code>ClusterRoleBinding</code> object so that
     * Kubernetes authorizes the <code>principalARN</code> access to cluster
     * objects.</p>
     */
    inline AccessEntry& WithKubernetesGroups(const Aws::Vector<Aws::String>& value) { SetKubernetesGroups(value); return *this;}

    /**
     * <p>A <code>name</code> that you've specified in a Kubernetes
     * <code>RoleBinding</code> or <code>ClusterRoleBinding</code> object so that
     * Kubernetes authorizes the <code>principalARN</code> access to cluster
     * objects.</p>
     */
    inline AccessEntry& WithKubernetesGroups(Aws::Vector<Aws::String>&& value) { SetKubernetesGroups(std::move(value)); return *this;}

    /**
     * <p>A <code>name</code> that you've specified in a Kubernetes
     * <code>RoleBinding</code> or <code>ClusterRoleBinding</code> object so that
     * Kubernetes authorizes the <code>principalARN</code> access to cluster
     * objects.</p>
     */
    inline AccessEntry& AddKubernetesGroups(const Aws::String& value) { m_kubernetesGroupsHasBeenSet = true; m_kubernetesGroups.push_back(value); return *this; }

    /**
     * <p>A <code>name</code> that you've specified in a Kubernetes
     * <code>RoleBinding</code> or <code>ClusterRoleBinding</code> object so that
     * Kubernetes authorizes the <code>principalARN</code> access to cluster
     * objects.</p>
     */
    inline AccessEntry& AddKubernetesGroups(Aws::String&& value) { m_kubernetesGroupsHasBeenSet = true; m_kubernetesGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>A <code>name</code> that you've specified in a Kubernetes
     * <code>RoleBinding</code> or <code>ClusterRoleBinding</code> object so that
     * Kubernetes authorizes the <code>principalARN</code> access to cluster
     * objects.</p>
     */
    inline AccessEntry& AddKubernetesGroups(const char* value) { m_kubernetesGroupsHasBeenSet = true; m_kubernetesGroups.push_back(value); return *this; }


    /**
     * <p>The ARN of the access entry.</p>
     */
    inline const Aws::String& GetAccessEntryArn() const{ return m_accessEntryArn; }

    /**
     * <p>The ARN of the access entry.</p>
     */
    inline bool AccessEntryArnHasBeenSet() const { return m_accessEntryArnHasBeenSet; }

    /**
     * <p>The ARN of the access entry.</p>
     */
    inline void SetAccessEntryArn(const Aws::String& value) { m_accessEntryArnHasBeenSet = true; m_accessEntryArn = value; }

    /**
     * <p>The ARN of the access entry.</p>
     */
    inline void SetAccessEntryArn(Aws::String&& value) { m_accessEntryArnHasBeenSet = true; m_accessEntryArn = std::move(value); }

    /**
     * <p>The ARN of the access entry.</p>
     */
    inline void SetAccessEntryArn(const char* value) { m_accessEntryArnHasBeenSet = true; m_accessEntryArn.assign(value); }

    /**
     * <p>The ARN of the access entry.</p>
     */
    inline AccessEntry& WithAccessEntryArn(const Aws::String& value) { SetAccessEntryArn(value); return *this;}

    /**
     * <p>The ARN of the access entry.</p>
     */
    inline AccessEntry& WithAccessEntryArn(Aws::String&& value) { SetAccessEntryArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the access entry.</p>
     */
    inline AccessEntry& WithAccessEntryArn(const char* value) { SetAccessEntryArn(value); return *this;}


    /**
     * <p>The Unix epoch timestamp at object creation.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The Unix epoch timestamp at object creation.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The Unix epoch timestamp at object creation.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The Unix epoch timestamp at object creation.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The Unix epoch timestamp at object creation.</p>
     */
    inline AccessEntry& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The Unix epoch timestamp at object creation.</p>
     */
    inline AccessEntry& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Unix epoch timestamp for the last modification to the object.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }

    /**
     * <p>The Unix epoch timestamp for the last modification to the object.</p>
     */
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }

    /**
     * <p>The Unix epoch timestamp for the last modification to the object.</p>
     */
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = value; }

    /**
     * <p>The Unix epoch timestamp for the last modification to the object.</p>
     */
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::move(value); }

    /**
     * <p>The Unix epoch timestamp for the last modification to the object.</p>
     */
    inline AccessEntry& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}

    /**
     * <p>The Unix epoch timestamp for the last modification to the object.</p>
     */
    inline AccessEntry& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}


    /**
     * <p>Metadata that assists with categorization and organization. Each tag consists
     * of a key and an optional value. You define both. Tags don't propagate to any
     * other cluster or Amazon Web Services resources.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata that assists with categorization and organization. Each tag consists
     * of a key and an optional value. You define both. Tags don't propagate to any
     * other cluster or Amazon Web Services resources.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Metadata that assists with categorization and organization. Each tag consists
     * of a key and an optional value. You define both. Tags don't propagate to any
     * other cluster or Amazon Web Services resources.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata that assists with categorization and organization. Each tag consists
     * of a key and an optional value. You define both. Tags don't propagate to any
     * other cluster or Amazon Web Services resources.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata that assists with categorization and organization. Each tag consists
     * of a key and an optional value. You define both. Tags don't propagate to any
     * other cluster or Amazon Web Services resources.</p>
     */
    inline AccessEntry& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata that assists with categorization and organization. Each tag consists
     * of a key and an optional value. You define both. Tags don't propagate to any
     * other cluster or Amazon Web Services resources.</p>
     */
    inline AccessEntry& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata that assists with categorization and organization. Each tag consists
     * of a key and an optional value. You define both. Tags don't propagate to any
     * other cluster or Amazon Web Services resources.</p>
     */
    inline AccessEntry& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Metadata that assists with categorization and organization. Each tag consists
     * of a key and an optional value. You define both. Tags don't propagate to any
     * other cluster or Amazon Web Services resources.</p>
     */
    inline AccessEntry& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata that assists with categorization and organization. Each tag consists
     * of a key and an optional value. You define both. Tags don't propagate to any
     * other cluster or Amazon Web Services resources.</p>
     */
    inline AccessEntry& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata that assists with categorization and organization. Each tag consists
     * of a key and an optional value. You define both. Tags don't propagate to any
     * other cluster or Amazon Web Services resources.</p>
     */
    inline AccessEntry& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Metadata that assists with categorization and organization. Each tag consists
     * of a key and an optional value. You define both. Tags don't propagate to any
     * other cluster or Amazon Web Services resources.</p>
     */
    inline AccessEntry& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata that assists with categorization and organization. Each tag consists
     * of a key and an optional value. You define both. Tags don't propagate to any
     * other cluster or Amazon Web Services resources.</p>
     */
    inline AccessEntry& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata that assists with categorization and organization. Each tag consists
     * of a key and an optional value. You define both. Tags don't propagate to any
     * other cluster or Amazon Web Services resources.</p>
     */
    inline AccessEntry& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The <code>name</code> of a user that can authenticate to your cluster.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The <code>name</code> of a user that can authenticate to your cluster.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>The <code>name</code> of a user that can authenticate to your cluster.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The <code>name</code> of a user that can authenticate to your cluster.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>The <code>name</code> of a user that can authenticate to your cluster.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The <code>name</code> of a user that can authenticate to your cluster.</p>
     */
    inline AccessEntry& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The <code>name</code> of a user that can authenticate to your cluster.</p>
     */
    inline AccessEntry& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The <code>name</code> of a user that can authenticate to your cluster.</p>
     */
    inline AccessEntry& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p>The type of the access entry.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of the access entry.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the access entry.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the access entry.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the access entry.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of the access entry.</p>
     */
    inline AccessEntry& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of the access entry.</p>
     */
    inline AccessEntry& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of the access entry.</p>
     */
    inline AccessEntry& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_principalArn;
    bool m_principalArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_kubernetesGroups;
    bool m_kubernetesGroupsHasBeenSet = false;

    Aws::String m_accessEntryArn;
    bool m_accessEntryArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt;
    bool m_modifiedAtHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
