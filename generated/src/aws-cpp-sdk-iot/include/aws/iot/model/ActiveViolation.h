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
    AWS_IOT_API ActiveViolation();
    AWS_IOT_API ActiveViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ActiveViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the active violation.</p>
     */
    inline const Aws::String& GetViolationId() const{ return m_violationId; }

    /**
     * <p>The ID of the active violation.</p>
     */
    inline bool ViolationIdHasBeenSet() const { return m_violationIdHasBeenSet; }

    /**
     * <p>The ID of the active violation.</p>
     */
    inline void SetViolationId(const Aws::String& value) { m_violationIdHasBeenSet = true; m_violationId = value; }

    /**
     * <p>The ID of the active violation.</p>
     */
    inline void SetViolationId(Aws::String&& value) { m_violationIdHasBeenSet = true; m_violationId = std::move(value); }

    /**
     * <p>The ID of the active violation.</p>
     */
    inline void SetViolationId(const char* value) { m_violationIdHasBeenSet = true; m_violationId.assign(value); }

    /**
     * <p>The ID of the active violation.</p>
     */
    inline ActiveViolation& WithViolationId(const Aws::String& value) { SetViolationId(value); return *this;}

    /**
     * <p>The ID of the active violation.</p>
     */
    inline ActiveViolation& WithViolationId(Aws::String&& value) { SetViolationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the active violation.</p>
     */
    inline ActiveViolation& WithViolationId(const char* value) { SetViolationId(value); return *this;}


    /**
     * <p>The name of the thing responsible for the active violation.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }

    /**
     * <p>The name of the thing responsible for the active violation.</p>
     */
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }

    /**
     * <p>The name of the thing responsible for the active violation.</p>
     */
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }

    /**
     * <p>The name of the thing responsible for the active violation.</p>
     */
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = std::move(value); }

    /**
     * <p>The name of the thing responsible for the active violation.</p>
     */
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }

    /**
     * <p>The name of the thing responsible for the active violation.</p>
     */
    inline ActiveViolation& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}

    /**
     * <p>The name of the thing responsible for the active violation.</p>
     */
    inline ActiveViolation& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}

    /**
     * <p>The name of the thing responsible for the active violation.</p>
     */
    inline ActiveViolation& WithThingName(const char* value) { SetThingName(value); return *this;}


    /**
     * <p>The security profile with the behavior is in violation.</p>
     */
    inline const Aws::String& GetSecurityProfileName() const{ return m_securityProfileName; }

    /**
     * <p>The security profile with the behavior is in violation.</p>
     */
    inline bool SecurityProfileNameHasBeenSet() const { return m_securityProfileNameHasBeenSet; }

    /**
     * <p>The security profile with the behavior is in violation.</p>
     */
    inline void SetSecurityProfileName(const Aws::String& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = value; }

    /**
     * <p>The security profile with the behavior is in violation.</p>
     */
    inline void SetSecurityProfileName(Aws::String&& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = std::move(value); }

    /**
     * <p>The security profile with the behavior is in violation.</p>
     */
    inline void SetSecurityProfileName(const char* value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName.assign(value); }

    /**
     * <p>The security profile with the behavior is in violation.</p>
     */
    inline ActiveViolation& WithSecurityProfileName(const Aws::String& value) { SetSecurityProfileName(value); return *this;}

    /**
     * <p>The security profile with the behavior is in violation.</p>
     */
    inline ActiveViolation& WithSecurityProfileName(Aws::String&& value) { SetSecurityProfileName(std::move(value)); return *this;}

    /**
     * <p>The security profile with the behavior is in violation.</p>
     */
    inline ActiveViolation& WithSecurityProfileName(const char* value) { SetSecurityProfileName(value); return *this;}


    /**
     * <p>The behavior that is being violated.</p>
     */
    inline const Behavior& GetBehavior() const{ return m_behavior; }

    /**
     * <p>The behavior that is being violated.</p>
     */
    inline bool BehaviorHasBeenSet() const { return m_behaviorHasBeenSet; }

    /**
     * <p>The behavior that is being violated.</p>
     */
    inline void SetBehavior(const Behavior& value) { m_behaviorHasBeenSet = true; m_behavior = value; }

    /**
     * <p>The behavior that is being violated.</p>
     */
    inline void SetBehavior(Behavior&& value) { m_behaviorHasBeenSet = true; m_behavior = std::move(value); }

    /**
     * <p>The behavior that is being violated.</p>
     */
    inline ActiveViolation& WithBehavior(const Behavior& value) { SetBehavior(value); return *this;}

    /**
     * <p>The behavior that is being violated.</p>
     */
    inline ActiveViolation& WithBehavior(Behavior&& value) { SetBehavior(std::move(value)); return *this;}


    /**
     * <p>The value of the metric (the measurement) that caused the most recent
     * violation.</p>
     */
    inline const MetricValue& GetLastViolationValue() const{ return m_lastViolationValue; }

    /**
     * <p>The value of the metric (the measurement) that caused the most recent
     * violation.</p>
     */
    inline bool LastViolationValueHasBeenSet() const { return m_lastViolationValueHasBeenSet; }

    /**
     * <p>The value of the metric (the measurement) that caused the most recent
     * violation.</p>
     */
    inline void SetLastViolationValue(const MetricValue& value) { m_lastViolationValueHasBeenSet = true; m_lastViolationValue = value; }

    /**
     * <p>The value of the metric (the measurement) that caused the most recent
     * violation.</p>
     */
    inline void SetLastViolationValue(MetricValue&& value) { m_lastViolationValueHasBeenSet = true; m_lastViolationValue = std::move(value); }

    /**
     * <p>The value of the metric (the measurement) that caused the most recent
     * violation.</p>
     */
    inline ActiveViolation& WithLastViolationValue(const MetricValue& value) { SetLastViolationValue(value); return *this;}

    /**
     * <p>The value of the metric (the measurement) that caused the most recent
     * violation.</p>
     */
    inline ActiveViolation& WithLastViolationValue(MetricValue&& value) { SetLastViolationValue(std::move(value)); return *this;}


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
    inline ActiveViolation& WithViolationEventAdditionalInfo(const ViolationEventAdditionalInfo& value) { SetViolationEventAdditionalInfo(value); return *this;}

    /**
     * <p> The details of a violation event. </p>
     */
    inline ActiveViolation& WithViolationEventAdditionalInfo(ViolationEventAdditionalInfo&& value) { SetViolationEventAdditionalInfo(std::move(value)); return *this;}


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
    inline ActiveViolation& WithVerificationState(const VerificationState& value) { SetVerificationState(value); return *this;}

    /**
     * <p>The verification state of the violation (detect alarm).</p>
     */
    inline ActiveViolation& WithVerificationState(VerificationState&& value) { SetVerificationState(std::move(value)); return *this;}


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
    inline ActiveViolation& WithVerificationStateDescription(const Aws::String& value) { SetVerificationStateDescription(value); return *this;}

    /**
     * <p>The description of the verification state of the violation.</p>
     */
    inline ActiveViolation& WithVerificationStateDescription(Aws::String&& value) { SetVerificationStateDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the verification state of the violation.</p>
     */
    inline ActiveViolation& WithVerificationStateDescription(const char* value) { SetVerificationStateDescription(value); return *this;}


    /**
     * <p>The time the most recent violation occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetLastViolationTime() const{ return m_lastViolationTime; }

    /**
     * <p>The time the most recent violation occurred.</p>
     */
    inline bool LastViolationTimeHasBeenSet() const { return m_lastViolationTimeHasBeenSet; }

    /**
     * <p>The time the most recent violation occurred.</p>
     */
    inline void SetLastViolationTime(const Aws::Utils::DateTime& value) { m_lastViolationTimeHasBeenSet = true; m_lastViolationTime = value; }

    /**
     * <p>The time the most recent violation occurred.</p>
     */
    inline void SetLastViolationTime(Aws::Utils::DateTime&& value) { m_lastViolationTimeHasBeenSet = true; m_lastViolationTime = std::move(value); }

    /**
     * <p>The time the most recent violation occurred.</p>
     */
    inline ActiveViolation& WithLastViolationTime(const Aws::Utils::DateTime& value) { SetLastViolationTime(value); return *this;}

    /**
     * <p>The time the most recent violation occurred.</p>
     */
    inline ActiveViolation& WithLastViolationTime(Aws::Utils::DateTime&& value) { SetLastViolationTime(std::move(value)); return *this;}


    /**
     * <p>The time the violation started.</p>
     */
    inline const Aws::Utils::DateTime& GetViolationStartTime() const{ return m_violationStartTime; }

    /**
     * <p>The time the violation started.</p>
     */
    inline bool ViolationStartTimeHasBeenSet() const { return m_violationStartTimeHasBeenSet; }

    /**
     * <p>The time the violation started.</p>
     */
    inline void SetViolationStartTime(const Aws::Utils::DateTime& value) { m_violationStartTimeHasBeenSet = true; m_violationStartTime = value; }

    /**
     * <p>The time the violation started.</p>
     */
    inline void SetViolationStartTime(Aws::Utils::DateTime&& value) { m_violationStartTimeHasBeenSet = true; m_violationStartTime = std::move(value); }

    /**
     * <p>The time the violation started.</p>
     */
    inline ActiveViolation& WithViolationStartTime(const Aws::Utils::DateTime& value) { SetViolationStartTime(value); return *this;}

    /**
     * <p>The time the violation started.</p>
     */
    inline ActiveViolation& WithViolationStartTime(Aws::Utils::DateTime&& value) { SetViolationStartTime(std::move(value)); return *this;}

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

    VerificationState m_verificationState;
    bool m_verificationStateHasBeenSet = false;

    Aws::String m_verificationStateDescription;
    bool m_verificationStateDescriptionHasBeenSet = false;

    Aws::Utils::DateTime m_lastViolationTime;
    bool m_lastViolationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_violationStartTime;
    bool m_violationStartTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
