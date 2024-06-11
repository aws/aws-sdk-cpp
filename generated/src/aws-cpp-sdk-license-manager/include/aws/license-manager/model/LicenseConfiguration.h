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
    AWS_LICENSEMANAGER_API LicenseConfiguration();
    AWS_LICENSEMANAGER_API LicenseConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API LicenseConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique ID of the license configuration.</p>
     */
    inline const Aws::String& GetLicenseConfigurationId() const{ return m_licenseConfigurationId; }
    inline bool LicenseConfigurationIdHasBeenSet() const { return m_licenseConfigurationIdHasBeenSet; }
    inline void SetLicenseConfigurationId(const Aws::String& value) { m_licenseConfigurationIdHasBeenSet = true; m_licenseConfigurationId = value; }
    inline void SetLicenseConfigurationId(Aws::String&& value) { m_licenseConfigurationIdHasBeenSet = true; m_licenseConfigurationId = std::move(value); }
    inline void SetLicenseConfigurationId(const char* value) { m_licenseConfigurationIdHasBeenSet = true; m_licenseConfigurationId.assign(value); }
    inline LicenseConfiguration& WithLicenseConfigurationId(const Aws::String& value) { SetLicenseConfigurationId(value); return *this;}
    inline LicenseConfiguration& WithLicenseConfigurationId(Aws::String&& value) { SetLicenseConfigurationId(std::move(value)); return *this;}
    inline LicenseConfiguration& WithLicenseConfigurationId(const char* value) { SetLicenseConfigurationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the license configuration.</p>
     */
    inline const Aws::String& GetLicenseConfigurationArn() const{ return m_licenseConfigurationArn; }
    inline bool LicenseConfigurationArnHasBeenSet() const { return m_licenseConfigurationArnHasBeenSet; }
    inline void SetLicenseConfigurationArn(const Aws::String& value) { m_licenseConfigurationArnHasBeenSet = true; m_licenseConfigurationArn = value; }
    inline void SetLicenseConfigurationArn(Aws::String&& value) { m_licenseConfigurationArnHasBeenSet = true; m_licenseConfigurationArn = std::move(value); }
    inline void SetLicenseConfigurationArn(const char* value) { m_licenseConfigurationArnHasBeenSet = true; m_licenseConfigurationArn.assign(value); }
    inline LicenseConfiguration& WithLicenseConfigurationArn(const Aws::String& value) { SetLicenseConfigurationArn(value); return *this;}
    inline LicenseConfiguration& WithLicenseConfigurationArn(Aws::String&& value) { SetLicenseConfigurationArn(std::move(value)); return *this;}
    inline LicenseConfiguration& WithLicenseConfigurationArn(const char* value) { SetLicenseConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the license configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline LicenseConfiguration& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline LicenseConfiguration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline LicenseConfiguration& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the license configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline LicenseConfiguration& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline LicenseConfiguration& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline LicenseConfiguration& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Dimension to use to track the license inventory.</p>
     */
    inline const LicenseCountingType& GetLicenseCountingType() const{ return m_licenseCountingType; }
    inline bool LicenseCountingTypeHasBeenSet() const { return m_licenseCountingTypeHasBeenSet; }
    inline void SetLicenseCountingType(const LicenseCountingType& value) { m_licenseCountingTypeHasBeenSet = true; m_licenseCountingType = value; }
    inline void SetLicenseCountingType(LicenseCountingType&& value) { m_licenseCountingTypeHasBeenSet = true; m_licenseCountingType = std::move(value); }
    inline LicenseConfiguration& WithLicenseCountingType(const LicenseCountingType& value) { SetLicenseCountingType(value); return *this;}
    inline LicenseConfiguration& WithLicenseCountingType(LicenseCountingType&& value) { SetLicenseCountingType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>License rules.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLicenseRules() const{ return m_licenseRules; }
    inline bool LicenseRulesHasBeenSet() const { return m_licenseRulesHasBeenSet; }
    inline void SetLicenseRules(const Aws::Vector<Aws::String>& value) { m_licenseRulesHasBeenSet = true; m_licenseRules = value; }
    inline void SetLicenseRules(Aws::Vector<Aws::String>&& value) { m_licenseRulesHasBeenSet = true; m_licenseRules = std::move(value); }
    inline LicenseConfiguration& WithLicenseRules(const Aws::Vector<Aws::String>& value) { SetLicenseRules(value); return *this;}
    inline LicenseConfiguration& WithLicenseRules(Aws::Vector<Aws::String>&& value) { SetLicenseRules(std::move(value)); return *this;}
    inline LicenseConfiguration& AddLicenseRules(const Aws::String& value) { m_licenseRulesHasBeenSet = true; m_licenseRules.push_back(value); return *this; }
    inline LicenseConfiguration& AddLicenseRules(Aws::String&& value) { m_licenseRulesHasBeenSet = true; m_licenseRules.push_back(std::move(value)); return *this; }
    inline LicenseConfiguration& AddLicenseRules(const char* value) { m_licenseRulesHasBeenSet = true; m_licenseRules.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Number of licenses managed by the license configuration.</p>
     */
    inline long long GetLicenseCount() const{ return m_licenseCount; }
    inline bool LicenseCountHasBeenSet() const { return m_licenseCountHasBeenSet; }
    inline void SetLicenseCount(long long value) { m_licenseCountHasBeenSet = true; m_licenseCount = value; }
    inline LicenseConfiguration& WithLicenseCount(long long value) { SetLicenseCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of available licenses as a hard limit.</p>
     */
    inline bool GetLicenseCountHardLimit() const{ return m_licenseCountHardLimit; }
    inline bool LicenseCountHardLimitHasBeenSet() const { return m_licenseCountHardLimitHasBeenSet; }
    inline void SetLicenseCountHardLimit(bool value) { m_licenseCountHardLimitHasBeenSet = true; m_licenseCountHardLimit = value; }
    inline LicenseConfiguration& WithLicenseCountHardLimit(bool value) { SetLicenseCountHardLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When true, disassociates a resource when software is uninstalled.</p>
     */
    inline bool GetDisassociateWhenNotFound() const{ return m_disassociateWhenNotFound; }
    inline bool DisassociateWhenNotFoundHasBeenSet() const { return m_disassociateWhenNotFoundHasBeenSet; }
    inline void SetDisassociateWhenNotFound(bool value) { m_disassociateWhenNotFoundHasBeenSet = true; m_disassociateWhenNotFound = value; }
    inline LicenseConfiguration& WithDisassociateWhenNotFound(bool value) { SetDisassociateWhenNotFound(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of licenses consumed. </p>
     */
    inline long long GetConsumedLicenses() const{ return m_consumedLicenses; }
    inline bool ConsumedLicensesHasBeenSet() const { return m_consumedLicensesHasBeenSet; }
    inline void SetConsumedLicenses(long long value) { m_consumedLicensesHasBeenSet = true; m_consumedLicenses = value; }
    inline LicenseConfiguration& WithConsumedLicenses(long long value) { SetConsumedLicenses(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the license configuration.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline LicenseConfiguration& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline LicenseConfiguration& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline LicenseConfiguration& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Account ID of the license configuration's owner.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const{ return m_ownerAccountId; }
    inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }
    inline void SetOwnerAccountId(const Aws::String& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = value; }
    inline void SetOwnerAccountId(Aws::String&& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = std::move(value); }
    inline void SetOwnerAccountId(const char* value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId.assign(value); }
    inline LicenseConfiguration& WithOwnerAccountId(const Aws::String& value) { SetOwnerAccountId(value); return *this;}
    inline LicenseConfiguration& WithOwnerAccountId(Aws::String&& value) { SetOwnerAccountId(std::move(value)); return *this;}
    inline LicenseConfiguration& WithOwnerAccountId(const char* value) { SetOwnerAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Summaries for licenses consumed by various resources.</p>
     */
    inline const Aws::Vector<ConsumedLicenseSummary>& GetConsumedLicenseSummaryList() const{ return m_consumedLicenseSummaryList; }
    inline bool ConsumedLicenseSummaryListHasBeenSet() const { return m_consumedLicenseSummaryListHasBeenSet; }
    inline void SetConsumedLicenseSummaryList(const Aws::Vector<ConsumedLicenseSummary>& value) { m_consumedLicenseSummaryListHasBeenSet = true; m_consumedLicenseSummaryList = value; }
    inline void SetConsumedLicenseSummaryList(Aws::Vector<ConsumedLicenseSummary>&& value) { m_consumedLicenseSummaryListHasBeenSet = true; m_consumedLicenseSummaryList = std::move(value); }
    inline LicenseConfiguration& WithConsumedLicenseSummaryList(const Aws::Vector<ConsumedLicenseSummary>& value) { SetConsumedLicenseSummaryList(value); return *this;}
    inline LicenseConfiguration& WithConsumedLicenseSummaryList(Aws::Vector<ConsumedLicenseSummary>&& value) { SetConsumedLicenseSummaryList(std::move(value)); return *this;}
    inline LicenseConfiguration& AddConsumedLicenseSummaryList(const ConsumedLicenseSummary& value) { m_consumedLicenseSummaryListHasBeenSet = true; m_consumedLicenseSummaryList.push_back(value); return *this; }
    inline LicenseConfiguration& AddConsumedLicenseSummaryList(ConsumedLicenseSummary&& value) { m_consumedLicenseSummaryListHasBeenSet = true; m_consumedLicenseSummaryList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Summaries for managed resources.</p>
     */
    inline const Aws::Vector<ManagedResourceSummary>& GetManagedResourceSummaryList() const{ return m_managedResourceSummaryList; }
    inline bool ManagedResourceSummaryListHasBeenSet() const { return m_managedResourceSummaryListHasBeenSet; }
    inline void SetManagedResourceSummaryList(const Aws::Vector<ManagedResourceSummary>& value) { m_managedResourceSummaryListHasBeenSet = true; m_managedResourceSummaryList = value; }
    inline void SetManagedResourceSummaryList(Aws::Vector<ManagedResourceSummary>&& value) { m_managedResourceSummaryListHasBeenSet = true; m_managedResourceSummaryList = std::move(value); }
    inline LicenseConfiguration& WithManagedResourceSummaryList(const Aws::Vector<ManagedResourceSummary>& value) { SetManagedResourceSummaryList(value); return *this;}
    inline LicenseConfiguration& WithManagedResourceSummaryList(Aws::Vector<ManagedResourceSummary>&& value) { SetManagedResourceSummaryList(std::move(value)); return *this;}
    inline LicenseConfiguration& AddManagedResourceSummaryList(const ManagedResourceSummary& value) { m_managedResourceSummaryListHasBeenSet = true; m_managedResourceSummaryList.push_back(value); return *this; }
    inline LicenseConfiguration& AddManagedResourceSummaryList(ManagedResourceSummary&& value) { m_managedResourceSummaryListHasBeenSet = true; m_managedResourceSummaryList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Product information.</p>
     */
    inline const Aws::Vector<ProductInformation>& GetProductInformationList() const{ return m_productInformationList; }
    inline bool ProductInformationListHasBeenSet() const { return m_productInformationListHasBeenSet; }
    inline void SetProductInformationList(const Aws::Vector<ProductInformation>& value) { m_productInformationListHasBeenSet = true; m_productInformationList = value; }
    inline void SetProductInformationList(Aws::Vector<ProductInformation>&& value) { m_productInformationListHasBeenSet = true; m_productInformationList = std::move(value); }
    inline LicenseConfiguration& WithProductInformationList(const Aws::Vector<ProductInformation>& value) { SetProductInformationList(value); return *this;}
    inline LicenseConfiguration& WithProductInformationList(Aws::Vector<ProductInformation>&& value) { SetProductInformationList(std::move(value)); return *this;}
    inline LicenseConfiguration& AddProductInformationList(const ProductInformation& value) { m_productInformationListHasBeenSet = true; m_productInformationList.push_back(value); return *this; }
    inline LicenseConfiguration& AddProductInformationList(ProductInformation&& value) { m_productInformationListHasBeenSet = true; m_productInformationList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Automated discovery information.</p>
     */
    inline const AutomatedDiscoveryInformation& GetAutomatedDiscoveryInformation() const{ return m_automatedDiscoveryInformation; }
    inline bool AutomatedDiscoveryInformationHasBeenSet() const { return m_automatedDiscoveryInformationHasBeenSet; }
    inline void SetAutomatedDiscoveryInformation(const AutomatedDiscoveryInformation& value) { m_automatedDiscoveryInformationHasBeenSet = true; m_automatedDiscoveryInformation = value; }
    inline void SetAutomatedDiscoveryInformation(AutomatedDiscoveryInformation&& value) { m_automatedDiscoveryInformationHasBeenSet = true; m_automatedDiscoveryInformation = std::move(value); }
    inline LicenseConfiguration& WithAutomatedDiscoveryInformation(const AutomatedDiscoveryInformation& value) { SetAutomatedDiscoveryInformation(value); return *this;}
    inline LicenseConfiguration& WithAutomatedDiscoveryInformation(AutomatedDiscoveryInformation&& value) { SetAutomatedDiscoveryInformation(std::move(value)); return *this;}
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

    LicenseCountingType m_licenseCountingType;
    bool m_licenseCountingTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_licenseRules;
    bool m_licenseRulesHasBeenSet = false;

    long long m_licenseCount;
    bool m_licenseCountHasBeenSet = false;

    bool m_licenseCountHardLimit;
    bool m_licenseCountHardLimitHasBeenSet = false;

    bool m_disassociateWhenNotFound;
    bool m_disassociateWhenNotFoundHasBeenSet = false;

    long long m_consumedLicenses;
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
