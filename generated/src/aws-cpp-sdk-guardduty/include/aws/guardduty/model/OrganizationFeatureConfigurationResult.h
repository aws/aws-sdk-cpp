/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/OrgFeature.h>
#include <aws/guardduty/model/OrgFeatureStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/OrganizationAdditionalConfigurationResult.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/OrganizationFeatureConfigurationResult">AWS
   * API Reference</a></p>
   */
  class OrganizationFeatureConfigurationResult
  {
  public:
    AWS_GUARDDUTY_API OrganizationFeatureConfigurationResult() = default;
    AWS_GUARDDUTY_API OrganizationFeatureConfigurationResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API OrganizationFeatureConfigurationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the feature that is configured for the member accounts within the
     * organization.</p>
     */
    inline OrgFeature GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(OrgFeature value) { m_nameHasBeenSet = true; m_name = value; }
    inline OrganizationFeatureConfigurationResult& WithName(OrgFeature value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the status of the feature that is configured for the member
     * accounts within the organization.</p> <ul> <li> <p> <code>NEW</code>: Indicates
     * that when a new account joins the organization, they will have the feature
     * enabled automatically. </p> </li> <li> <p> <code>ALL</code>: Indicates that all
     * accounts in the organization have the feature enabled automatically. This
     * includes <code>NEW</code> accounts that join the organization and accounts that
     * may have been suspended or removed from the organization in GuardDuty.</p> </li>
     * <li> <p> <code>NONE</code>: Indicates that the feature will not be automatically
     * enabled for any account in the organization. In this case, each account will be
     * managed individually by the administrator.</p> </li> </ul>
     */
    inline OrgFeatureStatus GetAutoEnable() const { return m_autoEnable; }
    inline bool AutoEnableHasBeenSet() const { return m_autoEnableHasBeenSet; }
    inline void SetAutoEnable(OrgFeatureStatus value) { m_autoEnableHasBeenSet = true; m_autoEnable = value; }
    inline OrganizationFeatureConfigurationResult& WithAutoEnable(OrgFeatureStatus value) { SetAutoEnable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The additional configuration that is configured for the member accounts
     * within the organization.</p>
     */
    inline const Aws::Vector<OrganizationAdditionalConfigurationResult>& GetAdditionalConfiguration() const { return m_additionalConfiguration; }
    inline bool AdditionalConfigurationHasBeenSet() const { return m_additionalConfigurationHasBeenSet; }
    template<typename AdditionalConfigurationT = Aws::Vector<OrganizationAdditionalConfigurationResult>>
    void SetAdditionalConfiguration(AdditionalConfigurationT&& value) { m_additionalConfigurationHasBeenSet = true; m_additionalConfiguration = std::forward<AdditionalConfigurationT>(value); }
    template<typename AdditionalConfigurationT = Aws::Vector<OrganizationAdditionalConfigurationResult>>
    OrganizationFeatureConfigurationResult& WithAdditionalConfiguration(AdditionalConfigurationT&& value) { SetAdditionalConfiguration(std::forward<AdditionalConfigurationT>(value)); return *this;}
    template<typename AdditionalConfigurationT = OrganizationAdditionalConfigurationResult>
    OrganizationFeatureConfigurationResult& AddAdditionalConfiguration(AdditionalConfigurationT&& value) { m_additionalConfigurationHasBeenSet = true; m_additionalConfiguration.emplace_back(std::forward<AdditionalConfigurationT>(value)); return *this; }
    ///@}
  private:

    OrgFeature m_name{OrgFeature::NOT_SET};
    bool m_nameHasBeenSet = false;

    OrgFeatureStatus m_autoEnable{OrgFeatureStatus::NOT_SET};
    bool m_autoEnableHasBeenSet = false;

    Aws::Vector<OrganizationAdditionalConfigurationResult> m_additionalConfiguration;
    bool m_additionalConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
