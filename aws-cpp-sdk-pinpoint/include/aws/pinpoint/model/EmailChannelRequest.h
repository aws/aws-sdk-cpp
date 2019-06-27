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
   * <p>Specifies the status and settings of the email channel for an
   * application.</p><p><h3>See Also:</h3>   <a
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
     * <p>The configuration set that you want to apply to email that you send through
     * the channel by using the <a href="emailAPIreference.html">Amazon Pinpoint Email
     * API</a>.</p>
     */
    inline const Aws::String& GetConfigurationSet() const{ return m_configurationSet; }

    /**
     * <p>The configuration set that you want to apply to email that you send through
     * the channel by using the <a href="emailAPIreference.html">Amazon Pinpoint Email
     * API</a>.</p>
     */
    inline bool ConfigurationSetHasBeenSet() const { return m_configurationSetHasBeenSet; }

    /**
     * <p>The configuration set that you want to apply to email that you send through
     * the channel by using the <a href="emailAPIreference.html">Amazon Pinpoint Email
     * API</a>.</p>
     */
    inline void SetConfigurationSet(const Aws::String& value) { m_configurationSetHasBeenSet = true; m_configurationSet = value; }

    /**
     * <p>The configuration set that you want to apply to email that you send through
     * the channel by using the <a href="emailAPIreference.html">Amazon Pinpoint Email
     * API</a>.</p>
     */
    inline void SetConfigurationSet(Aws::String&& value) { m_configurationSetHasBeenSet = true; m_configurationSet = std::move(value); }

    /**
     * <p>The configuration set that you want to apply to email that you send through
     * the channel by using the <a href="emailAPIreference.html">Amazon Pinpoint Email
     * API</a>.</p>
     */
    inline void SetConfigurationSet(const char* value) { m_configurationSetHasBeenSet = true; m_configurationSet.assign(value); }

    /**
     * <p>The configuration set that you want to apply to email that you send through
     * the channel by using the <a href="emailAPIreference.html">Amazon Pinpoint Email
     * API</a>.</p>
     */
    inline EmailChannelRequest& WithConfigurationSet(const Aws::String& value) { SetConfigurationSet(value); return *this;}

    /**
     * <p>The configuration set that you want to apply to email that you send through
     * the channel by using the <a href="emailAPIreference.html">Amazon Pinpoint Email
     * API</a>.</p>
     */
    inline EmailChannelRequest& WithConfigurationSet(Aws::String&& value) { SetConfigurationSet(std::move(value)); return *this;}

    /**
     * <p>The configuration set that you want to apply to email that you send through
     * the channel by using the <a href="emailAPIreference.html">Amazon Pinpoint Email
     * API</a>.</p>
     */
    inline EmailChannelRequest& WithConfigurationSet(const char* value) { SetConfigurationSet(value); return *this;}


    /**
     * <p>Specifies whether to enable the email channel for the application.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Specifies whether to enable the email channel for the application.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Specifies whether to enable the email channel for the application.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Specifies whether to enable the email channel for the application.</p>
     */
    inline EmailChannelRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The verified email address that you want to send email from when you send
     * email through the channel.</p>
     */
    inline const Aws::String& GetFromAddress() const{ return m_fromAddress; }

    /**
     * <p>The verified email address that you want to send email from when you send
     * email through the channel.</p>
     */
    inline bool FromAddressHasBeenSet() const { return m_fromAddressHasBeenSet; }

    /**
     * <p>The verified email address that you want to send email from when you send
     * email through the channel.</p>
     */
    inline void SetFromAddress(const Aws::String& value) { m_fromAddressHasBeenSet = true; m_fromAddress = value; }

    /**
     * <p>The verified email address that you want to send email from when you send
     * email through the channel.</p>
     */
    inline void SetFromAddress(Aws::String&& value) { m_fromAddressHasBeenSet = true; m_fromAddress = std::move(value); }

    /**
     * <p>The verified email address that you want to send email from when you send
     * email through the channel.</p>
     */
    inline void SetFromAddress(const char* value) { m_fromAddressHasBeenSet = true; m_fromAddress.assign(value); }

    /**
     * <p>The verified email address that you want to send email from when you send
     * email through the channel.</p>
     */
    inline EmailChannelRequest& WithFromAddress(const Aws::String& value) { SetFromAddress(value); return *this;}

    /**
     * <p>The verified email address that you want to send email from when you send
     * email through the channel.</p>
     */
    inline EmailChannelRequest& WithFromAddress(Aws::String&& value) { SetFromAddress(std::move(value)); return *this;}

    /**
     * <p>The verified email address that you want to send email from when you send
     * email through the channel.</p>
     */
    inline EmailChannelRequest& WithFromAddress(const char* value) { SetFromAddress(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the identity, verified with Amazon Simple
     * Email Service (Amazon SES), that you want to use when you send email through the
     * channel.</p>
     */
    inline const Aws::String& GetIdentity() const{ return m_identity; }

    /**
     * <p>The Amazon Resource Name (ARN) of the identity, verified with Amazon Simple
     * Email Service (Amazon SES), that you want to use when you send email through the
     * channel.</p>
     */
    inline bool IdentityHasBeenSet() const { return m_identityHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the identity, verified with Amazon Simple
     * Email Service (Amazon SES), that you want to use when you send email through the
     * channel.</p>
     */
    inline void SetIdentity(const Aws::String& value) { m_identityHasBeenSet = true; m_identity = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the identity, verified with Amazon Simple
     * Email Service (Amazon SES), that you want to use when you send email through the
     * channel.</p>
     */
    inline void SetIdentity(Aws::String&& value) { m_identityHasBeenSet = true; m_identity = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the identity, verified with Amazon Simple
     * Email Service (Amazon SES), that you want to use when you send email through the
     * channel.</p>
     */
    inline void SetIdentity(const char* value) { m_identityHasBeenSet = true; m_identity.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the identity, verified with Amazon Simple
     * Email Service (Amazon SES), that you want to use when you send email through the
     * channel.</p>
     */
    inline EmailChannelRequest& WithIdentity(const Aws::String& value) { SetIdentity(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the identity, verified with Amazon Simple
     * Email Service (Amazon SES), that you want to use when you send email through the
     * channel.</p>
     */
    inline EmailChannelRequest& WithIdentity(Aws::String&& value) { SetIdentity(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the identity, verified with Amazon Simple
     * Email Service (Amazon SES), that you want to use when you send email through the
     * channel.</p>
     */
    inline EmailChannelRequest& WithIdentity(const char* value) { SetIdentity(value); return *this;}


    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that you want
     * Amazon Pinpoint to use when it submits email-related event data for the
     * channel.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that you want
     * Amazon Pinpoint to use when it submits email-related event data for the
     * channel.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that you want
     * Amazon Pinpoint to use when it submits email-related event data for the
     * channel.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that you want
     * Amazon Pinpoint to use when it submits email-related event data for the
     * channel.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that you want
     * Amazon Pinpoint to use when it submits email-related event data for the
     * channel.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that you want
     * Amazon Pinpoint to use when it submits email-related event data for the
     * channel.</p>
     */
    inline EmailChannelRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that you want
     * Amazon Pinpoint to use when it submits email-related event data for the
     * channel.</p>
     */
    inline EmailChannelRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the AWS Identity and Access Management (IAM) role that you want
     * Amazon Pinpoint to use when it submits email-related event data for the
     * channel.</p>
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
