/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/model/MarketplaceInformation.h>
#include <aws/eks/model/AddonVersionInfo.h>
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
   * <p>Information about an add-on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/AddonInfo">AWS API
   * Reference</a></p>
   */
  class AddonInfo
  {
  public:
    AWS_EKS_API AddonInfo() = default;
    AWS_EKS_API AddonInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API AddonInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    AddonInfo& WithAddonName(AddonNameT&& value) { SetAddonName(std::forward<AddonNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the add-on.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    AddonInfo& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object representing information about available add-on versions and
     * compatible Kubernetes versions.</p>
     */
    inline const Aws::Vector<AddonVersionInfo>& GetAddonVersions() const { return m_addonVersions; }
    inline bool AddonVersionsHasBeenSet() const { return m_addonVersionsHasBeenSet; }
    template<typename AddonVersionsT = Aws::Vector<AddonVersionInfo>>
    void SetAddonVersions(AddonVersionsT&& value) { m_addonVersionsHasBeenSet = true; m_addonVersions = std::forward<AddonVersionsT>(value); }
    template<typename AddonVersionsT = Aws::Vector<AddonVersionInfo>>
    AddonInfo& WithAddonVersions(AddonVersionsT&& value) { SetAddonVersions(std::forward<AddonVersionsT>(value)); return *this;}
    template<typename AddonVersionsT = AddonVersionInfo>
    AddonInfo& AddAddonVersions(AddonVersionsT&& value) { m_addonVersionsHasBeenSet = true; m_addonVersions.emplace_back(std::forward<AddonVersionsT>(value)); return *this; }
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
    AddonInfo& WithPublisher(PublisherT&& value) { SetPublisher(std::forward<PublisherT>(value)); return *this;}
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
    AddonInfo& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the add-on from the Amazon Web Services Marketplace.</p>
     */
    inline const MarketplaceInformation& GetMarketplaceInformation() const { return m_marketplaceInformation; }
    inline bool MarketplaceInformationHasBeenSet() const { return m_marketplaceInformationHasBeenSet; }
    template<typename MarketplaceInformationT = MarketplaceInformation>
    void SetMarketplaceInformation(MarketplaceInformationT&& value) { m_marketplaceInformationHasBeenSet = true; m_marketplaceInformation = std::forward<MarketplaceInformationT>(value); }
    template<typename MarketplaceInformationT = MarketplaceInformation>
    AddonInfo& WithMarketplaceInformation(MarketplaceInformationT&& value) { SetMarketplaceInformation(std::forward<MarketplaceInformationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default Kubernetes namespace where this addon is typically installed if
     * no custom namespace is specified.</p>
     */
    inline const Aws::String& GetDefaultNamespace() const { return m_defaultNamespace; }
    inline bool DefaultNamespaceHasBeenSet() const { return m_defaultNamespaceHasBeenSet; }
    template<typename DefaultNamespaceT = Aws::String>
    void SetDefaultNamespace(DefaultNamespaceT&& value) { m_defaultNamespaceHasBeenSet = true; m_defaultNamespace = std::forward<DefaultNamespaceT>(value); }
    template<typename DefaultNamespaceT = Aws::String>
    AddonInfo& WithDefaultNamespace(DefaultNamespaceT&& value) { SetDefaultNamespace(std::forward<DefaultNamespaceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_addonName;
    bool m_addonNameHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<AddonVersionInfo> m_addonVersions;
    bool m_addonVersionsHasBeenSet = false;

    Aws::String m_publisher;
    bool m_publisherHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    MarketplaceInformation m_marketplaceInformation;
    bool m_marketplaceInformationHasBeenSet = false;

    Aws::String m_defaultNamespace;
    bool m_defaultNamespaceHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
