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
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigatewayv2/model/ConnectionType.h>
#include <aws/apigatewayv2/model/ContentHandlingStrategy.h>
#include <aws/apigatewayv2/model/IntegrationType.h>
#include <aws/apigatewayv2/model/PassthroughBehavior.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ApiGatewayV2
{
namespace Model
{
  class AWS_APIGATEWAYV2_API CreateIntegrationResult
  {
  public:
    CreateIntegrationResult();
    CreateIntegrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateIntegrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The connection ID.</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }

    /**
     * <p>The connection ID.</p>
     */
    inline void SetConnectionId(const Aws::String& value) { m_connectionId = value; }

    /**
     * <p>The connection ID.</p>
     */
    inline void SetConnectionId(Aws::String&& value) { m_connectionId = std::move(value); }

    /**
     * <p>The connection ID.</p>
     */
    inline void SetConnectionId(const char* value) { m_connectionId.assign(value); }

    /**
     * <p>The connection ID.</p>
     */
    inline CreateIntegrationResult& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}

    /**
     * <p>The connection ID.</p>
     */
    inline CreateIntegrationResult& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}

    /**
     * <p>The connection ID.</p>
     */
    inline CreateIntegrationResult& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}


    /**
     * <p>The type of the network connection to the integration endpoint. Currently the
     * only
 valid value is INTERNET, for connections through the public routable

     * internet.</p>
     */
    inline const ConnectionType& GetConnectionType() const{ return m_connectionType; }

    /**
     * <p>The type of the network connection to the integration endpoint. Currently the
     * only
 valid value is INTERNET, for connections through the public routable

     * internet.</p>
     */
    inline void SetConnectionType(const ConnectionType& value) { m_connectionType = value; }

    /**
     * <p>The type of the network connection to the integration endpoint. Currently the
     * only
 valid value is INTERNET, for connections through the public routable

     * internet.</p>
     */
    inline void SetConnectionType(ConnectionType&& value) { m_connectionType = std::move(value); }

    /**
     * <p>The type of the network connection to the integration endpoint. Currently the
     * only
 valid value is INTERNET, for connections through the public routable

     * internet.</p>
     */
    inline CreateIntegrationResult& WithConnectionType(const ConnectionType& value) { SetConnectionType(value); return *this;}

    /**
     * <p>The type of the network connection to the integration endpoint. Currently the
     * only
 valid value is INTERNET, for connections through the public routable

     * internet.</p>
     */
    inline CreateIntegrationResult& WithConnectionType(ConnectionType&& value) { SetConnectionType(std::move(value)); return *this;}


    /**
     * <p>Specifies how to handle response payload content type conversions. Supported

     * values are CONVERT_TO_BINARY and CONVERT_TO_TEXT, with the
 following
     * behaviors:</p><p>
 CONVERT_TO_BINARY: Converts a response payload from a
     * Base64-encoded
 string to the corresponding binary blob.</p><p>

     * CONVERT_TO_TEXT: Converts a response payload from a binary blob to a

     * Base64-encoded string.</p><p>If this property is not defined, the response
     * payload will be passed through from
 the integration response to the route
     * response or method response without
 modification.</p>
     */
    inline const ContentHandlingStrategy& GetContentHandlingStrategy() const{ return m_contentHandlingStrategy; }

    /**
     * <p>Specifies how to handle response payload content type conversions. Supported

     * values are CONVERT_TO_BINARY and CONVERT_TO_TEXT, with the
 following
     * behaviors:</p><p>
 CONVERT_TO_BINARY: Converts a response payload from a
     * Base64-encoded
 string to the corresponding binary blob.</p><p>

     * CONVERT_TO_TEXT: Converts a response payload from a binary blob to a

     * Base64-encoded string.</p><p>If this property is not defined, the response
     * payload will be passed through from
 the integration response to the route
     * response or method response without
 modification.</p>
     */
    inline void SetContentHandlingStrategy(const ContentHandlingStrategy& value) { m_contentHandlingStrategy = value; }

    /**
     * <p>Specifies how to handle response payload content type conversions. Supported

     * values are CONVERT_TO_BINARY and CONVERT_TO_TEXT, with the
 following
     * behaviors:</p><p>
 CONVERT_TO_BINARY: Converts a response payload from a
     * Base64-encoded
 string to the corresponding binary blob.</p><p>

     * CONVERT_TO_TEXT: Converts a response payload from a binary blob to a

     * Base64-encoded string.</p><p>If this property is not defined, the response
     * payload will be passed through from
 the integration response to the route
     * response or method response without
 modification.</p>
     */
    inline void SetContentHandlingStrategy(ContentHandlingStrategy&& value) { m_contentHandlingStrategy = std::move(value); }

    /**
     * <p>Specifies how to handle response payload content type conversions. Supported

     * values are CONVERT_TO_BINARY and CONVERT_TO_TEXT, with the
 following
     * behaviors:</p><p>
 CONVERT_TO_BINARY: Converts a response payload from a
     * Base64-encoded
 string to the corresponding binary blob.</p><p>

     * CONVERT_TO_TEXT: Converts a response payload from a binary blob to a

     * Base64-encoded string.</p><p>If this property is not defined, the response
     * payload will be passed through from
 the integration response to the route
     * response or method response without
 modification.</p>
     */
    inline CreateIntegrationResult& WithContentHandlingStrategy(const ContentHandlingStrategy& value) { SetContentHandlingStrategy(value); return *this;}

    /**
     * <p>Specifies how to handle response payload content type conversions. Supported

     * values are CONVERT_TO_BINARY and CONVERT_TO_TEXT, with the
 following
     * behaviors:</p><p>
 CONVERT_TO_BINARY: Converts a response payload from a
     * Base64-encoded
 string to the corresponding binary blob.</p><p>

     * CONVERT_TO_TEXT: Converts a response payload from a binary blob to a

     * Base64-encoded string.</p><p>If this property is not defined, the response
     * payload will be passed through from
 the integration response to the route
     * response or method response without
 modification.</p>
     */
    inline CreateIntegrationResult& WithContentHandlingStrategy(ContentHandlingStrategy&& value) { SetContentHandlingStrategy(std::move(value)); return *this;}


    /**
     * <p>Specifies the credentials required for the integration, if any. For AWS

     * integrations, three options are available. To specify an IAM Role for API
     * Gateway to
 assume, use the role's Amazon Resource Name (ARN). To require that
     * the caller's
 identity be passed through from the request, specify the string

     * arn:aws:iam::*:user/ *. To use resource-based permissions on supported
 AWS
     * services, specify null.</p>
     */
    inline const Aws::String& GetCredentialsArn() const{ return m_credentialsArn; }

    /**
     * <p>Specifies the credentials required for the integration, if any. For AWS

     * integrations, three options are available. To specify an IAM Role for API
     * Gateway to
 assume, use the role's Amazon Resource Name (ARN). To require that
     * the caller's
 identity be passed through from the request, specify the string

     * arn:aws:iam::*:user/ *. To use resource-based permissions on supported
 AWS
     * services, specify null.</p>
     */
    inline void SetCredentialsArn(const Aws::String& value) { m_credentialsArn = value; }

    /**
     * <p>Specifies the credentials required for the integration, if any. For AWS

     * integrations, three options are available. To specify an IAM Role for API
     * Gateway to
 assume, use the role's Amazon Resource Name (ARN). To require that
     * the caller's
 identity be passed through from the request, specify the string

     * arn:aws:iam::*:user/ *. To use resource-based permissions on supported
 AWS
     * services, specify null.</p>
     */
    inline void SetCredentialsArn(Aws::String&& value) { m_credentialsArn = std::move(value); }

    /**
     * <p>Specifies the credentials required for the integration, if any. For AWS

     * integrations, three options are available. To specify an IAM Role for API
     * Gateway to
 assume, use the role's Amazon Resource Name (ARN). To require that
     * the caller's
 identity be passed through from the request, specify the string

     * arn:aws:iam::*:user/ *. To use resource-based permissions on supported
 AWS
     * services, specify null.</p>
     */
    inline void SetCredentialsArn(const char* value) { m_credentialsArn.assign(value); }

    /**
     * <p>Specifies the credentials required for the integration, if any. For AWS

     * integrations, three options are available. To specify an IAM Role for API
     * Gateway to
 assume, use the role's Amazon Resource Name (ARN). To require that
     * the caller's
 identity be passed through from the request, specify the string

     * arn:aws:iam::*:user/ *. To use resource-based permissions on supported
 AWS
     * services, specify null.</p>
     */
    inline CreateIntegrationResult& WithCredentialsArn(const Aws::String& value) { SetCredentialsArn(value); return *this;}

    /**
     * <p>Specifies the credentials required for the integration, if any. For AWS

     * integrations, three options are available. To specify an IAM Role for API
     * Gateway to
 assume, use the role's Amazon Resource Name (ARN). To require that
     * the caller's
 identity be passed through from the request, specify the string

     * arn:aws:iam::*:user/ *. To use resource-based permissions on supported
 AWS
     * services, specify null.</p>
     */
    inline CreateIntegrationResult& WithCredentialsArn(Aws::String&& value) { SetCredentialsArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the credentials required for the integration, if any. For AWS

     * integrations, three options are available. To specify an IAM Role for API
     * Gateway to
 assume, use the role's Amazon Resource Name (ARN). To require that
     * the caller's
 identity be passed through from the request, specify the string

     * arn:aws:iam::*:user/ *. To use resource-based permissions on supported
 AWS
     * services, specify null.</p>
     */
    inline CreateIntegrationResult& WithCredentialsArn(const char* value) { SetCredentialsArn(value); return *this;}


    /**
     * <p>Represents the description of an integration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Represents the description of an integration.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>Represents the description of an integration.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>Represents the description of an integration.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>Represents the description of an integration.</p>
     */
    inline CreateIntegrationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Represents the description of an integration.</p>
     */
    inline CreateIntegrationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Represents the description of an integration.</p>
     */
    inline CreateIntegrationResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Represents the identifier of an integration.</p>
     */
    inline const Aws::String& GetIntegrationId() const{ return m_integrationId; }

    /**
     * <p>Represents the identifier of an integration.</p>
     */
    inline void SetIntegrationId(const Aws::String& value) { m_integrationId = value; }

    /**
     * <p>Represents the identifier of an integration.</p>
     */
    inline void SetIntegrationId(Aws::String&& value) { m_integrationId = std::move(value); }

    /**
     * <p>Represents the identifier of an integration.</p>
     */
    inline void SetIntegrationId(const char* value) { m_integrationId.assign(value); }

    /**
     * <p>Represents the identifier of an integration.</p>
     */
    inline CreateIntegrationResult& WithIntegrationId(const Aws::String& value) { SetIntegrationId(value); return *this;}

    /**
     * <p>Represents the identifier of an integration.</p>
     */
    inline CreateIntegrationResult& WithIntegrationId(Aws::String&& value) { SetIntegrationId(std::move(value)); return *this;}

    /**
     * <p>Represents the identifier of an integration.</p>
     */
    inline CreateIntegrationResult& WithIntegrationId(const char* value) { SetIntegrationId(value); return *this;}


    /**
     * <p>Specifies the integration's HTTP method type.</p>
     */
    inline const Aws::String& GetIntegrationMethod() const{ return m_integrationMethod; }

    /**
     * <p>Specifies the integration's HTTP method type.</p>
     */
    inline void SetIntegrationMethod(const Aws::String& value) { m_integrationMethod = value; }

    /**
     * <p>Specifies the integration's HTTP method type.</p>
     */
    inline void SetIntegrationMethod(Aws::String&& value) { m_integrationMethod = std::move(value); }

    /**
     * <p>Specifies the integration's HTTP method type.</p>
     */
    inline void SetIntegrationMethod(const char* value) { m_integrationMethod.assign(value); }

    /**
     * <p>Specifies the integration's HTTP method type.</p>
     */
    inline CreateIntegrationResult& WithIntegrationMethod(const Aws::String& value) { SetIntegrationMethod(value); return *this;}

    /**
     * <p>Specifies the integration's HTTP method type.</p>
     */
    inline CreateIntegrationResult& WithIntegrationMethod(Aws::String&& value) { SetIntegrationMethod(std::move(value)); return *this;}

    /**
     * <p>Specifies the integration's HTTP method type.</p>
     */
    inline CreateIntegrationResult& WithIntegrationMethod(const char* value) { SetIntegrationMethod(value); return *this;}


    /**
     * <p>The integration response selection expression for the integration. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/apigateway-websocket-api-selection-expressions.html#apigateway-websocket-api-integration-response-selection-expressions">Integration
     * Response Selection Expressions</a>.</p>
     */
    inline const Aws::String& GetIntegrationResponseSelectionExpression() const{ return m_integrationResponseSelectionExpression; }

    /**
     * <p>The integration response selection expression for the integration. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/apigateway-websocket-api-selection-expressions.html#apigateway-websocket-api-integration-response-selection-expressions">Integration
     * Response Selection Expressions</a>.</p>
     */
    inline void SetIntegrationResponseSelectionExpression(const Aws::String& value) { m_integrationResponseSelectionExpression = value; }

    /**
     * <p>The integration response selection expression for the integration. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/apigateway-websocket-api-selection-expressions.html#apigateway-websocket-api-integration-response-selection-expressions">Integration
     * Response Selection Expressions</a>.</p>
     */
    inline void SetIntegrationResponseSelectionExpression(Aws::String&& value) { m_integrationResponseSelectionExpression = std::move(value); }

    /**
     * <p>The integration response selection expression for the integration. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/apigateway-websocket-api-selection-expressions.html#apigateway-websocket-api-integration-response-selection-expressions">Integration
     * Response Selection Expressions</a>.</p>
     */
    inline void SetIntegrationResponseSelectionExpression(const char* value) { m_integrationResponseSelectionExpression.assign(value); }

    /**
     * <p>The integration response selection expression for the integration. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/apigateway-websocket-api-selection-expressions.html#apigateway-websocket-api-integration-response-selection-expressions">Integration
     * Response Selection Expressions</a>.</p>
     */
    inline CreateIntegrationResult& WithIntegrationResponseSelectionExpression(const Aws::String& value) { SetIntegrationResponseSelectionExpression(value); return *this;}

    /**
     * <p>The integration response selection expression for the integration. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/apigateway-websocket-api-selection-expressions.html#apigateway-websocket-api-integration-response-selection-expressions">Integration
     * Response Selection Expressions</a>.</p>
     */
    inline CreateIntegrationResult& WithIntegrationResponseSelectionExpression(Aws::String&& value) { SetIntegrationResponseSelectionExpression(std::move(value)); return *this;}

    /**
     * <p>The integration response selection expression for the integration. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/apigateway-websocket-api-selection-expressions.html#apigateway-websocket-api-integration-response-selection-expressions">Integration
     * Response Selection Expressions</a>.</p>
     */
    inline CreateIntegrationResult& WithIntegrationResponseSelectionExpression(const char* value) { SetIntegrationResponseSelectionExpression(value); return *this;}


    /**
     * <p>The integration type of an integration. One of the following:</p><p>
 AWS:
     * for integrating the route or method request with an AWS service
 action,
     * including the Lambda function-invoking action. With the Lambda

     * function-invoking action, this is referred to as the Lambda custom integration.
     * With
 any other AWS service action, this is known as AWS integration.</p><p>

     * AWS_PROXY: for integrating the route or method request with the Lambda

     * function-invoking action with the client request passed through as-is. This

     * integration is also referred to as Lambda proxy integration.</p><p>
 HTTP: for
     * integrating the route or method request with an HTTP
 endpoint. This

     * integration is also referred to as the HTTP custom integration.</p><p>

     * HTTP_PROXY: for integrating route or method request with an HTTP
 endpoint, with
     * the client
 request passed through as-is. This is also referred to as HTTP
     * proxy
 integration.</p><p>
 MOCK: for integrating the route or method request
     * with API Gateway as a
 "loopback" endpoint without invoking any backend.</p>
     */
    inline const IntegrationType& GetIntegrationType() const{ return m_integrationType; }

    /**
     * <p>The integration type of an integration. One of the following:</p><p>
 AWS:
     * for integrating the route or method request with an AWS service
 action,
     * including the Lambda function-invoking action. With the Lambda

     * function-invoking action, this is referred to as the Lambda custom integration.
     * With
 any other AWS service action, this is known as AWS integration.</p><p>

     * AWS_PROXY: for integrating the route or method request with the Lambda

     * function-invoking action with the client request passed through as-is. This

     * integration is also referred to as Lambda proxy integration.</p><p>
 HTTP: for
     * integrating the route or method request with an HTTP
 endpoint. This

     * integration is also referred to as the HTTP custom integration.</p><p>

     * HTTP_PROXY: for integrating route or method request with an HTTP
 endpoint, with
     * the client
 request passed through as-is. This is also referred to as HTTP
     * proxy
 integration.</p><p>
 MOCK: for integrating the route or method request
     * with API Gateway as a
 "loopback" endpoint without invoking any backend.</p>
     */
    inline void SetIntegrationType(const IntegrationType& value) { m_integrationType = value; }

    /**
     * <p>The integration type of an integration. One of the following:</p><p>
 AWS:
     * for integrating the route or method request with an AWS service
 action,
     * including the Lambda function-invoking action. With the Lambda

     * function-invoking action, this is referred to as the Lambda custom integration.
     * With
 any other AWS service action, this is known as AWS integration.</p><p>

     * AWS_PROXY: for integrating the route or method request with the Lambda

     * function-invoking action with the client request passed through as-is. This

     * integration is also referred to as Lambda proxy integration.</p><p>
 HTTP: for
     * integrating the route or method request with an HTTP
 endpoint. This

     * integration is also referred to as the HTTP custom integration.</p><p>

     * HTTP_PROXY: for integrating route or method request with an HTTP
 endpoint, with
     * the client
 request passed through as-is. This is also referred to as HTTP
     * proxy
 integration.</p><p>
 MOCK: for integrating the route or method request
     * with API Gateway as a
 "loopback" endpoint without invoking any backend.</p>
     */
    inline void SetIntegrationType(IntegrationType&& value) { m_integrationType = std::move(value); }

    /**
     * <p>The integration type of an integration. One of the following:</p><p>
 AWS:
     * for integrating the route or method request with an AWS service
 action,
     * including the Lambda function-invoking action. With the Lambda

     * function-invoking action, this is referred to as the Lambda custom integration.
     * With
 any other AWS service action, this is known as AWS integration.</p><p>

     * AWS_PROXY: for integrating the route or method request with the Lambda

     * function-invoking action with the client request passed through as-is. This

     * integration is also referred to as Lambda proxy integration.</p><p>
 HTTP: for
     * integrating the route or method request with an HTTP
 endpoint. This

     * integration is also referred to as the HTTP custom integration.</p><p>

     * HTTP_PROXY: for integrating route or method request with an HTTP
 endpoint, with
     * the client
 request passed through as-is. This is also referred to as HTTP
     * proxy
 integration.</p><p>
 MOCK: for integrating the route or method request
     * with API Gateway as a
 "loopback" endpoint without invoking any backend.</p>
     */
    inline CreateIntegrationResult& WithIntegrationType(const IntegrationType& value) { SetIntegrationType(value); return *this;}

    /**
     * <p>The integration type of an integration. One of the following:</p><p>
 AWS:
     * for integrating the route or method request with an AWS service
 action,
     * including the Lambda function-invoking action. With the Lambda

     * function-invoking action, this is referred to as the Lambda custom integration.
     * With
 any other AWS service action, this is known as AWS integration.</p><p>

     * AWS_PROXY: for integrating the route or method request with the Lambda

     * function-invoking action with the client request passed through as-is. This

     * integration is also referred to as Lambda proxy integration.</p><p>
 HTTP: for
     * integrating the route or method request with an HTTP
 endpoint. This

     * integration is also referred to as the HTTP custom integration.</p><p>

     * HTTP_PROXY: for integrating route or method request with an HTTP
 endpoint, with
     * the client
 request passed through as-is. This is also referred to as HTTP
     * proxy
 integration.</p><p>
 MOCK: for integrating the route or method request
     * with API Gateway as a
 "loopback" endpoint without invoking any backend.</p>
     */
    inline CreateIntegrationResult& WithIntegrationType(IntegrationType&& value) { SetIntegrationType(std::move(value)); return *this;}


    /**
     * <p>For a Lambda proxy integration, this is the URI of the Lambda function.</p>
     */
    inline const Aws::String& GetIntegrationUri() const{ return m_integrationUri; }

    /**
     * <p>For a Lambda proxy integration, this is the URI of the Lambda function.</p>
     */
    inline void SetIntegrationUri(const Aws::String& value) { m_integrationUri = value; }

    /**
     * <p>For a Lambda proxy integration, this is the URI of the Lambda function.</p>
     */
    inline void SetIntegrationUri(Aws::String&& value) { m_integrationUri = std::move(value); }

    /**
     * <p>For a Lambda proxy integration, this is the URI of the Lambda function.</p>
     */
    inline void SetIntegrationUri(const char* value) { m_integrationUri.assign(value); }

    /**
     * <p>For a Lambda proxy integration, this is the URI of the Lambda function.</p>
     */
    inline CreateIntegrationResult& WithIntegrationUri(const Aws::String& value) { SetIntegrationUri(value); return *this;}

    /**
     * <p>For a Lambda proxy integration, this is the URI of the Lambda function.</p>
     */
    inline CreateIntegrationResult& WithIntegrationUri(Aws::String&& value) { SetIntegrationUri(std::move(value)); return *this;}

    /**
     * <p>For a Lambda proxy integration, this is the URI of the Lambda function.</p>
     */
    inline CreateIntegrationResult& WithIntegrationUri(const char* value) { SetIntegrationUri(value); return *this;}


    /**
     * <p>Specifies the pass-through behavior for incoming requests based on the

     * Content-Type header in the request, and the available mapping
 templates
     * specified as the requestTemplates property on the
 Integration resource. There
     * are three valid values:
 WHEN_NO_MATCH, WHEN_NO_TEMPLATES, and
 NEVER.</p><p>

     * WHEN_NO_MATCH passes the request body for unmapped content types through
 to the
     * integration backend without transformation.</p><p>
 NEVER rejects unmapped
     * content types with an HTTP 415 Unsupported
 Media Type response.</p><p>

     * WHEN_NO_TEMPLATES allows pass-through when the integration has no
 content types
     * mapped to templates. However, if there is at least one content type
 defined,
     * unmapped content types will be rejected with the same HTTP 415
 Unsupported
     * Media Type response.</p>
     */
    inline const PassthroughBehavior& GetPassthroughBehavior() const{ return m_passthroughBehavior; }

    /**
     * <p>Specifies the pass-through behavior for incoming requests based on the

     * Content-Type header in the request, and the available mapping
 templates
     * specified as the requestTemplates property on the
 Integration resource. There
     * are three valid values:
 WHEN_NO_MATCH, WHEN_NO_TEMPLATES, and
 NEVER.</p><p>

     * WHEN_NO_MATCH passes the request body for unmapped content types through
 to the
     * integration backend without transformation.</p><p>
 NEVER rejects unmapped
     * content types with an HTTP 415 Unsupported
 Media Type response.</p><p>

     * WHEN_NO_TEMPLATES allows pass-through when the integration has no
 content types
     * mapped to templates. However, if there is at least one content type
 defined,
     * unmapped content types will be rejected with the same HTTP 415
 Unsupported
     * Media Type response.</p>
     */
    inline void SetPassthroughBehavior(const PassthroughBehavior& value) { m_passthroughBehavior = value; }

    /**
     * <p>Specifies the pass-through behavior for incoming requests based on the

     * Content-Type header in the request, and the available mapping
 templates
     * specified as the requestTemplates property on the
 Integration resource. There
     * are three valid values:
 WHEN_NO_MATCH, WHEN_NO_TEMPLATES, and
 NEVER.</p><p>

     * WHEN_NO_MATCH passes the request body for unmapped content types through
 to the
     * integration backend without transformation.</p><p>
 NEVER rejects unmapped
     * content types with an HTTP 415 Unsupported
 Media Type response.</p><p>

     * WHEN_NO_TEMPLATES allows pass-through when the integration has no
 content types
     * mapped to templates. However, if there is at least one content type
 defined,
     * unmapped content types will be rejected with the same HTTP 415
 Unsupported
     * Media Type response.</p>
     */
    inline void SetPassthroughBehavior(PassthroughBehavior&& value) { m_passthroughBehavior = std::move(value); }

    /**
     * <p>Specifies the pass-through behavior for incoming requests based on the

     * Content-Type header in the request, and the available mapping
 templates
     * specified as the requestTemplates property on the
 Integration resource. There
     * are three valid values:
 WHEN_NO_MATCH, WHEN_NO_TEMPLATES, and
 NEVER.</p><p>

     * WHEN_NO_MATCH passes the request body for unmapped content types through
 to the
     * integration backend without transformation.</p><p>
 NEVER rejects unmapped
     * content types with an HTTP 415 Unsupported
 Media Type response.</p><p>

     * WHEN_NO_TEMPLATES allows pass-through when the integration has no
 content types
     * mapped to templates. However, if there is at least one content type
 defined,
     * unmapped content types will be rejected with the same HTTP 415
 Unsupported
     * Media Type response.</p>
     */
    inline CreateIntegrationResult& WithPassthroughBehavior(const PassthroughBehavior& value) { SetPassthroughBehavior(value); return *this;}

    /**
     * <p>Specifies the pass-through behavior for incoming requests based on the

     * Content-Type header in the request, and the available mapping
 templates
     * specified as the requestTemplates property on the
 Integration resource. There
     * are three valid values:
 WHEN_NO_MATCH, WHEN_NO_TEMPLATES, and
 NEVER.</p><p>

     * WHEN_NO_MATCH passes the request body for unmapped content types through
 to the
     * integration backend without transformation.</p><p>
 NEVER rejects unmapped
     * content types with an HTTP 415 Unsupported
 Media Type response.</p><p>

     * WHEN_NO_TEMPLATES allows pass-through when the integration has no
 content types
     * mapped to templates. However, if there is at least one content type
 defined,
     * unmapped content types will be rejected with the same HTTP 415
 Unsupported
     * Media Type response.</p>
     */
    inline CreateIntegrationResult& WithPassthroughBehavior(PassthroughBehavior&& value) { SetPassthroughBehavior(std::move(value)); return *this;}


    /**
     * <p>A key-value map specifying request parameters that are passed from the
     * method
 request to the backend. The key is an integration request parameter name
     * and the
 associated value is a method request parameter value or static value
     * that must be
 enclosed within single quotes and pre-encoded as required by the
     * backend. The method
 request parameter value must match the pattern of

     * method.request.{location}.{name}
 , where 
 {location}
  is querystring, path,
     * or header; and 
 {name}
  must be a valid and unique method request parameter
     * name.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestParameters() const{ return m_requestParameters; }

    /**
     * <p>A key-value map specifying request parameters that are passed from the
     * method
 request to the backend. The key is an integration request parameter name
     * and the
 associated value is a method request parameter value or static value
     * that must be
 enclosed within single quotes and pre-encoded as required by the
     * backend. The method
 request parameter value must match the pattern of

     * method.request.{location}.{name}
 , where 
 {location}
  is querystring, path,
     * or header; and 
 {name}
  must be a valid and unique method request parameter
     * name.</p>
     */
    inline void SetRequestParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_requestParameters = value; }

    /**
     * <p>A key-value map specifying request parameters that are passed from the
     * method
 request to the backend. The key is an integration request parameter name
     * and the
 associated value is a method request parameter value or static value
     * that must be
 enclosed within single quotes and pre-encoded as required by the
     * backend. The method
 request parameter value must match the pattern of

     * method.request.{location}.{name}
 , where 
 {location}
  is querystring, path,
     * or header; and 
 {name}
  must be a valid and unique method request parameter
     * name.</p>
     */
    inline void SetRequestParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_requestParameters = std::move(value); }

    /**
     * <p>A key-value map specifying request parameters that are passed from the
     * method
 request to the backend. The key is an integration request parameter name
     * and the
 associated value is a method request parameter value or static value
     * that must be
 enclosed within single quotes and pre-encoded as required by the
     * backend. The method
 request parameter value must match the pattern of

     * method.request.{location}.{name}
 , where 
 {location}
  is querystring, path,
     * or header; and 
 {name}
  must be a valid and unique method request parameter
     * name.</p>
     */
    inline CreateIntegrationResult& WithRequestParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestParameters(value); return *this;}

    /**
     * <p>A key-value map specifying request parameters that are passed from the
     * method
 request to the backend. The key is an integration request parameter name
     * and the
 associated value is a method request parameter value or static value
     * that must be
 enclosed within single quotes and pre-encoded as required by the
     * backend. The method
 request parameter value must match the pattern of

     * method.request.{location}.{name}
 , where 
 {location}
  is querystring, path,
     * or header; and 
 {name}
  must be a valid and unique method request parameter
     * name.</p>
     */
    inline CreateIntegrationResult& WithRequestParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestParameters(std::move(value)); return *this;}

    /**
     * <p>A key-value map specifying request parameters that are passed from the
     * method
 request to the backend. The key is an integration request parameter name
     * and the
 associated value is a method request parameter value or static value
     * that must be
 enclosed within single quotes and pre-encoded as required by the
     * backend. The method
 request parameter value must match the pattern of

     * method.request.{location}.{name}
 , where 
 {location}
  is querystring, path,
     * or header; and 
 {name}
  must be a valid and unique method request parameter
     * name.</p>
     */
    inline CreateIntegrationResult& AddRequestParameters(const Aws::String& key, const Aws::String& value) { m_requestParameters.emplace(key, value); return *this; }

    /**
     * <p>A key-value map specifying request parameters that are passed from the
     * method
 request to the backend. The key is an integration request parameter name
     * and the
 associated value is a method request parameter value or static value
     * that must be
 enclosed within single quotes and pre-encoded as required by the
     * backend. The method
 request parameter value must match the pattern of

     * method.request.{location}.{name}
 , where 
 {location}
  is querystring, path,
     * or header; and 
 {name}
  must be a valid and unique method request parameter
     * name.</p>
     */
    inline CreateIntegrationResult& AddRequestParameters(Aws::String&& key, const Aws::String& value) { m_requestParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key-value map specifying request parameters that are passed from the
     * method
 request to the backend. The key is an integration request parameter name
     * and the
 associated value is a method request parameter value or static value
     * that must be
 enclosed within single quotes and pre-encoded as required by the
     * backend. The method
 request parameter value must match the pattern of

     * method.request.{location}.{name}
 , where 
 {location}
  is querystring, path,
     * or header; and 
 {name}
  must be a valid and unique method request parameter
     * name.</p>
     */
    inline CreateIntegrationResult& AddRequestParameters(const Aws::String& key, Aws::String&& value) { m_requestParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key-value map specifying request parameters that are passed from the
     * method
 request to the backend. The key is an integration request parameter name
     * and the
 associated value is a method request parameter value or static value
     * that must be
 enclosed within single quotes and pre-encoded as required by the
     * backend. The method
 request parameter value must match the pattern of

     * method.request.{location}.{name}
 , where 
 {location}
  is querystring, path,
     * or header; and 
 {name}
  must be a valid and unique method request parameter
     * name.</p>
     */
    inline CreateIntegrationResult& AddRequestParameters(Aws::String&& key, Aws::String&& value) { m_requestParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A key-value map specifying request parameters that are passed from the
     * method
 request to the backend. The key is an integration request parameter name
     * and the
 associated value is a method request parameter value or static value
     * that must be
 enclosed within single quotes and pre-encoded as required by the
     * backend. The method
 request parameter value must match the pattern of

     * method.request.{location}.{name}
 , where 
 {location}
  is querystring, path,
     * or header; and 
 {name}
  must be a valid and unique method request parameter
     * name.</p>
     */
    inline CreateIntegrationResult& AddRequestParameters(const char* key, Aws::String&& value) { m_requestParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key-value map specifying request parameters that are passed from the
     * method
 request to the backend. The key is an integration request parameter name
     * and the
 associated value is a method request parameter value or static value
     * that must be
 enclosed within single quotes and pre-encoded as required by the
     * backend. The method
 request parameter value must match the pattern of

     * method.request.{location}.{name}
 , where 
 {location}
  is querystring, path,
     * or header; and 
 {name}
  must be a valid and unique method request parameter
     * name.</p>
     */
    inline CreateIntegrationResult& AddRequestParameters(Aws::String&& key, const char* value) { m_requestParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key-value map specifying request parameters that are passed from the
     * method
 request to the backend. The key is an integration request parameter name
     * and the
 associated value is a method request parameter value or static value
     * that must be
 enclosed within single quotes and pre-encoded as required by the
     * backend. The method
 request parameter value must match the pattern of

     * method.request.{location}.{name}
 , where 
 {location}
  is querystring, path,
     * or header; and 
 {name}
  must be a valid and unique method request parameter
     * name.</p>
     */
    inline CreateIntegrationResult& AddRequestParameters(const char* key, const char* value) { m_requestParameters.emplace(key, value); return *this; }


    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload
 based on the value of the Content-Type header sent by the client. The
     * content type
 value is the key in this map, and the template (as a String) is
     * the value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestTemplates() const{ return m_requestTemplates; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload
 based on the value of the Content-Type header sent by the client. The
     * content type
 value is the key in this map, and the template (as a String) is
     * the value.</p>
     */
    inline void SetRequestTemplates(const Aws::Map<Aws::String, Aws::String>& value) { m_requestTemplates = value; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload
 based on the value of the Content-Type header sent by the client. The
     * content type
 value is the key in this map, and the template (as a String) is
     * the value.</p>
     */
    inline void SetRequestTemplates(Aws::Map<Aws::String, Aws::String>&& value) { m_requestTemplates = std::move(value); }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload
 based on the value of the Content-Type header sent by the client. The
     * content type
 value is the key in this map, and the template (as a String) is
     * the value.</p>
     */
    inline CreateIntegrationResult& WithRequestTemplates(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestTemplates(value); return *this;}

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload
 based on the value of the Content-Type header sent by the client. The
     * content type
 value is the key in this map, and the template (as a String) is
     * the value.</p>
     */
    inline CreateIntegrationResult& WithRequestTemplates(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestTemplates(std::move(value)); return *this;}

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload
 based on the value of the Content-Type header sent by the client. The
     * content type
 value is the key in this map, and the template (as a String) is
     * the value.</p>
     */
    inline CreateIntegrationResult& AddRequestTemplates(const Aws::String& key, const Aws::String& value) { m_requestTemplates.emplace(key, value); return *this; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload
 based on the value of the Content-Type header sent by the client. The
     * content type
 value is the key in this map, and the template (as a String) is
     * the value.</p>
     */
    inline CreateIntegrationResult& AddRequestTemplates(Aws::String&& key, const Aws::String& value) { m_requestTemplates.emplace(std::move(key), value); return *this; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload
 based on the value of the Content-Type header sent by the client. The
     * content type
 value is the key in this map, and the template (as a String) is
     * the value.</p>
     */
    inline CreateIntegrationResult& AddRequestTemplates(const Aws::String& key, Aws::String&& value) { m_requestTemplates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload
 based on the value of the Content-Type header sent by the client. The
     * content type
 value is the key in this map, and the template (as a String) is
     * the value.</p>
     */
    inline CreateIntegrationResult& AddRequestTemplates(Aws::String&& key, Aws::String&& value) { m_requestTemplates.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload
 based on the value of the Content-Type header sent by the client. The
     * content type
 value is the key in this map, and the template (as a String) is
     * the value.</p>
     */
    inline CreateIntegrationResult& AddRequestTemplates(const char* key, Aws::String&& value) { m_requestTemplates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload
 based on the value of the Content-Type header sent by the client. The
     * content type
 value is the key in this map, and the template (as a String) is
     * the value.</p>
     */
    inline CreateIntegrationResult& AddRequestTemplates(Aws::String&& key, const char* value) { m_requestTemplates.emplace(std::move(key), value); return *this; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload
 based on the value of the Content-Type header sent by the client. The
     * content type
 value is the key in this map, and the template (as a String) is
     * the value.</p>
     */
    inline CreateIntegrationResult& AddRequestTemplates(const char* key, const char* value) { m_requestTemplates.emplace(key, value); return *this; }


    /**
     * <p>The template selection expression for the integration.</p>
     */
    inline const Aws::String& GetTemplateSelectionExpression() const{ return m_templateSelectionExpression; }

    /**
     * <p>The template selection expression for the integration.</p>
     */
    inline void SetTemplateSelectionExpression(const Aws::String& value) { m_templateSelectionExpression = value; }

    /**
     * <p>The template selection expression for the integration.</p>
     */
    inline void SetTemplateSelectionExpression(Aws::String&& value) { m_templateSelectionExpression = std::move(value); }

    /**
     * <p>The template selection expression for the integration.</p>
     */
    inline void SetTemplateSelectionExpression(const char* value) { m_templateSelectionExpression.assign(value); }

    /**
     * <p>The template selection expression for the integration.</p>
     */
    inline CreateIntegrationResult& WithTemplateSelectionExpression(const Aws::String& value) { SetTemplateSelectionExpression(value); return *this;}

    /**
     * <p>The template selection expression for the integration.</p>
     */
    inline CreateIntegrationResult& WithTemplateSelectionExpression(Aws::String&& value) { SetTemplateSelectionExpression(std::move(value)); return *this;}

    /**
     * <p>The template selection expression for the integration.</p>
     */
    inline CreateIntegrationResult& WithTemplateSelectionExpression(const char* value) { SetTemplateSelectionExpression(value); return *this;}


    /**
     * <p>Custom timeout between 50 and 29,000 milliseconds. The default value is
     * 29,000
 milliseconds or 29 seconds.</p>
     */
    inline int GetTimeoutInMillis() const{ return m_timeoutInMillis; }

    /**
     * <p>Custom timeout between 50 and 29,000 milliseconds. The default value is
     * 29,000
 milliseconds or 29 seconds.</p>
     */
    inline void SetTimeoutInMillis(int value) { m_timeoutInMillis = value; }

    /**
     * <p>Custom timeout between 50 and 29,000 milliseconds. The default value is
     * 29,000
 milliseconds or 29 seconds.</p>
     */
    inline CreateIntegrationResult& WithTimeoutInMillis(int value) { SetTimeoutInMillis(value); return *this;}

  private:

    Aws::String m_connectionId;

    ConnectionType m_connectionType;

    ContentHandlingStrategy m_contentHandlingStrategy;

    Aws::String m_credentialsArn;

    Aws::String m_description;

    Aws::String m_integrationId;

    Aws::String m_integrationMethod;

    Aws::String m_integrationResponseSelectionExpression;

    IntegrationType m_integrationType;

    Aws::String m_integrationUri;

    PassthroughBehavior m_passthroughBehavior;

    Aws::Map<Aws::String, Aws::String> m_requestParameters;

    Aws::Map<Aws::String, Aws::String> m_requestTemplates;

    Aws::String m_templateSelectionExpression;

    int m_timeoutInMillis;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
