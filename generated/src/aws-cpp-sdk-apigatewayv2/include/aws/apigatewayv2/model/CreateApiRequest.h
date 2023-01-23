/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/ApiGatewayV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigatewayv2/model/Cors.h>
#include <aws/apigatewayv2/model/ProtocolType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace ApiGatewayV2
{
namespace Model
{

  /**
   * <p>Creates a new Api resource to represent an API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateApiRequest">AWS
   * API Reference</a></p>
   */
  class CreateApiRequest : public ApiGatewayV2Request
  {
  public:
    AWS_APIGATEWAYV2_API CreateApiRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApi"; }

    AWS_APIGATEWAYV2_API Aws::String SerializePayload() const override;


    /**
     * <p>An API key selection expression. Supported only for WebSocket APIs. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/apigateway-websocket-api-selection-expressions.html#apigateway-websocket-api-apikey-selection-expressions">API
     * Key Selection Expressions</a>.</p>
     */
    inline const Aws::String& GetApiKeySelectionExpression() const{ return m_apiKeySelectionExpression; }

    /**
     * <p>An API key selection expression. Supported only for WebSocket APIs. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/apigateway-websocket-api-selection-expressions.html#apigateway-websocket-api-apikey-selection-expressions">API
     * Key Selection Expressions</a>.</p>
     */
    inline bool ApiKeySelectionExpressionHasBeenSet() const { return m_apiKeySelectionExpressionHasBeenSet; }

    /**
     * <p>An API key selection expression. Supported only for WebSocket APIs. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/apigateway-websocket-api-selection-expressions.html#apigateway-websocket-api-apikey-selection-expressions">API
     * Key Selection Expressions</a>.</p>
     */
    inline void SetApiKeySelectionExpression(const Aws::String& value) { m_apiKeySelectionExpressionHasBeenSet = true; m_apiKeySelectionExpression = value; }

    /**
     * <p>An API key selection expression. Supported only for WebSocket APIs. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/apigateway-websocket-api-selection-expressions.html#apigateway-websocket-api-apikey-selection-expressions">API
     * Key Selection Expressions</a>.</p>
     */
    inline void SetApiKeySelectionExpression(Aws::String&& value) { m_apiKeySelectionExpressionHasBeenSet = true; m_apiKeySelectionExpression = std::move(value); }

    /**
     * <p>An API key selection expression. Supported only for WebSocket APIs. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/apigateway-websocket-api-selection-expressions.html#apigateway-websocket-api-apikey-selection-expressions">API
     * Key Selection Expressions</a>.</p>
     */
    inline void SetApiKeySelectionExpression(const char* value) { m_apiKeySelectionExpressionHasBeenSet = true; m_apiKeySelectionExpression.assign(value); }

    /**
     * <p>An API key selection expression. Supported only for WebSocket APIs. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/apigateway-websocket-api-selection-expressions.html#apigateway-websocket-api-apikey-selection-expressions">API
     * Key Selection Expressions</a>.</p>
     */
    inline CreateApiRequest& WithApiKeySelectionExpression(const Aws::String& value) { SetApiKeySelectionExpression(value); return *this;}

    /**
     * <p>An API key selection expression. Supported only for WebSocket APIs. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/apigateway-websocket-api-selection-expressions.html#apigateway-websocket-api-apikey-selection-expressions">API
     * Key Selection Expressions</a>.</p>
     */
    inline CreateApiRequest& WithApiKeySelectionExpression(Aws::String&& value) { SetApiKeySelectionExpression(std::move(value)); return *this;}

    /**
     * <p>An API key selection expression. Supported only for WebSocket APIs. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/apigateway-websocket-api-selection-expressions.html#apigateway-websocket-api-apikey-selection-expressions">API
     * Key Selection Expressions</a>.</p>
     */
    inline CreateApiRequest& WithApiKeySelectionExpression(const char* value) { SetApiKeySelectionExpression(value); return *this;}


    /**
     * <p>A CORS configuration. Supported only for HTTP APIs. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-cors.html">Configuring
     * CORS</a> for more information.</p>
     */
    inline const Cors& GetCorsConfiguration() const{ return m_corsConfiguration; }

    /**
     * <p>A CORS configuration. Supported only for HTTP APIs. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-cors.html">Configuring
     * CORS</a> for more information.</p>
     */
    inline bool CorsConfigurationHasBeenSet() const { return m_corsConfigurationHasBeenSet; }

    /**
     * <p>A CORS configuration. Supported only for HTTP APIs. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-cors.html">Configuring
     * CORS</a> for more information.</p>
     */
    inline void SetCorsConfiguration(const Cors& value) { m_corsConfigurationHasBeenSet = true; m_corsConfiguration = value; }

    /**
     * <p>A CORS configuration. Supported only for HTTP APIs. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-cors.html">Configuring
     * CORS</a> for more information.</p>
     */
    inline void SetCorsConfiguration(Cors&& value) { m_corsConfigurationHasBeenSet = true; m_corsConfiguration = std::move(value); }

    /**
     * <p>A CORS configuration. Supported only for HTTP APIs. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-cors.html">Configuring
     * CORS</a> for more information.</p>
     */
    inline CreateApiRequest& WithCorsConfiguration(const Cors& value) { SetCorsConfiguration(value); return *this;}

    /**
     * <p>A CORS configuration. Supported only for HTTP APIs. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-cors.html">Configuring
     * CORS</a> for more information.</p>
     */
    inline CreateApiRequest& WithCorsConfiguration(Cors&& value) { SetCorsConfiguration(std::move(value)); return *this;}


    /**
     * <p>This property is part of quick create. It specifies the credentials required
     * for the integration, if any. For a Lambda integration, three options are
     * available. To specify an IAM Role for API Gateway to assume, use the role's
     * Amazon Resource Name (ARN). To require that the caller's identity be passed
     * through from the request, specify arn:aws:iam::*:user/ *. To use resource-based
     * permissions on supported AWS services, specify null. Currently, this property is
     * not used for HTTP integrations. Supported only for HTTP APIs.</p>
     */
    inline const Aws::String& GetCredentialsArn() const{ return m_credentialsArn; }

    /**
     * <p>This property is part of quick create. It specifies the credentials required
     * for the integration, if any. For a Lambda integration, three options are
     * available. To specify an IAM Role for API Gateway to assume, use the role's
     * Amazon Resource Name (ARN). To require that the caller's identity be passed
     * through from the request, specify arn:aws:iam::*:user/ *. To use resource-based
     * permissions on supported AWS services, specify null. Currently, this property is
     * not used for HTTP integrations. Supported only for HTTP APIs.</p>
     */
    inline bool CredentialsArnHasBeenSet() const { return m_credentialsArnHasBeenSet; }

    /**
     * <p>This property is part of quick create. It specifies the credentials required
     * for the integration, if any. For a Lambda integration, three options are
     * available. To specify an IAM Role for API Gateway to assume, use the role's
     * Amazon Resource Name (ARN). To require that the caller's identity be passed
     * through from the request, specify arn:aws:iam::*:user/ *. To use resource-based
     * permissions on supported AWS services, specify null. Currently, this property is
     * not used for HTTP integrations. Supported only for HTTP APIs.</p>
     */
    inline void SetCredentialsArn(const Aws::String& value) { m_credentialsArnHasBeenSet = true; m_credentialsArn = value; }

    /**
     * <p>This property is part of quick create. It specifies the credentials required
     * for the integration, if any. For a Lambda integration, three options are
     * available. To specify an IAM Role for API Gateway to assume, use the role's
     * Amazon Resource Name (ARN). To require that the caller's identity be passed
     * through from the request, specify arn:aws:iam::*:user/ *. To use resource-based
     * permissions on supported AWS services, specify null. Currently, this property is
     * not used for HTTP integrations. Supported only for HTTP APIs.</p>
     */
    inline void SetCredentialsArn(Aws::String&& value) { m_credentialsArnHasBeenSet = true; m_credentialsArn = std::move(value); }

    /**
     * <p>This property is part of quick create. It specifies the credentials required
     * for the integration, if any. For a Lambda integration, three options are
     * available. To specify an IAM Role for API Gateway to assume, use the role's
     * Amazon Resource Name (ARN). To require that the caller's identity be passed
     * through from the request, specify arn:aws:iam::*:user/ *. To use resource-based
     * permissions on supported AWS services, specify null. Currently, this property is
     * not used for HTTP integrations. Supported only for HTTP APIs.</p>
     */
    inline void SetCredentialsArn(const char* value) { m_credentialsArnHasBeenSet = true; m_credentialsArn.assign(value); }

    /**
     * <p>This property is part of quick create. It specifies the credentials required
     * for the integration, if any. For a Lambda integration, three options are
     * available. To specify an IAM Role for API Gateway to assume, use the role's
     * Amazon Resource Name (ARN). To require that the caller's identity be passed
     * through from the request, specify arn:aws:iam::*:user/ *. To use resource-based
     * permissions on supported AWS services, specify null. Currently, this property is
     * not used for HTTP integrations. Supported only for HTTP APIs.</p>
     */
    inline CreateApiRequest& WithCredentialsArn(const Aws::String& value) { SetCredentialsArn(value); return *this;}

    /**
     * <p>This property is part of quick create. It specifies the credentials required
     * for the integration, if any. For a Lambda integration, three options are
     * available. To specify an IAM Role for API Gateway to assume, use the role's
     * Amazon Resource Name (ARN). To require that the caller's identity be passed
     * through from the request, specify arn:aws:iam::*:user/ *. To use resource-based
     * permissions on supported AWS services, specify null. Currently, this property is
     * not used for HTTP integrations. Supported only for HTTP APIs.</p>
     */
    inline CreateApiRequest& WithCredentialsArn(Aws::String&& value) { SetCredentialsArn(std::move(value)); return *this;}

    /**
     * <p>This property is part of quick create. It specifies the credentials required
     * for the integration, if any. For a Lambda integration, three options are
     * available. To specify an IAM Role for API Gateway to assume, use the role's
     * Amazon Resource Name (ARN). To require that the caller's identity be passed
     * through from the request, specify arn:aws:iam::*:user/ *. To use resource-based
     * permissions on supported AWS services, specify null. Currently, this property is
     * not used for HTTP integrations. Supported only for HTTP APIs.</p>
     */
    inline CreateApiRequest& WithCredentialsArn(const char* value) { SetCredentialsArn(value); return *this;}


    /**
     * <p>The description of the API.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the API.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the API.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the API.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the API.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the API.</p>
     */
    inline CreateApiRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the API.</p>
     */
    inline CreateApiRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the API.</p>
     */
    inline CreateApiRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Avoid validating models when creating a deployment. Supported only for
     * WebSocket APIs.</p>
     */
    inline bool GetDisableSchemaValidation() const{ return m_disableSchemaValidation; }

    /**
     * <p>Avoid validating models when creating a deployment. Supported only for
     * WebSocket APIs.</p>
     */
    inline bool DisableSchemaValidationHasBeenSet() const { return m_disableSchemaValidationHasBeenSet; }

    /**
     * <p>Avoid validating models when creating a deployment. Supported only for
     * WebSocket APIs.</p>
     */
    inline void SetDisableSchemaValidation(bool value) { m_disableSchemaValidationHasBeenSet = true; m_disableSchemaValidation = value; }

    /**
     * <p>Avoid validating models when creating a deployment. Supported only for
     * WebSocket APIs.</p>
     */
    inline CreateApiRequest& WithDisableSchemaValidation(bool value) { SetDisableSchemaValidation(value); return *this;}


    /**
     * <p>Specifies whether clients can invoke your API by using the default
     * execute-api endpoint. By default, clients can invoke your API with the default
     * https://{api_id}.execute-api.{region}.amazonaws.com endpoint. To require that
     * clients use a custom domain name to invoke your API, disable the default
     * endpoint.</p>
     */
    inline bool GetDisableExecuteApiEndpoint() const{ return m_disableExecuteApiEndpoint; }

    /**
     * <p>Specifies whether clients can invoke your API by using the default
     * execute-api endpoint. By default, clients can invoke your API with the default
     * https://{api_id}.execute-api.{region}.amazonaws.com endpoint. To require that
     * clients use a custom domain name to invoke your API, disable the default
     * endpoint.</p>
     */
    inline bool DisableExecuteApiEndpointHasBeenSet() const { return m_disableExecuteApiEndpointHasBeenSet; }

    /**
     * <p>Specifies whether clients can invoke your API by using the default
     * execute-api endpoint. By default, clients can invoke your API with the default
     * https://{api_id}.execute-api.{region}.amazonaws.com endpoint. To require that
     * clients use a custom domain name to invoke your API, disable the default
     * endpoint.</p>
     */
    inline void SetDisableExecuteApiEndpoint(bool value) { m_disableExecuteApiEndpointHasBeenSet = true; m_disableExecuteApiEndpoint = value; }

    /**
     * <p>Specifies whether clients can invoke your API by using the default
     * execute-api endpoint. By default, clients can invoke your API with the default
     * https://{api_id}.execute-api.{region}.amazonaws.com endpoint. To require that
     * clients use a custom domain name to invoke your API, disable the default
     * endpoint.</p>
     */
    inline CreateApiRequest& WithDisableExecuteApiEndpoint(bool value) { SetDisableExecuteApiEndpoint(value); return *this;}


    /**
     * <p>The name of the API.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the API.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the API.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the API.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the API.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the API.</p>
     */
    inline CreateApiRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the API.</p>
     */
    inline CreateApiRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the API.</p>
     */
    inline CreateApiRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The API protocol.</p>
     */
    inline const ProtocolType& GetProtocolType() const{ return m_protocolType; }

    /**
     * <p>The API protocol.</p>
     */
    inline bool ProtocolTypeHasBeenSet() const { return m_protocolTypeHasBeenSet; }

    /**
     * <p>The API protocol.</p>
     */
    inline void SetProtocolType(const ProtocolType& value) { m_protocolTypeHasBeenSet = true; m_protocolType = value; }

    /**
     * <p>The API protocol.</p>
     */
    inline void SetProtocolType(ProtocolType&& value) { m_protocolTypeHasBeenSet = true; m_protocolType = std::move(value); }

    /**
     * <p>The API protocol.</p>
     */
    inline CreateApiRequest& WithProtocolType(const ProtocolType& value) { SetProtocolType(value); return *this;}

    /**
     * <p>The API protocol.</p>
     */
    inline CreateApiRequest& WithProtocolType(ProtocolType&& value) { SetProtocolType(std::move(value)); return *this;}


    /**
     * <p>This property is part of quick create. If you don't specify a routeKey, a
     * default route of $default is created. The $default route acts as a catch-all for
     * any request made to your API, for a particular stage. The $default route key
     * can't be modified. You can add routes after creating the API, and you can update
     * the route keys of additional routes. Supported only for HTTP APIs.</p>
     */
    inline const Aws::String& GetRouteKey() const{ return m_routeKey; }

    /**
     * <p>This property is part of quick create. If you don't specify a routeKey, a
     * default route of $default is created. The $default route acts as a catch-all for
     * any request made to your API, for a particular stage. The $default route key
     * can't be modified. You can add routes after creating the API, and you can update
     * the route keys of additional routes. Supported only for HTTP APIs.</p>
     */
    inline bool RouteKeyHasBeenSet() const { return m_routeKeyHasBeenSet; }

    /**
     * <p>This property is part of quick create. If you don't specify a routeKey, a
     * default route of $default is created. The $default route acts as a catch-all for
     * any request made to your API, for a particular stage. The $default route key
     * can't be modified. You can add routes after creating the API, and you can update
     * the route keys of additional routes. Supported only for HTTP APIs.</p>
     */
    inline void SetRouteKey(const Aws::String& value) { m_routeKeyHasBeenSet = true; m_routeKey = value; }

    /**
     * <p>This property is part of quick create. If you don't specify a routeKey, a
     * default route of $default is created. The $default route acts as a catch-all for
     * any request made to your API, for a particular stage. The $default route key
     * can't be modified. You can add routes after creating the API, and you can update
     * the route keys of additional routes. Supported only for HTTP APIs.</p>
     */
    inline void SetRouteKey(Aws::String&& value) { m_routeKeyHasBeenSet = true; m_routeKey = std::move(value); }

    /**
     * <p>This property is part of quick create. If you don't specify a routeKey, a
     * default route of $default is created. The $default route acts as a catch-all for
     * any request made to your API, for a particular stage. The $default route key
     * can't be modified. You can add routes after creating the API, and you can update
     * the route keys of additional routes. Supported only for HTTP APIs.</p>
     */
    inline void SetRouteKey(const char* value) { m_routeKeyHasBeenSet = true; m_routeKey.assign(value); }

    /**
     * <p>This property is part of quick create. If you don't specify a routeKey, a
     * default route of $default is created. The $default route acts as a catch-all for
     * any request made to your API, for a particular stage. The $default route key
     * can't be modified. You can add routes after creating the API, and you can update
     * the route keys of additional routes. Supported only for HTTP APIs.</p>
     */
    inline CreateApiRequest& WithRouteKey(const Aws::String& value) { SetRouteKey(value); return *this;}

    /**
     * <p>This property is part of quick create. If you don't specify a routeKey, a
     * default route of $default is created. The $default route acts as a catch-all for
     * any request made to your API, for a particular stage. The $default route key
     * can't be modified. You can add routes after creating the API, and you can update
     * the route keys of additional routes. Supported only for HTTP APIs.</p>
     */
    inline CreateApiRequest& WithRouteKey(Aws::String&& value) { SetRouteKey(std::move(value)); return *this;}

    /**
     * <p>This property is part of quick create. If you don't specify a routeKey, a
     * default route of $default is created. The $default route acts as a catch-all for
     * any request made to your API, for a particular stage. The $default route key
     * can't be modified. You can add routes after creating the API, and you can update
     * the route keys of additional routes. Supported only for HTTP APIs.</p>
     */
    inline CreateApiRequest& WithRouteKey(const char* value) { SetRouteKey(value); return *this;}


    /**
     * <p>The route selection expression for the API. For HTTP APIs, the
     * routeSelectionExpression must be ${request.method} ${request.path}. If not
     * provided, this will be the default for HTTP APIs. This property is required for
     * WebSocket APIs.</p>
     */
    inline const Aws::String& GetRouteSelectionExpression() const{ return m_routeSelectionExpression; }

    /**
     * <p>The route selection expression for the API. For HTTP APIs, the
     * routeSelectionExpression must be ${request.method} ${request.path}. If not
     * provided, this will be the default for HTTP APIs. This property is required for
     * WebSocket APIs.</p>
     */
    inline bool RouteSelectionExpressionHasBeenSet() const { return m_routeSelectionExpressionHasBeenSet; }

    /**
     * <p>The route selection expression for the API. For HTTP APIs, the
     * routeSelectionExpression must be ${request.method} ${request.path}. If not
     * provided, this will be the default for HTTP APIs. This property is required for
     * WebSocket APIs.</p>
     */
    inline void SetRouteSelectionExpression(const Aws::String& value) { m_routeSelectionExpressionHasBeenSet = true; m_routeSelectionExpression = value; }

    /**
     * <p>The route selection expression for the API. For HTTP APIs, the
     * routeSelectionExpression must be ${request.method} ${request.path}. If not
     * provided, this will be the default for HTTP APIs. This property is required for
     * WebSocket APIs.</p>
     */
    inline void SetRouteSelectionExpression(Aws::String&& value) { m_routeSelectionExpressionHasBeenSet = true; m_routeSelectionExpression = std::move(value); }

    /**
     * <p>The route selection expression for the API. For HTTP APIs, the
     * routeSelectionExpression must be ${request.method} ${request.path}. If not
     * provided, this will be the default for HTTP APIs. This property is required for
     * WebSocket APIs.</p>
     */
    inline void SetRouteSelectionExpression(const char* value) { m_routeSelectionExpressionHasBeenSet = true; m_routeSelectionExpression.assign(value); }

    /**
     * <p>The route selection expression for the API. For HTTP APIs, the
     * routeSelectionExpression must be ${request.method} ${request.path}. If not
     * provided, this will be the default for HTTP APIs. This property is required for
     * WebSocket APIs.</p>
     */
    inline CreateApiRequest& WithRouteSelectionExpression(const Aws::String& value) { SetRouteSelectionExpression(value); return *this;}

    /**
     * <p>The route selection expression for the API. For HTTP APIs, the
     * routeSelectionExpression must be ${request.method} ${request.path}. If not
     * provided, this will be the default for HTTP APIs. This property is required for
     * WebSocket APIs.</p>
     */
    inline CreateApiRequest& WithRouteSelectionExpression(Aws::String&& value) { SetRouteSelectionExpression(std::move(value)); return *this;}

    /**
     * <p>The route selection expression for the API. For HTTP APIs, the
     * routeSelectionExpression must be ${request.method} ${request.path}. If not
     * provided, this will be the default for HTTP APIs. This property is required for
     * WebSocket APIs.</p>
     */
    inline CreateApiRequest& WithRouteSelectionExpression(const char* value) { SetRouteSelectionExpression(value); return *this;}


    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline CreateApiRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline CreateApiRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline CreateApiRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline CreateApiRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline CreateApiRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline CreateApiRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline CreateApiRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline CreateApiRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline CreateApiRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>This property is part of quick create. Quick create produces an API with an
     * integration, a default catch-all route, and a default stage which is configured
     * to automatically deploy changes. For HTTP integrations, specify a fully
     * qualified URL. For Lambda integrations, specify a function ARN. The type of the
     * integration will be HTTP_PROXY or AWS_PROXY, respectively. Supported only for
     * HTTP APIs.</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }

    /**
     * <p>This property is part of quick create. Quick create produces an API with an
     * integration, a default catch-all route, and a default stage which is configured
     * to automatically deploy changes. For HTTP integrations, specify a fully
     * qualified URL. For Lambda integrations, specify a function ARN. The type of the
     * integration will be HTTP_PROXY or AWS_PROXY, respectively. Supported only for
     * HTTP APIs.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>This property is part of quick create. Quick create produces an API with an
     * integration, a default catch-all route, and a default stage which is configured
     * to automatically deploy changes. For HTTP integrations, specify a fully
     * qualified URL. For Lambda integrations, specify a function ARN. The type of the
     * integration will be HTTP_PROXY or AWS_PROXY, respectively. Supported only for
     * HTTP APIs.</p>
     */
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>This property is part of quick create. Quick create produces an API with an
     * integration, a default catch-all route, and a default stage which is configured
     * to automatically deploy changes. For HTTP integrations, specify a fully
     * qualified URL. For Lambda integrations, specify a function ARN. The type of the
     * integration will be HTTP_PROXY or AWS_PROXY, respectively. Supported only for
     * HTTP APIs.</p>
     */
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>This property is part of quick create. Quick create produces an API with an
     * integration, a default catch-all route, and a default stage which is configured
     * to automatically deploy changes. For HTTP integrations, specify a fully
     * qualified URL. For Lambda integrations, specify a function ARN. The type of the
     * integration will be HTTP_PROXY or AWS_PROXY, respectively. Supported only for
     * HTTP APIs.</p>
     */
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }

    /**
     * <p>This property is part of quick create. Quick create produces an API with an
     * integration, a default catch-all route, and a default stage which is configured
     * to automatically deploy changes. For HTTP integrations, specify a fully
     * qualified URL. For Lambda integrations, specify a function ARN. The type of the
     * integration will be HTTP_PROXY or AWS_PROXY, respectively. Supported only for
     * HTTP APIs.</p>
     */
    inline CreateApiRequest& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}

    /**
     * <p>This property is part of quick create. Quick create produces an API with an
     * integration, a default catch-all route, and a default stage which is configured
     * to automatically deploy changes. For HTTP integrations, specify a fully
     * qualified URL. For Lambda integrations, specify a function ARN. The type of the
     * integration will be HTTP_PROXY or AWS_PROXY, respectively. Supported only for
     * HTTP APIs.</p>
     */
    inline CreateApiRequest& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}

    /**
     * <p>This property is part of quick create. Quick create produces an API with an
     * integration, a default catch-all route, and a default stage which is configured
     * to automatically deploy changes. For HTTP integrations, specify a fully
     * qualified URL. For Lambda integrations, specify a function ARN. The type of the
     * integration will be HTTP_PROXY or AWS_PROXY, respectively. Supported only for
     * HTTP APIs.</p>
     */
    inline CreateApiRequest& WithTarget(const char* value) { SetTarget(value); return *this;}


    /**
     * <p>A version identifier for the API.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>A version identifier for the API.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>A version identifier for the API.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>A version identifier for the API.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>A version identifier for the API.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>A version identifier for the API.</p>
     */
    inline CreateApiRequest& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>A version identifier for the API.</p>
     */
    inline CreateApiRequest& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>A version identifier for the API.</p>
     */
    inline CreateApiRequest& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_apiKeySelectionExpression;
    bool m_apiKeySelectionExpressionHasBeenSet = false;

    Cors m_corsConfiguration;
    bool m_corsConfigurationHasBeenSet = false;

    Aws::String m_credentialsArn;
    bool m_credentialsArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_disableSchemaValidation;
    bool m_disableSchemaValidationHasBeenSet = false;

    bool m_disableExecuteApiEndpoint;
    bool m_disableExecuteApiEndpointHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ProtocolType m_protocolType;
    bool m_protocolTypeHasBeenSet = false;

    Aws::String m_routeKey;
    bool m_routeKeyHasBeenSet = false;

    Aws::String m_routeSelectionExpression;
    bool m_routeSelectionExpressionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
