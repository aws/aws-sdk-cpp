/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>The SMS configuration type that includes the settings the Cognito User Pool
   * needs to call for the Amazon SNS service to send an SMS message from your AWS
   * account. The Cognito User Pool makes the request to the Amazon SNS Service by
   * using an AWS IAM role that you provide for your AWS account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SmsConfigurationType">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API SmsConfigurationType
  {
  public:
    SmsConfigurationType();
    SmsConfigurationType(Aws::Utils::Json::JsonView jsonValue);
    SmsConfigurationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) caller. This is the ARN of the IAM role in your AWS account which Cognito
     * will use to send SMS messages. SMS messages are subject to a <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-email-phone-verification.html">spending
     * limit</a>. </p>
     */
    inline const Aws::String& GetSnsCallerArn() const{ return m_snsCallerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) caller. This is the ARN of the IAM role in your AWS account which Cognito
     * will use to send SMS messages. SMS messages are subject to a <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-email-phone-verification.html">spending
     * limit</a>. </p>
     */
    inline bool SnsCallerArnHasBeenSet() const { return m_snsCallerArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) caller. This is the ARN of the IAM role in your AWS account which Cognito
     * will use to send SMS messages. SMS messages are subject to a <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-email-phone-verification.html">spending
     * limit</a>. </p>
     */
    inline void SetSnsCallerArn(const Aws::String& value) { m_snsCallerArnHasBeenSet = true; m_snsCallerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) caller. This is the ARN of the IAM role in your AWS account which Cognito
     * will use to send SMS messages. SMS messages are subject to a <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-email-phone-verification.html">spending
     * limit</a>. </p>
     */
    inline void SetSnsCallerArn(Aws::String&& value) { m_snsCallerArnHasBeenSet = true; m_snsCallerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) caller. This is the ARN of the IAM role in your AWS account which Cognito
     * will use to send SMS messages. SMS messages are subject to a <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-email-phone-verification.html">spending
     * limit</a>. </p>
     */
    inline void SetSnsCallerArn(const char* value) { m_snsCallerArnHasBeenSet = true; m_snsCallerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) caller. This is the ARN of the IAM role in your AWS account which Cognito
     * will use to send SMS messages. SMS messages are subject to a <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-email-phone-verification.html">spending
     * limit</a>. </p>
     */
    inline SmsConfigurationType& WithSnsCallerArn(const Aws::String& value) { SetSnsCallerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) caller. This is the ARN of the IAM role in your AWS account which Cognito
     * will use to send SMS messages. SMS messages are subject to a <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-email-phone-verification.html">spending
     * limit</a>. </p>
     */
    inline SmsConfigurationType& WithSnsCallerArn(Aws::String&& value) { SetSnsCallerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Simple Notification Service
     * (SNS) caller. This is the ARN of the IAM role in your AWS account which Cognito
     * will use to send SMS messages. SMS messages are subject to a <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-email-phone-verification.html">spending
     * limit</a>. </p>
     */
    inline SmsConfigurationType& WithSnsCallerArn(const char* value) { SetSnsCallerArn(value); return *this;}


    /**
     * <p>The external ID is a value that we recommend you use to add security to your
     * IAM role which is used to call Amazon SNS to send SMS messages for your user
     * pool. If you provide an <code>ExternalId</code>, the Cognito User Pool will
     * include it when attempting to assume your IAM role, so that you can set your
     * roles trust policy to require the <code>ExternalID</code>. If you use the
     * Cognito Management Console to create a role for SMS MFA, Cognito will create a
     * role with the required permissions and a trust policy that demonstrates use of
     * the <code>ExternalId</code>.</p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }

    /**
     * <p>The external ID is a value that we recommend you use to add security to your
     * IAM role which is used to call Amazon SNS to send SMS messages for your user
     * pool. If you provide an <code>ExternalId</code>, the Cognito User Pool will
     * include it when attempting to assume your IAM role, so that you can set your
     * roles trust policy to require the <code>ExternalID</code>. If you use the
     * Cognito Management Console to create a role for SMS MFA, Cognito will create a
     * role with the required permissions and a trust policy that demonstrates use of
     * the <code>ExternalId</code>.</p>
     */
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }

    /**
     * <p>The external ID is a value that we recommend you use to add security to your
     * IAM role which is used to call Amazon SNS to send SMS messages for your user
     * pool. If you provide an <code>ExternalId</code>, the Cognito User Pool will
     * include it when attempting to assume your IAM role, so that you can set your
     * roles trust policy to require the <code>ExternalID</code>. If you use the
     * Cognito Management Console to create a role for SMS MFA, Cognito will create a
     * role with the required permissions and a trust policy that demonstrates use of
     * the <code>ExternalId</code>.</p>
     */
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }

    /**
     * <p>The external ID is a value that we recommend you use to add security to your
     * IAM role which is used to call Amazon SNS to send SMS messages for your user
     * pool. If you provide an <code>ExternalId</code>, the Cognito User Pool will
     * include it when attempting to assume your IAM role, so that you can set your
     * roles trust policy to require the <code>ExternalID</code>. If you use the
     * Cognito Management Console to create a role for SMS MFA, Cognito will create a
     * role with the required permissions and a trust policy that demonstrates use of
     * the <code>ExternalId</code>.</p>
     */
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }

    /**
     * <p>The external ID is a value that we recommend you use to add security to your
     * IAM role which is used to call Amazon SNS to send SMS messages for your user
     * pool. If you provide an <code>ExternalId</code>, the Cognito User Pool will
     * include it when attempting to assume your IAM role, so that you can set your
     * roles trust policy to require the <code>ExternalID</code>. If you use the
     * Cognito Management Console to create a role for SMS MFA, Cognito will create a
     * role with the required permissions and a trust policy that demonstrates use of
     * the <code>ExternalId</code>.</p>
     */
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }

    /**
     * <p>The external ID is a value that we recommend you use to add security to your
     * IAM role which is used to call Amazon SNS to send SMS messages for your user
     * pool. If you provide an <code>ExternalId</code>, the Cognito User Pool will
     * include it when attempting to assume your IAM role, so that you can set your
     * roles trust policy to require the <code>ExternalID</code>. If you use the
     * Cognito Management Console to create a role for SMS MFA, Cognito will create a
     * role with the required permissions and a trust policy that demonstrates use of
     * the <code>ExternalId</code>.</p>
     */
    inline SmsConfigurationType& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}

    /**
     * <p>The external ID is a value that we recommend you use to add security to your
     * IAM role which is used to call Amazon SNS to send SMS messages for your user
     * pool. If you provide an <code>ExternalId</code>, the Cognito User Pool will
     * include it when attempting to assume your IAM role, so that you can set your
     * roles trust policy to require the <code>ExternalID</code>. If you use the
     * Cognito Management Console to create a role for SMS MFA, Cognito will create a
     * role with the required permissions and a trust policy that demonstrates use of
     * the <code>ExternalId</code>.</p>
     */
    inline SmsConfigurationType& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}

    /**
     * <p>The external ID is a value that we recommend you use to add security to your
     * IAM role which is used to call Amazon SNS to send SMS messages for your user
     * pool. If you provide an <code>ExternalId</code>, the Cognito User Pool will
     * include it when attempting to assume your IAM role, so that you can set your
     * roles trust policy to require the <code>ExternalID</code>. If you use the
     * Cognito Management Console to create a role for SMS MFA, Cognito will create a
     * role with the required permissions and a trust policy that demonstrates use of
     * the <code>ExternalId</code>.</p>
     */
    inline SmsConfigurationType& WithExternalId(const char* value) { SetExternalId(value); return *this;}

  private:

    Aws::String m_snsCallerArn;
    bool m_snsCallerArnHasBeenSet;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
