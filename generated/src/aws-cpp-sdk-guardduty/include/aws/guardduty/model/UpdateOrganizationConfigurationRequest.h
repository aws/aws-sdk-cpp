/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/GuardDutyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/AutoEnableMembers.h>
#include <aws/guardduty/model/OrganizationFeatureConfiguration.h>
#include <utility>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

  /**
   */
  class UpdateOrganizationConfigurationRequest : public GuardDutyRequest
  {
  public:
    AWS_GUARDDUTY_API UpdateOrganizationConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateOrganizationConfiguration"; }

    AWS_GUARDDUTY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the detector that configures the delegated administrator.</p> <p>To
     * find the <code>detectorId</code> in the current Region, see the Settings page in
     * the GuardDuty console, or run the <a
     * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_ListDetectors.html">ListDetectors</a>
     * API.</p>
     */
    inline const Aws::String& GetDetectorId() const { return m_detectorId; }
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }
    template<typename DetectorIdT = Aws::String>
    void SetDetectorId(DetectorIdT&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::forward<DetectorIdT>(value); }
    template<typename DetectorIdT = Aws::String>
    UpdateOrganizationConfigurationRequest& WithDetectorId(DetectorIdT&& value) { SetDetectorId(std::forward<DetectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of features that will be configured for the organization.</p>
     */
    inline const Aws::Vector<OrganizationFeatureConfiguration>& GetFeatures() const { return m_features; }
    inline bool FeaturesHasBeenSet() const { return m_featuresHasBeenSet; }
    template<typename FeaturesT = Aws::Vector<OrganizationFeatureConfiguration>>
    void SetFeatures(FeaturesT&& value) { m_featuresHasBeenSet = true; m_features = std::forward<FeaturesT>(value); }
    template<typename FeaturesT = Aws::Vector<OrganizationFeatureConfiguration>>
    UpdateOrganizationConfigurationRequest& WithFeatures(FeaturesT&& value) { SetFeatures(std::forward<FeaturesT>(value)); return *this;}
    template<typename FeaturesT = OrganizationFeatureConfiguration>
    UpdateOrganizationConfigurationRequest& AddFeatures(FeaturesT&& value) { m_featuresHasBeenSet = true; m_features.emplace_back(std::forward<FeaturesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the auto-enablement configuration of GuardDuty for the member
     * accounts in the organization. You must provide a value for either
     * <code>autoEnableOrganizationMembers</code> or <code>autoEnable</code>. </p>
     * <p>Use one of the following configuration values for
     * <code>autoEnableOrganizationMembers</code>:</p> <ul> <li> <p> <code>NEW</code>:
     * Indicates that when a new account joins the organization, they will have
     * GuardDuty enabled automatically. </p> </li> <li> <p> <code>ALL</code>: Indicates
     * that all accounts in the organization have GuardDuty enabled automatically. This
     * includes <code>NEW</code> accounts that join the organization and accounts that
     * may have been suspended or removed from the organization in GuardDuty.</p> <p>It
     * may take up to 24 hours to update the configuration for all the member
     * accounts.</p> </li> <li> <p> <code>NONE</code>: Indicates that GuardDuty will
     * not be automatically enabled for any account in the organization. The
     * administrator must manage GuardDuty for each account in the organization
     * individually.</p> <p>When you update the auto-enable setting from
     * <code>ALL</code> or <code>NEW</code> to <code>NONE</code>, this action doesn't
     * disable the corresponding option for your existing accounts. This configuration
     * will apply to the new accounts that join the organization. After you update the
     * auto-enable settings, no new account will have the corresponding option as
     * enabled.</p> </li> </ul>
     */
    inline AutoEnableMembers GetAutoEnableOrganizationMembers() const { return m_autoEnableOrganizationMembers; }
    inline bool AutoEnableOrganizationMembersHasBeenSet() const { return m_autoEnableOrganizationMembersHasBeenSet; }
    inline void SetAutoEnableOrganizationMembers(AutoEnableMembers value) { m_autoEnableOrganizationMembersHasBeenSet = true; m_autoEnableOrganizationMembers = value; }
    inline UpdateOrganizationConfigurationRequest& WithAutoEnableOrganizationMembers(AutoEnableMembers value) { SetAutoEnableOrganizationMembers(value); return *this;}
    ///@}
  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::Vector<OrganizationFeatureConfiguration> m_features;
    bool m_featuresHasBeenSet = false;

    AutoEnableMembers m_autoEnableOrganizationMembers{AutoEnableMembers::NOT_SET};
    bool m_autoEnableOrganizationMembersHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
