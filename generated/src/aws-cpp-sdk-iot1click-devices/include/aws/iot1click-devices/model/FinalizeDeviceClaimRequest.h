/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class FinalizeDeviceClaimRequest : public IoT1ClickDevicesServiceRequest
  {
  public:
    AWS_IOT1CLICKDEVICESSERVICE_API FinalizeDeviceClaimRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "FinalizeDeviceClaim"; }

    AWS_IOT1CLICKDEVICESSERVICE_API Aws::String SerializePayload() const override;


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
    bool m_deviceIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT1ClickDevicesService
} // namespace Aws
