/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/LicenseManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/model/Issuer.h>
#include <aws/license-manager/model/DatetimeRange.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager/model/ConsumptionConfiguration.h>
#include <aws/license-manager/model/Entitlement.h>
#include <aws/license-manager/model/Metadata.h>
#include <aws/license-manager/model/Tag.h>
#include <utility>

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

  /**
   */
  class CreateLicenseRequest : public LicenseManagerRequest
  {
  public:
    AWS_LICENSEMANAGER_API CreateLicenseRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLicense"; }

    AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

    AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>License name.</p>
     */
    inline const Aws::String& GetLicenseName() const { return m_licenseName; }
    inline bool LicenseNameHasBeenSet() const { return m_licenseNameHasBeenSet; }
    template<typename LicenseNameT = Aws::String>
    void SetLicenseName(LicenseNameT&& value) { m_licenseNameHasBeenSet = true; m_licenseName = std::forward<LicenseNameT>(value); }
    template<typename LicenseNameT = Aws::String>
    CreateLicenseRequest& WithLicenseName(LicenseNameT&& value) { SetLicenseName(std::forward<LicenseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Product name.</p>
     */
    inline const Aws::String& GetProductName() const { return m_productName; }
    inline bool ProductNameHasBeenSet() const { return m_productNameHasBeenSet; }
    template<typename ProductNameT = Aws::String>
    void SetProductName(ProductNameT&& value) { m_productNameHasBeenSet = true; m_productName = std::forward<ProductNameT>(value); }
    template<typename ProductNameT = Aws::String>
    CreateLicenseRequest& WithProductName(ProductNameT&& value) { SetProductName(std::forward<ProductNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Product SKU.</p>
     */
    inline const Aws::String& GetProductSKU() const { return m_productSKU; }
    inline bool ProductSKUHasBeenSet() const { return m_productSKUHasBeenSet; }
    template<typename ProductSKUT = Aws::String>
    void SetProductSKU(ProductSKUT&& value) { m_productSKUHasBeenSet = true; m_productSKU = std::forward<ProductSKUT>(value); }
    template<typename ProductSKUT = Aws::String>
    CreateLicenseRequest& WithProductSKU(ProductSKUT&& value) { SetProductSKU(std::forward<ProductSKUT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>License issuer.</p>
     */
    inline const Issuer& GetIssuer() const { return m_issuer; }
    inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }
    template<typename IssuerT = Issuer>
    void SetIssuer(IssuerT&& value) { m_issuerHasBeenSet = true; m_issuer = std::forward<IssuerT>(value); }
    template<typename IssuerT = Issuer>
    CreateLicenseRequest& WithIssuer(IssuerT&& value) { SetIssuer(std::forward<IssuerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Home Region for the license.</p>
     */
    inline const Aws::String& GetHomeRegion() const { return m_homeRegion; }
    inline bool HomeRegionHasBeenSet() const { return m_homeRegionHasBeenSet; }
    template<typename HomeRegionT = Aws::String>
    void SetHomeRegion(HomeRegionT&& value) { m_homeRegionHasBeenSet = true; m_homeRegion = std::forward<HomeRegionT>(value); }
    template<typename HomeRegionT = Aws::String>
    CreateLicenseRequest& WithHomeRegion(HomeRegionT&& value) { SetHomeRegion(std::forward<HomeRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time range during which the license is valid, in ISO8601-UTC
     * format.</p>
     */
    inline const DatetimeRange& GetValidity() const { return m_validity; }
    inline bool ValidityHasBeenSet() const { return m_validityHasBeenSet; }
    template<typename ValidityT = DatetimeRange>
    void SetValidity(ValidityT&& value) { m_validityHasBeenSet = true; m_validity = std::forward<ValidityT>(value); }
    template<typename ValidityT = DatetimeRange>
    CreateLicenseRequest& WithValidity(ValidityT&& value) { SetValidity(std::forward<ValidityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>License entitlements.</p>
     */
    inline const Aws::Vector<Entitlement>& GetEntitlements() const { return m_entitlements; }
    inline bool EntitlementsHasBeenSet() const { return m_entitlementsHasBeenSet; }
    template<typename EntitlementsT = Aws::Vector<Entitlement>>
    void SetEntitlements(EntitlementsT&& value) { m_entitlementsHasBeenSet = true; m_entitlements = std::forward<EntitlementsT>(value); }
    template<typename EntitlementsT = Aws::Vector<Entitlement>>
    CreateLicenseRequest& WithEntitlements(EntitlementsT&& value) { SetEntitlements(std::forward<EntitlementsT>(value)); return *this;}
    template<typename EntitlementsT = Entitlement>
    CreateLicenseRequest& AddEntitlements(EntitlementsT&& value) { m_entitlementsHasBeenSet = true; m_entitlements.emplace_back(std::forward<EntitlementsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>License beneficiary.</p>
     */
    inline const Aws::String& GetBeneficiary() const { return m_beneficiary; }
    inline bool BeneficiaryHasBeenSet() const { return m_beneficiaryHasBeenSet; }
    template<typename BeneficiaryT = Aws::String>
    void SetBeneficiary(BeneficiaryT&& value) { m_beneficiaryHasBeenSet = true; m_beneficiary = std::forward<BeneficiaryT>(value); }
    template<typename BeneficiaryT = Aws::String>
    CreateLicenseRequest& WithBeneficiary(BeneficiaryT&& value) { SetBeneficiary(std::forward<BeneficiaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for consumption of the license. Choose a provisional
     * configuration for workloads running with continuous connectivity. Choose a
     * borrow configuration for workloads with offline usage.</p>
     */
    inline const ConsumptionConfiguration& GetConsumptionConfiguration() const { return m_consumptionConfiguration; }
    inline bool ConsumptionConfigurationHasBeenSet() const { return m_consumptionConfigurationHasBeenSet; }
    template<typename ConsumptionConfigurationT = ConsumptionConfiguration>
    void SetConsumptionConfiguration(ConsumptionConfigurationT&& value) { m_consumptionConfigurationHasBeenSet = true; m_consumptionConfiguration = std::forward<ConsumptionConfigurationT>(value); }
    template<typename ConsumptionConfigurationT = ConsumptionConfiguration>
    CreateLicenseRequest& WithConsumptionConfiguration(ConsumptionConfigurationT&& value) { SetConsumptionConfiguration(std::forward<ConsumptionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the license.</p>
     */
    inline const Aws::Vector<Metadata>& GetLicenseMetadata() const { return m_licenseMetadata; }
    inline bool LicenseMetadataHasBeenSet() const { return m_licenseMetadataHasBeenSet; }
    template<typename LicenseMetadataT = Aws::Vector<Metadata>>
    void SetLicenseMetadata(LicenseMetadataT&& value) { m_licenseMetadataHasBeenSet = true; m_licenseMetadata = std::forward<LicenseMetadataT>(value); }
    template<typename LicenseMetadataT = Aws::Vector<Metadata>>
    CreateLicenseRequest& WithLicenseMetadata(LicenseMetadataT&& value) { SetLicenseMetadata(std::forward<LicenseMetadataT>(value)); return *this;}
    template<typename LicenseMetadataT = Metadata>
    CreateLicenseRequest& AddLicenseMetadata(LicenseMetadataT&& value) { m_licenseMetadataHasBeenSet = true; m_licenseMetadata.emplace_back(std::forward<LicenseMetadataT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateLicenseRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to add to the license. For more information about tagging support in
     * License Manager, see the <a
     * href="https://docs.aws.amazon.com/license-manager/latest/APIReference/API_TagResource.html">TagResource</a>
     * operation.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateLicenseRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateLicenseRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_licenseName;
    bool m_licenseNameHasBeenSet = false;

    Aws::String m_productName;
    bool m_productNameHasBeenSet = false;

    Aws::String m_productSKU;
    bool m_productSKUHasBeenSet = false;

    Issuer m_issuer;
    bool m_issuerHasBeenSet = false;

    Aws::String m_homeRegion;
    bool m_homeRegionHasBeenSet = false;

    DatetimeRange m_validity;
    bool m_validityHasBeenSet = false;

    Aws::Vector<Entitlement> m_entitlements;
    bool m_entitlementsHasBeenSet = false;

    Aws::String m_beneficiary;
    bool m_beneficiaryHasBeenSet = false;

    ConsumptionConfiguration m_consumptionConfiguration;
    bool m_consumptionConfigurationHasBeenSet = false;

    Aws::Vector<Metadata> m_licenseMetadata;
    bool m_licenseMetadataHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
