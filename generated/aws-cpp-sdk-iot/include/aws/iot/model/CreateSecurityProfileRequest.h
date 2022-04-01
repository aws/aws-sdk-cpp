﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class AWS_IOT_API CreateSecurityProfileRequest : public IoTRequest
  {
  public:
    CreateSecurityProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSecurityProfile"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name you are giving to the security profile.</p>
     */
    inline const Aws::String& GetSecurityProfileName() const{ return m_securityProfileName; }

    /**
     * <p>The name you are giving to the security profile.</p>
     */
    inline bool SecurityProfileNameHasBeenSet() const { return m_securityProfileNameHasBeenSet; }

    /**
     * <p>The name you are giving to the security profile.</p>
     */
    inline void SetSecurityProfileName(const Aws::String& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = value; }

    /**
     * <p>The name you are giving to the security profile.</p>
     */
    inline void SetSecurityProfileName(Aws::String&& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = std::move(value); }

    /**
     * <p>The name you are giving to the security profile.</p>
     */
    inline void SetSecurityProfileName(const char* value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName.assign(value); }

    /**
     * <p>The name you are giving to the security profile.</p>
     */
    inline CreateSecurityProfileRequest& WithSecurityProfileName(const Aws::String& value) { SetSecurityProfileName(value); return *this;}

    /**
     * <p>The name you are giving to the security profile.</p>
     */
    inline CreateSecurityProfileRequest& WithSecurityProfileName(Aws::String&& value) { SetSecurityProfileName(std::move(value)); return *this;}

    /**
     * <p>The name you are giving to the security profile.</p>
     */
    inline CreateSecurityProfileRequest& WithSecurityProfileName(const char* value) { SetSecurityProfileName(value); return *this;}


    /**
     * <p>A description of the security profile.</p>
     */
    inline const Aws::String& GetSecurityProfileDescription() const{ return m_securityProfileDescription; }

    /**
     * <p>A description of the security profile.</p>
     */
    inline bool SecurityProfileDescriptionHasBeenSet() const { return m_securityProfileDescriptionHasBeenSet; }

    /**
     * <p>A description of the security profile.</p>
     */
    inline void SetSecurityProfileDescription(const Aws::String& value) { m_securityProfileDescriptionHasBeenSet = true; m_securityProfileDescription = value; }

    /**
     * <p>A description of the security profile.</p>
     */
    inline void SetSecurityProfileDescription(Aws::String&& value) { m_securityProfileDescriptionHasBeenSet = true; m_securityProfileDescription = std::move(value); }

    /**
     * <p>A description of the security profile.</p>
     */
    inline void SetSecurityProfileDescription(const char* value) { m_securityProfileDescriptionHasBeenSet = true; m_securityProfileDescription.assign(value); }

    /**
     * <p>A description of the security profile.</p>
     */
    inline CreateSecurityProfileRequest& WithSecurityProfileDescription(const Aws::String& value) { SetSecurityProfileDescription(value); return *this;}

    /**
     * <p>A description of the security profile.</p>
     */
    inline CreateSecurityProfileRequest& WithSecurityProfileDescription(Aws::String&& value) { SetSecurityProfileDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the security profile.</p>
     */
    inline CreateSecurityProfileRequest& WithSecurityProfileDescription(const char* value) { SetSecurityProfileDescription(value); return *this;}


    /**
     * <p>Specifies the behaviors that, when violated by a device (thing), cause an
     * alert.</p>
     */
    inline const Aws::Vector<Behavior>& GetBehaviors() const{ return m_behaviors; }

    /**
     * <p>Specifies the behaviors that, when violated by a device (thing), cause an
     * alert.</p>
     */
    inline bool BehaviorsHasBeenSet() const { return m_behaviorsHasBeenSet; }

    /**
     * <p>Specifies the behaviors that, when violated by a device (thing), cause an
     * alert.</p>
     */
    inline void SetBehaviors(const Aws::Vector<Behavior>& value) { m_behaviorsHasBeenSet = true; m_behaviors = value; }

    /**
     * <p>Specifies the behaviors that, when violated by a device (thing), cause an
     * alert.</p>
     */
    inline void SetBehaviors(Aws::Vector<Behavior>&& value) { m_behaviorsHasBeenSet = true; m_behaviors = std::move(value); }

    /**
     * <p>Specifies the behaviors that, when violated by a device (thing), cause an
     * alert.</p>
     */
    inline CreateSecurityProfileRequest& WithBehaviors(const Aws::Vector<Behavior>& value) { SetBehaviors(value); return *this;}

    /**
     * <p>Specifies the behaviors that, when violated by a device (thing), cause an
     * alert.</p>
     */
    inline CreateSecurityProfileRequest& WithBehaviors(Aws::Vector<Behavior>&& value) { SetBehaviors(std::move(value)); return *this;}

    /**
     * <p>Specifies the behaviors that, when violated by a device (thing), cause an
     * alert.</p>
     */
    inline CreateSecurityProfileRequest& AddBehaviors(const Behavior& value) { m_behaviorsHasBeenSet = true; m_behaviors.push_back(value); return *this; }

    /**
     * <p>Specifies the behaviors that, when violated by a device (thing), cause an
     * alert.</p>
     */
    inline CreateSecurityProfileRequest& AddBehaviors(Behavior&& value) { m_behaviorsHasBeenSet = true; m_behaviors.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the destinations to which alerts are sent. (Alerts are always sent
     * to the console.) Alerts are generated when a device (thing) violates a
     * behavior.</p>
     */
    inline const Aws::Map<AlertTargetType, AlertTarget>& GetAlertTargets() const{ return m_alertTargets; }

    /**
     * <p>Specifies the destinations to which alerts are sent. (Alerts are always sent
     * to the console.) Alerts are generated when a device (thing) violates a
     * behavior.</p>
     */
    inline bool AlertTargetsHasBeenSet() const { return m_alertTargetsHasBeenSet; }

    /**
     * <p>Specifies the destinations to which alerts are sent. (Alerts are always sent
     * to the console.) Alerts are generated when a device (thing) violates a
     * behavior.</p>
     */
    inline void SetAlertTargets(const Aws::Map<AlertTargetType, AlertTarget>& value) { m_alertTargetsHasBeenSet = true; m_alertTargets = value; }

    /**
     * <p>Specifies the destinations to which alerts are sent. (Alerts are always sent
     * to the console.) Alerts are generated when a device (thing) violates a
     * behavior.</p>
     */
    inline void SetAlertTargets(Aws::Map<AlertTargetType, AlertTarget>&& value) { m_alertTargetsHasBeenSet = true; m_alertTargets = std::move(value); }

    /**
     * <p>Specifies the destinations to which alerts are sent. (Alerts are always sent
     * to the console.) Alerts are generated when a device (thing) violates a
     * behavior.</p>
     */
    inline CreateSecurityProfileRequest& WithAlertTargets(const Aws::Map<AlertTargetType, AlertTarget>& value) { SetAlertTargets(value); return *this;}

    /**
     * <p>Specifies the destinations to which alerts are sent. (Alerts are always sent
     * to the console.) Alerts are generated when a device (thing) violates a
     * behavior.</p>
     */
    inline CreateSecurityProfileRequest& WithAlertTargets(Aws::Map<AlertTargetType, AlertTarget>&& value) { SetAlertTargets(std::move(value)); return *this;}

    /**
     * <p>Specifies the destinations to which alerts are sent. (Alerts are always sent
     * to the console.) Alerts are generated when a device (thing) violates a
     * behavior.</p>
     */
    inline CreateSecurityProfileRequest& AddAlertTargets(const AlertTargetType& key, const AlertTarget& value) { m_alertTargetsHasBeenSet = true; m_alertTargets.emplace(key, value); return *this; }

    /**
     * <p>Specifies the destinations to which alerts are sent. (Alerts are always sent
     * to the console.) Alerts are generated when a device (thing) violates a
     * behavior.</p>
     */
    inline CreateSecurityProfileRequest& AddAlertTargets(AlertTargetType&& key, const AlertTarget& value) { m_alertTargetsHasBeenSet = true; m_alertTargets.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies the destinations to which alerts are sent. (Alerts are always sent
     * to the console.) Alerts are generated when a device (thing) violates a
     * behavior.</p>
     */
    inline CreateSecurityProfileRequest& AddAlertTargets(const AlertTargetType& key, AlertTarget&& value) { m_alertTargetsHasBeenSet = true; m_alertTargets.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the destinations to which alerts are sent. (Alerts are always sent
     * to the console.) Alerts are generated when a device (thing) violates a
     * behavior.</p>
     */
    inline CreateSecurityProfileRequest& AddAlertTargets(AlertTargetType&& key, AlertTarget&& value) { m_alertTargetsHasBeenSet = true; m_alertTargets.emplace(std::move(key), std::move(value)); return *this; }


    /**
     * <p>A list of metrics whose data is retained (stored). By default, data is
     * retained for any metric used in the profile's <code>behaviors</code>, but it is
     * also retained for any metric specified here. Can be used with custom metrics;
     * cannot be used with dimensions.</p>
     */
    inline const Aws::Vector<MetricToRetain>& GetAdditionalMetricsToRetainV2() const{ return m_additionalMetricsToRetainV2; }

    /**
     * <p>A list of metrics whose data is retained (stored). By default, data is
     * retained for any metric used in the profile's <code>behaviors</code>, but it is
     * also retained for any metric specified here. Can be used with custom metrics;
     * cannot be used with dimensions.</p>
     */
    inline bool AdditionalMetricsToRetainV2HasBeenSet() const { return m_additionalMetricsToRetainV2HasBeenSet; }

    /**
     * <p>A list of metrics whose data is retained (stored). By default, data is
     * retained for any metric used in the profile's <code>behaviors</code>, but it is
     * also retained for any metric specified here. Can be used with custom metrics;
     * cannot be used with dimensions.</p>
     */
    inline void SetAdditionalMetricsToRetainV2(const Aws::Vector<MetricToRetain>& value) { m_additionalMetricsToRetainV2HasBeenSet = true; m_additionalMetricsToRetainV2 = value; }

    /**
     * <p>A list of metrics whose data is retained (stored). By default, data is
     * retained for any metric used in the profile's <code>behaviors</code>, but it is
     * also retained for any metric specified here. Can be used with custom metrics;
     * cannot be used with dimensions.</p>
     */
    inline void SetAdditionalMetricsToRetainV2(Aws::Vector<MetricToRetain>&& value) { m_additionalMetricsToRetainV2HasBeenSet = true; m_additionalMetricsToRetainV2 = std::move(value); }

    /**
     * <p>A list of metrics whose data is retained (stored). By default, data is
     * retained for any metric used in the profile's <code>behaviors</code>, but it is
     * also retained for any metric specified here. Can be used with custom metrics;
     * cannot be used with dimensions.</p>
     */
    inline CreateSecurityProfileRequest& WithAdditionalMetricsToRetainV2(const Aws::Vector<MetricToRetain>& value) { SetAdditionalMetricsToRetainV2(value); return *this;}

    /**
     * <p>A list of metrics whose data is retained (stored). By default, data is
     * retained for any metric used in the profile's <code>behaviors</code>, but it is
     * also retained for any metric specified here. Can be used with custom metrics;
     * cannot be used with dimensions.</p>
     */
    inline CreateSecurityProfileRequest& WithAdditionalMetricsToRetainV2(Aws::Vector<MetricToRetain>&& value) { SetAdditionalMetricsToRetainV2(std::move(value)); return *this;}

    /**
     * <p>A list of metrics whose data is retained (stored). By default, data is
     * retained for any metric used in the profile's <code>behaviors</code>, but it is
     * also retained for any metric specified here. Can be used with custom metrics;
     * cannot be used with dimensions.</p>
     */
    inline CreateSecurityProfileRequest& AddAdditionalMetricsToRetainV2(const MetricToRetain& value) { m_additionalMetricsToRetainV2HasBeenSet = true; m_additionalMetricsToRetainV2.push_back(value); return *this; }

    /**
     * <p>A list of metrics whose data is retained (stored). By default, data is
     * retained for any metric used in the profile's <code>behaviors</code>, but it is
     * also retained for any metric specified here. Can be used with custom metrics;
     * cannot be used with dimensions.</p>
     */
    inline CreateSecurityProfileRequest& AddAdditionalMetricsToRetainV2(MetricToRetain&& value) { m_additionalMetricsToRetainV2HasBeenSet = true; m_additionalMetricsToRetainV2.push_back(std::move(value)); return *this; }


    /**
     * <p>Metadata that can be used to manage the security profile.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata that can be used to manage the security profile.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Metadata that can be used to manage the security profile.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata that can be used to manage the security profile.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata that can be used to manage the security profile.</p>
     */
    inline CreateSecurityProfileRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata that can be used to manage the security profile.</p>
     */
    inline CreateSecurityProfileRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata that can be used to manage the security profile.</p>
     */
    inline CreateSecurityProfileRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Metadata that can be used to manage the security profile.</p>
     */
    inline CreateSecurityProfileRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_securityProfileName;
    bool m_securityProfileNameHasBeenSet;

    Aws::String m_securityProfileDescription;
    bool m_securityProfileDescriptionHasBeenSet;

    Aws::Vector<Behavior> m_behaviors;
    bool m_behaviorsHasBeenSet;

    Aws::Map<AlertTargetType, AlertTarget> m_alertTargets;
    bool m_alertTargetsHasBeenSet;

    Aws::Vector<MetricToRetain> m_additionalMetricsToRetainV2;
    bool m_additionalMetricsToRetainV2HasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
