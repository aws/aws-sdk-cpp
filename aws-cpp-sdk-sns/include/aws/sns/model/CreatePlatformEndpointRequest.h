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
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/sns/SNSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>

namespace Aws
{
namespace SNS
{
namespace Model
{

  /**
   * <p>Input for CreatePlatformEndpoint action.</p>
   */
  class AWS_SNS_API CreatePlatformEndpointRequest : public SNSRequest
  {
  public:
    CreatePlatformEndpointRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>PlatformApplicationArn returned from CreatePlatformApplication is used to
     * create a an endpoint.</p>
     */
    inline const Aws::String& GetPlatformApplicationArn() const{ return m_platformApplicationArn; }

    /**
     * <p>PlatformApplicationArn returned from CreatePlatformApplication is used to
     * create a an endpoint.</p>
     */
    inline void SetPlatformApplicationArn(const Aws::String& value) { m_platformApplicationArnHasBeenSet = true; m_platformApplicationArn = value; }

    /**
     * <p>PlatformApplicationArn returned from CreatePlatformApplication is used to
     * create a an endpoint.</p>
     */
    inline void SetPlatformApplicationArn(Aws::String&& value) { m_platformApplicationArnHasBeenSet = true; m_platformApplicationArn = value; }

    /**
     * <p>PlatformApplicationArn returned from CreatePlatformApplication is used to
     * create a an endpoint.</p>
     */
    inline void SetPlatformApplicationArn(const char* value) { m_platformApplicationArnHasBeenSet = true; m_platformApplicationArn.assign(value); }

    /**
     * <p>PlatformApplicationArn returned from CreatePlatformApplication is used to
     * create a an endpoint.</p>
     */
    inline CreatePlatformEndpointRequest& WithPlatformApplicationArn(const Aws::String& value) { SetPlatformApplicationArn(value); return *this;}

    /**
     * <p>PlatformApplicationArn returned from CreatePlatformApplication is used to
     * create a an endpoint.</p>
     */
    inline CreatePlatformEndpointRequest& WithPlatformApplicationArn(Aws::String&& value) { SetPlatformApplicationArn(value); return *this;}

    /**
     * <p>PlatformApplicationArn returned from CreatePlatformApplication is used to
     * create a an endpoint.</p>
     */
    inline CreatePlatformEndpointRequest& WithPlatformApplicationArn(const char* value) { SetPlatformApplicationArn(value); return *this;}

    /**
     * <p>Unique identifier created by the notification service for an app on a device.
     * The specific name for Token will vary, depending on which notification service
     * is being used. For example, when using APNS as the notification service, you
     * need the device token. Alternatively, when using GCM or ADM, the device token
     * equivalent is called the registration ID.</p>
     */
    inline const Aws::String& GetToken() const{ return m_token; }

    /**
     * <p>Unique identifier created by the notification service for an app on a device.
     * The specific name for Token will vary, depending on which notification service
     * is being used. For example, when using APNS as the notification service, you
     * need the device token. Alternatively, when using GCM or ADM, the device token
     * equivalent is called the registration ID.</p>
     */
    inline void SetToken(const Aws::String& value) { m_tokenHasBeenSet = true; m_token = value; }

    /**
     * <p>Unique identifier created by the notification service for an app on a device.
     * The specific name for Token will vary, depending on which notification service
     * is being used. For example, when using APNS as the notification service, you
     * need the device token. Alternatively, when using GCM or ADM, the device token
     * equivalent is called the registration ID.</p>
     */
    inline void SetToken(Aws::String&& value) { m_tokenHasBeenSet = true; m_token = value; }

    /**
     * <p>Unique identifier created by the notification service for an app on a device.
     * The specific name for Token will vary, depending on which notification service
     * is being used. For example, when using APNS as the notification service, you
     * need the device token. Alternatively, when using GCM or ADM, the device token
     * equivalent is called the registration ID.</p>
     */
    inline void SetToken(const char* value) { m_tokenHasBeenSet = true; m_token.assign(value); }

    /**
     * <p>Unique identifier created by the notification service for an app on a device.
     * The specific name for Token will vary, depending on which notification service
     * is being used. For example, when using APNS as the notification service, you
     * need the device token. Alternatively, when using GCM or ADM, the device token
     * equivalent is called the registration ID.</p>
     */
    inline CreatePlatformEndpointRequest& WithToken(const Aws::String& value) { SetToken(value); return *this;}

    /**
     * <p>Unique identifier created by the notification service for an app on a device.
     * The specific name for Token will vary, depending on which notification service
     * is being used. For example, when using APNS as the notification service, you
     * need the device token. Alternatively, when using GCM or ADM, the device token
     * equivalent is called the registration ID.</p>
     */
    inline CreatePlatformEndpointRequest& WithToken(Aws::String&& value) { SetToken(value); return *this;}

    /**
     * <p>Unique identifier created by the notification service for an app on a device.
     * The specific name for Token will vary, depending on which notification service
     * is being used. For example, when using APNS as the notification service, you
     * need the device token. Alternatively, when using GCM or ADM, the device token
     * equivalent is called the registration ID.</p>
     */
    inline CreatePlatformEndpointRequest& WithToken(const char* value) { SetToken(value); return *this;}

    /**
     * <p>Arbitrary user data to associate with the endpoint. Amazon SNS does not use
     * this data. The data must be in UTF-8 format and less than 2KB.</p>
     */
    inline const Aws::String& GetCustomUserData() const{ return m_customUserData; }

    /**
     * <p>Arbitrary user data to associate with the endpoint. Amazon SNS does not use
     * this data. The data must be in UTF-8 format and less than 2KB.</p>
     */
    inline void SetCustomUserData(const Aws::String& value) { m_customUserDataHasBeenSet = true; m_customUserData = value; }

    /**
     * <p>Arbitrary user data to associate with the endpoint. Amazon SNS does not use
     * this data. The data must be in UTF-8 format and less than 2KB.</p>
     */
    inline void SetCustomUserData(Aws::String&& value) { m_customUserDataHasBeenSet = true; m_customUserData = value; }

    /**
     * <p>Arbitrary user data to associate with the endpoint. Amazon SNS does not use
     * this data. The data must be in UTF-8 format and less than 2KB.</p>
     */
    inline void SetCustomUserData(const char* value) { m_customUserDataHasBeenSet = true; m_customUserData.assign(value); }

    /**
     * <p>Arbitrary user data to associate with the endpoint. Amazon SNS does not use
     * this data. The data must be in UTF-8 format and less than 2KB.</p>
     */
    inline CreatePlatformEndpointRequest& WithCustomUserData(const Aws::String& value) { SetCustomUserData(value); return *this;}

    /**
     * <p>Arbitrary user data to associate with the endpoint. Amazon SNS does not use
     * this data. The data must be in UTF-8 format and less than 2KB.</p>
     */
    inline CreatePlatformEndpointRequest& WithCustomUserData(Aws::String&& value) { SetCustomUserData(value); return *this;}

    /**
     * <p>Arbitrary user data to associate with the endpoint. Amazon SNS does not use
     * this data. The data must be in UTF-8 format and less than 2KB.</p>
     */
    inline CreatePlatformEndpointRequest& WithCustomUserData(const char* value) { SetCustomUserData(value); return *this;}

    /**
     * <p>For a list of attributes, see <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_SetEndpointAttributes.html">SetEndpointAttributes</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>For a list of attributes, see <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_SetEndpointAttributes.html">SetEndpointAttributes</a>.</p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>For a list of attributes, see <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_SetEndpointAttributes.html">SetEndpointAttributes</a>.</p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>For a list of attributes, see <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_SetEndpointAttributes.html">SetEndpointAttributes</a>.</p>
     */
    inline CreatePlatformEndpointRequest& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>For a list of attributes, see <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_SetEndpointAttributes.html">SetEndpointAttributes</a>.</p>
     */
    inline CreatePlatformEndpointRequest& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(value); return *this;}

    /**
     * <p>For a list of attributes, see <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_SetEndpointAttributes.html">SetEndpointAttributes</a>.</p>
     */
    inline CreatePlatformEndpointRequest& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>For a list of attributes, see <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_SetEndpointAttributes.html">SetEndpointAttributes</a>.</p>
     */
    inline CreatePlatformEndpointRequest& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>For a list of attributes, see <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_SetEndpointAttributes.html">SetEndpointAttributes</a>.</p>
     */
    inline CreatePlatformEndpointRequest& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>For a list of attributes, see <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_SetEndpointAttributes.html">SetEndpointAttributes</a>.</p>
     */
    inline CreatePlatformEndpointRequest& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>For a list of attributes, see <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_SetEndpointAttributes.html">SetEndpointAttributes</a>.</p>
     */
    inline CreatePlatformEndpointRequest& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>For a list of attributes, see <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_SetEndpointAttributes.html">SetEndpointAttributes</a>.</p>
     */
    inline CreatePlatformEndpointRequest& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>For a list of attributes, see <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_SetEndpointAttributes.html">SetEndpointAttributes</a>.</p>
     */
    inline CreatePlatformEndpointRequest& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

  private:
    Aws::String m_platformApplicationArn;
    bool m_platformApplicationArnHasBeenSet;
    Aws::String m_token;
    bool m_tokenHasBeenSet;
    Aws::String m_customUserData;
    bool m_customUserDataHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
