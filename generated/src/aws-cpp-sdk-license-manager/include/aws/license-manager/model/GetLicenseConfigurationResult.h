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


    /**
     * <p>Unique ID for the license configuration.</p>
     */
    inline const Aws::String& GetLicenseConfigurationId() const{ return m_licenseConfigurationId; }

    /**
     * <p>Unique ID for the license configuration.</p>
     */
    inline void SetLicenseConfigurationId(const Aws::String& value) { m_licenseConfigurationId = value; }

    /**
     * <p>Unique ID for the license configuration.</p>
     */
    inline void SetLicenseConfigurationId(Aws::String&& value) { m_licenseConfigurationId = std::move(value); }

    /**
     * <p>Unique ID for the license configuration.</p>
     */
    inline void SetLicenseConfigurationId(const char* value) { m_licenseConfigurationId.assign(value); }

    /**
     * <p>Unique ID for the license configuration.</p>
     */
    inline GetLicenseConfigurationResult& WithLicenseConfigurationId(const Aws::String& value) { SetLicenseConfigurationId(value); return *this;}

    /**
     * <p>Unique ID for the license configuration.</p>
     */
    inline GetLicenseConfigurationResult& WithLicenseConfigurationId(Aws::String&& value) { SetLicenseConfigurationId(std::move(value)); return *this;}

    /**
     * <p>Unique ID for the license configuration.</p>
     */
    inline GetLicenseConfigurationResult& WithLicenseConfigurationId(const char* value) { SetLicenseConfigurationId(value); return *this;}


    /**
     * <p>Amazon Resource Name (ARN) of the license configuration.</p>
     */
    inline const Aws::String& GetLicenseConfigurationArn() const{ return m_licenseConfigurationArn; }

    /**
     * <p>Amazon Resource Name (ARN) of the license configuration.</p>
     */
    inline void SetLicenseConfigurationArn(const Aws::String& value) { m_licenseConfigurationArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the license configuration.</p>
     */
    inline void SetLicenseConfigurationArn(Aws::String&& value) { m_licenseConfigurationArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the license configuration.</p>
     */
    inline void SetLicenseConfigurationArn(const char* value) { m_licenseConfigurationArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the license configuration.</p>
     */
    inline GetLicenseConfigurationResult& WithLicenseConfigurationArn(const Aws::String& value) { SetLicenseConfigurationArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the license configuration.</p>
     */
    inline GetLicenseConfigurationResult& WithLicenseConfigurationArn(Aws::String&& value) { SetLicenseConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the license configuration.</p>
     */
    inline GetLicenseConfigurationResult& WithLicenseConfigurationArn(const char* value) { SetLicenseConfigurationArn(value); return *this;}


    /**
     * <p>Name of the license configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of the license configuration.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>Name of the license configuration.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>Name of the license configuration.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>Name of the license configuration.</p>
     */
    inline GetLicenseConfigurationResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of the license configuration.</p>
     */
    inline GetLicenseConfigurationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name of the license configuration.</p>
     */
    inline GetLicenseConfigurationResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Description of the license configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Description of the license configuration.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>Description of the license configuration.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>Description of the license configuration.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>Description of the license configuration.</p>
     */
    inline GetLicenseConfigurationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Description of the license configuration.</p>
     */
    inline GetLicenseConfigurationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Description of the license configuration.</p>
     */
    inline GetLicenseConfigurationResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Dimension for which the licenses are counted.</p>
     */
    inline const LicenseCountingType& GetLicenseCountingType() const{ return m_licenseCountingType; }

    /**
     * <p>Dimension for which the licenses are counted.</p>
     */
    inline void SetLicenseCountingType(const LicenseCountingType& value) { m_licenseCountingType = value; }

    /**
     * <p>Dimension for which the licenses are counted.</p>
     */
    inline void SetLicenseCountingType(LicenseCountingType&& value) { m_licenseCountingType = std::move(value); }

    /**
     * <p>Dimension for which the licenses are counted.</p>
     */
    inline GetLicenseConfigurationResult& WithLicenseCountingType(const LicenseCountingType& value) { SetLicenseCountingType(value); return *this;}

    /**
     * <p>Dimension for which the licenses are counted.</p>
     */
    inline GetLicenseConfigurationResult& WithLicenseCountingType(LicenseCountingType&& value) { SetLicenseCountingType(std::move(value)); return *this;}


    /**
     * <p>License rules.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLicenseRules() const{ return m_licenseRules; }

    /**
     * <p>License rules.</p>
     */
    inline void SetLicenseRules(const Aws::Vector<Aws::String>& value) { m_licenseRules = value; }

    /**
     * <p>License rules.</p>
     */
    inline void SetLicenseRules(Aws::Vector<Aws::String>&& value) { m_licenseRules = std::move(value); }

    /**
     * <p>License rules.</p>
     */
    inline GetLicenseConfigurationResult& WithLicenseRules(const Aws::Vector<Aws::String>& value) { SetLicenseRules(value); return *this;}

    /**
     * <p>License rules.</p>
     */
    inline GetLicenseConfigurationResult& WithLicenseRules(Aws::Vector<Aws::String>&& value) { SetLicenseRules(std::move(value)); return *this;}

    /**
     * <p>License rules.</p>
     */
    inline GetLicenseConfigurationResult& AddLicenseRules(const Aws::String& value) { m_licenseRules.push_back(value); return *this; }

    /**
     * <p>License rules.</p>
     */
    inline GetLicenseConfigurationResult& AddLicenseRules(Aws::String&& value) { m_licenseRules.push_back(std::move(value)); return *this; }

    /**
     * <p>License rules.</p>
     */
    inline GetLicenseConfigurationResult& AddLicenseRules(const char* value) { m_licenseRules.push_back(value); return *this; }


    /**
     * <p>Number of available licenses.</p>
     */
    inline long long GetLicenseCount() const{ return m_licenseCount; }

    /**
     * <p>Number of available licenses.</p>
     */
    inline void SetLicenseCount(long long value) { m_licenseCount = value; }

    /**
     * <p>Number of available licenses.</p>
     */
    inline GetLicenseConfigurationResult& WithLicenseCount(long long value) { SetLicenseCount(value); return *this;}


    /**
     * <p>Sets the number of available licenses as a hard limit.</p>
     */
    inline bool GetLicenseCountHardLimit() const{ return m_licenseCountHardLimit; }

    /**
     * <p>Sets the number of available licenses as a hard limit.</p>
     */
    inline void SetLicenseCountHardLimit(bool value) { m_licenseCountHardLimit = value; }

    /**
     * <p>Sets the number of available licenses as a hard limit.</p>
     */
    inline GetLicenseConfigurationResult& WithLicenseCountHardLimit(bool value) { SetLicenseCountHardLimit(value); return *this;}


    /**
     * <p>Number of licenses assigned to resources.</p>
     */
    inline long long GetConsumedLicenses() const{ return m_consumedLicenses; }

    /**
     * <p>Number of licenses assigned to resources.</p>
     */
    inline void SetConsumedLicenses(long long value) { m_consumedLicenses = value; }

    /**
     * <p>Number of licenses assigned to resources.</p>
     */
    inline GetLicenseConfigurationResult& WithConsumedLicenses(long long value) { SetConsumedLicenses(value); return *this;}


    /**
     * <p>License configuration status.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>License configuration status.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /**
     * <p>License configuration status.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

    /**
     * <p>License configuration status.</p>
     */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /**
     * <p>License configuration status.</p>
     */
    inline GetLicenseConfigurationResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>License configuration status.</p>
     */
    inline GetLicenseConfigurationResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>License configuration status.</p>
     */
    inline GetLicenseConfigurationResult& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>Account ID of the owner of the license configuration.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const{ return m_ownerAccountId; }

    /**
     * <p>Account ID of the owner of the license configuration.</p>
     */
    inline void SetOwnerAccountId(const Aws::String& value) { m_ownerAccountId = value; }

    /**
     * <p>Account ID of the owner of the license configuration.</p>
     */
    inline void SetOwnerAccountId(Aws::String&& value) { m_ownerAccountId = std::move(value); }

    /**
     * <p>Account ID of the owner of the license configuration.</p>
     */
    inline void SetOwnerAccountId(const char* value) { m_ownerAccountId.assign(value); }

    /**
     * <p>Account ID of the owner of the license configuration.</p>
     */
    inline GetLicenseConfigurationResult& WithOwnerAccountId(const Aws::String& value) { SetOwnerAccountId(value); return *this;}

    /**
     * <p>Account ID of the owner of the license configuration.</p>
     */
    inline GetLicenseConfigurationResult& WithOwnerAccountId(Aws::String&& value) { SetOwnerAccountId(std::move(value)); return *this;}

    /**
     * <p>Account ID of the owner of the license configuration.</p>
     */
    inline GetLicenseConfigurationResult& WithOwnerAccountId(const char* value) { SetOwnerAccountId(value); return *this;}


    /**
     * <p>Summaries of the licenses consumed by resources.</p>
     */
    inline const Aws::Vector<ConsumedLicenseSummary>& GetConsumedLicenseSummaryList() const{ return m_consumedLicenseSummaryList; }

    /**
     * <p>Summaries of the licenses consumed by resources.</p>
     */
    inline void SetConsumedLicenseSummaryList(const Aws::Vector<ConsumedLicenseSummary>& value) { m_consumedLicenseSummaryList = value; }

    /**
     * <p>Summaries of the licenses consumed by resources.</p>
     */
    inline void SetConsumedLicenseSummaryList(Aws::Vector<ConsumedLicenseSummary>&& value) { m_consumedLicenseSummaryList = std::move(value); }

    /**
     * <p>Summaries of the licenses consumed by resources.</p>
     */
    inline GetLicenseConfigurationResult& WithConsumedLicenseSummaryList(const Aws::Vector<ConsumedLicenseSummary>& value) { SetConsumedLicenseSummaryList(value); return *this;}

    /**
     * <p>Summaries of the licenses consumed by resources.</p>
     */
    inline GetLicenseConfigurationResult& WithConsumedLicenseSummaryList(Aws::Vector<ConsumedLicenseSummary>&& value) { SetConsumedLicenseSummaryList(std::move(value)); return *this;}

    /**
     * <p>Summaries of the licenses consumed by resources.</p>
     */
    inline GetLicenseConfigurationResult& AddConsumedLicenseSummaryList(const ConsumedLicenseSummary& value) { m_consumedLicenseSummaryList.push_back(value); return *this; }

    /**
     * <p>Summaries of the licenses consumed by resources.</p>
     */
    inline GetLicenseConfigurationResult& AddConsumedLicenseSummaryList(ConsumedLicenseSummary&& value) { m_consumedLicenseSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>Summaries of the managed resources.</p>
     */
    inline const Aws::Vector<ManagedResourceSummary>& GetManagedResourceSummaryList() const{ return m_managedResourceSummaryList; }

    /**
     * <p>Summaries of the managed resources.</p>
     */
    inline void SetManagedResourceSummaryList(const Aws::Vector<ManagedResourceSummary>& value) { m_managedResourceSummaryList = value; }

    /**
     * <p>Summaries of the managed resources.</p>
     */
    inline void SetManagedResourceSummaryList(Aws::Vector<ManagedResourceSummary>&& value) { m_managedResourceSummaryList = std::move(value); }

    /**
     * <p>Summaries of the managed resources.</p>
     */
    inline GetLicenseConfigurationResult& WithManagedResourceSummaryList(const Aws::Vector<ManagedResourceSummary>& value) { SetManagedResourceSummaryList(value); return *this;}

    /**
     * <p>Summaries of the managed resources.</p>
     */
    inline GetLicenseConfigurationResult& WithManagedResourceSummaryList(Aws::Vector<ManagedResourceSummary>&& value) { SetManagedResourceSummaryList(std::move(value)); return *this;}

    /**
     * <p>Summaries of the managed resources.</p>
     */
    inline GetLicenseConfigurationResult& AddManagedResourceSummaryList(const ManagedResourceSummary& value) { m_managedResourceSummaryList.push_back(value); return *this; }

    /**
     * <p>Summaries of the managed resources.</p>
     */
    inline GetLicenseConfigurationResult& AddManagedResourceSummaryList(ManagedResourceSummary&& value) { m_managedResourceSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>Tags for the license configuration.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags for the license configuration.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>Tags for the license configuration.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>Tags for the license configuration.</p>
     */
    inline GetLicenseConfigurationResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags for the license configuration.</p>
     */
    inline GetLicenseConfigurationResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags for the license configuration.</p>
     */
    inline GetLicenseConfigurationResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>Tags for the license configuration.</p>
     */
    inline GetLicenseConfigurationResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Product information.</p>
     */
    inline const Aws::Vector<ProductInformation>& GetProductInformationList() const{ return m_productInformationList; }

    /**
     * <p>Product information.</p>
     */
    inline void SetProductInformationList(const Aws::Vector<ProductInformation>& value) { m_productInformationList = value; }

    /**
     * <p>Product information.</p>
     */
    inline void SetProductInformationList(Aws::Vector<ProductInformation>&& value) { m_productInformationList = std::move(value); }

    /**
     * <p>Product information.</p>
     */
    inline GetLicenseConfigurationResult& WithProductInformationList(const Aws::Vector<ProductInformation>& value) { SetProductInformationList(value); return *this;}

    /**
     * <p>Product information.</p>
     */
    inline GetLicenseConfigurationResult& WithProductInformationList(Aws::Vector<ProductInformation>&& value) { SetProductInformationList(std::move(value)); return *this;}

    /**
     * <p>Product information.</p>
     */
    inline GetLicenseConfigurationResult& AddProductInformationList(const ProductInformation& value) { m_productInformationList.push_back(value); return *this; }

    /**
     * <p>Product information.</p>
     */
    inline GetLicenseConfigurationResult& AddProductInformationList(ProductInformation&& value) { m_productInformationList.push_back(std::move(value)); return *this; }


    /**
     * <p>Automated discovery information.</p>
     */
    inline const AutomatedDiscoveryInformation& GetAutomatedDiscoveryInformation() const{ return m_automatedDiscoveryInformation; }

    /**
     * <p>Automated discovery information.</p>
     */
    inline void SetAutomatedDiscoveryInformation(const AutomatedDiscoveryInformation& value) { m_automatedDiscoveryInformation = value; }

    /**
     * <p>Automated discovery information.</p>
     */
    inline void SetAutomatedDiscoveryInformation(AutomatedDiscoveryInformation&& value) { m_automatedDiscoveryInformation = std::move(value); }

    /**
     * <p>Automated discovery information.</p>
     */
    inline GetLicenseConfigurationResult& WithAutomatedDiscoveryInformation(const AutomatedDiscoveryInformation& value) { SetAutomatedDiscoveryInformation(value); return *this;}

    /**
     * <p>Automated discovery information.</p>
     */
    inline GetLicenseConfigurationResult& WithAutomatedDiscoveryInformation(AutomatedDiscoveryInformation&& value) { SetAutomatedDiscoveryInformation(std::move(value)); return *this;}


    /**
     * <p>When true, disassociates a resource when software is uninstalled.</p>
     */
    inline bool GetDisassociateWhenNotFound() const{ return m_disassociateWhenNotFound; }

    /**
     * <p>When true, disassociates a resource when software is uninstalled.</p>
     */
    inline void SetDisassociateWhenNotFound(bool value) { m_disassociateWhenNotFound = value; }

    /**
     * <p>When true, disassociates a resource when software is uninstalled.</p>
     */
    inline GetLicenseConfigurationResult& WithDisassociateWhenNotFound(bool value) { SetDisassociateWhenNotFound(value); return *this;}

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
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
