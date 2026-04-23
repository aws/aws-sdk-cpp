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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * Email Channel Request<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EmailChannelRequest">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API EmailChannelRequest
  {
  public:
    EmailChannelRequest();
    EmailChannelRequest(Aws::Utils::Json::JsonView jsonValue);
    EmailChannelRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The configuration set that you want to use when you send email using the
     * Pinpoint Email API.
     */
    inline const Aws::String& GetConfigurationSet() const{ return m_configurationSet; }

    /**
     * The configuration set that you want to use when you send email using the
     * Pinpoint Email API.
     */
    inline bool ConfigurationSetHasBeenSet() const { return m_configurationSetHasBeenSet; }

    /**
     * The configuration set that you want to use when you send email using the
     * Pinpoint Email API.
     */
    inline void SetConfigurationSet(const Aws::String& value) { m_configurationSetHasBeenSet = true; m_configurationSet = value; }

    /**
     * The configuration set that you want to use when you send email using the
     * Pinpoint Email API.
     */
    inline void SetConfigurationSet(Aws::String&& value) { m_configurationSetHasBeenSet = true; m_configurationSet = std::move(value); }

    /**
     * The configuration set that you want to use when you send email using the
     * Pinpoint Email API.
     */
    inline void SetConfigurationSet(const char* value) { m_configurationSetHasBeenSet = true; m_configurationSet.assign(value); }

    /**
     * The configuration set that you want to use when you send email using the
     * Pinpoint Email API.
     */
    inline EmailChannelRequest& WithConfigurationSet(const Aws::String& value) { SetConfigurationSet(value); return *this;}

    /**
     * The configuration set that you want to use when you send email using the
     * Pinpoint Email API.
     */
    inline EmailChannelRequest& WithConfigurationSet(Aws::String&& value) { SetConfigurationSet(std::move(value)); return *this;}

    /**
     * The configuration set that you want to use when you send email using the
     * Pinpoint Email API.
     */
    inline EmailChannelRequest& WithConfigurationSet(const char* value) { SetConfigurationSet(value); return *this;}


    /**
     * If the channel is enabled for sending messages.
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * If the channel is enabled for sending messages.
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * If the channel is enabled for sending messages.
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * If the channel is enabled for sending messages.
     */
    inline EmailChannelRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * The email address used to send emails from.
     */
    inline const Aws::String& GetFromAddress() const{ return m_fromAddress; }

    /**
     * The email address used to send emails from.
     */
    inline bool FromAddressHasBeenSet() const { return m_fromAddressHasBeenSet; }

    /**
     * The email address used to send emails from.
     */
    inline void SetFromAddress(const Aws::String& value) { m_fromAddressHasBeenSet = true; m_fromAddress = value; }

    /**
     * The email address used to send emails from.
     */
    inline void SetFromAddress(Aws::String&& value) { m_fromAddressHasBeenSet = true; m_fromAddress = std::move(value); }

    /**
     * The email address used to send emails from.
     */
    inline void SetFromAddress(const char* value) { m_fromAddressHasBeenSet = true; m_fromAddress.assign(value); }

    /**
     * The email address used to send emails from.
     */
    inline EmailChannelRequest& WithFromAddress(const Aws::String& value) { SetFromAddress(value); return *this;}

    /**
     * The email address used to send emails from.
     */
    inline EmailChannelRequest& WithFromAddress(Aws::String&& value) { SetFromAddress(std::move(value)); return *this;}

    /**
     * The email address used to send emails from.
     */
    inline EmailChannelRequest& WithFromAddress(const char* value) { SetFromAddress(value); return *this;}


    /**
     * The ARN of an identity verified with SES.
     */
    inline const Aws::String& GetIdentity() const{ return m_identity; }

    /**
     * The ARN of an identity verified with SES.
     */
    inline bool IdentityHasBeenSet() const { return m_identityHasBeenSet; }

    /**
     * The ARN of an identity verified with SES.
     */
    inline void SetIdentity(const Aws::String& value) { m_identityHasBeenSet = true; m_identity = value; }

    /**
     * The ARN of an identity verified with SES.
     */
    inline void SetIdentity(Aws::String&& value) { m_identityHasBeenSet = true; m_identity = std::move(value); }

    /**
     * The ARN of an identity verified with SES.
     */
    inline void SetIdentity(const char* value) { m_identityHasBeenSet = true; m_identity.assign(value); }

    /**
     * The ARN of an identity verified with SES.
     */
    inline EmailChannelRequest& WithIdentity(const Aws::String& value) { SetIdentity(value); return *this;}

    /**
     * The ARN of an identity verified with SES.
     */
    inline EmailChannelRequest& WithIdentity(Aws::String&& value) { SetIdentity(std::move(value)); return *this;}

    /**
     * The ARN of an identity verified with SES.
     */
    inline EmailChannelRequest& WithIdentity(const char* value) { SetIdentity(value); return *this;}


    /**
     * The ARN of an IAM Role used to submit events to Mobile Analytics' event
     * ingestion service
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * The ARN of an IAM Role used to submit events to Mobile Analytics' event
     * ingestion service
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * The ARN of an IAM Role used to submit events to Mobile Analytics' event
     * ingestion service
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * The ARN of an IAM Role used to submit events to Mobile Analytics' event
     * ingestion service
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * The ARN of an IAM Role used to submit events to Mobile Analytics' event
     * ingestion service
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * The ARN of an IAM Role used to submit events to Mobile Analytics' event
     * ingestion service
     */
    inline EmailChannelRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * The ARN of an IAM Role used to submit events to Mobile Analytics' event
     * ingestion service
     */
    inline EmailChannelRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * The ARN of an IAM Role used to submit events to Mobile Analytics' event
     * ingestion service
     */
    inline EmailChannelRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_configurationSet;
    bool m_configurationSetHasBeenSet;

    bool m_enabled;
    bool m_enabledHasBeenSet;

    Aws::String m_fromAddress;
    bool m_fromAddressHasBeenSet;

    Aws::String m_identity;
    bool m_identityHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
