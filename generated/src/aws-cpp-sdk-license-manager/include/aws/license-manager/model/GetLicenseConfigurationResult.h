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
    AWS_LICENSEMANAGER_API GetLicenseConfigurationResult();
    AWS_LICENSEMANAGER_API GetLicenseConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API GetLicenseConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Unique ID for the license configuration.</p>
     */
    inline const Aws::String& GetLicenseConfigurationId() const{ return m_licenseConfigurationId; }
    inline void SetLicenseConfigurationId(const Aws::String& value) { m_licenseConfigurationId = value; }
    inline void SetLicenseConfigurationId(Aws::String&& value) { m_licenseConfigurationId = std::move(value); }
    inline void SetLicenseConfigurationId(const char* value) { m_licenseConfigurationId.assign(value); }
    inline GetLicenseConfigurationResult& WithLicenseConfigurationId(const Aws::String& value) { SetLicenseConfigurationId(value); return *this;}
    inline GetLicenseConfigurationResult& WithLicenseConfigurationId(Aws::String&& value) { SetLicenseConfigurationId(std::move(value)); return *this;}
    inline GetLicenseConfigurationResult& WithLicenseConfigurationId(const char* value) { SetLicenseConfigurationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the license configuration.</p>
     */
    inline const Aws::String& GetLicenseConfigurationArn() const{ return m_licenseConfigurationArn; }
    inline void SetLicenseConfigurationArn(const Aws::String& value) { m_licenseConfigurationArn = value; }
    inline void SetLicenseConfigurationArn(Aws::String&& value) { m_licenseConfigurationArn = std::move(value); }
    inline void SetLicenseConfigurationArn(const char* value) { m_licenseConfigurationArn.assign(value); }
    inline GetLicenseConfigurationResult& WithLicenseConfigurationArn(const Aws::String& value) { SetLicenseConfigurationArn(value); return *this;}
    inline GetLicenseConfigurationResult& WithLicenseConfigurationArn(Aws::String&& value) { SetLicenseConfigurationArn(std::move(value)); return *this;}
    inline GetLicenseConfigurationResult& WithLicenseConfigurationArn(const char* value) { SetLicenseConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the license configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetLicenseConfigurationResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetLicenseConfigurationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetLicenseConfigurationResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the license configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetLicenseConfigurationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetLicenseConfigurationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetLicenseConfigurationResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Dimension for which the licenses are counted.</p>
     */
    inline const LicenseCountingType& GetLicenseCountingType() const{ return m_licenseCountingType; }
    inline void SetLicenseCountingType(const LicenseCountingType& value) { m_licenseCountingType = value; }
    inline void SetLicenseCountingType(LicenseCountingType&& value) { m_licenseCountingType = std::move(value); }
    inline GetLicenseConfigurationResult& WithLicenseCountingType(const LicenseCountingType& value) { SetLicenseCountingType(value); return *this;}
    inline GetLicenseConfigurationResult& WithLicenseCountingType(LicenseCountingType&& value) { SetLicenseCountingType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>License rules.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLicenseRules() const{ return m_licenseRules; }
    inline void SetLicenseRules(const Aws::Vector<Aws::String>& value) { m_licenseRules = value; }
    inline void SetLicenseRules(Aws::Vector<Aws::String>&& value) { m_licenseRules = std::move(value); }
    inline GetLicenseConfigurationResult& WithLicenseRules(const Aws::Vector<Aws::String>& value) { SetLicenseRules(value); return *this;}
    inline GetLicenseConfigurationResult& WithLicenseRules(Aws::Vector<Aws::String>&& value) { SetLicenseRules(std::move(value)); return *this;}
    inline GetLicenseConfigurationResult& AddLicenseRules(const Aws::String& value) { m_licenseRules.push_back(value); return *this; }
    inline GetLicenseConfigurationResult& AddLicenseRules(Aws::String&& value) { m_licenseRules.push_back(std::move(value)); return *this; }
    inline GetLicenseConfigurationResult& AddLicenseRules(const char* value) { m_licenseRules.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Number of available licenses.</p>
     */
    inline long long GetLicenseCount() const{ return m_licenseCount; }
    inline void SetLicenseCount(long long value) { m_licenseCount = value; }
    inline GetLicenseConfigurationResult& WithLicenseCount(long long value) { SetLicenseCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the number of available licenses as a hard limit.</p>
     */
    inline bool GetLicenseCountHardLimit() const{ return m_licenseCountHardLimit; }
    inline void SetLicenseCountHardLimit(bool value) { m_licenseCountHardLimit = value; }
    inline GetLicenseConfigurationResult& WithLicenseCountHardLimit(bool value) { SetLicenseCountHardLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of licenses assigned to resources.</p>
     */
    inline long long GetConsumedLicenses() const{ return m_consumedLicenses; }
    inline void SetConsumedLicenses(long long value) { m_consumedLicenses = value; }
    inline GetLicenseConfigurationResult& WithConsumedLicenses(long long value) { SetConsumedLicenses(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>License configuration status.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline void SetStatus(const Aws::String& value) { m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_status.assign(value); }
    inline GetLicenseConfigurationResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline GetLicenseConfigurationResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline GetLicenseConfigurationResult& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Account ID of the owner of the license configuration.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const{ return m_ownerAccountId; }
    inline void SetOwnerAccountId(const Aws::String& value) { m_ownerAccountId = value; }
    inline void SetOwnerAccountId(Aws::String&& value) { m_ownerAccountId = std::move(value); }
    inline void SetOwnerAccountId(const char* value) { m_ownerAccountId.assign(value); }
    inline GetLicenseConfigurationResult& WithOwnerAccountId(const Aws::String& value) { SetOwnerAccountId(value); return *this;}
    inline GetLicenseConfigurationResult& WithOwnerAccountId(Aws::String&& value) { SetOwnerAccountId(std::move(value)); return *this;}
    inline GetLicenseConfigurationResult& WithOwnerAccountId(const char* value) { SetOwnerAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Summaries of the licenses consumed by resources.</p>
     */
    inline const Aws::Vector<ConsumedLicenseSummary>& GetConsumedLicenseSummaryList() const{ return m_consumedLicenseSummaryList; }
    inline void SetConsumedLicenseSummaryList(const Aws::Vector<ConsumedLicenseSummary>& value) { m_consumedLicenseSummaryList = value; }
    inline void SetConsumedLicenseSummaryList(Aws::Vector<ConsumedLicenseSummary>&& value) { m_consumedLicenseSummaryList = std::move(value); }
    inline GetLicenseConfigurationResult& WithConsumedLicenseSummaryList(const Aws::Vector<ConsumedLicenseSummary>& value) { SetConsumedLicenseSummaryList(value); return *this;}
    inline GetLicenseConfigurationResult& WithConsumedLicenseSummaryList(Aws::Vector<ConsumedLicenseSummary>&& value) { SetConsumedLicenseSummaryList(std::move(value)); return *this;}
    inline GetLicenseConfigurationResult& AddConsumedLicenseSummaryList(const ConsumedLicenseSummary& value) { m_consumedLicenseSummaryList.push_back(value); return *this; }
    inline GetLicenseConfigurationResult& AddConsumedLicenseSummaryList(ConsumedLicenseSummary&& value) { m_consumedLicenseSummaryList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Summaries of the managed resources.</p>
     */
    inline const Aws::Vector<ManagedResourceSummary>& GetManagedResourceSummaryList() const{ return m_managedResourceSummaryList; }
    inline void SetManagedResourceSummaryList(const Aws::Vector<ManagedResourceSummary>& value) { m_managedResourceSummaryList = value; }
    inline void SetManagedResourceSummaryList(Aws::Vector<ManagedResourceSummary>&& value) { m_managedResourceSummaryList = std::move(value); }
    inline GetLicenseConfigurationResult& WithManagedResourceSummaryList(const Aws::Vector<ManagedResourceSummary>& value) { SetManagedResourceSummaryList(value); return *this;}
    inline GetLicenseConfigurationResult& WithManagedResourceSummaryList(Aws::Vector<ManagedResourceSummary>&& value) { SetManagedResourceSummaryList(std::move(value)); return *this;}
    inline GetLicenseConfigurationResult& AddManagedResourceSummaryList(const ManagedResourceSummary& value) { m_managedResourceSummaryList.push_back(value); return *this; }
    inline GetLicenseConfigurationResult& AddManagedResourceSummaryList(ManagedResourceSummary&& value) { m_managedResourceSummaryList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Tags for the license configuration.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }
    inline GetLicenseConfigurationResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline GetLicenseConfigurationResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline GetLicenseConfigurationResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }
    inline GetLicenseConfigurationResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Product information.</p>
     */
    inline const Aws::Vector<ProductInformation>& GetProductInformationList() const{ return m_productInformationList; }
    inline void SetProductInformationList(const Aws::Vector<ProductInformation>& value) { m_productInformationList = value; }
    inline void SetProductInformationList(Aws::Vector<ProductInformation>&& value) { m_productInformationList = std::move(value); }
    inline GetLicenseConfigurationResult& WithProductInformationList(const Aws::Vector<ProductInformation>& value) { SetProductInformationList(value); return *this;}
    inline GetLicenseConfigurationResult& WithProductInformationList(Aws::Vector<ProductInformation>&& value) { SetProductInformationList(std::move(value)); return *this;}
    inline GetLicenseConfigurationResult& AddProductInformationList(const ProductInformation& value) { m_productInformationList.push_back(value); return *this; }
    inline GetLicenseConfigurationResult& AddProductInformationList(ProductInformation&& value) { m_productInformationList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Automated discovery information.</p>
     */
    inline const AutomatedDiscoveryInformation& GetAutomatedDiscoveryInformation() const{ return m_automatedDiscoveryInformation; }
    inline void SetAutomatedDiscoveryInformation(const AutomatedDiscoveryInformation& value) { m_automatedDiscoveryInformation = value; }
    inline void SetAutomatedDiscoveryInformation(AutomatedDiscoveryInformation&& value) { m_automatedDiscoveryInformation = std::move(value); }
    inline GetLicenseConfigurationResult& WithAutomatedDiscoveryInformation(const AutomatedDiscoveryInformation& value) { SetAutomatedDiscoveryInformation(value); return *this;}
    inline GetLicenseConfigurationResult& WithAutomatedDiscoveryInformation(AutomatedDiscoveryInformation&& value) { SetAutomatedDiscoveryInformation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When true, disassociates a resource when software is uninstalled.</p>
     */
    inline bool GetDisassociateWhenNotFound() const{ return m_disassociateWhenNotFound; }
    inline void SetDisassociateWhenNotFound(bool value) { m_disassociateWhenNotFound = value; }
    inline GetLicenseConfigurationResult& WithDisassociateWhenNotFound(bool value) { SetDisassociateWhenNotFound(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetLicenseConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetLicenseConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetLicenseConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_licenseConfigurationId;

    Aws::String m_licenseConfigurationArn;

    Aws::String m_name;

    Aws::String m_description;

    LicenseCountingType m_licenseCountingType;

    Aws::Vector<Aws::String> m_licenseRules;

    long long m_licenseCount;

    bool m_licenseCountHardLimit;

    long long m_consumedLicenses;

    Aws::String m_status;

    Aws::String m_ownerAccountId;

    Aws::Vector<ConsumedLicenseSummary> m_consumedLicenseSummaryList;

    Aws::Vector<ManagedResourceSummary> m_managedResourceSummaryList;

    Aws::Vector<Tag> m_tags;

    Aws::Vector<ProductInformation> m_productInformationList;

    AutomatedDiscoveryInformation m_automatedDiscoveryInformation;

    bool m_disassociateWhenNotFound;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
