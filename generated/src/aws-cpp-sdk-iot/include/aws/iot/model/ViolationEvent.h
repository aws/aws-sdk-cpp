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
    AWS_IOT_API ViolationEvent() = default;
    AWS_IOT_API ViolationEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ViolationEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the violation event.</p>
     */
    inline const Aws::String& GetViolationId() const { return m_violationId; }
    inline bool ViolationIdHasBeenSet() const { return m_violationIdHasBeenSet; }
    template<typename ViolationIdT = Aws::String>
    void SetViolationId(ViolationIdT&& value) { m_violationIdHasBeenSet = true; m_violationId = std::forward<ViolationIdT>(value); }
    template<typename ViolationIdT = Aws::String>
    ViolationEvent& WithViolationId(ViolationIdT&& value) { SetViolationId(std::forward<ViolationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the thing responsible for the violation event.</p>
     */
    inline const Aws::String& GetThingName() const { return m_thingName; }
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }
    template<typename ThingNameT = Aws::String>
    void SetThingName(ThingNameT&& value) { m_thingNameHasBeenSet = true; m_thingName = std::forward<ThingNameT>(value); }
    template<typename ThingNameT = Aws::String>
    ViolationEvent& WithThingName(ThingNameT&& value) { SetThingName(std::forward<ThingNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the security profile whose behavior was violated.</p>
     */
    inline const Aws::String& GetSecurityProfileName() const { return m_securityProfileName; }
    inline bool SecurityProfileNameHasBeenSet() const { return m_securityProfileNameHasBeenSet; }
    template<typename SecurityProfileNameT = Aws::String>
    void SetSecurityProfileName(SecurityProfileNameT&& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = std::forward<SecurityProfileNameT>(value); }
    template<typename SecurityProfileNameT = Aws::String>
    ViolationEvent& WithSecurityProfileName(SecurityProfileNameT&& value) { SetSecurityProfileName(std::forward<SecurityProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The behavior that was violated.</p>
     */
    inline const Behavior& GetBehavior() const { return m_behavior; }
    inline bool BehaviorHasBeenSet() const { return m_behaviorHasBeenSet; }
    template<typename BehaviorT = Behavior>
    void SetBehavior(BehaviorT&& value) { m_behaviorHasBeenSet = true; m_behavior = std::forward<BehaviorT>(value); }
    template<typename BehaviorT = Behavior>
    ViolationEvent& WithBehavior(BehaviorT&& value) { SetBehavior(std::forward<BehaviorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the metric (the measurement).</p>
     */
    inline const MetricValue& GetMetricValue() const { return m_metricValue; }
    inline bool MetricValueHasBeenSet() const { return m_metricValueHasBeenSet; }
    template<typename MetricValueT = MetricValue>
    void SetMetricValue(MetricValueT&& value) { m_metricValueHasBeenSet = true; m_metricValue = std::forward<MetricValueT>(value); }
    template<typename MetricValueT = MetricValue>
    ViolationEvent& WithMetricValue(MetricValueT&& value) { SetMetricValue(std::forward<MetricValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The details of a violation event. </p>
     */
    inline const ViolationEventAdditionalInfo& GetViolationEventAdditionalInfo() const { return m_violationEventAdditionalInfo; }
    inline bool ViolationEventAdditionalInfoHasBeenSet() const { return m_violationEventAdditionalInfoHasBeenSet; }
    template<typename ViolationEventAdditionalInfoT = ViolationEventAdditionalInfo>
    void SetViolationEventAdditionalInfo(ViolationEventAdditionalInfoT&& value) { m_violationEventAdditionalInfoHasBeenSet = true; m_violationEventAdditionalInfo = std::forward<ViolationEventAdditionalInfoT>(value); }
    template<typename ViolationEventAdditionalInfoT = ViolationEventAdditionalInfo>
    ViolationEvent& WithViolationEventAdditionalInfo(ViolationEventAdditionalInfoT&& value) { SetViolationEventAdditionalInfo(std::forward<ViolationEventAdditionalInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of violation event.</p>
     */
    inline ViolationEventType GetViolationEventType() const { return m_violationEventType; }
    inline bool ViolationEventTypeHasBeenSet() const { return m_violationEventTypeHasBeenSet; }
    inline void SetViolationEventType(ViolationEventType value) { m_violationEventTypeHasBeenSet = true; m_violationEventType = value; }
    inline ViolationEvent& WithViolationEventType(ViolationEventType value) { SetViolationEventType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The verification state of the violation (detect alarm).</p>
     */
    inline VerificationState GetVerificationState() const { return m_verificationState; }
    inline bool VerificationStateHasBeenSet() const { return m_verificationStateHasBeenSet; }
    inline void SetVerificationState(VerificationState value) { m_verificationStateHasBeenSet = true; m_verificationState = value; }
    inline ViolationEvent& WithVerificationState(VerificationState value) { SetVerificationState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the verification state of the violation.</p>
     */
    inline const Aws::String& GetVerificationStateDescription() const { return m_verificationStateDescription; }
    inline bool VerificationStateDescriptionHasBeenSet() const { return m_verificationStateDescriptionHasBeenSet; }
    template<typename VerificationStateDescriptionT = Aws::String>
    void SetVerificationStateDescription(VerificationStateDescriptionT&& value) { m_verificationStateDescriptionHasBeenSet = true; m_verificationStateDescription = std::forward<VerificationStateDescriptionT>(value); }
    template<typename VerificationStateDescriptionT = Aws::String>
    ViolationEvent& WithVerificationStateDescription(VerificationStateDescriptionT&& value) { SetVerificationStateDescription(std::forward<VerificationStateDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the violation event occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetViolationEventTime() const { return m_violationEventTime; }
    inline bool ViolationEventTimeHasBeenSet() const { return m_violationEventTimeHasBeenSet; }
    template<typename ViolationEventTimeT = Aws::Utils::DateTime>
    void SetViolationEventTime(ViolationEventTimeT&& value) { m_violationEventTimeHasBeenSet = true; m_violationEventTime = std::forward<ViolationEventTimeT>(value); }
    template<typename ViolationEventTimeT = Aws::Utils::DateTime>
    ViolationEvent& WithViolationEventTime(ViolationEventTimeT&& value) { SetViolationEventTime(std::forward<ViolationEventTimeT>(value)); return *this;}
    ///@}
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

    ViolationEventType m_violationEventType{ViolationEventType::NOT_SET};
    bool m_violationEventTypeHasBeenSet = false;

    VerificationState m_verificationState{VerificationState::NOT_SET};
    bool m_verificationStateHasBeenSet = false;

    Aws::String m_verificationStateDescription;
    bool m_verificationStateDescriptionHasBeenSet = false;

    Aws::Utils::DateTime m_violationEventTime{};
    bool m_violationEventTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
