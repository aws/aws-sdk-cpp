/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/OrgFeature.h>
#include <aws/guardduty/model/OrgFeatureStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/OrganizationAdditionalConfiguration.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>A list of features which will be configured for the
   * organization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/OrganizationFeatureConfiguration">AWS
   * API Reference</a></p>
   */
  class OrganizationFeatureConfiguration
  {
  public:
    AWS_GUARDDUTY_API OrganizationFeatureConfiguration() = default;
    AWS_GUARDDUTY_API OrganizationFeatureConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API OrganizationFeatureConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the feature that will be configured for the organization.</p>
     */
    inline OrgFeature GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(OrgFeature value) { m_nameHasBeenSet = true; m_name = value; }
    inline OrganizationFeatureConfiguration& WithName(OrgFeature value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the status of the feature that is configured for the member
     * accounts within the organization. One of the following values is the status for
     * the entire organization:</p> <ul> <li> <p> <code>NEW</code>: Indicates that when
     * a new account joins the organization, they will have the feature enabled
     * automatically. </p> </li> <li> <p> <code>ALL</code>: Indicates that all accounts
     * in the organization have the feature enabled automatically. This includes
     * <code>NEW</code> accounts that join the organization and accounts that may have
     * been suspended or removed from the organization in GuardDuty.</p> <p>It may take
     * up to 24 hours to update the configuration for all the member accounts.</p>
     * </li> <li> <p> <code>NONE</code>: Indicates that the feature will not be
     * automatically enabled for any account in the organization. The administrator
     * must manage the feature for each account individually.</p> </li> </ul>
     */
    inline OrgFeatureStatus GetAutoEnable() const { return m_autoEnable; }
    inline bool AutoEnableHasBeenSet() const { return m_autoEnableHasBeenSet; }
    inline void SetAutoEnable(OrgFeatureStatus value) { m_autoEnableHasBeenSet = true; m_autoEnable = value; }
    inline OrganizationFeatureConfiguration& WithAutoEnable(OrgFeatureStatus value) { SetAutoEnable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The additional information that will be configured for the organization.</p>
     */
    inline const Aws::Vector<OrganizationAdditionalConfiguration>& GetAdditionalConfiguration() const { return m_additionalConfiguration; }
    inline bool AdditionalConfigurationHasBeenSet() const { return m_additionalConfigurationHasBeenSet; }
    template<typename AdditionalConfigurationT = Aws::Vector<OrganizationAdditionalConfiguration>>
    void SetAdditionalConfiguration(AdditionalConfigurationT&& value) { m_additionalConfigurationHasBeenSet = true; m_additionalConfiguration = std::forward<AdditionalConfigurationT>(value); }
    template<typename AdditionalConfigurationT = Aws::Vector<OrganizationAdditionalConfiguration>>
    OrganizationFeatureConfiguration& WithAdditionalConfiguration(AdditionalConfigurationT&& value) { SetAdditionalConfiguration(std::forward<AdditionalConfigurationT>(value)); return *this;}
    template<typename AdditionalConfigurationT = OrganizationAdditionalConfiguration>
    OrganizationFeatureConfiguration& AddAdditionalConfiguration(AdditionalConfigurationT&& value) { m_additionalConfigurationHasBeenSet = true; m_additionalConfiguration.emplace_back(std::forward<AdditionalConfigurationT>(value)); return *this; }
    ///@}
  private:

    OrgFeature m_name{OrgFeature::NOT_SET};
    bool m_nameHasBeenSet = false;

    OrgFeatureStatus m_autoEnable{OrgFeatureStatus::NOT_SET};
    bool m_autoEnableHasBeenSet = false;

    Aws::Vector<OrganizationAdditionalConfiguration> m_additionalConfiguration;
    bool m_additionalConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
