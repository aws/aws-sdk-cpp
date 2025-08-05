/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/EKSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class CreatePodIdentityAssociationRequest : public EKSRequest
  {
  public:
    AWS_EKS_API CreatePodIdentityAssociationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePodIdentityAssociation"; }

    AWS_EKS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the cluster to create the EKS Pod Identity association in.</p>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    CreatePodIdentityAssociationRequest& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Kubernetes namespace inside the cluster to create the EKS Pod
     * Identity association in. The service account and the Pods that use the service
     * account must be in this namespace.</p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    CreatePodIdentityAssociationRequest& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
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
    CreatePodIdentityAssociationRequest& WithServiceAccount(ServiceAccountT&& value) { SetServiceAccount(std::forward<ServiceAccountT>(value)); return *this;}
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
    CreatePodIdentityAssociationRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    CreatePodIdentityAssociationRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
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
    CreatePodIdentityAssociationRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreatePodIdentityAssociationRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Disable the automatic sessions tags that are appended by EKS Pod
     * Identity.</p> <p>EKS Pod Identity adds a pre-defined set of session tags when it
     * assumes the role. You can use these tags to author a single role that can work
     * across resources by allowing access to Amazon Web Services resources based on
     * matching tags. By default, EKS Pod Identity attaches six tags, including tags
     * for cluster name, namespace, and service account name. For the list of tags
     * added by EKS Pod Identity, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/pod-id-abac.html#pod-id-abac-tags">List
     * of session tags added by EKS Pod Identity</a> in the <i>Amazon EKS User
     * Guide</i>.</p> <p>Amazon Web Services compresses inline session policies,
     * managed policy ARNs, and session tags into a packed binary format that has a
     * separate limit. If you receive a <code>PackedPolicyTooLarge</code> error
     * indicating the packed binary format has exceeded the size limit, you can attempt
     * to reduce the size by disabling the session tags added by EKS Pod Identity.</p>
     */
    inline bool GetDisableSessionTags() const { return m_disableSessionTags; }
    inline bool DisableSessionTagsHasBeenSet() const { return m_disableSessionTagsHasBeenSet; }
    inline void SetDisableSessionTags(bool value) { m_disableSessionTagsHasBeenSet = true; m_disableSessionTags = value; }
    inline CreatePodIdentityAssociationRequest& WithDisableSessionTags(bool value) { SetDisableSessionTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the target IAM role to associate with the
     * service account. This role is assumed by using the EKS Pod Identity association
     * role, then the credentials for this role are injected into the Pod.</p> <p>When
     * you run applications on Amazon EKS, your application might need to access Amazon
     * Web Services resources from a different role that exists in the same or
     * different Amazon Web Services account. For example, your application running in
     * “Account A” might need to access resources, such as Amazon S3 buckets in
     * “Account B” or within “Account A” itself. You can create a association to access
     * Amazon Web Services resources in “Account B” by creating two IAM roles: a role
     * in “Account A” and a role in “Account B” (which can be the same or different
     * account), each with the necessary trust and permission policies. After you
     * provide these roles in the <i>IAM role</i> and <i>Target IAM role</i> fields,
     * EKS will perform role chaining to ensure your application gets the required
     * permissions. This means Role A will assume Role B, allowing your Pods to
     * securely access resources like S3 buckets in the target account.</p>
     */
    inline const Aws::String& GetTargetRoleArn() const { return m_targetRoleArn; }
    inline bool TargetRoleArnHasBeenSet() const { return m_targetRoleArnHasBeenSet; }
    template<typename TargetRoleArnT = Aws::String>
    void SetTargetRoleArn(TargetRoleArnT&& value) { m_targetRoleArnHasBeenSet = true; m_targetRoleArn = std::forward<TargetRoleArnT>(value); }
    template<typename TargetRoleArnT = Aws::String>
    CreatePodIdentityAssociationRequest& WithTargetRoleArn(TargetRoleArnT&& value) { SetTargetRoleArn(std::forward<TargetRoleArnT>(value)); return *this;}
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

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_disableSessionTags{false};
    bool m_disableSessionTagsHasBeenSet = false;

    Aws::String m_targetRoleArn;
    bool m_targetRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
