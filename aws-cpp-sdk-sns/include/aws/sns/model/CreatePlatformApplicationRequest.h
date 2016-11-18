﻿/*
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
   * <p>Input for CreatePlatformApplication action.</p>
   */
  class AWS_SNS_API CreatePlatformApplicationRequest : public SNSRequest
  {
  public:
    CreatePlatformApplicationRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>Application names must be made up of only uppercase and lowercase ASCII
     * letters, numbers, underscores, hyphens, and periods, and must be between 1 and
     * 256 characters long.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Application names must be made up of only uppercase and lowercase ASCII
     * letters, numbers, underscores, hyphens, and periods, and must be between 1 and
     * 256 characters long.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Application names must be made up of only uppercase and lowercase ASCII
     * letters, numbers, underscores, hyphens, and periods, and must be between 1 and
     * 256 characters long.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Application names must be made up of only uppercase and lowercase ASCII
     * letters, numbers, underscores, hyphens, and periods, and must be between 1 and
     * 256 characters long.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Application names must be made up of only uppercase and lowercase ASCII
     * letters, numbers, underscores, hyphens, and periods, and must be between 1 and
     * 256 characters long.</p>
     */
    inline CreatePlatformApplicationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Application names must be made up of only uppercase and lowercase ASCII
     * letters, numbers, underscores, hyphens, and periods, and must be between 1 and
     * 256 characters long.</p>
     */
    inline CreatePlatformApplicationRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>Application names must be made up of only uppercase and lowercase ASCII
     * letters, numbers, underscores, hyphens, and periods, and must be between 1 and
     * 256 characters long.</p>
     */
    inline CreatePlatformApplicationRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The following platforms are supported: ADM (Amazon Device Messaging), APNS
     * (Apple Push Notification Service), APNS_SANDBOX, and GCM (Google Cloud
     * Messaging).</p>
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }

    /**
     * <p>The following platforms are supported: ADM (Amazon Device Messaging), APNS
     * (Apple Push Notification Service), APNS_SANDBOX, and GCM (Google Cloud
     * Messaging).</p>
     */
    inline void SetPlatform(const Aws::String& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The following platforms are supported: ADM (Amazon Device Messaging), APNS
     * (Apple Push Notification Service), APNS_SANDBOX, and GCM (Google Cloud
     * Messaging).</p>
     */
    inline void SetPlatform(Aws::String&& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The following platforms are supported: ADM (Amazon Device Messaging), APNS
     * (Apple Push Notification Service), APNS_SANDBOX, and GCM (Google Cloud
     * Messaging).</p>
     */
    inline void SetPlatform(const char* value) { m_platformHasBeenSet = true; m_platform.assign(value); }

    /**
     * <p>The following platforms are supported: ADM (Amazon Device Messaging), APNS
     * (Apple Push Notification Service), APNS_SANDBOX, and GCM (Google Cloud
     * Messaging).</p>
     */
    inline CreatePlatformApplicationRequest& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}

    /**
     * <p>The following platforms are supported: ADM (Amazon Device Messaging), APNS
     * (Apple Push Notification Service), APNS_SANDBOX, and GCM (Google Cloud
     * Messaging).</p>
     */
    inline CreatePlatformApplicationRequest& WithPlatform(Aws::String&& value) { SetPlatform(value); return *this;}

    /**
     * <p>The following platforms are supported: ADM (Amazon Device Messaging), APNS
     * (Apple Push Notification Service), APNS_SANDBOX, and GCM (Google Cloud
     * Messaging).</p>
     */
    inline CreatePlatformApplicationRequest& WithPlatform(const char* value) { SetPlatform(value); return *this;}

    /**
     * <p>For a list of attributes, see <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_SetPlatformApplicationAttributes.html">SetPlatformApplicationAttributes</a>
     * </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>For a list of attributes, see <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_SetPlatformApplicationAttributes.html">SetPlatformApplicationAttributes</a>
     * </p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>For a list of attributes, see <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_SetPlatformApplicationAttributes.html">SetPlatformApplicationAttributes</a>
     * </p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>For a list of attributes, see <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_SetPlatformApplicationAttributes.html">SetPlatformApplicationAttributes</a>
     * </p>
     */
    inline CreatePlatformApplicationRequest& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>For a list of attributes, see <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_SetPlatformApplicationAttributes.html">SetPlatformApplicationAttributes</a>
     * </p>
     */
    inline CreatePlatformApplicationRequest& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(value); return *this;}

    /**
     * <p>For a list of attributes, see <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_SetPlatformApplicationAttributes.html">SetPlatformApplicationAttributes</a>
     * </p>
     */
    inline CreatePlatformApplicationRequest& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>For a list of attributes, see <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_SetPlatformApplicationAttributes.html">SetPlatformApplicationAttributes</a>
     * </p>
     */
    inline CreatePlatformApplicationRequest& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>For a list of attributes, see <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_SetPlatformApplicationAttributes.html">SetPlatformApplicationAttributes</a>
     * </p>
     */
    inline CreatePlatformApplicationRequest& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>For a list of attributes, see <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_SetPlatformApplicationAttributes.html">SetPlatformApplicationAttributes</a>
     * </p>
     */
    inline CreatePlatformApplicationRequest& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>For a list of attributes, see <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_SetPlatformApplicationAttributes.html">SetPlatformApplicationAttributes</a>
     * </p>
     */
    inline CreatePlatformApplicationRequest& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>For a list of attributes, see <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_SetPlatformApplicationAttributes.html">SetPlatformApplicationAttributes</a>
     * </p>
     */
    inline CreatePlatformApplicationRequest& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /**
     * <p>For a list of attributes, see <a
     * href="http://docs.aws.amazon.com/sns/latest/api/API_SetPlatformApplicationAttributes.html">SetPlatformApplicationAttributes</a>
     * </p>
     */
    inline CreatePlatformApplicationRequest& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_platform;
    bool m_platformHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
