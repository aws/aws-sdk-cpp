/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/GuardDutyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_GUARDDUTY_API UpdateOrganizationConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateOrganizationConfiguration"; }

    AWS_GUARDDUTY_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the detector to update the delegated administrator for.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * <p>The ID of the detector to update the delegated administrator for.</p>
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * <p>The ID of the detector to update the delegated administrator for.</p>
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * <p>The ID of the detector to update the delegated administrator for.</p>
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * <p>The ID of the detector to update the delegated administrator for.</p>
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * <p>The ID of the detector to update the delegated administrator for.</p>
     */
    inline UpdateOrganizationConfigurationRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * <p>The ID of the detector to update the delegated administrator for.</p>
     */
    inline UpdateOrganizationConfigurationRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * <p>The ID of the detector to update the delegated administrator for.</p>
     */
    inline UpdateOrganizationConfigurationRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * <p>Indicates whether to automatically enable member accounts in the
     * organization.</p>
     */
    inline bool GetAutoEnable() const{ return m_autoEnable; }

    /**
     * <p>Indicates whether to automatically enable member accounts in the
     * organization.</p>
     */
    inline bool AutoEnableHasBeenSet() const { return m_autoEnableHasBeenSet; }

    /**
     * <p>Indicates whether to automatically enable member accounts in the
     * organization.</p>
     */
    inline void SetAutoEnable(bool value) { m_autoEnableHasBeenSet = true; m_autoEnable = value; }

    /**
     * <p>Indicates whether to automatically enable member accounts in the
     * organization.</p>
     */
    inline UpdateOrganizationConfigurationRequest& WithAutoEnable(bool value) { SetAutoEnable(value); return *this;}


    /**
     * <p>A list of features that will be configured for the organization.</p>
     */
    inline const Aws::Vector<OrganizationFeatureConfiguration>& GetFeatures() const{ return m_features; }

    /**
     * <p>A list of features that will be configured for the organization.</p>
     */
    inline bool FeaturesHasBeenSet() const { return m_featuresHasBeenSet; }

    /**
     * <p>A list of features that will be configured for the organization.</p>
     */
    inline void SetFeatures(const Aws::Vector<OrganizationFeatureConfiguration>& value) { m_featuresHasBeenSet = true; m_features = value; }

    /**
     * <p>A list of features that will be configured for the organization.</p>
     */
    inline void SetFeatures(Aws::Vector<OrganizationFeatureConfiguration>&& value) { m_featuresHasBeenSet = true; m_features = std::move(value); }

    /**
     * <p>A list of features that will be configured for the organization.</p>
     */
    inline UpdateOrganizationConfigurationRequest& WithFeatures(const Aws::Vector<OrganizationFeatureConfiguration>& value) { SetFeatures(value); return *this;}

    /**
     * <p>A list of features that will be configured for the organization.</p>
     */
    inline UpdateOrganizationConfigurationRequest& WithFeatures(Aws::Vector<OrganizationFeatureConfiguration>&& value) { SetFeatures(std::move(value)); return *this;}

    /**
     * <p>A list of features that will be configured for the organization.</p>
     */
    inline UpdateOrganizationConfigurationRequest& AddFeatures(const OrganizationFeatureConfiguration& value) { m_featuresHasBeenSet = true; m_features.push_back(value); return *this; }

    /**
     * <p>A list of features that will be configured for the organization.</p>
     */
    inline UpdateOrganizationConfigurationRequest& AddFeatures(OrganizationFeatureConfiguration&& value) { m_featuresHasBeenSet = true; m_features.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    bool m_autoEnable;
    bool m_autoEnableHasBeenSet = false;

    Aws::Vector<OrganizationFeatureConfiguration> m_features;
    bool m_featuresHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
