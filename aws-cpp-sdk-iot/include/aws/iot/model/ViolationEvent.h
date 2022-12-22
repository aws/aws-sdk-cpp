/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/Behavior.h>
#include <aws/iot/model/MetricValue.h>
#include <aws/iot/model/ViolationEventAdditionalInfo.h>
#include <aws/iot/model/ViolationEventType.h>
#include <aws/iot/model/VerificationState.h>
#include <aws/core/utils/DateTime.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Information about a Device Defender security profile behavior
   * violation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ViolationEvent">AWS
   * API Reference</a></p>
   */
  class ViolationEvent
  {
  public:
    AWS_IOT_API ViolationEvent();
    AWS_IOT_API ViolationEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ViolationEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the violation event.</p>
     */
    inline const Aws::String& GetViolationId() const{ return m_violationId; }

    /**
     * <p>The ID of the violation event.</p>
     */
    inline bool ViolationIdHasBeenSet() const { return m_violationIdHasBeenSet; }

    /**
     * <p>The ID of the violation event.</p>
     */
    inline void SetViolationId(const Aws::String& value) { m_violationIdHasBeenSet = true; m_violationId = value; }

    /**
     * <p>The ID of the violation event.</p>
     */
    inline void SetViolationId(Aws::String&& value) { m_violationIdHasBeenSet = true; m_violationId = std::move(value); }

    /**
     * <p>The ID of the violation event.</p>
     */
    inline void SetViolationId(const char* value) { m_violationIdHasBeenSet = true; m_violationId.assign(value); }

    /**
     * <p>The ID of the violation event.</p>
     */
    inline ViolationEvent& WithViolationId(const Aws::String& value) { SetViolationId(value); return *this;}

    /**
     * <p>The ID of the violation event.</p>
     */
    inline ViolationEvent& WithViolationId(Aws::String&& value) { SetViolationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the violation event.</p>
     */
    inline ViolationEvent& WithViolationId(const char* value) { SetViolationId(value); return *this;}


    /**
     * <p>The name of the thing responsible for the violation event.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }

    /**
     * <p>The name of the thing responsible for the violation event.</p>
     */
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }

    /**
     * <p>The name of the thing responsible for the violation event.</p>
     */
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }

    /**
     * <p>The name of the thing responsible for the violation event.</p>
     */
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = std::move(value); }

    /**
     * <p>The name of the thing responsible for the violation event.</p>
     */
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }

    /**
     * <p>The name of the thing responsible for the violation event.</p>
     */
    inline ViolationEvent& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}

    /**
     * <p>The name of the thing responsible for the violation event.</p>
     */
    inline ViolationEvent& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}

    /**
     * <p>The name of the thing responsible for the violation event.</p>
     */
    inline ViolationEvent& WithThingName(const char* value) { SetThingName(value); return *this;}


    /**
     * <p>The name of the security profile whose behavior was violated.</p>
     */
    inline const Aws::String& GetSecurityProfileName() const{ return m_securityProfileName; }

    /**
     * <p>The name of the security profile whose behavior was violated.</p>
     */
    inline bool SecurityProfileNameHasBeenSet() const { return m_securityProfileNameHasBeenSet; }

    /**
     * <p>The name of the security profile whose behavior was violated.</p>
     */
    inline void SetSecurityProfileName(const Aws::String& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = value; }

    /**
     * <p>The name of the security profile whose behavior was violated.</p>
     */
    inline void SetSecurityProfileName(Aws::String&& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = std::move(value); }

    /**
     * <p>The name of the security profile whose behavior was violated.</p>
     */
    inline void SetSecurityProfileName(const char* value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName.assign(value); }

    /**
     * <p>The name of the security profile whose behavior was violated.</p>
     */
    inline ViolationEvent& WithSecurityProfileName(const Aws::String& value) { SetSecurityProfileName(value); return *this;}

    /**
     * <p>The name of the security profile whose behavior was violated.</p>
     */
    inline ViolationEvent& WithSecurityProfileName(Aws::String&& value) { SetSecurityProfileName(std::move(value)); return *this;}

    /**
     * <p>The name of the security profile whose behavior was violated.</p>
     */
    inline ViolationEvent& WithSecurityProfileName(const char* value) { SetSecurityProfileName(value); return *this;}


    /**
     * <p>The behavior that was violated.</p>
     */
    inline const Behavior& GetBehavior() const{ return m_behavior; }

    /**
     * <p>The behavior that was violated.</p>
     */
    inline bool BehaviorHasBeenSet() const { return m_behaviorHasBeenSet; }

    /**
     * <p>The behavior that was violated.</p>
     */
    inline void SetBehavior(const Behavior& value) { m_behaviorHasBeenSet = true; m_behavior = value; }

    /**
     * <p>The behavior that was violated.</p>
     */
    inline void SetBehavior(Behavior&& value) { m_behaviorHasBeenSet = true; m_behavior = std::move(value); }

    /**
     * <p>The behavior that was violated.</p>
     */
    inline ViolationEvent& WithBehavior(const Behavior& value) { SetBehavior(value); return *this;}

    /**
     * <p>The behavior that was violated.</p>
     */
    inline ViolationEvent& WithBehavior(Behavior&& value) { SetBehavior(std::move(value)); return *this;}


    /**
     * <p>The value of the metric (the measurement).</p>
     */
    inline const MetricValue& GetMetricValue() const{ return m_metricValue; }

    /**
     * <p>The value of the metric (the measurement).</p>
     */
    inline bool MetricValueHasBeenSet() const { return m_metricValueHasBeenSet; }

    /**
     * <p>The value of the metric (the measurement).</p>
     */
    inline void SetMetricValue(const MetricValue& value) { m_metricValueHasBeenSet = true; m_metricValue = value; }

    /**
     * <p>The value of the metric (the measurement).</p>
     */
    inline void SetMetricValue(MetricValue&& value) { m_metricValueHasBeenSet = true; m_metricValue = std::move(value); }

    /**
     * <p>The value of the metric (the measurement).</p>
     */
    inline ViolationEvent& WithMetricValue(const MetricValue& value) { SetMetricValue(value); return *this;}

    /**
     * <p>The value of the metric (the measurement).</p>
     */
    inline ViolationEvent& WithMetricValue(MetricValue&& value) { SetMetricValue(std::move(value)); return *this;}


    /**
     * <p> The details of a violation event. </p>
     */
    inline const ViolationEventAdditionalInfo& GetViolationEventAdditionalInfo() const{ return m_violationEventAdditionalInfo; }

    /**
     * <p> The details of a violation event. </p>
     */
    inline bool ViolationEventAdditionalInfoHasBeenSet() const { return m_violationEventAdditionalInfoHasBeenSet; }

    /**
     * <p> The details of a violation event. </p>
     */
    inline void SetViolationEventAdditionalInfo(const ViolationEventAdditionalInfo& value) { m_violationEventAdditionalInfoHasBeenSet = true; m_violationEventAdditionalInfo = value; }

    /**
     * <p> The details of a violation event. </p>
     */
    inline void SetViolationEventAdditionalInfo(ViolationEventAdditionalInfo&& value) { m_violationEventAdditionalInfoHasBeenSet = true; m_violationEventAdditionalInfo = std::move(value); }

    /**
     * <p> The details of a violation event. </p>
     */
    inline ViolationEvent& WithViolationEventAdditionalInfo(const ViolationEventAdditionalInfo& value) { SetViolationEventAdditionalInfo(value); return *this;}

    /**
     * <p> The details of a violation event. </p>
     */
    inline ViolationEvent& WithViolationEventAdditionalInfo(ViolationEventAdditionalInfo&& value) { SetViolationEventAdditionalInfo(std::move(value)); return *this;}


    /**
     * <p>The type of violation event.</p>
     */
    inline const ViolationEventType& GetViolationEventType() const{ return m_violationEventType; }

    /**
     * <p>The type of violation event.</p>
     */
    inline bool ViolationEventTypeHasBeenSet() const { return m_violationEventTypeHasBeenSet; }

    /**
     * <p>The type of violation event.</p>
     */
    inline void SetViolationEventType(const ViolationEventType& value) { m_violationEventTypeHasBeenSet = true; m_violationEventType = value; }

    /**
     * <p>The type of violation event.</p>
     */
    inline void SetViolationEventType(ViolationEventType&& value) { m_violationEventTypeHasBeenSet = true; m_violationEventType = std::move(value); }

    /**
     * <p>The type of violation event.</p>
     */
    inline ViolationEvent& WithViolationEventType(const ViolationEventType& value) { SetViolationEventType(value); return *this;}

    /**
     * <p>The type of violation event.</p>
     */
    inline ViolationEvent& WithViolationEventType(ViolationEventType&& value) { SetViolationEventType(std::move(value)); return *this;}


    /**
     * <p>The verification state of the violation (detect alarm).</p>
     */
    inline const VerificationState& GetVerificationState() const{ return m_verificationState; }

    /**
     * <p>The verification state of the violation (detect alarm).</p>
     */
    inline bool VerificationStateHasBeenSet() const { return m_verificationStateHasBeenSet; }

    /**
     * <p>The verification state of the violation (detect alarm).</p>
     */
    inline void SetVerificationState(const VerificationState& value) { m_verificationStateHasBeenSet = true; m_verificationState = value; }

    /**
     * <p>The verification state of the violation (detect alarm).</p>
     */
    inline void SetVerificationState(VerificationState&& value) { m_verificationStateHasBeenSet = true; m_verificationState = std::move(value); }

    /**
     * <p>The verification state of the violation (detect alarm).</p>
     */
    inline ViolationEvent& WithVerificationState(const VerificationState& value) { SetVerificationState(value); return *this;}

    /**
     * <p>The verification state of the violation (detect alarm).</p>
     */
    inline ViolationEvent& WithVerificationState(VerificationState&& value) { SetVerificationState(std::move(value)); return *this;}


    /**
     * <p>The description of the verification state of the violation.</p>
     */
    inline const Aws::String& GetVerificationStateDescription() const{ return m_verificationStateDescription; }

    /**
     * <p>The description of the verification state of the violation.</p>
     */
    inline bool VerificationStateDescriptionHasBeenSet() const { return m_verificationStateDescriptionHasBeenSet; }

    /**
     * <p>The description of the verification state of the violation.</p>
     */
    inline void SetVerificationStateDescription(const Aws::String& value) { m_verificationStateDescriptionHasBeenSet = true; m_verificationStateDescription = value; }

    /**
     * <p>The description of the verification state of the violation.</p>
     */
    inline void SetVerificationStateDescription(Aws::String&& value) { m_verificationStateDescriptionHasBeenSet = true; m_verificationStateDescription = std::move(value); }

    /**
     * <p>The description of the verification state of the violation.</p>
     */
    inline void SetVerificationStateDescription(const char* value) { m_verificationStateDescriptionHasBeenSet = true; m_verificationStateDescription.assign(value); }

    /**
     * <p>The description of the verification state of the violation.</p>
     */
    inline ViolationEvent& WithVerificationStateDescription(const Aws::String& value) { SetVerificationStateDescription(value); return *this;}

    /**
     * <p>The description of the verification state of the violation.</p>
     */
    inline ViolationEvent& WithVerificationStateDescription(Aws::String&& value) { SetVerificationStateDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the verification state of the violation.</p>
     */
    inline ViolationEvent& WithVerificationStateDescription(const char* value) { SetVerificationStateDescription(value); return *this;}


    /**
     * <p>The time the violation event occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetViolationEventTime() const{ return m_violationEventTime; }

    /**
     * <p>The time the violation event occurred.</p>
     */
    inline bool ViolationEventTimeHasBeenSet() const { return m_violationEventTimeHasBeenSet; }

    /**
     * <p>The time the violation event occurred.</p>
     */
    inline void SetViolationEventTime(const Aws::Utils::DateTime& value) { m_violationEventTimeHasBeenSet = true; m_violationEventTime = value; }

    /**
     * <p>The time the violation event occurred.</p>
     */
    inline void SetViolationEventTime(Aws::Utils::DateTime&& value) { m_violationEventTimeHasBeenSet = true; m_violationEventTime = std::move(value); }

    /**
     * <p>The time the violation event occurred.</p>
     */
    inline ViolationEvent& WithViolationEventTime(const Aws::Utils::DateTime& value) { SetViolationEventTime(value); return *this;}

    /**
     * <p>The time the violation event occurred.</p>
     */
    inline ViolationEvent& WithViolationEventTime(Aws::Utils::DateTime&& value) { SetViolationEventTime(std::move(value)); return *this;}

  private:

    Aws::String m_violationId;
    bool m_violationIdHasBeenSet = false;

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;

    Aws::String m_securityProfileName;
    bool m_securityProfileNameHasBeenSet = false;

    Behavior m_behavior;
    bool m_behaviorHasBeenSet = false;

    MetricValue m_metricValue;
    bool m_metricValueHasBeenSet = false;

    ViolationEventAdditionalInfo m_violationEventAdditionalInfo;
    bool m_violationEventAdditionalInfoHasBeenSet = false;

    ViolationEventType m_violationEventType;
    bool m_violationEventTypeHasBeenSet = false;

    VerificationState m_verificationState;
    bool m_verificationStateHasBeenSet = false;

    Aws::String m_verificationStateDescription;
    bool m_verificationStateDescriptionHasBeenSet = false;

    Aws::Utils::DateTime m_violationEventTime;
    bool m_violationEventTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
