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
    AWS_LICENSEMANAGER_API License() = default;
    AWS_LICENSEMANAGER_API License(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API License& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline const Aws::String& GetLicenseArn() const { return m_licenseArn; }
    inline bool LicenseArnHasBeenSet() const { return m_licenseArnHasBeenSet; }
    template<typename LicenseArnT = Aws::String>
    void SetLicenseArn(LicenseArnT&& value) { m_licenseArnHasBeenSet = true; m_licenseArn = std::forward<LicenseArnT>(value); }
    template<typename LicenseArnT = Aws::String>
    License& WithLicenseArn(LicenseArnT&& value) { SetLicenseArn(std::forward<LicenseArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>License name.</p>
     */
    inline const Aws::String& GetLicenseName() const { return m_licenseName; }
    inline bool LicenseNameHasBeenSet() const { return m_licenseNameHasBeenSet; }
    template<typename LicenseNameT = Aws::String>
    void SetLicenseName(LicenseNameT&& value) { m_licenseNameHasBeenSet = true; m_licenseName = std::forward<LicenseNameT>(value); }
    template<typename LicenseNameT = Aws::String>
    License& WithLicenseName(LicenseNameT&& value) { SetLicenseName(std::forward<LicenseNameT>(value)); return *this;}
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
    License& WithProductName(ProductNameT&& value) { SetProductName(std::forward<ProductNameT>(value)); return *this;}
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
    License& WithProductSKU(ProductSKUT&& value) { SetProductSKU(std::forward<ProductSKUT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>License issuer.</p>
     */
    inline const IssuerDetails& GetIssuer() const { return m_issuer; }
    inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }
    template<typename IssuerT = IssuerDetails>
    void SetIssuer(IssuerT&& value) { m_issuerHasBeenSet = true; m_issuer = std::forward<IssuerT>(value); }
    template<typename IssuerT = IssuerDetails>
    License& WithIssuer(IssuerT&& value) { SetIssuer(std::forward<IssuerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Home Region of the license.</p>
     */
    inline const Aws::String& GetHomeRegion() const { return m_homeRegion; }
    inline bool HomeRegionHasBeenSet() const { return m_homeRegionHasBeenSet; }
    template<typename HomeRegionT = Aws::String>
    void SetHomeRegion(HomeRegionT&& value) { m_homeRegionHasBeenSet = true; m_homeRegion = std::forward<HomeRegionT>(value); }
    template<typename HomeRegionT = Aws::String>
    License& WithHomeRegion(HomeRegionT&& value) { SetHomeRegion(std::forward<HomeRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>License status.</p>
     */
    inline LicenseStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(LicenseStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline License& WithStatus(LicenseStatus value) { SetStatus(value); return *this;}
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
    License& WithValidity(ValidityT&& value) { SetValidity(std::forward<ValidityT>(value)); return *this;}
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
    License& WithBeneficiary(BeneficiaryT&& value) { SetBeneficiary(std::forward<BeneficiaryT>(value)); return *this;}
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
    License& WithEntitlements(EntitlementsT&& value) { SetEntitlements(std::forward<EntitlementsT>(value)); return *this;}
    template<typename EntitlementsT = Entitlement>
    License& AddEntitlements(EntitlementsT&& value) { m_entitlementsHasBeenSet = true; m_entitlements.emplace_back(std::forward<EntitlementsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configuration for consumption of the license.</p>
     */
    inline const ConsumptionConfiguration& GetConsumptionConfiguration() const { return m_consumptionConfiguration; }
    inline bool ConsumptionConfigurationHasBeenSet() const { return m_consumptionConfigurationHasBeenSet; }
    template<typename ConsumptionConfigurationT = ConsumptionConfiguration>
    void SetConsumptionConfiguration(ConsumptionConfigurationT&& value) { m_consumptionConfigurationHasBeenSet = true; m_consumptionConfiguration = std::forward<ConsumptionConfigurationT>(value); }
    template<typename ConsumptionConfigurationT = ConsumptionConfiguration>
    License& WithConsumptionConfiguration(ConsumptionConfigurationT&& value) { SetConsumptionConfiguration(std::forward<ConsumptionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>License metadata.</p>
     */
    inline const Aws::Vector<Metadata>& GetLicenseMetadata() const { return m_licenseMetadata; }
    inline bool LicenseMetadataHasBeenSet() const { return m_licenseMetadataHasBeenSet; }
    template<typename LicenseMetadataT = Aws::Vector<Metadata>>
    void SetLicenseMetadata(LicenseMetadataT&& value) { m_licenseMetadataHasBeenSet = true; m_licenseMetadata = std::forward<LicenseMetadataT>(value); }
    template<typename LicenseMetadataT = Aws::Vector<Metadata>>
    License& WithLicenseMetadata(LicenseMetadataT&& value) { SetLicenseMetadata(std::forward<LicenseMetadataT>(value)); return *this;}
    template<typename LicenseMetadataT = Metadata>
    License& AddLicenseMetadata(LicenseMetadataT&& value) { m_licenseMetadataHasBeenSet = true; m_licenseMetadata.emplace_back(std::forward<LicenseMetadataT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>License creation time.</p>
     */
    inline const Aws::String& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::String>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::String>
    License& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>License version.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    License& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
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

    LicenseStatus m_status{LicenseStatus::NOT_SET};
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
