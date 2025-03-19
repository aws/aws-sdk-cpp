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
#include <aws/license-manager/model/ProductInformation.h>
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
namespace LicenseManager
{
namespace Model
{

  /**
   * <p>A license configuration is an abstraction of a customer license agreement
   * that can be consumed and enforced by License Manager. Components include
   * specifications for the license type (licensing by instance, socket, CPU, or
   * vCPU), allowed tenancy (shared tenancy, Dedicated Instance, Dedicated Host, or
   * all of these), host affinity (how long a VM must be associated with a host), and
   * the number of licenses purchased and used.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/LicenseConfiguration">AWS
   * API Reference</a></p>
   */
  class LicenseConfiguration
  {
  public:
    AWS_LICENSEMANAGER_API LicenseConfiguration() = default;
    AWS_LICENSEMANAGER_API LicenseConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API LicenseConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique ID of the license configuration.</p>
     */
    inline const Aws::String& GetLicenseConfigurationId() const { return m_licenseConfigurationId; }
    inline bool LicenseConfigurationIdHasBeenSet() const { return m_licenseConfigurationIdHasBeenSet; }
    template<typename LicenseConfigurationIdT = Aws::String>
    void SetLicenseConfigurationId(LicenseConfigurationIdT&& value) { m_licenseConfigurationIdHasBeenSet = true; m_licenseConfigurationId = std::forward<LicenseConfigurationIdT>(value); }
    template<typename LicenseConfigurationIdT = Aws::String>
    LicenseConfiguration& WithLicenseConfigurationId(LicenseConfigurationIdT&& value) { SetLicenseConfigurationId(std::forward<LicenseConfigurationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the license configuration.</p>
     */
    inline const Aws::String& GetLicenseConfigurationArn() const { return m_licenseConfigurationArn; }
    inline bool LicenseConfigurationArnHasBeenSet() const { return m_licenseConfigurationArnHasBeenSet; }
    template<typename LicenseConfigurationArnT = Aws::String>
    void SetLicenseConfigurationArn(LicenseConfigurationArnT&& value) { m_licenseConfigurationArnHasBeenSet = true; m_licenseConfigurationArn = std::forward<LicenseConfigurationArnT>(value); }
    template<typename LicenseConfigurationArnT = Aws::String>
    LicenseConfiguration& WithLicenseConfigurationArn(LicenseConfigurationArnT&& value) { SetLicenseConfigurationArn(std::forward<LicenseConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the license configuration.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    LicenseConfiguration& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the license configuration.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    LicenseConfiguration& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Dimension to use to track the license inventory.</p>
     */
    inline LicenseCountingType GetLicenseCountingType() const { return m_licenseCountingType; }
    inline bool LicenseCountingTypeHasBeenSet() const { return m_licenseCountingTypeHasBeenSet; }
    inline void SetLicenseCountingType(LicenseCountingType value) { m_licenseCountingTypeHasBeenSet = true; m_licenseCountingType = value; }
    inline LicenseConfiguration& WithLicenseCountingType(LicenseCountingType value) { SetLicenseCountingType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>License rules.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLicenseRules() const { return m_licenseRules; }
    inline bool LicenseRulesHasBeenSet() const { return m_licenseRulesHasBeenSet; }
    template<typename LicenseRulesT = Aws::Vector<Aws::String>>
    void SetLicenseRules(LicenseRulesT&& value) { m_licenseRulesHasBeenSet = true; m_licenseRules = std::forward<LicenseRulesT>(value); }
    template<typename LicenseRulesT = Aws::Vector<Aws::String>>
    LicenseConfiguration& WithLicenseRules(LicenseRulesT&& value) { SetLicenseRules(std::forward<LicenseRulesT>(value)); return *this;}
    template<typename LicenseRulesT = Aws::String>
    LicenseConfiguration& AddLicenseRules(LicenseRulesT&& value) { m_licenseRulesHasBeenSet = true; m_licenseRules.emplace_back(std::forward<LicenseRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Number of licenses managed by the license configuration.</p>
     */
    inline long long GetLicenseCount() const { return m_licenseCount; }
    inline bool LicenseCountHasBeenSet() const { return m_licenseCountHasBeenSet; }
    inline void SetLicenseCount(long long value) { m_licenseCountHasBeenSet = true; m_licenseCount = value; }
    inline LicenseConfiguration& WithLicenseCount(long long value) { SetLicenseCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of available licenses as a hard limit.</p>
     */
    inline bool GetLicenseCountHardLimit() const { return m_licenseCountHardLimit; }
    inline bool LicenseCountHardLimitHasBeenSet() const { return m_licenseCountHardLimitHasBeenSet; }
    inline void SetLicenseCountHardLimit(bool value) { m_licenseCountHardLimitHasBeenSet = true; m_licenseCountHardLimit = value; }
    inline LicenseConfiguration& WithLicenseCountHardLimit(bool value) { SetLicenseCountHardLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When true, disassociates a resource when software is uninstalled.</p>
     */
    inline bool GetDisassociateWhenNotFound() const { return m_disassociateWhenNotFound; }
    inline bool DisassociateWhenNotFoundHasBeenSet() const { return m_disassociateWhenNotFoundHasBeenSet; }
    inline void SetDisassociateWhenNotFound(bool value) { m_disassociateWhenNotFoundHasBeenSet = true; m_disassociateWhenNotFound = value; }
    inline LicenseConfiguration& WithDisassociateWhenNotFound(bool value) { SetDisassociateWhenNotFound(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of licenses consumed. </p>
     */
    inline long long GetConsumedLicenses() const { return m_consumedLicenses; }
    inline bool ConsumedLicensesHasBeenSet() const { return m_consumedLicensesHasBeenSet; }
    inline void SetConsumedLicenses(long long value) { m_consumedLicensesHasBeenSet = true; m_consumedLicenses = value; }
    inline LicenseConfiguration& WithConsumedLicenses(long long value) { SetConsumedLicenses(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the license configuration.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    LicenseConfiguration& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Account ID of the license configuration's owner.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const { return m_ownerAccountId; }
    inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }
    template<typename OwnerAccountIdT = Aws::String>
    void SetOwnerAccountId(OwnerAccountIdT&& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = std::forward<OwnerAccountIdT>(value); }
    template<typename OwnerAccountIdT = Aws::String>
    LicenseConfiguration& WithOwnerAccountId(OwnerAccountIdT&& value) { SetOwnerAccountId(std::forward<OwnerAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Summaries for licenses consumed by various resources.</p>
     */
    inline const Aws::Vector<ConsumedLicenseSummary>& GetConsumedLicenseSummaryList() const { return m_consumedLicenseSummaryList; }
    inline bool ConsumedLicenseSummaryListHasBeenSet() const { return m_consumedLicenseSummaryListHasBeenSet; }
    template<typename ConsumedLicenseSummaryListT = Aws::Vector<ConsumedLicenseSummary>>
    void SetConsumedLicenseSummaryList(ConsumedLicenseSummaryListT&& value) { m_consumedLicenseSummaryListHasBeenSet = true; m_consumedLicenseSummaryList = std::forward<ConsumedLicenseSummaryListT>(value); }
    template<typename ConsumedLicenseSummaryListT = Aws::Vector<ConsumedLicenseSummary>>
    LicenseConfiguration& WithConsumedLicenseSummaryList(ConsumedLicenseSummaryListT&& value) { SetConsumedLicenseSummaryList(std::forward<ConsumedLicenseSummaryListT>(value)); return *this;}
    template<typename ConsumedLicenseSummaryListT = ConsumedLicenseSummary>
    LicenseConfiguration& AddConsumedLicenseSummaryList(ConsumedLicenseSummaryListT&& value) { m_consumedLicenseSummaryListHasBeenSet = true; m_consumedLicenseSummaryList.emplace_back(std::forward<ConsumedLicenseSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Summaries for managed resources.</p>
     */
    inline const Aws::Vector<ManagedResourceSummary>& GetManagedResourceSummaryList() const { return m_managedResourceSummaryList; }
    inline bool ManagedResourceSummaryListHasBeenSet() const { return m_managedResourceSummaryListHasBeenSet; }
    template<typename ManagedResourceSummaryListT = Aws::Vector<ManagedResourceSummary>>
    void SetManagedResourceSummaryList(ManagedResourceSummaryListT&& value) { m_managedResourceSummaryListHasBeenSet = true; m_managedResourceSummaryList = std::forward<ManagedResourceSummaryListT>(value); }
    template<typename ManagedResourceSummaryListT = Aws::Vector<ManagedResourceSummary>>
    LicenseConfiguration& WithManagedResourceSummaryList(ManagedResourceSummaryListT&& value) { SetManagedResourceSummaryList(std::forward<ManagedResourceSummaryListT>(value)); return *this;}
    template<typename ManagedResourceSummaryListT = ManagedResourceSummary>
    LicenseConfiguration& AddManagedResourceSummaryList(ManagedResourceSummaryListT&& value) { m_managedResourceSummaryListHasBeenSet = true; m_managedResourceSummaryList.emplace_back(std::forward<ManagedResourceSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Product information.</p>
     */
    inline const Aws::Vector<ProductInformation>& GetProductInformationList() const { return m_productInformationList; }
    inline bool ProductInformationListHasBeenSet() const { return m_productInformationListHasBeenSet; }
    template<typename ProductInformationListT = Aws::Vector<ProductInformation>>
    void SetProductInformationList(ProductInformationListT&& value) { m_productInformationListHasBeenSet = true; m_productInformationList = std::forward<ProductInformationListT>(value); }
    template<typename ProductInformationListT = Aws::Vector<ProductInformation>>
    LicenseConfiguration& WithProductInformationList(ProductInformationListT&& value) { SetProductInformationList(std::forward<ProductInformationListT>(value)); return *this;}
    template<typename ProductInformationListT = ProductInformation>
    LicenseConfiguration& AddProductInformationList(ProductInformationListT&& value) { m_productInformationListHasBeenSet = true; m_productInformationList.emplace_back(std::forward<ProductInformationListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Automated discovery information.</p>
     */
    inline const AutomatedDiscoveryInformation& GetAutomatedDiscoveryInformation() const { return m_automatedDiscoveryInformation; }
    inline bool AutomatedDiscoveryInformationHasBeenSet() const { return m_automatedDiscoveryInformationHasBeenSet; }
    template<typename AutomatedDiscoveryInformationT = AutomatedDiscoveryInformation>
    void SetAutomatedDiscoveryInformation(AutomatedDiscoveryInformationT&& value) { m_automatedDiscoveryInformationHasBeenSet = true; m_automatedDiscoveryInformation = std::forward<AutomatedDiscoveryInformationT>(value); }
    template<typename AutomatedDiscoveryInformationT = AutomatedDiscoveryInformation>
    LicenseConfiguration& WithAutomatedDiscoveryInformation(AutomatedDiscoveryInformationT&& value) { SetAutomatedDiscoveryInformation(std::forward<AutomatedDiscoveryInformationT>(value)); return *this;}
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

    bool m_disassociateWhenNotFound{false};
    bool m_disassociateWhenNotFoundHasBeenSet = false;

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

    Aws::Vector<ProductInformation> m_productInformationList;
    bool m_productInformationListHasBeenSet = false;

    AutomatedDiscoveryInformation m_automatedDiscoveryInformation;
    bool m_automatedDiscoveryInformationHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
