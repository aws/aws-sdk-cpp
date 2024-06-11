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
#include <aws/iot/model/Tag.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class CreateSecurityProfileRequest : public IoTRequest
  {
  public:
    AWS_IOT_API CreateSecurityProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSecurityProfile"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name you are giving to the security profile.</p>
     */
    inline const Aws::String& GetSecurityProfileName() const{ return m_securityProfileName; }
    inline bool SecurityProfileNameHasBeenSet() const { return m_securityProfileNameHasBeenSet; }
    inline void SetSecurityProfileName(const Aws::String& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = value; }
    inline void SetSecurityProfileName(Aws::String&& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = std::move(value); }
    inline void SetSecurityProfileName(const char* value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName.assign(value); }
    inline CreateSecurityProfileRequest& WithSecurityProfileName(const Aws::String& value) { SetSecurityProfileName(value); return *this;}
    inline CreateSecurityProfileRequest& WithSecurityProfileName(Aws::String&& value) { SetSecurityProfileName(std::move(value)); return *this;}
    inline CreateSecurityProfileRequest& WithSecurityProfileName(const char* value) { SetSecurityProfileName(value); return *this;}
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
    inline CreateSecurityProfileRequest& WithSecurityProfileDescription(const Aws::String& value) { SetSecurityProfileDescription(value); return *this;}
    inline CreateSecurityProfileRequest& WithSecurityProfileDescription(Aws::String&& value) { SetSecurityProfileDescription(std::move(value)); return *this;}
    inline CreateSecurityProfileRequest& WithSecurityProfileDescription(const char* value) { SetSecurityProfileDescription(value); return *this;}
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
    inline CreateSecurityProfileRequest& WithBehaviors(const Aws::Vector<Behavior>& value) { SetBehaviors(value); return *this;}
    inline CreateSecurityProfileRequest& WithBehaviors(Aws::Vector<Behavior>&& value) { SetBehaviors(std::move(value)); return *this;}
    inline CreateSecurityProfileRequest& AddBehaviors(const Behavior& value) { m_behaviorsHasBeenSet = true; m_behaviors.push_back(value); return *this; }
    inline CreateSecurityProfileRequest& AddBehaviors(Behavior&& value) { m_behaviorsHasBeenSet = true; m_behaviors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the destinations to which alerts are sent. (Alerts are always sent
     * to the console.) Alerts are generated when a device (thing) violates a
     * behavior.</p>
     */
    inline const Aws::Map<AlertTargetType, AlertTarget>& GetAlertTargets() const{ return m_alertTargets; }
    inline bool AlertTargetsHasBeenSet() const { return m_alertTargetsHasBeenSet; }
    inline void SetAlertTargets(const Aws::Map<AlertTargetType, AlertTarget>& value) { m_alertTargetsHasBeenSet = true; m_alertTargets = value; }
    inline void SetAlertTargets(Aws::Map<AlertTargetType, AlertTarget>&& value) { m_alertTargetsHasBeenSet = true; m_alertTargets = std::move(value); }
    inline CreateSecurityProfileRequest& WithAlertTargets(const Aws::Map<AlertTargetType, AlertTarget>& value) { SetAlertTargets(value); return *this;}
    inline CreateSecurityProfileRequest& WithAlertTargets(Aws::Map<AlertTargetType, AlertTarget>&& value) { SetAlertTargets(std::move(value)); return *this;}
    inline CreateSecurityProfileRequest& AddAlertTargets(const AlertTargetType& key, const AlertTarget& value) { m_alertTargetsHasBeenSet = true; m_alertTargets.emplace(key, value); return *this; }
    inline CreateSecurityProfileRequest& AddAlertTargets(AlertTargetType&& key, const AlertTarget& value) { m_alertTargetsHasBeenSet = true; m_alertTargets.emplace(std::move(key), value); return *this; }
    inline CreateSecurityProfileRequest& AddAlertTargets(const AlertTargetType& key, AlertTarget&& value) { m_alertTargetsHasBeenSet = true; m_alertTargets.emplace(key, std::move(value)); return *this; }
    inline CreateSecurityProfileRequest& AddAlertTargets(AlertTargetType&& key, AlertTarget&& value) { m_alertTargetsHasBeenSet = true; m_alertTargets.emplace(std::move(key), std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of metrics whose data is retained (stored). By default, data is
     * retained for any metric used in the profile's <code>behaviors</code>, but it is
     * also retained for any metric specified here. Can be used with custom metrics;
     * cannot be used with dimensions.</p>
     */
    inline const Aws::Vector<MetricToRetain>& GetAdditionalMetricsToRetainV2() const{ return m_additionalMetricsToRetainV2; }
    inline bool AdditionalMetricsToRetainV2HasBeenSet() const { return m_additionalMetricsToRetainV2HasBeenSet; }
    inline void SetAdditionalMetricsToRetainV2(const Aws::Vector<MetricToRetain>& value) { m_additionalMetricsToRetainV2HasBeenSet = true; m_additionalMetricsToRetainV2 = value; }
    inline void SetAdditionalMetricsToRetainV2(Aws::Vector<MetricToRetain>&& value) { m_additionalMetricsToRetainV2HasBeenSet = true; m_additionalMetricsToRetainV2 = std::move(value); }
    inline CreateSecurityProfileRequest& WithAdditionalMetricsToRetainV2(const Aws::Vector<MetricToRetain>& value) { SetAdditionalMetricsToRetainV2(value); return *this;}
    inline CreateSecurityProfileRequest& WithAdditionalMetricsToRetainV2(Aws::Vector<MetricToRetain>&& value) { SetAdditionalMetricsToRetainV2(std::move(value)); return *this;}
    inline CreateSecurityProfileRequest& AddAdditionalMetricsToRetainV2(const MetricToRetain& value) { m_additionalMetricsToRetainV2HasBeenSet = true; m_additionalMetricsToRetainV2.push_back(value); return *this; }
    inline CreateSecurityProfileRequest& AddAdditionalMetricsToRetainV2(MetricToRetain&& value) { m_additionalMetricsToRetainV2HasBeenSet = true; m_additionalMetricsToRetainV2.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Metadata that can be used to manage the security profile.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateSecurityProfileRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateSecurityProfileRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateSecurityProfileRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateSecurityProfileRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the MQTT topic and role ARN required for metric export.</p>
     */
    inline const MetricsExportConfig& GetMetricsExportConfig() const{ return m_metricsExportConfig; }
    inline bool MetricsExportConfigHasBeenSet() const { return m_metricsExportConfigHasBeenSet; }
    inline void SetMetricsExportConfig(const MetricsExportConfig& value) { m_metricsExportConfigHasBeenSet = true; m_metricsExportConfig = value; }
    inline void SetMetricsExportConfig(MetricsExportConfig&& value) { m_metricsExportConfigHasBeenSet = true; m_metricsExportConfig = std::move(value); }
    inline CreateSecurityProfileRequest& WithMetricsExportConfig(const MetricsExportConfig& value) { SetMetricsExportConfig(value); return *this;}
    inline CreateSecurityProfileRequest& WithMetricsExportConfig(MetricsExportConfig&& value) { SetMetricsExportConfig(std::move(value)); return *this;}
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

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    MetricsExportConfig m_metricsExportConfig;
    bool m_metricsExportConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
