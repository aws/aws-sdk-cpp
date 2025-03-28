/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/ApiGatewayV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigatewayv2/model/Cors.h>
#include <aws/apigatewayv2/model/IpAddressType.h>
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
    AWS_APIGATEWAYV2_API CreateApiRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApi"; }

    AWS_APIGATEWAYV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>An API key selection expression. Supported only for WebSocket APIs. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/apigateway-websocket-api-selection-expressions.html#apigateway-websocket-api-apikey-selection-expressions">API
     * Key Selection Expressions</a>.</p>
     */
    inline const Aws::String& GetApiKeySelectionExpression() const { return m_apiKeySelectionExpression; }
    inline bool ApiKeySelectionExpressionHasBeenSet() const { return m_apiKeySelectionExpressionHasBeenSet; }
    template<typename ApiKeySelectionExpressionT = Aws::String>
    void SetApiKeySelectionExpression(ApiKeySelectionExpressionT&& value) { m_apiKeySelectionExpressionHasBeenSet = true; m_apiKeySelectionExpression = std::forward<ApiKeySelectionExpressionT>(value); }
    template<typename ApiKeySelectionExpressionT = Aws::String>
    CreateApiRequest& WithApiKeySelectionExpression(ApiKeySelectionExpressionT&& value) { SetApiKeySelectionExpression(std::forward<ApiKeySelectionExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A CORS configuration. Supported only for HTTP APIs. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-cors.html">Configuring
     * CORS</a> for more information.</p>
     */
    inline const Cors& GetCorsConfiguration() const { return m_corsConfiguration; }
    inline bool CorsConfigurationHasBeenSet() const { return m_corsConfigurationHasBeenSet; }
    template<typename CorsConfigurationT = Cors>
    void SetCorsConfiguration(CorsConfigurationT&& value) { m_corsConfigurationHasBeenSet = true; m_corsConfiguration = std::forward<CorsConfigurationT>(value); }
    template<typename CorsConfigurationT = Cors>
    CreateApiRequest& WithCorsConfiguration(CorsConfigurationT&& value) { SetCorsConfiguration(std::forward<CorsConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This property is part of quick create. It specifies the credentials required
     * for the integration, if any. For a Lambda integration, three options are
     * available. To specify an IAM Role for API Gateway to assume, use the role's
     * Amazon Resource Name (ARN). To require that the caller's identity be passed
     * through from the request, specify arn:aws:iam::*:user/ *. To use resource-based
     * permissions on supported AWS services, specify null. Currently, this property is
     * not used for HTTP integrations. Supported only for HTTP APIs.</p>
     */
    inline const Aws::String& GetCredentialsArn() const { return m_credentialsArn; }
    inline bool CredentialsArnHasBeenSet() const { return m_credentialsArnHasBeenSet; }
    template<typename CredentialsArnT = Aws::String>
    void SetCredentialsArn(CredentialsArnT&& value) { m_credentialsArnHasBeenSet = true; m_credentialsArn = std::forward<CredentialsArnT>(value); }
    template<typename CredentialsArnT = Aws::String>
    CreateApiRequest& WithCredentialsArn(CredentialsArnT&& value) { SetCredentialsArn(std::forward<CredentialsArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the API.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateApiRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Avoid validating models when creating a deployment. Supported only for
     * WebSocket APIs.</p>
     */
    inline bool GetDisableSchemaValidation() const { return m_disableSchemaValidation; }
    inline bool DisableSchemaValidationHasBeenSet() const { return m_disableSchemaValidationHasBeenSet; }
    inline void SetDisableSchemaValidation(bool value) { m_disableSchemaValidationHasBeenSet = true; m_disableSchemaValidation = value; }
    inline CreateApiRequest& WithDisableSchemaValidation(bool value) { SetDisableSchemaValidation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether clients can invoke your API by using the default
     * execute-api endpoint. By default, clients can invoke your API with the default
     * https://{api_id}.execute-api.{region}.amazonaws.com endpoint. To require that
     * clients use a custom domain name to invoke your API, disable the default
     * endpoint.</p>
     */
    inline bool GetDisableExecuteApiEndpoint() const { return m_disableExecuteApiEndpoint; }
    inline bool DisableExecuteApiEndpointHasBeenSet() const { return m_disableExecuteApiEndpointHasBeenSet; }
    inline void SetDisableExecuteApiEndpoint(bool value) { m_disableExecuteApiEndpointHasBeenSet = true; m_disableExecuteApiEndpoint = value; }
    inline CreateApiRequest& WithDisableExecuteApiEndpoint(bool value) { SetDisableExecuteApiEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address types that can invoke the API.</p>
     */
    inline IpAddressType GetIpAddressType() const { return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(IpAddressType value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline CreateApiRequest& WithIpAddressType(IpAddressType value) { SetIpAddressType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the API.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateApiRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API protocol.</p>
     */
    inline ProtocolType GetProtocolType() const { return m_protocolType; }
    inline bool ProtocolTypeHasBeenSet() const { return m_protocolTypeHasBeenSet; }
    inline void SetProtocolType(ProtocolType value) { m_protocolTypeHasBeenSet = true; m_protocolType = value; }
    inline CreateApiRequest& WithProtocolType(ProtocolType value) { SetProtocolType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This property is part of quick create. If you don't specify a routeKey, a
     * default route of $default is created. The $default route acts as a catch-all for
     * any request made to your API, for a particular stage. The $default route key
     * can't be modified. You can add routes after creating the API, and you can update
     * the route keys of additional routes. Supported only for HTTP APIs.</p>
     */
    inline const Aws::String& GetRouteKey() const { return m_routeKey; }
    inline bool RouteKeyHasBeenSet() const { return m_routeKeyHasBeenSet; }
    template<typename RouteKeyT = Aws::String>
    void SetRouteKey(RouteKeyT&& value) { m_routeKeyHasBeenSet = true; m_routeKey = std::forward<RouteKeyT>(value); }
    template<typename RouteKeyT = Aws::String>
    CreateApiRequest& WithRouteKey(RouteKeyT&& value) { SetRouteKey(std::forward<RouteKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route selection expression for the API. For HTTP APIs, the
     * routeSelectionExpression must be ${request.method} ${request.path}. If not
     * provided, this will be the default for HTTP APIs. This property is required for
     * WebSocket APIs.</p>
     */
    inline const Aws::String& GetRouteSelectionExpression() const { return m_routeSelectionExpression; }
    inline bool RouteSelectionExpressionHasBeenSet() const { return m_routeSelectionExpressionHasBeenSet; }
    template<typename RouteSelectionExpressionT = Aws::String>
    void SetRouteSelectionExpression(RouteSelectionExpressionT&& value) { m_routeSelectionExpressionHasBeenSet = true; m_routeSelectionExpression = std::forward<RouteSelectionExpressionT>(value); }
    template<typename RouteSelectionExpressionT = Aws::String>
    CreateApiRequest& WithRouteSelectionExpression(RouteSelectionExpressionT&& value) { SetRouteSelectionExpression(std::forward<RouteSelectionExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collection of tags. Each tag element is associated with a given
     * resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateApiRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateApiRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>This property is part of quick create. Quick create produces an API with an
     * integration, a default catch-all route, and a default stage which is configured
     * to automatically deploy changes. For HTTP integrations, specify a fully
     * qualified URL. For Lambda integrations, specify a function ARN. The type of the
     * integration will be HTTP_PROXY or AWS_PROXY, respectively. Supported only for
     * HTTP APIs.</p>
     */
    inline const Aws::String& GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    template<typename TargetT = Aws::String>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = Aws::String>
    CreateApiRequest& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A version identifier for the API.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    CreateApiRequest& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_apiKeySelectionExpression;
    bool m_apiKeySelectionExpressionHasBeenSet = false;

    Cors m_corsConfiguration;
    bool m_corsConfigurationHasBeenSet = false;

    Aws::String m_credentialsArn;
    bool m_credentialsArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_disableSchemaValidation{false};
    bool m_disableSchemaValidationHasBeenSet = false;

    bool m_disableExecuteApiEndpoint{false};
    bool m_disableExecuteApiEndpointHasBeenSet = false;

    IpAddressType m_ipAddressType{IpAddressType::NOT_SET};
    bool m_ipAddressTypeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ProtocolType m_protocolType{ProtocolType::NOT_SET};
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
