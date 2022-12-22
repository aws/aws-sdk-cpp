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
    AWS_LICENSEMANAGER_API UpdateLicenseConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLicenseConfiguration"; }

    AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

    AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Amazon Resource Name (ARN) of the license configuration.</p>
     */
    inline const Aws::String& GetLicenseConfigurationArn() const{ return m_licenseConfigurationArn; }

    /**
     * <p>Amazon Resource Name (ARN) of the license configuration.</p>
     */
    inline bool LicenseConfigurationArnHasBeenSet() const { return m_licenseConfigurationArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the license configuration.</p>
     */
    inline void SetLicenseConfigurationArn(const Aws::String& value) { m_licenseConfigurationArnHasBeenSet = true; m_licenseConfigurationArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the license configuration.</p>
     */
    inline void SetLicenseConfigurationArn(Aws::String&& value) { m_licenseConfigurationArnHasBeenSet = true; m_licenseConfigurationArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the license configuration.</p>
     */
    inline void SetLicenseConfigurationArn(const char* value) { m_licenseConfigurationArnHasBeenSet = true; m_licenseConfigurationArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the license configuration.</p>
     */
    inline UpdateLicenseConfigurationRequest& WithLicenseConfigurationArn(const Aws::String& value) { SetLicenseConfigurationArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the license configuration.</p>
     */
    inline UpdateLicenseConfigurationRequest& WithLicenseConfigurationArn(Aws::String&& value) { SetLicenseConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the license configuration.</p>
     */
    inline UpdateLicenseConfigurationRequest& WithLicenseConfigurationArn(const char* value) { SetLicenseConfigurationArn(value); return *this;}


    /**
     * <p>New status of the license configuration.</p>
     */
    inline const LicenseConfigurationStatus& GetLicenseConfigurationStatus() const{ return m_licenseConfigurationStatus; }

    /**
     * <p>New status of the license configuration.</p>
     */
    inline bool LicenseConfigurationStatusHasBeenSet() const { return m_licenseConfigurationStatusHasBeenSet; }

    /**
     * <p>New status of the license configuration.</p>
     */
    inline void SetLicenseConfigurationStatus(const LicenseConfigurationStatus& value) { m_licenseConfigurationStatusHasBeenSet = true; m_licenseConfigurationStatus = value; }

    /**
     * <p>New status of the license configuration.</p>
     */
    inline void SetLicenseConfigurationStatus(LicenseConfigurationStatus&& value) { m_licenseConfigurationStatusHasBeenSet = true; m_licenseConfigurationStatus = std::move(value); }

    /**
     * <p>New status of the license configuration.</p>
     */
    inline UpdateLicenseConfigurationRequest& WithLicenseConfigurationStatus(const LicenseConfigurationStatus& value) { SetLicenseConfigurationStatus(value); return *this;}

    /**
     * <p>New status of the license configuration.</p>
     */
    inline UpdateLicenseConfigurationRequest& WithLicenseConfigurationStatus(LicenseConfigurationStatus&& value) { SetLicenseConfigurationStatus(std::move(value)); return *this;}


    /**
     * <p>New license rule. The only rule that you can add after you create a license
     * configuration is licenseAffinityToHost.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLicenseRules() const{ return m_licenseRules; }

    /**
     * <p>New license rule. The only rule that you can add after you create a license
     * configuration is licenseAffinityToHost.</p>
     */
    inline bool LicenseRulesHasBeenSet() const { return m_licenseRulesHasBeenSet; }

    /**
     * <p>New license rule. The only rule that you can add after you create a license
     * configuration is licenseAffinityToHost.</p>
     */
    inline void SetLicenseRules(const Aws::Vector<Aws::String>& value) { m_licenseRulesHasBeenSet = true; m_licenseRules = value; }

    /**
     * <p>New license rule. The only rule that you can add after you create a license
     * configuration is licenseAffinityToHost.</p>
     */
    inline void SetLicenseRules(Aws::Vector<Aws::String>&& value) { m_licenseRulesHasBeenSet = true; m_licenseRules = std::move(value); }

    /**
     * <p>New license rule. The only rule that you can add after you create a license
     * configuration is licenseAffinityToHost.</p>
     */
    inline UpdateLicenseConfigurationRequest& WithLicenseRules(const Aws::Vector<Aws::String>& value) { SetLicenseRules(value); return *this;}

    /**
     * <p>New license rule. The only rule that you can add after you create a license
     * configuration is licenseAffinityToHost.</p>
     */
    inline UpdateLicenseConfigurationRequest& WithLicenseRules(Aws::Vector<Aws::String>&& value) { SetLicenseRules(std::move(value)); return *this;}

    /**
     * <p>New license rule. The only rule that you can add after you create a license
     * configuration is licenseAffinityToHost.</p>
     */
    inline UpdateLicenseConfigurationRequest& AddLicenseRules(const Aws::String& value) { m_licenseRulesHasBeenSet = true; m_licenseRules.push_back(value); return *this; }

    /**
     * <p>New license rule. The only rule that you can add after you create a license
     * configuration is licenseAffinityToHost.</p>
     */
    inline UpdateLicenseConfigurationRequest& AddLicenseRules(Aws::String&& value) { m_licenseRulesHasBeenSet = true; m_licenseRules.push_back(std::move(value)); return *this; }

    /**
     * <p>New license rule. The only rule that you can add after you create a license
     * configuration is licenseAffinityToHost.</p>
     */
    inline UpdateLicenseConfigurationRequest& AddLicenseRules(const char* value) { m_licenseRulesHasBeenSet = true; m_licenseRules.push_back(value); return *this; }


    /**
     * <p>New number of licenses managed by the license configuration.</p>
     */
    inline long long GetLicenseCount() const{ return m_licenseCount; }

    /**
     * <p>New number of licenses managed by the license configuration.</p>
     */
    inline bool LicenseCountHasBeenSet() const { return m_licenseCountHasBeenSet; }

    /**
     * <p>New number of licenses managed by the license configuration.</p>
     */
    inline void SetLicenseCount(long long value) { m_licenseCountHasBeenSet = true; m_licenseCount = value; }

    /**
     * <p>New number of licenses managed by the license configuration.</p>
     */
    inline UpdateLicenseConfigurationRequest& WithLicenseCount(long long value) { SetLicenseCount(value); return *this;}


    /**
     * <p>New hard limit of the number of available licenses.</p>
     */
    inline bool GetLicenseCountHardLimit() const{ return m_licenseCountHardLimit; }

    /**
     * <p>New hard limit of the number of available licenses.</p>
     */
    inline bool LicenseCountHardLimitHasBeenSet() const { return m_licenseCountHardLimitHasBeenSet; }

    /**
     * <p>New hard limit of the number of available licenses.</p>
     */
    inline void SetLicenseCountHardLimit(bool value) { m_licenseCountHardLimitHasBeenSet = true; m_licenseCountHardLimit = value; }

    /**
     * <p>New hard limit of the number of available licenses.</p>
     */
    inline UpdateLicenseConfigurationRequest& WithLicenseCountHardLimit(bool value) { SetLicenseCountHardLimit(value); return *this;}


    /**
     * <p>New name of the license configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>New name of the license configuration.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>New name of the license configuration.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>New name of the license configuration.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>New name of the license configuration.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>New name of the license configuration.</p>
     */
    inline UpdateLicenseConfigurationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>New name of the license configuration.</p>
     */
    inline UpdateLicenseConfigurationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>New name of the license configuration.</p>
     */
    inline UpdateLicenseConfigurationRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>New description of the license configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>New description of the license configuration.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>New description of the license configuration.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>New description of the license configuration.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>New description of the license configuration.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>New description of the license configuration.</p>
     */
    inline UpdateLicenseConfigurationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>New description of the license configuration.</p>
     */
    inline UpdateLicenseConfigurationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>New description of the license configuration.</p>
     */
    inline UpdateLicenseConfigurationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>New product information.</p>
     */
    inline const Aws::Vector<ProductInformation>& GetProductInformationList() const{ return m_productInformationList; }

    /**
     * <p>New product information.</p>
     */
    inline bool ProductInformationListHasBeenSet() const { return m_productInformationListHasBeenSet; }

    /**
     * <p>New product information.</p>
     */
    inline void SetProductInformationList(const Aws::Vector<ProductInformation>& value) { m_productInformationListHasBeenSet = true; m_productInformationList = value; }

    /**
     * <p>New product information.</p>
     */
    inline void SetProductInformationList(Aws::Vector<ProductInformation>&& value) { m_productInformationListHasBeenSet = true; m_productInformationList = std::move(value); }

    /**
     * <p>New product information.</p>
     */
    inline UpdateLicenseConfigurationRequest& WithProductInformationList(const Aws::Vector<ProductInformation>& value) { SetProductInformationList(value); return *this;}

    /**
     * <p>New product information.</p>
     */
    inline UpdateLicenseConfigurationRequest& WithProductInformationList(Aws::Vector<ProductInformation>&& value) { SetProductInformationList(std::move(value)); return *this;}

    /**
     * <p>New product information.</p>
     */
    inline UpdateLicenseConfigurationRequest& AddProductInformationList(const ProductInformation& value) { m_productInformationListHasBeenSet = true; m_productInformationList.push_back(value); return *this; }

    /**
     * <p>New product information.</p>
     */
    inline UpdateLicenseConfigurationRequest& AddProductInformationList(ProductInformation&& value) { m_productInformationListHasBeenSet = true; m_productInformationList.push_back(std::move(value)); return *this; }


    /**
     * <p>When true, disassociates a resource when software is uninstalled.</p>
     */
    inline bool GetDisassociateWhenNotFound() const{ return m_disassociateWhenNotFound; }

    /**
     * <p>When true, disassociates a resource when software is uninstalled.</p>
     */
    inline bool DisassociateWhenNotFoundHasBeenSet() const { return m_disassociateWhenNotFoundHasBeenSet; }

    /**
     * <p>When true, disassociates a resource when software is uninstalled.</p>
     */
    inline void SetDisassociateWhenNotFound(bool value) { m_disassociateWhenNotFoundHasBeenSet = true; m_disassociateWhenNotFound = value; }

    /**
     * <p>When true, disassociates a resource when software is uninstalled.</p>
     */
    inline UpdateLicenseConfigurationRequest& WithDisassociateWhenNotFound(bool value) { SetDisassociateWhenNotFound(value); return *this;}

  private:

    Aws::String m_licenseConfigurationArn;
    bool m_licenseConfigurationArnHasBeenSet = false;

    LicenseConfigurationStatus m_licenseConfigurationStatus;
    bool m_licenseConfigurationStatusHasBeenSet = false;

    Aws::Vector<Aws::String> m_licenseRules;
    bool m_licenseRulesHasBeenSet = false;

    long long m_licenseCount;
    bool m_licenseCountHasBeenSet = false;

    bool m_licenseCountHardLimit;
    bool m_licenseCountHardLimitHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<ProductInformation> m_productInformationList;
    bool m_productInformationListHasBeenSet = false;

    bool m_disassociateWhenNotFound;
    bool m_disassociateWhenNotFoundHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
