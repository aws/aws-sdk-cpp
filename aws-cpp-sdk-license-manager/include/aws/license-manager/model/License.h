/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/model/IssuerDetails.h>
#include <aws/license-manager/model/LicenseStatus.h>
#include <aws/license-manager/model/DatetimeRange.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager/model/ConsumptionConfiguration.h>
#include <aws/license-manager/model/Entitlement.h>
#include <aws/license-manager/model/Metadata.h>
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
   * <p>Software license that is managed in License Manager.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/License">AWS
   * API Reference</a></p>
   */
  class License
  {
  public:
    AWS_LICENSEMANAGER_API License();
    AWS_LICENSEMANAGER_API License(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API License& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline const Aws::String& GetLicenseArn() const{ return m_licenseArn; }

    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline bool LicenseArnHasBeenSet() const { return m_licenseArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline void SetLicenseArn(const Aws::String& value) { m_licenseArnHasBeenSet = true; m_licenseArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline void SetLicenseArn(Aws::String&& value) { m_licenseArnHasBeenSet = true; m_licenseArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline void SetLicenseArn(const char* value) { m_licenseArnHasBeenSet = true; m_licenseArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline License& WithLicenseArn(const Aws::String& value) { SetLicenseArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline License& WithLicenseArn(Aws::String&& value) { SetLicenseArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline License& WithLicenseArn(const char* value) { SetLicenseArn(value); return *this;}


    /**
     * <p>License name.</p>
     */
    inline const Aws::String& GetLicenseName() const{ return m_licenseName; }

    /**
     * <p>License name.</p>
     */
    inline bool LicenseNameHasBeenSet() const { return m_licenseNameHasBeenSet; }

    /**
     * <p>License name.</p>
     */
    inline void SetLicenseName(const Aws::String& value) { m_licenseNameHasBeenSet = true; m_licenseName = value; }

    /**
     * <p>License name.</p>
     */
    inline void SetLicenseName(Aws::String&& value) { m_licenseNameHasBeenSet = true; m_licenseName = std::move(value); }

    /**
     * <p>License name.</p>
     */
    inline void SetLicenseName(const char* value) { m_licenseNameHasBeenSet = true; m_licenseName.assign(value); }

    /**
     * <p>License name.</p>
     */
    inline License& WithLicenseName(const Aws::String& value) { SetLicenseName(value); return *this;}

    /**
     * <p>License name.</p>
     */
    inline License& WithLicenseName(Aws::String&& value) { SetLicenseName(std::move(value)); return *this;}

    /**
     * <p>License name.</p>
     */
    inline License& WithLicenseName(const char* value) { SetLicenseName(value); return *this;}


    /**
     * <p>Product name.</p>
     */
    inline const Aws::String& GetProductName() const{ return m_productName; }

    /**
     * <p>Product name.</p>
     */
    inline bool ProductNameHasBeenSet() const { return m_productNameHasBeenSet; }

    /**
     * <p>Product name.</p>
     */
    inline void SetProductName(const Aws::String& value) { m_productNameHasBeenSet = true; m_productName = value; }

    /**
     * <p>Product name.</p>
     */
    inline void SetProductName(Aws::String&& value) { m_productNameHasBeenSet = true; m_productName = std::move(value); }

    /**
     * <p>Product name.</p>
     */
    inline void SetProductName(const char* value) { m_productNameHasBeenSet = true; m_productName.assign(value); }

    /**
     * <p>Product name.</p>
     */
    inline License& WithProductName(const Aws::String& value) { SetProductName(value); return *this;}

    /**
     * <p>Product name.</p>
     */
    inline License& WithProductName(Aws::String&& value) { SetProductName(std::move(value)); return *this;}

    /**
     * <p>Product name.</p>
     */
    inline License& WithProductName(const char* value) { SetProductName(value); return *this;}


    /**
     * <p>Product SKU.</p>
     */
    inline const Aws::String& GetProductSKU() const{ return m_productSKU; }

    /**
     * <p>Product SKU.</p>
     */
    inline bool ProductSKUHasBeenSet() const { return m_productSKUHasBeenSet; }

    /**
     * <p>Product SKU.</p>
     */
    inline void SetProductSKU(const Aws::String& value) { m_productSKUHasBeenSet = true; m_productSKU = value; }

    /**
     * <p>Product SKU.</p>
     */
    inline void SetProductSKU(Aws::String&& value) { m_productSKUHasBeenSet = true; m_productSKU = std::move(value); }

    /**
     * <p>Product SKU.</p>
     */
    inline void SetProductSKU(const char* value) { m_productSKUHasBeenSet = true; m_productSKU.assign(value); }

    /**
     * <p>Product SKU.</p>
     */
    inline License& WithProductSKU(const Aws::String& value) { SetProductSKU(value); return *this;}

    /**
     * <p>Product SKU.</p>
     */
    inline License& WithProductSKU(Aws::String&& value) { SetProductSKU(std::move(value)); return *this;}

    /**
     * <p>Product SKU.</p>
     */
    inline License& WithProductSKU(const char* value) { SetProductSKU(value); return *this;}


    /**
     * <p>License issuer.</p>
     */
    inline const IssuerDetails& GetIssuer() const{ return m_issuer; }

    /**
     * <p>License issuer.</p>
     */
    inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }

    /**
     * <p>License issuer.</p>
     */
    inline void SetIssuer(const IssuerDetails& value) { m_issuerHasBeenSet = true; m_issuer = value; }

    /**
     * <p>License issuer.</p>
     */
    inline void SetIssuer(IssuerDetails&& value) { m_issuerHasBeenSet = true; m_issuer = std::move(value); }

    /**
     * <p>License issuer.</p>
     */
    inline License& WithIssuer(const IssuerDetails& value) { SetIssuer(value); return *this;}

    /**
     * <p>License issuer.</p>
     */
    inline License& WithIssuer(IssuerDetails&& value) { SetIssuer(std::move(value)); return *this;}


    /**
     * <p>Home Region of the license.</p>
     */
    inline const Aws::String& GetHomeRegion() const{ return m_homeRegion; }

    /**
     * <p>Home Region of the license.</p>
     */
    inline bool HomeRegionHasBeenSet() const { return m_homeRegionHasBeenSet; }

    /**
     * <p>Home Region of the license.</p>
     */
    inline void SetHomeRegion(const Aws::String& value) { m_homeRegionHasBeenSet = true; m_homeRegion = value; }

    /**
     * <p>Home Region of the license.</p>
     */
    inline void SetHomeRegion(Aws::String&& value) { m_homeRegionHasBeenSet = true; m_homeRegion = std::move(value); }

    /**
     * <p>Home Region of the license.</p>
     */
    inline void SetHomeRegion(const char* value) { m_homeRegionHasBeenSet = true; m_homeRegion.assign(value); }

    /**
     * <p>Home Region of the license.</p>
     */
    inline License& WithHomeRegion(const Aws::String& value) { SetHomeRegion(value); return *this;}

    /**
     * <p>Home Region of the license.</p>
     */
    inline License& WithHomeRegion(Aws::String&& value) { SetHomeRegion(std::move(value)); return *this;}

    /**
     * <p>Home Region of the license.</p>
     */
    inline License& WithHomeRegion(const char* value) { SetHomeRegion(value); return *this;}


    /**
     * <p>License status.</p>
     */
    inline const LicenseStatus& GetStatus() const{ return m_status; }

    /**
     * <p>License status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>License status.</p>
     */
    inline void SetStatus(const LicenseStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>License status.</p>
     */
    inline void SetStatus(LicenseStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>License status.</p>
     */
    inline License& WithStatus(const LicenseStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>License status.</p>
     */
    inline License& WithStatus(LicenseStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Date and time range during which the license is valid, in ISO8601-UTC
     * format.</p>
     */
    inline const DatetimeRange& GetValidity() const{ return m_validity; }

    /**
     * <p>Date and time range during which the license is valid, in ISO8601-UTC
     * format.</p>
     */
    inline bool ValidityHasBeenSet() const { return m_validityHasBeenSet; }

    /**
     * <p>Date and time range during which the license is valid, in ISO8601-UTC
     * format.</p>
     */
    inline void SetValidity(const DatetimeRange& value) { m_validityHasBeenSet = true; m_validity = value; }

    /**
     * <p>Date and time range during which the license is valid, in ISO8601-UTC
     * format.</p>
     */
    inline void SetValidity(DatetimeRange&& value) { m_validityHasBeenSet = true; m_validity = std::move(value); }

    /**
     * <p>Date and time range during which the license is valid, in ISO8601-UTC
     * format.</p>
     */
    inline License& WithValidity(const DatetimeRange& value) { SetValidity(value); return *this;}

    /**
     * <p>Date and time range during which the license is valid, in ISO8601-UTC
     * format.</p>
     */
    inline License& WithValidity(DatetimeRange&& value) { SetValidity(std::move(value)); return *this;}


    /**
     * <p>License beneficiary.</p>
     */
    inline const Aws::String& GetBeneficiary() const{ return m_beneficiary; }

    /**
     * <p>License beneficiary.</p>
     */
    inline bool BeneficiaryHasBeenSet() const { return m_beneficiaryHasBeenSet; }

    /**
     * <p>License beneficiary.</p>
     */
    inline void SetBeneficiary(const Aws::String& value) { m_beneficiaryHasBeenSet = true; m_beneficiary = value; }

    /**
     * <p>License beneficiary.</p>
     */
    inline void SetBeneficiary(Aws::String&& value) { m_beneficiaryHasBeenSet = true; m_beneficiary = std::move(value); }

    /**
     * <p>License beneficiary.</p>
     */
    inline void SetBeneficiary(const char* value) { m_beneficiaryHasBeenSet = true; m_beneficiary.assign(value); }

    /**
     * <p>License beneficiary.</p>
     */
    inline License& WithBeneficiary(const Aws::String& value) { SetBeneficiary(value); return *this;}

    /**
     * <p>License beneficiary.</p>
     */
    inline License& WithBeneficiary(Aws::String&& value) { SetBeneficiary(std::move(value)); return *this;}

    /**
     * <p>License beneficiary.</p>
     */
    inline License& WithBeneficiary(const char* value) { SetBeneficiary(value); return *this;}


    /**
     * <p>License entitlements.</p>
     */
    inline const Aws::Vector<Entitlement>& GetEntitlements() const{ return m_entitlements; }

    /**
     * <p>License entitlements.</p>
     */
    inline bool EntitlementsHasBeenSet() const { return m_entitlementsHasBeenSet; }

    /**
     * <p>License entitlements.</p>
     */
    inline void SetEntitlements(const Aws::Vector<Entitlement>& value) { m_entitlementsHasBeenSet = true; m_entitlements = value; }

    /**
     * <p>License entitlements.</p>
     */
    inline void SetEntitlements(Aws::Vector<Entitlement>&& value) { m_entitlementsHasBeenSet = true; m_entitlements = std::move(value); }

    /**
     * <p>License entitlements.</p>
     */
    inline License& WithEntitlements(const Aws::Vector<Entitlement>& value) { SetEntitlements(value); return *this;}

    /**
     * <p>License entitlements.</p>
     */
    inline License& WithEntitlements(Aws::Vector<Entitlement>&& value) { SetEntitlements(std::move(value)); return *this;}

    /**
     * <p>License entitlements.</p>
     */
    inline License& AddEntitlements(const Entitlement& value) { m_entitlementsHasBeenSet = true; m_entitlements.push_back(value); return *this; }

    /**
     * <p>License entitlements.</p>
     */
    inline License& AddEntitlements(Entitlement&& value) { m_entitlementsHasBeenSet = true; m_entitlements.push_back(std::move(value)); return *this; }


    /**
     * <p>Configuration for consumption of the license.</p>
     */
    inline const ConsumptionConfiguration& GetConsumptionConfiguration() const{ return m_consumptionConfiguration; }

    /**
     * <p>Configuration for consumption of the license.</p>
     */
    inline bool ConsumptionConfigurationHasBeenSet() const { return m_consumptionConfigurationHasBeenSet; }

    /**
     * <p>Configuration for consumption of the license.</p>
     */
    inline void SetConsumptionConfiguration(const ConsumptionConfiguration& value) { m_consumptionConfigurationHasBeenSet = true; m_consumptionConfiguration = value; }

    /**
     * <p>Configuration for consumption of the license.</p>
     */
    inline void SetConsumptionConfiguration(ConsumptionConfiguration&& value) { m_consumptionConfigurationHasBeenSet = true; m_consumptionConfiguration = std::move(value); }

    /**
     * <p>Configuration for consumption of the license.</p>
     */
    inline License& WithConsumptionConfiguration(const ConsumptionConfiguration& value) { SetConsumptionConfiguration(value); return *this;}

    /**
     * <p>Configuration for consumption of the license.</p>
     */
    inline License& WithConsumptionConfiguration(ConsumptionConfiguration&& value) { SetConsumptionConfiguration(std::move(value)); return *this;}


    /**
     * <p>License metadata.</p>
     */
    inline const Aws::Vector<Metadata>& GetLicenseMetadata() const{ return m_licenseMetadata; }

    /**
     * <p>License metadata.</p>
     */
    inline bool LicenseMetadataHasBeenSet() const { return m_licenseMetadataHasBeenSet; }

    /**
     * <p>License metadata.</p>
     */
    inline void SetLicenseMetadata(const Aws::Vector<Metadata>& value) { m_licenseMetadataHasBeenSet = true; m_licenseMetadata = value; }

    /**
     * <p>License metadata.</p>
     */
    inline void SetLicenseMetadata(Aws::Vector<Metadata>&& value) { m_licenseMetadataHasBeenSet = true; m_licenseMetadata = std::move(value); }

    /**
     * <p>License metadata.</p>
     */
    inline License& WithLicenseMetadata(const Aws::Vector<Metadata>& value) { SetLicenseMetadata(value); return *this;}

    /**
     * <p>License metadata.</p>
     */
    inline License& WithLicenseMetadata(Aws::Vector<Metadata>&& value) { SetLicenseMetadata(std::move(value)); return *this;}

    /**
     * <p>License metadata.</p>
     */
    inline License& AddLicenseMetadata(const Metadata& value) { m_licenseMetadataHasBeenSet = true; m_licenseMetadata.push_back(value); return *this; }

    /**
     * <p>License metadata.</p>
     */
    inline License& AddLicenseMetadata(Metadata&& value) { m_licenseMetadataHasBeenSet = true; m_licenseMetadata.push_back(std::move(value)); return *this; }


    /**
     * <p>License creation time.</p>
     */
    inline const Aws::String& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>License creation time.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>License creation time.</p>
     */
    inline void SetCreateTime(const Aws::String& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>License creation time.</p>
     */
    inline void SetCreateTime(Aws::String&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>License creation time.</p>
     */
    inline void SetCreateTime(const char* value) { m_createTimeHasBeenSet = true; m_createTime.assign(value); }

    /**
     * <p>License creation time.</p>
     */
    inline License& WithCreateTime(const Aws::String& value) { SetCreateTime(value); return *this;}

    /**
     * <p>License creation time.</p>
     */
    inline License& WithCreateTime(Aws::String&& value) { SetCreateTime(std::move(value)); return *this;}

    /**
     * <p>License creation time.</p>
     */
    inline License& WithCreateTime(const char* value) { SetCreateTime(value); return *this;}


    /**
     * <p>License version.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>License version.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>License version.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>License version.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>License version.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>License version.</p>
     */
    inline License& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>License version.</p>
     */
    inline License& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>License version.</p>
     */
    inline License& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_licenseArn;
    bool m_licenseArnHasBeenSet = false;

    Aws::String m_licenseName;
    bool m_licenseNameHasBeenSet = false;

    Aws::String m_productName;
    bool m_productNameHasBeenSet = false;

    Aws::String m_productSKU;
    bool m_productSKUHasBeenSet = false;

    IssuerDetails m_issuer;
    bool m_issuerHasBeenSet = false;

    Aws::String m_homeRegion;
    bool m_homeRegionHasBeenSet = false;

    LicenseStatus m_status;
    bool m_statusHasBeenSet = false;

    DatetimeRange m_validity;
    bool m_validityHasBeenSet = false;

    Aws::String m_beneficiary;
    bool m_beneficiaryHasBeenSet = false;

    Aws::Vector<Entitlement> m_entitlements;
    bool m_entitlementsHasBeenSet = false;

    ConsumptionConfiguration m_consumptionConfiguration;
    bool m_consumptionConfigurationHasBeenSet = false;

    Aws::Vector<Metadata> m_licenseMetadata;
    bool m_licenseMetadataHasBeenSet = false;

    Aws::String m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
