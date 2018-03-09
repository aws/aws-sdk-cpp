﻿/*
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
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigateway/model/AuthorizerType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Represents an authorization layer for methods. If enabled on a method, API
   * Gateway will activate the authorizer when a client calls the method.</p> <div
   * class="seeAlso"> <a
   * href="http://docs.aws.amazon.com/apigateway/latest/developerguide/use-custom-authorizer.html">Enable
   * custom authorization</a> </div><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/Authorizer">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API Authorizer
  {
  public:
    Authorizer();
    Authorizer(const Aws::Utils::Json::JsonValue& jsonValue);
    Authorizer& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier for the authorizer resource.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier for the authorizer resource.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier for the authorizer resource.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier for the authorizer resource.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier for the authorizer resource.</p>
     */
    inline Authorizer& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier for the authorizer resource.</p>
     */
    inline Authorizer& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the authorizer resource.</p>
     */
    inline Authorizer& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>[Required] The name of the authorizer.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>[Required] The name of the authorizer.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>[Required] The name of the authorizer.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>[Required] The name of the authorizer.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>[Required] The name of the authorizer.</p>
     */
    inline Authorizer& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>[Required] The name of the authorizer.</p>
     */
    inline Authorizer& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>[Required] The name of the authorizer.</p>
     */
    inline Authorizer& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>[Required] The authorizer type. Valid values are <code>TOKEN</code> for a
     * Lambda function using a single authorization token submitted in a custom header,
     * <code>REQUEST</code> for a Lambda function using incoming request parameters,
     * and <code>COGNITO_USER_POOLS</code> for using an Amazon Cognito user pool.</p>
     */
    inline const AuthorizerType& GetType() const{ return m_type; }

    /**
     * <p>[Required] The authorizer type. Valid values are <code>TOKEN</code> for a
     * Lambda function using a single authorization token submitted in a custom header,
     * <code>REQUEST</code> for a Lambda function using incoming request parameters,
     * and <code>COGNITO_USER_POOLS</code> for using an Amazon Cognito user pool.</p>
     */
    inline void SetType(const AuthorizerType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>[Required] The authorizer type. Valid values are <code>TOKEN</code> for a
     * Lambda function using a single authorization token submitted in a custom header,
     * <code>REQUEST</code> for a Lambda function using incoming request parameters,
     * and <code>COGNITO_USER_POOLS</code> for using an Amazon Cognito user pool.</p>
     */
    inline void SetType(AuthorizerType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>[Required] The authorizer type. Valid values are <code>TOKEN</code> for a
     * Lambda function using a single authorization token submitted in a custom header,
     * <code>REQUEST</code> for a Lambda function using incoming request parameters,
     * and <code>COGNITO_USER_POOLS</code> for using an Amazon Cognito user pool.</p>
     */
    inline Authorizer& WithType(const AuthorizerType& value) { SetType(value); return *this;}

    /**
     * <p>[Required] The authorizer type. Valid values are <code>TOKEN</code> for a
     * Lambda function using a single authorization token submitted in a custom header,
     * <code>REQUEST</code> for a Lambda function using incoming request parameters,
     * and <code>COGNITO_USER_POOLS</code> for using an Amazon Cognito user pool.</p>
     */
    inline Authorizer& WithType(AuthorizerType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>A list of the Amazon Cognito user pool ARNs for the
     * <code>COGNITO_USER_POOLS</code> authorizer. Each element is of this format:
     * <code>arn:aws:cognito-idp:{region}:{account_id}:userpool/{user_pool_id}</code>.
     * For a <code>TOKEN</code> or <code>REQUEST</code> authorizer, this is not
     * defined. </p>
     */
    inline const Aws::Vector<Aws::String>& GetProviderARNs() const{ return m_providerARNs; }

    /**
     * <p>A list of the Amazon Cognito user pool ARNs for the
     * <code>COGNITO_USER_POOLS</code> authorizer. Each element is of this format:
     * <code>arn:aws:cognito-idp:{region}:{account_id}:userpool/{user_pool_id}</code>.
     * For a <code>TOKEN</code> or <code>REQUEST</code> authorizer, this is not
     * defined. </p>
     */
    inline void SetProviderARNs(const Aws::Vector<Aws::String>& value) { m_providerARNsHasBeenSet = true; m_providerARNs = value; }

    /**
     * <p>A list of the Amazon Cognito user pool ARNs for the
     * <code>COGNITO_USER_POOLS</code> authorizer. Each element is of this format:
     * <code>arn:aws:cognito-idp:{region}:{account_id}:userpool/{user_pool_id}</code>.
     * For a <code>TOKEN</code> or <code>REQUEST</code> authorizer, this is not
     * defined. </p>
     */
    inline void SetProviderARNs(Aws::Vector<Aws::String>&& value) { m_providerARNsHasBeenSet = true; m_providerARNs = std::move(value); }

    /**
     * <p>A list of the Amazon Cognito user pool ARNs for the
     * <code>COGNITO_USER_POOLS</code> authorizer. Each element is of this format:
     * <code>arn:aws:cognito-idp:{region}:{account_id}:userpool/{user_pool_id}</code>.
     * For a <code>TOKEN</code> or <code>REQUEST</code> authorizer, this is not
     * defined. </p>
     */
    inline Authorizer& WithProviderARNs(const Aws::Vector<Aws::String>& value) { SetProviderARNs(value); return *this;}

    /**
     * <p>A list of the Amazon Cognito user pool ARNs for the
     * <code>COGNITO_USER_POOLS</code> authorizer. Each element is of this format:
     * <code>arn:aws:cognito-idp:{region}:{account_id}:userpool/{user_pool_id}</code>.
     * For a <code>TOKEN</code> or <code>REQUEST</code> authorizer, this is not
     * defined. </p>
     */
    inline Authorizer& WithProviderARNs(Aws::Vector<Aws::String>&& value) { SetProviderARNs(std::move(value)); return *this;}

    /**
     * <p>A list of the Amazon Cognito user pool ARNs for the
     * <code>COGNITO_USER_POOLS</code> authorizer. Each element is of this format:
     * <code>arn:aws:cognito-idp:{region}:{account_id}:userpool/{user_pool_id}</code>.
     * For a <code>TOKEN</code> or <code>REQUEST</code> authorizer, this is not
     * defined. </p>
     */
    inline Authorizer& AddProviderARNs(const Aws::String& value) { m_providerARNsHasBeenSet = true; m_providerARNs.push_back(value); return *this; }

    /**
     * <p>A list of the Amazon Cognito user pool ARNs for the
     * <code>COGNITO_USER_POOLS</code> authorizer. Each element is of this format:
     * <code>arn:aws:cognito-idp:{region}:{account_id}:userpool/{user_pool_id}</code>.
     * For a <code>TOKEN</code> or <code>REQUEST</code> authorizer, this is not
     * defined. </p>
     */
    inline Authorizer& AddProviderARNs(Aws::String&& value) { m_providerARNsHasBeenSet = true; m_providerARNs.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the Amazon Cognito user pool ARNs for the
     * <code>COGNITO_USER_POOLS</code> authorizer. Each element is of this format:
     * <code>arn:aws:cognito-idp:{region}:{account_id}:userpool/{user_pool_id}</code>.
     * For a <code>TOKEN</code> or <code>REQUEST</code> authorizer, this is not
     * defined. </p>
     */
    inline Authorizer& AddProviderARNs(const char* value) { m_providerARNsHasBeenSet = true; m_providerARNs.push_back(value); return *this; }


    /**
     * <p>Optional customer-defined field, used in Swagger imports and exports without
     * functional impact.</p>
     */
    inline const Aws::String& GetAuthType() const{ return m_authType; }

    /**
     * <p>Optional customer-defined field, used in Swagger imports and exports without
     * functional impact.</p>
     */
    inline void SetAuthType(const Aws::String& value) { m_authTypeHasBeenSet = true; m_authType = value; }

    /**
     * <p>Optional customer-defined field, used in Swagger imports and exports without
     * functional impact.</p>
     */
    inline void SetAuthType(Aws::String&& value) { m_authTypeHasBeenSet = true; m_authType = std::move(value); }

    /**
     * <p>Optional customer-defined field, used in Swagger imports and exports without
     * functional impact.</p>
     */
    inline void SetAuthType(const char* value) { m_authTypeHasBeenSet = true; m_authType.assign(value); }

    /**
     * <p>Optional customer-defined field, used in Swagger imports and exports without
     * functional impact.</p>
     */
    inline Authorizer& WithAuthType(const Aws::String& value) { SetAuthType(value); return *this;}

    /**
     * <p>Optional customer-defined field, used in Swagger imports and exports without
     * functional impact.</p>
     */
    inline Authorizer& WithAuthType(Aws::String&& value) { SetAuthType(std::move(value)); return *this;}

    /**
     * <p>Optional customer-defined field, used in Swagger imports and exports without
     * functional impact.</p>
     */
    inline Authorizer& WithAuthType(const char* value) { SetAuthType(value); return *this;}


    /**
     * <p>Specifies the authorizer's Uniform Resource Identifier (URI). For
     * <code>TOKEN</code> or <code>REQUEST</code> authorizers, this must be a
     * well-formed Lambda function URI, for example,
     * <code>arn:aws:apigateway:us-west-2:lambda:path/2015-03-31/functions/arn:aws:lambda:us-west-2:{account_id}:function:{lambda_function_name}/invocations</code>.
     * In general, the URI has this form
     * <code>arn:aws:apigateway:{region}:lambda:path/{service_api}</code>, where
     * <code>{region}</code> is the same as the region hosting the Lambda function,
     * <code>path</code> indicates that the remaining substring in the URI should be
     * treated as the path to the resource, including the initial <code>/</code>. For
     * Lambda functions, this is usually of the form
     * <code>/2015-03-31/functions/[FunctionARN]/invocations</code>.</p>
     */
    inline const Aws::String& GetAuthorizerUri() const{ return m_authorizerUri; }

    /**
     * <p>Specifies the authorizer's Uniform Resource Identifier (URI). For
     * <code>TOKEN</code> or <code>REQUEST</code> authorizers, this must be a
     * well-formed Lambda function URI, for example,
     * <code>arn:aws:apigateway:us-west-2:lambda:path/2015-03-31/functions/arn:aws:lambda:us-west-2:{account_id}:function:{lambda_function_name}/invocations</code>.
     * In general, the URI has this form
     * <code>arn:aws:apigateway:{region}:lambda:path/{service_api}</code>, where
     * <code>{region}</code> is the same as the region hosting the Lambda function,
     * <code>path</code> indicates that the remaining substring in the URI should be
     * treated as the path to the resource, including the initial <code>/</code>. For
     * Lambda functions, this is usually of the form
     * <code>/2015-03-31/functions/[FunctionARN]/invocations</code>.</p>
     */
    inline void SetAuthorizerUri(const Aws::String& value) { m_authorizerUriHasBeenSet = true; m_authorizerUri = value; }

    /**
     * <p>Specifies the authorizer's Uniform Resource Identifier (URI). For
     * <code>TOKEN</code> or <code>REQUEST</code> authorizers, this must be a
     * well-formed Lambda function URI, for example,
     * <code>arn:aws:apigateway:us-west-2:lambda:path/2015-03-31/functions/arn:aws:lambda:us-west-2:{account_id}:function:{lambda_function_name}/invocations</code>.
     * In general, the URI has this form
     * <code>arn:aws:apigateway:{region}:lambda:path/{service_api}</code>, where
     * <code>{region}</code> is the same as the region hosting the Lambda function,
     * <code>path</code> indicates that the remaining substring in the URI should be
     * treated as the path to the resource, including the initial <code>/</code>. For
     * Lambda functions, this is usually of the form
     * <code>/2015-03-31/functions/[FunctionARN]/invocations</code>.</p>
     */
    inline void SetAuthorizerUri(Aws::String&& value) { m_authorizerUriHasBeenSet = true; m_authorizerUri = std::move(value); }

    /**
     * <p>Specifies the authorizer's Uniform Resource Identifier (URI). For
     * <code>TOKEN</code> or <code>REQUEST</code> authorizers, this must be a
     * well-formed Lambda function URI, for example,
     * <code>arn:aws:apigateway:us-west-2:lambda:path/2015-03-31/functions/arn:aws:lambda:us-west-2:{account_id}:function:{lambda_function_name}/invocations</code>.
     * In general, the URI has this form
     * <code>arn:aws:apigateway:{region}:lambda:path/{service_api}</code>, where
     * <code>{region}</code> is the same as the region hosting the Lambda function,
     * <code>path</code> indicates that the remaining substring in the URI should be
     * treated as the path to the resource, including the initial <code>/</code>. For
     * Lambda functions, this is usually of the form
     * <code>/2015-03-31/functions/[FunctionARN]/invocations</code>.</p>
     */
    inline void SetAuthorizerUri(const char* value) { m_authorizerUriHasBeenSet = true; m_authorizerUri.assign(value); }

    /**
     * <p>Specifies the authorizer's Uniform Resource Identifier (URI). For
     * <code>TOKEN</code> or <code>REQUEST</code> authorizers, this must be a
     * well-formed Lambda function URI, for example,
     * <code>arn:aws:apigateway:us-west-2:lambda:path/2015-03-31/functions/arn:aws:lambda:us-west-2:{account_id}:function:{lambda_function_name}/invocations</code>.
     * In general, the URI has this form
     * <code>arn:aws:apigateway:{region}:lambda:path/{service_api}</code>, where
     * <code>{region}</code> is the same as the region hosting the Lambda function,
     * <code>path</code> indicates that the remaining substring in the URI should be
     * treated as the path to the resource, including the initial <code>/</code>. For
     * Lambda functions, this is usually of the form
     * <code>/2015-03-31/functions/[FunctionARN]/invocations</code>.</p>
     */
    inline Authorizer& WithAuthorizerUri(const Aws::String& value) { SetAuthorizerUri(value); return *this;}

    /**
     * <p>Specifies the authorizer's Uniform Resource Identifier (URI). For
     * <code>TOKEN</code> or <code>REQUEST</code> authorizers, this must be a
     * well-formed Lambda function URI, for example,
     * <code>arn:aws:apigateway:us-west-2:lambda:path/2015-03-31/functions/arn:aws:lambda:us-west-2:{account_id}:function:{lambda_function_name}/invocations</code>.
     * In general, the URI has this form
     * <code>arn:aws:apigateway:{region}:lambda:path/{service_api}</code>, where
     * <code>{region}</code> is the same as the region hosting the Lambda function,
     * <code>path</code> indicates that the remaining substring in the URI should be
     * treated as the path to the resource, including the initial <code>/</code>. For
     * Lambda functions, this is usually of the form
     * <code>/2015-03-31/functions/[FunctionARN]/invocations</code>.</p>
     */
    inline Authorizer& WithAuthorizerUri(Aws::String&& value) { SetAuthorizerUri(std::move(value)); return *this;}

    /**
     * <p>Specifies the authorizer's Uniform Resource Identifier (URI). For
     * <code>TOKEN</code> or <code>REQUEST</code> authorizers, this must be a
     * well-formed Lambda function URI, for example,
     * <code>arn:aws:apigateway:us-west-2:lambda:path/2015-03-31/functions/arn:aws:lambda:us-west-2:{account_id}:function:{lambda_function_name}/invocations</code>.
     * In general, the URI has this form
     * <code>arn:aws:apigateway:{region}:lambda:path/{service_api}</code>, where
     * <code>{region}</code> is the same as the region hosting the Lambda function,
     * <code>path</code> indicates that the remaining substring in the URI should be
     * treated as the path to the resource, including the initial <code>/</code>. For
     * Lambda functions, this is usually of the form
     * <code>/2015-03-31/functions/[FunctionARN]/invocations</code>.</p>
     */
    inline Authorizer& WithAuthorizerUri(const char* value) { SetAuthorizerUri(value); return *this;}


    /**
     * <p>Specifies the required credentials as an IAM role for API Gateway to invoke
     * the authorizer. To specify an IAM role for API Gateway to assume, use the role's
     * Amazon Resource Name (ARN). To use resource-based permissions on the Lambda
     * function, specify null.</p>
     */
    inline const Aws::String& GetAuthorizerCredentials() const{ return m_authorizerCredentials; }

    /**
     * <p>Specifies the required credentials as an IAM role for API Gateway to invoke
     * the authorizer. To specify an IAM role for API Gateway to assume, use the role's
     * Amazon Resource Name (ARN). To use resource-based permissions on the Lambda
     * function, specify null.</p>
     */
    inline void SetAuthorizerCredentials(const Aws::String& value) { m_authorizerCredentialsHasBeenSet = true; m_authorizerCredentials = value; }

    /**
     * <p>Specifies the required credentials as an IAM role for API Gateway to invoke
     * the authorizer. To specify an IAM role for API Gateway to assume, use the role's
     * Amazon Resource Name (ARN). To use resource-based permissions on the Lambda
     * function, specify null.</p>
     */
    inline void SetAuthorizerCredentials(Aws::String&& value) { m_authorizerCredentialsHasBeenSet = true; m_authorizerCredentials = std::move(value); }

    /**
     * <p>Specifies the required credentials as an IAM role for API Gateway to invoke
     * the authorizer. To specify an IAM role for API Gateway to assume, use the role's
     * Amazon Resource Name (ARN). To use resource-based permissions on the Lambda
     * function, specify null.</p>
     */
    inline void SetAuthorizerCredentials(const char* value) { m_authorizerCredentialsHasBeenSet = true; m_authorizerCredentials.assign(value); }

    /**
     * <p>Specifies the required credentials as an IAM role for API Gateway to invoke
     * the authorizer. To specify an IAM role for API Gateway to assume, use the role's
     * Amazon Resource Name (ARN). To use resource-based permissions on the Lambda
     * function, specify null.</p>
     */
    inline Authorizer& WithAuthorizerCredentials(const Aws::String& value) { SetAuthorizerCredentials(value); return *this;}

    /**
     * <p>Specifies the required credentials as an IAM role for API Gateway to invoke
     * the authorizer. To specify an IAM role for API Gateway to assume, use the role's
     * Amazon Resource Name (ARN). To use resource-based permissions on the Lambda
     * function, specify null.</p>
     */
    inline Authorizer& WithAuthorizerCredentials(Aws::String&& value) { SetAuthorizerCredentials(std::move(value)); return *this;}

    /**
     * <p>Specifies the required credentials as an IAM role for API Gateway to invoke
     * the authorizer. To specify an IAM role for API Gateway to assume, use the role's
     * Amazon Resource Name (ARN). To use resource-based permissions on the Lambda
     * function, specify null.</p>
     */
    inline Authorizer& WithAuthorizerCredentials(const char* value) { SetAuthorizerCredentials(value); return *this;}


    /**
     * <p>The identity source for which authorization is requested. <ul><li>For a
     * <code>TOKEN</code> authorizer, this is required and specifies the request header
     * mapping expression for the custom header holding the authorization token
     * submitted by the client. For example, if the token header name is
     * <code>Auth</code>, the header mapping expression is
     * <code>method.request.header.Auth</code>.</li><li>For the <code>REQUEST</code>
     * authorizer, this is required when authorization caching is enabled. The value is
     * a comma-separated string of one or more mapping expressions of the specified
     * request parameters. For example, if an <code>Auth</code> header, a
     * <code>Name</code> query string parameter are defined as identity sources, this
     * value is <code>method.request.header.Auth,
     * method.request.querystring.Name</code>. These parameters will be used to derive
     * the authorization caching key and to perform runtime validation of the
     * <code>REQUEST</code> authorizer by verifying all of the identity-related request
     * parameters are present, not null and non-empty. Only when this is true does the
     * authorizer invoke the authorizer Lambda function, otherwise, it returns a 401
     * Unauthorized response without calling the Lambda function. The valid value is a
     * string of comma-separated mapping expressions of the specified request
     * parameters. When the authorization caching is not enabled, this property is
     * optional.</li><li>For a <code>COGNITO_USER_POOLS</code> authorizer, this
     * property is not used.</li></ul></p>
     */
    inline const Aws::String& GetIdentitySource() const{ return m_identitySource; }

    /**
     * <p>The identity source for which authorization is requested. <ul><li>For a
     * <code>TOKEN</code> authorizer, this is required and specifies the request header
     * mapping expression for the custom header holding the authorization token
     * submitted by the client. For example, if the token header name is
     * <code>Auth</code>, the header mapping expression is
     * <code>method.request.header.Auth</code>.</li><li>For the <code>REQUEST</code>
     * authorizer, this is required when authorization caching is enabled. The value is
     * a comma-separated string of one or more mapping expressions of the specified
     * request parameters. For example, if an <code>Auth</code> header, a
     * <code>Name</code> query string parameter are defined as identity sources, this
     * value is <code>method.request.header.Auth,
     * method.request.querystring.Name</code>. These parameters will be used to derive
     * the authorization caching key and to perform runtime validation of the
     * <code>REQUEST</code> authorizer by verifying all of the identity-related request
     * parameters are present, not null and non-empty. Only when this is true does the
     * authorizer invoke the authorizer Lambda function, otherwise, it returns a 401
     * Unauthorized response without calling the Lambda function. The valid value is a
     * string of comma-separated mapping expressions of the specified request
     * parameters. When the authorization caching is not enabled, this property is
     * optional.</li><li>For a <code>COGNITO_USER_POOLS</code> authorizer, this
     * property is not used.</li></ul></p>
     */
    inline void SetIdentitySource(const Aws::String& value) { m_identitySourceHasBeenSet = true; m_identitySource = value; }

    /**
     * <p>The identity source for which authorization is requested. <ul><li>For a
     * <code>TOKEN</code> authorizer, this is required and specifies the request header
     * mapping expression for the custom header holding the authorization token
     * submitted by the client. For example, if the token header name is
     * <code>Auth</code>, the header mapping expression is
     * <code>method.request.header.Auth</code>.</li><li>For the <code>REQUEST</code>
     * authorizer, this is required when authorization caching is enabled. The value is
     * a comma-separated string of one or more mapping expressions of the specified
     * request parameters. For example, if an <code>Auth</code> header, a
     * <code>Name</code> query string parameter are defined as identity sources, this
     * value is <code>method.request.header.Auth,
     * method.request.querystring.Name</code>. These parameters will be used to derive
     * the authorization caching key and to perform runtime validation of the
     * <code>REQUEST</code> authorizer by verifying all of the identity-related request
     * parameters are present, not null and non-empty. Only when this is true does the
     * authorizer invoke the authorizer Lambda function, otherwise, it returns a 401
     * Unauthorized response without calling the Lambda function. The valid value is a
     * string of comma-separated mapping expressions of the specified request
     * parameters. When the authorization caching is not enabled, this property is
     * optional.</li><li>For a <code>COGNITO_USER_POOLS</code> authorizer, this
     * property is not used.</li></ul></p>
     */
    inline void SetIdentitySource(Aws::String&& value) { m_identitySourceHasBeenSet = true; m_identitySource = std::move(value); }

    /**
     * <p>The identity source for which authorization is requested. <ul><li>For a
     * <code>TOKEN</code> authorizer, this is required and specifies the request header
     * mapping expression for the custom header holding the authorization token
     * submitted by the client. For example, if the token header name is
     * <code>Auth</code>, the header mapping expression is
     * <code>method.request.header.Auth</code>.</li><li>For the <code>REQUEST</code>
     * authorizer, this is required when authorization caching is enabled. The value is
     * a comma-separated string of one or more mapping expressions of the specified
     * request parameters. For example, if an <code>Auth</code> header, a
     * <code>Name</code> query string parameter are defined as identity sources, this
     * value is <code>method.request.header.Auth,
     * method.request.querystring.Name</code>. These parameters will be used to derive
     * the authorization caching key and to perform runtime validation of the
     * <code>REQUEST</code> authorizer by verifying all of the identity-related request
     * parameters are present, not null and non-empty. Only when this is true does the
     * authorizer invoke the authorizer Lambda function, otherwise, it returns a 401
     * Unauthorized response without calling the Lambda function. The valid value is a
     * string of comma-separated mapping expressions of the specified request
     * parameters. When the authorization caching is not enabled, this property is
     * optional.</li><li>For a <code>COGNITO_USER_POOLS</code> authorizer, this
     * property is not used.</li></ul></p>
     */
    inline void SetIdentitySource(const char* value) { m_identitySourceHasBeenSet = true; m_identitySource.assign(value); }

    /**
     * <p>The identity source for which authorization is requested. <ul><li>For a
     * <code>TOKEN</code> authorizer, this is required and specifies the request header
     * mapping expression for the custom header holding the authorization token
     * submitted by the client. For example, if the token header name is
     * <code>Auth</code>, the header mapping expression is
     * <code>method.request.header.Auth</code>.</li><li>For the <code>REQUEST</code>
     * authorizer, this is required when authorization caching is enabled. The value is
     * a comma-separated string of one or more mapping expressions of the specified
     * request parameters. For example, if an <code>Auth</code> header, a
     * <code>Name</code> query string parameter are defined as identity sources, this
     * value is <code>method.request.header.Auth,
     * method.request.querystring.Name</code>. These parameters will be used to derive
     * the authorization caching key and to perform runtime validation of the
     * <code>REQUEST</code> authorizer by verifying all of the identity-related request
     * parameters are present, not null and non-empty. Only when this is true does the
     * authorizer invoke the authorizer Lambda function, otherwise, it returns a 401
     * Unauthorized response without calling the Lambda function. The valid value is a
     * string of comma-separated mapping expressions of the specified request
     * parameters. When the authorization caching is not enabled, this property is
     * optional.</li><li>For a <code>COGNITO_USER_POOLS</code> authorizer, this
     * property is not used.</li></ul></p>
     */
    inline Authorizer& WithIdentitySource(const Aws::String& value) { SetIdentitySource(value); return *this;}

    /**
     * <p>The identity source for which authorization is requested. <ul><li>For a
     * <code>TOKEN</code> authorizer, this is required and specifies the request header
     * mapping expression for the custom header holding the authorization token
     * submitted by the client. For example, if the token header name is
     * <code>Auth</code>, the header mapping expression is
     * <code>method.request.header.Auth</code>.</li><li>For the <code>REQUEST</code>
     * authorizer, this is required when authorization caching is enabled. The value is
     * a comma-separated string of one or more mapping expressions of the specified
     * request parameters. For example, if an <code>Auth</code> header, a
     * <code>Name</code> query string parameter are defined as identity sources, this
     * value is <code>method.request.header.Auth,
     * method.request.querystring.Name</code>. These parameters will be used to derive
     * the authorization caching key and to perform runtime validation of the
     * <code>REQUEST</code> authorizer by verifying all of the identity-related request
     * parameters are present, not null and non-empty. Only when this is true does the
     * authorizer invoke the authorizer Lambda function, otherwise, it returns a 401
     * Unauthorized response without calling the Lambda function. The valid value is a
     * string of comma-separated mapping expressions of the specified request
     * parameters. When the authorization caching is not enabled, this property is
     * optional.</li><li>For a <code>COGNITO_USER_POOLS</code> authorizer, this
     * property is not used.</li></ul></p>
     */
    inline Authorizer& WithIdentitySource(Aws::String&& value) { SetIdentitySource(std::move(value)); return *this;}

    /**
     * <p>The identity source for which authorization is requested. <ul><li>For a
     * <code>TOKEN</code> authorizer, this is required and specifies the request header
     * mapping expression for the custom header holding the authorization token
     * submitted by the client. For example, if the token header name is
     * <code>Auth</code>, the header mapping expression is
     * <code>method.request.header.Auth</code>.</li><li>For the <code>REQUEST</code>
     * authorizer, this is required when authorization caching is enabled. The value is
     * a comma-separated string of one or more mapping expressions of the specified
     * request parameters. For example, if an <code>Auth</code> header, a
     * <code>Name</code> query string parameter are defined as identity sources, this
     * value is <code>method.request.header.Auth,
     * method.request.querystring.Name</code>. These parameters will be used to derive
     * the authorization caching key and to perform runtime validation of the
     * <code>REQUEST</code> authorizer by verifying all of the identity-related request
     * parameters are present, not null and non-empty. Only when this is true does the
     * authorizer invoke the authorizer Lambda function, otherwise, it returns a 401
     * Unauthorized response without calling the Lambda function. The valid value is a
     * string of comma-separated mapping expressions of the specified request
     * parameters. When the authorization caching is not enabled, this property is
     * optional.</li><li>For a <code>COGNITO_USER_POOLS</code> authorizer, this
     * property is not used.</li></ul></p>
     */
    inline Authorizer& WithIdentitySource(const char* value) { SetIdentitySource(value); return *this;}


    /**
     * <p>A validation expression for the incoming identity token. For
     * <code>TOKEN</code> authorizers, this value is a regular expression. API Gateway
     * will match the incoming token from the client against the specified regular
     * expression. It will invoke the authorizer's Lambda function there is a match.
     * Otherwise, it will return a 401 Unauthorized response without calling the Lambda
     * function. The validation expression does not apply to the <code>REQUEST</code>
     * authorizer.</p>
     */
    inline const Aws::String& GetIdentityValidationExpression() const{ return m_identityValidationExpression; }

    /**
     * <p>A validation expression for the incoming identity token. For
     * <code>TOKEN</code> authorizers, this value is a regular expression. API Gateway
     * will match the incoming token from the client against the specified regular
     * expression. It will invoke the authorizer's Lambda function there is a match.
     * Otherwise, it will return a 401 Unauthorized response without calling the Lambda
     * function. The validation expression does not apply to the <code>REQUEST</code>
     * authorizer.</p>
     */
    inline void SetIdentityValidationExpression(const Aws::String& value) { m_identityValidationExpressionHasBeenSet = true; m_identityValidationExpression = value; }

    /**
     * <p>A validation expression for the incoming identity token. For
     * <code>TOKEN</code> authorizers, this value is a regular expression. API Gateway
     * will match the incoming token from the client against the specified regular
     * expression. It will invoke the authorizer's Lambda function there is a match.
     * Otherwise, it will return a 401 Unauthorized response without calling the Lambda
     * function. The validation expression does not apply to the <code>REQUEST</code>
     * authorizer.</p>
     */
    inline void SetIdentityValidationExpression(Aws::String&& value) { m_identityValidationExpressionHasBeenSet = true; m_identityValidationExpression = std::move(value); }

    /**
     * <p>A validation expression for the incoming identity token. For
     * <code>TOKEN</code> authorizers, this value is a regular expression. API Gateway
     * will match the incoming token from the client against the specified regular
     * expression. It will invoke the authorizer's Lambda function there is a match.
     * Otherwise, it will return a 401 Unauthorized response without calling the Lambda
     * function. The validation expression does not apply to the <code>REQUEST</code>
     * authorizer.</p>
     */
    inline void SetIdentityValidationExpression(const char* value) { m_identityValidationExpressionHasBeenSet = true; m_identityValidationExpression.assign(value); }

    /**
     * <p>A validation expression for the incoming identity token. For
     * <code>TOKEN</code> authorizers, this value is a regular expression. API Gateway
     * will match the incoming token from the client against the specified regular
     * expression. It will invoke the authorizer's Lambda function there is a match.
     * Otherwise, it will return a 401 Unauthorized response without calling the Lambda
     * function. The validation expression does not apply to the <code>REQUEST</code>
     * authorizer.</p>
     */
    inline Authorizer& WithIdentityValidationExpression(const Aws::String& value) { SetIdentityValidationExpression(value); return *this;}

    /**
     * <p>A validation expression for the incoming identity token. For
     * <code>TOKEN</code> authorizers, this value is a regular expression. API Gateway
     * will match the incoming token from the client against the specified regular
     * expression. It will invoke the authorizer's Lambda function there is a match.
     * Otherwise, it will return a 401 Unauthorized response without calling the Lambda
     * function. The validation expression does not apply to the <code>REQUEST</code>
     * authorizer.</p>
     */
    inline Authorizer& WithIdentityValidationExpression(Aws::String&& value) { SetIdentityValidationExpression(std::move(value)); return *this;}

    /**
     * <p>A validation expression for the incoming identity token. For
     * <code>TOKEN</code> authorizers, this value is a regular expression. API Gateway
     * will match the incoming token from the client against the specified regular
     * expression. It will invoke the authorizer's Lambda function there is a match.
     * Otherwise, it will return a 401 Unauthorized response without calling the Lambda
     * function. The validation expression does not apply to the <code>REQUEST</code>
     * authorizer.</p>
     */
    inline Authorizer& WithIdentityValidationExpression(const char* value) { SetIdentityValidationExpression(value); return *this;}


    /**
     * <p>The TTL in seconds of cached authorizer results. If it equals 0,
     * authorization caching is disabled. If it is greater than 0, API Gateway will
     * cache authorizer responses. If this field is not set, the default value is 300.
     * The maximum value is 3600, or 1 hour.</p>
     */
    inline int GetAuthorizerResultTtlInSeconds() const{ return m_authorizerResultTtlInSeconds; }

    /**
     * <p>The TTL in seconds of cached authorizer results. If it equals 0,
     * authorization caching is disabled. If it is greater than 0, API Gateway will
     * cache authorizer responses. If this field is not set, the default value is 300.
     * The maximum value is 3600, or 1 hour.</p>
     */
    inline void SetAuthorizerResultTtlInSeconds(int value) { m_authorizerResultTtlInSecondsHasBeenSet = true; m_authorizerResultTtlInSeconds = value; }

    /**
     * <p>The TTL in seconds of cached authorizer results. If it equals 0,
     * authorization caching is disabled. If it is greater than 0, API Gateway will
     * cache authorizer responses. If this field is not set, the default value is 300.
     * The maximum value is 3600, or 1 hour.</p>
     */
    inline Authorizer& WithAuthorizerResultTtlInSeconds(int value) { SetAuthorizerResultTtlInSeconds(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    AuthorizerType m_type;
    bool m_typeHasBeenSet;

    Aws::Vector<Aws::String> m_providerARNs;
    bool m_providerARNsHasBeenSet;

    Aws::String m_authType;
    bool m_authTypeHasBeenSet;

    Aws::String m_authorizerUri;
    bool m_authorizerUriHasBeenSet;

    Aws::String m_authorizerCredentials;
    bool m_authorizerCredentialsHasBeenSet;

    Aws::String m_identitySource;
    bool m_identitySourceHasBeenSet;

    Aws::String m_identityValidationExpression;
    bool m_identityValidationExpressionHasBeenSet;

    int m_authorizerResultTtlInSeconds;
    bool m_authorizerResultTtlInSecondsHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
