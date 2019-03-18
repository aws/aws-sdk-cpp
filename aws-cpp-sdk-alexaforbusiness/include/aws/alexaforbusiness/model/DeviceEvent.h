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
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/model/DeviceEventType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace AlexaForBusiness
{
namespace Model
{

  /**
   * <p>The list of device events.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeviceEvent">AWS
   * API Reference</a></p>
   */
  class AWS_ALEXAFORBUSINESS_API DeviceEvent
  {
  public:
    DeviceEvent();
    DeviceEvent(Aws::Utils::Json::JsonView jsonValue);
    DeviceEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of device event.</p>
     */
    inline const DeviceEventType& GetType() const{ return m_type; }

    /**
     * <p>The type of device event.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of device event.</p>
     */
    inline void SetType(const DeviceEventType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of device event.</p>
     */
    inline void SetType(DeviceEventType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of device event.</p>
     */
    inline DeviceEvent& WithType(const DeviceEventType& value) { SetType(value); return *this;}

    /**
     * <p>The type of device event.</p>
     */
    inline DeviceEvent& WithType(DeviceEventType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The value of the event.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the event.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the event.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the event.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the event.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the event.</p>
     */
    inline DeviceEvent& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the event.</p>
     */
    inline DeviceEvent& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the event.</p>
     */
    inline DeviceEvent& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The time (in epoch) when the event occurred. </p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The time (in epoch) when the event occurred. </p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>The time (in epoch) when the event occurred. </p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The time (in epoch) when the event occurred. </p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>The time (in epoch) when the event occurred. </p>
     */
    inline DeviceEvent& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The time (in epoch) when the event occurred. </p>
     */
    inline DeviceEvent& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}

  private:

    DeviceEventType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
