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
#include <aws/iot1click-devices/IoT1ClickDevicesService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace IoT1ClickDevicesService
{
namespace Model
{

  class AWS_IOT1CLICKDEVICESSERVICE_API DeviceDescription
  {
  public:
    DeviceDescription();
    DeviceDescription(Aws::Utils::Json::JsonView jsonValue);
    DeviceDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the device.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the device.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the device.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the device.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the device.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the device.</p>
     */
    inline DeviceDescription& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the device.</p>
     */
    inline DeviceDescription& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the device.</p>
     */
    inline DeviceDescription& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>An array of zero or more elements of DeviceAttribute objects providing
 user
     * specified device attributes.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>An array of zero or more elements of DeviceAttribute objects providing
 user
     * specified device attributes.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>An array of zero or more elements of DeviceAttribute objects providing
 user
     * specified device attributes.</p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>An array of zero or more elements of DeviceAttribute objects providing
 user
     * specified device attributes.</p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>An array of zero or more elements of DeviceAttribute objects providing
 user
     * specified device attributes.</p>
     */
    inline DeviceDescription& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>An array of zero or more elements of DeviceAttribute objects providing
 user
     * specified device attributes.</p>
     */
    inline DeviceDescription& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>An array of zero or more elements of DeviceAttribute objects providing
 user
     * specified device attributes.</p>
     */
    inline DeviceDescription& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>An array of zero or more elements of DeviceAttribute objects providing
 user
     * specified device attributes.</p>
     */
    inline DeviceDescription& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>An array of zero or more elements of DeviceAttribute objects providing
 user
     * specified device attributes.</p>
     */
    inline DeviceDescription& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An array of zero or more elements of DeviceAttribute objects providing
 user
     * specified device attributes.</p>
     */
    inline DeviceDescription& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An array of zero or more elements of DeviceAttribute objects providing
 user
     * specified device attributes.</p>
     */
    inline DeviceDescription& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An array of zero or more elements of DeviceAttribute objects providing
 user
     * specified device attributes.</p>
     */
    inline DeviceDescription& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>An array of zero or more elements of DeviceAttribute objects providing
 user
     * specified device attributes.</p>
     */
    inline DeviceDescription& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


    /**
     * <p>The unique identifier of the device.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }

    /**
     * <p>The unique identifier of the device.</p>
     */
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }

    /**
     * <p>The unique identifier of the device.</p>
     */
    inline void SetDeviceId(const Aws::String& value) { m_deviceIdHasBeenSet = true; m_deviceId = value; }

    /**
     * <p>The unique identifier of the device.</p>
     */
    inline void SetDeviceId(Aws::String&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::move(value); }

    /**
     * <p>The unique identifier of the device.</p>
     */
    inline void SetDeviceId(const char* value) { m_deviceIdHasBeenSet = true; m_deviceId.assign(value); }

    /**
     * <p>The unique identifier of the device.</p>
     */
    inline DeviceDescription& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}

    /**
     * <p>The unique identifier of the device.</p>
     */
    inline DeviceDescription& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the device.</p>
     */
    inline DeviceDescription& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}


    /**
     * <p>A Boolean value indicating whether or not the device is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>A Boolean value indicating whether or not the device is enabled.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>A Boolean value indicating whether or not the device is enabled.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>A Boolean value indicating whether or not the device is enabled.</p>
     */
    inline DeviceDescription& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>A value between 0 and 1 inclusive, representing the fraction of life
     * remaining for the
 device.</p>
     */
    inline double GetRemainingLife() const{ return m_remainingLife; }

    /**
     * <p>A value between 0 and 1 inclusive, representing the fraction of life
     * remaining for the
 device.</p>
     */
    inline bool RemainingLifeHasBeenSet() const { return m_remainingLifeHasBeenSet; }

    /**
     * <p>A value between 0 and 1 inclusive, representing the fraction of life
     * remaining for the
 device.</p>
     */
    inline void SetRemainingLife(double value) { m_remainingLifeHasBeenSet = true; m_remainingLife = value; }

    /**
     * <p>A value between 0 and 1 inclusive, representing the fraction of life
     * remaining for the
 device.</p>
     */
    inline DeviceDescription& WithRemainingLife(double value) { SetRemainingLife(value); return *this;}


    /**
     * <p>The type of the device, such as "button".</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of the device, such as "button".</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the device, such as "button".</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the device, such as "button".</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the device, such as "button".</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of the device, such as "button".</p>
     */
    inline DeviceDescription& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of the device, such as "button".</p>
     */
    inline DeviceDescription& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of the device, such as "button".</p>
     */
    inline DeviceDescription& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The tags currently associated with the AWS IoT 1-Click device.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags currently associated with the AWS IoT 1-Click device.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags currently associated with the AWS IoT 1-Click device.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags currently associated with the AWS IoT 1-Click device.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags currently associated with the AWS IoT 1-Click device.</p>
     */
    inline DeviceDescription& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags currently associated with the AWS IoT 1-Click device.</p>
     */
    inline DeviceDescription& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags currently associated with the AWS IoT 1-Click device.</p>
     */
    inline DeviceDescription& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags currently associated with the AWS IoT 1-Click device.</p>
     */
    inline DeviceDescription& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags currently associated with the AWS IoT 1-Click device.</p>
     */
    inline DeviceDescription& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags currently associated with the AWS IoT 1-Click device.</p>
     */
    inline DeviceDescription& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags currently associated with the AWS IoT 1-Click device.</p>
     */
    inline DeviceDescription& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags currently associated with the AWS IoT 1-Click device.</p>
     */
    inline DeviceDescription& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags currently associated with the AWS IoT 1-Click device.</p>
     */
    inline DeviceDescription& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet;

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet;

    bool m_enabled;
    bool m_enabledHasBeenSet;

    double m_remainingLife;
    bool m_remainingLifeHasBeenSet;

    Aws::String m_type;
    bool m_typeHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace IoT1ClickDevicesService
} // namespace Aws
