/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/Behavior.h>
#include <aws/iot/model/MetricValue.h>
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
  class AWS_IOT_API ActiveViolation
  {
  public:
    ActiveViolation();
    ActiveViolation(Aws::Utils::Json::JsonView jsonValue);
    ActiveViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>The security profile whose behavior is in violation.</p>
     */
    inline const Aws::String& GetSecurityProfileName() const{ return m_securityProfileName; }

    /**
     * <p>The security profile whose behavior is in violation.</p>
     */
    inline bool SecurityProfileNameHasBeenSet() const { return m_securityProfileNameHasBeenSet; }

    /**
     * <p>The security profile whose behavior is in violation.</p>
     */
    inline void SetSecurityProfileName(const Aws::String& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = value; }

    /**
     * <p>The security profile whose behavior is in violation.</p>
     */
    inline void SetSecurityProfileName(Aws::String&& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = std::move(value); }

    /**
     * <p>The security profile whose behavior is in violation.</p>
     */
    inline void SetSecurityProfileName(const char* value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName.assign(value); }

    /**
     * <p>The security profile whose behavior is in violation.</p>
     */
    inline ActiveViolation& WithSecurityProfileName(const Aws::String& value) { SetSecurityProfileName(value); return *this;}

    /**
     * <p>The security profile whose behavior is in violation.</p>
     */
    inline ActiveViolation& WithSecurityProfileName(Aws::String&& value) { SetSecurityProfileName(std::move(value)); return *this;}

    /**
     * <p>The security profile whose behavior is in violation.</p>
     */
    inline ActiveViolation& WithSecurityProfileName(const char* value) { SetSecurityProfileName(value); return *this;}


    /**
     * <p>The behavior which is being violated.</p>
     */
    inline const Behavior& GetBehavior() const{ return m_behavior; }

    /**
     * <p>The behavior which is being violated.</p>
     */
    inline bool BehaviorHasBeenSet() const { return m_behaviorHasBeenSet; }

    /**
     * <p>The behavior which is being violated.</p>
     */
    inline void SetBehavior(const Behavior& value) { m_behaviorHasBeenSet = true; m_behavior = value; }

    /**
     * <p>The behavior which is being violated.</p>
     */
    inline void SetBehavior(Behavior&& value) { m_behaviorHasBeenSet = true; m_behavior = std::move(value); }

    /**
     * <p>The behavior which is being violated.</p>
     */
    inline ActiveViolation& WithBehavior(const Behavior& value) { SetBehavior(value); return *this;}

    /**
     * <p>The behavior which is being violated.</p>
     */
    inline ActiveViolation& WithBehavior(Behavior&& value) { SetBehavior(std::move(value)); return *this;}


    /**
     * <p>The value of the metric (the measurement) which caused the most recent
     * violation.</p>
     */
    inline const MetricValue& GetLastViolationValue() const{ return m_lastViolationValue; }

    /**
     * <p>The value of the metric (the measurement) which caused the most recent
     * violation.</p>
     */
    inline bool LastViolationValueHasBeenSet() const { return m_lastViolationValueHasBeenSet; }

    /**
     * <p>The value of the metric (the measurement) which caused the most recent
     * violation.</p>
     */
    inline void SetLastViolationValue(const MetricValue& value) { m_lastViolationValueHasBeenSet = true; m_lastViolationValue = value; }

    /**
     * <p>The value of the metric (the measurement) which caused the most recent
     * violation.</p>
     */
    inline void SetLastViolationValue(MetricValue&& value) { m_lastViolationValueHasBeenSet = true; m_lastViolationValue = std::move(value); }

    /**
     * <p>The value of the metric (the measurement) which caused the most recent
     * violation.</p>
     */
    inline ActiveViolation& WithLastViolationValue(const MetricValue& value) { SetLastViolationValue(value); return *this;}

    /**
     * <p>The value of the metric (the measurement) which caused the most recent
     * violation.</p>
     */
    inline ActiveViolation& WithLastViolationValue(MetricValue&& value) { SetLastViolationValue(std::move(value)); return *this;}


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
    bool m_violationIdHasBeenSet;

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet;

    Aws::String m_securityProfileName;
    bool m_securityProfileNameHasBeenSet;

    Behavior m_behavior;
    bool m_behaviorHasBeenSet;

    MetricValue m_lastViolationValue;
    bool m_lastViolationValueHasBeenSet;

    Aws::Utils::DateTime m_lastViolationTime;
    bool m_lastViolationTimeHasBeenSet;

    Aws::Utils::DateTime m_violationStartTime;
    bool m_violationStartTimeHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
