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
   * <p>The SMS configuration type is the settings that your Amazon Cognito user pool
   * must use to send an SMS message from your Amazon Web Services account through
   * Amazon Simple Notification Service. To send SMS messages with Amazon SNS in the
   * Amazon Web Services Region that you want, the Amazon Cognito user pool uses an
   * Identity and Access Management (IAM) role in your Amazon Web Services
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SmsConfigurationType">AWS
   * API Reference</a></p>
   */
  class SmsConfigurationType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API SmsConfigurationType();
    AWS_COGNITOIDENTITYPROVIDER_API SmsConfigurationType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API SmsConfigurationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS caller. This is the ARN of
     * the IAM role in your Amazon Web Services account that Amazon Cognito will use to
     * send SMS messages. SMS messages are subject to a <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-email-phone-verification.html">spending
     * limit</a>. </p>
     */
    inline const Aws::String& GetSnsCallerArn() const{ return m_snsCallerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS caller. This is the ARN of
     * the IAM role in your Amazon Web Services account that Amazon Cognito will use to
     * send SMS messages. SMS messages are subject to a <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-email-phone-verification.html">spending
     * limit</a>. </p>
     */
    inline bool SnsCallerArnHasBeenSet() const { return m_snsCallerArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS caller. This is the ARN of
     * the IAM role in your Amazon Web Services account that Amazon Cognito will use to
     * send SMS messages. SMS messages are subject to a <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-email-phone-verification.html">spending
     * limit</a>. </p>
     */
    inline void SetSnsCallerArn(const Aws::String& value) { m_snsCallerArnHasBeenSet = true; m_snsCallerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS caller. This is the ARN of
     * the IAM role in your Amazon Web Services account that Amazon Cognito will use to
     * send SMS messages. SMS messages are subject to a <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-email-phone-verification.html">spending
     * limit</a>. </p>
     */
    inline void SetSnsCallerArn(Aws::String&& value) { m_snsCallerArnHasBeenSet = true; m_snsCallerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS caller. This is the ARN of
     * the IAM role in your Amazon Web Services account that Amazon Cognito will use to
     * send SMS messages. SMS messages are subject to a <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-email-phone-verification.html">spending
     * limit</a>. </p>
     */
    inline void SetSnsCallerArn(const char* value) { m_snsCallerArnHasBeenSet = true; m_snsCallerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS caller. This is the ARN of
     * the IAM role in your Amazon Web Services account that Amazon Cognito will use to
     * send SMS messages. SMS messages are subject to a <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-email-phone-verification.html">spending
     * limit</a>. </p>
     */
    inline SmsConfigurationType& WithSnsCallerArn(const Aws::String& value) { SetSnsCallerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS caller. This is the ARN of
     * the IAM role in your Amazon Web Services account that Amazon Cognito will use to
     * send SMS messages. SMS messages are subject to a <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-email-phone-verification.html">spending
     * limit</a>. </p>
     */
    inline SmsConfigurationType& WithSnsCallerArn(Aws::String&& value) { SetSnsCallerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS caller. This is the ARN of
     * the IAM role in your Amazon Web Services account that Amazon Cognito will use to
     * send SMS messages. SMS messages are subject to a <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-email-phone-verification.html">spending
     * limit</a>. </p>
     */
    inline SmsConfigurationType& WithSnsCallerArn(const char* value) { SetSnsCallerArn(value); return *this;}


    /**
     * <p>The external ID provides additional security for your IAM role. You can use
     * an <code>ExternalId</code> with the IAM role that you use with Amazon SNS to
     * send SMS messages for your user pool. If you provide an <code>ExternalId</code>,
     * your Amazon Cognito user pool includes it in the request to assume your IAM
     * role. You can configure the role trust policy to require that Amazon Cognito,
     * and any principal, provide the <code>ExternalID</code>. If you use the Amazon
     * Cognito Management Console to create a role for SMS multi-factor authentication
     * (MFA), Amazon Cognito creates a role with the required permissions and a trust
     * policy that demonstrates use of the <code>ExternalId</code>.</p> <p>For more
     * information about the <code>ExternalId</code> of a role, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_create_for-user_externalid.html">How
     * to use an external ID when granting access to your Amazon Web Services resources
     * to a third party</a> </p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }

    /**
     * <p>The external ID provides additional security for your IAM role. You can use
     * an <code>ExternalId</code> with the IAM role that you use with Amazon SNS to
     * send SMS messages for your user pool. If you provide an <code>ExternalId</code>,
     * your Amazon Cognito user pool includes it in the request to assume your IAM
     * role. You can configure the role trust policy to require that Amazon Cognito,
     * and any principal, provide the <code>ExternalID</code>. If you use the Amazon
     * Cognito Management Console to create a role for SMS multi-factor authentication
     * (MFA), Amazon Cognito creates a role with the required permissions and a trust
     * policy that demonstrates use of the <code>ExternalId</code>.</p> <p>For more
     * information about the <code>ExternalId</code> of a role, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_create_for-user_externalid.html">How
     * to use an external ID when granting access to your Amazon Web Services resources
     * to a third party</a> </p>
     */
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }

    /**
     * <p>The external ID provides additional security for your IAM role. You can use
     * an <code>ExternalId</code> with the IAM role that you use with Amazon SNS to
     * send SMS messages for your user pool. If you provide an <code>ExternalId</code>,
     * your Amazon Cognito user pool includes it in the request to assume your IAM
     * role. You can configure the role trust policy to require that Amazon Cognito,
     * and any principal, provide the <code>ExternalID</code>. If you use the Amazon
     * Cognito Management Console to create a role for SMS multi-factor authentication
     * (MFA), Amazon Cognito creates a role with the required permissions and a trust
     * policy that demonstrates use of the <code>ExternalId</code>.</p> <p>For more
     * information about the <code>ExternalId</code> of a role, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_create_for-user_externalid.html">How
     * to use an external ID when granting access to your Amazon Web Services resources
     * to a third party</a> </p>
     */
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }

    /**
     * <p>The external ID provides additional security for your IAM role. You can use
     * an <code>ExternalId</code> with the IAM role that you use with Amazon SNS to
     * send SMS messages for your user pool. If you provide an <code>ExternalId</code>,
     * your Amazon Cognito user pool includes it in the request to assume your IAM
     * role. You can configure the role trust policy to require that Amazon Cognito,
     * and any principal, provide the <code>ExternalID</code>. If you use the Amazon
     * Cognito Management Console to create a role for SMS multi-factor authentication
     * (MFA), Amazon Cognito creates a role with the required permissions and a trust
     * policy that demonstrates use of the <code>ExternalId</code>.</p> <p>For more
     * information about the <code>ExternalId</code> of a role, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_create_for-user_externalid.html">How
     * to use an external ID when granting access to your Amazon Web Services resources
     * to a third party</a> </p>
     */
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }

    /**
     * <p>The external ID provides additional security for your IAM role. You can use
     * an <code>ExternalId</code> with the IAM role that you use with Amazon SNS to
     * send SMS messages for your user pool. If you provide an <code>ExternalId</code>,
     * your Amazon Cognito user pool includes it in the request to assume your IAM
     * role. You can configure the role trust policy to require that Amazon Cognito,
     * and any principal, provide the <code>ExternalID</code>. If you use the Amazon
     * Cognito Management Console to create a role for SMS multi-factor authentication
     * (MFA), Amazon Cognito creates a role with the required permissions and a trust
     * policy that demonstrates use of the <code>ExternalId</code>.</p> <p>For more
     * information about the <code>ExternalId</code> of a role, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_create_for-user_externalid.html">How
     * to use an external ID when granting access to your Amazon Web Services resources
     * to a third party</a> </p>
     */
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }

    /**
     * <p>The external ID provides additional security for your IAM role. You can use
     * an <code>ExternalId</code> with the IAM role that you use with Amazon SNS to
     * send SMS messages for your user pool. If you provide an <code>ExternalId</code>,
     * your Amazon Cognito user pool includes it in the request to assume your IAM
     * role. You can configure the role trust policy to require that Amazon Cognito,
     * and any principal, provide the <code>ExternalID</code>. If you use the Amazon
     * Cognito Management Console to create a role for SMS multi-factor authentication
     * (MFA), Amazon Cognito creates a role with the required permissions and a trust
     * policy that demonstrates use of the <code>ExternalId</code>.</p> <p>For more
     * information about the <code>ExternalId</code> of a role, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_create_for-user_externalid.html">How
     * to use an external ID when granting access to your Amazon Web Services resources
     * to a third party</a> </p>
     */
    inline SmsConfigurationType& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}

    /**
     * <p>The external ID provides additional security for your IAM role. You can use
     * an <code>ExternalId</code> with the IAM role that you use with Amazon SNS to
     * send SMS messages for your user pool. If you provide an <code>ExternalId</code>,
     * your Amazon Cognito user pool includes it in the request to assume your IAM
     * role. You can configure the role trust policy to require that Amazon Cognito,
     * and any principal, provide the <code>ExternalID</code>. If you use the Amazon
     * Cognito Management Console to create a role for SMS multi-factor authentication
     * (MFA), Amazon Cognito creates a role with the required permissions and a trust
     * policy that demonstrates use of the <code>ExternalId</code>.</p> <p>For more
     * information about the <code>ExternalId</code> of a role, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_create_for-user_externalid.html">How
     * to use an external ID when granting access to your Amazon Web Services resources
     * to a third party</a> </p>
     */
    inline SmsConfigurationType& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}

    /**
     * <p>The external ID provides additional security for your IAM role. You can use
     * an <code>ExternalId</code> with the IAM role that you use with Amazon SNS to
     * send SMS messages for your user pool. If you provide an <code>ExternalId</code>,
     * your Amazon Cognito user pool includes it in the request to assume your IAM
     * role. You can configure the role trust policy to require that Amazon Cognito,
     * and any principal, provide the <code>ExternalID</code>. If you use the Amazon
     * Cognito Management Console to create a role for SMS multi-factor authentication
     * (MFA), Amazon Cognito creates a role with the required permissions and a trust
     * policy that demonstrates use of the <code>ExternalId</code>.</p> <p>For more
     * information about the <code>ExternalId</code> of a role, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_create_for-user_externalid.html">How
     * to use an external ID when granting access to your Amazon Web Services resources
     * to a third party</a> </p>
     */
    inline SmsConfigurationType& WithExternalId(const char* value) { SetExternalId(value); return *this;}


    /**
     * <p>The Amazon Web Services Region to use with Amazon SNS integration. You can
     * choose the same Region as your user pool, or a supported <b>Legacy Amazon SNS
     * alternate Region</b>. </p> <p> Amazon Cognito resources in the Asia Pacific
     * (Seoul) Amazon Web Services Region must use your Amazon SNS configuration in the
     * Asia Pacific (Tokyo) Region. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-sms-settings.html">SMS
     * message settings for Amazon Cognito user pools</a>.</p>
     */
    inline const Aws::String& GetSnsRegion() const{ return m_snsRegion; }

    /**
     * <p>The Amazon Web Services Region to use with Amazon SNS integration. You can
     * choose the same Region as your user pool, or a supported <b>Legacy Amazon SNS
     * alternate Region</b>. </p> <p> Amazon Cognito resources in the Asia Pacific
     * (Seoul) Amazon Web Services Region must use your Amazon SNS configuration in the
     * Asia Pacific (Tokyo) Region. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-sms-settings.html">SMS
     * message settings for Amazon Cognito user pools</a>.</p>
     */
    inline bool SnsRegionHasBeenSet() const { return m_snsRegionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region to use with Amazon SNS integration. You can
     * choose the same Region as your user pool, or a supported <b>Legacy Amazon SNS
     * alternate Region</b>. </p> <p> Amazon Cognito resources in the Asia Pacific
     * (Seoul) Amazon Web Services Region must use your Amazon SNS configuration in the
     * Asia Pacific (Tokyo) Region. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-sms-settings.html">SMS
     * message settings for Amazon Cognito user pools</a>.</p>
     */
    inline void SetSnsRegion(const Aws::String& value) { m_snsRegionHasBeenSet = true; m_snsRegion = value; }

    /**
     * <p>The Amazon Web Services Region to use with Amazon SNS integration. You can
     * choose the same Region as your user pool, or a supported <b>Legacy Amazon SNS
     * alternate Region</b>. </p> <p> Amazon Cognito resources in the Asia Pacific
     * (Seoul) Amazon Web Services Region must use your Amazon SNS configuration in the
     * Asia Pacific (Tokyo) Region. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-sms-settings.html">SMS
     * message settings for Amazon Cognito user pools</a>.</p>
     */
    inline void SetSnsRegion(Aws::String&& value) { m_snsRegionHasBeenSet = true; m_snsRegion = std::move(value); }

    /**
     * <p>The Amazon Web Services Region to use with Amazon SNS integration. You can
     * choose the same Region as your user pool, or a supported <b>Legacy Amazon SNS
     * alternate Region</b>. </p> <p> Amazon Cognito resources in the Asia Pacific
     * (Seoul) Amazon Web Services Region must use your Amazon SNS configuration in the
     * Asia Pacific (Tokyo) Region. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-sms-settings.html">SMS
     * message settings for Amazon Cognito user pools</a>.</p>
     */
    inline void SetSnsRegion(const char* value) { m_snsRegionHasBeenSet = true; m_snsRegion.assign(value); }

    /**
     * <p>The Amazon Web Services Region to use with Amazon SNS integration. You can
     * choose the same Region as your user pool, or a supported <b>Legacy Amazon SNS
     * alternate Region</b>. </p> <p> Amazon Cognito resources in the Asia Pacific
     * (Seoul) Amazon Web Services Region must use your Amazon SNS configuration in the
     * Asia Pacific (Tokyo) Region. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-sms-settings.html">SMS
     * message settings for Amazon Cognito user pools</a>.</p>
     */
    inline SmsConfigurationType& WithSnsRegion(const Aws::String& value) { SetSnsRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region to use with Amazon SNS integration. You can
     * choose the same Region as your user pool, or a supported <b>Legacy Amazon SNS
     * alternate Region</b>. </p> <p> Amazon Cognito resources in the Asia Pacific
     * (Seoul) Amazon Web Services Region must use your Amazon SNS configuration in the
     * Asia Pacific (Tokyo) Region. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-sms-settings.html">SMS
     * message settings for Amazon Cognito user pools</a>.</p>
     */
    inline SmsConfigurationType& WithSnsRegion(Aws::String&& value) { SetSnsRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region to use with Amazon SNS integration. You can
     * choose the same Region as your user pool, or a supported <b>Legacy Amazon SNS
     * alternate Region</b>. </p> <p> Amazon Cognito resources in the Asia Pacific
     * (Seoul) Amazon Web Services Region must use your Amazon SNS configuration in the
     * Asia Pacific (Tokyo) Region. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-sms-settings.html">SMS
     * message settings for Amazon Cognito user pools</a>.</p>
     */
    inline SmsConfigurationType& WithSnsRegion(const char* value) { SetSnsRegion(value); return *this;}

  private:

    Aws::String m_snsCallerArn;
    bool m_snsCallerArnHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;

    Aws::String m_snsRegion;
    bool m_snsRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
