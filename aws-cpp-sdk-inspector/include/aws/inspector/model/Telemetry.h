/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector/model/MessageTypeTelemetry.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Inspector
{
namespace Model
{

  /**
   * <p>The metadata about the Inspector application data metrics collected by the
   * agent.</p> <p>This data type is used as the response element in the
   * <a>GetAssessmentTelemetry</a> action.</p>
   */
  class AWS_INSPECTOR_API Telemetry
  {
  public:
    Telemetry();
    Telemetry(const Aws::Utils::Json::JsonValue& jsonValue);
    Telemetry& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The category of the individual metrics that together constitute the telemetry
     * that Inspector received from the agent.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The category of the individual metrics that together constitute the telemetry
     * that Inspector received from the agent.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The category of the individual metrics that together constitute the telemetry
     * that Inspector received from the agent.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The category of the individual metrics that together constitute the telemetry
     * that Inspector received from the agent.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The category of the individual metrics that together constitute the telemetry
     * that Inspector received from the agent.</p>
     */
    inline Telemetry& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The category of the individual metrics that together constitute the telemetry
     * that Inspector received from the agent.</p>
     */
    inline Telemetry& WithStatus(Aws::String&& value) { SetStatus(value); return *this;}

    /**
     * <p>The category of the individual metrics that together constitute the telemetry
     * that Inspector received from the agent.</p>
     */
    inline Telemetry& WithStatus(const char* value) { SetStatus(value); return *this;}

    /**
     * <p>Counts of individual metrics received by Inspector from the agent.</p>
     */
    inline const Aws::Vector<MessageTypeTelemetry>& GetMessageTypeTelemetries() const{ return m_messageTypeTelemetries; }

    /**
     * <p>Counts of individual metrics received by Inspector from the agent.</p>
     */
    inline void SetMessageTypeTelemetries(const Aws::Vector<MessageTypeTelemetry>& value) { m_messageTypeTelemetriesHasBeenSet = true; m_messageTypeTelemetries = value; }

    /**
     * <p>Counts of individual metrics received by Inspector from the agent.</p>
     */
    inline void SetMessageTypeTelemetries(Aws::Vector<MessageTypeTelemetry>&& value) { m_messageTypeTelemetriesHasBeenSet = true; m_messageTypeTelemetries = value; }

    /**
     * <p>Counts of individual metrics received by Inspector from the agent.</p>
     */
    inline Telemetry& WithMessageTypeTelemetries(const Aws::Vector<MessageTypeTelemetry>& value) { SetMessageTypeTelemetries(value); return *this;}

    /**
     * <p>Counts of individual metrics received by Inspector from the agent.</p>
     */
    inline Telemetry& WithMessageTypeTelemetries(Aws::Vector<MessageTypeTelemetry>&& value) { SetMessageTypeTelemetries(value); return *this;}

    /**
     * <p>Counts of individual metrics received by Inspector from the agent.</p>
     */
    inline Telemetry& AddMessageTypeTelemetries(const MessageTypeTelemetry& value) { m_messageTypeTelemetriesHasBeenSet = true; m_messageTypeTelemetries.push_back(value); return *this; }

    /**
     * <p>Counts of individual metrics received by Inspector from the agent.</p>
     */
    inline Telemetry& AddMessageTypeTelemetries(MessageTypeTelemetry&& value) { m_messageTypeTelemetriesHasBeenSet = true; m_messageTypeTelemetries.push_back(value); return *this; }

  private:
    Aws::String m_status;
    bool m_statusHasBeenSet;
    Aws::Vector<MessageTypeTelemetry> m_messageTypeTelemetries;
    bool m_messageTypeTelemetriesHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
