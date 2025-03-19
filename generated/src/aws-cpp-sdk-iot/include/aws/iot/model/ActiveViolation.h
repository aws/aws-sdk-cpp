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
   * <p>Information about an active Device Defender security profile behavior
   * violation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ActiveViolation">AWS
   * API Reference</a></p>
   */
  class ActiveViolation
  {
  public:
    AWS_IOT_API ActiveViolation() = default;
    AWS_IOT_API ActiveViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ActiveViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the active violation.</p>
     */
    inline const Aws::String& GetViolationId() const { return m_violationId; }
    inline bool ViolationIdHasBeenSet() const { return m_violationIdHasBeenSet; }
    template<typename ViolationIdT = Aws::String>
    void SetViolationId(ViolationIdT&& value) { m_violationIdHasBeenSet = true; m_violationId = std::forward<ViolationIdT>(value); }
    template<typename ViolationIdT = Aws::String>
    ActiveViolation& WithViolationId(ViolationIdT&& value) { SetViolationId(std::forward<ViolationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the thing responsible for the active violation.</p>
     */
    inline const Aws::String& GetThingName() const { return m_thingName; }
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }
    template<typename ThingNameT = Aws::String>
    void SetThingName(ThingNameT&& value) { m_thingNameHasBeenSet = true; m_thingName = std::forward<ThingNameT>(value); }
    template<typename ThingNameT = Aws::String>
    ActiveViolation& WithThingName(ThingNameT&& value) { SetThingName(std::forward<ThingNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security profile with the behavior is in violation.</p>
     */
    inline const Aws::String& GetSecurityProfileName() const { return m_securityProfileName; }
    inline bool SecurityProfileNameHasBeenSet() const { return m_securityProfileNameHasBeenSet; }
    template<typename SecurityProfileNameT = Aws::String>
    void SetSecurityProfileName(SecurityProfileNameT&& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = std::forward<SecurityProfileNameT>(value); }
    template<typename SecurityProfileNameT = Aws::String>
    ActiveViolation& WithSecurityProfileName(SecurityProfileNameT&& value) { SetSecurityProfileName(std::forward<SecurityProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The behavior that is being violated.</p>
     */
    inline const Behavior& GetBehavior() const { return m_behavior; }
    inline bool BehaviorHasBeenSet() const { return m_behaviorHasBeenSet; }
    template<typename BehaviorT = Behavior>
    void SetBehavior(BehaviorT&& value) { m_behaviorHasBeenSet = true; m_behavior = std::forward<BehaviorT>(value); }
    template<typename BehaviorT = Behavior>
    ActiveViolation& WithBehavior(BehaviorT&& value) { SetBehavior(std::forward<BehaviorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the metric (the measurement) that caused the most recent
     * violation.</p>
     */
    inline const MetricValue& GetLastViolationValue() const { return m_lastViolationValue; }
    inline bool LastViolationValueHasBeenSet() const { return m_lastViolationValueHasBeenSet; }
    template<typename LastViolationValueT = MetricValue>
    void SetLastViolationValue(LastViolationValueT&& value) { m_lastViolationValueHasBeenSet = true; m_lastViolationValue = std::forward<LastViolationValueT>(value); }
    template<typename LastViolationValueT = MetricValue>
    ActiveViolation& WithLastViolationValue(LastViolationValueT&& value) { SetLastViolationValue(std::forward<LastViolationValueT>(value)); return *this;}
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
    ActiveViolation& WithViolationEventAdditionalInfo(ViolationEventAdditionalInfoT&& value) { SetViolationEventAdditionalInfo(std::forward<ViolationEventAdditionalInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The verification state of the violation (detect alarm).</p>
     */
    inline VerificationState GetVerificationState() const { return m_verificationState; }
    inline bool VerificationStateHasBeenSet() const { return m_verificationStateHasBeenSet; }
    inline void SetVerificationState(VerificationState value) { m_verificationStateHasBeenSet = true; m_verificationState = value; }
    inline ActiveViolation& WithVerificationState(VerificationState value) { SetVerificationState(value); return *this;}
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
    ActiveViolation& WithVerificationStateDescription(VerificationStateDescriptionT&& value) { SetVerificationStateDescription(std::forward<VerificationStateDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the most recent violation occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetLastViolationTime() const { return m_lastViolationTime; }
    inline bool LastViolationTimeHasBeenSet() const { return m_lastViolationTimeHasBeenSet; }
    template<typename LastViolationTimeT = Aws::Utils::DateTime>
    void SetLastViolationTime(LastViolationTimeT&& value) { m_lastViolationTimeHasBeenSet = true; m_lastViolationTime = std::forward<LastViolationTimeT>(value); }
    template<typename LastViolationTimeT = Aws::Utils::DateTime>
    ActiveViolation& WithLastViolationTime(LastViolationTimeT&& value) { SetLastViolationTime(std::forward<LastViolationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the violation started.</p>
     */
    inline const Aws::Utils::DateTime& GetViolationStartTime() const { return m_violationStartTime; }
    inline bool ViolationStartTimeHasBeenSet() const { return m_violationStartTimeHasBeenSet; }
    template<typename ViolationStartTimeT = Aws::Utils::DateTime>
    void SetViolationStartTime(ViolationStartTimeT&& value) { m_violationStartTimeHasBeenSet = true; m_violationStartTime = std::forward<ViolationStartTimeT>(value); }
    template<typename ViolationStartTimeT = Aws::Utils::DateTime>
    ActiveViolation& WithViolationStartTime(ViolationStartTimeT&& value) { SetViolationStartTime(std::forward<ViolationStartTimeT>(value)); return *this;}
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

    MetricValue m_lastViolationValue;
    bool m_lastViolationValueHasBeenSet = false;

    ViolationEventAdditionalInfo m_violationEventAdditionalInfo;
    bool m_violationEventAdditionalInfoHasBeenSet = false;

    VerificationState m_verificationState{VerificationState::NOT_SET};
    bool m_verificationStateHasBeenSet = false;

    Aws::String m_verificationStateDescription;
    bool m_verificationStateDescriptionHasBeenSet = false;

    Aws::Utils::DateTime m_lastViolationTime{};
    bool m_lastViolationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_violationStartTime{};
    bool m_violationStartTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
