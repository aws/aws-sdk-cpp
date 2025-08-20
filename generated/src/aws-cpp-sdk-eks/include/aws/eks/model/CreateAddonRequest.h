/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/EKSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/ResolveConflicts.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/model/AddonNamespaceConfigRequest.h>
#include <aws/eks/model/AddonPodIdentityAssociations.h>
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
  class CreateAddonRequest : public EKSRequest
  {
  public:
    AWS_EKS_API CreateAddonRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAddon"; }

    AWS_EKS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of your cluster.</p>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    CreateAddonRequest& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the add-on. The name must match one of the names returned by
     * <code>DescribeAddonVersions</code>.</p>
     */
    inline const Aws::String& GetAddonName() const { return m_addonName; }
    inline bool AddonNameHasBeenSet() const { return m_addonNameHasBeenSet; }
    template<typename AddonNameT = Aws::String>
    void SetAddonName(AddonNameT&& value) { m_addonNameHasBeenSet = true; m_addonName = std::forward<AddonNameT>(value); }
    template<typename AddonNameT = Aws::String>
    CreateAddonRequest& WithAddonName(AddonNameT&& value) { SetAddonName(std::forward<AddonNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the add-on. The version must match one of the versions
     * returned by <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_DescribeAddonVersions.html">
     * <code>DescribeAddonVersions</code> </a>.</p>
     */
    inline const Aws::String& GetAddonVersion() const { return m_addonVersion; }
    inline bool AddonVersionHasBeenSet() const { return m_addonVersionHasBeenSet; }
    template<typename AddonVersionT = Aws::String>
    void SetAddonVersion(AddonVersionT&& value) { m_addonVersionHasBeenSet = true; m_addonVersion = std::forward<AddonVersionT>(value); }
    template<typename AddonVersionT = Aws::String>
    CreateAddonRequest& WithAddonVersion(AddonVersionT&& value) { SetAddonVersion(std::forward<AddonVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an existing IAM role to bind to the
     * add-on's service account. The role must be assigned the IAM permissions required
     * by the add-on. If you don't specify an existing IAM role, then the add-on uses
     * the permissions assigned to the node IAM role. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/create-node-role.html">Amazon
     * EKS node IAM role</a> in the <i>Amazon EKS User Guide</i>.</p>  <p>To
     * specify an existing IAM role, you must have an IAM OpenID Connect (OIDC)
     * provider created for your cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/enable-iam-roles-for-service-accounts.html">Enabling
     * IAM roles for service accounts on your cluster</a> in the <i>Amazon EKS User
     * Guide</i>.</p> 
     */
    inline const Aws::String& GetServiceAccountRoleArn() const { return m_serviceAccountRoleArn; }
    inline bool ServiceAccountRoleArnHasBeenSet() const { return m_serviceAccountRoleArnHasBeenSet; }
    template<typename ServiceAccountRoleArnT = Aws::String>
    void SetServiceAccountRoleArn(ServiceAccountRoleArnT&& value) { m_serviceAccountRoleArnHasBeenSet = true; m_serviceAccountRoleArn = std::forward<ServiceAccountRoleArnT>(value); }
    template<typename ServiceAccountRoleArnT = Aws::String>
    CreateAddonRequest& WithServiceAccountRoleArn(ServiceAccountRoleArnT&& value) { SetServiceAccountRoleArn(std::forward<ServiceAccountRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How to resolve field value conflicts for an Amazon EKS add-on. Conflicts are
     * handled based on the value you choose:</p> <ul> <li> <p> <b>None</b> – If the
     * self-managed version of the add-on is installed on your cluster, Amazon EKS
     * doesn't change the value. Creation of the add-on might fail.</p> </li> <li> <p>
     * <b>Overwrite</b> – If the self-managed version of the add-on is installed on
     * your cluster and the Amazon EKS default value is different than the existing
     * value, Amazon EKS changes the value to the Amazon EKS default value.</p> </li>
     * <li> <p> <b>Preserve</b> – This is similar to the NONE option. If the
     * self-managed version of the add-on is installed on your cluster Amazon EKS
     * doesn't change the add-on resource properties. Creation of the add-on might fail
     * if conflicts are detected. This option works differently during the update
     * operation. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_UpdateAddon.html">
     * <code>UpdateAddon</code> </a>.</p> </li> </ul> <p>If you don't currently have
     * the self-managed version of the add-on installed on your cluster, the Amazon EKS
     * add-on is installed. Amazon EKS sets all values to default values, regardless of
     * the option that you specify.</p>
     */
    inline ResolveConflicts GetResolveConflicts() const { return m_resolveConflicts; }
    inline bool ResolveConflictsHasBeenSet() const { return m_resolveConflictsHasBeenSet; }
    inline void SetResolveConflicts(ResolveConflicts value) { m_resolveConflictsHasBeenSet = true; m_resolveConflicts = value; }
    inline CreateAddonRequest& WithResolveConflicts(ResolveConflicts value) { SetResolveConflicts(value); return *this;}
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
    CreateAddonRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
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
    CreateAddonRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateAddonRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The set of configuration values for the add-on that's created. The values
     * that you provide are validated against the schema returned by
     * <code>DescribeAddonConfiguration</code>.</p>
     */
    inline const Aws::String& GetConfigurationValues() const { return m_configurationValues; }
    inline bool ConfigurationValuesHasBeenSet() const { return m_configurationValuesHasBeenSet; }
    template<typename ConfigurationValuesT = Aws::String>
    void SetConfigurationValues(ConfigurationValuesT&& value) { m_configurationValuesHasBeenSet = true; m_configurationValues = std::forward<ConfigurationValuesT>(value); }
    template<typename ConfigurationValuesT = Aws::String>
    CreateAddonRequest& WithConfigurationValues(ConfigurationValuesT&& value) { SetConfigurationValues(std::forward<ConfigurationValuesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of EKS Pod Identity associations to be created. Each association
     * maps a Kubernetes service account to an IAM role.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/add-ons-iam.html">Attach
     * an IAM Role to an Amazon EKS add-on using EKS Pod Identity</a> in the <i>Amazon
     * EKS User Guide</i>.</p>
     */
    inline const Aws::Vector<AddonPodIdentityAssociations>& GetPodIdentityAssociations() const { return m_podIdentityAssociations; }
    inline bool PodIdentityAssociationsHasBeenSet() const { return m_podIdentityAssociationsHasBeenSet; }
    template<typename PodIdentityAssociationsT = Aws::Vector<AddonPodIdentityAssociations>>
    void SetPodIdentityAssociations(PodIdentityAssociationsT&& value) { m_podIdentityAssociationsHasBeenSet = true; m_podIdentityAssociations = std::forward<PodIdentityAssociationsT>(value); }
    template<typename PodIdentityAssociationsT = Aws::Vector<AddonPodIdentityAssociations>>
    CreateAddonRequest& WithPodIdentityAssociations(PodIdentityAssociationsT&& value) { SetPodIdentityAssociations(std::forward<PodIdentityAssociationsT>(value)); return *this;}
    template<typename PodIdentityAssociationsT = AddonPodIdentityAssociations>
    CreateAddonRequest& AddPodIdentityAssociations(PodIdentityAssociationsT&& value) { m_podIdentityAssociationsHasBeenSet = true; m_podIdentityAssociations.emplace_back(std::forward<PodIdentityAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The namespace configuration for the addon. If specified, this will override
     * the default namespace for the addon.</p>
     */
    inline const AddonNamespaceConfigRequest& GetNamespaceConfig() const { return m_namespaceConfig; }
    inline bool NamespaceConfigHasBeenSet() const { return m_namespaceConfigHasBeenSet; }
    template<typename NamespaceConfigT = AddonNamespaceConfigRequest>
    void SetNamespaceConfig(NamespaceConfigT&& value) { m_namespaceConfigHasBeenSet = true; m_namespaceConfig = std::forward<NamespaceConfigT>(value); }
    template<typename NamespaceConfigT = AddonNamespaceConfigRequest>
    CreateAddonRequest& WithNamespaceConfig(NamespaceConfigT&& value) { SetNamespaceConfig(std::forward<NamespaceConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_addonName;
    bool m_addonNameHasBeenSet = false;

    Aws::String m_addonVersion;
    bool m_addonVersionHasBeenSet = false;

    Aws::String m_serviceAccountRoleArn;
    bool m_serviceAccountRoleArnHasBeenSet = false;

    ResolveConflicts m_resolveConflicts{ResolveConflicts::NOT_SET};
    bool m_resolveConflictsHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_configurationValues;
    bool m_configurationValuesHasBeenSet = false;

    Aws::Vector<AddonPodIdentityAssociations> m_podIdentityAssociations;
    bool m_podIdentityAssociationsHasBeenSet = false;

    AddonNamespaceConfigRequest m_namespaceConfig;
    bool m_namespaceConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
