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
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cognito-idp/model/MessageActionType.h>
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
  class AWS_COGNITOIDENTITYPROVIDER_API AdminCreateUserRequest : public CognitoIdentityProviderRequest
  {
  public:
    AdminCreateUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AdminCreateUser"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
     * username cannot be changed.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The username for the user. Must be unique within the user pool. Must be a
     * UTF-8 string between 1 and 128 characters. After the user is created, the
     * username cannot be changed.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>The username for the user. Must be unique within the user pool. Must be a
     * UTF-8 string between 1 and 128 characters. After the user is created, the
     * username cannot be changed.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The username for the user. Must be unique within the user pool. Must be a
     * UTF-8 string between 1 and 128 characters. After the user is created, the
     * username cannot be changed.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>The username for the user. Must be unique within the user pool. Must be a
     * UTF-8 string between 1 and 128 characters. After the user is created, the
     * username cannot be changed.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The username for the user. Must be unique within the user pool. Must be a
     * UTF-8 string between 1 and 128 characters. After the user is created, the
     * username cannot be changed.</p>
     */
    inline AdminCreateUserRequest& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The username for the user. Must be unique within the user pool. Must be a
     * UTF-8 string between 1 and 128 characters. After the user is created, the
     * username cannot be changed.</p>
     */
    inline AdminCreateUserRequest& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The username for the user. Must be unique within the user pool. Must be a
     * UTF-8 string between 1 and 128 characters. After the user is created, the
     * username cannot be changed.</p>
     */
    inline AdminCreateUserRequest& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p>An array of name-value pairs that contain user attributes and attribute
     * values to be set for the user to be created. You can create a user without
     * specifying any attributes other than <code>Username</code>. However, any
     * attributes that you specify as required (in or in the <b>Attributes</b> tab of
     * the console) must be supplied either by you (in your call to
     * <code>AdminCreateUser</code>) or by the user (when he or she signs up in
     * response to your welcome message).</p> <p>For custom attributes, you must
     * prepend the <code>custom:</code> prefix to the attribute name.</p> <p>To send a
     * message inviting the user to sign up, you must specify the user's email address
     * or phone number. This can be done in your call to AdminCreateUser or in the
     * <b>Users</b> tab of the Amazon Cognito console for managing your user pools.</p>
     * <p>In your call to <code>AdminCreateUser</code>, you can set the
     * <code>email_verified</code> attribute to <code>True</code>, and you can set the
     * <code>phone_number_verified</code> attribute to <code>True</code>. (You can also
     * do this by calling .)</p> <ul> <li> <p> <b>email</b>: The email address of the
     * user to whom the message that contains the code and username will be sent.
     * Required if the <code>email_verified</code> attribute is set to
     * <code>True</code>, or if <code>"EMAIL"</code> is specified in the
     * <code>DesiredDeliveryMediums</code> parameter.</p> </li> <li> <p>
     * <b>phone_number</b>: The phone number of the user to whom the message that
     * contains the code and username will be sent. Required if the
     * <code>phone_number_verified</code> attribute is set to <code>True</code>, or if
     * <code>"SMS"</code> is specified in the <code>DesiredDeliveryMediums</code>
     * parameter.</p> </li> </ul>
     */
    inline const Aws::Vector<AttributeType>& GetUserAttributes() const{ return m_userAttributes; }

    /**
     * <p>An array of name-value pairs that contain user attributes and attribute
     * values to be set for the user to be created. You can create a user without
     * specifying any attributes other than <code>Username</code>. However, any
     * attributes that you specify as required (in or in the <b>Attributes</b> tab of
     * the console) must be supplied either by you (in your call to
     * <code>AdminCreateUser</code>) or by the user (when he or she signs up in
     * response to your welcome message).</p> <p>For custom attributes, you must
     * prepend the <code>custom:</code> prefix to the attribute name.</p> <p>To send a
     * message inviting the user to sign up, you must specify the user's email address
     * or phone number. This can be done in your call to AdminCreateUser or in the
     * <b>Users</b> tab of the Amazon Cognito console for managing your user pools.</p>
     * <p>In your call to <code>AdminCreateUser</code>, you can set the
     * <code>email_verified</code> attribute to <code>True</code>, and you can set the
     * <code>phone_number_verified</code> attribute to <code>True</code>. (You can also
     * do this by calling .)</p> <ul> <li> <p> <b>email</b>: The email address of the
     * user to whom the message that contains the code and username will be sent.
     * Required if the <code>email_verified</code> attribute is set to
     * <code>True</code>, or if <code>"EMAIL"</code> is specified in the
     * <code>DesiredDeliveryMediums</code> parameter.</p> </li> <li> <p>
     * <b>phone_number</b>: The phone number of the user to whom the message that
     * contains the code and username will be sent. Required if the
     * <code>phone_number_verified</code> attribute is set to <code>True</code>, or if
     * <code>"SMS"</code> is specified in the <code>DesiredDeliveryMediums</code>
     * parameter.</p> </li> </ul>
     */
    inline bool UserAttributesHasBeenSet() const { return m_userAttributesHasBeenSet; }

    /**
     * <p>An array of name-value pairs that contain user attributes and attribute
     * values to be set for the user to be created. You can create a user without
     * specifying any attributes other than <code>Username</code>. However, any
     * attributes that you specify as required (in or in the <b>Attributes</b> tab of
     * the console) must be supplied either by you (in your call to
     * <code>AdminCreateUser</code>) or by the user (when he or she signs up in
     * response to your welcome message).</p> <p>For custom attributes, you must
     * prepend the <code>custom:</code> prefix to the attribute name.</p> <p>To send a
     * message inviting the user to sign up, you must specify the user's email address
     * or phone number. This can be done in your call to AdminCreateUser or in the
     * <b>Users</b> tab of the Amazon Cognito console for managing your user pools.</p>
     * <p>In your call to <code>AdminCreateUser</code>, you can set the
     * <code>email_verified</code> attribute to <code>True</code>, and you can set the
     * <code>phone_number_verified</code> attribute to <code>True</code>. (You can also
     * do this by calling .)</p> <ul> <li> <p> <b>email</b>: The email address of the
     * user to whom the message that contains the code and username will be sent.
     * Required if the <code>email_verified</code> attribute is set to
     * <code>True</code>, or if <code>"EMAIL"</code> is specified in the
     * <code>DesiredDeliveryMediums</code> parameter.</p> </li> <li> <p>
     * <b>phone_number</b>: The phone number of the user to whom the message that
     * contains the code and username will be sent. Required if the
     * <code>phone_number_verified</code> attribute is set to <code>True</code>, or if
     * <code>"SMS"</code> is specified in the <code>DesiredDeliveryMediums</code>
     * parameter.</p> </li> </ul>
     */
    inline void SetUserAttributes(const Aws::Vector<AttributeType>& value) { m_userAttributesHasBeenSet = true; m_userAttributes = value; }

    /**
     * <p>An array of name-value pairs that contain user attributes and attribute
     * values to be set for the user to be created. You can create a user without
     * specifying any attributes other than <code>Username</code>. However, any
     * attributes that you specify as required (in or in the <b>Attributes</b> tab of
     * the console) must be supplied either by you (in your call to
     * <code>AdminCreateUser</code>) or by the user (when he or she signs up in
     * response to your welcome message).</p> <p>For custom attributes, you must
     * prepend the <code>custom:</code> prefix to the attribute name.</p> <p>To send a
     * message inviting the user to sign up, you must specify the user's email address
     * or phone number. This can be done in your call to AdminCreateUser or in the
     * <b>Users</b> tab of the Amazon Cognito console for managing your user pools.</p>
     * <p>In your call to <code>AdminCreateUser</code>, you can set the
     * <code>email_verified</code> attribute to <code>True</code>, and you can set the
     * <code>phone_number_verified</code> attribute to <code>True</code>. (You can also
     * do this by calling .)</p> <ul> <li> <p> <b>email</b>: The email address of the
     * user to whom the message that contains the code and username will be sent.
     * Required if the <code>email_verified</code> attribute is set to
     * <code>True</code>, or if <code>"EMAIL"</code> is specified in the
     * <code>DesiredDeliveryMediums</code> parameter.</p> </li> <li> <p>
     * <b>phone_number</b>: The phone number of the user to whom the message that
     * contains the code and username will be sent. Required if the
     * <code>phone_number_verified</code> attribute is set to <code>True</code>, or if
     * <code>"SMS"</code> is specified in the <code>DesiredDeliveryMediums</code>
     * parameter.</p> </li> </ul>
     */
    inline void SetUserAttributes(Aws::Vector<AttributeType>&& value) { m_userAttributesHasBeenSet = true; m_userAttributes = std::move(value); }

    /**
     * <p>An array of name-value pairs that contain user attributes and attribute
     * values to be set for the user to be created. You can create a user without
     * specifying any attributes other than <code>Username</code>. However, any
     * attributes that you specify as required (in or in the <b>Attributes</b> tab of
     * the console) must be supplied either by you (in your call to
     * <code>AdminCreateUser</code>) or by the user (when he or she signs up in
     * response to your welcome message).</p> <p>For custom attributes, you must
     * prepend the <code>custom:</code> prefix to the attribute name.</p> <p>To send a
     * message inviting the user to sign up, you must specify the user's email address
     * or phone number. This can be done in your call to AdminCreateUser or in the
     * <b>Users</b> tab of the Amazon Cognito console for managing your user pools.</p>
     * <p>In your call to <code>AdminCreateUser</code>, you can set the
     * <code>email_verified</code> attribute to <code>True</code>, and you can set the
     * <code>phone_number_verified</code> attribute to <code>True</code>. (You can also
     * do this by calling .)</p> <ul> <li> <p> <b>email</b>: The email address of the
     * user to whom the message that contains the code and username will be sent.
     * Required if the <code>email_verified</code> attribute is set to
     * <code>True</code>, or if <code>"EMAIL"</code> is specified in the
     * <code>DesiredDeliveryMediums</code> parameter.</p> </li> <li> <p>
     * <b>phone_number</b>: The phone number of the user to whom the message that
     * contains the code and username will be sent. Required if the
     * <code>phone_number_verified</code> attribute is set to <code>True</code>, or if
     * <code>"SMS"</code> is specified in the <code>DesiredDeliveryMediums</code>
     * parameter.</p> </li> </ul>
     */
    inline AdminCreateUserRequest& WithUserAttributes(const Aws::Vector<AttributeType>& value) { SetUserAttributes(value); return *this;}

    /**
     * <p>An array of name-value pairs that contain user attributes and attribute
     * values to be set for the user to be created. You can create a user without
     * specifying any attributes other than <code>Username</code>. However, any
     * attributes that you specify as required (in or in the <b>Attributes</b> tab of
     * the console) must be supplied either by you (in your call to
     * <code>AdminCreateUser</code>) or by the user (when he or she signs up in
     * response to your welcome message).</p> <p>For custom attributes, you must
     * prepend the <code>custom:</code> prefix to the attribute name.</p> <p>To send a
     * message inviting the user to sign up, you must specify the user's email address
     * or phone number. This can be done in your call to AdminCreateUser or in the
     * <b>Users</b> tab of the Amazon Cognito console for managing your user pools.</p>
     * <p>In your call to <code>AdminCreateUser</code>, you can set the
     * <code>email_verified</code> attribute to <code>True</code>, and you can set the
     * <code>phone_number_verified</code> attribute to <code>True</code>. (You can also
     * do this by calling .)</p> <ul> <li> <p> <b>email</b>: The email address of the
     * user to whom the message that contains the code and username will be sent.
     * Required if the <code>email_verified</code> attribute is set to
     * <code>True</code>, or if <code>"EMAIL"</code> is specified in the
     * <code>DesiredDeliveryMediums</code> parameter.</p> </li> <li> <p>
     * <b>phone_number</b>: The phone number of the user to whom the message that
     * contains the code and username will be sent. Required if the
     * <code>phone_number_verified</code> attribute is set to <code>True</code>, or if
     * <code>"SMS"</code> is specified in the <code>DesiredDeliveryMediums</code>
     * parameter.</p> </li> </ul>
     */
    inline AdminCreateUserRequest& WithUserAttributes(Aws::Vector<AttributeType>&& value) { SetUserAttributes(std::move(value)); return *this;}

    /**
     * <p>An array of name-value pairs that contain user attributes and attribute
     * values to be set for the user to be created. You can create a user without
     * specifying any attributes other than <code>Username</code>. However, any
     * attributes that you specify as required (in or in the <b>Attributes</b> tab of
     * the console) must be supplied either by you (in your call to
     * <code>AdminCreateUser</code>) or by the user (when he or she signs up in
     * response to your welcome message).</p> <p>For custom attributes, you must
     * prepend the <code>custom:</code> prefix to the attribute name.</p> <p>To send a
     * message inviting the user to sign up, you must specify the user's email address
     * or phone number. This can be done in your call to AdminCreateUser or in the
     * <b>Users</b> tab of the Amazon Cognito console for managing your user pools.</p>
     * <p>In your call to <code>AdminCreateUser</code>, you can set the
     * <code>email_verified</code> attribute to <code>True</code>, and you can set the
     * <code>phone_number_verified</code> attribute to <code>True</code>. (You can also
     * do this by calling .)</p> <ul> <li> <p> <b>email</b>: The email address of the
     * user to whom the message that contains the code and username will be sent.
     * Required if the <code>email_verified</code> attribute is set to
     * <code>True</code>, or if <code>"EMAIL"</code> is specified in the
     * <code>DesiredDeliveryMediums</code> parameter.</p> </li> <li> <p>
     * <b>phone_number</b>: The phone number of the user to whom the message that
     * contains the code and username will be sent. Required if the
     * <code>phone_number_verified</code> attribute is set to <code>True</code>, or if
     * <code>"SMS"</code> is specified in the <code>DesiredDeliveryMediums</code>
     * parameter.</p> </li> </ul>
     */
    inline AdminCreateUserRequest& AddUserAttributes(const AttributeType& value) { m_userAttributesHasBeenSet = true; m_userAttributes.push_back(value); return *this; }

    /**
     * <p>An array of name-value pairs that contain user attributes and attribute
     * values to be set for the user to be created. You can create a user without
     * specifying any attributes other than <code>Username</code>. However, any
     * attributes that you specify as required (in or in the <b>Attributes</b> tab of
     * the console) must be supplied either by you (in your call to
     * <code>AdminCreateUser</code>) or by the user (when he or she signs up in
     * response to your welcome message).</p> <p>For custom attributes, you must
     * prepend the <code>custom:</code> prefix to the attribute name.</p> <p>To send a
     * message inviting the user to sign up, you must specify the user's email address
     * or phone number. This can be done in your call to AdminCreateUser or in the
     * <b>Users</b> tab of the Amazon Cognito console for managing your user pools.</p>
     * <p>In your call to <code>AdminCreateUser</code>, you can set the
     * <code>email_verified</code> attribute to <code>True</code>, and you can set the
     * <code>phone_number_verified</code> attribute to <code>True</code>. (You can also
     * do this by calling .)</p> <ul> <li> <p> <b>email</b>: The email address of the
     * user to whom the message that contains the code and username will be sent.
     * Required if the <code>email_verified</code> attribute is set to
     * <code>True</code>, or if <code>"EMAIL"</code> is specified in the
     * <code>DesiredDeliveryMediums</code> parameter.</p> </li> <li> <p>
     * <b>phone_number</b>: The phone number of the user to whom the message that
     * contains the code and username will be sent. Required if the
     * <code>phone_number_verified</code> attribute is set to <code>True</code>, or if
     * <code>"SMS"</code> is specified in the <code>DesiredDeliveryMediums</code>
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
     * validation process.</p> <p>The user's validation data is not persisted.</p>
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
     * validation process.</p> <p>The user's validation data is not persisted.</p>
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
     * validation process.</p> <p>The user's validation data is not persisted.</p>
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
     * validation process.</p> <p>The user's validation data is not persisted.</p>
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
     * validation process.</p> <p>The user's validation data is not persisted.</p>
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
     * validation process.</p> <p>The user's validation data is not persisted.</p>
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
     * validation process.</p> <p>The user's validation data is not persisted.</p>
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
     * validation process.</p> <p>The user's validation data is not persisted.</p>
     */
    inline AdminCreateUserRequest& AddValidationData(AttributeType&& value) { m_validationDataHasBeenSet = true; m_validationData.push_back(std::move(value)); return *this; }


    /**
     * <p>The user's temporary password. This password must conform to the password
     * policy that you specified when you created the user pool.</p> <p>The temporary
     * password is valid only once. To complete the Admin Create User flow, the user
     * must enter the temporary password in the sign-in page along with a new password
     * to be used in all future sign-ins.</p> <p>This parameter is not required. If you
     * do not specify a value, Amazon Cognito generates one for you.</p> <p>The
     * temporary password can only be used until the user account expiration limit that
     * you specified when you created the user pool. To reset the account after that
     * time limit, you must call <code>AdminCreateUser</code> again, specifying
     * <code>"RESEND"</code> for the <code>MessageAction</code> parameter.</p>
     */
    inline const Aws::String& GetTemporaryPassword() const{ return m_temporaryPassword; }

    /**
     * <p>The user's temporary password. This password must conform to the password
     * policy that you specified when you created the user pool.</p> <p>The temporary
     * password is valid only once. To complete the Admin Create User flow, the user
     * must enter the temporary password in the sign-in page along with a new password
     * to be used in all future sign-ins.</p> <p>This parameter is not required. If you
     * do not specify a value, Amazon Cognito generates one for you.</p> <p>The
     * temporary password can only be used until the user account expiration limit that
     * you specified when you created the user pool. To reset the account after that
     * time limit, you must call <code>AdminCreateUser</code> again, specifying
     * <code>"RESEND"</code> for the <code>MessageAction</code> parameter.</p>
     */
    inline bool TemporaryPasswordHasBeenSet() const { return m_temporaryPasswordHasBeenSet; }

    /**
     * <p>The user's temporary password. This password must conform to the password
     * policy that you specified when you created the user pool.</p> <p>The temporary
     * password is valid only once. To complete the Admin Create User flow, the user
     * must enter the temporary password in the sign-in page along with a new password
     * to be used in all future sign-ins.</p> <p>This parameter is not required. If you
     * do not specify a value, Amazon Cognito generates one for you.</p> <p>The
     * temporary password can only be used until the user account expiration limit that
     * you specified when you created the user pool. To reset the account after that
     * time limit, you must call <code>AdminCreateUser</code> again, specifying
     * <code>"RESEND"</code> for the <code>MessageAction</code> parameter.</p>
     */
    inline void SetTemporaryPassword(const Aws::String& value) { m_temporaryPasswordHasBeenSet = true; m_temporaryPassword = value; }

    /**
     * <p>The user's temporary password. This password must conform to the password
     * policy that you specified when you created the user pool.</p> <p>The temporary
     * password is valid only once. To complete the Admin Create User flow, the user
     * must enter the temporary password in the sign-in page along with a new password
     * to be used in all future sign-ins.</p> <p>This parameter is not required. If you
     * do not specify a value, Amazon Cognito generates one for you.</p> <p>The
     * temporary password can only be used until the user account expiration limit that
     * you specified when you created the user pool. To reset the account after that
     * time limit, you must call <code>AdminCreateUser</code> again, specifying
     * <code>"RESEND"</code> for the <code>MessageAction</code> parameter.</p>
     */
    inline void SetTemporaryPassword(Aws::String&& value) { m_temporaryPasswordHasBeenSet = true; m_temporaryPassword = std::move(value); }

    /**
     * <p>The user's temporary password. This password must conform to the password
     * policy that you specified when you created the user pool.</p> <p>The temporary
     * password is valid only once. To complete the Admin Create User flow, the user
     * must enter the temporary password in the sign-in page along with a new password
     * to be used in all future sign-ins.</p> <p>This parameter is not required. If you
     * do not specify a value, Amazon Cognito generates one for you.</p> <p>The
     * temporary password can only be used until the user account expiration limit that
     * you specified when you created the user pool. To reset the account after that
     * time limit, you must call <code>AdminCreateUser</code> again, specifying
     * <code>"RESEND"</code> for the <code>MessageAction</code> parameter.</p>
     */
    inline void SetTemporaryPassword(const char* value) { m_temporaryPasswordHasBeenSet = true; m_temporaryPassword.assign(value); }

    /**
     * <p>The user's temporary password. This password must conform to the password
     * policy that you specified when you created the user pool.</p> <p>The temporary
     * password is valid only once. To complete the Admin Create User flow, the user
     * must enter the temporary password in the sign-in page along with a new password
     * to be used in all future sign-ins.</p> <p>This parameter is not required. If you
     * do not specify a value, Amazon Cognito generates one for you.</p> <p>The
     * temporary password can only be used until the user account expiration limit that
     * you specified when you created the user pool. To reset the account after that
     * time limit, you must call <code>AdminCreateUser</code> again, specifying
     * <code>"RESEND"</code> for the <code>MessageAction</code> parameter.</p>
     */
    inline AdminCreateUserRequest& WithTemporaryPassword(const Aws::String& value) { SetTemporaryPassword(value); return *this;}

    /**
     * <p>The user's temporary password. This password must conform to the password
     * policy that you specified when you created the user pool.</p> <p>The temporary
     * password is valid only once. To complete the Admin Create User flow, the user
     * must enter the temporary password in the sign-in page along with a new password
     * to be used in all future sign-ins.</p> <p>This parameter is not required. If you
     * do not specify a value, Amazon Cognito generates one for you.</p> <p>The
     * temporary password can only be used until the user account expiration limit that
     * you specified when you created the user pool. To reset the account after that
     * time limit, you must call <code>AdminCreateUser</code> again, specifying
     * <code>"RESEND"</code> for the <code>MessageAction</code> parameter.</p>
     */
    inline AdminCreateUserRequest& WithTemporaryPassword(Aws::String&& value) { SetTemporaryPassword(std::move(value)); return *this;}

    /**
     * <p>The user's temporary password. This password must conform to the password
     * policy that you specified when you created the user pool.</p> <p>The temporary
     * password is valid only once. To complete the Admin Create User flow, the user
     * must enter the temporary password in the sign-in page along with a new password
     * to be used in all future sign-ins.</p> <p>This parameter is not required. If you
     * do not specify a value, Amazon Cognito generates one for you.</p> <p>The
     * temporary password can only be used until the user account expiration limit that
     * you specified when you created the user pool. To reset the account after that
     * time limit, you must call <code>AdminCreateUser</code> again, specifying
     * <code>"RESEND"</code> for the <code>MessageAction</code> parameter.</p>
     */
    inline AdminCreateUserRequest& WithTemporaryPassword(const char* value) { SetTemporaryPassword(value); return *this;}


    /**
     * <p>This parameter is only used if the <code>phone_number_verified</code> or
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
     * <p>This parameter is only used if the <code>phone_number_verified</code> or
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
     * <p>This parameter is only used if the <code>phone_number_verified</code> or
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
     * <p>This parameter is only used if the <code>phone_number_verified</code> or
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
     * <p>Set to <code>"RESEND"</code> to resend the invitation message to a user that
     * already exists and reset the expiration limit on the user's account. Set to
     * <code>"SUPPRESS"</code> to suppress sending the message. Only one value can be
     * specified.</p>
     */
    inline const MessageActionType& GetMessageAction() const{ return m_messageAction; }

    /**
     * <p>Set to <code>"RESEND"</code> to resend the invitation message to a user that
     * already exists and reset the expiration limit on the user's account. Set to
     * <code>"SUPPRESS"</code> to suppress sending the message. Only one value can be
     * specified.</p>
     */
    inline bool MessageActionHasBeenSet() const { return m_messageActionHasBeenSet; }

    /**
     * <p>Set to <code>"RESEND"</code> to resend the invitation message to a user that
     * already exists and reset the expiration limit on the user's account. Set to
     * <code>"SUPPRESS"</code> to suppress sending the message. Only one value can be
     * specified.</p>
     */
    inline void SetMessageAction(const MessageActionType& value) { m_messageActionHasBeenSet = true; m_messageAction = value; }

    /**
     * <p>Set to <code>"RESEND"</code> to resend the invitation message to a user that
     * already exists and reset the expiration limit on the user's account. Set to
     * <code>"SUPPRESS"</code> to suppress sending the message. Only one value can be
     * specified.</p>
     */
    inline void SetMessageAction(MessageActionType&& value) { m_messageActionHasBeenSet = true; m_messageAction = std::move(value); }

    /**
     * <p>Set to <code>"RESEND"</code> to resend the invitation message to a user that
     * already exists and reset the expiration limit on the user's account. Set to
     * <code>"SUPPRESS"</code> to suppress sending the message. Only one value can be
     * specified.</p>
     */
    inline AdminCreateUserRequest& WithMessageAction(const MessageActionType& value) { SetMessageAction(value); return *this;}

    /**
     * <p>Set to <code>"RESEND"</code> to resend the invitation message to a user that
     * already exists and reset the expiration limit on the user's account. Set to
     * <code>"SUPPRESS"</code> to suppress sending the message. Only one value can be
     * specified.</p>
     */
    inline AdminCreateUserRequest& WithMessageAction(MessageActionType&& value) { SetMessageAction(std::move(value)); return *this;}


    /**
     * <p>Specify <code>"EMAIL"</code> if email will be used to send the welcome
     * message. Specify <code>"SMS"</code> if the phone number will be used. The
     * default value is <code>"SMS"</code>. More than one value can be specified.</p>
     */
    inline const Aws::Vector<DeliveryMediumType>& GetDesiredDeliveryMediums() const{ return m_desiredDeliveryMediums; }

    /**
     * <p>Specify <code>"EMAIL"</code> if email will be used to send the welcome
     * message. Specify <code>"SMS"</code> if the phone number will be used. The
     * default value is <code>"SMS"</code>. More than one value can be specified.</p>
     */
    inline bool DesiredDeliveryMediumsHasBeenSet() const { return m_desiredDeliveryMediumsHasBeenSet; }

    /**
     * <p>Specify <code>"EMAIL"</code> if email will be used to send the welcome
     * message. Specify <code>"SMS"</code> if the phone number will be used. The
     * default value is <code>"SMS"</code>. More than one value can be specified.</p>
     */
    inline void SetDesiredDeliveryMediums(const Aws::Vector<DeliveryMediumType>& value) { m_desiredDeliveryMediumsHasBeenSet = true; m_desiredDeliveryMediums = value; }

    /**
     * <p>Specify <code>"EMAIL"</code> if email will be used to send the welcome
     * message. Specify <code>"SMS"</code> if the phone number will be used. The
     * default value is <code>"SMS"</code>. More than one value can be specified.</p>
     */
    inline void SetDesiredDeliveryMediums(Aws::Vector<DeliveryMediumType>&& value) { m_desiredDeliveryMediumsHasBeenSet = true; m_desiredDeliveryMediums = std::move(value); }

    /**
     * <p>Specify <code>"EMAIL"</code> if email will be used to send the welcome
     * message. Specify <code>"SMS"</code> if the phone number will be used. The
     * default value is <code>"SMS"</code>. More than one value can be specified.</p>
     */
    inline AdminCreateUserRequest& WithDesiredDeliveryMediums(const Aws::Vector<DeliveryMediumType>& value) { SetDesiredDeliveryMediums(value); return *this;}

    /**
     * <p>Specify <code>"EMAIL"</code> if email will be used to send the welcome
     * message. Specify <code>"SMS"</code> if the phone number will be used. The
     * default value is <code>"SMS"</code>. More than one value can be specified.</p>
     */
    inline AdminCreateUserRequest& WithDesiredDeliveryMediums(Aws::Vector<DeliveryMediumType>&& value) { SetDesiredDeliveryMediums(std::move(value)); return *this;}

    /**
     * <p>Specify <code>"EMAIL"</code> if email will be used to send the welcome
     * message. Specify <code>"SMS"</code> if the phone number will be used. The
     * default value is <code>"SMS"</code>. More than one value can be specified.</p>
     */
    inline AdminCreateUserRequest& AddDesiredDeliveryMediums(const DeliveryMediumType& value) { m_desiredDeliveryMediumsHasBeenSet = true; m_desiredDeliveryMediums.push_back(value); return *this; }

    /**
     * <p>Specify <code>"EMAIL"</code> if email will be used to send the welcome
     * message. Specify <code>"SMS"</code> if the phone number will be used. The
     * default value is <code>"SMS"</code>. More than one value can be specified.</p>
     */
    inline AdminCreateUserRequest& AddDesiredDeliveryMediums(DeliveryMediumType&& value) { m_desiredDeliveryMediumsHasBeenSet = true; m_desiredDeliveryMediums.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet;

    Aws::String m_username;
    bool m_usernameHasBeenSet;

    Aws::Vector<AttributeType> m_userAttributes;
    bool m_userAttributesHasBeenSet;

    Aws::Vector<AttributeType> m_validationData;
    bool m_validationDataHasBeenSet;

    Aws::String m_temporaryPassword;
    bool m_temporaryPasswordHasBeenSet;

    bool m_forceAliasCreation;
    bool m_forceAliasCreationHasBeenSet;

    MessageActionType m_messageAction;
    bool m_messageActionHasBeenSet;

    Aws::Vector<DeliveryMediumType> m_desiredDeliveryMediums;
    bool m_desiredDeliveryMediumsHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
