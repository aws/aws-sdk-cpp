/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/cognito-idp/model/AttributeType.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Represents the request to update the user's attributes as an
   * administrator.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminUpdateUserAttributesRequest">AWS
   * API Reference</a></p>
   */
  class AdminUpdateUserAttributesRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API AdminUpdateUserAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AdminUpdateUserAttributes"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The user pool ID for the user pool where you want to update user
     * attributes.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

    /**
     * <p>The user pool ID for the user pool where you want to update user
     * attributes.</p>
     */
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }

    /**
     * <p>The user pool ID for the user pool where you want to update user
     * attributes.</p>
     */
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The user pool ID for the user pool where you want to update user
     * attributes.</p>
     */
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }

    /**
     * <p>The user pool ID for the user pool where you want to update user
     * attributes.</p>
     */
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }

    /**
     * <p>The user pool ID for the user pool where you want to update user
     * attributes.</p>
     */
    inline AdminUpdateUserAttributesRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID for the user pool where you want to update user
     * attributes.</p>
     */
    inline AdminUpdateUserAttributesRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}

    /**
     * <p>The user pool ID for the user pool where you want to update user
     * attributes.</p>
     */
    inline AdminUpdateUserAttributesRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}


    /**
     * <p>The user name of the user for whom you want to update user attributes.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The user name of the user for whom you want to update user attributes.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>The user name of the user for whom you want to update user attributes.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The user name of the user for whom you want to update user attributes.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>The user name of the user for whom you want to update user attributes.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The user name of the user for whom you want to update user attributes.</p>
     */
    inline AdminUpdateUserAttributesRequest& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The user name of the user for whom you want to update user attributes.</p>
     */
    inline AdminUpdateUserAttributesRequest& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The user name of the user for whom you want to update user attributes.</p>
     */
    inline AdminUpdateUserAttributesRequest& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p>An array of name-value pairs representing user attributes.</p> <p>For custom
     * attributes, you must prepend the <code>custom:</code> prefix to the attribute
     * name.</p> <p>If your user pool requires verification before Amazon Cognito
     * updates an attribute value that you specify in this request, Amazon Cognito
     * doesn’t immediately update the value of that attribute. After your user receives
     * and responds to a verification message to verify the new value, Amazon Cognito
     * updates the attribute value. Your user can sign in and receive messages with the
     * original attribute value until they verify the new value.</p> <p>To update the
     * value of an attribute that requires verification in the same API request,
     * include the <code>email_verified</code> or <code>phone_number_verified</code>
     * attribute, with a value of <code>true</code>. If you set the
     * <code>email_verified</code> or <code>phone_number_verified</code> value for an
     * <code>email</code> or <code>phone_number</code> attribute that requires
     * verification to <code>true</code>, Amazon Cognito doesn’t send a verification
     * message to your user.</p>
     */
    inline const Aws::Vector<AttributeType>& GetUserAttributes() const{ return m_userAttributes; }

    /**
     * <p>An array of name-value pairs representing user attributes.</p> <p>For custom
     * attributes, you must prepend the <code>custom:</code> prefix to the attribute
     * name.</p> <p>If your user pool requires verification before Amazon Cognito
     * updates an attribute value that you specify in this request, Amazon Cognito
     * doesn’t immediately update the value of that attribute. After your user receives
     * and responds to a verification message to verify the new value, Amazon Cognito
     * updates the attribute value. Your user can sign in and receive messages with the
     * original attribute value until they verify the new value.</p> <p>To update the
     * value of an attribute that requires verification in the same API request,
     * include the <code>email_verified</code> or <code>phone_number_verified</code>
     * attribute, with a value of <code>true</code>. If you set the
     * <code>email_verified</code> or <code>phone_number_verified</code> value for an
     * <code>email</code> or <code>phone_number</code> attribute that requires
     * verification to <code>true</code>, Amazon Cognito doesn’t send a verification
     * message to your user.</p>
     */
    inline bool UserAttributesHasBeenSet() const { return m_userAttributesHasBeenSet; }

    /**
     * <p>An array of name-value pairs representing user attributes.</p> <p>For custom
     * attributes, you must prepend the <code>custom:</code> prefix to the attribute
     * name.</p> <p>If your user pool requires verification before Amazon Cognito
     * updates an attribute value that you specify in this request, Amazon Cognito
     * doesn’t immediately update the value of that attribute. After your user receives
     * and responds to a verification message to verify the new value, Amazon Cognito
     * updates the attribute value. Your user can sign in and receive messages with the
     * original attribute value until they verify the new value.</p> <p>To update the
     * value of an attribute that requires verification in the same API request,
     * include the <code>email_verified</code> or <code>phone_number_verified</code>
     * attribute, with a value of <code>true</code>. If you set the
     * <code>email_verified</code> or <code>phone_number_verified</code> value for an
     * <code>email</code> or <code>phone_number</code> attribute that requires
     * verification to <code>true</code>, Amazon Cognito doesn’t send a verification
     * message to your user.</p>
     */
    inline void SetUserAttributes(const Aws::Vector<AttributeType>& value) { m_userAttributesHasBeenSet = true; m_userAttributes = value; }

    /**
     * <p>An array of name-value pairs representing user attributes.</p> <p>For custom
     * attributes, you must prepend the <code>custom:</code> prefix to the attribute
     * name.</p> <p>If your user pool requires verification before Amazon Cognito
     * updates an attribute value that you specify in this request, Amazon Cognito
     * doesn’t immediately update the value of that attribute. After your user receives
     * and responds to a verification message to verify the new value, Amazon Cognito
     * updates the attribute value. Your user can sign in and receive messages with the
     * original attribute value until they verify the new value.</p> <p>To update the
     * value of an attribute that requires verification in the same API request,
     * include the <code>email_verified</code> or <code>phone_number_verified</code>
     * attribute, with a value of <code>true</code>. If you set the
     * <code>email_verified</code> or <code>phone_number_verified</code> value for an
     * <code>email</code> or <code>phone_number</code> attribute that requires
     * verification to <code>true</code>, Amazon Cognito doesn’t send a verification
     * message to your user.</p>
     */
    inline void SetUserAttributes(Aws::Vector<AttributeType>&& value) { m_userAttributesHasBeenSet = true; m_userAttributes = std::move(value); }

    /**
     * <p>An array of name-value pairs representing user attributes.</p> <p>For custom
     * attributes, you must prepend the <code>custom:</code> prefix to the attribute
     * name.</p> <p>If your user pool requires verification before Amazon Cognito
     * updates an attribute value that you specify in this request, Amazon Cognito
     * doesn’t immediately update the value of that attribute. After your user receives
     * and responds to a verification message to verify the new value, Amazon Cognito
     * updates the attribute value. Your user can sign in and receive messages with the
     * original attribute value until they verify the new value.</p> <p>To update the
     * value of an attribute that requires verification in the same API request,
     * include the <code>email_verified</code> or <code>phone_number_verified</code>
     * attribute, with a value of <code>true</code>. If you set the
     * <code>email_verified</code> or <code>phone_number_verified</code> value for an
     * <code>email</code> or <code>phone_number</code> attribute that requires
     * verification to <code>true</code>, Amazon Cognito doesn’t send a verification
     * message to your user.</p>
     */
    inline AdminUpdateUserAttributesRequest& WithUserAttributes(const Aws::Vector<AttributeType>& value) { SetUserAttributes(value); return *this;}

    /**
     * <p>An array of name-value pairs representing user attributes.</p> <p>For custom
     * attributes, you must prepend the <code>custom:</code> prefix to the attribute
     * name.</p> <p>If your user pool requires verification before Amazon Cognito
     * updates an attribute value that you specify in this request, Amazon Cognito
     * doesn’t immediately update the value of that attribute. After your user receives
     * and responds to a verification message to verify the new value, Amazon Cognito
     * updates the attribute value. Your user can sign in and receive messages with the
     * original attribute value until they verify the new value.</p> <p>To update the
     * value of an attribute that requires verification in the same API request,
     * include the <code>email_verified</code> or <code>phone_number_verified</code>
     * attribute, with a value of <code>true</code>. If you set the
     * <code>email_verified</code> or <code>phone_number_verified</code> value for an
     * <code>email</code> or <code>phone_number</code> attribute that requires
     * verification to <code>true</code>, Amazon Cognito doesn’t send a verification
     * message to your user.</p>
     */
    inline AdminUpdateUserAttributesRequest& WithUserAttributes(Aws::Vector<AttributeType>&& value) { SetUserAttributes(std::move(value)); return *this;}

    /**
     * <p>An array of name-value pairs representing user attributes.</p> <p>For custom
     * attributes, you must prepend the <code>custom:</code> prefix to the attribute
     * name.</p> <p>If your user pool requires verification before Amazon Cognito
     * updates an attribute value that you specify in this request, Amazon Cognito
     * doesn’t immediately update the value of that attribute. After your user receives
     * and responds to a verification message to verify the new value, Amazon Cognito
     * updates the attribute value. Your user can sign in and receive messages with the
     * original attribute value until they verify the new value.</p> <p>To update the
     * value of an attribute that requires verification in the same API request,
     * include the <code>email_verified</code> or <code>phone_number_verified</code>
     * attribute, with a value of <code>true</code>. If you set the
     * <code>email_verified</code> or <code>phone_number_verified</code> value for an
     * <code>email</code> or <code>phone_number</code> attribute that requires
     * verification to <code>true</code>, Amazon Cognito doesn’t send a verification
     * message to your user.</p>
     */
    inline AdminUpdateUserAttributesRequest& AddUserAttributes(const AttributeType& value) { m_userAttributesHasBeenSet = true; m_userAttributes.push_back(value); return *this; }

    /**
     * <p>An array of name-value pairs representing user attributes.</p> <p>For custom
     * attributes, you must prepend the <code>custom:</code> prefix to the attribute
     * name.</p> <p>If your user pool requires verification before Amazon Cognito
     * updates an attribute value that you specify in this request, Amazon Cognito
     * doesn’t immediately update the value of that attribute. After your user receives
     * and responds to a verification message to verify the new value, Amazon Cognito
     * updates the attribute value. Your user can sign in and receive messages with the
     * original attribute value until they verify the new value.</p> <p>To update the
     * value of an attribute that requires verification in the same API request,
     * include the <code>email_verified</code> or <code>phone_number_verified</code>
     * attribute, with a value of <code>true</code>. If you set the
     * <code>email_verified</code> or <code>phone_number_verified</code> value for an
     * <code>email</code> or <code>phone_number</code> attribute that requires
     * verification to <code>true</code>, Amazon Cognito doesn’t send a verification
     * message to your user.</p>
     */
    inline AdminUpdateUserAttributesRequest& AddUserAttributes(AttributeType&& value) { m_userAttributesHasBeenSet = true; m_userAttributes.push_back(std::move(value)); return *this; }


    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers.</p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * AdminUpdateUserAttributes API action, Amazon Cognito invokes the function that
     * is assigned to the <i>custom message</i> trigger. When Amazon Cognito invokes
     * this function, it passes a JSON payload, which the function receives as input.
     * This payload contains a <code>clientMetadata</code> attribute, which provides
     * the data that you assigned to the ClientMetadata parameter in your
     * AdminUpdateUserAttributes request. In your function code in Lambda, you can
     * process the <code>clientMetadata</code> value to enhance your workflow for your
     * specific needs.</p> <p>For more information, see <a
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
     * AdminUpdateUserAttributes API action, Amazon Cognito invokes the function that
     * is assigned to the <i>custom message</i> trigger. When Amazon Cognito invokes
     * this function, it passes a JSON payload, which the function receives as input.
     * This payload contains a <code>clientMetadata</code> attribute, which provides
     * the data that you assigned to the ClientMetadata parameter in your
     * AdminUpdateUserAttributes request. In your function code in Lambda, you can
     * process the <code>clientMetadata</code> value to enhance your workflow for your
     * specific needs.</p> <p>For more information, see <a
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
     * AdminUpdateUserAttributes API action, Amazon Cognito invokes the function that
     * is assigned to the <i>custom message</i> trigger. When Amazon Cognito invokes
     * this function, it passes a JSON payload, which the function receives as input.
     * This payload contains a <code>clientMetadata</code> attribute, which provides
     * the data that you assigned to the ClientMetadata parameter in your
     * AdminUpdateUserAttributes request. In your function code in Lambda, you can
     * process the <code>clientMetadata</code> value to enhance your workflow for your
     * specific needs.</p> <p>For more information, see <a
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
     * AdminUpdateUserAttributes API action, Amazon Cognito invokes the function that
     * is assigned to the <i>custom message</i> trigger. When Amazon Cognito invokes
     * this function, it passes a JSON payload, which the function receives as input.
     * This payload contains a <code>clientMetadata</code> attribute, which provides
     * the data that you assigned to the ClientMetadata parameter in your
     * AdminUpdateUserAttributes request. In your function code in Lambda, you can
     * process the <code>clientMetadata</code> value to enhance your workflow for your
     * specific needs.</p> <p>For more information, see <a
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
     * AdminUpdateUserAttributes API action, Amazon Cognito invokes the function that
     * is assigned to the <i>custom message</i> trigger. When Amazon Cognito invokes
     * this function, it passes a JSON payload, which the function receives as input.
     * This payload contains a <code>clientMetadata</code> attribute, which provides
     * the data that you assigned to the ClientMetadata parameter in your
     * AdminUpdateUserAttributes request. In your function code in Lambda, you can
     * process the <code>clientMetadata</code> value to enhance your workflow for your
     * specific needs.</p> <p>For more information, see <a
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
    inline AdminUpdateUserAttributesRequest& WithClientMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetClientMetadata(value); return *this;}

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers.</p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * AdminUpdateUserAttributes API action, Amazon Cognito invokes the function that
     * is assigned to the <i>custom message</i> trigger. When Amazon Cognito invokes
     * this function, it passes a JSON payload, which the function receives as input.
     * This payload contains a <code>clientMetadata</code> attribute, which provides
     * the data that you assigned to the ClientMetadata parameter in your
     * AdminUpdateUserAttributes request. In your function code in Lambda, you can
     * process the <code>clientMetadata</code> value to enhance your workflow for your
     * specific needs.</p> <p>For more information, see <a
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
    inline AdminUpdateUserAttributesRequest& WithClientMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetClientMetadata(std::move(value)); return *this;}

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers.</p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * AdminUpdateUserAttributes API action, Amazon Cognito invokes the function that
     * is assigned to the <i>custom message</i> trigger. When Amazon Cognito invokes
     * this function, it passes a JSON payload, which the function receives as input.
     * This payload contains a <code>clientMetadata</code> attribute, which provides
     * the data that you assigned to the ClientMetadata parameter in your
     * AdminUpdateUserAttributes request. In your function code in Lambda, you can
     * process the <code>clientMetadata</code> value to enhance your workflow for your
     * specific needs.</p> <p>For more information, see <a
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
    inline AdminUpdateUserAttributesRequest& AddClientMetadata(const Aws::String& key, const Aws::String& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, value); return *this; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers.</p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * AdminUpdateUserAttributes API action, Amazon Cognito invokes the function that
     * is assigned to the <i>custom message</i> trigger. When Amazon Cognito invokes
     * this function, it passes a JSON payload, which the function receives as input.
     * This payload contains a <code>clientMetadata</code> attribute, which provides
     * the data that you assigned to the ClientMetadata parameter in your
     * AdminUpdateUserAttributes request. In your function code in Lambda, you can
     * process the <code>clientMetadata</code> value to enhance your workflow for your
     * specific needs.</p> <p>For more information, see <a
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
    inline AdminUpdateUserAttributesRequest& AddClientMetadata(Aws::String&& key, const Aws::String& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers.</p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * AdminUpdateUserAttributes API action, Amazon Cognito invokes the function that
     * is assigned to the <i>custom message</i> trigger. When Amazon Cognito invokes
     * this function, it passes a JSON payload, which the function receives as input.
     * This payload contains a <code>clientMetadata</code> attribute, which provides
     * the data that you assigned to the ClientMetadata parameter in your
     * AdminUpdateUserAttributes request. In your function code in Lambda, you can
     * process the <code>clientMetadata</code> value to enhance your workflow for your
     * specific needs.</p> <p>For more information, see <a
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
    inline AdminUpdateUserAttributesRequest& AddClientMetadata(const Aws::String& key, Aws::String&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers.</p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * AdminUpdateUserAttributes API action, Amazon Cognito invokes the function that
     * is assigned to the <i>custom message</i> trigger. When Amazon Cognito invokes
     * this function, it passes a JSON payload, which the function receives as input.
     * This payload contains a <code>clientMetadata</code> attribute, which provides
     * the data that you assigned to the ClientMetadata parameter in your
     * AdminUpdateUserAttributes request. In your function code in Lambda, you can
     * process the <code>clientMetadata</code> value to enhance your workflow for your
     * specific needs.</p> <p>For more information, see <a
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
    inline AdminUpdateUserAttributesRequest& AddClientMetadata(Aws::String&& key, Aws::String&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers.</p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * AdminUpdateUserAttributes API action, Amazon Cognito invokes the function that
     * is assigned to the <i>custom message</i> trigger. When Amazon Cognito invokes
     * this function, it passes a JSON payload, which the function receives as input.
     * This payload contains a <code>clientMetadata</code> attribute, which provides
     * the data that you assigned to the ClientMetadata parameter in your
     * AdminUpdateUserAttributes request. In your function code in Lambda, you can
     * process the <code>clientMetadata</code> value to enhance your workflow for your
     * specific needs.</p> <p>For more information, see <a
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
    inline AdminUpdateUserAttributesRequest& AddClientMetadata(const char* key, Aws::String&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers.</p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * AdminUpdateUserAttributes API action, Amazon Cognito invokes the function that
     * is assigned to the <i>custom message</i> trigger. When Amazon Cognito invokes
     * this function, it passes a JSON payload, which the function receives as input.
     * This payload contains a <code>clientMetadata</code> attribute, which provides
     * the data that you assigned to the ClientMetadata parameter in your
     * AdminUpdateUserAttributes request. In your function code in Lambda, you can
     * process the <code>clientMetadata</code> value to enhance your workflow for your
     * specific needs.</p> <p>For more information, see <a
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
    inline AdminUpdateUserAttributesRequest& AddClientMetadata(Aws::String&& key, const char* value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers.</p> <p>You create custom workflows by
     * assigning Lambda functions to user pool triggers. When you use the
     * AdminUpdateUserAttributes API action, Amazon Cognito invokes the function that
     * is assigned to the <i>custom message</i> trigger. When Amazon Cognito invokes
     * this function, it passes a JSON payload, which the function receives as input.
     * This payload contains a <code>clientMetadata</code> attribute, which provides
     * the data that you assigned to the ClientMetadata parameter in your
     * AdminUpdateUserAttributes request. In your function code in Lambda, you can
     * process the <code>clientMetadata</code> value to enhance your workflow for your
     * specific needs.</p> <p>For more information, see <a
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
    inline AdminUpdateUserAttributesRequest& AddClientMetadata(const char* key, const char* value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, value); return *this; }

  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::Vector<AttributeType> m_userAttributes;
    bool m_userAttributesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_clientMetadata;
    bool m_clientMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
