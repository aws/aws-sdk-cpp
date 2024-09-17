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
    AWS_LICENSEMANAGER_API CreateLicenseRequest();

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
    inline const Aws::String& GetLicenseName() const{ return m_licenseName; }
    inline bool LicenseNameHasBeenSet() const { return m_licenseNameHasBeenSet; }
    inline void SetLicenseName(const Aws::String& value) { m_licenseNameHasBeenSet = true; m_licenseName = value; }
    inline void SetLicenseName(Aws::String&& value) { m_licenseNameHasBeenSet = true; m_licenseName = std::move(value); }
    inline void SetLicenseName(const char* value) { m_licenseNameHasBeenSet = true; m_licenseName.assign(value); }
    inline CreateLicenseRequest& WithLicenseName(const Aws::String& value) { SetLicenseName(value); return *this;}
    inline CreateLicenseRequest& WithLicenseName(Aws::String&& value) { SetLicenseName(std::move(value)); return *this;}
    inline CreateLicenseRequest& WithLicenseName(const char* value) { SetLicenseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Product name.</p>
     */
    inline const Aws::String& GetProductName() const{ return m_productName; }
    inline bool ProductNameHasBeenSet() const { return m_productNameHasBeenSet; }
    inline void SetProductName(const Aws::String& value) { m_productNameHasBeenSet = true; m_productName = value; }
    inline void SetProductName(Aws::String&& value) { m_productNameHasBeenSet = true; m_productName = std::move(value); }
    inline void SetProductName(const char* value) { m_productNameHasBeenSet = true; m_productName.assign(value); }
    inline CreateLicenseRequest& WithProductName(const Aws::String& value) { SetProductName(value); return *this;}
    inline CreateLicenseRequest& WithProductName(Aws::String&& value) { SetProductName(std::move(value)); return *this;}
    inline CreateLicenseRequest& WithProductName(const char* value) { SetProductName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Product SKU.</p>
     */
    inline const Aws::String& GetProductSKU() const{ return m_productSKU; }
    inline bool ProductSKUHasBeenSet() const { return m_productSKUHasBeenSet; }
    inline void SetProductSKU(const Aws::String& value) { m_productSKUHasBeenSet = true; m_productSKU = value; }
    inline void SetProductSKU(Aws::String&& value) { m_productSKUHasBeenSet = true; m_productSKU = std::move(value); }
    inline void SetProductSKU(const char* value) { m_productSKUHasBeenSet = true; m_productSKU.assign(value); }
    inline CreateLicenseRequest& WithProductSKU(const Aws::String& value) { SetProductSKU(value); return *this;}
    inline CreateLicenseRequest& WithProductSKU(Aws::String&& value) { SetProductSKU(std::move(value)); return *this;}
    inline CreateLicenseRequest& WithProductSKU(const char* value) { SetProductSKU(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>License issuer.</p>
     */
    inline const Issuer& GetIssuer() const{ return m_issuer; }
    inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }
    inline void SetIssuer(const Issuer& value) { m_issuerHasBeenSet = true; m_issuer = value; }
    inline void SetIssuer(Issuer&& value) { m_issuerHasBeenSet = true; m_issuer = std::move(value); }
    inline CreateLicenseRequest& WithIssuer(const Issuer& value) { SetIssuer(value); return *this;}
    inline CreateLicenseRequest& WithIssuer(Issuer&& value) { SetIssuer(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Home Region for the license.</p>
     */
    inline const Aws::String& GetHomeRegion() const{ return m_homeRegion; }
    inline bool HomeRegionHasBeenSet() const { return m_homeRegionHasBeenSet; }
    inline void SetHomeRegion(const Aws::String& value) { m_homeRegionHasBeenSet = true; m_homeRegion = value; }
    inline void SetHomeRegion(Aws::String&& value) { m_homeRegionHasBeenSet = true; m_homeRegion = std::move(value); }
    inline void SetHomeRegion(const char* value) { m_homeRegionHasBeenSet = true; m_homeRegion.assign(value); }
    inline CreateLicenseRequest& WithHomeRegion(const Aws::String& value) { SetHomeRegion(value); return *this;}
    inline CreateLicenseRequest& WithHomeRegion(Aws::String&& value) { SetHomeRegion(std::move(value)); return *this;}
    inline CreateLicenseRequest& WithHomeRegion(const char* value) { SetHomeRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time range during which the license is valid, in ISO8601-UTC
     * format.</p>
     */
    inline const DatetimeRange& GetValidity() const{ return m_validity; }
    inline bool ValidityHasBeenSet() const { return m_validityHasBeenSet; }
    inline void SetValidity(const DatetimeRange& value) { m_validityHasBeenSet = true; m_validity = value; }
    inline void SetValidity(DatetimeRange&& value) { m_validityHasBeenSet = true; m_validity = std::move(value); }
    inline CreateLicenseRequest& WithValidity(const DatetimeRange& value) { SetValidity(value); return *this;}
    inline CreateLicenseRequest& WithValidity(DatetimeRange&& value) { SetValidity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>License entitlements.</p>
     */
    inline const Aws::Vector<Entitlement>& GetEntitlements() const{ return m_entitlements; }
    inline bool EntitlementsHasBeenSet() const { return m_entitlementsHasBeenSet; }
    inline void SetEntitlements(const Aws::Vector<Entitlement>& value) { m_entitlementsHasBeenSet = true; m_entitlements = value; }
    inline void SetEntitlements(Aws::Vector<Entitlement>&& value) { m_entitlementsHasBeenSet = true; m_entitlements = std::move(value); }
    inline CreateLicenseRequest& WithEntitlements(const Aws::Vector<Entitlement>& value) { SetEntitlements(value); return *this;}
    inline CreateLicenseRequest& WithEntitlements(Aws::Vector<Entitlement>&& value) { SetEntitlements(std::move(value)); return *this;}
    inline CreateLicenseRequest& AddEntitlements(const Entitlement& value) { m_entitlementsHasBeenSet = true; m_entitlements.push_back(value); return *this; }
    inline CreateLicenseRequest& AddEntitlements(Entitlement&& value) { m_entitlementsHasBeenSet = true; m_entitlements.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>License beneficiary.</p>
     */
    inline const Aws::String& GetBeneficiary() const{ return m_beneficiary; }
    inline bool BeneficiaryHasBeenSet() const { return m_beneficiaryHasBeenSet; }
    inline void SetBeneficiary(const Aws::String& value) { m_beneficiaryHasBeenSet = true; m_beneficiary = value; }
    inline void SetBeneficiary(Aws::String&& value) { m_beneficiaryHasBeenSet = true; m_beneficiary = std::move(value); }
    inline void SetBeneficiary(const char* value) { m_beneficiaryHasBeenSet = true; m_beneficiary.assign(value); }
    inline CreateLicenseRequest& WithBeneficiary(const Aws::String& value) { SetBeneficiary(value); return *this;}
    inline CreateLicenseRequest& WithBeneficiary(Aws::String&& value) { SetBeneficiary(std::move(value)); return *this;}
    inline CreateLicenseRequest& WithBeneficiary(const char* value) { SetBeneficiary(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for consumption of the license. Choose a provisional
     * configuration for workloads running with continuous connectivity. Choose a
     * borrow configuration for workloads with offline usage.</p>
     */
    inline const ConsumptionConfiguration& GetConsumptionConfiguration() const{ return m_consumptionConfiguration; }
    inline bool ConsumptionConfigurationHasBeenSet() const { return m_consumptionConfigurationHasBeenSet; }
    inline void SetConsumptionConfiguration(const ConsumptionConfiguration& value) { m_consumptionConfigurationHasBeenSet = true; m_consumptionConfiguration = value; }
    inline void SetConsumptionConfiguration(ConsumptionConfiguration&& value) { m_consumptionConfigurationHasBeenSet = true; m_consumptionConfiguration = std::move(value); }
    inline CreateLicenseRequest& WithConsumptionConfiguration(const ConsumptionConfiguration& value) { SetConsumptionConfiguration(value); return *this;}
    inline CreateLicenseRequest& WithConsumptionConfiguration(ConsumptionConfiguration&& value) { SetConsumptionConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the license.</p>
     */
    inline const Aws::Vector<Metadata>& GetLicenseMetadata() const{ return m_licenseMetadata; }
    inline bool LicenseMetadataHasBeenSet() const { return m_licenseMetadataHasBeenSet; }
    inline void SetLicenseMetadata(const Aws::Vector<Metadata>& value) { m_licenseMetadataHasBeenSet = true; m_licenseMetadata = value; }
    inline void SetLicenseMetadata(Aws::Vector<Metadata>&& value) { m_licenseMetadataHasBeenSet = true; m_licenseMetadata = std::move(value); }
    inline CreateLicenseRequest& WithLicenseMetadata(const Aws::Vector<Metadata>& value) { SetLicenseMetadata(value); return *this;}
    inline CreateLicenseRequest& WithLicenseMetadata(Aws::Vector<Metadata>&& value) { SetLicenseMetadata(std::move(value)); return *this;}
    inline CreateLicenseRequest& AddLicenseMetadata(const Metadata& value) { m_licenseMetadataHasBeenSet = true; m_licenseMetadata.push_back(value); return *this; }
    inline CreateLicenseRequest& AddLicenseMetadata(Metadata&& value) { m_licenseMetadataHasBeenSet = true; m_licenseMetadata.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateLicenseRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateLicenseRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateLicenseRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
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
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
