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
    AWS_EKS_API AccessEntry() = default;
    AWS_EKS_API AccessEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API AccessEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of your cluster.</p>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    AccessEntry& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetPrincipalArn() const { return m_principalArn; }
    inline bool PrincipalArnHasBeenSet() const { return m_principalArnHasBeenSet; }
    template<typename PrincipalArnT = Aws::String>
    void SetPrincipalArn(PrincipalArnT&& value) { m_principalArnHasBeenSet = true; m_principalArn = std::forward<PrincipalArnT>(value); }
    template<typename PrincipalArnT = Aws::String>
    AccessEntry& WithPrincipalArn(PrincipalArnT&& value) { SetPrincipalArn(std::forward<PrincipalArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>name</code> that you've specified in a Kubernetes
     * <code>RoleBinding</code> or <code>ClusterRoleBinding</code> object so that
     * Kubernetes authorizes the <code>principalARN</code> access to cluster
     * objects.</p>
     */
    inline const Aws::Vector<Aws::String>& GetKubernetesGroups() const { return m_kubernetesGroups; }
    inline bool KubernetesGroupsHasBeenSet() const { return m_kubernetesGroupsHasBeenSet; }
    template<typename KubernetesGroupsT = Aws::Vector<Aws::String>>
    void SetKubernetesGroups(KubernetesGroupsT&& value) { m_kubernetesGroupsHasBeenSet = true; m_kubernetesGroups = std::forward<KubernetesGroupsT>(value); }
    template<typename KubernetesGroupsT = Aws::Vector<Aws::String>>
    AccessEntry& WithKubernetesGroups(KubernetesGroupsT&& value) { SetKubernetesGroups(std::forward<KubernetesGroupsT>(value)); return *this;}
    template<typename KubernetesGroupsT = Aws::String>
    AccessEntry& AddKubernetesGroups(KubernetesGroupsT&& value) { m_kubernetesGroupsHasBeenSet = true; m_kubernetesGroups.emplace_back(std::forward<KubernetesGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the access entry.</p>
     */
    inline const Aws::String& GetAccessEntryArn() const { return m_accessEntryArn; }
    inline bool AccessEntryArnHasBeenSet() const { return m_accessEntryArnHasBeenSet; }
    template<typename AccessEntryArnT = Aws::String>
    void SetAccessEntryArn(AccessEntryArnT&& value) { m_accessEntryArnHasBeenSet = true; m_accessEntryArn = std::forward<AccessEntryArnT>(value); }
    template<typename AccessEntryArnT = Aws::String>
    AccessEntry& WithAccessEntryArn(AccessEntryArnT&& value) { SetAccessEntryArn(std::forward<AccessEntryArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix epoch timestamp at object creation.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    AccessEntry& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix epoch timestamp for the last modification to the object.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    void SetModifiedAt(ModifiedAtT&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::forward<ModifiedAtT>(value); }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    AccessEntry& WithModifiedAt(ModifiedAtT&& value) { SetModifiedAt(std::forward<ModifiedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata that assists with categorization and organization. Each tag consists
     * of a key and an optional value. You define both. Tags don't propagate to any
     * other cluster or Amazon Web Services resources.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    AccessEntry& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    AccessEntry& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The <code>name</code> of a user that can authenticate to your cluster.</p>
     */
    inline const Aws::String& GetUsername() const { return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    AccessEntry& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the access entry.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    AccessEntry& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_principalArn;
    bool m_principalArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_kubernetesGroups;
    bool m_kubernetesGroupsHasBeenSet = false;

    Aws::String m_accessEntryArn;
    bool m_accessEntryArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt{};
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
