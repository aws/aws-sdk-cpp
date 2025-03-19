/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/model/LicenseCountingType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager/model/AutomatedDiscoveryInformation.h>
#include <aws/license-manager/model/ConsumedLicenseSummary.h>
#include <aws/license-manager/model/ManagedResourceSummary.h>
#include <aws/license-manager/model/Tag.h>
#include <aws/license-manager/model/ProductInformation.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LicenseManager
{
namespace Model
{
  class GetLicenseConfigurationResult
  {
  public:
    AWS_LICENSEMANAGER_API GetLicenseConfigurationResult() = default;
    AWS_LICENSEMANAGER_API GetLicenseConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API GetLicenseConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Unique ID for the license configuration.</p>
     */
    inline const Aws::String& GetLicenseConfigurationId() const { return m_licenseConfigurationId; }
    template<typename LicenseConfigurationIdT = Aws::String>
    void SetLicenseConfigurationId(LicenseConfigurationIdT&& value) { m_licenseConfigurationIdHasBeenSet = true; m_licenseConfigurationId = std::forward<LicenseConfigurationIdT>(value); }
    template<typename LicenseConfigurationIdT = Aws::String>
    GetLicenseConfigurationResult& WithLicenseConfigurationId(LicenseConfigurationIdT&& value) { SetLicenseConfigurationId(std::forward<LicenseConfigurationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the license configuration.</p>
     */
    inline const Aws::String& GetLicenseConfigurationArn() const { return m_licenseConfigurationArn; }
    template<typename LicenseConfigurationArnT = Aws::String>
    void SetLicenseConfigurationArn(LicenseConfigurationArnT&& value) { m_licenseConfigurationArnHasBeenSet = true; m_licenseConfigurationArn = std::forward<LicenseConfigurationArnT>(value); }
    template<typename LicenseConfigurationArnT = Aws::String>
    GetLicenseConfigurationResult& WithLicenseConfigurationArn(LicenseConfigurationArnT&& value) { SetLicenseConfigurationArn(std::forward<LicenseConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the license configuration.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetLicenseConfigurationResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the license configuration.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetLicenseConfigurationResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Dimension for which the licenses are counted.</p>
     */
    inline LicenseCountingType GetLicenseCountingType() const { return m_licenseCountingType; }
    inline void SetLicenseCountingType(LicenseCountingType value) { m_licenseCountingTypeHasBeenSet = true; m_licenseCountingType = value; }
    inline GetLicenseConfigurationResult& WithLicenseCountingType(LicenseCountingType value) { SetLicenseCountingType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>License rules.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLicenseRules() const { return m_licenseRules; }
    template<typename LicenseRulesT = Aws::Vector<Aws::String>>
    void SetLicenseRules(LicenseRulesT&& value) { m_licenseRulesHasBeenSet = true; m_licenseRules = std::forward<LicenseRulesT>(value); }
    template<typename LicenseRulesT = Aws::Vector<Aws::String>>
    GetLicenseConfigurationResult& WithLicenseRules(LicenseRulesT&& value) { SetLicenseRules(std::forward<LicenseRulesT>(value)); return *this;}
    template<typename LicenseRulesT = Aws::String>
    GetLicenseConfigurationResult& AddLicenseRules(LicenseRulesT&& value) { m_licenseRulesHasBeenSet = true; m_licenseRules.emplace_back(std::forward<LicenseRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Number of available licenses.</p>
     */
    inline long long GetLicenseCount() const { return m_licenseCount; }
    inline void SetLicenseCount(long long value) { m_licenseCountHasBeenSet = true; m_licenseCount = value; }
    inline GetLicenseConfigurationResult& WithLicenseCount(long long value) { SetLicenseCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the number of available licenses as a hard limit.</p>
     */
    inline bool GetLicenseCountHardLimit() const { return m_licenseCountHardLimit; }
    inline void SetLicenseCountHardLimit(bool value) { m_licenseCountHardLimitHasBeenSet = true; m_licenseCountHardLimit = value; }
    inline GetLicenseConfigurationResult& WithLicenseCountHardLimit(bool value) { SetLicenseCountHardLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of licenses assigned to resources.</p>
     */
    inline long long GetConsumedLicenses() const { return m_consumedLicenses; }
    inline void SetConsumedLicenses(long long value) { m_consumedLicensesHasBeenSet = true; m_consumedLicenses = value; }
    inline GetLicenseConfigurationResult& WithConsumedLicenses(long long value) { SetConsumedLicenses(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>License configuration status.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    GetLicenseConfigurationResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Account ID of the owner of the license configuration.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const { return m_ownerAccountId; }
    template<typename OwnerAccountIdT = Aws::String>
    void SetOwnerAccountId(OwnerAccountIdT&& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = std::forward<OwnerAccountIdT>(value); }
    template<typename OwnerAccountIdT = Aws::String>
    GetLicenseConfigurationResult& WithOwnerAccountId(OwnerAccountIdT&& value) { SetOwnerAccountId(std::forward<OwnerAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Summaries of the licenses consumed by resources.</p>
     */
    inline const Aws::Vector<ConsumedLicenseSummary>& GetConsumedLicenseSummaryList() const { return m_consumedLicenseSummaryList; }
    template<typename ConsumedLicenseSummaryListT = Aws::Vector<ConsumedLicenseSummary>>
    void SetConsumedLicenseSummaryList(ConsumedLicenseSummaryListT&& value) { m_consumedLicenseSummaryListHasBeenSet = true; m_consumedLicenseSummaryList = std::forward<ConsumedLicenseSummaryListT>(value); }
    template<typename ConsumedLicenseSummaryListT = Aws::Vector<ConsumedLicenseSummary>>
    GetLicenseConfigurationResult& WithConsumedLicenseSummaryList(ConsumedLicenseSummaryListT&& value) { SetConsumedLicenseSummaryList(std::forward<ConsumedLicenseSummaryListT>(value)); return *this;}
    template<typename ConsumedLicenseSummaryListT = ConsumedLicenseSummary>
    GetLicenseConfigurationResult& AddConsumedLicenseSummaryList(ConsumedLicenseSummaryListT&& value) { m_consumedLicenseSummaryListHasBeenSet = true; m_consumedLicenseSummaryList.emplace_back(std::forward<ConsumedLicenseSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Summaries of the managed resources.</p>
     */
    inline const Aws::Vector<ManagedResourceSummary>& GetManagedResourceSummaryList() const { return m_managedResourceSummaryList; }
    template<typename ManagedResourceSummaryListT = Aws::Vector<ManagedResourceSummary>>
    void SetManagedResourceSummaryList(ManagedResourceSummaryListT&& value) { m_managedResourceSummaryListHasBeenSet = true; m_managedResourceSummaryList = std::forward<ManagedResourceSummaryListT>(value); }
    template<typename ManagedResourceSummaryListT = Aws::Vector<ManagedResourceSummary>>
    GetLicenseConfigurationResult& WithManagedResourceSummaryList(ManagedResourceSummaryListT&& value) { SetManagedResourceSummaryList(std::forward<ManagedResourceSummaryListT>(value)); return *this;}
    template<typename ManagedResourceSummaryListT = ManagedResourceSummary>
    GetLicenseConfigurationResult& AddManagedResourceSummaryList(ManagedResourceSummaryListT&& value) { m_managedResourceSummaryListHasBeenSet = true; m_managedResourceSummaryList.emplace_back(std::forward<ManagedResourceSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Tags for the license configuration.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    GetLicenseConfigurationResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    GetLicenseConfigurationResult& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Product information.</p>
     */
    inline const Aws::Vector<ProductInformation>& GetProductInformationList() const { return m_productInformationList; }
    template<typename ProductInformationListT = Aws::Vector<ProductInformation>>
    void SetProductInformationList(ProductInformationListT&& value) { m_productInformationListHasBeenSet = true; m_productInformationList = std::forward<ProductInformationListT>(value); }
    template<typename ProductInformationListT = Aws::Vector<ProductInformation>>
    GetLicenseConfigurationResult& WithProductInformationList(ProductInformationListT&& value) { SetProductInformationList(std::forward<ProductInformationListT>(value)); return *this;}
    template<typename ProductInformationListT = ProductInformation>
    GetLicenseConfigurationResult& AddProductInformationList(ProductInformationListT&& value) { m_productInformationListHasBeenSet = true; m_productInformationList.emplace_back(std::forward<ProductInformationListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Automated discovery information.</p>
     */
    inline const AutomatedDiscoveryInformation& GetAutomatedDiscoveryInformation() const { return m_automatedDiscoveryInformation; }
    template<typename AutomatedDiscoveryInformationT = AutomatedDiscoveryInformation>
    void SetAutomatedDiscoveryInformation(AutomatedDiscoveryInformationT&& value) { m_automatedDiscoveryInformationHasBeenSet = true; m_automatedDiscoveryInformation = std::forward<AutomatedDiscoveryInformationT>(value); }
    template<typename AutomatedDiscoveryInformationT = AutomatedDiscoveryInformation>
    GetLicenseConfigurationResult& WithAutomatedDiscoveryInformation(AutomatedDiscoveryInformationT&& value) { SetAutomatedDiscoveryInformation(std::forward<AutomatedDiscoveryInformationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When true, disassociates a resource when software is uninstalled.</p>
     */
    inline bool GetDisassociateWhenNotFound() const { return m_disassociateWhenNotFound; }
    inline void SetDisassociateWhenNotFound(bool value) { m_disassociateWhenNotFoundHasBeenSet = true; m_disassociateWhenNotFound = value; }
    inline GetLicenseConfigurationResult& WithDisassociateWhenNotFound(bool value) { SetDisassociateWhenNotFound(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetLicenseConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_licenseConfigurationId;
    bool m_licenseConfigurationIdHasBeenSet = false;

    Aws::String m_licenseConfigurationArn;
    bool m_licenseConfigurationArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    LicenseCountingType m_licenseCountingType{LicenseCountingType::NOT_SET};
    bool m_licenseCountingTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_licenseRules;
    bool m_licenseRulesHasBeenSet = false;

    long long m_licenseCount{0};
    bool m_licenseCountHasBeenSet = false;

    bool m_licenseCountHardLimit{false};
    bool m_licenseCountHardLimitHasBeenSet = false;

    long long m_consumedLicenses{0};
    bool m_consumedLicensesHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_ownerAccountId;
    bool m_ownerAccountIdHasBeenSet = false;

    Aws::Vector<ConsumedLicenseSummary> m_consumedLicenseSummaryList;
    bool m_consumedLicenseSummaryListHasBeenSet = false;

    Aws::Vector<ManagedResourceSummary> m_managedResourceSummaryList;
    bool m_managedResourceSummaryListHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<ProductInformation> m_productInformationList;
    bool m_productInformationListHasBeenSet = false;

    AutomatedDiscoveryInformation m_automatedDiscoveryInformation;
    bool m_automatedDiscoveryInformationHasBeenSet = false;

    bool m_disassociateWhenNotFound{false};
    bool m_disassociateWhenNotFoundHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
