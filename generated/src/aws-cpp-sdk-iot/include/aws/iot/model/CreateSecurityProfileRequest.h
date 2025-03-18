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
    AWS_IOT_API CreateSecurityProfileRequest() = default;

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
    inline const Aws::String& GetSecurityProfileName() const { return m_securityProfileName; }
    inline bool SecurityProfileNameHasBeenSet() const { return m_securityProfileNameHasBeenSet; }
    template<typename SecurityProfileNameT = Aws::String>
    void SetSecurityProfileName(SecurityProfileNameT&& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = std::forward<SecurityProfileNameT>(value); }
    template<typename SecurityProfileNameT = Aws::String>
    CreateSecurityProfileRequest& WithSecurityProfileName(SecurityProfileNameT&& value) { SetSecurityProfileName(std::forward<SecurityProfileNameT>(value)); return *this;}
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
    CreateSecurityProfileRequest& WithSecurityProfileDescription(SecurityProfileDescriptionT&& value) { SetSecurityProfileDescription(std::forward<SecurityProfileDescriptionT>(value)); return *this;}
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
    CreateSecurityProfileRequest& WithBehaviors(BehaviorsT&& value) { SetBehaviors(std::forward<BehaviorsT>(value)); return *this;}
    template<typename BehaviorsT = Behavior>
    CreateSecurityProfileRequest& AddBehaviors(BehaviorsT&& value) { m_behaviorsHasBeenSet = true; m_behaviors.emplace_back(std::forward<BehaviorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the destinations to which alerts are sent. (Alerts are always sent
     * to the console.) Alerts are generated when a device (thing) violates a
     * behavior.</p>
     */
    inline const Aws::Map<AlertTargetType, AlertTarget>& GetAlertTargets() const { return m_alertTargets; }
    inline bool AlertTargetsHasBeenSet() const { return m_alertTargetsHasBeenSet; }
    template<typename AlertTargetsT = Aws::Map<AlertTargetType, AlertTarget>>
    void SetAlertTargets(AlertTargetsT&& value) { m_alertTargetsHasBeenSet = true; m_alertTargets = std::forward<AlertTargetsT>(value); }
    template<typename AlertTargetsT = Aws::Map<AlertTargetType, AlertTarget>>
    CreateSecurityProfileRequest& WithAlertTargets(AlertTargetsT&& value) { SetAlertTargets(std::forward<AlertTargetsT>(value)); return *this;}
    inline CreateSecurityProfileRequest& AddAlertTargets(AlertTargetType key, AlertTarget value) {
      m_alertTargetsHasBeenSet = true; m_alertTargets.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A list of metrics whose data is retained (stored). By default, data is
     * retained for any metric used in the profile's <code>behaviors</code>, but it is
     * also retained for any metric specified here. Can be used with custom metrics;
     * cannot be used with dimensions.</p>
     */
    inline const Aws::Vector<MetricToRetain>& GetAdditionalMetricsToRetainV2() const { return m_additionalMetricsToRetainV2; }
    inline bool AdditionalMetricsToRetainV2HasBeenSet() const { return m_additionalMetricsToRetainV2HasBeenSet; }
    template<typename AdditionalMetricsToRetainV2T = Aws::Vector<MetricToRetain>>
    void SetAdditionalMetricsToRetainV2(AdditionalMetricsToRetainV2T&& value) { m_additionalMetricsToRetainV2HasBeenSet = true; m_additionalMetricsToRetainV2 = std::forward<AdditionalMetricsToRetainV2T>(value); }
    template<typename AdditionalMetricsToRetainV2T = Aws::Vector<MetricToRetain>>
    CreateSecurityProfileRequest& WithAdditionalMetricsToRetainV2(AdditionalMetricsToRetainV2T&& value) { SetAdditionalMetricsToRetainV2(std::forward<AdditionalMetricsToRetainV2T>(value)); return *this;}
    template<typename AdditionalMetricsToRetainV2T = MetricToRetain>
    CreateSecurityProfileRequest& AddAdditionalMetricsToRetainV2(AdditionalMetricsToRetainV2T&& value) { m_additionalMetricsToRetainV2HasBeenSet = true; m_additionalMetricsToRetainV2.emplace_back(std::forward<AdditionalMetricsToRetainV2T>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Metadata that can be used to manage the security profile.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateSecurityProfileRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateSecurityProfileRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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
    CreateSecurityProfileRequest& WithMetricsExportConfig(MetricsExportConfigT&& value) { SetMetricsExportConfig(std::forward<MetricsExportConfigT>(value)); return *this;}
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
