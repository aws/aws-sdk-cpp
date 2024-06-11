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
    AWS_IOT_API UpdateSecurityProfileRequest();

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
    inline const Aws::String& GetSecurityProfileName() const{ return m_securityProfileName; }
    inline bool SecurityProfileNameHasBeenSet() const { return m_securityProfileNameHasBeenSet; }
    inline void SetSecurityProfileName(const Aws::String& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = value; }
    inline void SetSecurityProfileName(Aws::String&& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = std::move(value); }
    inline void SetSecurityProfileName(const char* value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName.assign(value); }
    inline UpdateSecurityProfileRequest& WithSecurityProfileName(const Aws::String& value) { SetSecurityProfileName(value); return *this;}
    inline UpdateSecurityProfileRequest& WithSecurityProfileName(Aws::String&& value) { SetSecurityProfileName(std::move(value)); return *this;}
    inline UpdateSecurityProfileRequest& WithSecurityProfileName(const char* value) { SetSecurityProfileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the security profile.</p>
     */
    inline const Aws::String& GetSecurityProfileDescription() const{ return m_securityProfileDescription; }
    inline bool SecurityProfileDescriptionHasBeenSet() const { return m_securityProfileDescriptionHasBeenSet; }
    inline void SetSecurityProfileDescription(const Aws::String& value) { m_securityProfileDescriptionHasBeenSet = true; m_securityProfileDescription = value; }
    inline void SetSecurityProfileDescription(Aws::String&& value) { m_securityProfileDescriptionHasBeenSet = true; m_securityProfileDescription = std::move(value); }
    inline void SetSecurityProfileDescription(const char* value) { m_securityProfileDescriptionHasBeenSet = true; m_securityProfileDescription.assign(value); }
    inline UpdateSecurityProfileRequest& WithSecurityProfileDescription(const Aws::String& value) { SetSecurityProfileDescription(value); return *this;}
    inline UpdateSecurityProfileRequest& WithSecurityProfileDescription(Aws::String&& value) { SetSecurityProfileDescription(std::move(value)); return *this;}
    inline UpdateSecurityProfileRequest& WithSecurityProfileDescription(const char* value) { SetSecurityProfileDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the behaviors that, when violated by a device (thing), cause an
     * alert.</p>
     */
    inline const Aws::Vector<Behavior>& GetBehaviors() const{ return m_behaviors; }
    inline bool BehaviorsHasBeenSet() const { return m_behaviorsHasBeenSet; }
    inline void SetBehaviors(const Aws::Vector<Behavior>& value) { m_behaviorsHasBeenSet = true; m_behaviors = value; }
    inline void SetBehaviors(Aws::Vector<Behavior>&& value) { m_behaviorsHasBeenSet = true; m_behaviors = std::move(value); }
    inline UpdateSecurityProfileRequest& WithBehaviors(const Aws::Vector<Behavior>& value) { SetBehaviors(value); return *this;}
    inline UpdateSecurityProfileRequest& WithBehaviors(Aws::Vector<Behavior>&& value) { SetBehaviors(std::move(value)); return *this;}
    inline UpdateSecurityProfileRequest& AddBehaviors(const Behavior& value) { m_behaviorsHasBeenSet = true; m_behaviors.push_back(value); return *this; }
    inline UpdateSecurityProfileRequest& AddBehaviors(Behavior&& value) { m_behaviorsHasBeenSet = true; m_behaviors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Where the alerts are sent. (Alerts are always sent to the console.)</p>
     */
    inline const Aws::Map<AlertTargetType, AlertTarget>& GetAlertTargets() const{ return m_alertTargets; }
    inline bool AlertTargetsHasBeenSet() const { return m_alertTargetsHasBeenSet; }
    inline void SetAlertTargets(const Aws::Map<AlertTargetType, AlertTarget>& value) { m_alertTargetsHasBeenSet = true; m_alertTargets = value; }
    inline void SetAlertTargets(Aws::Map<AlertTargetType, AlertTarget>&& value) { m_alertTargetsHasBeenSet = true; m_alertTargets = std::move(value); }
    inline UpdateSecurityProfileRequest& WithAlertTargets(const Aws::Map<AlertTargetType, AlertTarget>& value) { SetAlertTargets(value); return *this;}
    inline UpdateSecurityProfileRequest& WithAlertTargets(Aws::Map<AlertTargetType, AlertTarget>&& value) { SetAlertTargets(std::move(value)); return *this;}
    inline UpdateSecurityProfileRequest& AddAlertTargets(const AlertTargetType& key, const AlertTarget& value) { m_alertTargetsHasBeenSet = true; m_alertTargets.emplace(key, value); return *this; }
    inline UpdateSecurityProfileRequest& AddAlertTargets(AlertTargetType&& key, const AlertTarget& value) { m_alertTargetsHasBeenSet = true; m_alertTargets.emplace(std::move(key), value); return *this; }
    inline UpdateSecurityProfileRequest& AddAlertTargets(const AlertTargetType& key, AlertTarget&& value) { m_alertTargetsHasBeenSet = true; m_alertTargets.emplace(key, std::move(value)); return *this; }
    inline UpdateSecurityProfileRequest& AddAlertTargets(AlertTargetType&& key, AlertTarget&& value) { m_alertTargetsHasBeenSet = true; m_alertTargets.emplace(std::move(key), std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of metrics whose data is retained (stored). By default, data is
     * retained for any metric used in the profile's behaviors, but it is also retained
     * for any metric specified here. Can be used with custom metrics; cannot be used
     * with dimensions.</p>
     */
    inline const Aws::Vector<MetricToRetain>& GetAdditionalMetricsToRetainV2() const{ return m_additionalMetricsToRetainV2; }
    inline bool AdditionalMetricsToRetainV2HasBeenSet() const { return m_additionalMetricsToRetainV2HasBeenSet; }
    inline void SetAdditionalMetricsToRetainV2(const Aws::Vector<MetricToRetain>& value) { m_additionalMetricsToRetainV2HasBeenSet = true; m_additionalMetricsToRetainV2 = value; }
    inline void SetAdditionalMetricsToRetainV2(Aws::Vector<MetricToRetain>&& value) { m_additionalMetricsToRetainV2HasBeenSet = true; m_additionalMetricsToRetainV2 = std::move(value); }
    inline UpdateSecurityProfileRequest& WithAdditionalMetricsToRetainV2(const Aws::Vector<MetricToRetain>& value) { SetAdditionalMetricsToRetainV2(value); return *this;}
    inline UpdateSecurityProfileRequest& WithAdditionalMetricsToRetainV2(Aws::Vector<MetricToRetain>&& value) { SetAdditionalMetricsToRetainV2(std::move(value)); return *this;}
    inline UpdateSecurityProfileRequest& AddAdditionalMetricsToRetainV2(const MetricToRetain& value) { m_additionalMetricsToRetainV2HasBeenSet = true; m_additionalMetricsToRetainV2.push_back(value); return *this; }
    inline UpdateSecurityProfileRequest& AddAdditionalMetricsToRetainV2(MetricToRetain&& value) { m_additionalMetricsToRetainV2HasBeenSet = true; m_additionalMetricsToRetainV2.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If true, delete all <code>behaviors</code> defined for this security profile.
     * If any <code>behaviors</code> are defined in the current invocation, an
     * exception occurs.</p>
     */
    inline bool GetDeleteBehaviors() const{ return m_deleteBehaviors; }
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
    inline bool GetDeleteAlertTargets() const{ return m_deleteAlertTargets; }
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
    inline bool GetDeleteAdditionalMetricsToRetain() const{ return m_deleteAdditionalMetricsToRetain; }
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
    inline long long GetExpectedVersion() const{ return m_expectedVersion; }
    inline bool ExpectedVersionHasBeenSet() const { return m_expectedVersionHasBeenSet; }
    inline void SetExpectedVersion(long long value) { m_expectedVersionHasBeenSet = true; m_expectedVersion = value; }
    inline UpdateSecurityProfileRequest& WithExpectedVersion(long long value) { SetExpectedVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the MQTT topic and role ARN required for metric export.</p>
     */
    inline const MetricsExportConfig& GetMetricsExportConfig() const{ return m_metricsExportConfig; }
    inline bool MetricsExportConfigHasBeenSet() const { return m_metricsExportConfigHasBeenSet; }
    inline void SetMetricsExportConfig(const MetricsExportConfig& value) { m_metricsExportConfigHasBeenSet = true; m_metricsExportConfig = value; }
    inline void SetMetricsExportConfig(MetricsExportConfig&& value) { m_metricsExportConfigHasBeenSet = true; m_metricsExportConfig = std::move(value); }
    inline UpdateSecurityProfileRequest& WithMetricsExportConfig(const MetricsExportConfig& value) { SetMetricsExportConfig(value); return *this;}
    inline UpdateSecurityProfileRequest& WithMetricsExportConfig(MetricsExportConfig&& value) { SetMetricsExportConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set the value as true to delete metrics export related configurations.</p>
     */
    inline bool GetDeleteMetricsExportConfig() const{ return m_deleteMetricsExportConfig; }
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

    bool m_deleteBehaviors;
    bool m_deleteBehaviorsHasBeenSet = false;

    bool m_deleteAlertTargets;
    bool m_deleteAlertTargetsHasBeenSet = false;

    bool m_deleteAdditionalMetricsToRetain;
    bool m_deleteAdditionalMetricsToRetainHasBeenSet = false;

    long long m_expectedVersion;
    bool m_expectedVersionHasBeenSet = false;

    MetricsExportConfig m_metricsExportConfig;
    bool m_metricsExportConfigHasBeenSet = false;

    bool m_deleteMetricsExportConfig;
    bool m_deleteMetricsExportConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
