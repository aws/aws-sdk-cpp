/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * custom authorization</a> </div>
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
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

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
    inline Authorizer& WithId(Aws::String&& value) { SetId(value); return *this;}

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
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

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
    inline Authorizer& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>[Required] The name of the authorizer.</p>
     */
    inline Authorizer& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>[Required] The type of the authorizer. Currently, the only valid type is
     * TOKEN.</p>
     */
    inline const AuthorizerType& GetType() const{ return m_type; }

    /**
     * <p>[Required] The type of the authorizer. Currently, the only valid type is
     * TOKEN.</p>
     */
    inline void SetType(const AuthorizerType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>[Required] The type of the authorizer. Currently, the only valid type is
     * TOKEN.</p>
     */
    inline void SetType(AuthorizerType&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>[Required] The type of the authorizer. Currently, the only valid type is
     * TOKEN.</p>
     */
    inline Authorizer& WithType(const AuthorizerType& value) { SetType(value); return *this;}

    /**
     * <p>[Required] The type of the authorizer. Currently, the only valid type is
     * TOKEN.</p>
     */
    inline Authorizer& WithType(AuthorizerType&& value) { SetType(value); return *this;}

    /**
     * <p>A list of the provider ARNs of the authorizer.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProviderARNs() const{ return m_providerARNs; }

    /**
     * <p>A list of the provider ARNs of the authorizer.</p>
     */
    inline void SetProviderARNs(const Aws::Vector<Aws::String>& value) { m_providerARNsHasBeenSet = true; m_providerARNs = value; }

    /**
     * <p>A list of the provider ARNs of the authorizer.</p>
     */
    inline void SetProviderARNs(Aws::Vector<Aws::String>&& value) { m_providerARNsHasBeenSet = true; m_providerARNs = value; }

    /**
     * <p>A list of the provider ARNs of the authorizer.</p>
     */
    inline Authorizer& WithProviderARNs(const Aws::Vector<Aws::String>& value) { SetProviderARNs(value); return *this;}

    /**
     * <p>A list of the provider ARNs of the authorizer.</p>
     */
    inline Authorizer& WithProviderARNs(Aws::Vector<Aws::String>&& value) { SetProviderARNs(value); return *this;}

    /**
     * <p>A list of the provider ARNs of the authorizer.</p>
     */
    inline Authorizer& AddProviderARNs(const Aws::String& value) { m_providerARNsHasBeenSet = true; m_providerARNs.push_back(value); return *this; }

    /**
     * <p>A list of the provider ARNs of the authorizer.</p>
     */
    inline Authorizer& AddProviderARNs(Aws::String&& value) { m_providerARNsHasBeenSet = true; m_providerARNs.push_back(value); return *this; }

    /**
     * <p>A list of the provider ARNs of the authorizer.</p>
     */
    inline Authorizer& AddProviderARNs(const char* value) { m_providerARNsHasBeenSet = true; m_providerARNs.push_back(value); return *this; }

    /**
     * <p>Optional customer-defined field, used in Swagger imports/exports. Has no
     * functional impact.</p>
     */
    inline const Aws::String& GetAuthType() const{ return m_authType; }

    /**
     * <p>Optional customer-defined field, used in Swagger imports/exports. Has no
     * functional impact.</p>
     */
    inline void SetAuthType(const Aws::String& value) { m_authTypeHasBeenSet = true; m_authType = value; }

    /**
     * <p>Optional customer-defined field, used in Swagger imports/exports. Has no
     * functional impact.</p>
     */
    inline void SetAuthType(Aws::String&& value) { m_authTypeHasBeenSet = true; m_authType = value; }

    /**
     * <p>Optional customer-defined field, used in Swagger imports/exports. Has no
     * functional impact.</p>
     */
    inline void SetAuthType(const char* value) { m_authTypeHasBeenSet = true; m_authType.assign(value); }

    /**
     * <p>Optional customer-defined field, used in Swagger imports/exports. Has no
     * functional impact.</p>
     */
    inline Authorizer& WithAuthType(const Aws::String& value) { SetAuthType(value); return *this;}

    /**
     * <p>Optional customer-defined field, used in Swagger imports/exports. Has no
     * functional impact.</p>
     */
    inline Authorizer& WithAuthType(Aws::String&& value) { SetAuthType(value); return *this;}

    /**
     * <p>Optional customer-defined field, used in Swagger imports/exports. Has no
     * functional impact.</p>
     */
    inline Authorizer& WithAuthType(const char* value) { SetAuthType(value); return *this;}

    /**
     * <p>[Required] Specifies the authorizer's Uniform Resource Identifier (URI). For
     * TOKEN authorizers, this must be a well-formed Lambda function URI. The URI
     * should be of the form
     * <code>arn:aws:apigateway:{region}:lambda:path/{service_api}</code>.
     * <code>Region</code> is used to determine the right endpoint. In this case,
     * <code>path</code> is used to indicate that the remaining substring in the URI
     * should be treated as the path to the resource, including the initial
     * <code>/</code>. For Lambda functions, this is usually of the form
     * /2015-03-31/functions/[FunctionARN]/invocations</p>
     */
    inline const Aws::String& GetAuthorizerUri() const{ return m_authorizerUri; }

    /**
     * <p>[Required] Specifies the authorizer's Uniform Resource Identifier (URI). For
     * TOKEN authorizers, this must be a well-formed Lambda function URI. The URI
     * should be of the form
     * <code>arn:aws:apigateway:{region}:lambda:path/{service_api}</code>.
     * <code>Region</code> is used to determine the right endpoint. In this case,
     * <code>path</code> is used to indicate that the remaining substring in the URI
     * should be treated as the path to the resource, including the initial
     * <code>/</code>. For Lambda functions, this is usually of the form
     * /2015-03-31/functions/[FunctionARN]/invocations</p>
     */
    inline void SetAuthorizerUri(const Aws::String& value) { m_authorizerUriHasBeenSet = true; m_authorizerUri = value; }

    /**
     * <p>[Required] Specifies the authorizer's Uniform Resource Identifier (URI). For
     * TOKEN authorizers, this must be a well-formed Lambda function URI. The URI
     * should be of the form
     * <code>arn:aws:apigateway:{region}:lambda:path/{service_api}</code>.
     * <code>Region</code> is used to determine the right endpoint. In this case,
     * <code>path</code> is used to indicate that the remaining substring in the URI
     * should be treated as the path to the resource, including the initial
     * <code>/</code>. For Lambda functions, this is usually of the form
     * /2015-03-31/functions/[FunctionARN]/invocations</p>
     */
    inline void SetAuthorizerUri(Aws::String&& value) { m_authorizerUriHasBeenSet = true; m_authorizerUri = value; }

    /**
     * <p>[Required] Specifies the authorizer's Uniform Resource Identifier (URI). For
     * TOKEN authorizers, this must be a well-formed Lambda function URI. The URI
     * should be of the form
     * <code>arn:aws:apigateway:{region}:lambda:path/{service_api}</code>.
     * <code>Region</code> is used to determine the right endpoint. In this case,
     * <code>path</code> is used to indicate that the remaining substring in the URI
     * should be treated as the path to the resource, including the initial
     * <code>/</code>. For Lambda functions, this is usually of the form
     * /2015-03-31/functions/[FunctionARN]/invocations</p>
     */
    inline void SetAuthorizerUri(const char* value) { m_authorizerUriHasBeenSet = true; m_authorizerUri.assign(value); }

    /**
     * <p>[Required] Specifies the authorizer's Uniform Resource Identifier (URI). For
     * TOKEN authorizers, this must be a well-formed Lambda function URI. The URI
     * should be of the form
     * <code>arn:aws:apigateway:{region}:lambda:path/{service_api}</code>.
     * <code>Region</code> is used to determine the right endpoint. In this case,
     * <code>path</code> is used to indicate that the remaining substring in the URI
     * should be treated as the path to the resource, including the initial
     * <code>/</code>. For Lambda functions, this is usually of the form
     * /2015-03-31/functions/[FunctionARN]/invocations</p>
     */
    inline Authorizer& WithAuthorizerUri(const Aws::String& value) { SetAuthorizerUri(value); return *this;}

    /**
     * <p>[Required] Specifies the authorizer's Uniform Resource Identifier (URI). For
     * TOKEN authorizers, this must be a well-formed Lambda function URI. The URI
     * should be of the form
     * <code>arn:aws:apigateway:{region}:lambda:path/{service_api}</code>.
     * <code>Region</code> is used to determine the right endpoint. In this case,
     * <code>path</code> is used to indicate that the remaining substring in the URI
     * should be treated as the path to the resource, including the initial
     * <code>/</code>. For Lambda functions, this is usually of the form
     * /2015-03-31/functions/[FunctionARN]/invocations</p>
     */
    inline Authorizer& WithAuthorizerUri(Aws::String&& value) { SetAuthorizerUri(value); return *this;}

    /**
     * <p>[Required] Specifies the authorizer's Uniform Resource Identifier (URI). For
     * TOKEN authorizers, this must be a well-formed Lambda function URI. The URI
     * should be of the form
     * <code>arn:aws:apigateway:{region}:lambda:path/{service_api}</code>.
     * <code>Region</code> is used to determine the right endpoint. In this case,
     * <code>path</code> is used to indicate that the remaining substring in the URI
     * should be treated as the path to the resource, including the initial
     * <code>/</code>. For Lambda functions, this is usually of the form
     * /2015-03-31/functions/[FunctionARN]/invocations</p>
     */
    inline Authorizer& WithAuthorizerUri(const char* value) { SetAuthorizerUri(value); return *this;}

    /**
     * <p>Specifies the credentials required for the authorizer, if any. Two options
     * are available. To specify an IAM role for Amazon API Gateway to assume, use the
     * role's Amazon Resource Name (ARN). To use resource-based permissions on the
     * Lambda function, specify null.</p>
     */
    inline const Aws::String& GetAuthorizerCredentials() const{ return m_authorizerCredentials; }

    /**
     * <p>Specifies the credentials required for the authorizer, if any. Two options
     * are available. To specify an IAM role for Amazon API Gateway to assume, use the
     * role's Amazon Resource Name (ARN). To use resource-based permissions on the
     * Lambda function, specify null.</p>
     */
    inline void SetAuthorizerCredentials(const Aws::String& value) { m_authorizerCredentialsHasBeenSet = true; m_authorizerCredentials = value; }

    /**
     * <p>Specifies the credentials required for the authorizer, if any. Two options
     * are available. To specify an IAM role for Amazon API Gateway to assume, use the
     * role's Amazon Resource Name (ARN). To use resource-based permissions on the
     * Lambda function, specify null.</p>
     */
    inline void SetAuthorizerCredentials(Aws::String&& value) { m_authorizerCredentialsHasBeenSet = true; m_authorizerCredentials = value; }

    /**
     * <p>Specifies the credentials required for the authorizer, if any. Two options
     * are available. To specify an IAM role for Amazon API Gateway to assume, use the
     * role's Amazon Resource Name (ARN). To use resource-based permissions on the
     * Lambda function, specify null.</p>
     */
    inline void SetAuthorizerCredentials(const char* value) { m_authorizerCredentialsHasBeenSet = true; m_authorizerCredentials.assign(value); }

    /**
     * <p>Specifies the credentials required for the authorizer, if any. Two options
     * are available. To specify an IAM role for Amazon API Gateway to assume, use the
     * role's Amazon Resource Name (ARN). To use resource-based permissions on the
     * Lambda function, specify null.</p>
     */
    inline Authorizer& WithAuthorizerCredentials(const Aws::String& value) { SetAuthorizerCredentials(value); return *this;}

    /**
     * <p>Specifies the credentials required for the authorizer, if any. Two options
     * are available. To specify an IAM role for Amazon API Gateway to assume, use the
     * role's Amazon Resource Name (ARN). To use resource-based permissions on the
     * Lambda function, specify null.</p>
     */
    inline Authorizer& WithAuthorizerCredentials(Aws::String&& value) { SetAuthorizerCredentials(value); return *this;}

    /**
     * <p>Specifies the credentials required for the authorizer, if any. Two options
     * are available. To specify an IAM role for Amazon API Gateway to assume, use the
     * role's Amazon Resource Name (ARN). To use resource-based permissions on the
     * Lambda function, specify null.</p>
     */
    inline Authorizer& WithAuthorizerCredentials(const char* value) { SetAuthorizerCredentials(value); return *this;}

    /**
     * <p>[Required] The source of the identity in an incoming request. For TOKEN
     * authorizers, this value is a mapping expression with the same syntax as
     * integration parameter mappings. The only valid source for tokens is 'header', so
     * the expression should match 'method.request.header.[headerName]'. The value of
     * the header '[headerName]' will be interpreted as the incoming token.</p>
     */
    inline const Aws::String& GetIdentitySource() const{ return m_identitySource; }

    /**
     * <p>[Required] The source of the identity in an incoming request. For TOKEN
     * authorizers, this value is a mapping expression with the same syntax as
     * integration parameter mappings. The only valid source for tokens is 'header', so
     * the expression should match 'method.request.header.[headerName]'. The value of
     * the header '[headerName]' will be interpreted as the incoming token.</p>
     */
    inline void SetIdentitySource(const Aws::String& value) { m_identitySourceHasBeenSet = true; m_identitySource = value; }

    /**
     * <p>[Required] The source of the identity in an incoming request. For TOKEN
     * authorizers, this value is a mapping expression with the same syntax as
     * integration parameter mappings. The only valid source for tokens is 'header', so
     * the expression should match 'method.request.header.[headerName]'. The value of
     * the header '[headerName]' will be interpreted as the incoming token.</p>
     */
    inline void SetIdentitySource(Aws::String&& value) { m_identitySourceHasBeenSet = true; m_identitySource = value; }

    /**
     * <p>[Required] The source of the identity in an incoming request. For TOKEN
     * authorizers, this value is a mapping expression with the same syntax as
     * integration parameter mappings. The only valid source for tokens is 'header', so
     * the expression should match 'method.request.header.[headerName]'. The value of
     * the header '[headerName]' will be interpreted as the incoming token.</p>
     */
    inline void SetIdentitySource(const char* value) { m_identitySourceHasBeenSet = true; m_identitySource.assign(value); }

    /**
     * <p>[Required] The source of the identity in an incoming request. For TOKEN
     * authorizers, this value is a mapping expression with the same syntax as
     * integration parameter mappings. The only valid source for tokens is 'header', so
     * the expression should match 'method.request.header.[headerName]'. The value of
     * the header '[headerName]' will be interpreted as the incoming token.</p>
     */
    inline Authorizer& WithIdentitySource(const Aws::String& value) { SetIdentitySource(value); return *this;}

    /**
     * <p>[Required] The source of the identity in an incoming request. For TOKEN
     * authorizers, this value is a mapping expression with the same syntax as
     * integration parameter mappings. The only valid source for tokens is 'header', so
     * the expression should match 'method.request.header.[headerName]'. The value of
     * the header '[headerName]' will be interpreted as the incoming token.</p>
     */
    inline Authorizer& WithIdentitySource(Aws::String&& value) { SetIdentitySource(value); return *this;}

    /**
     * <p>[Required] The source of the identity in an incoming request. For TOKEN
     * authorizers, this value is a mapping expression with the same syntax as
     * integration parameter mappings. The only valid source for tokens is 'header', so
     * the expression should match 'method.request.header.[headerName]'. The value of
     * the header '[headerName]' will be interpreted as the incoming token.</p>
     */
    inline Authorizer& WithIdentitySource(const char* value) { SetIdentitySource(value); return *this;}

    /**
     * <p>A validation expression for the incoming identity. For TOKEN authorizers,
     * this value should be a regular expression. The incoming token from the client is
     * matched against this expression, and will proceed if the token matches. If the
     * token doesn't match, the client receives a 401 Unauthorized response.</p>
     */
    inline const Aws::String& GetIdentityValidationExpression() const{ return m_identityValidationExpression; }

    /**
     * <p>A validation expression for the incoming identity. For TOKEN authorizers,
     * this value should be a regular expression. The incoming token from the client is
     * matched against this expression, and will proceed if the token matches. If the
     * token doesn't match, the client receives a 401 Unauthorized response.</p>
     */
    inline void SetIdentityValidationExpression(const Aws::String& value) { m_identityValidationExpressionHasBeenSet = true; m_identityValidationExpression = value; }

    /**
     * <p>A validation expression for the incoming identity. For TOKEN authorizers,
     * this value should be a regular expression. The incoming token from the client is
     * matched against this expression, and will proceed if the token matches. If the
     * token doesn't match, the client receives a 401 Unauthorized response.</p>
     */
    inline void SetIdentityValidationExpression(Aws::String&& value) { m_identityValidationExpressionHasBeenSet = true; m_identityValidationExpression = value; }

    /**
     * <p>A validation expression for the incoming identity. For TOKEN authorizers,
     * this value should be a regular expression. The incoming token from the client is
     * matched against this expression, and will proceed if the token matches. If the
     * token doesn't match, the client receives a 401 Unauthorized response.</p>
     */
    inline void SetIdentityValidationExpression(const char* value) { m_identityValidationExpressionHasBeenSet = true; m_identityValidationExpression.assign(value); }

    /**
     * <p>A validation expression for the incoming identity. For TOKEN authorizers,
     * this value should be a regular expression. The incoming token from the client is
     * matched against this expression, and will proceed if the token matches. If the
     * token doesn't match, the client receives a 401 Unauthorized response.</p>
     */
    inline Authorizer& WithIdentityValidationExpression(const Aws::String& value) { SetIdentityValidationExpression(value); return *this;}

    /**
     * <p>A validation expression for the incoming identity. For TOKEN authorizers,
     * this value should be a regular expression. The incoming token from the client is
     * matched against this expression, and will proceed if the token matches. If the
     * token doesn't match, the client receives a 401 Unauthorized response.</p>
     */
    inline Authorizer& WithIdentityValidationExpression(Aws::String&& value) { SetIdentityValidationExpression(value); return *this;}

    /**
     * <p>A validation expression for the incoming identity. For TOKEN authorizers,
     * this value should be a regular expression. The incoming token from the client is
     * matched against this expression, and will proceed if the token matches. If the
     * token doesn't match, the client receives a 401 Unauthorized response.</p>
     */
    inline Authorizer& WithIdentityValidationExpression(const char* value) { SetIdentityValidationExpression(value); return *this;}

    /**
     * <p>The TTL in seconds of cached authorizer results. If greater than 0, API
     * Gateway will cache authorizer responses. If this field is not set, the default
     * value is 300. The maximum value is 3600, or 1 hour.</p>
     */
    inline int GetAuthorizerResultTtlInSeconds() const{ return m_authorizerResultTtlInSeconds; }

    /**
     * <p>The TTL in seconds of cached authorizer results. If greater than 0, API
     * Gateway will cache authorizer responses. If this field is not set, the default
     * value is 300. The maximum value is 3600, or 1 hour.</p>
     */
    inline void SetAuthorizerResultTtlInSeconds(int value) { m_authorizerResultTtlInSecondsHasBeenSet = true; m_authorizerResultTtlInSeconds = value; }

    /**
     * <p>The TTL in seconds of cached authorizer results. If greater than 0, API
     * Gateway will cache authorizer responses. If this field is not set, the default
     * value is 300. The maximum value is 3600, or 1 hour.</p>
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
