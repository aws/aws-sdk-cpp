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
#include <aws/iot1click-devices/IoT1ClickDevicesServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace IoT1ClickDevicesService
{
namespace Model
{

  /**
   */
  class AWS_IOT1CLICKDEVICESSERVICE_API FinalizeDeviceClaimRequest : public IoT1ClickDevicesServiceRequest
  {
  public:
    FinalizeDeviceClaimRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "FinalizeDeviceClaim"; }

    Aws::String SerializePayload() const override;


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
    inline FinalizeDeviceClaimRequest& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}

    /**
     * <p>The unique identifier of the device.</p>
     */
    inline FinalizeDeviceClaimRequest& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the device.</p>
     */
    inline FinalizeDeviceClaimRequest& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}


    /**
     * <p>A collection of key/value pairs defining the resource tags. For example, {

     * "tags": {"key1": "value1", "key2": "value2"} }. For more information, see <a
     * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS

     * Tagging Strategies</a>.</p><p>
 
 </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A collection of key/value pairs defining the resource tags. For example, {

     * "tags": {"key1": "value1", "key2": "value2"} }. For more information, see <a
     * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS

     * Tagging Strategies</a>.</p><p>
 
 </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A collection of key/value pairs defining the resource tags. For example, {

     * "tags": {"key1": "value1", "key2": "value2"} }. For more information, see <a
     * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS

     * Tagging Strategies</a>.</p><p>
 
 </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A collection of key/value pairs defining the resource tags. For example, {

     * "tags": {"key1": "value1", "key2": "value2"} }. For more information, see <a
     * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS

     * Tagging Strategies</a>.</p><p>
 
 </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A collection of key/value pairs defining the resource tags. For example, {

     * "tags": {"key1": "value1", "key2": "value2"} }. For more information, see <a
     * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS

     * Tagging Strategies</a>.</p><p>
 
 </p>
     */
    inline FinalizeDeviceClaimRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A collection of key/value pairs defining the resource tags. For example, {

     * "tags": {"key1": "value1", "key2": "value2"} }. For more information, see <a
     * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS

     * Tagging Strategies</a>.</p><p>
 
 </p>
     */
    inline FinalizeDeviceClaimRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A collection of key/value pairs defining the resource tags. For example, {

     * "tags": {"key1": "value1", "key2": "value2"} }. For more information, see <a
     * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS

     * Tagging Strategies</a>.</p><p>
 
 </p>
     */
    inline FinalizeDeviceClaimRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A collection of key/value pairs defining the resource tags. For example, {

     * "tags": {"key1": "value1", "key2": "value2"} }. For more information, see <a
     * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS

     * Tagging Strategies</a>.</p><p>
 
 </p>
     */
    inline FinalizeDeviceClaimRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A collection of key/value pairs defining the resource tags. For example, {

     * "tags": {"key1": "value1", "key2": "value2"} }. For more information, see <a
     * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS

     * Tagging Strategies</a>.</p><p>
 
 </p>
     */
    inline FinalizeDeviceClaimRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A collection of key/value pairs defining the resource tags. For example, {

     * "tags": {"key1": "value1", "key2": "value2"} }. For more information, see <a
     * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS

     * Tagging Strategies</a>.</p><p>
 
 </p>
     */
    inline FinalizeDeviceClaimRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A collection of key/value pairs defining the resource tags. For example, {

     * "tags": {"key1": "value1", "key2": "value2"} }. For more information, see <a
     * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS

     * Tagging Strategies</a>.</p><p>
 
 </p>
     */
    inline FinalizeDeviceClaimRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A collection of key/value pairs defining the resource tags. For example, {

     * "tags": {"key1": "value1", "key2": "value2"} }. For more information, see <a
     * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS

     * Tagging Strategies</a>.</p><p>
 
 </p>
     */
    inline FinalizeDeviceClaimRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A collection of key/value pairs defining the resource tags. For example, {

     * "tags": {"key1": "value1", "key2": "value2"} }. For more information, see <a
     * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS

     * Tagging Strategies</a>.</p><p>
 
 </p>
     */
    inline FinalizeDeviceClaimRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace IoT1ClickDevicesService
} // namespace Aws
