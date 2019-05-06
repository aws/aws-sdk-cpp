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
#include <aws/cognito-idp/model/UserPoolPolicyType.h>
#include <aws/cognito-idp/model/LambdaConfigType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cognito-idp/model/VerificationMessageTemplateType.h>
#include <aws/cognito-idp/model/UserPoolMfaType.h>
#include <aws/cognito-idp/model/DeviceConfigurationType.h>
#include <aws/cognito-idp/model/EmailConfigurationType.h>
#include <aws/cognito-idp/model/SmsConfigurationType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/cognito-idp/model/AdminCreateUserConfigType.h>
#include <aws/cognito-idp/model/UserPoolAddOnsType.h>
#include <aws/cognito-idp/model/VerifiedAttributeType.h>
#include <aws/cognito-idp/model/AliasAttributeType.h>
#include <aws/cognito-idp/model/UsernameAttributeType.h>
#include <aws/cognito-idp/model/SchemaAttributeType.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Represents the request to create a user pool.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CreateUserPoolRequest">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API CreateUserPoolRequest : public CognitoIdentityProviderRequest
  {
  public:
    CreateUserPoolRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUserPool"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A string used to name the user pool.</p>
     */
    inline const Aws::String& GetPoolName() const{ return m_poolName; }

    /**
     * <p>A string used to name the user pool.</p>
     */
    inline bool PoolNameHasBeenSet() const { return m_poolNameHasBeenSet; }

    /**
     * <p>A string used to name the user pool.</p>
     */
    inline void SetPoolName(const Aws::String& value) { m_poolNameHasBeenSet = true; m_poolName = value; }

    /**
     * <p>A string used to name the user pool.</p>
     */
    inline void SetPoolName(Aws::String&& value) { m_poolNameHasBeenSet = true; m_poolName = std::move(value); }

    /**
     * <p>A string used to name the user pool.</p>
     */
    inline void SetPoolName(const char* value) { m_poolNameHasBeenSet = true; m_poolName.assign(value); }

    /**
     * <p>A string used to name the user pool.</p>
     */
    inline CreateUserPoolRequest& WithPoolName(const Aws::String& value) { SetPoolName(value); return *this;}

    /**
     * <p>A string used to name the user pool.</p>
     */
    inline CreateUserPoolRequest& WithPoolName(Aws::String&& value) { SetPoolName(std::move(value)); return *this;}

    /**
     * <p>A string used to name the user pool.</p>
     */
    inline CreateUserPoolRequest& WithPoolName(const char* value) { SetPoolName(value); return *this;}


    /**
     * <p>The policies associated with the new user pool.</p>
     */
    inline const UserPoolPolicyType& GetPolicies() const{ return m_policies; }

    /**
     * <p>The policies associated with the new user pool.</p>
     */
    inline bool PoliciesHasBeenSet() const { return m_policiesHasBeenSet; }

    /**
     * <p>The policies associated with the new user pool.</p>
     */
    inline void SetPolicies(const UserPoolPolicyType& value) { m_policiesHasBeenSet = true; m_policies = value; }

    /**
     * <p>The policies associated with the new user pool.</p>
     */
    inline void SetPolicies(UserPoolPolicyType&& value) { m_policiesHasBeenSet = true; m_policies = std::move(value); }

    /**
     * <p>The policies associated with the new user pool.</p>
     */
    inline CreateUserPoolRequest& WithPolicies(const UserPoolPolicyType& value) { SetPolicies(value); return *this;}

    /**
     * <p>The policies associated with the new user pool.</p>
     */
    inline CreateUserPoolRequest& WithPolicies(UserPoolPolicyType&& value) { SetPolicies(std::move(value)); return *this;}


    /**
     * <p>The Lambda trigger configuration information for the new user pool.</p>
     * <note> <p>In a push model, event sources (such as Amazon S3 and custom
     * applications) need permission to invoke a function. So you will need to make an
     * extra call to add permission for these event sources to invoke your Lambda
     * function.</p> <p/> <p>For more information on using the Lambda API to add
     * permission, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/API_AddPermission.html">
     * AddPermission </a>. </p> <p>For adding permission using the AWS CLI, see <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/lambda/add-permission.html">
     * add-permission </a>.</p> </note>
     */
    inline const LambdaConfigType& GetLambdaConfig() const{ return m_lambdaConfig; }

    /**
     * <p>The Lambda trigger configuration information for the new user pool.</p>
     * <note> <p>In a push model, event sources (such as Amazon S3 and custom
     * applications) need permission to invoke a function. So you will need to make an
     * extra call to add permission for these event sources to invoke your Lambda
     * function.</p> <p/> <p>For more information on using the Lambda API to add
     * permission, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/API_AddPermission.html">
     * AddPermission </a>. </p> <p>For adding permission using the AWS CLI, see <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/lambda/add-permission.html">
     * add-permission </a>.</p> </note>
     */
    inline bool LambdaConfigHasBeenSet() const { return m_lambdaConfigHasBeenSet; }

    /**
     * <p>The Lambda trigger configuration information for the new user pool.</p>
     * <note> <p>In a push model, event sources (such as Amazon S3 and custom
     * applications) need permission to invoke a function. So you will need to make an
     * extra call to add permission for these event sources to invoke your Lambda
     * function.</p> <p/> <p>For more information on using the Lambda API to add
     * permission, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/API_AddPermission.html">
     * AddPermission </a>. </p> <p>For adding permission using the AWS CLI, see <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/lambda/add-permission.html">
     * add-permission </a>.</p> </note>
     */
    inline void SetLambdaConfig(const LambdaConfigType& value) { m_lambdaConfigHasBeenSet = true; m_lambdaConfig = value; }

    /**
     * <p>The Lambda trigger configuration information for the new user pool.</p>
     * <note> <p>In a push model, event sources (such as Amazon S3 and custom
     * applications) need permission to invoke a function. So you will need to make an
     * extra call to add permission for these event sources to invoke your Lambda
     * function.</p> <p/> <p>For more information on using the Lambda API to add
     * permission, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/API_AddPermission.html">
     * AddPermission </a>. </p> <p>For adding permission using the AWS CLI, see <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/lambda/add-permission.html">
     * add-permission </a>.</p> </note>
     */
    inline void SetLambdaConfig(LambdaConfigType&& value) { m_lambdaConfigHasBeenSet = true; m_lambdaConfig = std::move(value); }

    /**
     * <p>The Lambda trigger configuration information for the new user pool.</p>
     * <note> <p>In a push model, event sources (such as Amazon S3 and custom
     * applications) need permission to invoke a function. So you will need to make an
     * extra call to add permission for these event sources to invoke your Lambda
     * function.</p> <p/> <p>For more information on using the Lambda API to add
     * permission, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/API_AddPermission.html">
     * AddPermission </a>. </p> <p>For adding permission using the AWS CLI, see <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/lambda/add-permission.html">
     * add-permission </a>.</p> </note>
     */
    inline CreateUserPoolRequest& WithLambdaConfig(const LambdaConfigType& value) { SetLambdaConfig(value); return *this;}

    /**
     * <p>The Lambda trigger configuration information for the new user pool.</p>
     * <note> <p>In a push model, event sources (such as Amazon S3 and custom
     * applications) need permission to invoke a function. So you will need to make an
     * extra call to add permission for these event sources to invoke your Lambda
     * function.</p> <p/> <p>For more information on using the Lambda API to add
     * permission, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/API_AddPermission.html">
     * AddPermission </a>. </p> <p>For adding permission using the AWS CLI, see <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/lambda/add-permission.html">
     * add-permission </a>.</p> </note>
     */
    inline CreateUserPoolRequest& WithLambdaConfig(LambdaConfigType&& value) { SetLambdaConfig(std::move(value)); return *this;}


    /**
     * <p>The attributes to be auto-verified. Possible values: <b>email</b>,
     * <b>phone_number</b>.</p>
     */
    inline const Aws::Vector<VerifiedAttributeType>& GetAutoVerifiedAttributes() const{ return m_autoVerifiedAttributes; }

    /**
     * <p>The attributes to be auto-verified. Possible values: <b>email</b>,
     * <b>phone_number</b>.</p>
     */
    inline bool AutoVerifiedAttributesHasBeenSet() const { return m_autoVerifiedAttributesHasBeenSet; }

    /**
     * <p>The attributes to be auto-verified. Possible values: <b>email</b>,
     * <b>phone_number</b>.</p>
     */
    inline void SetAutoVerifiedAttributes(const Aws::Vector<VerifiedAttributeType>& value) { m_autoVerifiedAttributesHasBeenSet = true; m_autoVerifiedAttributes = value; }

    /**
     * <p>The attributes to be auto-verified. Possible values: <b>email</b>,
     * <b>phone_number</b>.</p>
     */
    inline void SetAutoVerifiedAttributes(Aws::Vector<VerifiedAttributeType>&& value) { m_autoVerifiedAttributesHasBeenSet = true; m_autoVerifiedAttributes = std::move(value); }

    /**
     * <p>The attributes to be auto-verified. Possible values: <b>email</b>,
     * <b>phone_number</b>.</p>
     */
    inline CreateUserPoolRequest& WithAutoVerifiedAttributes(const Aws::Vector<VerifiedAttributeType>& value) { SetAutoVerifiedAttributes(value); return *this;}

    /**
     * <p>The attributes to be auto-verified. Possible values: <b>email</b>,
     * <b>phone_number</b>.</p>
     */
    inline CreateUserPoolRequest& WithAutoVerifiedAttributes(Aws::Vector<VerifiedAttributeType>&& value) { SetAutoVerifiedAttributes(std::move(value)); return *this;}

    /**
     * <p>The attributes to be auto-verified. Possible values: <b>email</b>,
     * <b>phone_number</b>.</p>
     */
    inline CreateUserPoolRequest& AddAutoVerifiedAttributes(const VerifiedAttributeType& value) { m_autoVerifiedAttributesHasBeenSet = true; m_autoVerifiedAttributes.push_back(value); return *this; }

    /**
     * <p>The attributes to be auto-verified. Possible values: <b>email</b>,
     * <b>phone_number</b>.</p>
     */
    inline CreateUserPoolRequest& AddAutoVerifiedAttributes(VerifiedAttributeType&& value) { m_autoVerifiedAttributesHasBeenSet = true; m_autoVerifiedAttributes.push_back(std::move(value)); return *this; }


    /**
     * <p>Attributes supported as an alias for this user pool. Possible values:
     * <b>phone_number</b>, <b>email</b>, or <b>preferred_username</b>.</p>
     */
    inline const Aws::Vector<AliasAttributeType>& GetAliasAttributes() const{ return m_aliasAttributes; }

    /**
     * <p>Attributes supported as an alias for this user pool. Possible values:
     * <b>phone_number</b>, <b>email</b>, or <b>preferred_username</b>.</p>
     */
    inline bool AliasAttributesHasBeenSet() const { return m_aliasAttributesHasBeenSet; }

    /**
     * <p>Attributes supported as an alias for this user pool. Possible values:
     * <b>phone_number</b>, <b>email</b>, or <b>preferred_username</b>.</p>
     */
    inline void SetAliasAttributes(const Aws::Vector<AliasAttributeType>& value) { m_aliasAttributesHasBeenSet = true; m_aliasAttributes = value; }

    /**
     * <p>Attributes supported as an alias for this user pool. Possible values:
     * <b>phone_number</b>, <b>email</b>, or <b>preferred_username</b>.</p>
     */
    inline void SetAliasAttributes(Aws::Vector<AliasAttributeType>&& value) { m_aliasAttributesHasBeenSet = true; m_aliasAttributes = std::move(value); }

    /**
     * <p>Attributes supported as an alias for this user pool. Possible values:
     * <b>phone_number</b>, <b>email</b>, or <b>preferred_username</b>.</p>
     */
    inline CreateUserPoolRequest& WithAliasAttributes(const Aws::Vector<AliasAttributeType>& value) { SetAliasAttributes(value); return *this;}

    /**
     * <p>Attributes supported as an alias for this user pool. Possible values:
     * <b>phone_number</b>, <b>email</b>, or <b>preferred_username</b>.</p>
     */
    inline CreateUserPoolRequest& WithAliasAttributes(Aws::Vector<AliasAttributeType>&& value) { SetAliasAttributes(std::move(value)); return *this;}

    /**
     * <p>Attributes supported as an alias for this user pool. Possible values:
     * <b>phone_number</b>, <b>email</b>, or <b>preferred_username</b>.</p>
     */
    inline CreateUserPoolRequest& AddAliasAttributes(const AliasAttributeType& value) { m_aliasAttributesHasBeenSet = true; m_aliasAttributes.push_back(value); return *this; }

    /**
     * <p>Attributes supported as an alias for this user pool. Possible values:
     * <b>phone_number</b>, <b>email</b>, or <b>preferred_username</b>.</p>
     */
    inline CreateUserPoolRequest& AddAliasAttributes(AliasAttributeType&& value) { m_aliasAttributesHasBeenSet = true; m_aliasAttributes.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies whether email addresses or phone numbers can be specified as
     * usernames when a user signs up.</p>
     */
    inline const Aws::Vector<UsernameAttributeType>& GetUsernameAttributes() const{ return m_usernameAttributes; }

    /**
     * <p>Specifies whether email addresses or phone numbers can be specified as
     * usernames when a user signs up.</p>
     */
    inline bool UsernameAttributesHasBeenSet() const { return m_usernameAttributesHasBeenSet; }

    /**
     * <p>Specifies whether email addresses or phone numbers can be specified as
     * usernames when a user signs up.</p>
     */
    inline void SetUsernameAttributes(const Aws::Vector<UsernameAttributeType>& value) { m_usernameAttributesHasBeenSet = true; m_usernameAttributes = value; }

    /**
     * <p>Specifies whether email addresses or phone numbers can be specified as
     * usernames when a user signs up.</p>
     */
    inline void SetUsernameAttributes(Aws::Vector<UsernameAttributeType>&& value) { m_usernameAttributesHasBeenSet = true; m_usernameAttributes = std::move(value); }

    /**
     * <p>Specifies whether email addresses or phone numbers can be specified as
     * usernames when a user signs up.</p>
     */
    inline CreateUserPoolRequest& WithUsernameAttributes(const Aws::Vector<UsernameAttributeType>& value) { SetUsernameAttributes(value); return *this;}

    /**
     * <p>Specifies whether email addresses or phone numbers can be specified as
     * usernames when a user signs up.</p>
     */
    inline CreateUserPoolRequest& WithUsernameAttributes(Aws::Vector<UsernameAttributeType>&& value) { SetUsernameAttributes(std::move(value)); return *this;}

    /**
     * <p>Specifies whether email addresses or phone numbers can be specified as
     * usernames when a user signs up.</p>
     */
    inline CreateUserPoolRequest& AddUsernameAttributes(const UsernameAttributeType& value) { m_usernameAttributesHasBeenSet = true; m_usernameAttributes.push_back(value); return *this; }

    /**
     * <p>Specifies whether email addresses or phone numbers can be specified as
     * usernames when a user signs up.</p>
     */
    inline CreateUserPoolRequest& AddUsernameAttributes(UsernameAttributeType&& value) { m_usernameAttributesHasBeenSet = true; m_usernameAttributes.push_back(std::move(value)); return *this; }


    /**
     * <p>A string representing the SMS verification message.</p>
     */
    inline const Aws::String& GetSmsVerificationMessage() const{ return m_smsVerificationMessage; }

    /**
     * <p>A string representing the SMS verification message.</p>
     */
    inline bool SmsVerificationMessageHasBeenSet() const { return m_smsVerificationMessageHasBeenSet; }

    /**
     * <p>A string representing the SMS verification message.</p>
     */
    inline void SetSmsVerificationMessage(const Aws::String& value) { m_smsVerificationMessageHasBeenSet = true; m_smsVerificationMessage = value; }

    /**
     * <p>A string representing the SMS verification message.</p>
     */
    inline void SetSmsVerificationMessage(Aws::String&& value) { m_smsVerificationMessageHasBeenSet = true; m_smsVerificationMessage = std::move(value); }

    /**
     * <p>A string representing the SMS verification message.</p>
     */
    inline void SetSmsVerificationMessage(const char* value) { m_smsVerificationMessageHasBeenSet = true; m_smsVerificationMessage.assign(value); }

    /**
     * <p>A string representing the SMS verification message.</p>
     */
    inline CreateUserPoolRequest& WithSmsVerificationMessage(const Aws::String& value) { SetSmsVerificationMessage(value); return *this;}

    /**
     * <p>A string representing the SMS verification message.</p>
     */
    inline CreateUserPoolRequest& WithSmsVerificationMessage(Aws::String&& value) { SetSmsVerificationMessage(std::move(value)); return *this;}

    /**
     * <p>A string representing the SMS verification message.</p>
     */
    inline CreateUserPoolRequest& WithSmsVerificationMessage(const char* value) { SetSmsVerificationMessage(value); return *this;}


    /**
     * <p>A string representing the email verification message.</p>
     */
    inline const Aws::String& GetEmailVerificationMessage() const{ return m_emailVerificationMessage; }

    /**
     * <p>A string representing the email verification message.</p>
     */
    inline bool EmailVerificationMessageHasBeenSet() const { return m_emailVerificationMessageHasBeenSet; }

    /**
     * <p>A string representing the email verification message.</p>
     */
    inline void SetEmailVerificationMessage(const Aws::String& value) { m_emailVerificationMessageHasBeenSet = true; m_emailVerificationMessage = value; }

    /**
     * <p>A string representing the email verification message.</p>
     */
    inline void SetEmailVerificationMessage(Aws::String&& value) { m_emailVerificationMessageHasBeenSet = true; m_emailVerificationMessage = std::move(value); }

    /**
     * <p>A string representing the email verification message.</p>
     */
    inline void SetEmailVerificationMessage(const char* value) { m_emailVerificationMessageHasBeenSet = true; m_emailVerificationMessage.assign(value); }

    /**
     * <p>A string representing the email verification message.</p>
     */
    inline CreateUserPoolRequest& WithEmailVerificationMessage(const Aws::String& value) { SetEmailVerificationMessage(value); return *this;}

    /**
     * <p>A string representing the email verification message.</p>
     */
    inline CreateUserPoolRequest& WithEmailVerificationMessage(Aws::String&& value) { SetEmailVerificationMessage(std::move(value)); return *this;}

    /**
     * <p>A string representing the email verification message.</p>
     */
    inline CreateUserPoolRequest& WithEmailVerificationMessage(const char* value) { SetEmailVerificationMessage(value); return *this;}


    /**
     * <p>A string representing the email verification subject.</p>
     */
    inline const Aws::String& GetEmailVerificationSubject() const{ return m_emailVerificationSubject; }

    /**
     * <p>A string representing the email verification subject.</p>
     */
    inline bool EmailVerificationSubjectHasBeenSet() const { return m_emailVerificationSubjectHasBeenSet; }

    /**
     * <p>A string representing the email verification subject.</p>
     */
    inline void SetEmailVerificationSubject(const Aws::String& value) { m_emailVerificationSubjectHasBeenSet = true; m_emailVerificationSubject = value; }

    /**
     * <p>A string representing the email verification subject.</p>
     */
    inline void SetEmailVerificationSubject(Aws::String&& value) { m_emailVerificationSubjectHasBeenSet = true; m_emailVerificationSubject = std::move(value); }

    /**
     * <p>A string representing the email verification subject.</p>
     */
    inline void SetEmailVerificationSubject(const char* value) { m_emailVerificationSubjectHasBeenSet = true; m_emailVerificationSubject.assign(value); }

    /**
     * <p>A string representing the email verification subject.</p>
     */
    inline CreateUserPoolRequest& WithEmailVerificationSubject(const Aws::String& value) { SetEmailVerificationSubject(value); return *this;}

    /**
     * <p>A string representing the email verification subject.</p>
     */
    inline CreateUserPoolRequest& WithEmailVerificationSubject(Aws::String&& value) { SetEmailVerificationSubject(std::move(value)); return *this;}

    /**
     * <p>A string representing the email verification subject.</p>
     */
    inline CreateUserPoolRequest& WithEmailVerificationSubject(const char* value) { SetEmailVerificationSubject(value); return *this;}


    /**
     * <p>The template for the verification message that the user sees when the app
     * requests permission to access the user's information.</p>
     */
    inline const VerificationMessageTemplateType& GetVerificationMessageTemplate() const{ return m_verificationMessageTemplate; }

    /**
     * <p>The template for the verification message that the user sees when the app
     * requests permission to access the user's information.</p>
     */
    inline bool VerificationMessageTemplateHasBeenSet() const { return m_verificationMessageTemplateHasBeenSet; }

    /**
     * <p>The template for the verification message that the user sees when the app
     * requests permission to access the user's information.</p>
     */
    inline void SetVerificationMessageTemplate(const VerificationMessageTemplateType& value) { m_verificationMessageTemplateHasBeenSet = true; m_verificationMessageTemplate = value; }

    /**
     * <p>The template for the verification message that the user sees when the app
     * requests permission to access the user's information.</p>
     */
    inline void SetVerificationMessageTemplate(VerificationMessageTemplateType&& value) { m_verificationMessageTemplateHasBeenSet = true; m_verificationMessageTemplate = std::move(value); }

    /**
     * <p>The template for the verification message that the user sees when the app
     * requests permission to access the user's information.</p>
     */
    inline CreateUserPoolRequest& WithVerificationMessageTemplate(const VerificationMessageTemplateType& value) { SetVerificationMessageTemplate(value); return *this;}

    /**
     * <p>The template for the verification message that the user sees when the app
     * requests permission to access the user's information.</p>
     */
    inline CreateUserPoolRequest& WithVerificationMessageTemplate(VerificationMessageTemplateType&& value) { SetVerificationMessageTemplate(std::move(value)); return *this;}


    /**
     * <p>A string representing the SMS authentication message.</p>
     */
    inline const Aws::String& GetSmsAuthenticationMessage() const{ return m_smsAuthenticationMessage; }

    /**
     * <p>A string representing the SMS authentication message.</p>
     */
    inline bool SmsAuthenticationMessageHasBeenSet() const { return m_smsAuthenticationMessageHasBeenSet; }

    /**
     * <p>A string representing the SMS authentication message.</p>
     */
    inline void SetSmsAuthenticationMessage(const Aws::String& value) { m_smsAuthenticationMessageHasBeenSet = true; m_smsAuthenticationMessage = value; }

    /**
     * <p>A string representing the SMS authentication message.</p>
     */
    inline void SetSmsAuthenticationMessage(Aws::String&& value) { m_smsAuthenticationMessageHasBeenSet = true; m_smsAuthenticationMessage = std::move(value); }

    /**
     * <p>A string representing the SMS authentication message.</p>
     */
    inline void SetSmsAuthenticationMessage(const char* value) { m_smsAuthenticationMessageHasBeenSet = true; m_smsAuthenticationMessage.assign(value); }

    /**
     * <p>A string representing the SMS authentication message.</p>
     */
    inline CreateUserPoolRequest& WithSmsAuthenticationMessage(const Aws::String& value) { SetSmsAuthenticationMessage(value); return *this;}

    /**
     * <p>A string representing the SMS authentication message.</p>
     */
    inline CreateUserPoolRequest& WithSmsAuthenticationMessage(Aws::String&& value) { SetSmsAuthenticationMessage(std::move(value)); return *this;}

    /**
     * <p>A string representing the SMS authentication message.</p>
     */
    inline CreateUserPoolRequest& WithSmsAuthenticationMessage(const char* value) { SetSmsAuthenticationMessage(value); return *this;}


    /**
     * <p>Specifies MFA configuration details.</p>
     */
    inline const UserPoolMfaType& GetMfaConfiguration() const{ return m_mfaConfiguration; }

    /**
     * <p>Specifies MFA configuration details.</p>
     */
    inline bool MfaConfigurationHasBeenSet() const { return m_mfaConfigurationHasBeenSet; }

    /**
     * <p>Specifies MFA configuration details.</p>
     */
    inline void SetMfaConfiguration(const UserPoolMfaType& value) { m_mfaConfigurationHasBeenSet = true; m_mfaConfiguration = value; }

    /**
     * <p>Specifies MFA configuration details.</p>
     */
    inline void SetMfaConfiguration(UserPoolMfaType&& value) { m_mfaConfigurationHasBeenSet = true; m_mfaConfiguration = std::move(value); }

    /**
     * <p>Specifies MFA configuration details.</p>
     */
    inline CreateUserPoolRequest& WithMfaConfiguration(const UserPoolMfaType& value) { SetMfaConfiguration(value); return *this;}

    /**
     * <p>Specifies MFA configuration details.</p>
     */
    inline CreateUserPoolRequest& WithMfaConfiguration(UserPoolMfaType&& value) { SetMfaConfiguration(std::move(value)); return *this;}


    /**
     * <p>The device configuration.</p>
     */
    inline const DeviceConfigurationType& GetDeviceConfiguration() const{ return m_deviceConfiguration; }

    /**
     * <p>The device configuration.</p>
     */
    inline bool DeviceConfigurationHasBeenSet() const { return m_deviceConfigurationHasBeenSet; }

    /**
     * <p>The device configuration.</p>
     */
    inline void SetDeviceConfiguration(const DeviceConfigurationType& value) { m_deviceConfigurationHasBeenSet = true; m_deviceConfiguration = value; }

    /**
     * <p>The device configuration.</p>
     */
    inline void SetDeviceConfiguration(DeviceConfigurationType&& value) { m_deviceConfigurationHasBeenSet = true; m_deviceConfiguration = std::move(value); }

    /**
     * <p>The device configuration.</p>
     */
    inline CreateUserPoolRequest& WithDeviceConfiguration(const DeviceConfigurationType& value) { SetDeviceConfiguration(value); return *this;}

    /**
     * <p>The device configuration.</p>
     */
    inline CreateUserPoolRequest& WithDeviceConfiguration(DeviceConfigurationType&& value) { SetDeviceConfiguration(std::move(value)); return *this;}


    /**
     * <p>The email configuration.</p>
     */
    inline const EmailConfigurationType& GetEmailConfiguration() const{ return m_emailConfiguration; }

    /**
     * <p>The email configuration.</p>
     */
    inline bool EmailConfigurationHasBeenSet() const { return m_emailConfigurationHasBeenSet; }

    /**
     * <p>The email configuration.</p>
     */
    inline void SetEmailConfiguration(const EmailConfigurationType& value) { m_emailConfigurationHasBeenSet = true; m_emailConfiguration = value; }

    /**
     * <p>The email configuration.</p>
     */
    inline void SetEmailConfiguration(EmailConfigurationType&& value) { m_emailConfigurationHasBeenSet = true; m_emailConfiguration = std::move(value); }

    /**
     * <p>The email configuration.</p>
     */
    inline CreateUserPoolRequest& WithEmailConfiguration(const EmailConfigurationType& value) { SetEmailConfiguration(value); return *this;}

    /**
     * <p>The email configuration.</p>
     */
    inline CreateUserPoolRequest& WithEmailConfiguration(EmailConfigurationType&& value) { SetEmailConfiguration(std::move(value)); return *this;}


    /**
     * <p>The SMS configuration.</p>
     */
    inline const SmsConfigurationType& GetSmsConfiguration() const{ return m_smsConfiguration; }

    /**
     * <p>The SMS configuration.</p>
     */
    inline bool SmsConfigurationHasBeenSet() const { return m_smsConfigurationHasBeenSet; }

    /**
     * <p>The SMS configuration.</p>
     */
    inline void SetSmsConfiguration(const SmsConfigurationType& value) { m_smsConfigurationHasBeenSet = true; m_smsConfiguration = value; }

    /**
     * <p>The SMS configuration.</p>
     */
    inline void SetSmsConfiguration(SmsConfigurationType&& value) { m_smsConfigurationHasBeenSet = true; m_smsConfiguration = std::move(value); }

    /**
     * <p>The SMS configuration.</p>
     */
    inline CreateUserPoolRequest& WithSmsConfiguration(const SmsConfigurationType& value) { SetSmsConfiguration(value); return *this;}

    /**
     * <p>The SMS configuration.</p>
     */
    inline CreateUserPoolRequest& WithSmsConfiguration(SmsConfigurationType&& value) { SetSmsConfiguration(std::move(value)); return *this;}


    /**
     * <p>The tag keys and values to assign to the user pool. A tag is a label that you
     * can use to categorize and manage user pools in different ways, such as by
     * purpose, owner, environment, or other criteria.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetUserPoolTags() const{ return m_userPoolTags; }

    /**
     * <p>The tag keys and values to assign to the user pool. A tag is a label that you
     * can use to categorize and manage user pools in different ways, such as by
     * purpose, owner, environment, or other criteria.</p>
     */
    inline bool UserPoolTagsHasBeenSet() const { return m_userPoolTagsHasBeenSet; }

    /**
     * <p>The tag keys and values to assign to the user pool. A tag is a label that you
     * can use to categorize and manage user pools in different ways, such as by
     * purpose, owner, environment, or other criteria.</p>
     */
    inline void SetUserPoolTags(const Aws::Map<Aws::String, Aws::String>& value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags = value; }

    /**
     * <p>The tag keys and values to assign to the user pool. A tag is a label that you
     * can use to categorize and manage user pools in different ways, such as by
     * purpose, owner, environment, or other criteria.</p>
     */
    inline void SetUserPoolTags(Aws::Map<Aws::String, Aws::String>&& value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags = std::move(value); }

    /**
     * <p>The tag keys and values to assign to the user pool. A tag is a label that you
     * can use to categorize and manage user pools in different ways, such as by
     * purpose, owner, environment, or other criteria.</p>
     */
    inline CreateUserPoolRequest& WithUserPoolTags(const Aws::Map<Aws::String, Aws::String>& value) { SetUserPoolTags(value); return *this;}

    /**
     * <p>The tag keys and values to assign to the user pool. A tag is a label that you
     * can use to categorize and manage user pools in different ways, such as by
     * purpose, owner, environment, or other criteria.</p>
     */
    inline CreateUserPoolRequest& WithUserPoolTags(Aws::Map<Aws::String, Aws::String>&& value) { SetUserPoolTags(std::move(value)); return *this;}

    /**
     * <p>The tag keys and values to assign to the user pool. A tag is a label that you
     * can use to categorize and manage user pools in different ways, such as by
     * purpose, owner, environment, or other criteria.</p>
     */
    inline CreateUserPoolRequest& AddUserPoolTags(const Aws::String& key, const Aws::String& value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags.emplace(key, value); return *this; }

    /**
     * <p>The tag keys and values to assign to the user pool. A tag is a label that you
     * can use to categorize and manage user pools in different ways, such as by
     * purpose, owner, environment, or other criteria.</p>
     */
    inline CreateUserPoolRequest& AddUserPoolTags(Aws::String&& key, const Aws::String& value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tag keys and values to assign to the user pool. A tag is a label that you
     * can use to categorize and manage user pools in different ways, such as by
     * purpose, owner, environment, or other criteria.</p>
     */
    inline CreateUserPoolRequest& AddUserPoolTags(const Aws::String& key, Aws::String&& value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tag keys and values to assign to the user pool. A tag is a label that you
     * can use to categorize and manage user pools in different ways, such as by
     * purpose, owner, environment, or other criteria.</p>
     */
    inline CreateUserPoolRequest& AddUserPoolTags(Aws::String&& key, Aws::String&& value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tag keys and values to assign to the user pool. A tag is a label that you
     * can use to categorize and manage user pools in different ways, such as by
     * purpose, owner, environment, or other criteria.</p>
     */
    inline CreateUserPoolRequest& AddUserPoolTags(const char* key, Aws::String&& value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tag keys and values to assign to the user pool. A tag is a label that you
     * can use to categorize and manage user pools in different ways, such as by
     * purpose, owner, environment, or other criteria.</p>
     */
    inline CreateUserPoolRequest& AddUserPoolTags(Aws::String&& key, const char* value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tag keys and values to assign to the user pool. A tag is a label that you
     * can use to categorize and manage user pools in different ways, such as by
     * purpose, owner, environment, or other criteria.</p>
     */
    inline CreateUserPoolRequest& AddUserPoolTags(const char* key, const char* value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags.emplace(key, value); return *this; }


    /**
     * <p>The configuration for <code>AdminCreateUser</code> requests.</p>
     */
    inline const AdminCreateUserConfigType& GetAdminCreateUserConfig() const{ return m_adminCreateUserConfig; }

    /**
     * <p>The configuration for <code>AdminCreateUser</code> requests.</p>
     */
    inline bool AdminCreateUserConfigHasBeenSet() const { return m_adminCreateUserConfigHasBeenSet; }

    /**
     * <p>The configuration for <code>AdminCreateUser</code> requests.</p>
     */
    inline void SetAdminCreateUserConfig(const AdminCreateUserConfigType& value) { m_adminCreateUserConfigHasBeenSet = true; m_adminCreateUserConfig = value; }

    /**
     * <p>The configuration for <code>AdminCreateUser</code> requests.</p>
     */
    inline void SetAdminCreateUserConfig(AdminCreateUserConfigType&& value) { m_adminCreateUserConfigHasBeenSet = true; m_adminCreateUserConfig = std::move(value); }

    /**
     * <p>The configuration for <code>AdminCreateUser</code> requests.</p>
     */
    inline CreateUserPoolRequest& WithAdminCreateUserConfig(const AdminCreateUserConfigType& value) { SetAdminCreateUserConfig(value); return *this;}

    /**
     * <p>The configuration for <code>AdminCreateUser</code> requests.</p>
     */
    inline CreateUserPoolRequest& WithAdminCreateUserConfig(AdminCreateUserConfigType&& value) { SetAdminCreateUserConfig(std::move(value)); return *this;}


    /**
     * <p>An array of schema attributes for the new user pool. These attributes can be
     * standard or custom attributes.</p>
     */
    inline const Aws::Vector<SchemaAttributeType>& GetSchema() const{ return m_schema; }

    /**
     * <p>An array of schema attributes for the new user pool. These attributes can be
     * standard or custom attributes.</p>
     */
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }

    /**
     * <p>An array of schema attributes for the new user pool. These attributes can be
     * standard or custom attributes.</p>
     */
    inline void SetSchema(const Aws::Vector<SchemaAttributeType>& value) { m_schemaHasBeenSet = true; m_schema = value; }

    /**
     * <p>An array of schema attributes for the new user pool. These attributes can be
     * standard or custom attributes.</p>
     */
    inline void SetSchema(Aws::Vector<SchemaAttributeType>&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }

    /**
     * <p>An array of schema attributes for the new user pool. These attributes can be
     * standard or custom attributes.</p>
     */
    inline CreateUserPoolRequest& WithSchema(const Aws::Vector<SchemaAttributeType>& value) { SetSchema(value); return *this;}

    /**
     * <p>An array of schema attributes for the new user pool. These attributes can be
     * standard or custom attributes.</p>
     */
    inline CreateUserPoolRequest& WithSchema(Aws::Vector<SchemaAttributeType>&& value) { SetSchema(std::move(value)); return *this;}

    /**
     * <p>An array of schema attributes for the new user pool. These attributes can be
     * standard or custom attributes.</p>
     */
    inline CreateUserPoolRequest& AddSchema(const SchemaAttributeType& value) { m_schemaHasBeenSet = true; m_schema.push_back(value); return *this; }

    /**
     * <p>An array of schema attributes for the new user pool. These attributes can be
     * standard or custom attributes.</p>
     */
    inline CreateUserPoolRequest& AddSchema(SchemaAttributeType&& value) { m_schemaHasBeenSet = true; m_schema.push_back(std::move(value)); return *this; }


    /**
     * <p>Used to enable advanced security risk detection. Set the key
     * <code>AdvancedSecurityMode</code> to the value "AUDIT".</p>
     */
    inline const UserPoolAddOnsType& GetUserPoolAddOns() const{ return m_userPoolAddOns; }

    /**
     * <p>Used to enable advanced security risk detection. Set the key
     * <code>AdvancedSecurityMode</code> to the value "AUDIT".</p>
     */
    inline bool UserPoolAddOnsHasBeenSet() const { return m_userPoolAddOnsHasBeenSet; }

    /**
     * <p>Used to enable advanced security risk detection. Set the key
     * <code>AdvancedSecurityMode</code> to the value "AUDIT".</p>
     */
    inline void SetUserPoolAddOns(const UserPoolAddOnsType& value) { m_userPoolAddOnsHasBeenSet = true; m_userPoolAddOns = value; }

    /**
     * <p>Used to enable advanced security risk detection. Set the key
     * <code>AdvancedSecurityMode</code> to the value "AUDIT".</p>
     */
    inline void SetUserPoolAddOns(UserPoolAddOnsType&& value) { m_userPoolAddOnsHasBeenSet = true; m_userPoolAddOns = std::move(value); }

    /**
     * <p>Used to enable advanced security risk detection. Set the key
     * <code>AdvancedSecurityMode</code> to the value "AUDIT".</p>
     */
    inline CreateUserPoolRequest& WithUserPoolAddOns(const UserPoolAddOnsType& value) { SetUserPoolAddOns(value); return *this;}

    /**
     * <p>Used to enable advanced security risk detection. Set the key
     * <code>AdvancedSecurityMode</code> to the value "AUDIT".</p>
     */
    inline CreateUserPoolRequest& WithUserPoolAddOns(UserPoolAddOnsType&& value) { SetUserPoolAddOns(std::move(value)); return *this;}

  private:

    Aws::String m_poolName;
    bool m_poolNameHasBeenSet;

    UserPoolPolicyType m_policies;
    bool m_policiesHasBeenSet;

    LambdaConfigType m_lambdaConfig;
    bool m_lambdaConfigHasBeenSet;

    Aws::Vector<VerifiedAttributeType> m_autoVerifiedAttributes;
    bool m_autoVerifiedAttributesHasBeenSet;

    Aws::Vector<AliasAttributeType> m_aliasAttributes;
    bool m_aliasAttributesHasBeenSet;

    Aws::Vector<UsernameAttributeType> m_usernameAttributes;
    bool m_usernameAttributesHasBeenSet;

    Aws::String m_smsVerificationMessage;
    bool m_smsVerificationMessageHasBeenSet;

    Aws::String m_emailVerificationMessage;
    bool m_emailVerificationMessageHasBeenSet;

    Aws::String m_emailVerificationSubject;
    bool m_emailVerificationSubjectHasBeenSet;

    VerificationMessageTemplateType m_verificationMessageTemplate;
    bool m_verificationMessageTemplateHasBeenSet;

    Aws::String m_smsAuthenticationMessage;
    bool m_smsAuthenticationMessageHasBeenSet;

    UserPoolMfaType m_mfaConfiguration;
    bool m_mfaConfigurationHasBeenSet;

    DeviceConfigurationType m_deviceConfiguration;
    bool m_deviceConfigurationHasBeenSet;

    EmailConfigurationType m_emailConfiguration;
    bool m_emailConfigurationHasBeenSet;

    SmsConfigurationType m_smsConfiguration;
    bool m_smsConfigurationHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_userPoolTags;
    bool m_userPoolTagsHasBeenSet;

    AdminCreateUserConfigType m_adminCreateUserConfig;
    bool m_adminCreateUserConfigHasBeenSet;

    Aws::Vector<SchemaAttributeType> m_schema;
    bool m_schemaHasBeenSet;

    UserPoolAddOnsType m_userPoolAddOns;
    bool m_userPoolAddOnsHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
