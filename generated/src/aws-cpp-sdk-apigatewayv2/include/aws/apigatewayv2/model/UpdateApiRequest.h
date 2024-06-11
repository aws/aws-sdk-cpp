/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/ApiGatewayV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigatewayv2/model/Cors.h>
#include <utility>

namespace Aws
{
namespace ApiGatewayV2
{
namespace Model
{

  /**
   * <p>Updates an Api.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateApiRequest">AWS
   * API Reference</a></p>
   */
  class UpdateApiRequest : public ApiGatewayV2Request
  {
  public:
    AWS_APIGATEWAYV2_API UpdateApiRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApi"; }

    AWS_APIGATEWAYV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The API identifier.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }
    inline UpdateApiRequest& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}
    inline UpdateApiRequest& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}
    inline UpdateApiRequest& WithApiId(const char* value) { SetApiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An API key selection expression. Supported only for WebSocket APIs. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/apigateway-websocket-api-selection-expressions.html#apigateway-websocket-api-apikey-selection-expressions">API
     * Key Selection Expressions</a>.</p>
     */
    inline const Aws::String& GetApiKeySelectionExpression() const{ return m_apiKeySelectionExpression; }
    inline bool ApiKeySelectionExpressionHasBeenSet() const { return m_apiKeySelectionExpressionHasBeenSet; }
    inline void SetApiKeySelectionExpression(const Aws::String& value) { m_apiKeySelectionExpressionHasBeenSet = true; m_apiKeySelectionExpression = value; }
    inline void SetApiKeySelectionExpression(Aws::String&& value) { m_apiKeySelectionExpressionHasBeenSet = true; m_apiKeySelectionExpression = std::move(value); }
    inline void SetApiKeySelectionExpression(const char* value) { m_apiKeySelectionExpressionHasBeenSet = true; m_apiKeySelectionExpression.assign(value); }
    inline UpdateApiRequest& WithApiKeySelectionExpression(const Aws::String& value) { SetApiKeySelectionExpression(value); return *this;}
    inline UpdateApiRequest& WithApiKeySelectionExpression(Aws::String&& value) { SetApiKeySelectionExpression(std::move(value)); return *this;}
    inline UpdateApiRequest& WithApiKeySelectionExpression(const char* value) { SetApiKeySelectionExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A CORS configuration. Supported only for HTTP APIs.</p>
     */
    inline const Cors& GetCorsConfiguration() const{ return m_corsConfiguration; }
    inline bool CorsConfigurationHasBeenSet() const { return m_corsConfigurationHasBeenSet; }
    inline void SetCorsConfiguration(const Cors& value) { m_corsConfigurationHasBeenSet = true; m_corsConfiguration = value; }
    inline void SetCorsConfiguration(Cors&& value) { m_corsConfigurationHasBeenSet = true; m_corsConfiguration = std::move(value); }
    inline UpdateApiRequest& WithCorsConfiguration(const Cors& value) { SetCorsConfiguration(value); return *this;}
    inline UpdateApiRequest& WithCorsConfiguration(Cors&& value) { SetCorsConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This property is part of quick create. It specifies the credentials required
     * for the integration, if any. For a Lambda integration, three options are
     * available. To specify an IAM Role for API Gateway to assume, use the role's
     * Amazon Resource Name (ARN). To require that the caller's identity be passed
     * through from the request, specify arn:aws:iam::*:user/ *. To use resource-based
     * permissions on supported AWS services, don't specify this parameter. Currently,
     * this property is not used for HTTP integrations. If provided, this value
     * replaces the credentials associated with the quick create integration. Supported
     * only for HTTP APIs.</p>
     */
    inline const Aws::String& GetCredentialsArn() const{ return m_credentialsArn; }
    inline bool CredentialsArnHasBeenSet() const { return m_credentialsArnHasBeenSet; }
    inline void SetCredentialsArn(const Aws::String& value) { m_credentialsArnHasBeenSet = true; m_credentialsArn = value; }
    inline void SetCredentialsArn(Aws::String&& value) { m_credentialsArnHasBeenSet = true; m_credentialsArn = std::move(value); }
    inline void SetCredentialsArn(const char* value) { m_credentialsArnHasBeenSet = true; m_credentialsArn.assign(value); }
    inline UpdateApiRequest& WithCredentialsArn(const Aws::String& value) { SetCredentialsArn(value); return *this;}
    inline UpdateApiRequest& WithCredentialsArn(Aws::String&& value) { SetCredentialsArn(std::move(value)); return *this;}
    inline UpdateApiRequest& WithCredentialsArn(const char* value) { SetCredentialsArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the API.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateApiRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateApiRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateApiRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Avoid validating models when creating a deployment. Supported only for
     * WebSocket APIs.</p>
     */
    inline bool GetDisableSchemaValidation() const{ return m_disableSchemaValidation; }
    inline bool DisableSchemaValidationHasBeenSet() const { return m_disableSchemaValidationHasBeenSet; }
    inline void SetDisableSchemaValidation(bool value) { m_disableSchemaValidationHasBeenSet = true; m_disableSchemaValidation = value; }
    inline UpdateApiRequest& WithDisableSchemaValidation(bool value) { SetDisableSchemaValidation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether clients can invoke your API by using the default
     * execute-api endpoint. By default, clients can invoke your API with the default
     * https://{api_id}.execute-api.{region}.amazonaws.com endpoint. To require that
     * clients use a custom domain name to invoke your API, disable the default
     * endpoint.</p>
     */
    inline bool GetDisableExecuteApiEndpoint() const{ return m_disableExecuteApiEndpoint; }
    inline bool DisableExecuteApiEndpointHasBeenSet() const { return m_disableExecuteApiEndpointHasBeenSet; }
    inline void SetDisableExecuteApiEndpoint(bool value) { m_disableExecuteApiEndpointHasBeenSet = true; m_disableExecuteApiEndpoint = value; }
    inline UpdateApiRequest& WithDisableExecuteApiEndpoint(bool value) { SetDisableExecuteApiEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the API.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateApiRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateApiRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateApiRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This property is part of quick create. If not specified, the route created
     * using quick create is kept. Otherwise, this value replaces the route key of the
     * quick create route. Additional routes may still be added after the API is
     * updated. Supported only for HTTP APIs.</p>
     */
    inline const Aws::String& GetRouteKey() const{ return m_routeKey; }
    inline bool RouteKeyHasBeenSet() const { return m_routeKeyHasBeenSet; }
    inline void SetRouteKey(const Aws::String& value) { m_routeKeyHasBeenSet = true; m_routeKey = value; }
    inline void SetRouteKey(Aws::String&& value) { m_routeKeyHasBeenSet = true; m_routeKey = std::move(value); }
    inline void SetRouteKey(const char* value) { m_routeKeyHasBeenSet = true; m_routeKey.assign(value); }
    inline UpdateApiRequest& WithRouteKey(const Aws::String& value) { SetRouteKey(value); return *this;}
    inline UpdateApiRequest& WithRouteKey(Aws::String&& value) { SetRouteKey(std::move(value)); return *this;}
    inline UpdateApiRequest& WithRouteKey(const char* value) { SetRouteKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route selection expression for the API. For HTTP APIs, the
     * routeSelectionExpression must be ${request.method} ${request.path}. If not
     * provided, this will be the default for HTTP APIs. This property is required for
     * WebSocket APIs.</p>
     */
    inline const Aws::String& GetRouteSelectionExpression() const{ return m_routeSelectionExpression; }
    inline bool RouteSelectionExpressionHasBeenSet() const { return m_routeSelectionExpressionHasBeenSet; }
    inline void SetRouteSelectionExpression(const Aws::String& value) { m_routeSelectionExpressionHasBeenSet = true; m_routeSelectionExpression = value; }
    inline void SetRouteSelectionExpression(Aws::String&& value) { m_routeSelectionExpressionHasBeenSet = true; m_routeSelectionExpression = std::move(value); }
    inline void SetRouteSelectionExpression(const char* value) { m_routeSelectionExpressionHasBeenSet = true; m_routeSelectionExpression.assign(value); }
    inline UpdateApiRequest& WithRouteSelectionExpression(const Aws::String& value) { SetRouteSelectionExpression(value); return *this;}
    inline UpdateApiRequest& WithRouteSelectionExpression(Aws::String&& value) { SetRouteSelectionExpression(std::move(value)); return *this;}
    inline UpdateApiRequest& WithRouteSelectionExpression(const char* value) { SetRouteSelectionExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This property is part of quick create. For HTTP integrations, specify a fully
     * qualified URL. For Lambda integrations, specify a function ARN. The type of the
     * integration will be HTTP_PROXY or AWS_PROXY, respectively. The value provided
     * updates the integration URI and integration type. You can update a quick-created
     * target, but you can't remove it from an API. Supported only for HTTP APIs.</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }
    inline UpdateApiRequest& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}
    inline UpdateApiRequest& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}
    inline UpdateApiRequest& WithTarget(const char* value) { SetTarget(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A version identifier for the API.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline UpdateApiRequest& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline UpdateApiRequest& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline UpdateApiRequest& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

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

    Aws::String m_routeKey;
    bool m_routeKeyHasBeenSet = false;

    Aws::String m_routeSelectionExpression;
    bool m_routeSelectionExpressionHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
