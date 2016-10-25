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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/DeviceAttribute.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents information about incompatibility.</p>
   */
  class AWS_DEVICEFARM_API IncompatibilityMessage
  {
  public:
    IncompatibilityMessage();
    IncompatibilityMessage(const Aws::Utils::Json::JsonValue& jsonValue);
    IncompatibilityMessage& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>A message about the incompatibility.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A message about the incompatibility.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A message about the incompatibility.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A message about the incompatibility.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A message about the incompatibility.</p>
     */
    inline IncompatibilityMessage& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A message about the incompatibility.</p>
     */
    inline IncompatibilityMessage& WithMessage(Aws::String&& value) { SetMessage(value); return *this;}

    /**
     * <p>A message about the incompatibility.</p>
     */
    inline IncompatibilityMessage& WithMessage(const char* value) { SetMessage(value); return *this;}

    /**
     * <p>The type of incompatibility.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>ARN: The ARN.</p> </li> <li> <p>FORM_FACTOR: The form factor (for example,
     * phone or tablet).</p> </li> <li> <p>MANUFACTURER: The manufacturer.</p> </li>
     * <li> <p>PLATFORM: The platform (for example, Android or iOS).</p> </li> </ul>
     */
    inline const DeviceAttribute& GetType() const{ return m_type; }

    /**
     * <p>The type of incompatibility.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>ARN: The ARN.</p> </li> <li> <p>FORM_FACTOR: The form factor (for example,
     * phone or tablet).</p> </li> <li> <p>MANUFACTURER: The manufacturer.</p> </li>
     * <li> <p>PLATFORM: The platform (for example, Android or iOS).</p> </li> </ul>
     */
    inline void SetType(const DeviceAttribute& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of incompatibility.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>ARN: The ARN.</p> </li> <li> <p>FORM_FACTOR: The form factor (for example,
     * phone or tablet).</p> </li> <li> <p>MANUFACTURER: The manufacturer.</p> </li>
     * <li> <p>PLATFORM: The platform (for example, Android or iOS).</p> </li> </ul>
     */
    inline void SetType(DeviceAttribute&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of incompatibility.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>ARN: The ARN.</p> </li> <li> <p>FORM_FACTOR: The form factor (for example,
     * phone or tablet).</p> </li> <li> <p>MANUFACTURER: The manufacturer.</p> </li>
     * <li> <p>PLATFORM: The platform (for example, Android or iOS).</p> </li> </ul>
     */
    inline IncompatibilityMessage& WithType(const DeviceAttribute& value) { SetType(value); return *this;}

    /**
     * <p>The type of incompatibility.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>ARN: The ARN.</p> </li> <li> <p>FORM_FACTOR: The form factor (for example,
     * phone or tablet).</p> </li> <li> <p>MANUFACTURER: The manufacturer.</p> </li>
     * <li> <p>PLATFORM: The platform (for example, Android or iOS).</p> </li> </ul>
     */
    inline IncompatibilityMessage& WithType(DeviceAttribute&& value) { SetType(value); return *this;}

  private:
    Aws::String m_message;
    bool m_messageHasBeenSet;
    DeviceAttribute m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
