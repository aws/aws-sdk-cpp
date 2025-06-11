/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Amazon EKS Pod Identity associations provide the ability to manage
   * credentials for your applications, similar to the way that Amazon EC2 instance
   * profiles provide credentials to Amazon EC2 instances.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/PodIdentityAssociation">AWS
   * API Reference</a></p>
   */
  class PodIdentityAssociation
  {
  public:
    AWS_EKS_API PodIdentityAssociation() = default;
    AWS_EKS_API PodIdentityAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API PodIdentityAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the cluster that the association is in.</p>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    PodIdentityAssociation& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Kubernetes namespace inside the cluster to create the
     * association in. The service account and the Pods that use the service account
     * must be in this namespace.</p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    PodIdentityAssociation& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Kubernetes service account inside the cluster to associate
     * the IAM credentials with.</p>
     */
    inline const Aws::String& GetServiceAccount() const { return m_serviceAccount; }
    inline bool ServiceAccountHasBeenSet() const { return m_serviceAccountHasBeenSet; }
    template<typename ServiceAccountT = Aws::String>
    void SetServiceAccount(ServiceAccountT&& value) { m_serviceAccountHasBeenSet = true; m_serviceAccount = std::forward<ServiceAccountT>(value); }
    template<typename ServiceAccountT = Aws::String>
    PodIdentityAssociation& WithServiceAccount(ServiceAccountT&& value) { SetServiceAccount(std::forward<ServiceAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to associate with the service
     * account. The EKS Pod Identity agent manages credentials to assume this role for
     * applications in the containers in the Pods that use this service account.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    PodIdentityAssociation& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the association.</p>
     */
    inline const Aws::String& GetAssociationArn() const { return m_associationArn; }
    inline bool AssociationArnHasBeenSet() const { return m_associationArnHasBeenSet; }
    template<typename AssociationArnT = Aws::String>
    void SetAssociationArn(AssociationArnT&& value) { m_associationArnHasBeenSet = true; m_associationArn = std::forward<AssociationArnT>(value); }
    template<typename AssociationArnT = Aws::String>
    PodIdentityAssociation& WithAssociationArn(AssociationArnT&& value) { SetAssociationArn(std::forward<AssociationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the association.</p>
     */
    inline const Aws::String& GetAssociationId() const { return m_associationId; }
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
    template<typename AssociationIdT = Aws::String>
    void SetAssociationId(AssociationIdT&& value) { m_associationIdHasBeenSet = true; m_associationId = std::forward<AssociationIdT>(value); }
    template<typename AssociationIdT = Aws::String>
    PodIdentityAssociation& WithAssociationId(AssociationIdT&& value) { SetAssociationId(std::forward<AssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata that assists with categorization and organization. Each tag consists
     * of a key and an optional value. You define both. Tags don't propagate to any
     * other cluster or Amazon Web Services resources.</p> <p>The following basic
     * restrictions apply to tags:</p> <ul> <li> <p>Maximum number of tags per resource
     * – 50</p> </li> <li> <p>For each resource, each tag key must be unique, and each
     * tag key can have only one value.</p> </li> <li> <p>Maximum key length – 128
     * Unicode characters in UTF-8</p> </li> <li> <p>Maximum value length – 256 Unicode
     * characters in UTF-8</p> </li> <li> <p>If your tagging schema is used across
     * multiple services and resources, remember that other services may have
     * restrictions on allowed characters. Generally allowed characters are: letters,
     * numbers, and spaces representable in UTF-8, and the following characters: + - =
     * . _ : / @.</p> </li> <li> <p>Tag keys and values are case-sensitive.</p> </li>
     * <li> <p>Do not use <code>aws:</code>, <code>AWS:</code>, or any upper or
     * lowercase combination of such as a prefix for either keys or values as it is
     * reserved for Amazon Web Services use. You cannot edit or delete tag keys or
     * values with this prefix. Tags with this prefix do not count against your tags
     * per resource limit.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    PodIdentityAssociation& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    PodIdentityAssociation& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The timestamp that the association was created at.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    PodIdentityAssociation& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent timestamp that the association was modified at.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    void SetModifiedAt(ModifiedAtT&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::forward<ModifiedAtT>(value); }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    PodIdentityAssociation& WithModifiedAt(ModifiedAtT&& value) { SetModifiedAt(std::forward<ModifiedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If defined, the EKS Pod Identity association is owned by an Amazon EKS
     * add-on.</p>
     */
    inline const Aws::String& GetOwnerArn() const { return m_ownerArn; }
    inline bool OwnerArnHasBeenSet() const { return m_ownerArnHasBeenSet; }
    template<typename OwnerArnT = Aws::String>
    void SetOwnerArn(OwnerArnT&& value) { m_ownerArnHasBeenSet = true; m_ownerArn = std::forward<OwnerArnT>(value); }
    template<typename OwnerArnT = Aws::String>
    PodIdentityAssociation& WithOwnerArn(OwnerArnT&& value) { SetOwnerArn(std::forward<OwnerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the automatic sessions tags. The value of <i>true</i> disables
     * these tags.</p> <p>EKS Pod Identity adds a pre-defined set of session tags when
     * it assumes the role. You can use these tags to author a single role that can
     * work across resources by allowing access to Amazon Web Services resources based
     * on matching tags. By default, EKS Pod Identity attaches six tags, including tags
     * for cluster name, namespace, and service account name. For the list of tags
     * added by EKS Pod Identity, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/pod-id-abac.html#pod-id-abac-tags">List
     * of session tags added by EKS Pod Identity</a> in the <i>Amazon EKS User
     * Guide</i>.</p>
     */
    inline bool GetDisableSessionTags() const { return m_disableSessionTags; }
    inline bool DisableSessionTagsHasBeenSet() const { return m_disableSessionTagsHasBeenSet; }
    inline void SetDisableSessionTags(bool value) { m_disableSessionTagsHasBeenSet = true; m_disableSessionTags = value; }
    inline PodIdentityAssociation& WithDisableSessionTags(bool value) { SetDisableSessionTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the target IAM role to associate with the
     * service account. This role is assumed by using the EKS Pod Identity association
     * role, then the credentials for this role are injected into the Pod.</p>
     */
    inline const Aws::String& GetTargetRoleArn() const { return m_targetRoleArn; }
    inline bool TargetRoleArnHasBeenSet() const { return m_targetRoleArnHasBeenSet; }
    template<typename TargetRoleArnT = Aws::String>
    void SetTargetRoleArn(TargetRoleArnT&& value) { m_targetRoleArnHasBeenSet = true; m_targetRoleArn = std::forward<TargetRoleArnT>(value); }
    template<typename TargetRoleArnT = Aws::String>
    PodIdentityAssociation& WithTargetRoleArn(TargetRoleArnT&& value) { SetTargetRoleArn(std::forward<TargetRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for this EKS Pod Identity association for a target IAM
     * role. You put this value in the trust policy of the target role, in a
     * <code>Condition</code> to match the <code>sts.ExternalId</code>. This ensures
     * that the target role can only be assumed by this association. This prevents the
     * <i>confused deputy problem</i>. For more information about the confused deputy
     * problem, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/confused-deputy.html">The
     * confused deputy problem</a> in the <i>IAM User Guide</i>.</p> <p>If you want to
     * use the same target role with multiple associations or other roles, use
     * independent statements in the trust policy to allow <code>sts:AssumeRole</code>
     * access from each role.</p>
     */
    inline const Aws::String& GetExternalId() const { return m_externalId; }
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
    template<typename ExternalIdT = Aws::String>
    void SetExternalId(ExternalIdT&& value) { m_externalIdHasBeenSet = true; m_externalId = std::forward<ExternalIdT>(value); }
    template<typename ExternalIdT = Aws::String>
    PodIdentityAssociation& WithExternalId(ExternalIdT&& value) { SetExternalId(std::forward<ExternalIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_serviceAccount;
    bool m_serviceAccountHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_associationArn;
    bool m_associationArnHasBeenSet = false;

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt{};
    bool m_modifiedAtHasBeenSet = false;

    Aws::String m_ownerArn;
    bool m_ownerArnHasBeenSet = false;

    bool m_disableSessionTags{false};
    bool m_disableSessionTagsHasBeenSet = false;

    Aws::String m_targetRoleArn;
    bool m_targetRoleArnHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
