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
#include <aws/iot/model/ViolationEventType.h>
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
  class AWS_IOT_API ViolationEvent
  {
  public:
    ViolationEvent();
    ViolationEvent(Aws::Utils::Json::JsonView jsonValue);
    ViolationEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>The behavior which was violated.</p>
     */
    inline const Behavior& GetBehavior() const{ return m_behavior; }

    /**
     * <p>The behavior which was violated.</p>
     */
    inline bool BehaviorHasBeenSet() const { return m_behaviorHasBeenSet; }

    /**
     * <p>The behavior which was violated.</p>
     */
    inline void SetBehavior(const Behavior& value) { m_behaviorHasBeenSet = true; m_behavior = value; }

    /**
     * <p>The behavior which was violated.</p>
     */
    inline void SetBehavior(Behavior&& value) { m_behaviorHasBeenSet = true; m_behavior = std::move(value); }

    /**
     * <p>The behavior which was violated.</p>
     */
    inline ViolationEvent& WithBehavior(const Behavior& value) { SetBehavior(value); return *this;}

    /**
     * <p>The behavior which was violated.</p>
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
    bool m_violationIdHasBeenSet;

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet;

    Aws::String m_securityProfileName;
    bool m_securityProfileNameHasBeenSet;

    Behavior m_behavior;
    bool m_behaviorHasBeenSet;

    MetricValue m_metricValue;
    bool m_metricValueHasBeenSet;

    ViolationEventType m_violationEventType;
    bool m_violationEventTypeHasBeenSet;

    Aws::Utils::DateTime m_violationEventTime;
    bool m_violationEventTimeHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
