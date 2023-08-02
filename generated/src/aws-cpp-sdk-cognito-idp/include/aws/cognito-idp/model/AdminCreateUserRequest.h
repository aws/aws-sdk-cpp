/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cognito-idp/model/MessageActionType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/cognito-idp/model/AttributeType.h>
#include <aws/cognito-idp/model/DeliveryMediumType.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Represents the request to create a user in the specified user
   * pool.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminCreateUserRequest">AWS
   * API Reference</a></p>
   */
  class AdminCreateUserRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API AdminCreateUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AdminCreateUser"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The user pool ID for the user pool where the user will be created.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

    /**
     * <p>The user pool ID for the user pool where the user will be created.</p>
     */
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }

    /**
     * <p>The user pool ID for the user pool where the user will be created.</p>
     */
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The user pool ID for the user pool where the user will be created.</p>
     */
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }

    /**
     * <p>The user pool ID for the user pool where the user will be created.</p>
     */
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }

    /**
     * <p>The user pool ID for the user pool where the user will be created.</p>
     */
    inline AdminCreateUserRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID for the user pool where the user will be created.</p>
     */
    inline AdminCreateUserRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}

    /**
     * <p>The user pool ID for the user pool where the user will be created.</p>
     */
    inline AdminCreateUserRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}


    /**
     * <p>The username for the user. Must be unique within the user pool. Must be a
     * UTF-8 string between 1 and 128 characters. After the user is created, the
     * username can't be changed.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The username for the user. Must be unique within the user pool. Must be a
     * UTF-8 string between 1 and 128 characters. After the user is created, the
     * username can't be changed.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>The username for the user. Must be unique within the user pool. Must be a
     * UTF-8 string between 1 and 128 characters. After the user is created, the
     * username can't be changed.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The username for the user. Must be unique within the user pool. Must be a
     * UTF-8 string between 1 and 128 characters. After the user is created, the
     * username can't be changed.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>The username for the user. Must be unique within the user pool. Must be a
     * UTF-8 string between 1 and 128 characters. After the user is created, the
     * username can't be changed.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The username for the user. Must be unique within the user pool. Must be a
     * UTF-8 string between 1 and 128 characters. After the user is created, the
     * username can't be changed.</p>
     */
    inline AdminCreateUserRequest& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The username for the user. Must be unique within the user pool. Must be a
     * UTF-8 string between 1 and 128 characters. After the user is created, the
     * username can't be changed.</p>
     */
    inline AdminCreateUserRequest& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The username for the user. Must be unique within the user pool. Must be a
     * UTF-8 string between 1 and 128 characters. After the user is created, the
     * username can't be changed.</p>
     */
    inline AdminCreateUserRequest& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p>An array of name-value pairs that contain user attributes and attribute
     * values to be set for the user to be created. You can create a user without
     * specifying any attributes other than <code>Username</code>. However, any
     * attributes that you specify as required (when creating a user pool or in the
     * <b>Attributes</b> tab of the console) either you should supply (in your call to
     * <code>AdminCreateUser</code>) or the user should supply (when they sign up in
     * response to your welcome message).</p> <p>For custom attributes, you must
     * prepend the <code>custom:</code> prefix to the attribute name.</p> <p>To send a
     * message inviting the user to sign up, you must specify the user's email address
     * or phone number. You can do this in your call to AdminCreateUser or in the
     * <b>Users</b> tab of the Amazon Cognito console for managing your user pools.</p>
     * <p>In your call to <code>AdminCreateUser</code>, you can set the
     * <code>email_verified</code> attribute to <code>True</code>, and you can set the
     * <code>phone_number_verified</code> attribute to <code>True</code>. You can also
     * do this by calling <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminUpdateUserAttributes.html">AdminUpdateUserAttributes</a>.</p>
     * <ul> <li> <p> <b>email</b>: The email address of the user to whom the message
     * that contains the code and username will be sent. Required if the
     * <code>email_verified</code> attribute is set to <code>True</code>, or if
     * <code>"EMAIL"</code> is specified in the <code>DesiredDeliveryMediums</code>
     * parameter.</p> </li> <li> <p> <b>phone_number</b>: The phone number of the user
     * to whom the message that contains the code and username will be sent. Required
     * if the <code>phone_number_verified</code> attribute is set to <code>True</code>,
     * or if <code>"SMS"</code> is specified in the <code>DesiredDeliveryMediums</code>
     * parameter.</p> </li> </ul>
     */
    inline const Aws::Vector<AttributeType>& GetUserAttributes() const{ return m_userAttributes; }

    /**
     * <p>An array of name-value pairs that contain user attributes and attribute
     * values to be set for the user to be created. You can create a user without
     * specifying any attributes other than <code>Username</code>. However, any
     * attributes that you specify as required (when creating a user pool or in the
     * <b>Attributes</b> tab of the console) either you should supply (in your call to
     * <code>AdminCreateUser</code>) or the user should supply (when they sign up in
     * response to your welcome message).</p> <p>For custom attributes, you must
     * prepend the <code>custom:</code> prefix to the attribute name.</p> <p>To send a
     * message inviting the user to sign up, you must specify the user's email address
     * or phone number. You can do this in your call to AdminCreateUser or in the
     * <b>Users</b> tab of the Amazon Cognito console for managing your user pools.</p>
     * <p>In your call to <code>AdminCreateUser</code>, you can set the
     * <code>email_verified</code> attribute to <code>True</code>, and you can set the
     * <code>phone_number_verified</code> attribute to <code>True</code>. You can also
     * do this by calling <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminUpdateUserAttributes.html">AdminUpdateUserAttributes</a>.</p>
     * <ul> <li> <p> <b>email</b>: The email address of the user to whom the message
     * that contains the code and username will be sent. Required if the
     * <code>email_verified</code> attribute is set to <code>True</code>, or if
     * <code>"EMAIL"</code> is specified in the <code>DesiredDeliveryMediums</code>
     * parameter.</p> </li> <li> <p> <b>phone_number</b>: The phone number of the user
     * to whom the message that contains the code and username will be sent. Required
     * if the <code>phone_number_verified</code> attribute is set to <code>True</code>,
     * or if <code>"SMS"</code> is specified in the <code>DesiredDeliveryMediums</code>
     * parameter.</p> </li> </ul>
     */
    inline bool UserAttributesHasBeenSet() const { return m_userAttributesHasBeenSet; }

    /**
     * <p>An array of name-value pairs that contain user attributes and attribute
     * values to be set for the user to be created. You can create a user without
     * specifying any attributes other than <code>Username</code>. However, any
     * attributes that you specify as required (when creating a user pool or in the
     * <b>Attributes</b> tab of the console) either you should supply (in your call to
     * <code>AdminCreateUser</code>) or the user should supply (when they sign up in
     * response to your welcome message).</p> <p>For custom attributes, you must
     * prepend the <code>custom:</code> prefix to the attribute name.</p> <p>To send a
     * message inviting the user to sign up, you must specify the user's email address
     * or phone number. You can do this in your call to AdminCreateUser or in the
     * <b>Users</b> tab of the Amazon Cognito console for managing your user pools.</p>
     * <p>In your call to <code>AdminCreateUser</code>, you can set the
     * <code>email_verified</code> attribute to <code>True</code>, and you can set the
     * <code>phone_number_verified</code> attribute to <code>True</code>. You can also
     * do this by calling <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminUpdateUserAttributes.html">AdminUpdateUserAttributes</a>.</p>
     * <ul> <li> <p> <b>email</b>: The email address of the user to whom the message
     * that contains the code and username will be sent. Required if the
     * <code>email_verified</code> attribute is set to <code>True</code>, or if
     * <code>"EMAIL"</code> is specified in the <code>DesiredDeliveryMediums</code>
     * parameter.</p> </li> <li> <p> <b>phone_number</b>: The phone number of the user
     * to whom the message that contains the code and username will be sent. Required
     * if the <code>phone_number_verified</code> attribute is set to <code>True</code>,
     * or if <code>"SMS"</code> is specified in the <code>DesiredDeliveryMediums</code>
     * parameter.</p> </li> </ul>
     */
    inline void SetUserAttributes(const Aws::Vector<AttributeType>& value) { m_userAttributesHasBeenSet = true; m_userAttributes = value; }

    /**
     * <p>An array of name-value pairs that contain user attributes and attribute
     * values to be set for the user to be created. You can create a user without
     * specifying any attributes other than <code>Username</code>. However, any
     * attributes that you specify as required (when creating a user pool or in the
     * <b>Attributes</b> tab of the console) either you should supply (in your call to
     * <code>AdminCreateUser</code>) or the user should supply (when they sign up in
     * response to your welcome message).</p> <p>For custom attributes, you must
     * prepend the <code>custom:</code> prefix to the attribute name.</p> <p>To send a
     * message inviting the user to sign up, you must specify the user's email address
     * or phone number. You can do this in your call to AdminCreateUser or in the
     * <b>Users</b> tab of the Amazon Cognito console for managing your user pools.</p>
     * <p>In your call to <code>AdminCreateUser</code>, you can set the
     * <code>email_verified</code> attribute to <code>True</code>, and you can set the
     * <code>phone_number_verified</code> attribute to <code>True</code>. You can also
     * do this by calling <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminUpdateUserAttributes.html">AdminUpdateUserAttributes</a>.</p>
     * <ul> <li> <p> <b>email</b>: The email address of the user to whom the message
     * that contains the code and username will be sent. Required if the
     * <code>email_verified</code> attribute is set to <code>True</code>, or if
     * <code>"EMAIL"</code> is specified in the <code>DesiredDeliveryMediums</code>
     * parameter.</p> </li> <li> <p> <b>phone_number</b>: The phone number of the user
     * to whom the message that contains the code and username will be sent. Required
     * if the <code>phone_number_verified</code> attribute is set to <code>True</code>,
     * or if <code>"SMS"</code> is specified in the <code>DesiredDeliveryMediums</code>
     * parameter.</p> </li> </ul>
     */
    inline void SetUserAttributes(Aws::Vector<AttributeType>&& value) { m_userAttributesHasBeenSet = true; m_userAttributes = std::move(value); }

    /**
     * <p>An array of name-value pairs that contain user attributes and attribute
     * values to be set for the user to be created. You can create a user without
     * specifying any attributes other than <code>Username</code>. However, any
     * attributes that you specify as required (when creating a user pool or in the
     * <b>Attributes</b> tab of the console) either you should supply (in your call to
     * <code>AdminCreateUser</code>) or the user should supply (when they sign up in
     * response to your welcome message).</p> <p>For custom attributes, you must
     * prepend the <code>custom:</code> prefix to the attribute name.</p> <p>To send a
     * message inviting the user to sign up, you must specify the user's email address
     * or phone number. You can do this in your call to AdminCreateUser or in the
     * <b>Users</b> tab of the Amazon Cognito console for managing your user pools.</p>
     * <p>In your call to <code>AdminCreateUser</code>, you can set the
     * <code>email_verified</code> attribute to <code>True</code>, and you can set the
     * <code>phone_number_verified</code> attribute to <code>True</code>. You can also
     * do this by calling <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminUpdateUserAttributes.html">AdminUpdateUserAttributes</a>.</p>
     * <ul> <li> <p> <b>email</b>: The email address of the user to whom the message
     * that contains the code and username will be sent. Required if the
     * <code>email_verified</code> attribute is set to <code>True</code>, or if
     * <code>"EMAIL"</code> is specified in the <code>DesiredDeliveryMediums</code>
     * parameter.</p> </li> <li> <p> <b>phone_number</b>: The phone number of the user
     * to whom the message that contains the code and username will be sent. Required
     * if the <code>phone_number_verified</code> attribute is set to <code>True</code>,
     * or if <code>"SMS"</code> is specified in the <code>DesiredDeliveryMediums</code>
     * parameter.</p> </li> </ul>
     */
    inline AdminCreateUserRequest& WithUserAttributes(const Aws::Vector<AttributeType>& value) { SetUserAttributes(value); return *this;}

    /**
     * <p>An array of name-value pairs that contain user attributes and attribute
     * values to be set for the user to be created. You can create a user without
     * specifying any attributes other than <code>Username</code>. However, any
     * attributes that you specify as required (when creating a user pool or in the
     * <b>Attributes</b> tab of the console) either you should supply (in your call to
     * <code>AdminCreateUser</code>) or the user should supply (when they sign up in
     * response to your welcome message).</p> <p>For custom attributes, you must
     * prepend the <code>custom:</code> prefix to the attribute name.</p> <p>To send a
     * message inviting the user to sign up, you must specify the user's email address
     * or phone number. You can do this in your call to AdminCreateUser or in the
     * <b>Users</b> tab of the Amazon Cognito console for managing your user pools.</p>
     * <p>In your call to <code>AdminCreateUser</code>, you can set the
     * <code>email_verified</code> attribute to <code>True</code>, and you can set the
     * <code>phone_number_verified</code> attribute to <code>True</code>. You can also
     * do this by calling <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminUpdateUserAttributes.html">AdminUpdateUserAttributes</a>.</p>
     * <ul> <li> <p> <b>email</b>: The email address of the user to whom the message
     * that contains the code and username will be sent. Required if the
     * <code>email_verified</code> attribute is set to <code>True</code>, or if
     * <code>"EMAIL"</code> is specified in the <code>DesiredDeliveryMediums</code>
     * parameter.</p> </li> <li> <p> <b>phone_number</b>: The phone number of the user
     * to whom the message that contains the code and username will be sent. Required
     * if the <code>phone_number_verified</code> attribute is set to <code>True</code>,
     * or if <code>"SMS"</code> is specified in the <code>DesiredDeliveryMediums</code>
     * parameter.</p> </li> </ul>
     */
    inline AdminCreateUserRequest& WithUserAttributes(Aws::Vector<AttributeType>&& value) { SetUserAttributes(std::move(value)); return *this;}

    /**
     * <p>An array of name-value pairs that contain user attributes and attribute
     * values to be set for the user to be created. You can create a user without
     * specifying any attributes other than <code>Username</code>. However, any
     * attributes that you specify as required (when creating a user pool or in the
     * <b>Attributes</b> tab of the console) either you should supply (in your call to
     * <code>AdminCreateUser</code>) or the user should supply (when they sign up in
     * response to your welcome message).</p> <p>For custom attributes, you must
     * prepend the <code>custom:</code> prefix to the attribute name.</p> <p>To send a
     * message inviting the user to sign up, you must specify the user's email address
     * or phone number. You can do this in your call to AdminCreateUser or in the
     * <b>Users</b> tab of the Amazon Cognito console for managing your user pools.</p>
     * <p>In your call to <code>AdminCreateUser</code>, you can set the
     * <code>email_verified</code> attribute to <code>True</code>, and you can set the
     * <code>phone_number_verified</code> attribute to <code>True</code>. You can also
     * do this by calling <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminUpdateUserAttributes.html">AdminUpdateUserAttributes</a>.</p>
     * <ul> <li> <p> <b>email</b>: The email address of the user to whom the message
     * that contains the code and username will be sent. Required if the
     * <code>email_verified</code> attribute is set to <code>True</code>, or if
     * <code>"EMAIL"</code> is specified in the <code>DesiredDeliveryMediums</code>
     * parameter.</p> </li> <li> <p> <b>phone_number</b>: The phone number of the user
     * to whom the message that contains the code and username will be sent. Required
     * if the <code>phone_number_verified</code> attribute is set to <code>True</code>,
     * or if <code>"SMS"</code> is specified in the <code>DesiredDeliveryMediums</code>
     * parameter.</p> </li> </ul>
     */
    inline AdminCreateUserRequest& AddUserAttributes(const AttributeType& value) { m_userAttributesHasBeenSet = true; m_userAttributes.push_back(value); return *this; }

    /**
     * <p>An array of name-value pairs that contain user attributes and attribute
     * values to be set for the user to be created. You can create a user without
     * specifying any attributes other than <code>Username</code>. However, any
     * attributes that you specify as required (when creating a user pool or in the
     * <b>Attributes</b> tab of the console) either you should supply (in your call to
     * <code>AdminCreateUser</code>) or the user should supply (when they sign up in
     * response to your welcome message).</p> <p>For custom attributes, you must
     * prepend the <code>custom:</code> prefix to the attribute name.</p> <p>To send a
     * message inviting the user to sign up, you must specify the user's email address
     * or phone number. You can do this in your call to AdminCreateUser or in the
     * <b>Users</b> tab of the Amazon Cognito console for managing your user pools.</p>
     * <p>In your call to <code>AdminCreateUser</code>, you can set the
     * <code>email_verified</code> attribute to <code>True</code>, and you can set the
     * <code>phone_number_verified</code> attribute to <code>True</code>. You can also
     * do this by calling <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_AdminUpdateUserAttributes.html">AdminUpdateUserAttributes</a>.</p>
     * <ul> <li> <p> <b>email</b>: The email address of the user to whom the message
     * that contains the code and username will be sent. Required if the
     * <code>email_verified</code> attribute is set to <code>True</code>, or if
     * <code>"EMAIL"</code> is specified in the <code>DesiredDeliveryMediums</code>
     * parameter.</p> </li> <li> <p> <b>phone_number</b>: The phone number of the user
     * to whom the message that contains the code and username will be sent. Required
     * if the <code>phone_number_verified</code> attribute is set to <code>True</code>,
     * or if <code>"SMS"</code> is specified in the <code>DesiredDeliveryMediums</code>
     * parameter.</p> </li> </ul>
     */
    inline AdminCreateUserRequest& AddUserAttributes(AttributeType&& value) { m_userAttributesHasBeenSet = true; m_userAttributes.push_back(std::move(value)); return *this; }


    /**
     * <p>The user's validation data. This is an array of name-value pairs that contain
     * user attributes and attribute values that you can use for custom validation,
     * such as restricting the types of user accounts that can be registered. For
     * example, you might choose to allow or disallow user sign-up based on the user's
     * domain.</p> <p>To configure custom validation, you must create a Pre Sign-up
     * Lambda trigger for the user pool as described in the Amazon Cognito Developer
     * Guide. The Lambda trigger receives the validation data and uses it in the
     * validation process.</p> <p>The user's validation data isn't persisted.</p>
     */
    inline const Aws::Vector<AttributeType>& GetValidationData() const{ return m_validationData; }

    /**
     * <p>The user's validation data. This is an array of name-value pairs that contain
     * user attributes and attribute values that you can use for custom validation,
     * such as restricting the types of user accounts that can be registered. For
     * example, you might choose to allow or disallow user sign-up based on the user's
     * domain.</p> <p>To configure custom validation, you must create a Pre Sign-up
     * Lambda trigger for the user pool as described in the Amazon Cognito Developer
     * Guide. The Lambda trigger receives the validation data and uses it in the
     * validation process.</p> <p>The user's validation data isn't persisted.</p>
     */
    inline bool ValidationDataHasBeenSet() const { return m_validationDataHasBeenSet; }

    /**
     * <p>The user's validation data. This is an array of name-value pairs that contain
     * user attributes and attribute values that you can use for custom validation,
     * such as restricting the types of user accounts that can be registered. For
     * example, you might choose to allow or disallow user sign-up based on the user's
     * domain.</p> <p>To configure custom validation, you must create a Pre Sign-up
     * Lambda trigger for the user pool as described in the Amazon Cognito Developer
     * Guide. The Lambda trigger receives the validation data and uses it in the
     * validation process.</p> <p>The user's validation data isn't persisted.</p>
     */
    inline void SetValidationData(const Aws::Vector<AttributeType>& value) { m_validationDataHasBeenSet = true; m_validationData = value; }

    /**
     * <p>The user's validation data. This is an array of name-value pairs that contain
     * user attributes and attribute values that you can use for custom validation,
     * such as restricting the types of user accounts that can be registered. For
     * example, you might choose to allow or disallow user sign-up based on the user's
     * domain.</p> <p>To configure custom validation, you must create a Pre Sign-up
     * Lambda trigger for the user pool as described in the Amazon Cognito Developer
     * Guide. The Lambda trigger receives the validation data and uses it in the
     * validation process.</p> <p>The user's validation data isn't persisted.</p>
     */
    inline void SetValidationData(Aws::Vector<AttributeType>&& value) { m_validationDataHasBeenSet = true; m_validationData = std::move(value); }

    /**
     * <p>The user's validation data. This is an array of name-value pairs that contain
     * user attributes and attribute values that you can use for custom validation,
     * such as restricting the types of user accounts that can be registered. For
     * example, you might choose to allow or disallow user sign-up based on the user's
     * domain.</p> <p>To configure custom validation, you must create a Pre Sign-up
     * Lambda trigger for the user pool as described in the Amazon Cognito Developer
     * Guide. The Lambda trigger receives the validation data and uses it in the
     * validation process.</p> <p>The user's validation data isn't persisted.</p>
     */
    inline AdminCreateUserRequest& WithValidationData(const Aws::Vector<AttributeType>& value) { SetValidationData(value); return *this;}

    /**
     * <p>The user's validation data. This is an array of name-value pairs that contain
     * user attributes and attribute values that you can use for custom validation,
     * such as restricting the types of user accounts that can be registered. For
     * example, you might choose to allow or disallow user sign-up based on the user's
     * domain.</p> <p>To configure custom validation, you must create a Pre Sign-up
     * Lambda trigger for the user pool as described in the Amazon Cognito Developer
     * Guide. The Lambda trigger receives the validation data and uses it in the
     * validation process.</p> <p>The user's validation data isn't persisted.</p>
     */
    inline AdminCreateUserRequest& WithValidationData(Aws::Vector<AttributeType>&& value) { SetValidationData(std::move(value)); return *this;}

    /**
     * <p>The user's validation data. This is an array of name-value pairs that contain
     * user attributes and attribute values that you can use for custom validation,
     * such as restricting the types of user accounts that can be registered. For
     * example, you might choose to allow or disallow user sign-up based on the user's
     * domain.</p> <p>To configure custom validation, you must create a Pre Sign-up
     * Lambda trigger for the user pool as described in the Amazon Cognito Developer
     * Guide. The Lambda trigger receives the validation data and uses it in the
     * validation process.</p> <p>The user's validation data isn't persisted.</p>
     */
    inline AdminCreateUserRequest& AddValidationData(const AttributeType& value) { m_validationDataHasBeenSet = true; m_validationData.push_back(value); return *this; }

    /**
     * <p>The user's validation data. This is an array of name-value pairs that contain
     * user attributes and attribute values that you can use for custom validation,
     * such as restricting the types of user accounts that can be registered. For
     * example, you might choose to allow or disallow user sign-up based on the user's
     * domain.</p> <p>To configure custom validation, you must create a Pre Sign-up
     * Lambda trigger for the user pool as described in the Amazon Cognito Developer
     * Guide. The Lambda trigger receives the validation data and uses it in the
     * validation process.</p> <p>The user's validation data isn't persisted.</p>
     */
    inline AdminCreateUserRequest& AddValidationData(AttributeType&& value) { m_validationDataHasBeenSet = true; m_validationData.push_back(std::move(value)); return *this; }


    /**
     * <p>The user's temporary password. This password must conform to the password
     * policy that you specified when you created the user pool.</p> <p>The temporary
     * password is valid only once. To complete the Admin Create User flow, the user
     * must enter the temporary password in the sign-in page, along with a new password
     * to be used in all future sign-ins.</p> <p>This parameter isn't required. If you
     * don't specify a value, Amazon Cognito generates one for you.</p> <p>The
     * temporary password can only be used until the user account expiration limit that
     * you set for your user pool. To reset the account after that time limit, you must
     * call <code>AdminCreateUser</code> again and specify <code>RESEND</code> for the
     * <code>MessageAction</code> parameter.</p>
     */
    inline const Aws::String& GetTemporaryPassword() const{ return m_temporaryPassword; }

    /**
     * <p>The user's temporary password. This password must conform to the password
     * policy that you specified when you created the user pool.</p> <p>The temporary
     * password is valid only once. To complete the Admin Create User flow, the user
     * must enter the temporary password in the sign-in page, along with a new password
     * to be used in all future sign-ins.</p> <p>This parameter isn't required. If you
     * don't specify a value, Amazon Cognito generates one for you.</p> <p>The
     * temporary password can only be used until the user account expiration limit that
     * you set for your user pool. To reset the account after that time limit, you must
     * call <code>AdminCreateUser</code> again and specify <code>RESEND</code> for the
     * <code>MessageAction</code> parameter.</p>
     */
    inline bool TemporaryPasswordHasBeenSet() const { return m_temporaryPasswordHasBeenSet; }

    /**
     * <p>The user's temporary password. This password must conform to the password
     * policy that you specified when you created the user pool.</p> <p>The temporary
     * password is valid only once. To complete the Admin Create User flow, the user
     * must enter the temporary password in the sign-in page, along with a new password
     * to be used in all future sign-ins.</p> <p>This parameter isn't required. If you
     * don't specify a value, Amazon Cognito generates one for you.</p> <p>The
     * temporary password can only be used until the user account expiration limit that
     * you set for your user pool. To reset the account after that time limit, you must
     * call <code>AdminCreateUser</code> again and specify <code>RESEND</code> for the
     * <code>MessageAction</code> parameter.</p>
     */
    inline void SetTemporaryPassword(const Aws::String& value) { m_temporaryPasswordHasBeenSet = true; m_temporaryPassword = value; }

    /**
     * <p>The user's temporary password. This password must conform to the password
     * policy that you specified when you created the user pool.</p> <p>The temporary
     * password is valid only once. To complete the Admin Create User flow, the user
     * must enter the temporary password in the sign-in page, along with a new password
     * to be used in all future sign-ins.</p> <p>This parameter isn't required. If you
     * don't specify a value, Amazon Cognito generates one for you.</p> <p>The
     * temporary password can only be used until the user account expiration limit that
     * you set for your user pool. To reset the account after that time limit, you must
     * call <code>AdminCreateUser</code> again and specify <code>RESEND</code> for the
     * <code>MessageAction</code> parameter.</p>
     */
    inline void SetTemporaryPassword(Aws::String&& value) { m_temporaryPasswordHasBeenSet = true; m_temporaryPassword = std::move(value); }

    /**
     * <p>The user's temporary password. This password must conform to the password
     * policy that you specified when you created the user pool.</p> <p>The temporary
     * password is valid only once. To complete the Admin Create User flow, the user
     * must enter the temporary password in the sign-in page, along with a new password
     * to be used in all future sign-ins.</p> <p>This parameter isn't required. If you
     * don't specify a value, Amazon Cognito generates one for you.</p> <p>The
     * temporary password can only be used until the user account expiration limit that
     * you set for your user pool. To reset the account after that time limit, you must
     * call <code>AdminCreateUser</code> again and specify <code>RESEND</code> for the
     * <code>MessageAction</code> parameter.</p>
     */
    inline void SetTemporaryPassword(const char* value) { m_temporaryPasswordHasBeenSet = true; m_temporaryPassword.assign(value); }

    /**
     * <p>The user's temporary password. This password must conform to the password
     * policy that you specified when you created the user pool.</p> <p>The temporary
     * password is valid only once. To complete the Admin Create User flow, the user
     * must enter the temporary password in the sign-in page, along with a new password
     * to be used in all future sign-ins.</p> <p>This parameter isn't required. If you
     * don't specify a value, Amazon Cognito generates one for you.</p> <p>The
     * temporary password can only be used until the user account expiration limit that
     * you set for your user pool. To reset the account after that time limit, you must
     * call <code>AdminCreateUser</code> again and specify <code>RESEND</code> for the
     * <code>MessageAction</code> parameter.</p>
     */
    inline AdminCreateUserRequest& WithTemporaryPassword(const Aws::String& value) { SetTemporaryPassword(value); return *this;}

    /**
     * <p>The user's temporary password. This password must conform to the password
     * policy that you specified when you created the user pool.</p> <p>The temporary
     * password is valid only once. To complete the Admin Create User flow, the user
     * must enter the temporary password in the sign-in page, along with a new password
     * to be used in all future sign-ins.</p> <p>This parameter isn't required. If you
     * don't specify a value, Amazon Cognito generates one for you.</p> <p>The
     * temporary password can only be used until the user account expiration limit that
     * you set for your user pool. To reset the account after that time limit, you must
     * call <code>AdminCreateUser</code> again and specify <code>RESEND</code> for the
     * <code>MessageAction</code> parameter.</p>
     */
    inline AdminCreateUserRequest& WithTemporaryPassword(Aws::String&& value) { SetTemporaryPassword(std::move(value)); return *this;}

    /**
     * <p>The user's temporary password. This password must conform to the password
     * policy that you specified when you created the user pool.</p> <p>The temporary
     * password is valid only once. To complete the Admin Create User flow, the user
     * must enter the temporary password in the sign-in page, along with a new password
     * to be used in all future sign-ins.</p> <p>This parameter isn't required. If you
     * don't specify a value, Amazon Cognito generates one for you.</p> <p>The
     * temporary password can only be used until the user account expiration limit that
     * you set for your user pool. To reset the account after that time limit, you must
     * call <code>AdminCreateUser</code> again and specify <code>RESEND</code> for the
     * <code>MessageAction</code> parameter.</p>
     */
    inline AdminCreateUserRequest& WithTemporaryPassword(const char* value) { SetTemporaryPassword(value); return *this;}


    /**
     * <p>This parameter is used only if the <code>phone_number_verified</code> or
     * <code>email_verified</code> attribute is set to <code>True</code>. Otherwise, it
     * is ignored.</p> <p>If this parameter is set to <code>True</code> and the phone
     * number or email address specified in the UserAttributes parameter already exists
     * as an alias with a different user, the API call will migrate the alias from the
     * previous user to the newly created user. The previous user will no longer be
     * able to log in using that alias.</p> <p>If this parameter is set to
     * <code>False</code>, the API throws an <code>AliasExistsException</code> error if
     * the alias already exists. The default value is <code>False</code>.</p>
     */
    inline bool GetForceAliasCreation() const{ return m_forceAliasCreation; }

    /**
     * <p>This parameter is used only if the <code>phone_number_verified</code> or
     * <code>email_verified</code> attribute is set to <code>True</code>. Otherwise, it
     * is ignored.</p> <p>If this parameter is set to <code>True</code> and the phone
     * number or email address specified in the UserAttributes parameter already exists
     * as an alias with a different user, the API call will migrate the alias from the
     * previous user to the newly created user. The previous user will no longer be
     * able to log in using that alias.</p> <p>If this parameter is set to
     * <code>False</code>, the API throws an <code>AliasExistsException</code> error if
     * the alias already exists. The default value is <code>False</code>.</p>
     */
    inline bool ForceAliasCreationHasBeenSet() const { return m_forceAliasCreationHasBeenSet; }

    /**
     * <p>This parameter is used only if the <code>phone_number_verified</code> or
     * <code>email_verified</code> attribute is set to <code>True</code>. Otherwise, it
     * is ignored.</p> <p>If this parameter is set to <code>True</code> and the phone
     * number or email address specified in the UserAttributes parameter already exists
     * as an alias with a different user, the API call will migrate the alias from the
     * previous user to the newly created user. The previous user will no longer be
     * able to log in using that alias.</p> <p>If this parameter is set to
     * <code>False</code>, the API throws an <code>AliasExistsException</code> error if
     * the alias already exists. The default value is <code>False</code>.</p>
     */
    inline void SetForceAliasCreation(bool value) { m_forceAliasCreationHasBeenSet = true; m_forceAliasCreation = value; }

    /**
     * <p>This parameter is used only if the <code>phone_number_verified</code> or
     * <code>email_verified</code> attribute is set to <code>True</code>. Otherwise, it
     * is ignored.</p> <p>If this parameter is set to <code>True</code> and the phone
     * number or email address specified in the UserAttributes parameter already exists
     * as an alias with a different user, the API call will migrate the alias from the
     * previous user to the newly created user. The previous user will no longer be
     * able to log in using that alias.</p> <p>If this parameter is set to
     * <code>False</code>, the API throws an <code>AliasExistsException</code> error if
     * the alias already exists. The default value is <code>False</code>.</p>
     */
    inline AdminCreateUserRequest& WithForceAliasCreation(bool value) { SetForceAliasCreation(value); return *this;}


    /**
     * <p>Set to <code>RESEND</code> to resend the invitation message to a user that
     * already exists and reset the expiration limit on the user's account. Set to
     * <code>SUPPRESS</code> to suppress sending the message. You can specify only one
     * value.</p>
     */
    inline const MessageActionType& GetMessageAction() const{ return m_messageAction; }

    /**
     * <p>Set to <code>RESEND</code> to resend the invitation message to a user that
     * already exists and reset the expiration limit on the user's account. Set to
     * <code>SUPPRESS</code> to suppress sending the message. You can specify only one
     * value.</p>
     */
    inline bool MessageActionHasBeenSet() const { return m_messageActionHasBeenSet; }

    /**
     * <p>Set to <code>RESEND</code> to resend the invitation message to a user that
     * already exists and reset the expiration limit on the user's account. Set to
     * <code>SUPPRESS</code> to suppress sending the message. You can specify only one
     * value.</p>
     */
    inline void SetMessageAction(const MessageActionType& value) { m_messageActionHasBeenSet = true; m_messageAction = value; }

    /**
     * <p>Set to <code>RESEND</code> to resend the invitation message to a user that
     * already exists and reset the expiration limit on the user's account. Set to
     * <code>SUPPRESS</code> to suppress sending the message. You can specify only one
     * value.</p>
     */
    inline void SetMessageAction(MessageActionType&& value) { m_messageActionHasBeenSet = true; m_messageAction = std::move(value); }

    /**
     * <p>Set to <code>RESEND</code> to resend the invitation message to a user that
     * already exists and reset the expiration limit on the user's account. Set to
     * <code>SUPPRESS</code> to suppress sending the message. You can specify only one
     * value.</p>
     */
    inline AdminCreateUserRequest& WithMessageAction(const MessageActionType& value) { SetMessageAction(value); return *this;}

    /**
     * <p>Set to <code>RESEND</code> to resend the invitation message to a user that
     * already exists and reset the expiration limit on the user's account. Set to
     * <code>SUPPRESS</code> to suppress sending the message. You can specify only one
     * value.</p>
     */
    inline AdminCreateUserRequest& WithMessageAction(MessageActionType&& value) { SetMessageAction(std::move(value)); return *this;}


    /**
     * <p>Specify <code>"EMAIL"</code> if email will be used to send the welcome
     * message. Specify <code>"SMS"</code> if the phone number will be used. The
     * default value is <code>"SMS"</code>. You can specify more than one value.</p>
     */
    inline const Aws::Vector<DeliveryMediumType>& GetDesiredDeliveryMediums() const{ return m_desiredDeliveryMediums; }

    /**
     * <p>Specify <code>"EMAIL"</code> if email will be used to send the welcome
     * message. Specify <code>"SMS"</code> if the phone number will be used. The
     * default value is <code>"SMS"</code>. You can specify more than one value.</p>
     */
    inline bool DesiredDeliveryMediumsHasBeenSet() const { return m_desiredDeliveryMediumsHasBeenSet; }

    /**
     * <p>Specify <code>"EMAIL"</code> if email will be used to send the welcome
     * message. Specify <code>"SMS"</code> if the phone number will be used. The
     * default value is <code>"SMS"</code>. You can specify more than one value.</p>
     */
    inline void SetDesiredDeliveryMediums(const Aws::Vector<DeliveryMediumType>& value) { m_desiredDeliveryMediumsHasBeenSet = true; m_desiredDeliveryMediums = value; }

    /**
     * <p>Specify <code>"EMAIL"</code> if email will be used to send the welcome
     * message. Specify <code>"SMS"</code> if the phone number will be used. The
     * default value is <code>"SMS"</code>. You can specify more than one value.</p>
     */
    inline void SetDesiredDeliveryMediums(Aws::Vector<DeliveryMediumType>&& value) { m_desiredDeliveryMediumsHasBeenSet = true; m_desiredDeliveryMediums = std::move(value); }

    /**
     * <p>Specify <code>"EMAIL"</code> if email will be used to send the welcome
     * message. Specify <code>"SMS"</code> if the phone number will be used. The
     * default value is <code>"SMS"</code>. You can specify more than one value.</p>
     */
    inline AdminCreateUserRequest& WithDesiredDeliveryMediums(const Aws::Vector<DeliveryMediumType>& value) { SetDesiredDeliveryMediums(value); return *this;}

    /**
     * <p>Specify <code>"EMAIL"</code> if email will be used to send the welcome
     * message. Specify <code>"SMS"</code> if the phone number will be used. The
     * default value is <code>"SMS"</code>. You can specify more than one value.</p>
     */
    inline AdminCreateUserRequest& WithDesiredDeliveryMediums(Aws::Vector<DeliveryMediumType>&& value) { SetDesiredDeliveryMediums(std::move(value)); return *this;}

    /**
     * <p>Specify <code>"EMAIL"</code> if email will be used to send the welcome
     * message. Specify <code>"SMS"</code> if the phone number will be used. The
     * default value is <code>"SMS"</code>. You can specify more than one value.</p>
     */
    inline AdminCreateUserRequest& AddDesiredDeliveryMediums(const DeliveryMediumType& value) { m_desiredDeliveryMediumsHasBeenSet = true; m_desiredDeliveryMediums.push_back(value); return *this; }

    /**
     * <p>Specify <code>"EMAIL"</code> if email will be used to send the welcome
     * message. Specify <code>"SMS"</code> if the phone number will be used. The
     * default value is <code>"SMS"</code>. You can specify more than one value.</p>
     */
    inline AdminCreateUserRequest& AddDesiredDeliveryMediums(DeliveryMediumType&& value) { m_desiredDeliveryMediumsHasBeenSet = true; m_desiredDeliveryMediums.push_back(std::move(value)); return *this; }


    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers.</p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * AdminCreateUser API action, Amazon Cognito invokes the function that is assigned
     * to the <i>pre sign-up</i> trigger. When Amazon Cognito invokes this function, it
     * passes a JSON payload, which the function receives as input. This payload
     * contains a <code>clientMetadata</code> attribute, which provides the data that
     * you assigned to the ClientMetadata parameter in your AdminCreateUser request. In
     * your function code in Lambda, you can process the <code>clientMetadata</code>
     * value to enhance your workflow for your specific needs.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">
     * Customizing user pool Workflows with Lambda Triggers</a> in the <i>Amazon
     * Cognito Developer Guide</i>.</p>  <p>When you use the ClientMetadata
     * parameter, remember that Amazon Cognito won't do the following:</p> <ul> <li>
     * <p>Store the ClientMetadata value. This data is available only to Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration doesn't include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Validate the ClientMetadata value.</p>
     * </li> <li> <p>Encrypt the ClientMetadata value. Don't use Amazon Cognito to
     * provide sensitive information.</p> </li> </ul> 
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetClientMetadata() const{ return m_clientMetadata; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers.</p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * AdminCreateUser API action, Amazon Cognito invokes the function that is assigned
     * to the <i>pre sign-up</i> trigger. When Amazon Cognito invokes this function, it
     * passes a JSON payload, which the function receives as input. This payload
     * contains a <code>clientMetadata</code> attribute, which provides the data that
     * you assigned to the ClientMetadata parameter in your AdminCreateUser request. In
     * your function code in Lambda, you can process the <code>clientMetadata</code>
     * value to enhance your workflow for your specific needs.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">
     * Customizing user pool Workflows with Lambda Triggers</a> in the <i>Amazon
     * Cognito Developer Guide</i>.</p>  <p>When you use the ClientMetadata
     * parameter, remember that Amazon Cognito won't do the following:</p> <ul> <li>
     * <p>Store the ClientMetadata value. This data is available only to Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration doesn't include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Validate the ClientMetadata value.</p>
     * </li> <li> <p>Encrypt the ClientMetadata value. Don't use Amazon Cognito to
     * provide sensitive information.</p> </li> </ul> 
     */
    inline bool ClientMetadataHasBeenSet() const { return m_clientMetadataHasBeenSet; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers.</p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * AdminCreateUser API action, Amazon Cognito invokes the function that is assigned
     * to the <i>pre sign-up</i> trigger. When Amazon Cognito invokes this function, it
     * passes a JSON payload, which the function receives as input. This payload
     * contains a <code>clientMetadata</code> attribute, which provides the data that
     * you assigned to the ClientMetadata parameter in your AdminCreateUser request. In
     * your function code in Lambda, you can process the <code>clientMetadata</code>
     * value to enhance your workflow for your specific needs.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">
     * Customizing user pool Workflows with Lambda Triggers</a> in the <i>Amazon
     * Cognito Developer Guide</i>.</p>  <p>When you use the ClientMetadata
     * parameter, remember that Amazon Cognito won't do the following:</p> <ul> <li>
     * <p>Store the ClientMetadata value. This data is available only to Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration doesn't include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Validate the ClientMetadata value.</p>
     * </li> <li> <p>Encrypt the ClientMetadata value. Don't use Amazon Cognito to
     * provide sensitive information.</p> </li> </ul> 
     */
    inline void SetClientMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata = value; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers.</p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * AdminCreateUser API action, Amazon Cognito invokes the function that is assigned
     * to the <i>pre sign-up</i> trigger. When Amazon Cognito invokes this function, it
     * passes a JSON payload, which the function receives as input. This payload
     * contains a <code>clientMetadata</code> attribute, which provides the data that
     * you assigned to the ClientMetadata parameter in your AdminCreateUser request. In
     * your function code in Lambda, you can process the <code>clientMetadata</code>
     * value to enhance your workflow for your specific needs.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">
     * Customizing user pool Workflows with Lambda Triggers</a> in the <i>Amazon
     * Cognito Developer Guide</i>.</p>  <p>When you use the ClientMetadata
     * parameter, remember that Amazon Cognito won't do the following:</p> <ul> <li>
     * <p>Store the ClientMetadata value. This data is available only to Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration doesn't include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Validate the ClientMetadata value.</p>
     * </li> <li> <p>Encrypt the ClientMetadata value. Don't use Amazon Cognito to
     * provide sensitive information.</p> </li> </ul> 
     */
    inline void SetClientMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata = std::move(value); }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers.</p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * AdminCreateUser API action, Amazon Cognito invokes the function that is assigned
     * to the <i>pre sign-up</i> trigger. When Amazon Cognito invokes this function, it
     * passes a JSON payload, which the function receives as input. This payload
     * contains a <code>clientMetadata</code> attribute, which provides the data that
     * you assigned to the ClientMetadata parameter in your AdminCreateUser request. In
     * your function code in Lambda, you can process the <code>clientMetadata</code>
     * value to enhance your workflow for your specific needs.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">
     * Customizing user pool Workflows with Lambda Triggers</a> in the <i>Amazon
     * Cognito Developer Guide</i>.</p>  <p>When you use the ClientMetadata
     * parameter, remember that Amazon Cognito won't do the following:</p> <ul> <li>
     * <p>Store the ClientMetadata value. This data is available only to Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration doesn't include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Validate the ClientMetadata value.</p>
     * </li> <li> <p>Encrypt the ClientMetadata value. Don't use Amazon Cognito to
     * provide sensitive information.</p> </li> </ul> 
     */
    inline AdminCreateUserRequest& WithClientMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetClientMetadata(value); return *this;}

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers.</p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * AdminCreateUser API action, Amazon Cognito invokes the function that is assigned
     * to the <i>pre sign-up</i> trigger. When Amazon Cognito invokes this function, it
     * passes a JSON payload, which the function receives as input. This payload
     * contains a <code>clientMetadata</code> attribute, which provides the data that
     * you assigned to the ClientMetadata parameter in your AdminCreateUser request. In
     * your function code in Lambda, you can process the <code>clientMetadata</code>
     * value to enhance your workflow for your specific needs.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">
     * Customizing user pool Workflows with Lambda Triggers</a> in the <i>Amazon
     * Cognito Developer Guide</i>.</p>  <p>When you use the ClientMetadata
     * parameter, remember that Amazon Cognito won't do the following:</p> <ul> <li>
     * <p>Store the ClientMetadata value. This data is available only to Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration doesn't include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Validate the ClientMetadata value.</p>
     * </li> <li> <p>Encrypt the ClientMetadata value. Don't use Amazon Cognito to
     * provide sensitive information.</p> </li> </ul> 
     */
    inline AdminCreateUserRequest& WithClientMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetClientMetadata(std::move(value)); return *this;}

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers.</p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * AdminCreateUser API action, Amazon Cognito invokes the function that is assigned
     * to the <i>pre sign-up</i> trigger. When Amazon Cognito invokes this function, it
     * passes a JSON payload, which the function receives as input. This payload
     * contains a <code>clientMetadata</code> attribute, which provides the data that
     * you assigned to the ClientMetadata parameter in your AdminCreateUser request. In
     * your function code in Lambda, you can process the <code>clientMetadata</code>
     * value to enhance your workflow for your specific needs.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">
     * Customizing user pool Workflows with Lambda Triggers</a> in the <i>Amazon
     * Cognito Developer Guide</i>.</p>  <p>When you use the ClientMetadata
     * parameter, remember that Amazon Cognito won't do the following:</p> <ul> <li>
     * <p>Store the ClientMetadata value. This data is available only to Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration doesn't include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Validate the ClientMetadata value.</p>
     * </li> <li> <p>Encrypt the ClientMetadata value. Don't use Amazon Cognito to
     * provide sensitive information.</p> </li> </ul> 
     */
    inline AdminCreateUserRequest& AddClientMetadata(const Aws::String& key, const Aws::String& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, value); return *this; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers.</p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * AdminCreateUser API action, Amazon Cognito invokes the function that is assigned
     * to the <i>pre sign-up</i> trigger. When Amazon Cognito invokes this function, it
     * passes a JSON payload, which the function receives as input. This payload
     * contains a <code>clientMetadata</code> attribute, which provides the data that
     * you assigned to the ClientMetadata parameter in your AdminCreateUser request. In
     * your function code in Lambda, you can process the <code>clientMetadata</code>
     * value to enhance your workflow for your specific needs.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">
     * Customizing user pool Workflows with Lambda Triggers</a> in the <i>Amazon
     * Cognito Developer Guide</i>.</p>  <p>When you use the ClientMetadata
     * parameter, remember that Amazon Cognito won't do the following:</p> <ul> <li>
     * <p>Store the ClientMetadata value. This data is available only to Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration doesn't include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Validate the ClientMetadata value.</p>
     * </li> <li> <p>Encrypt the ClientMetadata value. Don't use Amazon Cognito to
     * provide sensitive information.</p> </li> </ul> 
     */
    inline AdminCreateUserRequest& AddClientMetadata(Aws::String&& key, const Aws::String& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers.</p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * AdminCreateUser API action, Amazon Cognito invokes the function that is assigned
     * to the <i>pre sign-up</i> trigger. When Amazon Cognito invokes this function, it
     * passes a JSON payload, which the function receives as input. This payload
     * contains a <code>clientMetadata</code> attribute, which provides the data that
     * you assigned to the ClientMetadata parameter in your AdminCreateUser request. In
     * your function code in Lambda, you can process the <code>clientMetadata</code>
     * value to enhance your workflow for your specific needs.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">
     * Customizing user pool Workflows with Lambda Triggers</a> in the <i>Amazon
     * Cognito Developer Guide</i>.</p>  <p>When you use the ClientMetadata
     * parameter, remember that Amazon Cognito won't do the following:</p> <ul> <li>
     * <p>Store the ClientMetadata value. This data is available only to Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration doesn't include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Validate the ClientMetadata value.</p>
     * </li> <li> <p>Encrypt the ClientMetadata value. Don't use Amazon Cognito to
     * provide sensitive information.</p> </li> </ul> 
     */
    inline AdminCreateUserRequest& AddClientMetadata(const Aws::String& key, Aws::String&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers.</p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * AdminCreateUser API action, Amazon Cognito invokes the function that is assigned
     * to the <i>pre sign-up</i> trigger. When Amazon Cognito invokes this function, it
     * passes a JSON payload, which the function receives as input. This payload
     * contains a <code>clientMetadata</code> attribute, which provides the data that
     * you assigned to the ClientMetadata parameter in your AdminCreateUser request. In
     * your function code in Lambda, you can process the <code>clientMetadata</code>
     * value to enhance your workflow for your specific needs.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">
     * Customizing user pool Workflows with Lambda Triggers</a> in the <i>Amazon
     * Cognito Developer Guide</i>.</p>  <p>When you use the ClientMetadata
     * parameter, remember that Amazon Cognito won't do the following:</p> <ul> <li>
     * <p>Store the ClientMetadata value. This data is available only to Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration doesn't include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Validate the ClientMetadata value.</p>
     * </li> <li> <p>Encrypt the ClientMetadata value. Don't use Amazon Cognito to
     * provide sensitive information.</p> </li> </ul> 
     */
    inline AdminCreateUserRequest& AddClientMetadata(Aws::String&& key, Aws::String&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers.</p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * AdminCreateUser API action, Amazon Cognito invokes the function that is assigned
     * to the <i>pre sign-up</i> trigger. When Amazon Cognito invokes this function, it
     * passes a JSON payload, which the function receives as input. This payload
     * contains a <code>clientMetadata</code> attribute, which provides the data that
     * you assigned to the ClientMetadata parameter in your AdminCreateUser request. In
     * your function code in Lambda, you can process the <code>clientMetadata</code>
     * value to enhance your workflow for your specific needs.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">
     * Customizing user pool Workflows with Lambda Triggers</a> in the <i>Amazon
     * Cognito Developer Guide</i>.</p>  <p>When you use the ClientMetadata
     * parameter, remember that Amazon Cognito won't do the following:</p> <ul> <li>
     * <p>Store the ClientMetadata value. This data is available only to Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration doesn't include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Validate the ClientMetadata value.</p>
     * </li> <li> <p>Encrypt the ClientMetadata value. Don't use Amazon Cognito to
     * provide sensitive information.</p> </li> </ul> 
     */
    inline AdminCreateUserRequest& AddClientMetadata(const char* key, Aws::String&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers.</p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * AdminCreateUser API action, Amazon Cognito invokes the function that is assigned
     * to the <i>pre sign-up</i> trigger. When Amazon Cognito invokes this function, it
     * passes a JSON payload, which the function receives as input. This payload
     * contains a <code>clientMetadata</code> attribute, which provides the data that
     * you assigned to the ClientMetadata parameter in your AdminCreateUser request. In
     * your function code in Lambda, you can process the <code>clientMetadata</code>
     * value to enhance your workflow for your specific needs.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">
     * Customizing user pool Workflows with Lambda Triggers</a> in the <i>Amazon
     * Cognito Developer Guide</i>.</p>  <p>When you use the ClientMetadata
     * parameter, remember that Amazon Cognito won't do the following:</p> <ul> <li>
     * <p>Store the ClientMetadata value. This data is available only to Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration doesn't include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Validate the ClientMetadata value.</p>
     * </li> <li> <p>Encrypt the ClientMetadata value. Don't use Amazon Cognito to
     * provide sensitive information.</p> </li> </ul> 
     */
    inline AdminCreateUserRequest& AddClientMetadata(Aws::String&& key, const char* value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers.</p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * AdminCreateUser API action, Amazon Cognito invokes the function that is assigned
     * to the <i>pre sign-up</i> trigger. When Amazon Cognito invokes this function, it
     * passes a JSON payload, which the function receives as input. This payload
     * contains a <code>clientMetadata</code> attribute, which provides the data that
     * you assigned to the ClientMetadata parameter in your AdminCreateUser request. In
     * your function code in Lambda, you can process the <code>clientMetadata</code>
     * value to enhance your workflow for your specific needs.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">
     * Customizing user pool Workflows with Lambda Triggers</a> in the <i>Amazon
     * Cognito Developer Guide</i>.</p>  <p>When you use the ClientMetadata
     * parameter, remember that Amazon Cognito won't do the following:</p> <ul> <li>
     * <p>Store the ClientMetadata value. This data is available only to Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration doesn't include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Validate the ClientMetadata value.</p>
     * </li> <li> <p>Encrypt the ClientMetadata value. Don't use Amazon Cognito to
     * provide sensitive information.</p> </li> </ul> 
     */
    inline AdminCreateUserRequest& AddClientMetadata(const char* key, const char* value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, value); return *this; }

  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::Vector<AttributeType> m_userAttributes;
    bool m_userAttributesHasBeenSet = false;

    Aws::Vector<AttributeType> m_validationData;
    bool m_validationDataHasBeenSet = false;

    Aws::String m_temporaryPassword;
    bool m_temporaryPasswordHasBeenSet = false;

    bool m_forceAliasCreation;
    bool m_forceAliasCreationHasBeenSet = false;

    MessageActionType m_messageAction;
    bool m_messageActionHasBeenSet = false;

    Aws::Vector<DeliveryMediumType> m_desiredDeliveryMediums;
    bool m_desiredDeliveryMediumsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_clientMetadata;
    bool m_clientMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
