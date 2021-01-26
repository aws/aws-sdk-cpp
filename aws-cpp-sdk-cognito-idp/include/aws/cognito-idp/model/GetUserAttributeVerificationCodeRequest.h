/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Represents the request to get user attribute verification.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetUserAttributeVerificationCodeRequest">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API GetUserAttributeVerificationCodeRequest : public CognitoIdentityProviderRequest
  {
  public:
    GetUserAttributeVerificationCodeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetUserAttributeVerificationCode"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The access token returned by the server response to get the user attribute
     * verification code.</p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }

    /**
     * <p>The access token returned by the server response to get the user attribute
     * verification code.</p>
     */
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }

    /**
     * <p>The access token returned by the server response to get the user attribute
     * verification code.</p>
     */
    inline void SetAccessToken(const Aws::String& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }

    /**
     * <p>The access token returned by the server response to get the user attribute
     * verification code.</p>
     */
    inline void SetAccessToken(Aws::String&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::move(value); }

    /**
     * <p>The access token returned by the server response to get the user attribute
     * verification code.</p>
     */
    inline void SetAccessToken(const char* value) { m_accessTokenHasBeenSet = true; m_accessToken.assign(value); }

    /**
     * <p>The access token returned by the server response to get the user attribute
     * verification code.</p>
     */
    inline GetUserAttributeVerificationCodeRequest& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}

    /**
     * <p>The access token returned by the server response to get the user attribute
     * verification code.</p>
     */
    inline GetUserAttributeVerificationCodeRequest& WithAccessToken(Aws::String&& value) { SetAccessToken(std::move(value)); return *this;}

    /**
     * <p>The access token returned by the server response to get the user attribute
     * verification code.</p>
     */
    inline GetUserAttributeVerificationCodeRequest& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}


    /**
     * <p>The attribute name returned by the server response to get the user attribute
     * verification code.</p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }

    /**
     * <p>The attribute name returned by the server response to get the user attribute
     * verification code.</p>
     */
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }

    /**
     * <p>The attribute name returned by the server response to get the user attribute
     * verification code.</p>
     */
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p>The attribute name returned by the server response to get the user attribute
     * verification code.</p>
     */
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }

    /**
     * <p>The attribute name returned by the server response to get the user attribute
     * verification code.</p>
     */
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }

    /**
     * <p>The attribute name returned by the server response to get the user attribute
     * verification code.</p>
     */
    inline GetUserAttributeVerificationCodeRequest& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}

    /**
     * <p>The attribute name returned by the server response to get the user attribute
     * verification code.</p>
     */
    inline GetUserAttributeVerificationCodeRequest& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}

    /**
     * <p>The attribute name returned by the server response to get the user attribute
     * verification code.</p>
     */
    inline GetUserAttributeVerificationCodeRequest& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}


    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers. </p> <p>You create custom workflows by
     * assigning AWS Lambda functions to user pool triggers. When you use the
     * GetUserAttributeVerificationCode API action, Amazon Cognito invokes the function
     * that is assigned to the <i>custom message</i> trigger. When Amazon Cognito
     * invokes this function, it passes a JSON payload, which the function receives as
     * input. This payload contains a <code>clientMetadata</code> attribute, which
     * provides the data that you assigned to the ClientMetadata parameter in your
     * GetUserAttributeVerificationCode request. In your function code in AWS Lambda,
     * you can process the <code>clientMetadata</code> value to enhance your workflow
     * for your specific needs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">Customizing
     * User Pool Workflows with Lambda Triggers</a> in the <i>Amazon Cognito Developer
     * Guide</i>.</p>  <p>Take the following limitations into consideration when
     * you use the ClientMetadata parameter:</p> <ul> <li> <p>Amazon Cognito does not
     * store the ClientMetadata value. This data is available only to AWS Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration does not include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Amazon Cognito does not validate the
     * ClientMetadata value.</p> </li> <li> <p>Amazon Cognito does not encrypt the the
     * ClientMetadata value, so don't use it to provide sensitive information.</p>
     * </li> </ul> 
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetClientMetadata() const{ return m_clientMetadata; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers. </p> <p>You create custom workflows by
     * assigning AWS Lambda functions to user pool triggers. When you use the
     * GetUserAttributeVerificationCode API action, Amazon Cognito invokes the function
     * that is assigned to the <i>custom message</i> trigger. When Amazon Cognito
     * invokes this function, it passes a JSON payload, which the function receives as
     * input. This payload contains a <code>clientMetadata</code> attribute, which
     * provides the data that you assigned to the ClientMetadata parameter in your
     * GetUserAttributeVerificationCode request. In your function code in AWS Lambda,
     * you can process the <code>clientMetadata</code> value to enhance your workflow
     * for your specific needs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">Customizing
     * User Pool Workflows with Lambda Triggers</a> in the <i>Amazon Cognito Developer
     * Guide</i>.</p>  <p>Take the following limitations into consideration when
     * you use the ClientMetadata parameter:</p> <ul> <li> <p>Amazon Cognito does not
     * store the ClientMetadata value. This data is available only to AWS Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration does not include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Amazon Cognito does not validate the
     * ClientMetadata value.</p> </li> <li> <p>Amazon Cognito does not encrypt the the
     * ClientMetadata value, so don't use it to provide sensitive information.</p>
     * </li> </ul> 
     */
    inline bool ClientMetadataHasBeenSet() const { return m_clientMetadataHasBeenSet; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers. </p> <p>You create custom workflows by
     * assigning AWS Lambda functions to user pool triggers. When you use the
     * GetUserAttributeVerificationCode API action, Amazon Cognito invokes the function
     * that is assigned to the <i>custom message</i> trigger. When Amazon Cognito
     * invokes this function, it passes a JSON payload, which the function receives as
     * input. This payload contains a <code>clientMetadata</code> attribute, which
     * provides the data that you assigned to the ClientMetadata parameter in your
     * GetUserAttributeVerificationCode request. In your function code in AWS Lambda,
     * you can process the <code>clientMetadata</code> value to enhance your workflow
     * for your specific needs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">Customizing
     * User Pool Workflows with Lambda Triggers</a> in the <i>Amazon Cognito Developer
     * Guide</i>.</p>  <p>Take the following limitations into consideration when
     * you use the ClientMetadata parameter:</p> <ul> <li> <p>Amazon Cognito does not
     * store the ClientMetadata value. This data is available only to AWS Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration does not include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Amazon Cognito does not validate the
     * ClientMetadata value.</p> </li> <li> <p>Amazon Cognito does not encrypt the the
     * ClientMetadata value, so don't use it to provide sensitive information.</p>
     * </li> </ul> 
     */
    inline void SetClientMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata = value; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers. </p> <p>You create custom workflows by
     * assigning AWS Lambda functions to user pool triggers. When you use the
     * GetUserAttributeVerificationCode API action, Amazon Cognito invokes the function
     * that is assigned to the <i>custom message</i> trigger. When Amazon Cognito
     * invokes this function, it passes a JSON payload, which the function receives as
     * input. This payload contains a <code>clientMetadata</code> attribute, which
     * provides the data that you assigned to the ClientMetadata parameter in your
     * GetUserAttributeVerificationCode request. In your function code in AWS Lambda,
     * you can process the <code>clientMetadata</code> value to enhance your workflow
     * for your specific needs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">Customizing
     * User Pool Workflows with Lambda Triggers</a> in the <i>Amazon Cognito Developer
     * Guide</i>.</p>  <p>Take the following limitations into consideration when
     * you use the ClientMetadata parameter:</p> <ul> <li> <p>Amazon Cognito does not
     * store the ClientMetadata value. This data is available only to AWS Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration does not include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Amazon Cognito does not validate the
     * ClientMetadata value.</p> </li> <li> <p>Amazon Cognito does not encrypt the the
     * ClientMetadata value, so don't use it to provide sensitive information.</p>
     * </li> </ul> 
     */
    inline void SetClientMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata = std::move(value); }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers. </p> <p>You create custom workflows by
     * assigning AWS Lambda functions to user pool triggers. When you use the
     * GetUserAttributeVerificationCode API action, Amazon Cognito invokes the function
     * that is assigned to the <i>custom message</i> trigger. When Amazon Cognito
     * invokes this function, it passes a JSON payload, which the function receives as
     * input. This payload contains a <code>clientMetadata</code> attribute, which
     * provides the data that you assigned to the ClientMetadata parameter in your
     * GetUserAttributeVerificationCode request. In your function code in AWS Lambda,
     * you can process the <code>clientMetadata</code> value to enhance your workflow
     * for your specific needs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">Customizing
     * User Pool Workflows with Lambda Triggers</a> in the <i>Amazon Cognito Developer
     * Guide</i>.</p>  <p>Take the following limitations into consideration when
     * you use the ClientMetadata parameter:</p> <ul> <li> <p>Amazon Cognito does not
     * store the ClientMetadata value. This data is available only to AWS Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration does not include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Amazon Cognito does not validate the
     * ClientMetadata value.</p> </li> <li> <p>Amazon Cognito does not encrypt the the
     * ClientMetadata value, so don't use it to provide sensitive information.</p>
     * </li> </ul> 
     */
    inline GetUserAttributeVerificationCodeRequest& WithClientMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetClientMetadata(value); return *this;}

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers. </p> <p>You create custom workflows by
     * assigning AWS Lambda functions to user pool triggers. When you use the
     * GetUserAttributeVerificationCode API action, Amazon Cognito invokes the function
     * that is assigned to the <i>custom message</i> trigger. When Amazon Cognito
     * invokes this function, it passes a JSON payload, which the function receives as
     * input. This payload contains a <code>clientMetadata</code> attribute, which
     * provides the data that you assigned to the ClientMetadata parameter in your
     * GetUserAttributeVerificationCode request. In your function code in AWS Lambda,
     * you can process the <code>clientMetadata</code> value to enhance your workflow
     * for your specific needs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">Customizing
     * User Pool Workflows with Lambda Triggers</a> in the <i>Amazon Cognito Developer
     * Guide</i>.</p>  <p>Take the following limitations into consideration when
     * you use the ClientMetadata parameter:</p> <ul> <li> <p>Amazon Cognito does not
     * store the ClientMetadata value. This data is available only to AWS Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration does not include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Amazon Cognito does not validate the
     * ClientMetadata value.</p> </li> <li> <p>Amazon Cognito does not encrypt the the
     * ClientMetadata value, so don't use it to provide sensitive information.</p>
     * </li> </ul> 
     */
    inline GetUserAttributeVerificationCodeRequest& WithClientMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetClientMetadata(std::move(value)); return *this;}

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers. </p> <p>You create custom workflows by
     * assigning AWS Lambda functions to user pool triggers. When you use the
     * GetUserAttributeVerificationCode API action, Amazon Cognito invokes the function
     * that is assigned to the <i>custom message</i> trigger. When Amazon Cognito
     * invokes this function, it passes a JSON payload, which the function receives as
     * input. This payload contains a <code>clientMetadata</code> attribute, which
     * provides the data that you assigned to the ClientMetadata parameter in your
     * GetUserAttributeVerificationCode request. In your function code in AWS Lambda,
     * you can process the <code>clientMetadata</code> value to enhance your workflow
     * for your specific needs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">Customizing
     * User Pool Workflows with Lambda Triggers</a> in the <i>Amazon Cognito Developer
     * Guide</i>.</p>  <p>Take the following limitations into consideration when
     * you use the ClientMetadata parameter:</p> <ul> <li> <p>Amazon Cognito does not
     * store the ClientMetadata value. This data is available only to AWS Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration does not include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Amazon Cognito does not validate the
     * ClientMetadata value.</p> </li> <li> <p>Amazon Cognito does not encrypt the the
     * ClientMetadata value, so don't use it to provide sensitive information.</p>
     * </li> </ul> 
     */
    inline GetUserAttributeVerificationCodeRequest& AddClientMetadata(const Aws::String& key, const Aws::String& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, value); return *this; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers. </p> <p>You create custom workflows by
     * assigning AWS Lambda functions to user pool triggers. When you use the
     * GetUserAttributeVerificationCode API action, Amazon Cognito invokes the function
     * that is assigned to the <i>custom message</i> trigger. When Amazon Cognito
     * invokes this function, it passes a JSON payload, which the function receives as
     * input. This payload contains a <code>clientMetadata</code> attribute, which
     * provides the data that you assigned to the ClientMetadata parameter in your
     * GetUserAttributeVerificationCode request. In your function code in AWS Lambda,
     * you can process the <code>clientMetadata</code> value to enhance your workflow
     * for your specific needs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">Customizing
     * User Pool Workflows with Lambda Triggers</a> in the <i>Amazon Cognito Developer
     * Guide</i>.</p>  <p>Take the following limitations into consideration when
     * you use the ClientMetadata parameter:</p> <ul> <li> <p>Amazon Cognito does not
     * store the ClientMetadata value. This data is available only to AWS Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration does not include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Amazon Cognito does not validate the
     * ClientMetadata value.</p> </li> <li> <p>Amazon Cognito does not encrypt the the
     * ClientMetadata value, so don't use it to provide sensitive information.</p>
     * </li> </ul> 
     */
    inline GetUserAttributeVerificationCodeRequest& AddClientMetadata(Aws::String&& key, const Aws::String& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers. </p> <p>You create custom workflows by
     * assigning AWS Lambda functions to user pool triggers. When you use the
     * GetUserAttributeVerificationCode API action, Amazon Cognito invokes the function
     * that is assigned to the <i>custom message</i> trigger. When Amazon Cognito
     * invokes this function, it passes a JSON payload, which the function receives as
     * input. This payload contains a <code>clientMetadata</code> attribute, which
     * provides the data that you assigned to the ClientMetadata parameter in your
     * GetUserAttributeVerificationCode request. In your function code in AWS Lambda,
     * you can process the <code>clientMetadata</code> value to enhance your workflow
     * for your specific needs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">Customizing
     * User Pool Workflows with Lambda Triggers</a> in the <i>Amazon Cognito Developer
     * Guide</i>.</p>  <p>Take the following limitations into consideration when
     * you use the ClientMetadata parameter:</p> <ul> <li> <p>Amazon Cognito does not
     * store the ClientMetadata value. This data is available only to AWS Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration does not include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Amazon Cognito does not validate the
     * ClientMetadata value.</p> </li> <li> <p>Amazon Cognito does not encrypt the the
     * ClientMetadata value, so don't use it to provide sensitive information.</p>
     * </li> </ul> 
     */
    inline GetUserAttributeVerificationCodeRequest& AddClientMetadata(const Aws::String& key, Aws::String&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers. </p> <p>You create custom workflows by
     * assigning AWS Lambda functions to user pool triggers. When you use the
     * GetUserAttributeVerificationCode API action, Amazon Cognito invokes the function
     * that is assigned to the <i>custom message</i> trigger. When Amazon Cognito
     * invokes this function, it passes a JSON payload, which the function receives as
     * input. This payload contains a <code>clientMetadata</code> attribute, which
     * provides the data that you assigned to the ClientMetadata parameter in your
     * GetUserAttributeVerificationCode request. In your function code in AWS Lambda,
     * you can process the <code>clientMetadata</code> value to enhance your workflow
     * for your specific needs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">Customizing
     * User Pool Workflows with Lambda Triggers</a> in the <i>Amazon Cognito Developer
     * Guide</i>.</p>  <p>Take the following limitations into consideration when
     * you use the ClientMetadata parameter:</p> <ul> <li> <p>Amazon Cognito does not
     * store the ClientMetadata value. This data is available only to AWS Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration does not include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Amazon Cognito does not validate the
     * ClientMetadata value.</p> </li> <li> <p>Amazon Cognito does not encrypt the the
     * ClientMetadata value, so don't use it to provide sensitive information.</p>
     * </li> </ul> 
     */
    inline GetUserAttributeVerificationCodeRequest& AddClientMetadata(Aws::String&& key, Aws::String&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers. </p> <p>You create custom workflows by
     * assigning AWS Lambda functions to user pool triggers. When you use the
     * GetUserAttributeVerificationCode API action, Amazon Cognito invokes the function
     * that is assigned to the <i>custom message</i> trigger. When Amazon Cognito
     * invokes this function, it passes a JSON payload, which the function receives as
     * input. This payload contains a <code>clientMetadata</code> attribute, which
     * provides the data that you assigned to the ClientMetadata parameter in your
     * GetUserAttributeVerificationCode request. In your function code in AWS Lambda,
     * you can process the <code>clientMetadata</code> value to enhance your workflow
     * for your specific needs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">Customizing
     * User Pool Workflows with Lambda Triggers</a> in the <i>Amazon Cognito Developer
     * Guide</i>.</p>  <p>Take the following limitations into consideration when
     * you use the ClientMetadata parameter:</p> <ul> <li> <p>Amazon Cognito does not
     * store the ClientMetadata value. This data is available only to AWS Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration does not include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Amazon Cognito does not validate the
     * ClientMetadata value.</p> </li> <li> <p>Amazon Cognito does not encrypt the the
     * ClientMetadata value, so don't use it to provide sensitive information.</p>
     * </li> </ul> 
     */
    inline GetUserAttributeVerificationCodeRequest& AddClientMetadata(const char* key, Aws::String&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers. </p> <p>You create custom workflows by
     * assigning AWS Lambda functions to user pool triggers. When you use the
     * GetUserAttributeVerificationCode API action, Amazon Cognito invokes the function
     * that is assigned to the <i>custom message</i> trigger. When Amazon Cognito
     * invokes this function, it passes a JSON payload, which the function receives as
     * input. This payload contains a <code>clientMetadata</code> attribute, which
     * provides the data that you assigned to the ClientMetadata parameter in your
     * GetUserAttributeVerificationCode request. In your function code in AWS Lambda,
     * you can process the <code>clientMetadata</code> value to enhance your workflow
     * for your specific needs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">Customizing
     * User Pool Workflows with Lambda Triggers</a> in the <i>Amazon Cognito Developer
     * Guide</i>.</p>  <p>Take the following limitations into consideration when
     * you use the ClientMetadata parameter:</p> <ul> <li> <p>Amazon Cognito does not
     * store the ClientMetadata value. This data is available only to AWS Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration does not include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Amazon Cognito does not validate the
     * ClientMetadata value.</p> </li> <li> <p>Amazon Cognito does not encrypt the the
     * ClientMetadata value, so don't use it to provide sensitive information.</p>
     * </li> </ul> 
     */
    inline GetUserAttributeVerificationCodeRequest& AddClientMetadata(Aws::String&& key, const char* value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of custom key-value pairs that you can provide as input for any custom
     * workflows that this action triggers. </p> <p>You create custom workflows by
     * assigning AWS Lambda functions to user pool triggers. When you use the
     * GetUserAttributeVerificationCode API action, Amazon Cognito invokes the function
     * that is assigned to the <i>custom message</i> trigger. When Amazon Cognito
     * invokes this function, it passes a JSON payload, which the function receives as
     * input. This payload contains a <code>clientMetadata</code> attribute, which
     * provides the data that you assigned to the ClientMetadata parameter in your
     * GetUserAttributeVerificationCode request. In your function code in AWS Lambda,
     * you can process the <code>clientMetadata</code> value to enhance your workflow
     * for your specific needs.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools-working-with-aws-lambda-triggers.html">Customizing
     * User Pool Workflows with Lambda Triggers</a> in the <i>Amazon Cognito Developer
     * Guide</i>.</p>  <p>Take the following limitations into consideration when
     * you use the ClientMetadata parameter:</p> <ul> <li> <p>Amazon Cognito does not
     * store the ClientMetadata value. This data is available only to AWS Lambda
     * triggers that are assigned to a user pool to support custom workflows. If your
     * user pool configuration does not include triggers, the ClientMetadata parameter
     * serves no purpose.</p> </li> <li> <p>Amazon Cognito does not validate the
     * ClientMetadata value.</p> </li> <li> <p>Amazon Cognito does not encrypt the the
     * ClientMetadata value, so don't use it to provide sensitive information.</p>
     * </li> </ul> 
     */
    inline GetUserAttributeVerificationCodeRequest& AddClientMetadata(const char* key, const char* value) { m_clientMetadataHasBeenSet = true; m_clientMetadata.emplace(key, value); return *this; }

  private:

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet;

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_clientMetadata;
    bool m_clientMetadataHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
