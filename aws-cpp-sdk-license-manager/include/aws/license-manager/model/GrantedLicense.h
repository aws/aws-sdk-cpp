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
#include <aws/license-manager/model/ReceivedMetadata.h>
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
   * <p>Describes a license that is granted to a grantee.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/GrantedLicense">AWS
   * API Reference</a></p>
   */
  class GrantedLicense
  {
  public:
    AWS_LICENSEMANAGER_API GrantedLicense();
    AWS_LICENSEMANAGER_API GrantedLicense(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API GrantedLicense& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline GrantedLicense& WithLicenseArn(const Aws::String& value) { SetLicenseArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline GrantedLicense& WithLicenseArn(Aws::String&& value) { SetLicenseArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline GrantedLicense& WithLicenseArn(const char* value) { SetLicenseArn(value); return *this;}


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
    inline GrantedLicense& WithLicenseName(const Aws::String& value) { SetLicenseName(value); return *this;}

    /**
     * <p>License name.</p>
     */
    inline GrantedLicense& WithLicenseName(Aws::String&& value) { SetLicenseName(std::move(value)); return *this;}

    /**
     * <p>License name.</p>
     */
    inline GrantedLicense& WithLicenseName(const char* value) { SetLicenseName(value); return *this;}


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
    inline GrantedLicense& WithProductName(const Aws::String& value) { SetProductName(value); return *this;}

    /**
     * <p>Product name.</p>
     */
    inline GrantedLicense& WithProductName(Aws::String&& value) { SetProductName(std::move(value)); return *this;}

    /**
     * <p>Product name.</p>
     */
    inline GrantedLicense& WithProductName(const char* value) { SetProductName(value); return *this;}


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
    inline GrantedLicense& WithProductSKU(const Aws::String& value) { SetProductSKU(value); return *this;}

    /**
     * <p>Product SKU.</p>
     */
    inline GrantedLicense& WithProductSKU(Aws::String&& value) { SetProductSKU(std::move(value)); return *this;}

    /**
     * <p>Product SKU.</p>
     */
    inline GrantedLicense& WithProductSKU(const char* value) { SetProductSKU(value); return *this;}


    /**
     * <p>Granted license issuer.</p>
     */
    inline const IssuerDetails& GetIssuer() const{ return m_issuer; }

    /**
     * <p>Granted license issuer.</p>
     */
    inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }

    /**
     * <p>Granted license issuer.</p>
     */
    inline void SetIssuer(const IssuerDetails& value) { m_issuerHasBeenSet = true; m_issuer = value; }

    /**
     * <p>Granted license issuer.</p>
     */
    inline void SetIssuer(IssuerDetails&& value) { m_issuerHasBeenSet = true; m_issuer = std::move(value); }

    /**
     * <p>Granted license issuer.</p>
     */
    inline GrantedLicense& WithIssuer(const IssuerDetails& value) { SetIssuer(value); return *this;}

    /**
     * <p>Granted license issuer.</p>
     */
    inline GrantedLicense& WithIssuer(IssuerDetails&& value) { SetIssuer(std::move(value)); return *this;}


    /**
     * <p>Home Region of the granted license.</p>
     */
    inline const Aws::String& GetHomeRegion() const{ return m_homeRegion; }

    /**
     * <p>Home Region of the granted license.</p>
     */
    inline bool HomeRegionHasBeenSet() const { return m_homeRegionHasBeenSet; }

    /**
     * <p>Home Region of the granted license.</p>
     */
    inline void SetHomeRegion(const Aws::String& value) { m_homeRegionHasBeenSet = true; m_homeRegion = value; }

    /**
     * <p>Home Region of the granted license.</p>
     */
    inline void SetHomeRegion(Aws::String&& value) { m_homeRegionHasBeenSet = true; m_homeRegion = std::move(value); }

    /**
     * <p>Home Region of the granted license.</p>
     */
    inline void SetHomeRegion(const char* value) { m_homeRegionHasBeenSet = true; m_homeRegion.assign(value); }

    /**
     * <p>Home Region of the granted license.</p>
     */
    inline GrantedLicense& WithHomeRegion(const Aws::String& value) { SetHomeRegion(value); return *this;}

    /**
     * <p>Home Region of the granted license.</p>
     */
    inline GrantedLicense& WithHomeRegion(Aws::String&& value) { SetHomeRegion(std::move(value)); return *this;}

    /**
     * <p>Home Region of the granted license.</p>
     */
    inline GrantedLicense& WithHomeRegion(const char* value) { SetHomeRegion(value); return *this;}


    /**
     * <p>Granted license status.</p>
     */
    inline const LicenseStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Granted license status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Granted license status.</p>
     */
    inline void SetStatus(const LicenseStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Granted license status.</p>
     */
    inline void SetStatus(LicenseStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Granted license status.</p>
     */
    inline GrantedLicense& WithStatus(const LicenseStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Granted license status.</p>
     */
    inline GrantedLicense& WithStatus(LicenseStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Date and time range during which the granted license is valid, in ISO8601-UTC
     * format.</p>
     */
    inline const DatetimeRange& GetValidity() const{ return m_validity; }

    /**
     * <p>Date and time range during which the granted license is valid, in ISO8601-UTC
     * format.</p>
     */
    inline bool ValidityHasBeenSet() const { return m_validityHasBeenSet; }

    /**
     * <p>Date and time range during which the granted license is valid, in ISO8601-UTC
     * format.</p>
     */
    inline void SetValidity(const DatetimeRange& value) { m_validityHasBeenSet = true; m_validity = value; }

    /**
     * <p>Date and time range during which the granted license is valid, in ISO8601-UTC
     * format.</p>
     */
    inline void SetValidity(DatetimeRange&& value) { m_validityHasBeenSet = true; m_validity = std::move(value); }

    /**
     * <p>Date and time range during which the granted license is valid, in ISO8601-UTC
     * format.</p>
     */
    inline GrantedLicense& WithValidity(const DatetimeRange& value) { SetValidity(value); return *this;}

    /**
     * <p>Date and time range during which the granted license is valid, in ISO8601-UTC
     * format.</p>
     */
    inline GrantedLicense& WithValidity(DatetimeRange&& value) { SetValidity(std::move(value)); return *this;}


    /**
     * <p>Granted license beneficiary.</p>
     */
    inline const Aws::String& GetBeneficiary() const{ return m_beneficiary; }

    /**
     * <p>Granted license beneficiary.</p>
     */
    inline bool BeneficiaryHasBeenSet() const { return m_beneficiaryHasBeenSet; }

    /**
     * <p>Granted license beneficiary.</p>
     */
    inline void SetBeneficiary(const Aws::String& value) { m_beneficiaryHasBeenSet = true; m_beneficiary = value; }

    /**
     * <p>Granted license beneficiary.</p>
     */
    inline void SetBeneficiary(Aws::String&& value) { m_beneficiaryHasBeenSet = true; m_beneficiary = std::move(value); }

    /**
     * <p>Granted license beneficiary.</p>
     */
    inline void SetBeneficiary(const char* value) { m_beneficiaryHasBeenSet = true; m_beneficiary.assign(value); }

    /**
     * <p>Granted license beneficiary.</p>
     */
    inline GrantedLicense& WithBeneficiary(const Aws::String& value) { SetBeneficiary(value); return *this;}

    /**
     * <p>Granted license beneficiary.</p>
     */
    inline GrantedLicense& WithBeneficiary(Aws::String&& value) { SetBeneficiary(std::move(value)); return *this;}

    /**
     * <p>Granted license beneficiary.</p>
     */
    inline GrantedLicense& WithBeneficiary(const char* value) { SetBeneficiary(value); return *this;}


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
    inline GrantedLicense& WithEntitlements(const Aws::Vector<Entitlement>& value) { SetEntitlements(value); return *this;}

    /**
     * <p>License entitlements.</p>
     */
    inline GrantedLicense& WithEntitlements(Aws::Vector<Entitlement>&& value) { SetEntitlements(std::move(value)); return *this;}

    /**
     * <p>License entitlements.</p>
     */
    inline GrantedLicense& AddEntitlements(const Entitlement& value) { m_entitlementsHasBeenSet = true; m_entitlements.push_back(value); return *this; }

    /**
     * <p>License entitlements.</p>
     */
    inline GrantedLicense& AddEntitlements(Entitlement&& value) { m_entitlementsHasBeenSet = true; m_entitlements.push_back(std::move(value)); return *this; }


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
    inline GrantedLicense& WithConsumptionConfiguration(const ConsumptionConfiguration& value) { SetConsumptionConfiguration(value); return *this;}

    /**
     * <p>Configuration for consumption of the license.</p>
     */
    inline GrantedLicense& WithConsumptionConfiguration(ConsumptionConfiguration&& value) { SetConsumptionConfiguration(std::move(value)); return *this;}


    /**
     * <p>Granted license metadata.</p>
     */
    inline const Aws::Vector<Metadata>& GetLicenseMetadata() const{ return m_licenseMetadata; }

    /**
     * <p>Granted license metadata.</p>
     */
    inline bool LicenseMetadataHasBeenSet() const { return m_licenseMetadataHasBeenSet; }

    /**
     * <p>Granted license metadata.</p>
     */
    inline void SetLicenseMetadata(const Aws::Vector<Metadata>& value) { m_licenseMetadataHasBeenSet = true; m_licenseMetadata = value; }

    /**
     * <p>Granted license metadata.</p>
     */
    inline void SetLicenseMetadata(Aws::Vector<Metadata>&& value) { m_licenseMetadataHasBeenSet = true; m_licenseMetadata = std::move(value); }

    /**
     * <p>Granted license metadata.</p>
     */
    inline GrantedLicense& WithLicenseMetadata(const Aws::Vector<Metadata>& value) { SetLicenseMetadata(value); return *this;}

    /**
     * <p>Granted license metadata.</p>
     */
    inline GrantedLicense& WithLicenseMetadata(Aws::Vector<Metadata>&& value) { SetLicenseMetadata(std::move(value)); return *this;}

    /**
     * <p>Granted license metadata.</p>
     */
    inline GrantedLicense& AddLicenseMetadata(const Metadata& value) { m_licenseMetadataHasBeenSet = true; m_licenseMetadata.push_back(value); return *this; }

    /**
     * <p>Granted license metadata.</p>
     */
    inline GrantedLicense& AddLicenseMetadata(Metadata&& value) { m_licenseMetadataHasBeenSet = true; m_licenseMetadata.push_back(std::move(value)); return *this; }


    /**
     * <p>Creation time of the granted license.</p>
     */
    inline const Aws::String& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>Creation time of the granted license.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>Creation time of the granted license.</p>
     */
    inline void SetCreateTime(const Aws::String& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>Creation time of the granted license.</p>
     */
    inline void SetCreateTime(Aws::String&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>Creation time of the granted license.</p>
     */
    inline void SetCreateTime(const char* value) { m_createTimeHasBeenSet = true; m_createTime.assign(value); }

    /**
     * <p>Creation time of the granted license.</p>
     */
    inline GrantedLicense& WithCreateTime(const Aws::String& value) { SetCreateTime(value); return *this;}

    /**
     * <p>Creation time of the granted license.</p>
     */
    inline GrantedLicense& WithCreateTime(Aws::String&& value) { SetCreateTime(std::move(value)); return *this;}

    /**
     * <p>Creation time of the granted license.</p>
     */
    inline GrantedLicense& WithCreateTime(const char* value) { SetCreateTime(value); return *this;}


    /**
     * <p>Version of the granted license.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>Version of the granted license.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>Version of the granted license.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>Version of the granted license.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>Version of the granted license.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>Version of the granted license.</p>
     */
    inline GrantedLicense& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>Version of the granted license.</p>
     */
    inline GrantedLicense& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>Version of the granted license.</p>
     */
    inline GrantedLicense& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>Granted license received metadata.</p>
     */
    inline const ReceivedMetadata& GetReceivedMetadata() const{ return m_receivedMetadata; }

    /**
     * <p>Granted license received metadata.</p>
     */
    inline bool ReceivedMetadataHasBeenSet() const { return m_receivedMetadataHasBeenSet; }

    /**
     * <p>Granted license received metadata.</p>
     */
    inline void SetReceivedMetadata(const ReceivedMetadata& value) { m_receivedMetadataHasBeenSet = true; m_receivedMetadata = value; }

    /**
     * <p>Granted license received metadata.</p>
     */
    inline void SetReceivedMetadata(ReceivedMetadata&& value) { m_receivedMetadataHasBeenSet = true; m_receivedMetadata = std::move(value); }

    /**
     * <p>Granted license received metadata.</p>
     */
    inline GrantedLicense& WithReceivedMetadata(const ReceivedMetadata& value) { SetReceivedMetadata(value); return *this;}

    /**
     * <p>Granted license received metadata.</p>
     */
    inline GrantedLicense& WithReceivedMetadata(ReceivedMetadata&& value) { SetReceivedMetadata(std::move(value)); return *this;}

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

    ReceivedMetadata m_receivedMetadata;
    bool m_receivedMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
