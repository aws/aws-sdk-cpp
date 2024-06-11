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


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline const Aws::String& GetLicenseArn() const{ return m_licenseArn; }
    inline bool LicenseArnHasBeenSet() const { return m_licenseArnHasBeenSet; }
    inline void SetLicenseArn(const Aws::String& value) { m_licenseArnHasBeenSet = true; m_licenseArn = value; }
    inline void SetLicenseArn(Aws::String&& value) { m_licenseArnHasBeenSet = true; m_licenseArn = std::move(value); }
    inline void SetLicenseArn(const char* value) { m_licenseArnHasBeenSet = true; m_licenseArn.assign(value); }
    inline GrantedLicense& WithLicenseArn(const Aws::String& value) { SetLicenseArn(value); return *this;}
    inline GrantedLicense& WithLicenseArn(Aws::String&& value) { SetLicenseArn(std::move(value)); return *this;}
    inline GrantedLicense& WithLicenseArn(const char* value) { SetLicenseArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>License name.</p>
     */
    inline const Aws::String& GetLicenseName() const{ return m_licenseName; }
    inline bool LicenseNameHasBeenSet() const { return m_licenseNameHasBeenSet; }
    inline void SetLicenseName(const Aws::String& value) { m_licenseNameHasBeenSet = true; m_licenseName = value; }
    inline void SetLicenseName(Aws::String&& value) { m_licenseNameHasBeenSet = true; m_licenseName = std::move(value); }
    inline void SetLicenseName(const char* value) { m_licenseNameHasBeenSet = true; m_licenseName.assign(value); }
    inline GrantedLicense& WithLicenseName(const Aws::String& value) { SetLicenseName(value); return *this;}
    inline GrantedLicense& WithLicenseName(Aws::String&& value) { SetLicenseName(std::move(value)); return *this;}
    inline GrantedLicense& WithLicenseName(const char* value) { SetLicenseName(value); return *this;}
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
    inline GrantedLicense& WithProductName(const Aws::String& value) { SetProductName(value); return *this;}
    inline GrantedLicense& WithProductName(Aws::String&& value) { SetProductName(std::move(value)); return *this;}
    inline GrantedLicense& WithProductName(const char* value) { SetProductName(value); return *this;}
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
    inline GrantedLicense& WithProductSKU(const Aws::String& value) { SetProductSKU(value); return *this;}
    inline GrantedLicense& WithProductSKU(Aws::String&& value) { SetProductSKU(std::move(value)); return *this;}
    inline GrantedLicense& WithProductSKU(const char* value) { SetProductSKU(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Granted license issuer.</p>
     */
    inline const IssuerDetails& GetIssuer() const{ return m_issuer; }
    inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }
    inline void SetIssuer(const IssuerDetails& value) { m_issuerHasBeenSet = true; m_issuer = value; }
    inline void SetIssuer(IssuerDetails&& value) { m_issuerHasBeenSet = true; m_issuer = std::move(value); }
    inline GrantedLicense& WithIssuer(const IssuerDetails& value) { SetIssuer(value); return *this;}
    inline GrantedLicense& WithIssuer(IssuerDetails&& value) { SetIssuer(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Home Region of the granted license.</p>
     */
    inline const Aws::String& GetHomeRegion() const{ return m_homeRegion; }
    inline bool HomeRegionHasBeenSet() const { return m_homeRegionHasBeenSet; }
    inline void SetHomeRegion(const Aws::String& value) { m_homeRegionHasBeenSet = true; m_homeRegion = value; }
    inline void SetHomeRegion(Aws::String&& value) { m_homeRegionHasBeenSet = true; m_homeRegion = std::move(value); }
    inline void SetHomeRegion(const char* value) { m_homeRegionHasBeenSet = true; m_homeRegion.assign(value); }
    inline GrantedLicense& WithHomeRegion(const Aws::String& value) { SetHomeRegion(value); return *this;}
    inline GrantedLicense& WithHomeRegion(Aws::String&& value) { SetHomeRegion(std::move(value)); return *this;}
    inline GrantedLicense& WithHomeRegion(const char* value) { SetHomeRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Granted license status.</p>
     */
    inline const LicenseStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const LicenseStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(LicenseStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline GrantedLicense& WithStatus(const LicenseStatus& value) { SetStatus(value); return *this;}
    inline GrantedLicense& WithStatus(LicenseStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time range during which the granted license is valid, in ISO8601-UTC
     * format.</p>
     */
    inline const DatetimeRange& GetValidity() const{ return m_validity; }
    inline bool ValidityHasBeenSet() const { return m_validityHasBeenSet; }
    inline void SetValidity(const DatetimeRange& value) { m_validityHasBeenSet = true; m_validity = value; }
    inline void SetValidity(DatetimeRange&& value) { m_validityHasBeenSet = true; m_validity = std::move(value); }
    inline GrantedLicense& WithValidity(const DatetimeRange& value) { SetValidity(value); return *this;}
    inline GrantedLicense& WithValidity(DatetimeRange&& value) { SetValidity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Granted license beneficiary.</p>
     */
    inline const Aws::String& GetBeneficiary() const{ return m_beneficiary; }
    inline bool BeneficiaryHasBeenSet() const { return m_beneficiaryHasBeenSet; }
    inline void SetBeneficiary(const Aws::String& value) { m_beneficiaryHasBeenSet = true; m_beneficiary = value; }
    inline void SetBeneficiary(Aws::String&& value) { m_beneficiaryHasBeenSet = true; m_beneficiary = std::move(value); }
    inline void SetBeneficiary(const char* value) { m_beneficiaryHasBeenSet = true; m_beneficiary.assign(value); }
    inline GrantedLicense& WithBeneficiary(const Aws::String& value) { SetBeneficiary(value); return *this;}
    inline GrantedLicense& WithBeneficiary(Aws::String&& value) { SetBeneficiary(std::move(value)); return *this;}
    inline GrantedLicense& WithBeneficiary(const char* value) { SetBeneficiary(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>License entitlements.</p>
     */
    inline const Aws::Vector<Entitlement>& GetEntitlements() const{ return m_entitlements; }
    inline bool EntitlementsHasBeenSet() const { return m_entitlementsHasBeenSet; }
    inline void SetEntitlements(const Aws::Vector<Entitlement>& value) { m_entitlementsHasBeenSet = true; m_entitlements = value; }
    inline void SetEntitlements(Aws::Vector<Entitlement>&& value) { m_entitlementsHasBeenSet = true; m_entitlements = std::move(value); }
    inline GrantedLicense& WithEntitlements(const Aws::Vector<Entitlement>& value) { SetEntitlements(value); return *this;}
    inline GrantedLicense& WithEntitlements(Aws::Vector<Entitlement>&& value) { SetEntitlements(std::move(value)); return *this;}
    inline GrantedLicense& AddEntitlements(const Entitlement& value) { m_entitlementsHasBeenSet = true; m_entitlements.push_back(value); return *this; }
    inline GrantedLicense& AddEntitlements(Entitlement&& value) { m_entitlementsHasBeenSet = true; m_entitlements.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configuration for consumption of the license.</p>
     */
    inline const ConsumptionConfiguration& GetConsumptionConfiguration() const{ return m_consumptionConfiguration; }
    inline bool ConsumptionConfigurationHasBeenSet() const { return m_consumptionConfigurationHasBeenSet; }
    inline void SetConsumptionConfiguration(const ConsumptionConfiguration& value) { m_consumptionConfigurationHasBeenSet = true; m_consumptionConfiguration = value; }
    inline void SetConsumptionConfiguration(ConsumptionConfiguration&& value) { m_consumptionConfigurationHasBeenSet = true; m_consumptionConfiguration = std::move(value); }
    inline GrantedLicense& WithConsumptionConfiguration(const ConsumptionConfiguration& value) { SetConsumptionConfiguration(value); return *this;}
    inline GrantedLicense& WithConsumptionConfiguration(ConsumptionConfiguration&& value) { SetConsumptionConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Granted license metadata.</p>
     */
    inline const Aws::Vector<Metadata>& GetLicenseMetadata() const{ return m_licenseMetadata; }
    inline bool LicenseMetadataHasBeenSet() const { return m_licenseMetadataHasBeenSet; }
    inline void SetLicenseMetadata(const Aws::Vector<Metadata>& value) { m_licenseMetadataHasBeenSet = true; m_licenseMetadata = value; }
    inline void SetLicenseMetadata(Aws::Vector<Metadata>&& value) { m_licenseMetadataHasBeenSet = true; m_licenseMetadata = std::move(value); }
    inline GrantedLicense& WithLicenseMetadata(const Aws::Vector<Metadata>& value) { SetLicenseMetadata(value); return *this;}
    inline GrantedLicense& WithLicenseMetadata(Aws::Vector<Metadata>&& value) { SetLicenseMetadata(std::move(value)); return *this;}
    inline GrantedLicense& AddLicenseMetadata(const Metadata& value) { m_licenseMetadataHasBeenSet = true; m_licenseMetadata.push_back(value); return *this; }
    inline GrantedLicense& AddLicenseMetadata(Metadata&& value) { m_licenseMetadataHasBeenSet = true; m_licenseMetadata.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Creation time of the granted license.</p>
     */
    inline const Aws::String& GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(const Aws::String& value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline void SetCreateTime(Aws::String&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }
    inline void SetCreateTime(const char* value) { m_createTimeHasBeenSet = true; m_createTime.assign(value); }
    inline GrantedLicense& WithCreateTime(const Aws::String& value) { SetCreateTime(value); return *this;}
    inline GrantedLicense& WithCreateTime(Aws::String&& value) { SetCreateTime(std::move(value)); return *this;}
    inline GrantedLicense& WithCreateTime(const char* value) { SetCreateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version of the granted license.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline GrantedLicense& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline GrantedLicense& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline GrantedLicense& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Granted license received metadata.</p>
     */
    inline const ReceivedMetadata& GetReceivedMetadata() const{ return m_receivedMetadata; }
    inline bool ReceivedMetadataHasBeenSet() const { return m_receivedMetadataHasBeenSet; }
    inline void SetReceivedMetadata(const ReceivedMetadata& value) { m_receivedMetadataHasBeenSet = true; m_receivedMetadata = value; }
    inline void SetReceivedMetadata(ReceivedMetadata&& value) { m_receivedMetadataHasBeenSet = true; m_receivedMetadata = std::move(value); }
    inline GrantedLicense& WithReceivedMetadata(const ReceivedMetadata& value) { SetReceivedMetadata(value); return *this;}
    inline GrantedLicense& WithReceivedMetadata(ReceivedMetadata&& value) { SetReceivedMetadata(std::move(value)); return *this;}
    ///@}
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
