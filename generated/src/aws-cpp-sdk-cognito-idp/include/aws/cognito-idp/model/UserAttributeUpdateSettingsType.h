/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cognito-idp/model/VerifiedAttributeType.h>
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
   * <p>The settings for updates to user attributes. These settings include the
   * property <code>AttributesRequireVerificationBeforeUpdate</code>, a user-pool
   * setting that tells Amazon Cognito how to handle changes to the value of your
   * users' email address and phone number attributes. For more information, see <a
   * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-email-phone-verification.html#user-pool-settings-verifications-verify-attribute-updates">
   * Verifying updates to email addresses and phone numbers</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UserAttributeUpdateSettingsType">AWS
   * API Reference</a></p>
   */
  class UserAttributeUpdateSettingsType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API UserAttributeUpdateSettingsType();
    AWS_COGNITOIDENTITYPROVIDER_API UserAttributeUpdateSettingsType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API UserAttributeUpdateSettingsType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Requires that your user verifies their email address, phone number, or both
     * before Amazon Cognito updates the value of that attribute. When you update a
     * user attribute that has this option activated, Amazon Cognito sends a
     * verification message to the new phone number or email address. Amazon Cognito
     * doesn’t change the value of the attribute until your user responds to the
     * verification message and confirms the new value.</p> <p>You can verify an
     * updated email address or phone number with a <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_VerifyUserAttribute.html">VerifyUserAttribute</a>
     * API request. You can also call the <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminUpdateUserAttributes.html">AdminUpdateUserAttributes</a>
     * API and set <code>email_verified</code> or <code>phone_number_verified</code> to
     * true.</p> <p>When <code>AttributesRequireVerificationBeforeUpdate</code> is
     * false, your user pool doesn't require that your users verify attribute changes
     * before Amazon Cognito updates them. In a user pool where
     * <code>AttributesRequireVerificationBeforeUpdate</code> is false, API operations
     * that change attribute values can immediately update a user’s <code>email</code>
     * or <code>phone_number</code> attribute.</p>
     */
    inline const Aws::Vector<VerifiedAttributeType>& GetAttributesRequireVerificationBeforeUpdate() const{ return m_attributesRequireVerificationBeforeUpdate; }

    /**
     * <p>Requires that your user verifies their email address, phone number, or both
     * before Amazon Cognito updates the value of that attribute. When you update a
     * user attribute that has this option activated, Amazon Cognito sends a
     * verification message to the new phone number or email address. Amazon Cognito
     * doesn’t change the value of the attribute until your user responds to the
     * verification message and confirms the new value.</p> <p>You can verify an
     * updated email address or phone number with a <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_VerifyUserAttribute.html">VerifyUserAttribute</a>
     * API request. You can also call the <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminUpdateUserAttributes.html">AdminUpdateUserAttributes</a>
     * API and set <code>email_verified</code> or <code>phone_number_verified</code> to
     * true.</p> <p>When <code>AttributesRequireVerificationBeforeUpdate</code> is
     * false, your user pool doesn't require that your users verify attribute changes
     * before Amazon Cognito updates them. In a user pool where
     * <code>AttributesRequireVerificationBeforeUpdate</code> is false, API operations
     * that change attribute values can immediately update a user’s <code>email</code>
     * or <code>phone_number</code> attribute.</p>
     */
    inline bool AttributesRequireVerificationBeforeUpdateHasBeenSet() const { return m_attributesRequireVerificationBeforeUpdateHasBeenSet; }

    /**
     * <p>Requires that your user verifies their email address, phone number, or both
     * before Amazon Cognito updates the value of that attribute. When you update a
     * user attribute that has this option activated, Amazon Cognito sends a
     * verification message to the new phone number or email address. Amazon Cognito
     * doesn’t change the value of the attribute until your user responds to the
     * verification message and confirms the new value.</p> <p>You can verify an
     * updated email address or phone number with a <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_VerifyUserAttribute.html">VerifyUserAttribute</a>
     * API request. You can also call the <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminUpdateUserAttributes.html">AdminUpdateUserAttributes</a>
     * API and set <code>email_verified</code> or <code>phone_number_verified</code> to
     * true.</p> <p>When <code>AttributesRequireVerificationBeforeUpdate</code> is
     * false, your user pool doesn't require that your users verify attribute changes
     * before Amazon Cognito updates them. In a user pool where
     * <code>AttributesRequireVerificationBeforeUpdate</code> is false, API operations
     * that change attribute values can immediately update a user’s <code>email</code>
     * or <code>phone_number</code> attribute.</p>
     */
    inline void SetAttributesRequireVerificationBeforeUpdate(const Aws::Vector<VerifiedAttributeType>& value) { m_attributesRequireVerificationBeforeUpdateHasBeenSet = true; m_attributesRequireVerificationBeforeUpdate = value; }

    /**
     * <p>Requires that your user verifies their email address, phone number, or both
     * before Amazon Cognito updates the value of that attribute. When you update a
     * user attribute that has this option activated, Amazon Cognito sends a
     * verification message to the new phone number or email address. Amazon Cognito
     * doesn’t change the value of the attribute until your user responds to the
     * verification message and confirms the new value.</p> <p>You can verify an
     * updated email address or phone number with a <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_VerifyUserAttribute.html">VerifyUserAttribute</a>
     * API request. You can also call the <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminUpdateUserAttributes.html">AdminUpdateUserAttributes</a>
     * API and set <code>email_verified</code> or <code>phone_number_verified</code> to
     * true.</p> <p>When <code>AttributesRequireVerificationBeforeUpdate</code> is
     * false, your user pool doesn't require that your users verify attribute changes
     * before Amazon Cognito updates them. In a user pool where
     * <code>AttributesRequireVerificationBeforeUpdate</code> is false, API operations
     * that change attribute values can immediately update a user’s <code>email</code>
     * or <code>phone_number</code> attribute.</p>
     */
    inline void SetAttributesRequireVerificationBeforeUpdate(Aws::Vector<VerifiedAttributeType>&& value) { m_attributesRequireVerificationBeforeUpdateHasBeenSet = true; m_attributesRequireVerificationBeforeUpdate = std::move(value); }

    /**
     * <p>Requires that your user verifies their email address, phone number, or both
     * before Amazon Cognito updates the value of that attribute. When you update a
     * user attribute that has this option activated, Amazon Cognito sends a
     * verification message to the new phone number or email address. Amazon Cognito
     * doesn’t change the value of the attribute until your user responds to the
     * verification message and confirms the new value.</p> <p>You can verify an
     * updated email address or phone number with a <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_VerifyUserAttribute.html">VerifyUserAttribute</a>
     * API request. You can also call the <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminUpdateUserAttributes.html">AdminUpdateUserAttributes</a>
     * API and set <code>email_verified</code> or <code>phone_number_verified</code> to
     * true.</p> <p>When <code>AttributesRequireVerificationBeforeUpdate</code> is
     * false, your user pool doesn't require that your users verify attribute changes
     * before Amazon Cognito updates them. In a user pool where
     * <code>AttributesRequireVerificationBeforeUpdate</code> is false, API operations
     * that change attribute values can immediately update a user’s <code>email</code>
     * or <code>phone_number</code> attribute.</p>
     */
    inline UserAttributeUpdateSettingsType& WithAttributesRequireVerificationBeforeUpdate(const Aws::Vector<VerifiedAttributeType>& value) { SetAttributesRequireVerificationBeforeUpdate(value); return *this;}

    /**
     * <p>Requires that your user verifies their email address, phone number, or both
     * before Amazon Cognito updates the value of that attribute. When you update a
     * user attribute that has this option activated, Amazon Cognito sends a
     * verification message to the new phone number or email address. Amazon Cognito
     * doesn’t change the value of the attribute until your user responds to the
     * verification message and confirms the new value.</p> <p>You can verify an
     * updated email address or phone number with a <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_VerifyUserAttribute.html">VerifyUserAttribute</a>
     * API request. You can also call the <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminUpdateUserAttributes.html">AdminUpdateUserAttributes</a>
     * API and set <code>email_verified</code> or <code>phone_number_verified</code> to
     * true.</p> <p>When <code>AttributesRequireVerificationBeforeUpdate</code> is
     * false, your user pool doesn't require that your users verify attribute changes
     * before Amazon Cognito updates them. In a user pool where
     * <code>AttributesRequireVerificationBeforeUpdate</code> is false, API operations
     * that change attribute values can immediately update a user’s <code>email</code>
     * or <code>phone_number</code> attribute.</p>
     */
    inline UserAttributeUpdateSettingsType& WithAttributesRequireVerificationBeforeUpdate(Aws::Vector<VerifiedAttributeType>&& value) { SetAttributesRequireVerificationBeforeUpdate(std::move(value)); return *this;}

    /**
     * <p>Requires that your user verifies their email address, phone number, or both
     * before Amazon Cognito updates the value of that attribute. When you update a
     * user attribute that has this option activated, Amazon Cognito sends a
     * verification message to the new phone number or email address. Amazon Cognito
     * doesn’t change the value of the attribute until your user responds to the
     * verification message and confirms the new value.</p> <p>You can verify an
     * updated email address or phone number with a <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_VerifyUserAttribute.html">VerifyUserAttribute</a>
     * API request. You can also call the <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminUpdateUserAttributes.html">AdminUpdateUserAttributes</a>
     * API and set <code>email_verified</code> or <code>phone_number_verified</code> to
     * true.</p> <p>When <code>AttributesRequireVerificationBeforeUpdate</code> is
     * false, your user pool doesn't require that your users verify attribute changes
     * before Amazon Cognito updates them. In a user pool where
     * <code>AttributesRequireVerificationBeforeUpdate</code> is false, API operations
     * that change attribute values can immediately update a user’s <code>email</code>
     * or <code>phone_number</code> attribute.</p>
     */
    inline UserAttributeUpdateSettingsType& AddAttributesRequireVerificationBeforeUpdate(const VerifiedAttributeType& value) { m_attributesRequireVerificationBeforeUpdateHasBeenSet = true; m_attributesRequireVerificationBeforeUpdate.push_back(value); return *this; }

    /**
     * <p>Requires that your user verifies their email address, phone number, or both
     * before Amazon Cognito updates the value of that attribute. When you update a
     * user attribute that has this option activated, Amazon Cognito sends a
     * verification message to the new phone number or email address. Amazon Cognito
     * doesn’t change the value of the attribute until your user responds to the
     * verification message and confirms the new value.</p> <p>You can verify an
     * updated email address or phone number with a <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_VerifyUserAttribute.html">VerifyUserAttribute</a>
     * API request. You can also call the <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminUpdateUserAttributes.html">AdminUpdateUserAttributes</a>
     * API and set <code>email_verified</code> or <code>phone_number_verified</code> to
     * true.</p> <p>When <code>AttributesRequireVerificationBeforeUpdate</code> is
     * false, your user pool doesn't require that your users verify attribute changes
     * before Amazon Cognito updates them. In a user pool where
     * <code>AttributesRequireVerificationBeforeUpdate</code> is false, API operations
     * that change attribute values can immediately update a user’s <code>email</code>
     * or <code>phone_number</code> attribute.</p>
     */
    inline UserAttributeUpdateSettingsType& AddAttributesRequireVerificationBeforeUpdate(VerifiedAttributeType&& value) { m_attributesRequireVerificationBeforeUpdateHasBeenSet = true; m_attributesRequireVerificationBeforeUpdate.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<VerifiedAttributeType> m_attributesRequireVerificationBeforeUpdate;
    bool m_attributesRequireVerificationBeforeUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
