/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/LicenseManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/model/LicenseConfigurationStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager/model/ProductInformation.h>
#include <utility>

namespace Aws
{
namespace LicenseManager
{
namespace Model
{

  /**
   */
  class UpdateLicenseConfigurationRequest : public LicenseManagerRequest
  {
  public:
    AWS_LICENSEMANAGER_API UpdateLicenseConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLicenseConfiguration"; }

    AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

    AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the license configuration.</p>
     */
    inline const Aws::String& GetLicenseConfigurationArn() const { return m_licenseConfigurationArn; }
    inline bool LicenseConfigurationArnHasBeenSet() const { return m_licenseConfigurationArnHasBeenSet; }
    template<typename LicenseConfigurationArnT = Aws::String>
    void SetLicenseConfigurationArn(LicenseConfigurationArnT&& value) { m_licenseConfigurationArnHasBeenSet = true; m_licenseConfigurationArn = std::forward<LicenseConfigurationArnT>(value); }
    template<typename LicenseConfigurationArnT = Aws::String>
    UpdateLicenseConfigurationRequest& WithLicenseConfigurationArn(LicenseConfigurationArnT&& value) { SetLicenseConfigurationArn(std::forward<LicenseConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>New status of the license configuration.</p>
     */
    inline LicenseConfigurationStatus GetLicenseConfigurationStatus() const { return m_licenseConfigurationStatus; }
    inline bool LicenseConfigurationStatusHasBeenSet() const { return m_licenseConfigurationStatusHasBeenSet; }
    inline void SetLicenseConfigurationStatus(LicenseConfigurationStatus value) { m_licenseConfigurationStatusHasBeenSet = true; m_licenseConfigurationStatus = value; }
    inline UpdateLicenseConfigurationRequest& WithLicenseConfigurationStatus(LicenseConfigurationStatus value) { SetLicenseConfigurationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>New license rule. The only rule that you can add after you create a license
     * configuration is licenseAffinityToHost.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLicenseRules() const { return m_licenseRules; }
    inline bool LicenseRulesHasBeenSet() const { return m_licenseRulesHasBeenSet; }
    template<typename LicenseRulesT = Aws::Vector<Aws::String>>
    void SetLicenseRules(LicenseRulesT&& value) { m_licenseRulesHasBeenSet = true; m_licenseRules = std::forward<LicenseRulesT>(value); }
    template<typename LicenseRulesT = Aws::Vector<Aws::String>>
    UpdateLicenseConfigurationRequest& WithLicenseRules(LicenseRulesT&& value) { SetLicenseRules(std::forward<LicenseRulesT>(value)); return *this;}
    template<typename LicenseRulesT = Aws::String>
    UpdateLicenseConfigurationRequest& AddLicenseRules(LicenseRulesT&& value) { m_licenseRulesHasBeenSet = true; m_licenseRules.emplace_back(std::forward<LicenseRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>New number of licenses managed by the license configuration.</p>
     */
    inline long long GetLicenseCount() const { return m_licenseCount; }
    inline bool LicenseCountHasBeenSet() const { return m_licenseCountHasBeenSet; }
    inline void SetLicenseCount(long long value) { m_licenseCountHasBeenSet = true; m_licenseCount = value; }
    inline UpdateLicenseConfigurationRequest& WithLicenseCount(long long value) { SetLicenseCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>New hard limit of the number of available licenses.</p>
     */
    inline bool GetLicenseCountHardLimit() const { return m_licenseCountHardLimit; }
    inline bool LicenseCountHardLimitHasBeenSet() const { return m_licenseCountHardLimitHasBeenSet; }
    inline void SetLicenseCountHardLimit(bool value) { m_licenseCountHardLimitHasBeenSet = true; m_licenseCountHardLimit = value; }
    inline UpdateLicenseConfigurationRequest& WithLicenseCountHardLimit(bool value) { SetLicenseCountHardLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>New name of the license configuration.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateLicenseConfigurationRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>New description of the license configuration.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateLicenseConfigurationRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>New product information.</p>
     */
    inline const Aws::Vector<ProductInformation>& GetProductInformationList() const { return m_productInformationList; }
    inline bool ProductInformationListHasBeenSet() const { return m_productInformationListHasBeenSet; }
    template<typename ProductInformationListT = Aws::Vector<ProductInformation>>
    void SetProductInformationList(ProductInformationListT&& value) { m_productInformationListHasBeenSet = true; m_productInformationList = std::forward<ProductInformationListT>(value); }
    template<typename ProductInformationListT = Aws::Vector<ProductInformation>>
    UpdateLicenseConfigurationRequest& WithProductInformationList(ProductInformationListT&& value) { SetProductInformationList(std::forward<ProductInformationListT>(value)); return *this;}
    template<typename ProductInformationListT = ProductInformation>
    UpdateLicenseConfigurationRequest& AddProductInformationList(ProductInformationListT&& value) { m_productInformationListHasBeenSet = true; m_productInformationList.emplace_back(std::forward<ProductInformationListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When true, disassociates a resource when software is uninstalled.</p>
     */
    inline bool GetDisassociateWhenNotFound() const { return m_disassociateWhenNotFound; }
    inline bool DisassociateWhenNotFoundHasBeenSet() const { return m_disassociateWhenNotFoundHasBeenSet; }
    inline void SetDisassociateWhenNotFound(bool value) { m_disassociateWhenNotFoundHasBeenSet = true; m_disassociateWhenNotFound = value; }
    inline UpdateLicenseConfigurationRequest& WithDisassociateWhenNotFound(bool value) { SetDisassociateWhenNotFound(value); return *this;}
    ///@}
  private:

    Aws::String m_licenseConfigurationArn;
    bool m_licenseConfigurationArnHasBeenSet = false;

    LicenseConfigurationStatus m_licenseConfigurationStatus{LicenseConfigurationStatus::NOT_SET};
    bool m_licenseConfigurationStatusHasBeenSet = false;

    Aws::Vector<Aws::String> m_licenseRules;
    bool m_licenseRulesHasBeenSet = false;

    long long m_licenseCount{0};
    bool m_licenseCountHasBeenSet = false;

    bool m_licenseCountHardLimit{false};
    bool m_licenseCountHardLimitHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<ProductInformation> m_productInformationList;
    bool m_productInformationListHasBeenSet = false;

    bool m_disassociateWhenNotFound{false};
    bool m_disassociateWhenNotFoundHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
