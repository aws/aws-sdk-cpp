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
    AWS_GUARDDUTY_API OrganizationFeatureConfigurationResult();
    AWS_GUARDDUTY_API OrganizationFeatureConfigurationResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API OrganizationFeatureConfigurationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the feature that is configured for the member accounts within the
     * organization.</p>
     */
    inline const OrgFeature& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const OrgFeature& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(OrgFeature&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline OrganizationFeatureConfigurationResult& WithName(const OrgFeature& value) { SetName(value); return *this;}
    inline OrganizationFeatureConfigurationResult& WithName(OrgFeature&& value) { SetName(std::move(value)); return *this;}
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
    inline const OrgFeatureStatus& GetAutoEnable() const{ return m_autoEnable; }
    inline bool AutoEnableHasBeenSet() const { return m_autoEnableHasBeenSet; }
    inline void SetAutoEnable(const OrgFeatureStatus& value) { m_autoEnableHasBeenSet = true; m_autoEnable = value; }
    inline void SetAutoEnable(OrgFeatureStatus&& value) { m_autoEnableHasBeenSet = true; m_autoEnable = std::move(value); }
    inline OrganizationFeatureConfigurationResult& WithAutoEnable(const OrgFeatureStatus& value) { SetAutoEnable(value); return *this;}
    inline OrganizationFeatureConfigurationResult& WithAutoEnable(OrgFeatureStatus&& value) { SetAutoEnable(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The additional configuration that is configured for the member accounts
     * within the organization.</p>
     */
    inline const Aws::Vector<OrganizationAdditionalConfigurationResult>& GetAdditionalConfiguration() const{ return m_additionalConfiguration; }
    inline bool AdditionalConfigurationHasBeenSet() const { return m_additionalConfigurationHasBeenSet; }
    inline void SetAdditionalConfiguration(const Aws::Vector<OrganizationAdditionalConfigurationResult>& value) { m_additionalConfigurationHasBeenSet = true; m_additionalConfiguration = value; }
    inline void SetAdditionalConfiguration(Aws::Vector<OrganizationAdditionalConfigurationResult>&& value) { m_additionalConfigurationHasBeenSet = true; m_additionalConfiguration = std::move(value); }
    inline OrganizationFeatureConfigurationResult& WithAdditionalConfiguration(const Aws::Vector<OrganizationAdditionalConfigurationResult>& value) { SetAdditionalConfiguration(value); return *this;}
    inline OrganizationFeatureConfigurationResult& WithAdditionalConfiguration(Aws::Vector<OrganizationAdditionalConfigurationResult>&& value) { SetAdditionalConfiguration(std::move(value)); return *this;}
    inline OrganizationFeatureConfigurationResult& AddAdditionalConfiguration(const OrganizationAdditionalConfigurationResult& value) { m_additionalConfigurationHasBeenSet = true; m_additionalConfiguration.push_back(value); return *this; }
    inline OrganizationFeatureConfigurationResult& AddAdditionalConfiguration(OrganizationAdditionalConfigurationResult&& value) { m_additionalConfigurationHasBeenSet = true; m_additionalConfiguration.push_back(std::move(value)); return *this; }
    ///@}
  private:

    OrgFeature m_name;
    bool m_nameHasBeenSet = false;

    OrgFeatureStatus m_autoEnable;
    bool m_autoEnableHasBeenSet = false;

    Aws::Vector<OrganizationAdditionalConfigurationResult> m_additionalConfiguration;
    bool m_additionalConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
