/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iot/model/MetricsExportConfig.h>
#include <aws/iot/model/Behavior.h>
#include <aws/iot/model/AlertTargetType.h>
#include <aws/iot/model/AlertTarget.h>
#include <aws/iot/model/MetricToRetain.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   */
  class UpdateSecurityProfileRequest : public IoTRequest
  {
  public:
    AWS_IOT_API UpdateSecurityProfileRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSecurityProfile"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the security profile you want to update.</p>
     */
    inline const Aws::String& GetSecurityProfileName() const { return m_securityProfileName; }
    inline bool SecurityProfileNameHasBeenSet() const { return m_securityProfileNameHasBeenSet; }
    template<typename SecurityProfileNameT = Aws::String>
    void SetSecurityProfileName(SecurityProfileNameT&& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = std::forward<SecurityProfileNameT>(value); }
    template<typename SecurityProfileNameT = Aws::String>
    UpdateSecurityProfileRequest& WithSecurityProfileName(SecurityProfileNameT&& value) { SetSecurityProfileName(std::forward<SecurityProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the security profile.</p>
     */
    inline const Aws::String& GetSecurityProfileDescription() const { return m_securityProfileDescription; }
    inline bool SecurityProfileDescriptionHasBeenSet() const { return m_securityProfileDescriptionHasBeenSet; }
    template<typename SecurityProfileDescriptionT = Aws::String>
    void SetSecurityProfileDescription(SecurityProfileDescriptionT&& value) { m_securityProfileDescriptionHasBeenSet = true; m_securityProfileDescription = std::forward<SecurityProfileDescriptionT>(value); }
    template<typename SecurityProfileDescriptionT = Aws::String>
    UpdateSecurityProfileRequest& WithSecurityProfileDescription(SecurityProfileDescriptionT&& value) { SetSecurityProfileDescription(std::forward<SecurityProfileDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the behaviors that, when violated by a device (thing), cause an
     * alert.</p>
     */
    inline const Aws::Vector<Behavior>& GetBehaviors() const { return m_behaviors; }
    inline bool BehaviorsHasBeenSet() const { return m_behaviorsHasBeenSet; }
    template<typename BehaviorsT = Aws::Vector<Behavior>>
    void SetBehaviors(BehaviorsT&& value) { m_behaviorsHasBeenSet = true; m_behaviors = std::forward<BehaviorsT>(value); }
    template<typename BehaviorsT = Aws::Vector<Behavior>>
    UpdateSecurityProfileRequest& WithBehaviors(BehaviorsT&& value) { SetBehaviors(std::forward<BehaviorsT>(value)); return *this;}
    template<typename BehaviorsT = Behavior>
    UpdateSecurityProfileRequest& AddBehaviors(BehaviorsT&& value) { m_behaviorsHasBeenSet = true; m_behaviors.emplace_back(std::forward<BehaviorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Where the alerts are sent. (Alerts are always sent to the console.)</p>
     */
    inline const Aws::Map<AlertTargetType, AlertTarget>& GetAlertTargets() const { return m_alertTargets; }
    inline bool AlertTargetsHasBeenSet() const { return m_alertTargetsHasBeenSet; }
    template<typename AlertTargetsT = Aws::Map<AlertTargetType, AlertTarget>>
    void SetAlertTargets(AlertTargetsT&& value) { m_alertTargetsHasBeenSet = true; m_alertTargets = std::forward<AlertTargetsT>(value); }
    template<typename AlertTargetsT = Aws::Map<AlertTargetType, AlertTarget>>
    UpdateSecurityProfileRequest& WithAlertTargets(AlertTargetsT&& value) { SetAlertTargets(std::forward<AlertTargetsT>(value)); return *this;}
    inline UpdateSecurityProfileRequest& AddAlertTargets(AlertTargetType key, AlertTarget value) {
      m_alertTargetsHasBeenSet = true; m_alertTargets.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A list of metrics whose data is retained (stored). By default, data is
     * retained for any metric used in the profile's behaviors, but it is also retained
     * for any metric specified here. Can be used with custom metrics; cannot be used
     * with dimensions.</p>
     */
    inline const Aws::Vector<MetricToRetain>& GetAdditionalMetricsToRetainV2() const { return m_additionalMetricsToRetainV2; }
    inline bool AdditionalMetricsToRetainV2HasBeenSet() const { return m_additionalMetricsToRetainV2HasBeenSet; }
    template<typename AdditionalMetricsToRetainV2T = Aws::Vector<MetricToRetain>>
    void SetAdditionalMetricsToRetainV2(AdditionalMetricsToRetainV2T&& value) { m_additionalMetricsToRetainV2HasBeenSet = true; m_additionalMetricsToRetainV2 = std::forward<AdditionalMetricsToRetainV2T>(value); }
    template<typename AdditionalMetricsToRetainV2T = Aws::Vector<MetricToRetain>>
    UpdateSecurityProfileRequest& WithAdditionalMetricsToRetainV2(AdditionalMetricsToRetainV2T&& value) { SetAdditionalMetricsToRetainV2(std::forward<AdditionalMetricsToRetainV2T>(value)); return *this;}
    template<typename AdditionalMetricsToRetainV2T = MetricToRetain>
    UpdateSecurityProfileRequest& AddAdditionalMetricsToRetainV2(AdditionalMetricsToRetainV2T&& value) { m_additionalMetricsToRetainV2HasBeenSet = true; m_additionalMetricsToRetainV2.emplace_back(std::forward<AdditionalMetricsToRetainV2T>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If true, delete all <code>behaviors</code> defined for this security profile.
     * If any <code>behaviors</code> are defined in the current invocation, an
     * exception occurs.</p>
     */
    inline bool GetDeleteBehaviors() const { return m_deleteBehaviors; }
    inline bool DeleteBehaviorsHasBeenSet() const { return m_deleteBehaviorsHasBeenSet; }
    inline void SetDeleteBehaviors(bool value) { m_deleteBehaviorsHasBeenSet = true; m_deleteBehaviors = value; }
    inline UpdateSecurityProfileRequest& WithDeleteBehaviors(bool value) { SetDeleteBehaviors(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If true, delete all <code>alertTargets</code> defined for this security
     * profile. If any <code>alertTargets</code> are defined in the current invocation,
     * an exception occurs.</p>
     */
    inline bool GetDeleteAlertTargets() const { return m_deleteAlertTargets; }
    inline bool DeleteAlertTargetsHasBeenSet() const { return m_deleteAlertTargetsHasBeenSet; }
    inline void SetDeleteAlertTargets(bool value) { m_deleteAlertTargetsHasBeenSet = true; m_deleteAlertTargets = value; }
    inline UpdateSecurityProfileRequest& WithDeleteAlertTargets(bool value) { SetDeleteAlertTargets(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If true, delete all <code>additionalMetricsToRetain</code> defined for this
     * security profile. If any <code>additionalMetricsToRetain</code> are defined in
     * the current invocation, an exception occurs.</p>
     */
    inline bool GetDeleteAdditionalMetricsToRetain() const { return m_deleteAdditionalMetricsToRetain; }
    inline bool DeleteAdditionalMetricsToRetainHasBeenSet() const { return m_deleteAdditionalMetricsToRetainHasBeenSet; }
    inline void SetDeleteAdditionalMetricsToRetain(bool value) { m_deleteAdditionalMetricsToRetainHasBeenSet = true; m_deleteAdditionalMetricsToRetain = value; }
    inline UpdateSecurityProfileRequest& WithDeleteAdditionalMetricsToRetain(bool value) { SetDeleteAdditionalMetricsToRetain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expected version of the security profile. A new version is generated
     * whenever the security profile is updated. If you specify a value that is
     * different from the actual version, a <code>VersionConflictException</code> is
     * thrown.</p>
     */
    inline long long GetExpectedVersion() const { return m_expectedVersion; }
    inline bool ExpectedVersionHasBeenSet() const { return m_expectedVersionHasBeenSet; }
    inline void SetExpectedVersion(long long value) { m_expectedVersionHasBeenSet = true; m_expectedVersion = value; }
    inline UpdateSecurityProfileRequest& WithExpectedVersion(long long value) { SetExpectedVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the MQTT topic and role ARN required for metric export.</p>
     */
    inline const MetricsExportConfig& GetMetricsExportConfig() const { return m_metricsExportConfig; }
    inline bool MetricsExportConfigHasBeenSet() const { return m_metricsExportConfigHasBeenSet; }
    template<typename MetricsExportConfigT = MetricsExportConfig>
    void SetMetricsExportConfig(MetricsExportConfigT&& value) { m_metricsExportConfigHasBeenSet = true; m_metricsExportConfig = std::forward<MetricsExportConfigT>(value); }
    template<typename MetricsExportConfigT = MetricsExportConfig>
    UpdateSecurityProfileRequest& WithMetricsExportConfig(MetricsExportConfigT&& value) { SetMetricsExportConfig(std::forward<MetricsExportConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set the value as true to delete metrics export related configurations.</p>
     */
    inline bool GetDeleteMetricsExportConfig() const { return m_deleteMetricsExportConfig; }
    inline bool DeleteMetricsExportConfigHasBeenSet() const { return m_deleteMetricsExportConfigHasBeenSet; }
    inline void SetDeleteMetricsExportConfig(bool value) { m_deleteMetricsExportConfigHasBeenSet = true; m_deleteMetricsExportConfig = value; }
    inline UpdateSecurityProfileRequest& WithDeleteMetricsExportConfig(bool value) { SetDeleteMetricsExportConfig(value); return *this;}
    ///@}
  private:

    Aws::String m_securityProfileName;
    bool m_securityProfileNameHasBeenSet = false;

    Aws::String m_securityProfileDescription;
    bool m_securityProfileDescriptionHasBeenSet = false;

    Aws::Vector<Behavior> m_behaviors;
    bool m_behaviorsHasBeenSet = false;

    Aws::Map<AlertTargetType, AlertTarget> m_alertTargets;
    bool m_alertTargetsHasBeenSet = false;

    Aws::Vector<MetricToRetain> m_additionalMetricsToRetainV2;
    bool m_additionalMetricsToRetainV2HasBeenSet = false;

    bool m_deleteBehaviors{false};
    bool m_deleteBehaviorsHasBeenSet = false;

    bool m_deleteAlertTargets{false};
    bool m_deleteAlertTargetsHasBeenSet = false;

    bool m_deleteAdditionalMetricsToRetain{false};
    bool m_deleteAdditionalMetricsToRetainHasBeenSet = false;

    long long m_expectedVersion{0};
    bool m_expectedVersionHasBeenSet = false;

    MetricsExportConfig m_metricsExportConfig;
    bool m_metricsExportConfigHasBeenSet = false;

    bool m_deleteMetricsExportConfig{false};
    bool m_deleteMetricsExportConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
