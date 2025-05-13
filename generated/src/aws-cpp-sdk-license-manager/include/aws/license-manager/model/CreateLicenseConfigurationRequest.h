/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/LicenseManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/model/LicenseCountingType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager/model/Tag.h>
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
  class CreateLicenseConfigurationRequest : public LicenseManagerRequest
  {
  public:
    AWS_LICENSEMANAGER_API CreateLicenseConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLicenseConfiguration"; }

    AWS_LICENSEMANAGER_API Aws::String SerializePayload() const override;

    AWS_LICENSEMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Name of the license configuration.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateLicenseConfigurationRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the license configuration.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateLicenseConfigurationRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Dimension used to track the license inventory.</p>
     */
    inline LicenseCountingType GetLicenseCountingType() const { return m_licenseCountingType; }
    inline bool LicenseCountingTypeHasBeenSet() const { return m_licenseCountingTypeHasBeenSet; }
    inline void SetLicenseCountingType(LicenseCountingType value) { m_licenseCountingTypeHasBeenSet = true; m_licenseCountingType = value; }
    inline CreateLicenseConfigurationRequest& WithLicenseCountingType(LicenseCountingType value) { SetLicenseCountingType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of licenses managed by the license configuration.</p>
     */
    inline long long GetLicenseCount() const { return m_licenseCount; }
    inline bool LicenseCountHasBeenSet() const { return m_licenseCountHasBeenSet; }
    inline void SetLicenseCount(long long value) { m_licenseCountHasBeenSet = true; m_licenseCount = value; }
    inline CreateLicenseConfigurationRequest& WithLicenseCount(long long value) { SetLicenseCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether hard or soft license enforcement is used. Exceeding a hard
     * limit blocks the launch of new instances.</p>
     */
    inline bool GetLicenseCountHardLimit() const { return m_licenseCountHardLimit; }
    inline bool LicenseCountHardLimitHasBeenSet() const { return m_licenseCountHardLimitHasBeenSet; }
    inline void SetLicenseCountHardLimit(bool value) { m_licenseCountHardLimitHasBeenSet = true; m_licenseCountHardLimit = value; }
    inline CreateLicenseConfigurationRequest& WithLicenseCountHardLimit(bool value) { SetLicenseCountHardLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>License rules. The syntax is #name=value (for example,
     * #allowedTenancy=EC2-DedicatedHost). The available rules vary by dimension, as
     * follows.</p> <ul> <li> <p> <code>Cores</code> dimension:
     * <code>allowedTenancy</code> | <code>licenseAffinityToHost</code> |
     * <code>maximumCores</code> | <code>minimumCores</code> </p> </li> <li> <p>
     * <code>Instances</code> dimension: <code>allowedTenancy</code> |
     * <code>maximumVcpus</code> | <code>minimumVcpus</code> </p> </li> <li> <p>
     * <code>Sockets</code> dimension: <code>allowedTenancy</code> |
     * <code>licenseAffinityToHost</code> | <code>maximumSockets</code> |
     * <code>minimumSockets</code> </p> </li> <li> <p> <code>vCPUs</code> dimension:
     * <code>allowedTenancy</code> | <code>honorVcpuOptimization</code> |
     * <code>maximumVcpus</code> | <code>minimumVcpus</code> </p> </li> </ul> <p>The
     * unit for <code>licenseAffinityToHost</code> is days and the range is 1 to 180.
     * The possible values for <code>allowedTenancy</code> are
     * <code>EC2-Default</code>, <code>EC2-DedicatedHost</code>, and
     * <code>EC2-DedicatedInstance</code>. The possible values for
     * <code>honorVcpuOptimization</code> are <code>True</code> and
     * <code>False</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLicenseRules() const { return m_licenseRules; }
    inline bool LicenseRulesHasBeenSet() const { return m_licenseRulesHasBeenSet; }
    template<typename LicenseRulesT = Aws::Vector<Aws::String>>
    void SetLicenseRules(LicenseRulesT&& value) { m_licenseRulesHasBeenSet = true; m_licenseRules = std::forward<LicenseRulesT>(value); }
    template<typename LicenseRulesT = Aws::Vector<Aws::String>>
    CreateLicenseConfigurationRequest& WithLicenseRules(LicenseRulesT&& value) { SetLicenseRules(std::forward<LicenseRulesT>(value)); return *this;}
    template<typename LicenseRulesT = Aws::String>
    CreateLicenseConfigurationRequest& AddLicenseRules(LicenseRulesT&& value) { m_licenseRulesHasBeenSet = true; m_licenseRules.emplace_back(std::forward<LicenseRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Tags to add to the license configuration.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateLicenseConfigurationRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateLicenseConfigurationRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When true, disassociates a resource when software is uninstalled.</p>
     */
    inline bool GetDisassociateWhenNotFound() const { return m_disassociateWhenNotFound; }
    inline bool DisassociateWhenNotFoundHasBeenSet() const { return m_disassociateWhenNotFoundHasBeenSet; }
    inline void SetDisassociateWhenNotFound(bool value) { m_disassociateWhenNotFoundHasBeenSet = true; m_disassociateWhenNotFound = value; }
    inline CreateLicenseConfigurationRequest& WithDisassociateWhenNotFound(bool value) { SetDisassociateWhenNotFound(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Product information.</p>
     */
    inline const Aws::Vector<ProductInformation>& GetProductInformationList() const { return m_productInformationList; }
    inline bool ProductInformationListHasBeenSet() const { return m_productInformationListHasBeenSet; }
    template<typename ProductInformationListT = Aws::Vector<ProductInformation>>
    void SetProductInformationList(ProductInformationListT&& value) { m_productInformationListHasBeenSet = true; m_productInformationList = std::forward<ProductInformationListT>(value); }
    template<typename ProductInformationListT = Aws::Vector<ProductInformation>>
    CreateLicenseConfigurationRequest& WithProductInformationList(ProductInformationListT&& value) { SetProductInformationList(std::forward<ProductInformationListT>(value)); return *this;}
    template<typename ProductInformationListT = ProductInformation>
    CreateLicenseConfigurationRequest& AddProductInformationList(ProductInformationListT&& value) { m_productInformationListHasBeenSet = true; m_productInformationList.emplace_back(std::forward<ProductInformationListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    LicenseCountingType m_licenseCountingType{LicenseCountingType::NOT_SET};
    bool m_licenseCountingTypeHasBeenSet = false;

    long long m_licenseCount{0};
    bool m_licenseCountHasBeenSet = false;

    bool m_licenseCountHardLimit{false};
    bool m_licenseCountHardLimitHasBeenSet = false;

    Aws::Vector<Aws::String> m_licenseRules;
    bool m_licenseRulesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_disassociateWhenNotFound{false};
    bool m_disassociateWhenNotFoundHasBeenSet = false;

    Aws::Vector<ProductInformation> m_productInformationList;
    bool m_productInformationListHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
