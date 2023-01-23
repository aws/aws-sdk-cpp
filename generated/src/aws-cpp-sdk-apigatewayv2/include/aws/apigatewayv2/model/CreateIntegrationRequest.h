/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/apigatewayv2/model/TlsConfigInput.h>
#include <utility>

namespace Aws
{
namespace ApiGatewayV2
{
namespace Model
{

  /**
   * <p>Creates a new Integration resource to represent an integration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateIntegrationRequest">AWS
   * API Reference</a></p>
   */
  class CreateIntegrationRequest : public ApiGatewayV2Request
  {
  public:
    AWS_APIGATEWAYV2_API CreateIntegrationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateIntegration"; }

    AWS_APIGATEWAYV2_API Aws::String SerializePayload() const override;


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
     * <p>The ID of the VPC link for a private integration. Supported only for HTTP
     * APIs.</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }

    /**
     * <p>The ID of the VPC link for a private integration. Supported only for HTTP
     * APIs.</p>
     */
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }

    /**
     * <p>The ID of the VPC link for a private integration. Supported only for HTTP
     * APIs.</p>
     */
    inline void SetConnectionId(const Aws::String& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }

    /**
     * <p>The ID of the VPC link for a private integration. Supported only for HTTP
     * APIs.</p>
     */
    inline void SetConnectionId(Aws::String&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::move(value); }

    /**
     * <p>The ID of the VPC link for a private integration. Supported only for HTTP
     * APIs.</p>
     */
    inline void SetConnectionId(const char* value) { m_connectionIdHasBeenSet = true; m_connectionId.assign(value); }

    /**
     * <p>The ID of the VPC link for a private integration. Supported only for HTTP
     * APIs.</p>
     */
    inline CreateIntegrationRequest& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}

    /**
     * <p>The ID of the VPC link for a private integration. Supported only for HTTP
     * APIs.</p>
     */
    inline CreateIntegrationRequest& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC link for a private integration. Supported only for HTTP
     * APIs.</p>
     */
    inline CreateIntegrationRequest& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}


    /**
     * <p>The type of the network connection to the integration endpoint. Specify
     * INTERNET for connections through the public routable internet or VPC_LINK for
     * private connections between API Gateway and resources in a VPC. The default
     * value is INTERNET.</p>
     */
    inline const ConnectionType& GetConnectionType() const{ return m_connectionType; }

    /**
     * <p>The type of the network connection to the integration endpoint. Specify
     * INTERNET for connections through the public routable internet or VPC_LINK for
     * private connections between API Gateway and resources in a VPC. The default
     * value is INTERNET.</p>
     */
    inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }

    /**
     * <p>The type of the network connection to the integration endpoint. Specify
     * INTERNET for connections through the public routable internet or VPC_LINK for
     * private connections between API Gateway and resources in a VPC. The default
     * value is INTERNET.</p>
     */
    inline void SetConnectionType(const ConnectionType& value) { m_connectionTypeHasBeenSet = true; m_connectionType = value; }

    /**
     * <p>The type of the network connection to the integration endpoint. Specify
     * INTERNET for connections through the public routable internet or VPC_LINK for
     * private connections between API Gateway and resources in a VPC. The default
     * value is INTERNET.</p>
     */
    inline void SetConnectionType(ConnectionType&& value) { m_connectionTypeHasBeenSet = true; m_connectionType = std::move(value); }

    /**
     * <p>The type of the network connection to the integration endpoint. Specify
     * INTERNET for connections through the public routable internet or VPC_LINK for
     * private connections between API Gateway and resources in a VPC. The default
     * value is INTERNET.</p>
     */
    inline CreateIntegrationRequest& WithConnectionType(const ConnectionType& value) { SetConnectionType(value); return *this;}

    /**
     * <p>The type of the network connection to the integration endpoint. Specify
     * INTERNET for connections through the public routable internet or VPC_LINK for
     * private connections between API Gateway and resources in a VPC. The default
     * value is INTERNET.</p>
     */
    inline CreateIntegrationRequest& WithConnectionType(ConnectionType&& value) { SetConnectionType(std::move(value)); return *this;}


    /**
     * <p>Supported only for WebSocket APIs. Specifies how to handle response payload
     * content type conversions. Supported values are CONVERT_TO_BINARY and
     * CONVERT_TO_TEXT, with the following behaviors:</p> <p>CONVERT_TO_BINARY:
     * Converts a response payload from a Base64-encoded string to the corresponding
     * binary blob.</p> <p>CONVERT_TO_TEXT: Converts a response payload from a binary
     * blob to a Base64-encoded string.</p> <p>If this property is not defined, the
     * response payload will be passed through from the integration response to the
     * route response or method response without modification.</p>
     */
    inline const ContentHandlingStrategy& GetContentHandlingStrategy() const{ return m_contentHandlingStrategy; }

    /**
     * <p>Supported only for WebSocket APIs. Specifies how to handle response payload
     * content type conversions. Supported values are CONVERT_TO_BINARY and
     * CONVERT_TO_TEXT, with the following behaviors:</p> <p>CONVERT_TO_BINARY:
     * Converts a response payload from a Base64-encoded string to the corresponding
     * binary blob.</p> <p>CONVERT_TO_TEXT: Converts a response payload from a binary
     * blob to a Base64-encoded string.</p> <p>If this property is not defined, the
     * response payload will be passed through from the integration response to the
     * route response or method response without modification.</p>
     */
    inline bool ContentHandlingStrategyHasBeenSet() const { return m_contentHandlingStrategyHasBeenSet; }

    /**
     * <p>Supported only for WebSocket APIs. Specifies how to handle response payload
     * content type conversions. Supported values are CONVERT_TO_BINARY and
     * CONVERT_TO_TEXT, with the following behaviors:</p> <p>CONVERT_TO_BINARY:
     * Converts a response payload from a Base64-encoded string to the corresponding
     * binary blob.</p> <p>CONVERT_TO_TEXT: Converts a response payload from a binary
     * blob to a Base64-encoded string.</p> <p>If this property is not defined, the
     * response payload will be passed through from the integration response to the
     * route response or method response without modification.</p>
     */
    inline void SetContentHandlingStrategy(const ContentHandlingStrategy& value) { m_contentHandlingStrategyHasBeenSet = true; m_contentHandlingStrategy = value; }

    /**
     * <p>Supported only for WebSocket APIs. Specifies how to handle response payload
     * content type conversions. Supported values are CONVERT_TO_BINARY and
     * CONVERT_TO_TEXT, with the following behaviors:</p> <p>CONVERT_TO_BINARY:
     * Converts a response payload from a Base64-encoded string to the corresponding
     * binary blob.</p> <p>CONVERT_TO_TEXT: Converts a response payload from a binary
     * blob to a Base64-encoded string.</p> <p>If this property is not defined, the
     * response payload will be passed through from the integration response to the
     * route response or method response without modification.</p>
     */
    inline void SetContentHandlingStrategy(ContentHandlingStrategy&& value) { m_contentHandlingStrategyHasBeenSet = true; m_contentHandlingStrategy = std::move(value); }

    /**
     * <p>Supported only for WebSocket APIs. Specifies how to handle response payload
     * content type conversions. Supported values are CONVERT_TO_BINARY and
     * CONVERT_TO_TEXT, with the following behaviors:</p> <p>CONVERT_TO_BINARY:
     * Converts a response payload from a Base64-encoded string to the corresponding
     * binary blob.</p> <p>CONVERT_TO_TEXT: Converts a response payload from a binary
     * blob to a Base64-encoded string.</p> <p>If this property is not defined, the
     * response payload will be passed through from the integration response to the
     * route response or method response without modification.</p>
     */
    inline CreateIntegrationRequest& WithContentHandlingStrategy(const ContentHandlingStrategy& value) { SetContentHandlingStrategy(value); return *this;}

    /**
     * <p>Supported only for WebSocket APIs. Specifies how to handle response payload
     * content type conversions. Supported values are CONVERT_TO_BINARY and
     * CONVERT_TO_TEXT, with the following behaviors:</p> <p>CONVERT_TO_BINARY:
     * Converts a response payload from a Base64-encoded string to the corresponding
     * binary blob.</p> <p>CONVERT_TO_TEXT: Converts a response payload from a binary
     * blob to a Base64-encoded string.</p> <p>If this property is not defined, the
     * response payload will be passed through from the integration response to the
     * route response or method response without modification.</p>
     */
    inline CreateIntegrationRequest& WithContentHandlingStrategy(ContentHandlingStrategy&& value) { SetContentHandlingStrategy(std::move(value)); return *this;}


    /**
     * <p>Specifies the credentials required for the integration, if any. For AWS
     * integrations, three options are available. To specify an IAM Role for API
     * Gateway to assume, use the role's Amazon Resource Name (ARN). To require that
     * the caller's identity be passed through from the request, specify the string
     * arn:aws:iam::*:user/ *. To use resource-based permissions on supported AWS
     * services, specify null.</p>
     */
    inline const Aws::String& GetCredentialsArn() const{ return m_credentialsArn; }

    /**
     * <p>Specifies the credentials required for the integration, if any. For AWS
     * integrations, three options are available. To specify an IAM Role for API
     * Gateway to assume, use the role's Amazon Resource Name (ARN). To require that
     * the caller's identity be passed through from the request, specify the string
     * arn:aws:iam::*:user/ *. To use resource-based permissions on supported AWS
     * services, specify null.</p>
     */
    inline bool CredentialsArnHasBeenSet() const { return m_credentialsArnHasBeenSet; }

    /**
     * <p>Specifies the credentials required for the integration, if any. For AWS
     * integrations, three options are available. To specify an IAM Role for API
     * Gateway to assume, use the role's Amazon Resource Name (ARN). To require that
     * the caller's identity be passed through from the request, specify the string
     * arn:aws:iam::*:user/ *. To use resource-based permissions on supported AWS
     * services, specify null.</p>
     */
    inline void SetCredentialsArn(const Aws::String& value) { m_credentialsArnHasBeenSet = true; m_credentialsArn = value; }

    /**
     * <p>Specifies the credentials required for the integration, if any. For AWS
     * integrations, three options are available. To specify an IAM Role for API
     * Gateway to assume, use the role's Amazon Resource Name (ARN). To require that
     * the caller's identity be passed through from the request, specify the string
     * arn:aws:iam::*:user/ *. To use resource-based permissions on supported AWS
     * services, specify null.</p>
     */
    inline void SetCredentialsArn(Aws::String&& value) { m_credentialsArnHasBeenSet = true; m_credentialsArn = std::move(value); }

    /**
     * <p>Specifies the credentials required for the integration, if any. For AWS
     * integrations, three options are available. To specify an IAM Role for API
     * Gateway to assume, use the role's Amazon Resource Name (ARN). To require that
     * the caller's identity be passed through from the request, specify the string
     * arn:aws:iam::*:user/ *. To use resource-based permissions on supported AWS
     * services, specify null.</p>
     */
    inline void SetCredentialsArn(const char* value) { m_credentialsArnHasBeenSet = true; m_credentialsArn.assign(value); }

    /**
     * <p>Specifies the credentials required for the integration, if any. For AWS
     * integrations, three options are available. To specify an IAM Role for API
     * Gateway to assume, use the role's Amazon Resource Name (ARN). To require that
     * the caller's identity be passed through from the request, specify the string
     * arn:aws:iam::*:user/ *. To use resource-based permissions on supported AWS
     * services, specify null.</p>
     */
    inline CreateIntegrationRequest& WithCredentialsArn(const Aws::String& value) { SetCredentialsArn(value); return *this;}

    /**
     * <p>Specifies the credentials required for the integration, if any. For AWS
     * integrations, three options are available. To specify an IAM Role for API
     * Gateway to assume, use the role's Amazon Resource Name (ARN). To require that
     * the caller's identity be passed through from the request, specify the string
     * arn:aws:iam::*:user/ *. To use resource-based permissions on supported AWS
     * services, specify null.</p>
     */
    inline CreateIntegrationRequest& WithCredentialsArn(Aws::String&& value) { SetCredentialsArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the credentials required for the integration, if any. For AWS
     * integrations, three options are available. To specify an IAM Role for API
     * Gateway to assume, use the role's Amazon Resource Name (ARN). To require that
     * the caller's identity be passed through from the request, specify the string
     * arn:aws:iam::*:user/ *. To use resource-based permissions on supported AWS
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
     * <p>Supported only for HTTP API AWS_PROXY integrations. Specifies the AWS service
     * action to invoke. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-develop-integrations-aws-services-reference.html">Integration
     * subtype reference</a>.</p>
     */
    inline const Aws::String& GetIntegrationSubtype() const{ return m_integrationSubtype; }

    /**
     * <p>Supported only for HTTP API AWS_PROXY integrations. Specifies the AWS service
     * action to invoke. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-develop-integrations-aws-services-reference.html">Integration
     * subtype reference</a>.</p>
     */
    inline bool IntegrationSubtypeHasBeenSet() const { return m_integrationSubtypeHasBeenSet; }

    /**
     * <p>Supported only for HTTP API AWS_PROXY integrations. Specifies the AWS service
     * action to invoke. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-develop-integrations-aws-services-reference.html">Integration
     * subtype reference</a>.</p>
     */
    inline void SetIntegrationSubtype(const Aws::String& value) { m_integrationSubtypeHasBeenSet = true; m_integrationSubtype = value; }

    /**
     * <p>Supported only for HTTP API AWS_PROXY integrations. Specifies the AWS service
     * action to invoke. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-develop-integrations-aws-services-reference.html">Integration
     * subtype reference</a>.</p>
     */
    inline void SetIntegrationSubtype(Aws::String&& value) { m_integrationSubtypeHasBeenSet = true; m_integrationSubtype = std::move(value); }

    /**
     * <p>Supported only for HTTP API AWS_PROXY integrations. Specifies the AWS service
     * action to invoke. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-develop-integrations-aws-services-reference.html">Integration
     * subtype reference</a>.</p>
     */
    inline void SetIntegrationSubtype(const char* value) { m_integrationSubtypeHasBeenSet = true; m_integrationSubtype.assign(value); }

    /**
     * <p>Supported only for HTTP API AWS_PROXY integrations. Specifies the AWS service
     * action to invoke. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-develop-integrations-aws-services-reference.html">Integration
     * subtype reference</a>.</p>
     */
    inline CreateIntegrationRequest& WithIntegrationSubtype(const Aws::String& value) { SetIntegrationSubtype(value); return *this;}

    /**
     * <p>Supported only for HTTP API AWS_PROXY integrations. Specifies the AWS service
     * action to invoke. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-develop-integrations-aws-services-reference.html">Integration
     * subtype reference</a>.</p>
     */
    inline CreateIntegrationRequest& WithIntegrationSubtype(Aws::String&& value) { SetIntegrationSubtype(std::move(value)); return *this;}

    /**
     * <p>Supported only for HTTP API AWS_PROXY integrations. Specifies the AWS service
     * action to invoke. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-develop-integrations-aws-services-reference.html">Integration
     * subtype reference</a>.</p>
     */
    inline CreateIntegrationRequest& WithIntegrationSubtype(const char* value) { SetIntegrationSubtype(value); return *this;}


    /**
     * <p>The integration type of an integration. One of the following:</p> <p>AWS: for
     * integrating the route or method request with an AWS service action, including
     * the Lambda function-invoking action. With the Lambda function-invoking action,
     * this is referred to as the Lambda custom integration. With any other AWS service
     * action, this is known as AWS integration. Supported only for WebSocket APIs.</p>
     * <p>AWS_PROXY: for integrating the route or method request with a Lambda function
     * or other AWS service action. This integration is also referred to as a Lambda
     * proxy integration.</p> <p>HTTP: for integrating the route or method request with
     * an HTTP endpoint. This integration is also referred to as the HTTP custom
     * integration. Supported only for WebSocket APIs.</p> <p>HTTP_PROXY: for
     * integrating the route or method request with an HTTP endpoint, with the client
     * request passed through as-is. This is also referred to as HTTP proxy
     * integration. For HTTP API private integrations, use an HTTP_PROXY
     * integration.</p> <p>MOCK: for integrating the route or method request with API
     * Gateway as a "loopback" endpoint without invoking any backend. Supported only
     * for WebSocket APIs.</p>
     */
    inline const IntegrationType& GetIntegrationType() const{ return m_integrationType; }

    /**
     * <p>The integration type of an integration. One of the following:</p> <p>AWS: for
     * integrating the route or method request with an AWS service action, including
     * the Lambda function-invoking action. With the Lambda function-invoking action,
     * this is referred to as the Lambda custom integration. With any other AWS service
     * action, this is known as AWS integration. Supported only for WebSocket APIs.</p>
     * <p>AWS_PROXY: for integrating the route or method request with a Lambda function
     * or other AWS service action. This integration is also referred to as a Lambda
     * proxy integration.</p> <p>HTTP: for integrating the route or method request with
     * an HTTP endpoint. This integration is also referred to as the HTTP custom
     * integration. Supported only for WebSocket APIs.</p> <p>HTTP_PROXY: for
     * integrating the route or method request with an HTTP endpoint, with the client
     * request passed through as-is. This is also referred to as HTTP proxy
     * integration. For HTTP API private integrations, use an HTTP_PROXY
     * integration.</p> <p>MOCK: for integrating the route or method request with API
     * Gateway as a "loopback" endpoint without invoking any backend. Supported only
     * for WebSocket APIs.</p>
     */
    inline bool IntegrationTypeHasBeenSet() const { return m_integrationTypeHasBeenSet; }

    /**
     * <p>The integration type of an integration. One of the following:</p> <p>AWS: for
     * integrating the route or method request with an AWS service action, including
     * the Lambda function-invoking action. With the Lambda function-invoking action,
     * this is referred to as the Lambda custom integration. With any other AWS service
     * action, this is known as AWS integration. Supported only for WebSocket APIs.</p>
     * <p>AWS_PROXY: for integrating the route or method request with a Lambda function
     * or other AWS service action. This integration is also referred to as a Lambda
     * proxy integration.</p> <p>HTTP: for integrating the route or method request with
     * an HTTP endpoint. This integration is also referred to as the HTTP custom
     * integration. Supported only for WebSocket APIs.</p> <p>HTTP_PROXY: for
     * integrating the route or method request with an HTTP endpoint, with the client
     * request passed through as-is. This is also referred to as HTTP proxy
     * integration. For HTTP API private integrations, use an HTTP_PROXY
     * integration.</p> <p>MOCK: for integrating the route or method request with API
     * Gateway as a "loopback" endpoint without invoking any backend. Supported only
     * for WebSocket APIs.</p>
     */
    inline void SetIntegrationType(const IntegrationType& value) { m_integrationTypeHasBeenSet = true; m_integrationType = value; }

    /**
     * <p>The integration type of an integration. One of the following:</p> <p>AWS: for
     * integrating the route or method request with an AWS service action, including
     * the Lambda function-invoking action. With the Lambda function-invoking action,
     * this is referred to as the Lambda custom integration. With any other AWS service
     * action, this is known as AWS integration. Supported only for WebSocket APIs.</p>
     * <p>AWS_PROXY: for integrating the route or method request with a Lambda function
     * or other AWS service action. This integration is also referred to as a Lambda
     * proxy integration.</p> <p>HTTP: for integrating the route or method request with
     * an HTTP endpoint. This integration is also referred to as the HTTP custom
     * integration. Supported only for WebSocket APIs.</p> <p>HTTP_PROXY: for
     * integrating the route or method request with an HTTP endpoint, with the client
     * request passed through as-is. This is also referred to as HTTP proxy
     * integration. For HTTP API private integrations, use an HTTP_PROXY
     * integration.</p> <p>MOCK: for integrating the route or method request with API
     * Gateway as a "loopback" endpoint without invoking any backend. Supported only
     * for WebSocket APIs.</p>
     */
    inline void SetIntegrationType(IntegrationType&& value) { m_integrationTypeHasBeenSet = true; m_integrationType = std::move(value); }

    /**
     * <p>The integration type of an integration. One of the following:</p> <p>AWS: for
     * integrating the route or method request with an AWS service action, including
     * the Lambda function-invoking action. With the Lambda function-invoking action,
     * this is referred to as the Lambda custom integration. With any other AWS service
     * action, this is known as AWS integration. Supported only for WebSocket APIs.</p>
     * <p>AWS_PROXY: for integrating the route or method request with a Lambda function
     * or other AWS service action. This integration is also referred to as a Lambda
     * proxy integration.</p> <p>HTTP: for integrating the route or method request with
     * an HTTP endpoint. This integration is also referred to as the HTTP custom
     * integration. Supported only for WebSocket APIs.</p> <p>HTTP_PROXY: for
     * integrating the route or method request with an HTTP endpoint, with the client
     * request passed through as-is. This is also referred to as HTTP proxy
     * integration. For HTTP API private integrations, use an HTTP_PROXY
     * integration.</p> <p>MOCK: for integrating the route or method request with API
     * Gateway as a "loopback" endpoint without invoking any backend. Supported only
     * for WebSocket APIs.</p>
     */
    inline CreateIntegrationRequest& WithIntegrationType(const IntegrationType& value) { SetIntegrationType(value); return *this;}

    /**
     * <p>The integration type of an integration. One of the following:</p> <p>AWS: for
     * integrating the route or method request with an AWS service action, including
     * the Lambda function-invoking action. With the Lambda function-invoking action,
     * this is referred to as the Lambda custom integration. With any other AWS service
     * action, this is known as AWS integration. Supported only for WebSocket APIs.</p>
     * <p>AWS_PROXY: for integrating the route or method request with a Lambda function
     * or other AWS service action. This integration is also referred to as a Lambda
     * proxy integration.</p> <p>HTTP: for integrating the route or method request with
     * an HTTP endpoint. This integration is also referred to as the HTTP custom
     * integration. Supported only for WebSocket APIs.</p> <p>HTTP_PROXY: for
     * integrating the route or method request with an HTTP endpoint, with the client
     * request passed through as-is. This is also referred to as HTTP proxy
     * integration. For HTTP API private integrations, use an HTTP_PROXY
     * integration.</p> <p>MOCK: for integrating the route or method request with API
     * Gateway as a "loopback" endpoint without invoking any backend. Supported only
     * for WebSocket APIs.</p>
     */
    inline CreateIntegrationRequest& WithIntegrationType(IntegrationType&& value) { SetIntegrationType(std::move(value)); return *this;}


    /**
     * <p>For a Lambda integration, specify the URI of a Lambda function.</p> <p>For an
     * HTTP integration, specify a fully-qualified URL.</p> <p>For an HTTP API private
     * integration, specify the ARN of an Application Load Balancer listener, Network
     * Load Balancer listener, or AWS Cloud Map service. If you specify the ARN of an
     * AWS Cloud Map service, API Gateway uses DiscoverInstances to identify resources.
     * You can use query parameters to target specific resources. To learn more, see <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/api/API_DiscoverInstances.html">DiscoverInstances</a>.
     * For private integrations, all resources must be owned by the same AWS
     * account.</p>
     */
    inline const Aws::String& GetIntegrationUri() const{ return m_integrationUri; }

    /**
     * <p>For a Lambda integration, specify the URI of a Lambda function.</p> <p>For an
     * HTTP integration, specify a fully-qualified URL.</p> <p>For an HTTP API private
     * integration, specify the ARN of an Application Load Balancer listener, Network
     * Load Balancer listener, or AWS Cloud Map service. If you specify the ARN of an
     * AWS Cloud Map service, API Gateway uses DiscoverInstances to identify resources.
     * You can use query parameters to target specific resources. To learn more, see <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/api/API_DiscoverInstances.html">DiscoverInstances</a>.
     * For private integrations, all resources must be owned by the same AWS
     * account.</p>
     */
    inline bool IntegrationUriHasBeenSet() const { return m_integrationUriHasBeenSet; }

    /**
     * <p>For a Lambda integration, specify the URI of a Lambda function.</p> <p>For an
     * HTTP integration, specify a fully-qualified URL.</p> <p>For an HTTP API private
     * integration, specify the ARN of an Application Load Balancer listener, Network
     * Load Balancer listener, or AWS Cloud Map service. If you specify the ARN of an
     * AWS Cloud Map service, API Gateway uses DiscoverInstances to identify resources.
     * You can use query parameters to target specific resources. To learn more, see <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/api/API_DiscoverInstances.html">DiscoverInstances</a>.
     * For private integrations, all resources must be owned by the same AWS
     * account.</p>
     */
    inline void SetIntegrationUri(const Aws::String& value) { m_integrationUriHasBeenSet = true; m_integrationUri = value; }

    /**
     * <p>For a Lambda integration, specify the URI of a Lambda function.</p> <p>For an
     * HTTP integration, specify a fully-qualified URL.</p> <p>For an HTTP API private
     * integration, specify the ARN of an Application Load Balancer listener, Network
     * Load Balancer listener, or AWS Cloud Map service. If you specify the ARN of an
     * AWS Cloud Map service, API Gateway uses DiscoverInstances to identify resources.
     * You can use query parameters to target specific resources. To learn more, see <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/api/API_DiscoverInstances.html">DiscoverInstances</a>.
     * For private integrations, all resources must be owned by the same AWS
     * account.</p>
     */
    inline void SetIntegrationUri(Aws::String&& value) { m_integrationUriHasBeenSet = true; m_integrationUri = std::move(value); }

    /**
     * <p>For a Lambda integration, specify the URI of a Lambda function.</p> <p>For an
     * HTTP integration, specify a fully-qualified URL.</p> <p>For an HTTP API private
     * integration, specify the ARN of an Application Load Balancer listener, Network
     * Load Balancer listener, or AWS Cloud Map service. If you specify the ARN of an
     * AWS Cloud Map service, API Gateway uses DiscoverInstances to identify resources.
     * You can use query parameters to target specific resources. To learn more, see <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/api/API_DiscoverInstances.html">DiscoverInstances</a>.
     * For private integrations, all resources must be owned by the same AWS
     * account.</p>
     */
    inline void SetIntegrationUri(const char* value) { m_integrationUriHasBeenSet = true; m_integrationUri.assign(value); }

    /**
     * <p>For a Lambda integration, specify the URI of a Lambda function.</p> <p>For an
     * HTTP integration, specify a fully-qualified URL.</p> <p>For an HTTP API private
     * integration, specify the ARN of an Application Load Balancer listener, Network
     * Load Balancer listener, or AWS Cloud Map service. If you specify the ARN of an
     * AWS Cloud Map service, API Gateway uses DiscoverInstances to identify resources.
     * You can use query parameters to target specific resources. To learn more, see <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/api/API_DiscoverInstances.html">DiscoverInstances</a>.
     * For private integrations, all resources must be owned by the same AWS
     * account.</p>
     */
    inline CreateIntegrationRequest& WithIntegrationUri(const Aws::String& value) { SetIntegrationUri(value); return *this;}

    /**
     * <p>For a Lambda integration, specify the URI of a Lambda function.</p> <p>For an
     * HTTP integration, specify a fully-qualified URL.</p> <p>For an HTTP API private
     * integration, specify the ARN of an Application Load Balancer listener, Network
     * Load Balancer listener, or AWS Cloud Map service. If you specify the ARN of an
     * AWS Cloud Map service, API Gateway uses DiscoverInstances to identify resources.
     * You can use query parameters to target specific resources. To learn more, see <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/api/API_DiscoverInstances.html">DiscoverInstances</a>.
     * For private integrations, all resources must be owned by the same AWS
     * account.</p>
     */
    inline CreateIntegrationRequest& WithIntegrationUri(Aws::String&& value) { SetIntegrationUri(std::move(value)); return *this;}

    /**
     * <p>For a Lambda integration, specify the URI of a Lambda function.</p> <p>For an
     * HTTP integration, specify a fully-qualified URL.</p> <p>For an HTTP API private
     * integration, specify the ARN of an Application Load Balancer listener, Network
     * Load Balancer listener, or AWS Cloud Map service. If you specify the ARN of an
     * AWS Cloud Map service, API Gateway uses DiscoverInstances to identify resources.
     * You can use query parameters to target specific resources. To learn more, see <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/api/API_DiscoverInstances.html">DiscoverInstances</a>.
     * For private integrations, all resources must be owned by the same AWS
     * account.</p>
     */
    inline CreateIntegrationRequest& WithIntegrationUri(const char* value) { SetIntegrationUri(value); return *this;}


    /**
     * <p>Specifies the pass-through behavior for incoming requests based on the
     * Content-Type header in the request, and the available mapping templates
     * specified as the requestTemplates property on the Integration resource. There
     * are three valid values: WHEN_NO_MATCH, WHEN_NO_TEMPLATES, and NEVER. Supported
     * only for WebSocket APIs.</p> <p>WHEN_NO_MATCH passes the request body for
     * unmapped content types through to the integration backend without
     * transformation.</p> <p>NEVER rejects unmapped content types with an HTTP 415
     * Unsupported Media Type response.</p> <p>WHEN_NO_TEMPLATES allows pass-through
     * when the integration has no content types mapped to templates. However, if there
     * is at least one content type defined, unmapped content types will be rejected
     * with the same HTTP 415 Unsupported Media Type response.</p>
     */
    inline const PassthroughBehavior& GetPassthroughBehavior() const{ return m_passthroughBehavior; }

    /**
     * <p>Specifies the pass-through behavior for incoming requests based on the
     * Content-Type header in the request, and the available mapping templates
     * specified as the requestTemplates property on the Integration resource. There
     * are three valid values: WHEN_NO_MATCH, WHEN_NO_TEMPLATES, and NEVER. Supported
     * only for WebSocket APIs.</p> <p>WHEN_NO_MATCH passes the request body for
     * unmapped content types through to the integration backend without
     * transformation.</p> <p>NEVER rejects unmapped content types with an HTTP 415
     * Unsupported Media Type response.</p> <p>WHEN_NO_TEMPLATES allows pass-through
     * when the integration has no content types mapped to templates. However, if there
     * is at least one content type defined, unmapped content types will be rejected
     * with the same HTTP 415 Unsupported Media Type response.</p>
     */
    inline bool PassthroughBehaviorHasBeenSet() const { return m_passthroughBehaviorHasBeenSet; }

    /**
     * <p>Specifies the pass-through behavior for incoming requests based on the
     * Content-Type header in the request, and the available mapping templates
     * specified as the requestTemplates property on the Integration resource. There
     * are three valid values: WHEN_NO_MATCH, WHEN_NO_TEMPLATES, and NEVER. Supported
     * only for WebSocket APIs.</p> <p>WHEN_NO_MATCH passes the request body for
     * unmapped content types through to the integration backend without
     * transformation.</p> <p>NEVER rejects unmapped content types with an HTTP 415
     * Unsupported Media Type response.</p> <p>WHEN_NO_TEMPLATES allows pass-through
     * when the integration has no content types mapped to templates. However, if there
     * is at least one content type defined, unmapped content types will be rejected
     * with the same HTTP 415 Unsupported Media Type response.</p>
     */
    inline void SetPassthroughBehavior(const PassthroughBehavior& value) { m_passthroughBehaviorHasBeenSet = true; m_passthroughBehavior = value; }

    /**
     * <p>Specifies the pass-through behavior for incoming requests based on the
     * Content-Type header in the request, and the available mapping templates
     * specified as the requestTemplates property on the Integration resource. There
     * are three valid values: WHEN_NO_MATCH, WHEN_NO_TEMPLATES, and NEVER. Supported
     * only for WebSocket APIs.</p> <p>WHEN_NO_MATCH passes the request body for
     * unmapped content types through to the integration backend without
     * transformation.</p> <p>NEVER rejects unmapped content types with an HTTP 415
     * Unsupported Media Type response.</p> <p>WHEN_NO_TEMPLATES allows pass-through
     * when the integration has no content types mapped to templates. However, if there
     * is at least one content type defined, unmapped content types will be rejected
     * with the same HTTP 415 Unsupported Media Type response.</p>
     */
    inline void SetPassthroughBehavior(PassthroughBehavior&& value) { m_passthroughBehaviorHasBeenSet = true; m_passthroughBehavior = std::move(value); }

    /**
     * <p>Specifies the pass-through behavior for incoming requests based on the
     * Content-Type header in the request, and the available mapping templates
     * specified as the requestTemplates property on the Integration resource. There
     * are three valid values: WHEN_NO_MATCH, WHEN_NO_TEMPLATES, and NEVER. Supported
     * only for WebSocket APIs.</p> <p>WHEN_NO_MATCH passes the request body for
     * unmapped content types through to the integration backend without
     * transformation.</p> <p>NEVER rejects unmapped content types with an HTTP 415
     * Unsupported Media Type response.</p> <p>WHEN_NO_TEMPLATES allows pass-through
     * when the integration has no content types mapped to templates. However, if there
     * is at least one content type defined, unmapped content types will be rejected
     * with the same HTTP 415 Unsupported Media Type response.</p>
     */
    inline CreateIntegrationRequest& WithPassthroughBehavior(const PassthroughBehavior& value) { SetPassthroughBehavior(value); return *this;}

    /**
     * <p>Specifies the pass-through behavior for incoming requests based on the
     * Content-Type header in the request, and the available mapping templates
     * specified as the requestTemplates property on the Integration resource. There
     * are three valid values: WHEN_NO_MATCH, WHEN_NO_TEMPLATES, and NEVER. Supported
     * only for WebSocket APIs.</p> <p>WHEN_NO_MATCH passes the request body for
     * unmapped content types through to the integration backend without
     * transformation.</p> <p>NEVER rejects unmapped content types with an HTTP 415
     * Unsupported Media Type response.</p> <p>WHEN_NO_TEMPLATES allows pass-through
     * when the integration has no content types mapped to templates. However, if there
     * is at least one content type defined, unmapped content types will be rejected
     * with the same HTTP 415 Unsupported Media Type response.</p>
     */
    inline CreateIntegrationRequest& WithPassthroughBehavior(PassthroughBehavior&& value) { SetPassthroughBehavior(std::move(value)); return *this;}


    /**
     * <p>Specifies the format of the payload sent to an integration. Required for HTTP
     * APIs.</p>
     */
    inline const Aws::String& GetPayloadFormatVersion() const{ return m_payloadFormatVersion; }

    /**
     * <p>Specifies the format of the payload sent to an integration. Required for HTTP
     * APIs.</p>
     */
    inline bool PayloadFormatVersionHasBeenSet() const { return m_payloadFormatVersionHasBeenSet; }

    /**
     * <p>Specifies the format of the payload sent to an integration. Required for HTTP
     * APIs.</p>
     */
    inline void SetPayloadFormatVersion(const Aws::String& value) { m_payloadFormatVersionHasBeenSet = true; m_payloadFormatVersion = value; }

    /**
     * <p>Specifies the format of the payload sent to an integration. Required for HTTP
     * APIs.</p>
     */
    inline void SetPayloadFormatVersion(Aws::String&& value) { m_payloadFormatVersionHasBeenSet = true; m_payloadFormatVersion = std::move(value); }

    /**
     * <p>Specifies the format of the payload sent to an integration. Required for HTTP
     * APIs.</p>
     */
    inline void SetPayloadFormatVersion(const char* value) { m_payloadFormatVersionHasBeenSet = true; m_payloadFormatVersion.assign(value); }

    /**
     * <p>Specifies the format of the payload sent to an integration. Required for HTTP
     * APIs.</p>
     */
    inline CreateIntegrationRequest& WithPayloadFormatVersion(const Aws::String& value) { SetPayloadFormatVersion(value); return *this;}

    /**
     * <p>Specifies the format of the payload sent to an integration. Required for HTTP
     * APIs.</p>
     */
    inline CreateIntegrationRequest& WithPayloadFormatVersion(Aws::String&& value) { SetPayloadFormatVersion(std::move(value)); return *this;}

    /**
     * <p>Specifies the format of the payload sent to an integration. Required for HTTP
     * APIs.</p>
     */
    inline CreateIntegrationRequest& WithPayloadFormatVersion(const char* value) { SetPayloadFormatVersion(value); return *this;}


    /**
     * <p>For WebSocket APIs, a key-value map specifying request parameters that are
     * passed from the method request to the backend. The key is an integration request
     * parameter name and the associated value is a method request parameter value or
     * static value that must be enclosed within single quotes and pre-encoded as
     * required by the backend. The method request parameter value must match the
     * pattern of
     * method.request.<replaceable>{location}</replaceable>.<replaceable>{name}</replaceable>

     * , where 
                  <replaceable>{location}</replaceable>
               
     * is querystring, path, or header; and 
                 
     * <replaceable>{name}</replaceable>
                must be a valid and unique
     * method request parameter name.</p> <p>For HTTP API integrations with a specified
     * integrationSubtype, request parameters are a key-value map specifying parameters
     * that are passed to AWS_PROXY integrations. You can provide static values, or map
     * request data, stage variables, or context variables that are evaluated at
     * runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-develop-integrations-aws-services.html">Working
     * with AWS service integrations for HTTP APIs</a>.</p> <p>For HTTP API
     * integrations without a specified integrationSubtype request parameters are a
     * key-value map specifying how to transform HTTP requests before sending them to
     * the backend. The key should follow the pattern
     * &lt;action&gt;:&lt;header|querystring|path&gt;.&lt;location&gt; where action can
     * be append, overwrite or remove. For values, you can provide static values, or
     * map request data, stage variables, or context variables that are evaluated at
     * runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-parameter-mapping.html">Transforming
     * API requests and responses</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestParameters() const{ return m_requestParameters; }

    /**
     * <p>For WebSocket APIs, a key-value map specifying request parameters that are
     * passed from the method request to the backend. The key is an integration request
     * parameter name and the associated value is a method request parameter value or
     * static value that must be enclosed within single quotes and pre-encoded as
     * required by the backend. The method request parameter value must match the
     * pattern of
     * method.request.<replaceable>{location}</replaceable>.<replaceable>{name}</replaceable>

     * , where 
                  <replaceable>{location}</replaceable>
               
     * is querystring, path, or header; and 
                 
     * <replaceable>{name}</replaceable>
                must be a valid and unique
     * method request parameter name.</p> <p>For HTTP API integrations with a specified
     * integrationSubtype, request parameters are a key-value map specifying parameters
     * that are passed to AWS_PROXY integrations. You can provide static values, or map
     * request data, stage variables, or context variables that are evaluated at
     * runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-develop-integrations-aws-services.html">Working
     * with AWS service integrations for HTTP APIs</a>.</p> <p>For HTTP API
     * integrations without a specified integrationSubtype request parameters are a
     * key-value map specifying how to transform HTTP requests before sending them to
     * the backend. The key should follow the pattern
     * &lt;action&gt;:&lt;header|querystring|path&gt;.&lt;location&gt; where action can
     * be append, overwrite or remove. For values, you can provide static values, or
     * map request data, stage variables, or context variables that are evaluated at
     * runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-parameter-mapping.html">Transforming
     * API requests and responses</a>.</p>
     */
    inline bool RequestParametersHasBeenSet() const { return m_requestParametersHasBeenSet; }

    /**
     * <p>For WebSocket APIs, a key-value map specifying request parameters that are
     * passed from the method request to the backend. The key is an integration request
     * parameter name and the associated value is a method request parameter value or
     * static value that must be enclosed within single quotes and pre-encoded as
     * required by the backend. The method request parameter value must match the
     * pattern of
     * method.request.<replaceable>{location}</replaceable>.<replaceable>{name}</replaceable>

     * , where 
                  <replaceable>{location}</replaceable>
               
     * is querystring, path, or header; and 
                 
     * <replaceable>{name}</replaceable>
                must be a valid and unique
     * method request parameter name.</p> <p>For HTTP API integrations with a specified
     * integrationSubtype, request parameters are a key-value map specifying parameters
     * that are passed to AWS_PROXY integrations. You can provide static values, or map
     * request data, stage variables, or context variables that are evaluated at
     * runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-develop-integrations-aws-services.html">Working
     * with AWS service integrations for HTTP APIs</a>.</p> <p>For HTTP API
     * integrations without a specified integrationSubtype request parameters are a
     * key-value map specifying how to transform HTTP requests before sending them to
     * the backend. The key should follow the pattern
     * &lt;action&gt;:&lt;header|querystring|path&gt;.&lt;location&gt; where action can
     * be append, overwrite or remove. For values, you can provide static values, or
     * map request data, stage variables, or context variables that are evaluated at
     * runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-parameter-mapping.html">Transforming
     * API requests and responses</a>.</p>
     */
    inline void SetRequestParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_requestParametersHasBeenSet = true; m_requestParameters = value; }

    /**
     * <p>For WebSocket APIs, a key-value map specifying request parameters that are
     * passed from the method request to the backend. The key is an integration request
     * parameter name and the associated value is a method request parameter value or
     * static value that must be enclosed within single quotes and pre-encoded as
     * required by the backend. The method request parameter value must match the
     * pattern of
     * method.request.<replaceable>{location}</replaceable>.<replaceable>{name}</replaceable>

     * , where 
                  <replaceable>{location}</replaceable>
               
     * is querystring, path, or header; and 
                 
     * <replaceable>{name}</replaceable>
                must be a valid and unique
     * method request parameter name.</p> <p>For HTTP API integrations with a specified
     * integrationSubtype, request parameters are a key-value map specifying parameters
     * that are passed to AWS_PROXY integrations. You can provide static values, or map
     * request data, stage variables, or context variables that are evaluated at
     * runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-develop-integrations-aws-services.html">Working
     * with AWS service integrations for HTTP APIs</a>.</p> <p>For HTTP API
     * integrations without a specified integrationSubtype request parameters are a
     * key-value map specifying how to transform HTTP requests before sending them to
     * the backend. The key should follow the pattern
     * &lt;action&gt;:&lt;header|querystring|path&gt;.&lt;location&gt; where action can
     * be append, overwrite or remove. For values, you can provide static values, or
     * map request data, stage variables, or context variables that are evaluated at
     * runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-parameter-mapping.html">Transforming
     * API requests and responses</a>.</p>
     */
    inline void SetRequestParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_requestParametersHasBeenSet = true; m_requestParameters = std::move(value); }

    /**
     * <p>For WebSocket APIs, a key-value map specifying request parameters that are
     * passed from the method request to the backend. The key is an integration request
     * parameter name and the associated value is a method request parameter value or
     * static value that must be enclosed within single quotes and pre-encoded as
     * required by the backend. The method request parameter value must match the
     * pattern of
     * method.request.<replaceable>{location}</replaceable>.<replaceable>{name}</replaceable>

     * , where 
                  <replaceable>{location}</replaceable>
               
     * is querystring, path, or header; and 
                 
     * <replaceable>{name}</replaceable>
                must be a valid and unique
     * method request parameter name.</p> <p>For HTTP API integrations with a specified
     * integrationSubtype, request parameters are a key-value map specifying parameters
     * that are passed to AWS_PROXY integrations. You can provide static values, or map
     * request data, stage variables, or context variables that are evaluated at
     * runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-develop-integrations-aws-services.html">Working
     * with AWS service integrations for HTTP APIs</a>.</p> <p>For HTTP API
     * integrations without a specified integrationSubtype request parameters are a
     * key-value map specifying how to transform HTTP requests before sending them to
     * the backend. The key should follow the pattern
     * &lt;action&gt;:&lt;header|querystring|path&gt;.&lt;location&gt; where action can
     * be append, overwrite or remove. For values, you can provide static values, or
     * map request data, stage variables, or context variables that are evaluated at
     * runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-parameter-mapping.html">Transforming
     * API requests and responses</a>.</p>
     */
    inline CreateIntegrationRequest& WithRequestParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestParameters(value); return *this;}

    /**
     * <p>For WebSocket APIs, a key-value map specifying request parameters that are
     * passed from the method request to the backend. The key is an integration request
     * parameter name and the associated value is a method request parameter value or
     * static value that must be enclosed within single quotes and pre-encoded as
     * required by the backend. The method request parameter value must match the
     * pattern of
     * method.request.<replaceable>{location}</replaceable>.<replaceable>{name}</replaceable>

     * , where 
                  <replaceable>{location}</replaceable>
               
     * is querystring, path, or header; and 
                 
     * <replaceable>{name}</replaceable>
                must be a valid and unique
     * method request parameter name.</p> <p>For HTTP API integrations with a specified
     * integrationSubtype, request parameters are a key-value map specifying parameters
     * that are passed to AWS_PROXY integrations. You can provide static values, or map
     * request data, stage variables, or context variables that are evaluated at
     * runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-develop-integrations-aws-services.html">Working
     * with AWS service integrations for HTTP APIs</a>.</p> <p>For HTTP API
     * integrations without a specified integrationSubtype request parameters are a
     * key-value map specifying how to transform HTTP requests before sending them to
     * the backend. The key should follow the pattern
     * &lt;action&gt;:&lt;header|querystring|path&gt;.&lt;location&gt; where action can
     * be append, overwrite or remove. For values, you can provide static values, or
     * map request data, stage variables, or context variables that are evaluated at
     * runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-parameter-mapping.html">Transforming
     * API requests and responses</a>.</p>
     */
    inline CreateIntegrationRequest& WithRequestParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestParameters(std::move(value)); return *this;}

    /**
     * <p>For WebSocket APIs, a key-value map specifying request parameters that are
     * passed from the method request to the backend. The key is an integration request
     * parameter name and the associated value is a method request parameter value or
     * static value that must be enclosed within single quotes and pre-encoded as
     * required by the backend. The method request parameter value must match the
     * pattern of
     * method.request.<replaceable>{location}</replaceable>.<replaceable>{name}</replaceable>

     * , where 
                  <replaceable>{location}</replaceable>
               
     * is querystring, path, or header; and 
                 
     * <replaceable>{name}</replaceable>
                must be a valid and unique
     * method request parameter name.</p> <p>For HTTP API integrations with a specified
     * integrationSubtype, request parameters are a key-value map specifying parameters
     * that are passed to AWS_PROXY integrations. You can provide static values, or map
     * request data, stage variables, or context variables that are evaluated at
     * runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-develop-integrations-aws-services.html">Working
     * with AWS service integrations for HTTP APIs</a>.</p> <p>For HTTP API
     * integrations without a specified integrationSubtype request parameters are a
     * key-value map specifying how to transform HTTP requests before sending them to
     * the backend. The key should follow the pattern
     * &lt;action&gt;:&lt;header|querystring|path&gt;.&lt;location&gt; where action can
     * be append, overwrite or remove. For values, you can provide static values, or
     * map request data, stage variables, or context variables that are evaluated at
     * runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-parameter-mapping.html">Transforming
     * API requests and responses</a>.</p>
     */
    inline CreateIntegrationRequest& AddRequestParameters(const Aws::String& key, const Aws::String& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(key, value); return *this; }

    /**
     * <p>For WebSocket APIs, a key-value map specifying request parameters that are
     * passed from the method request to the backend. The key is an integration request
     * parameter name and the associated value is a method request parameter value or
     * static value that must be enclosed within single quotes and pre-encoded as
     * required by the backend. The method request parameter value must match the
     * pattern of
     * method.request.<replaceable>{location}</replaceable>.<replaceable>{name}</replaceable>

     * , where 
                  <replaceable>{location}</replaceable>
               
     * is querystring, path, or header; and 
                 
     * <replaceable>{name}</replaceable>
                must be a valid and unique
     * method request parameter name.</p> <p>For HTTP API integrations with a specified
     * integrationSubtype, request parameters are a key-value map specifying parameters
     * that are passed to AWS_PROXY integrations. You can provide static values, or map
     * request data, stage variables, or context variables that are evaluated at
     * runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-develop-integrations-aws-services.html">Working
     * with AWS service integrations for HTTP APIs</a>.</p> <p>For HTTP API
     * integrations without a specified integrationSubtype request parameters are a
     * key-value map specifying how to transform HTTP requests before sending them to
     * the backend. The key should follow the pattern
     * &lt;action&gt;:&lt;header|querystring|path&gt;.&lt;location&gt; where action can
     * be append, overwrite or remove. For values, you can provide static values, or
     * map request data, stage variables, or context variables that are evaluated at
     * runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-parameter-mapping.html">Transforming
     * API requests and responses</a>.</p>
     */
    inline CreateIntegrationRequest& AddRequestParameters(Aws::String&& key, const Aws::String& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>For WebSocket APIs, a key-value map specifying request parameters that are
     * passed from the method request to the backend. The key is an integration request
     * parameter name and the associated value is a method request parameter value or
     * static value that must be enclosed within single quotes and pre-encoded as
     * required by the backend. The method request parameter value must match the
     * pattern of
     * method.request.<replaceable>{location}</replaceable>.<replaceable>{name}</replaceable>

     * , where 
                  <replaceable>{location}</replaceable>
               
     * is querystring, path, or header; and 
                 
     * <replaceable>{name}</replaceable>
                must be a valid and unique
     * method request parameter name.</p> <p>For HTTP API integrations with a specified
     * integrationSubtype, request parameters are a key-value map specifying parameters
     * that are passed to AWS_PROXY integrations. You can provide static values, or map
     * request data, stage variables, or context variables that are evaluated at
     * runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-develop-integrations-aws-services.html">Working
     * with AWS service integrations for HTTP APIs</a>.</p> <p>For HTTP API
     * integrations without a specified integrationSubtype request parameters are a
     * key-value map specifying how to transform HTTP requests before sending them to
     * the backend. The key should follow the pattern
     * &lt;action&gt;:&lt;header|querystring|path&gt;.&lt;location&gt; where action can
     * be append, overwrite or remove. For values, you can provide static values, or
     * map request data, stage variables, or context variables that are evaluated at
     * runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-parameter-mapping.html">Transforming
     * API requests and responses</a>.</p>
     */
    inline CreateIntegrationRequest& AddRequestParameters(const Aws::String& key, Aws::String&& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>For WebSocket APIs, a key-value map specifying request parameters that are
     * passed from the method request to the backend. The key is an integration request
     * parameter name and the associated value is a method request parameter value or
     * static value that must be enclosed within single quotes and pre-encoded as
     * required by the backend. The method request parameter value must match the
     * pattern of
     * method.request.<replaceable>{location}</replaceable>.<replaceable>{name}</replaceable>

     * , where 
                  <replaceable>{location}</replaceable>
               
     * is querystring, path, or header; and 
                 
     * <replaceable>{name}</replaceable>
                must be a valid and unique
     * method request parameter name.</p> <p>For HTTP API integrations with a specified
     * integrationSubtype, request parameters are a key-value map specifying parameters
     * that are passed to AWS_PROXY integrations. You can provide static values, or map
     * request data, stage variables, or context variables that are evaluated at
     * runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-develop-integrations-aws-services.html">Working
     * with AWS service integrations for HTTP APIs</a>.</p> <p>For HTTP API
     * integrations without a specified integrationSubtype request parameters are a
     * key-value map specifying how to transform HTTP requests before sending them to
     * the backend. The key should follow the pattern
     * &lt;action&gt;:&lt;header|querystring|path&gt;.&lt;location&gt; where action can
     * be append, overwrite or remove. For values, you can provide static values, or
     * map request data, stage variables, or context variables that are evaluated at
     * runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-parameter-mapping.html">Transforming
     * API requests and responses</a>.</p>
     */
    inline CreateIntegrationRequest& AddRequestParameters(Aws::String&& key, Aws::String&& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>For WebSocket APIs, a key-value map specifying request parameters that are
     * passed from the method request to the backend. The key is an integration request
     * parameter name and the associated value is a method request parameter value or
     * static value that must be enclosed within single quotes and pre-encoded as
     * required by the backend. The method request parameter value must match the
     * pattern of
     * method.request.<replaceable>{location}</replaceable>.<replaceable>{name}</replaceable>

     * , where 
                  <replaceable>{location}</replaceable>
               
     * is querystring, path, or header; and 
                 
     * <replaceable>{name}</replaceable>
                must be a valid and unique
     * method request parameter name.</p> <p>For HTTP API integrations with a specified
     * integrationSubtype, request parameters are a key-value map specifying parameters
     * that are passed to AWS_PROXY integrations. You can provide static values, or map
     * request data, stage variables, or context variables that are evaluated at
     * runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-develop-integrations-aws-services.html">Working
     * with AWS service integrations for HTTP APIs</a>.</p> <p>For HTTP API
     * integrations without a specified integrationSubtype request parameters are a
     * key-value map specifying how to transform HTTP requests before sending them to
     * the backend. The key should follow the pattern
     * &lt;action&gt;:&lt;header|querystring|path&gt;.&lt;location&gt; where action can
     * be append, overwrite or remove. For values, you can provide static values, or
     * map request data, stage variables, or context variables that are evaluated at
     * runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-parameter-mapping.html">Transforming
     * API requests and responses</a>.</p>
     */
    inline CreateIntegrationRequest& AddRequestParameters(const char* key, Aws::String&& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>For WebSocket APIs, a key-value map specifying request parameters that are
     * passed from the method request to the backend. The key is an integration request
     * parameter name and the associated value is a method request parameter value or
     * static value that must be enclosed within single quotes and pre-encoded as
     * required by the backend. The method request parameter value must match the
     * pattern of
     * method.request.<replaceable>{location}</replaceable>.<replaceable>{name}</replaceable>

     * , where 
                  <replaceable>{location}</replaceable>
               
     * is querystring, path, or header; and 
                 
     * <replaceable>{name}</replaceable>
                must be a valid and unique
     * method request parameter name.</p> <p>For HTTP API integrations with a specified
     * integrationSubtype, request parameters are a key-value map specifying parameters
     * that are passed to AWS_PROXY integrations. You can provide static values, or map
     * request data, stage variables, or context variables that are evaluated at
     * runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-develop-integrations-aws-services.html">Working
     * with AWS service integrations for HTTP APIs</a>.</p> <p>For HTTP API
     * integrations without a specified integrationSubtype request parameters are a
     * key-value map specifying how to transform HTTP requests before sending them to
     * the backend. The key should follow the pattern
     * &lt;action&gt;:&lt;header|querystring|path&gt;.&lt;location&gt; where action can
     * be append, overwrite or remove. For values, you can provide static values, or
     * map request data, stage variables, or context variables that are evaluated at
     * runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-parameter-mapping.html">Transforming
     * API requests and responses</a>.</p>
     */
    inline CreateIntegrationRequest& AddRequestParameters(Aws::String&& key, const char* value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>For WebSocket APIs, a key-value map specifying request parameters that are
     * passed from the method request to the backend. The key is an integration request
     * parameter name and the associated value is a method request parameter value or
     * static value that must be enclosed within single quotes and pre-encoded as
     * required by the backend. The method request parameter value must match the
     * pattern of
     * method.request.<replaceable>{location}</replaceable>.<replaceable>{name}</replaceable>

     * , where 
                  <replaceable>{location}</replaceable>
               
     * is querystring, path, or header; and 
                 
     * <replaceable>{name}</replaceable>
                must be a valid and unique
     * method request parameter name.</p> <p>For HTTP API integrations with a specified
     * integrationSubtype, request parameters are a key-value map specifying parameters
     * that are passed to AWS_PROXY integrations. You can provide static values, or map
     * request data, stage variables, or context variables that are evaluated at
     * runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-develop-integrations-aws-services.html">Working
     * with AWS service integrations for HTTP APIs</a>.</p> <p>For HTTP API
     * integrations without a specified integrationSubtype request parameters are a
     * key-value map specifying how to transform HTTP requests before sending them to
     * the backend. The key should follow the pattern
     * &lt;action&gt;:&lt;header|querystring|path&gt;.&lt;location&gt; where action can
     * be append, overwrite or remove. For values, you can provide static values, or
     * map request data, stage variables, or context variables that are evaluated at
     * runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-parameter-mapping.html">Transforming
     * API requests and responses</a>.</p>
     */
    inline CreateIntegrationRequest& AddRequestParameters(const char* key, const char* value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(key, value); return *this; }


    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value. Supported only for WebSocket APIs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestTemplates() const{ return m_requestTemplates; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value. Supported only for WebSocket APIs.</p>
     */
    inline bool RequestTemplatesHasBeenSet() const { return m_requestTemplatesHasBeenSet; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value. Supported only for WebSocket APIs.</p>
     */
    inline void SetRequestTemplates(const Aws::Map<Aws::String, Aws::String>& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates = value; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value. Supported only for WebSocket APIs.</p>
     */
    inline void SetRequestTemplates(Aws::Map<Aws::String, Aws::String>&& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates = std::move(value); }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value. Supported only for WebSocket APIs.</p>
     */
    inline CreateIntegrationRequest& WithRequestTemplates(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestTemplates(value); return *this;}

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value. Supported only for WebSocket APIs.</p>
     */
    inline CreateIntegrationRequest& WithRequestTemplates(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestTemplates(std::move(value)); return *this;}

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value. Supported only for WebSocket APIs.</p>
     */
    inline CreateIntegrationRequest& AddRequestTemplates(const Aws::String& key, const Aws::String& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(key, value); return *this; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value. Supported only for WebSocket APIs.</p>
     */
    inline CreateIntegrationRequest& AddRequestTemplates(Aws::String&& key, const Aws::String& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(std::move(key), value); return *this; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value. Supported only for WebSocket APIs.</p>
     */
    inline CreateIntegrationRequest& AddRequestTemplates(const Aws::String& key, Aws::String&& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value. Supported only for WebSocket APIs.</p>
     */
    inline CreateIntegrationRequest& AddRequestTemplates(Aws::String&& key, Aws::String&& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value. Supported only for WebSocket APIs.</p>
     */
    inline CreateIntegrationRequest& AddRequestTemplates(const char* key, Aws::String&& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value. Supported only for WebSocket APIs.</p>
     */
    inline CreateIntegrationRequest& AddRequestTemplates(Aws::String&& key, const char* value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(std::move(key), value); return *this; }

    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value. Supported only for WebSocket APIs.</p>
     */
    inline CreateIntegrationRequest& AddRequestTemplates(const char* key, const char* value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(key, value); return *this; }


    /**
     * <p>Supported only for HTTP APIs. You use response parameters to transform the
     * HTTP response from a backend integration before returning the response to
     * clients. Specify a key-value map from a selection key to response parameters.
     * The selection key must be a valid HTTP status code within the range of 200-599.
     * Response parameters are a key-value map. The key must match pattern
     * &lt;action&gt;:&lt;header&gt;.&lt;location&gt; or overwrite.statuscode. The
     * action can be append, overwrite or remove. The value can be a static value, or
     * map to response data, stage variables, or context variables that are evaluated
     * at runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-parameter-mapping.html">Transforming
     * API requests and responses</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& GetResponseParameters() const{ return m_responseParameters; }

    /**
     * <p>Supported only for HTTP APIs. You use response parameters to transform the
     * HTTP response from a backend integration before returning the response to
     * clients. Specify a key-value map from a selection key to response parameters.
     * The selection key must be a valid HTTP status code within the range of 200-599.
     * Response parameters are a key-value map. The key must match pattern
     * &lt;action&gt;:&lt;header&gt;.&lt;location&gt; or overwrite.statuscode. The
     * action can be append, overwrite or remove. The value can be a static value, or
     * map to response data, stage variables, or context variables that are evaluated
     * at runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-parameter-mapping.html">Transforming
     * API requests and responses</a>.</p>
     */
    inline bool ResponseParametersHasBeenSet() const { return m_responseParametersHasBeenSet; }

    /**
     * <p>Supported only for HTTP APIs. You use response parameters to transform the
     * HTTP response from a backend integration before returning the response to
     * clients. Specify a key-value map from a selection key to response parameters.
     * The selection key must be a valid HTTP status code within the range of 200-599.
     * Response parameters are a key-value map. The key must match pattern
     * &lt;action&gt;:&lt;header&gt;.&lt;location&gt; or overwrite.statuscode. The
     * action can be append, overwrite or remove. The value can be a static value, or
     * map to response data, stage variables, or context variables that are evaluated
     * at runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-parameter-mapping.html">Transforming
     * API requests and responses</a>.</p>
     */
    inline void SetResponseParameters(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& value) { m_responseParametersHasBeenSet = true; m_responseParameters = value; }

    /**
     * <p>Supported only for HTTP APIs. You use response parameters to transform the
     * HTTP response from a backend integration before returning the response to
     * clients. Specify a key-value map from a selection key to response parameters.
     * The selection key must be a valid HTTP status code within the range of 200-599.
     * Response parameters are a key-value map. The key must match pattern
     * &lt;action&gt;:&lt;header&gt;.&lt;location&gt; or overwrite.statuscode. The
     * action can be append, overwrite or remove. The value can be a static value, or
     * map to response data, stage variables, or context variables that are evaluated
     * at runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-parameter-mapping.html">Transforming
     * API requests and responses</a>.</p>
     */
    inline void SetResponseParameters(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>&& value) { m_responseParametersHasBeenSet = true; m_responseParameters = std::move(value); }

    /**
     * <p>Supported only for HTTP APIs. You use response parameters to transform the
     * HTTP response from a backend integration before returning the response to
     * clients. Specify a key-value map from a selection key to response parameters.
     * The selection key must be a valid HTTP status code within the range of 200-599.
     * Response parameters are a key-value map. The key must match pattern
     * &lt;action&gt;:&lt;header&gt;.&lt;location&gt; or overwrite.statuscode. The
     * action can be append, overwrite or remove. The value can be a static value, or
     * map to response data, stage variables, or context variables that are evaluated
     * at runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-parameter-mapping.html">Transforming
     * API requests and responses</a>.</p>
     */
    inline CreateIntegrationRequest& WithResponseParameters(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& value) { SetResponseParameters(value); return *this;}

    /**
     * <p>Supported only for HTTP APIs. You use response parameters to transform the
     * HTTP response from a backend integration before returning the response to
     * clients. Specify a key-value map from a selection key to response parameters.
     * The selection key must be a valid HTTP status code within the range of 200-599.
     * Response parameters are a key-value map. The key must match pattern
     * &lt;action&gt;:&lt;header&gt;.&lt;location&gt; or overwrite.statuscode. The
     * action can be append, overwrite or remove. The value can be a static value, or
     * map to response data, stage variables, or context variables that are evaluated
     * at runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-parameter-mapping.html">Transforming
     * API requests and responses</a>.</p>
     */
    inline CreateIntegrationRequest& WithResponseParameters(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>&& value) { SetResponseParameters(std::move(value)); return *this;}

    /**
     * <p>Supported only for HTTP APIs. You use response parameters to transform the
     * HTTP response from a backend integration before returning the response to
     * clients. Specify a key-value map from a selection key to response parameters.
     * The selection key must be a valid HTTP status code within the range of 200-599.
     * Response parameters are a key-value map. The key must match pattern
     * &lt;action&gt;:&lt;header&gt;.&lt;location&gt; or overwrite.statuscode. The
     * action can be append, overwrite or remove. The value can be a static value, or
     * map to response data, stage variables, or context variables that are evaluated
     * at runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-parameter-mapping.html">Transforming
     * API requests and responses</a>.</p>
     */
    inline CreateIntegrationRequest& AddResponseParameters(const Aws::String& key, const Aws::Map<Aws::String, Aws::String>& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, value); return *this; }

    /**
     * <p>Supported only for HTTP APIs. You use response parameters to transform the
     * HTTP response from a backend integration before returning the response to
     * clients. Specify a key-value map from a selection key to response parameters.
     * The selection key must be a valid HTTP status code within the range of 200-599.
     * Response parameters are a key-value map. The key must match pattern
     * &lt;action&gt;:&lt;header&gt;.&lt;location&gt; or overwrite.statuscode. The
     * action can be append, overwrite or remove. The value can be a static value, or
     * map to response data, stage variables, or context variables that are evaluated
     * at runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-parameter-mapping.html">Transforming
     * API requests and responses</a>.</p>
     */
    inline CreateIntegrationRequest& AddResponseParameters(Aws::String&& key, const Aws::Map<Aws::String, Aws::String>& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Supported only for HTTP APIs. You use response parameters to transform the
     * HTTP response from a backend integration before returning the response to
     * clients. Specify a key-value map from a selection key to response parameters.
     * The selection key must be a valid HTTP status code within the range of 200-599.
     * Response parameters are a key-value map. The key must match pattern
     * &lt;action&gt;:&lt;header&gt;.&lt;location&gt; or overwrite.statuscode. The
     * action can be append, overwrite or remove. The value can be a static value, or
     * map to response data, stage variables, or context variables that are evaluated
     * at runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-parameter-mapping.html">Transforming
     * API requests and responses</a>.</p>
     */
    inline CreateIntegrationRequest& AddResponseParameters(const Aws::String& key, Aws::Map<Aws::String, Aws::String>&& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Supported only for HTTP APIs. You use response parameters to transform the
     * HTTP response from a backend integration before returning the response to
     * clients. Specify a key-value map from a selection key to response parameters.
     * The selection key must be a valid HTTP status code within the range of 200-599.
     * Response parameters are a key-value map. The key must match pattern
     * &lt;action&gt;:&lt;header&gt;.&lt;location&gt; or overwrite.statuscode. The
     * action can be append, overwrite or remove. The value can be a static value, or
     * map to response data, stage variables, or context variables that are evaluated
     * at runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-parameter-mapping.html">Transforming
     * API requests and responses</a>.</p>
     */
    inline CreateIntegrationRequest& AddResponseParameters(Aws::String&& key, Aws::Map<Aws::String, Aws::String>&& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Supported only for HTTP APIs. You use response parameters to transform the
     * HTTP response from a backend integration before returning the response to
     * clients. Specify a key-value map from a selection key to response parameters.
     * The selection key must be a valid HTTP status code within the range of 200-599.
     * Response parameters are a key-value map. The key must match pattern
     * &lt;action&gt;:&lt;header&gt;.&lt;location&gt; or overwrite.statuscode. The
     * action can be append, overwrite or remove. The value can be a static value, or
     * map to response data, stage variables, or context variables that are evaluated
     * at runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-parameter-mapping.html">Transforming
     * API requests and responses</a>.</p>
     */
    inline CreateIntegrationRequest& AddResponseParameters(const char* key, Aws::Map<Aws::String, Aws::String>&& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Supported only for HTTP APIs. You use response parameters to transform the
     * HTTP response from a backend integration before returning the response to
     * clients. Specify a key-value map from a selection key to response parameters.
     * The selection key must be a valid HTTP status code within the range of 200-599.
     * Response parameters are a key-value map. The key must match pattern
     * &lt;action&gt;:&lt;header&gt;.&lt;location&gt; or overwrite.statuscode. The
     * action can be append, overwrite or remove. The value can be a static value, or
     * map to response data, stage variables, or context variables that are evaluated
     * at runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-parameter-mapping.html">Transforming
     * API requests and responses</a>.</p>
     */
    inline CreateIntegrationRequest& AddResponseParameters(const char* key, const Aws::Map<Aws::String, Aws::String>& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, value); return *this; }


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
     * <p>Custom timeout between 50 and 29,000 milliseconds for WebSocket APIs and
     * between 50 and 30,000 milliseconds for HTTP APIs. The default timeout is 29
     * seconds for WebSocket APIs and 30 seconds for HTTP APIs.</p>
     */
    inline int GetTimeoutInMillis() const{ return m_timeoutInMillis; }

    /**
     * <p>Custom timeout between 50 and 29,000 milliseconds for WebSocket APIs and
     * between 50 and 30,000 milliseconds for HTTP APIs. The default timeout is 29
     * seconds for WebSocket APIs and 30 seconds for HTTP APIs.</p>
     */
    inline bool TimeoutInMillisHasBeenSet() const { return m_timeoutInMillisHasBeenSet; }

    /**
     * <p>Custom timeout between 50 and 29,000 milliseconds for WebSocket APIs and
     * between 50 and 30,000 milliseconds for HTTP APIs. The default timeout is 29
     * seconds for WebSocket APIs and 30 seconds for HTTP APIs.</p>
     */
    inline void SetTimeoutInMillis(int value) { m_timeoutInMillisHasBeenSet = true; m_timeoutInMillis = value; }

    /**
     * <p>Custom timeout between 50 and 29,000 milliseconds for WebSocket APIs and
     * between 50 and 30,000 milliseconds for HTTP APIs. The default timeout is 29
     * seconds for WebSocket APIs and 30 seconds for HTTP APIs.</p>
     */
    inline CreateIntegrationRequest& WithTimeoutInMillis(int value) { SetTimeoutInMillis(value); return *this;}


    /**
     * <p>The TLS configuration for a private integration. If you specify a TLS
     * configuration, private integration traffic uses the HTTPS protocol. Supported
     * only for HTTP APIs.</p>
     */
    inline const TlsConfigInput& GetTlsConfig() const{ return m_tlsConfig; }

    /**
     * <p>The TLS configuration for a private integration. If you specify a TLS
     * configuration, private integration traffic uses the HTTPS protocol. Supported
     * only for HTTP APIs.</p>
     */
    inline bool TlsConfigHasBeenSet() const { return m_tlsConfigHasBeenSet; }

    /**
     * <p>The TLS configuration for a private integration. If you specify a TLS
     * configuration, private integration traffic uses the HTTPS protocol. Supported
     * only for HTTP APIs.</p>
     */
    inline void SetTlsConfig(const TlsConfigInput& value) { m_tlsConfigHasBeenSet = true; m_tlsConfig = value; }

    /**
     * <p>The TLS configuration for a private integration. If you specify a TLS
     * configuration, private integration traffic uses the HTTPS protocol. Supported
     * only for HTTP APIs.</p>
     */
    inline void SetTlsConfig(TlsConfigInput&& value) { m_tlsConfigHasBeenSet = true; m_tlsConfig = std::move(value); }

    /**
     * <p>The TLS configuration for a private integration. If you specify a TLS
     * configuration, private integration traffic uses the HTTPS protocol. Supported
     * only for HTTP APIs.</p>
     */
    inline CreateIntegrationRequest& WithTlsConfig(const TlsConfigInput& value) { SetTlsConfig(value); return *this;}

    /**
     * <p>The TLS configuration for a private integration. If you specify a TLS
     * configuration, private integration traffic uses the HTTPS protocol. Supported
     * only for HTTP APIs.</p>
     */
    inline CreateIntegrationRequest& WithTlsConfig(TlsConfigInput&& value) { SetTlsConfig(std::move(value)); return *this;}

  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet = false;

    ConnectionType m_connectionType;
    bool m_connectionTypeHasBeenSet = false;

    ContentHandlingStrategy m_contentHandlingStrategy;
    bool m_contentHandlingStrategyHasBeenSet = false;

    Aws::String m_credentialsArn;
    bool m_credentialsArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_integrationMethod;
    bool m_integrationMethodHasBeenSet = false;

    Aws::String m_integrationSubtype;
    bool m_integrationSubtypeHasBeenSet = false;

    IntegrationType m_integrationType;
    bool m_integrationTypeHasBeenSet = false;

    Aws::String m_integrationUri;
    bool m_integrationUriHasBeenSet = false;

    PassthroughBehavior m_passthroughBehavior;
    bool m_passthroughBehaviorHasBeenSet = false;

    Aws::String m_payloadFormatVersion;
    bool m_payloadFormatVersionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_requestParameters;
    bool m_requestParametersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_requestTemplates;
    bool m_requestTemplatesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>> m_responseParameters;
    bool m_responseParametersHasBeenSet = false;

    Aws::String m_templateSelectionExpression;
    bool m_templateSelectionExpressionHasBeenSet = false;

    int m_timeoutInMillis;
    bool m_timeoutInMillisHasBeenSet = false;

    TlsConfigInput m_tlsConfig;
    bool m_tlsConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
