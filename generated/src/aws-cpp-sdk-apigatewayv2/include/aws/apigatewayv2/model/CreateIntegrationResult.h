﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigatewayv2/model/ConnectionType.h>
#include <aws/apigatewayv2/model/ContentHandlingStrategy.h>
#include <aws/apigatewayv2/model/IntegrationType.h>
#include <aws/apigatewayv2/model/PassthroughBehavior.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/apigatewayv2/model/TlsConfig.h>
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
  class CreateIntegrationResult
  {
  public:
    AWS_APIGATEWAYV2_API CreateIntegrationResult() = default;
    AWS_APIGATEWAYV2_API CreateIntegrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAYV2_API CreateIntegrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies whether an integration is managed by API Gateway. If you created an
     * API using using quick create, the resulting integration is managed by API
     * Gateway. You can update a managed integration, but you can't delete it.</p>
     */
    inline bool GetApiGatewayManaged() const { return m_apiGatewayManaged; }
    inline void SetApiGatewayManaged(bool value) { m_apiGatewayManagedHasBeenSet = true; m_apiGatewayManaged = value; }
    inline CreateIntegrationResult& WithApiGatewayManaged(bool value) { SetApiGatewayManaged(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC link for a private integration. Supported only for HTTP
     * APIs.</p>
     */
    inline const Aws::String& GetConnectionId() const { return m_connectionId; }
    template<typename ConnectionIdT = Aws::String>
    void SetConnectionId(ConnectionIdT&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::forward<ConnectionIdT>(value); }
    template<typename ConnectionIdT = Aws::String>
    CreateIntegrationResult& WithConnectionId(ConnectionIdT&& value) { SetConnectionId(std::forward<ConnectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the network connection to the integration endpoint. Specify
     * INTERNET for connections through the public routable internet or VPC_LINK for
     * private connections between API Gateway and resources in a VPC. The default
     * value is INTERNET.</p>
     */
    inline ConnectionType GetConnectionType() const { return m_connectionType; }
    inline void SetConnectionType(ConnectionType value) { m_connectionTypeHasBeenSet = true; m_connectionType = value; }
    inline CreateIntegrationResult& WithConnectionType(ConnectionType value) { SetConnectionType(value); return *this;}
    ///@}

    ///@{
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
    inline ContentHandlingStrategy GetContentHandlingStrategy() const { return m_contentHandlingStrategy; }
    inline void SetContentHandlingStrategy(ContentHandlingStrategy value) { m_contentHandlingStrategyHasBeenSet = true; m_contentHandlingStrategy = value; }
    inline CreateIntegrationResult& WithContentHandlingStrategy(ContentHandlingStrategy value) { SetContentHandlingStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the credentials required for the integration, if any. For AWS
     * integrations, three options are available. To specify an IAM Role for API
     * Gateway to assume, use the role's Amazon Resource Name (ARN). To require that
     * the caller's identity be passed through from the request, specify the string
     * arn:aws:iam::*:user/ *. To use resource-based permissions on supported AWS
     * services, specify null.</p>
     */
    inline const Aws::String& GetCredentialsArn() const { return m_credentialsArn; }
    template<typename CredentialsArnT = Aws::String>
    void SetCredentialsArn(CredentialsArnT&& value) { m_credentialsArnHasBeenSet = true; m_credentialsArn = std::forward<CredentialsArnT>(value); }
    template<typename CredentialsArnT = Aws::String>
    CreateIntegrationResult& WithCredentialsArn(CredentialsArnT&& value) { SetCredentialsArn(std::forward<CredentialsArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the description of an integration.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateIntegrationResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the identifier of an integration.</p>
     */
    inline const Aws::String& GetIntegrationId() const { return m_integrationId; }
    template<typename IntegrationIdT = Aws::String>
    void SetIntegrationId(IntegrationIdT&& value) { m_integrationIdHasBeenSet = true; m_integrationId = std::forward<IntegrationIdT>(value); }
    template<typename IntegrationIdT = Aws::String>
    CreateIntegrationResult& WithIntegrationId(IntegrationIdT&& value) { SetIntegrationId(std::forward<IntegrationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the integration's HTTP method type.</p>
     */
    inline const Aws::String& GetIntegrationMethod() const { return m_integrationMethod; }
    template<typename IntegrationMethodT = Aws::String>
    void SetIntegrationMethod(IntegrationMethodT&& value) { m_integrationMethodHasBeenSet = true; m_integrationMethod = std::forward<IntegrationMethodT>(value); }
    template<typename IntegrationMethodT = Aws::String>
    CreateIntegrationResult& WithIntegrationMethod(IntegrationMethodT&& value) { SetIntegrationMethod(std::forward<IntegrationMethodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The integration response selection expression for the integration. Supported
     * only for WebSocket APIs. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/apigateway-websocket-api-selection-expressions.html#apigateway-websocket-api-integration-response-selection-expressions">Integration
     * Response Selection Expressions</a>.</p>
     */
    inline const Aws::String& GetIntegrationResponseSelectionExpression() const { return m_integrationResponseSelectionExpression; }
    template<typename IntegrationResponseSelectionExpressionT = Aws::String>
    void SetIntegrationResponseSelectionExpression(IntegrationResponseSelectionExpressionT&& value) { m_integrationResponseSelectionExpressionHasBeenSet = true; m_integrationResponseSelectionExpression = std::forward<IntegrationResponseSelectionExpressionT>(value); }
    template<typename IntegrationResponseSelectionExpressionT = Aws::String>
    CreateIntegrationResult& WithIntegrationResponseSelectionExpression(IntegrationResponseSelectionExpressionT&& value) { SetIntegrationResponseSelectionExpression(std::forward<IntegrationResponseSelectionExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Supported only for HTTP API AWS_PROXY integrations. Specifies the AWS service
     * action to invoke. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-develop-integrations-aws-services-reference.html">Integration
     * subtype reference</a>.</p>
     */
    inline const Aws::String& GetIntegrationSubtype() const { return m_integrationSubtype; }
    template<typename IntegrationSubtypeT = Aws::String>
    void SetIntegrationSubtype(IntegrationSubtypeT&& value) { m_integrationSubtypeHasBeenSet = true; m_integrationSubtype = std::forward<IntegrationSubtypeT>(value); }
    template<typename IntegrationSubtypeT = Aws::String>
    CreateIntegrationResult& WithIntegrationSubtype(IntegrationSubtypeT&& value) { SetIntegrationSubtype(std::forward<IntegrationSubtypeT>(value)); return *this;}
    ///@}

    ///@{
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
     * integration.</p> <p>MOCK: for integrating the route or method request with API
     * Gateway as a "loopback" endpoint without invoking any backend. Supported only
     * for WebSocket APIs.</p>
     */
    inline IntegrationType GetIntegrationType() const { return m_integrationType; }
    inline void SetIntegrationType(IntegrationType value) { m_integrationTypeHasBeenSet = true; m_integrationType = value; }
    inline CreateIntegrationResult& WithIntegrationType(IntegrationType value) { SetIntegrationType(value); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetIntegrationUri() const { return m_integrationUri; }
    template<typename IntegrationUriT = Aws::String>
    void SetIntegrationUri(IntegrationUriT&& value) { m_integrationUriHasBeenSet = true; m_integrationUri = std::forward<IntegrationUriT>(value); }
    template<typename IntegrationUriT = Aws::String>
    CreateIntegrationResult& WithIntegrationUri(IntegrationUriT&& value) { SetIntegrationUri(std::forward<IntegrationUriT>(value)); return *this;}
    ///@}

    ///@{
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
    inline PassthroughBehavior GetPassthroughBehavior() const { return m_passthroughBehavior; }
    inline void SetPassthroughBehavior(PassthroughBehavior value) { m_passthroughBehaviorHasBeenSet = true; m_passthroughBehavior = value; }
    inline CreateIntegrationResult& WithPassthroughBehavior(PassthroughBehavior value) { SetPassthroughBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the format of the payload sent to an integration. Required for HTTP
     * APIs. Supported values for Lambda proxy integrations are 1.0 and 2.0. For all
     * other integrations, 1.0 is the only supported value. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-develop-integrations-lambda.html">Working
     * with AWS Lambda proxy integrations for HTTP APIs</a>.</p>
     */
    inline const Aws::String& GetPayloadFormatVersion() const { return m_payloadFormatVersion; }
    template<typename PayloadFormatVersionT = Aws::String>
    void SetPayloadFormatVersion(PayloadFormatVersionT&& value) { m_payloadFormatVersionHasBeenSet = true; m_payloadFormatVersion = std::forward<PayloadFormatVersionT>(value); }
    template<typename PayloadFormatVersionT = Aws::String>
    CreateIntegrationResult& WithPayloadFormatVersion(PayloadFormatVersionT&& value) { SetPayloadFormatVersion(std::forward<PayloadFormatVersionT>(value)); return *this;}
    ///@}

    ///@{
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
           is
     * querystring, path, or header; and 
           
     * <replaceable>{name}</replaceable>
           must be a valid and unique method
     * request parameter name.</p> <p>For HTTP API integrations with a specified
     * integrationSubtype, request parameters are a key-value map specifying parameters
     * that are passed to AWS_PROXY integrations. You can provide static values, or map
     * request data, stage variables, or context variables that are evaluated at
     * runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-develop-integrations-aws-services.html">Working
     * with AWS service integrations for HTTP APIs</a>.</p> <p>For HTTP API
     * integrations, without a specified integrationSubtype request parameters are a
     * key-value map specifying how to transform HTTP requests before sending them to
     * backend integrations. The key should follow the pattern
     * &lt;action&gt;:&lt;header|querystring|path&gt;.&lt;location&gt;. The action can
     * be append, overwrite or remove. For values, you can provide static values, or
     * map request data, stage variables, or context variables that are evaluated at
     * runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-parameter-mapping.html">Transforming
     * API requests and responses</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestParameters() const { return m_requestParameters; }
    template<typename RequestParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetRequestParameters(RequestParametersT&& value) { m_requestParametersHasBeenSet = true; m_requestParameters = std::forward<RequestParametersT>(value); }
    template<typename RequestParametersT = Aws::Map<Aws::String, Aws::String>>
    CreateIntegrationResult& WithRequestParameters(RequestParametersT&& value) { SetRequestParameters(std::forward<RequestParametersT>(value)); return *this;}
    template<typename RequestParametersKeyT = Aws::String, typename RequestParametersValueT = Aws::String>
    CreateIntegrationResult& AddRequestParameters(RequestParametersKeyT&& key, RequestParametersValueT&& value) {
      m_requestParametersHasBeenSet = true; m_requestParameters.emplace(std::forward<RequestParametersKeyT>(key), std::forward<RequestParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value. Supported only for WebSocket APIs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestTemplates() const { return m_requestTemplates; }
    template<typename RequestTemplatesT = Aws::Map<Aws::String, Aws::String>>
    void SetRequestTemplates(RequestTemplatesT&& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates = std::forward<RequestTemplatesT>(value); }
    template<typename RequestTemplatesT = Aws::Map<Aws::String, Aws::String>>
    CreateIntegrationResult& WithRequestTemplates(RequestTemplatesT&& value) { SetRequestTemplates(std::forward<RequestTemplatesT>(value)); return *this;}
    template<typename RequestTemplatesKeyT = Aws::String, typename RequestTemplatesValueT = Aws::String>
    CreateIntegrationResult& AddRequestTemplates(RequestTemplatesKeyT&& key, RequestTemplatesValueT&& value) {
      m_requestTemplatesHasBeenSet = true; m_requestTemplates.emplace(std::forward<RequestTemplatesKeyT>(key), std::forward<RequestTemplatesValueT>(value)); return *this;
    }
    ///@}

    ///@{
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
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& GetResponseParameters() const { return m_responseParameters; }
    template<typename ResponseParametersT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>>
    void SetResponseParameters(ResponseParametersT&& value) { m_responseParametersHasBeenSet = true; m_responseParameters = std::forward<ResponseParametersT>(value); }
    template<typename ResponseParametersT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>>
    CreateIntegrationResult& WithResponseParameters(ResponseParametersT&& value) { SetResponseParameters(std::forward<ResponseParametersT>(value)); return *this;}
    template<typename ResponseParametersKeyT = Aws::String, typename ResponseParametersValueT = Aws::Map<Aws::String, Aws::String>>
    CreateIntegrationResult& AddResponseParameters(ResponseParametersKeyT&& key, ResponseParametersValueT&& value) {
      m_responseParametersHasBeenSet = true; m_responseParameters.emplace(std::forward<ResponseParametersKeyT>(key), std::forward<ResponseParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The template selection expression for the integration. Supported only for
     * WebSocket APIs.</p>
     */
    inline const Aws::String& GetTemplateSelectionExpression() const { return m_templateSelectionExpression; }
    template<typename TemplateSelectionExpressionT = Aws::String>
    void SetTemplateSelectionExpression(TemplateSelectionExpressionT&& value) { m_templateSelectionExpressionHasBeenSet = true; m_templateSelectionExpression = std::forward<TemplateSelectionExpressionT>(value); }
    template<typename TemplateSelectionExpressionT = Aws::String>
    CreateIntegrationResult& WithTemplateSelectionExpression(TemplateSelectionExpressionT&& value) { SetTemplateSelectionExpression(std::forward<TemplateSelectionExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Custom timeout between 50 and 29,000 milliseconds for WebSocket APIs and
     * between 50 and 30,000 milliseconds for HTTP APIs. The default timeout is 29
     * seconds for WebSocket APIs and 30 seconds for HTTP APIs.</p>
     */
    inline int GetTimeoutInMillis() const { return m_timeoutInMillis; }
    inline void SetTimeoutInMillis(int value) { m_timeoutInMillisHasBeenSet = true; m_timeoutInMillis = value; }
    inline CreateIntegrationResult& WithTimeoutInMillis(int value) { SetTimeoutInMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The TLS configuration for a private integration. If you specify a TLS
     * configuration, private integration traffic uses the HTTPS protocol. Supported
     * only for HTTP APIs.</p>
     */
    inline const TlsConfig& GetTlsConfig() const { return m_tlsConfig; }
    template<typename TlsConfigT = TlsConfig>
    void SetTlsConfig(TlsConfigT&& value) { m_tlsConfigHasBeenSet = true; m_tlsConfig = std::forward<TlsConfigT>(value); }
    template<typename TlsConfigT = TlsConfig>
    CreateIntegrationResult& WithTlsConfig(TlsConfigT&& value) { SetTlsConfig(std::forward<TlsConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateIntegrationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    bool m_apiGatewayManaged{false};
    bool m_apiGatewayManagedHasBeenSet = false;

    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet = false;

    ConnectionType m_connectionType{ConnectionType::NOT_SET};
    bool m_connectionTypeHasBeenSet = false;

    ContentHandlingStrategy m_contentHandlingStrategy{ContentHandlingStrategy::NOT_SET};
    bool m_contentHandlingStrategyHasBeenSet = false;

    Aws::String m_credentialsArn;
    bool m_credentialsArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_integrationId;
    bool m_integrationIdHasBeenSet = false;

    Aws::String m_integrationMethod;
    bool m_integrationMethodHasBeenSet = false;

    Aws::String m_integrationResponseSelectionExpression;
    bool m_integrationResponseSelectionExpressionHasBeenSet = false;

    Aws::String m_integrationSubtype;
    bool m_integrationSubtypeHasBeenSet = false;

    IntegrationType m_integrationType{IntegrationType::NOT_SET};
    bool m_integrationTypeHasBeenSet = false;

    Aws::String m_integrationUri;
    bool m_integrationUriHasBeenSet = false;

    PassthroughBehavior m_passthroughBehavior{PassthroughBehavior::NOT_SET};
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

    int m_timeoutInMillis{0};
    bool m_timeoutInMillisHasBeenSet = false;

    TlsConfig m_tlsConfig;
    bool m_tlsConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
