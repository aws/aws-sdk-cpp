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
#include <aws/apigatewayv2/ApiGatewayV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigatewayv2/model/ConnectionType.h>
#include <aws/apigatewayv2/model/ContentHandlingStrategy.h>
#include <aws/apigatewayv2/model/IntegrationType.h>
#include <aws/apigatewayv2/model/PassthroughBehavior.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace ApiGatewayV2
{
namespace Model
{

  /**
   */
  class AWS_APIGATEWAYV2_API CreateIntegrationRequest : public ApiGatewayV2Request
  {
  public:
    CreateIntegrationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateIntegration"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The API identifier.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }

    /**
     * <p>The API identifier.</p>
     */
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }

    /**
     * <p>The API identifier.</p>
     */
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }

    /**
     * <p>The API identifier.</p>
     */
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }

    /**
     * <p>The API identifier.</p>
     */
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }

    /**
     * <p>The API identifier.</p>
     */
    inline CreateIntegrationRequest& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}

    /**
     * <p>The API identifier.</p>
     */
    inline CreateIntegrationRequest& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}

    /**
     * <p>The API identifier.</p>
     */
    inline CreateIntegrationRequest& WithApiId(const char* value) { SetApiId(value); return *this;}


    /**
     * <p>The connection ID.</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }

    /**
     * <p>The connection ID.</p>
     */
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }

    /**
     * <p>The connection ID.</p>
     */
    inline void SetConnectionId(const Aws::String& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }

    /**
     * <p>The connection ID.</p>
     */
    inline void SetConnectionId(Aws::String&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::move(value); }

    /**
     * <p>The connection ID.</p>
     */
    inline void SetConnectionId(const char* value) { m_connectionIdHasBeenSet = true; m_connectionId.assign(value); }

    /**
     * <p>The connection ID.</p>
     */
    inline CreateIntegrationRequest& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}

    /**
     * <p>The connection ID.</p>
     */
    inline CreateIntegrationRequest& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}

    /**
     * <p>The connection ID.</p>
     */
    inline CreateIntegrationRequest& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}


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
    inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }

    /**
     * <p>The type of the network connection to the integration endpoint. Currently the
     * only
 valid value is INTERNET, for connections through the public routable

     * internet.</p>
     */
    inline void SetConnectionType(const ConnectionType& value) { m_connectionTypeHasBeenSet = true; m_connectionType = value; }

    /**
     * <p>The type of the network connection to the integration endpoint. Currently the
     * only
 valid value is INTERNET, for connections through the public routable

     * internet.</p>
     */
    inline void SetConnectionType(ConnectionType&& value) { m_connectionTypeHasBeenSet = true; m_connectionType = std::move(value); }

    /**
     * <p>The type of the network connection to the integration endpoint. Currently the
     * only
 valid value is INTERNET, for connections through the public routable

     * internet.</p>
     */
    inline CreateIntegrationRequest& WithConnectionType(const ConnectionType& value) { SetConnectionType(value); return *this;}

    /**
     * <p>The type of the network connection to the integration endpoint. Currently the
     * only
 valid value is INTERNET, for connections through the public routable

     * internet.</p>
     */
    inline CreateIntegrationRequest& WithConnectionType(ConnectionType&& value) { SetConnectionType(std::move(value)); return *this;}


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
    inline bool ContentHandlingStrategyHasBeenSet() const { return m_contentHandlingStrategyHasBeenSet; }

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
    inline void SetContentHandlingStrategy(const ContentHandlingStrategy& value) { m_contentHandlingStrategyHasBeenSet = true; m_contentHandlingStrategy = value; }

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
    inline void SetContentHandlingStrategy(ContentHandlingStrategy&& value) { m_contentHandlingStrategyHasBeenSet = true; m_contentHandlingStrategy = std::move(value); }

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
    inline CreateIntegrationRequest& WithContentHandlingStrategy(const ContentHandlingStrategy& value) { SetContentHandlingStrategy(value); return *this;}

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
    inline CreateIntegrationRequest& WithContentHandlingStrategy(ContentHandlingStrategy&& value) { SetContentHandlingStrategy(std::move(value)); return *this;}


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
    inline bool CredentialsArnHasBeenSet() const { return m_credentialsArnHasBeenSet; }

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
    inline void SetCredentialsArn(const Aws::String& value) { m_credentialsArnHasBeenSet = true; m_credentialsArn = value; }

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
    inline void SetCredentialsArn(Aws::String&& value) { m_credentialsArnHasBeenSet = true; m_credentialsArn = std::move(value); }

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
    inline void SetCredentialsArn(const char* value) { m_credentialsArnHasBeenSet = true; m_credentialsArn.assign(value); }

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
    inline CreateIntegrationRequest& WithCredentialsArn(const Aws::String& value) { SetCredentialsArn(value); return *this;}

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
    inline CreateIntegrationRequest& WithCredentialsArn(Aws::String&& value) { SetCredentialsArn(std::move(value)); return *this;}

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
    inline CreateIntegrationRequest& WithCredentialsArn(const char* value) { SetCredentialsArn(value); return *this;}


    /**
     * <p>The description of the integration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the integration.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the integration.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the integration.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the integration.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the integration.</p>
     */
    inline CreateIntegrationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the integration.</p>
     */
    inline CreateIntegrationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the integration.</p>
     */
    inline CreateIntegrationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Specifies the integration's HTTP method type.</p>
     */
    inline const Aws::String& GetIntegrationMethod() const{ return m_integrationMethod; }

    /**
     * <p>Specifies the integration's HTTP method type.</p>
     */
    inline bool IntegrationMethodHasBeenSet() const { return m_integrationMethodHasBeenSet; }

    /**
     * <p>Specifies the integration's HTTP method type.</p>
     */
    inline void SetIntegrationMethod(const Aws::String& value) { m_integrationMethodHasBeenSet = true; m_integrationMethod = value; }

    /**
     * <p>Specifies the integration's HTTP method type.</p>
     */
    inline void SetIntegrationMethod(Aws::String&& value) { m_integrationMethodHasBeenSet = true; m_integrationMethod = std::move(value); }

    /**
     * <p>Specifies the integration's HTTP method type.</p>
     */
    inline void SetIntegrationMethod(const char* value) { m_integrationMethodHasBeenSet = true; m_integrationMethod.assign(value); }

    /**
     * <p>Specifies the integration's HTTP method type.</p>
     */
    inline CreateIntegrationRequest& WithIntegrationMethod(const Aws::String& value) { SetIntegrationMethod(value); return *this;}

    /**
     * <p>Specifies the integration's HTTP method type.</p>
     */
    inline CreateIntegrationRequest& WithIntegrationMethod(Aws::String&& value) { SetIntegrationMethod(std::move(value)); return *this;}

    /**
     * <p>Specifies the integration's HTTP method type.</p>
     */
    inline CreateIntegrationRequest& WithIntegrationMethod(const char* value) { SetIntegrationMethod(value); return *this;}


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

     * integration is also referred to as HTTP custom integration.</p><p>
 HTTP_PROXY:
     * for integrating route or method request with an HTTP
 endpoint, with the client

     * request passed through as-is. This is also referred to as HTTP proxy

     * integration.</p><p>
 MOCK: for integrating the route or method request with API
     * Gateway as a
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

     * integration is also referred to as HTTP custom integration.</p><p>
 HTTP_PROXY:
     * for integrating route or method request with an HTTP
 endpoint, with the client

     * request passed through as-is. This is also referred to as HTTP proxy

     * integration.</p><p>
 MOCK: for integrating the route or method request with API
     * Gateway as a
 "loopback" endpoint without invoking any backend.</p>
     */
    inline bool IntegrationTypeHasBeenSet() const { return m_integrationTypeHasBeenSet; }

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

     * integration is also referred to as HTTP custom integration.</p><p>
 HTTP_PROXY:
     * for integrating route or method request with an HTTP
 endpoint, with the client

     * request passed through as-is. This is also referred to as HTTP proxy

     * integration.</p><p>
 MOCK: for integrating the route or method request with API
     * Gateway as a
 "loopback" endpoint without invoking any backend.</p>
     */
    inline void SetIntegrationType(const IntegrationType& value) { m_integrationTypeHasBeenSet = true; m_integrationType = value; }

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

     * integration is also referred to as HTTP custom integration.</p><p>
 HTTP_PROXY:
     * for integrating route or method request with an HTTP
 endpoint, with the client

     * request passed through as-is. This is also referred to as HTTP proxy

     * integration.</p><p>
 MOCK: for integrating the route or method request with API
     * Gateway as a
 "loopback" endpoint without invoking any backend.</p>
     */
    inline void SetIntegrationType(IntegrationType&& value) { m_integrationTypeHasBeenSet = true; m_integrationType = std::move(value); }

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

     * integration is also referred to as HTTP custom integration.</p><p>
 HTTP_PROXY:
     * for integrating route or method request with an HTTP
 endpoint, with the client

     * request passed through as-is. This is also referred to as HTTP proxy

     * integration.</p><p>
 MOCK: for integrating the route or method request with API
     * Gateway as a
 "loopback" endpoint without invoking any backend.</p>
     */
    inline CreateIntegrationRequest& WithIntegrationType(const IntegrationType& value) { SetIntegrationType(value); return *this;}

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

     * integration is also referred to as HTTP custom integration.</p><p>
 HTTP_PROXY:
     * for integrating route or method request with an HTTP
 endpoint, with the client

     * request passed through as-is. This is also referred to as HTTP proxy

     * integration.</p><p>
 MOCK: for integrating the route or method request with API
     * Gateway as a
 "loopback" endpoint without invoking any backend.</p>
     */
    inline CreateIntegrationRequest& WithIntegrationType(IntegrationType&& value) { SetIntegrationType(std::move(value)); return *this;}


    /**
     * <p>For a Lambda proxy integration, this is the URI of the Lambda function.</p>
     */
    inline const Aws::String& GetIntegrationUri() const{ return m_integrationUri; }

    /**
     * <p>For a Lambda proxy integration, this is the URI of the Lambda function.</p>
     */
    inline bool IntegrationUriHasBeenSet() const { return m_integrationUriHasBeenSet; }

    /**
     * <p>For a Lambda proxy integration, this is the URI of the Lambda function.</p>
     */
    inline void SetIntegrationUri(const Aws::String& value) { m_integrationUriHasBeenSet = true; m_integrationUri = value; }

    /**
     * <p>For a Lambda proxy integration, this is the URI of the Lambda function.</p>
     */
    inline void SetIntegrationUri(Aws::String&& value) { m_integrationUriHasBeenSet = true; m_integrationUri = std::move(value); }

    /**
     * <p>For a Lambda proxy integration, this is the URI of the Lambda function.</p>
     */
    inline void SetIntegrationUri(const char* value) { m_integrationUriHasBeenSet = true; m_integrationUri.assign(value); }

    /**
     * <p>For a Lambda proxy integration, this is the URI of the Lambda function.</p>
     */
    inline CreateIntegrationRequest& WithIntegrationUri(const Aws::String& value) { SetIntegrationUri(value); return *this;}

    /**
     * <p>For a Lambda proxy integration, this is the URI of the Lambda function.</p>
     */
    inline CreateIntegrationRequest& WithIntegrationUri(Aws::String&& value) { SetIntegrationUri(std::move(value)); return *this;}

    /**
     * <p>For a Lambda proxy integration, this is the URI of the Lambda function.</p>
     */
    inline CreateIntegrationRequest& WithIntegrationUri(const char* value) { SetIntegrationUri(value); return *this;}


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
    inline bool PassthroughBehaviorHasBeenSet() const { return m_passthroughBehaviorHasBeenSet; }

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
    inline void SetPassthroughBehavior(const PassthroughBehavior& value) { m_passthroughBehaviorHasBeenSet = true; m_passthroughBehavior = value; }

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
    inline void SetPassthroughBehavior(PassthroughBehavior&& value) { m_passthroughBehaviorHasBeenSet = true; m_passthroughBehavior = std::move(value); }

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
    inline CreateIntegrationRequest& WithPassthroughBehavior(const PassthroughBehavior& value) { SetPassthroughBehavior(value); return *this;}

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
    inline CreateIntegrationRequest& WithPassthroughBehavior(PassthroughBehavior&& value) { SetPassthroughBehavior(std::move(value)); return *this;}


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
    inline bool RequestParametersHasBeenSet() const { return m_requestParametersHasBeenSet; }

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
    inline void SetRequestParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_requestParametersHasBeenSet = true; m_requestParameters = value; }

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
    inline void SetRequestParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_requestParametersHasBeenSet = true; m_requestParameters = std::move(value); }

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
    inline CreateIntegrationRequest& WithRequestParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestParameters(value); return *this;}

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
    inline CreateIntegrationRequest& WithRequestParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestParameters(std::move(value)); return *this;}

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
    inline CreateIntegrationRequest& AddRequestParameters(const Aws::String& key, const Aws::String& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(key, value); return *this; }

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
    inline CreateIntegrationRequest& AddRequestParameters(Aws::String&& key, const Aws::String& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(std::move(key), value); return *this; }

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
    inline CreateIntegrationRequest& AddRequestParameters(const Aws::String& key, Aws::String&& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(key, std::move(value)); return *this; }

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
    inline CreateIntegrationRequest& AddRequestParameters(Aws::String&& key, Aws::String&& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(std::move(key), std::move(value)); return *this; }

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
    inline CreateIntegrationRequest& AddRequestParameters(const char* key, Aws::String&& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(key, std::move(value)); return *this; }

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
    inline CreateIntegrationRequest& AddRequestParameters(Aws::String&& key, const char* value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(std::move(key), value); return *this; }

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
    inline CreateIntegrationRequest& AddRequestParameters(const char* key, const char* value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(key, value); return *this; }


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
    inline bool RequestTemplatesHasBeenSet() const { return m_requestTemplatesHasBeenSet; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload
 based on the value of the Content-Type header sent by the client. The
     * content type
 value is the key in this map, and the template (as a String) is
     * the value.</p>
     */
    inline void SetRequestTemplates(const Aws::Map<Aws::String, Aws::String>& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates = value; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload
 based on the value of the Content-Type header sent by the client. The
     * content type
 value is the key in this map, and the template (as a String) is
     * the value.</p>
     */
    inline void SetRequestTemplates(Aws::Map<Aws::String, Aws::String>&& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates = std::move(value); }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload
 based on the value of the Content-Type header sent by the client. The
     * content type
 value is the key in this map, and the template (as a String) is
     * the value.</p>
     */
    inline CreateIntegrationRequest& WithRequestTemplates(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestTemplates(value); return *this;}

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload
 based on the value of the Content-Type header sent by the client. The
     * content type
 value is the key in this map, and the template (as a String) is
     * the value.</p>
     */
    inline CreateIntegrationRequest& WithRequestTemplates(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestTemplates(std::move(value)); return *this;}

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload
 based on the value of the Content-Type header sent by the client. The
     * content type
 value is the key in this map, and the template (as a String) is
     * the value.</p>
     */
    inline CreateIntegrationRequest& AddRequestTemplates(const Aws::String& key, const Aws::String& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(key, value); return *this; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload
 based on the value of the Content-Type header sent by the client. The
     * content type
 value is the key in this map, and the template (as a String) is
     * the value.</p>
     */
    inline CreateIntegrationRequest& AddRequestTemplates(Aws::String&& key, const Aws::String& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(std::move(key), value); return *this; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload
 based on the value of the Content-Type header sent by the client. The
     * content type
 value is the key in this map, and the template (as a String) is
     * the value.</p>
     */
    inline CreateIntegrationRequest& AddRequestTemplates(const Aws::String& key, Aws::String&& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload
 based on the value of the Content-Type header sent by the client. The
     * content type
 value is the key in this map, and the template (as a String) is
     * the value.</p>
     */
    inline CreateIntegrationRequest& AddRequestTemplates(Aws::String&& key, Aws::String&& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload
 based on the value of the Content-Type header sent by the client. The
     * content type
 value is the key in this map, and the template (as a String) is
     * the value.</p>
     */
    inline CreateIntegrationRequest& AddRequestTemplates(const char* key, Aws::String&& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload
 based on the value of the Content-Type header sent by the client. The
     * content type
 value is the key in this map, and the template (as a String) is
     * the value.</p>
     */
    inline CreateIntegrationRequest& AddRequestTemplates(Aws::String&& key, const char* value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(std::move(key), value); return *this; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload
 based on the value of the Content-Type header sent by the client. The
     * content type
 value is the key in this map, and the template (as a String) is
     * the value.</p>
     */
    inline CreateIntegrationRequest& AddRequestTemplates(const char* key, const char* value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(key, value); return *this; }


    /**
     * <p>The template selection expression for the integration.</p>
     */
    inline const Aws::String& GetTemplateSelectionExpression() const{ return m_templateSelectionExpression; }

    /**
     * <p>The template selection expression for the integration.</p>
     */
    inline bool TemplateSelectionExpressionHasBeenSet() const { return m_templateSelectionExpressionHasBeenSet; }

    /**
     * <p>The template selection expression for the integration.</p>
     */
    inline void SetTemplateSelectionExpression(const Aws::String& value) { m_templateSelectionExpressionHasBeenSet = true; m_templateSelectionExpression = value; }

    /**
     * <p>The template selection expression for the integration.</p>
     */
    inline void SetTemplateSelectionExpression(Aws::String&& value) { m_templateSelectionExpressionHasBeenSet = true; m_templateSelectionExpression = std::move(value); }

    /**
     * <p>The template selection expression for the integration.</p>
     */
    inline void SetTemplateSelectionExpression(const char* value) { m_templateSelectionExpressionHasBeenSet = true; m_templateSelectionExpression.assign(value); }

    /**
     * <p>The template selection expression for the integration.</p>
     */
    inline CreateIntegrationRequest& WithTemplateSelectionExpression(const Aws::String& value) { SetTemplateSelectionExpression(value); return *this;}

    /**
     * <p>The template selection expression for the integration.</p>
     */
    inline CreateIntegrationRequest& WithTemplateSelectionExpression(Aws::String&& value) { SetTemplateSelectionExpression(std::move(value)); return *this;}

    /**
     * <p>The template selection expression for the integration.</p>
     */
    inline CreateIntegrationRequest& WithTemplateSelectionExpression(const char* value) { SetTemplateSelectionExpression(value); return *this;}


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
    inline bool TimeoutInMillisHasBeenSet() const { return m_timeoutInMillisHasBeenSet; }

    /**
     * <p>Custom timeout between 50 and 29,000 milliseconds. The default value is
     * 29,000
 milliseconds or 29 seconds.</p>
     */
    inline void SetTimeoutInMillis(int value) { m_timeoutInMillisHasBeenSet = true; m_timeoutInMillis = value; }

    /**
     * <p>Custom timeout between 50 and 29,000 milliseconds. The default value is
     * 29,000
 milliseconds or 29 seconds.</p>
     */
    inline CreateIntegrationRequest& WithTimeoutInMillis(int value) { SetTimeoutInMillis(value); return *this;}

  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet;

    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet;

    ConnectionType m_connectionType;
    bool m_connectionTypeHasBeenSet;

    ContentHandlingStrategy m_contentHandlingStrategy;
    bool m_contentHandlingStrategyHasBeenSet;

    Aws::String m_credentialsArn;
    bool m_credentialsArnHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_integrationMethod;
    bool m_integrationMethodHasBeenSet;

    IntegrationType m_integrationType;
    bool m_integrationTypeHasBeenSet;

    Aws::String m_integrationUri;
    bool m_integrationUriHasBeenSet;

    PassthroughBehavior m_passthroughBehavior;
    bool m_passthroughBehaviorHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_requestParameters;
    bool m_requestParametersHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_requestTemplates;
    bool m_requestTemplatesHasBeenSet;

    Aws::String m_templateSelectionExpression;
    bool m_templateSelectionExpressionHasBeenSet;

    int m_timeoutInMillis;
    bool m_timeoutInMillisHasBeenSet;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
