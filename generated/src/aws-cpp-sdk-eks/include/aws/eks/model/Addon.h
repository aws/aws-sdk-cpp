/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/AddonStatus.h>
#include <aws/eks/model/AddonHealth.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/eks/model/MarketplaceInformation.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/model/AddonNamespaceConfigResponse.h>
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
   * <p>An Amazon EKS add-on. For more information, see <a
   * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-add-ons.html">Amazon
   * EKS add-ons</a> in the <i>Amazon EKS User Guide</i>.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/Addon">AWS API
   * Reference</a></p>
   */
  class Addon
  {
  public:
    AWS_EKS_API Addon() = default;
    AWS_EKS_API Addon(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Addon& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the add-on.</p>
     */
    inline const Aws::String& GetAddonName() const { return m_addonName; }
    inline bool AddonNameHasBeenSet() const { return m_addonNameHasBeenSet; }
    template<typename AddonNameT = Aws::String>
    void SetAddonName(AddonNameT&& value) { m_addonNameHasBeenSet = true; m_addonName = std::forward<AddonNameT>(value); }
    template<typename AddonNameT = Aws::String>
    Addon& WithAddonName(AddonNameT&& value) { SetAddonName(std::forward<AddonNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of your cluster.</p>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    Addon& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the add-on.</p>
     */
    inline AddonStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AddonStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Addon& WithStatus(AddonStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the add-on.</p>
     */
    inline const Aws::String& GetAddonVersion() const { return m_addonVersion; }
    inline bool AddonVersionHasBeenSet() const { return m_addonVersionHasBeenSet; }
    template<typename AddonVersionT = Aws::String>
    void SetAddonVersion(AddonVersionT&& value) { m_addonVersionHasBeenSet = true; m_addonVersion = std::forward<AddonVersionT>(value); }
    template<typename AddonVersionT = Aws::String>
    Addon& WithAddonVersion(AddonVersionT&& value) { SetAddonVersion(std::forward<AddonVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents the health of the add-on.</p>
     */
    inline const AddonHealth& GetHealth() const { return m_health; }
    inline bool HealthHasBeenSet() const { return m_healthHasBeenSet; }
    template<typename HealthT = AddonHealth>
    void SetHealth(HealthT&& value) { m_healthHasBeenSet = true; m_health = std::forward<HealthT>(value); }
    template<typename HealthT = AddonHealth>
    Addon& WithHealth(HealthT&& value) { SetHealth(std::forward<HealthT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the add-on.</p>
     */
    inline const Aws::String& GetAddonArn() const { return m_addonArn; }
    inline bool AddonArnHasBeenSet() const { return m_addonArnHasBeenSet; }
    template<typename AddonArnT = Aws::String>
    void SetAddonArn(AddonArnT&& value) { m_addonArnHasBeenSet = true; m_addonArn = std::forward<AddonArnT>(value); }
    template<typename AddonArnT = Aws::String>
    Addon& WithAddonArn(AddonArnT&& value) { SetAddonArn(std::forward<AddonArnT>(value)); return *this;}
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
    Addon& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
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
    Addon& WithModifiedAt(ModifiedAtT&& value) { SetModifiedAt(std::forward<ModifiedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that's bound to the Kubernetes
     * <code>ServiceAccount</code> object that the add-on uses.</p>
     */
    inline const Aws::String& GetServiceAccountRoleArn() const { return m_serviceAccountRoleArn; }
    inline bool ServiceAccountRoleArnHasBeenSet() const { return m_serviceAccountRoleArnHasBeenSet; }
    template<typename ServiceAccountRoleArnT = Aws::String>
    void SetServiceAccountRoleArn(ServiceAccountRoleArnT&& value) { m_serviceAccountRoleArnHasBeenSet = true; m_serviceAccountRoleArn = std::forward<ServiceAccountRoleArnT>(value); }
    template<typename ServiceAccountRoleArnT = Aws::String>
    Addon& WithServiceAccountRoleArn(ServiceAccountRoleArnT&& value) { SetServiceAccountRoleArn(std::forward<ServiceAccountRoleArnT>(value)); return *this;}
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
    Addon& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    Addon& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The publisher of the add-on.</p>
     */
    inline const Aws::String& GetPublisher() const { return m_publisher; }
    inline bool PublisherHasBeenSet() const { return m_publisherHasBeenSet; }
    template<typename PublisherT = Aws::String>
    void SetPublisher(PublisherT&& value) { m_publisherHasBeenSet = true; m_publisher = std::forward<PublisherT>(value); }
    template<typename PublisherT = Aws::String>
    Addon& WithPublisher(PublisherT&& value) { SetPublisher(std::forward<PublisherT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the add-on.</p>
     */
    inline const Aws::String& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Aws::String>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Aws::String>
    Addon& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about an Amazon EKS add-on from the Amazon Web Services
     * Marketplace.</p>
     */
    inline const MarketplaceInformation& GetMarketplaceInformation() const { return m_marketplaceInformation; }
    inline bool MarketplaceInformationHasBeenSet() const { return m_marketplaceInformationHasBeenSet; }
    template<typename MarketplaceInformationT = MarketplaceInformation>
    void SetMarketplaceInformation(MarketplaceInformationT&& value) { m_marketplaceInformationHasBeenSet = true; m_marketplaceInformation = std::forward<MarketplaceInformationT>(value); }
    template<typename MarketplaceInformationT = MarketplaceInformation>
    Addon& WithMarketplaceInformation(MarketplaceInformationT&& value) { SetMarketplaceInformation(std::forward<MarketplaceInformationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration values that you provided.</p>
     */
    inline const Aws::String& GetConfigurationValues() const { return m_configurationValues; }
    inline bool ConfigurationValuesHasBeenSet() const { return m_configurationValuesHasBeenSet; }
    template<typename ConfigurationValuesT = Aws::String>
    void SetConfigurationValues(ConfigurationValuesT&& value) { m_configurationValuesHasBeenSet = true; m_configurationValues = std::forward<ConfigurationValuesT>(value); }
    template<typename ConfigurationValuesT = Aws::String>
    Addon& WithConfigurationValues(ConfigurationValuesT&& value) { SetConfigurationValues(std::forward<ConfigurationValuesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of EKS Pod Identity associations owned by the add-on. Each
     * association maps a role to a service account in a namespace in the cluster.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/add-ons-iam.html">Attach
     * an IAM Role to an Amazon EKS add-on using EKS Pod Identity</a> in the <i>Amazon
     * EKS User Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPodIdentityAssociations() const { return m_podIdentityAssociations; }
    inline bool PodIdentityAssociationsHasBeenSet() const { return m_podIdentityAssociationsHasBeenSet; }
    template<typename PodIdentityAssociationsT = Aws::Vector<Aws::String>>
    void SetPodIdentityAssociations(PodIdentityAssociationsT&& value) { m_podIdentityAssociationsHasBeenSet = true; m_podIdentityAssociations = std::forward<PodIdentityAssociationsT>(value); }
    template<typename PodIdentityAssociationsT = Aws::Vector<Aws::String>>
    Addon& WithPodIdentityAssociations(PodIdentityAssociationsT&& value) { SetPodIdentityAssociations(std::forward<PodIdentityAssociationsT>(value)); return *this;}
    template<typename PodIdentityAssociationsT = Aws::String>
    Addon& AddPodIdentityAssociations(PodIdentityAssociationsT&& value) { m_podIdentityAssociationsHasBeenSet = true; m_podIdentityAssociations.emplace_back(std::forward<PodIdentityAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The namespace configuration for the addon. This specifies the Kubernetes
     * namespace where the addon is installed.</p>
     */
    inline const AddonNamespaceConfigResponse& GetNamespaceConfig() const { return m_namespaceConfig; }
    inline bool NamespaceConfigHasBeenSet() const { return m_namespaceConfigHasBeenSet; }
    template<typename NamespaceConfigT = AddonNamespaceConfigResponse>
    void SetNamespaceConfig(NamespaceConfigT&& value) { m_namespaceConfigHasBeenSet = true; m_namespaceConfig = std::forward<NamespaceConfigT>(value); }
    template<typename NamespaceConfigT = AddonNamespaceConfigResponse>
    Addon& WithNamespaceConfig(NamespaceConfigT&& value) { SetNamespaceConfig(std::forward<NamespaceConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_addonName;
    bool m_addonNameHasBeenSet = false;

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    AddonStatus m_status{AddonStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_addonVersion;
    bool m_addonVersionHasBeenSet = false;

    AddonHealth m_health;
    bool m_healthHasBeenSet = false;

    Aws::String m_addonArn;
    bool m_addonArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt{};
    bool m_modifiedAtHasBeenSet = false;

    Aws::String m_serviceAccountRoleArn;
    bool m_serviceAccountRoleArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_publisher;
    bool m_publisherHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    MarketplaceInformation m_marketplaceInformation;
    bool m_marketplaceInformationHasBeenSet = false;

    Aws::String m_configurationValues;
    bool m_configurationValuesHasBeenSet = false;

    Aws::Vector<Aws::String> m_podIdentityAssociations;
    bool m_podIdentityAssociationsHasBeenSet = false;

    AddonNamespaceConfigResponse m_namespaceConfig;
    bool m_namespaceConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
