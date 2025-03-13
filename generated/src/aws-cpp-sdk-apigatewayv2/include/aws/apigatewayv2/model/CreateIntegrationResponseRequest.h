/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/ApiGatewayV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigatewayv2/model/ContentHandlingStrategy.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace ApiGatewayV2
{
namespace Model
{

  /**
   * <p>Creates a new IntegrationResponse resource to represent an integration
   * response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateIntegrationResponseRequest">AWS
   * API Reference</a></p>
   */
  class CreateIntegrationResponseRequest : public ApiGatewayV2Request
  {
  public:
    AWS_APIGATEWAYV2_API CreateIntegrationResponseRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateIntegrationResponse"; }

    AWS_APIGATEWAYV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The API identifier.</p>
     */
    inline const Aws::String& GetApiId() const { return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    template<typename ApiIdT = Aws::String>
    void SetApiId(ApiIdT&& value) { m_apiIdHasBeenSet = true; m_apiId = std::forward<ApiIdT>(value); }
    template<typename ApiIdT = Aws::String>
    CreateIntegrationResponseRequest& WithApiId(ApiIdT&& value) { SetApiId(std::forward<ApiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how to handle response payload content type conversions. Supported
     * values are CONVERT_TO_BINARY and CONVERT_TO_TEXT, with the following
     * behaviors:</p> <p>CONVERT_TO_BINARY: Converts a response payload from a
     * Base64-encoded string to the corresponding binary blob.</p> <p>CONVERT_TO_TEXT:
     * Converts a response payload from a binary blob to a Base64-encoded string.</p>
     * <p>If this property is not defined, the response payload will be passed through
     * from the integration response to the route response or method response without
     * modification.</p>
     */
    inline ContentHandlingStrategy GetContentHandlingStrategy() const { return m_contentHandlingStrategy; }
    inline bool ContentHandlingStrategyHasBeenSet() const { return m_contentHandlingStrategyHasBeenSet; }
    inline void SetContentHandlingStrategy(ContentHandlingStrategy value) { m_contentHandlingStrategyHasBeenSet = true; m_contentHandlingStrategy = value; }
    inline CreateIntegrationResponseRequest& WithContentHandlingStrategy(ContentHandlingStrategy value) { SetContentHandlingStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The integration ID.</p>
     */
    inline const Aws::String& GetIntegrationId() const { return m_integrationId; }
    inline bool IntegrationIdHasBeenSet() const { return m_integrationIdHasBeenSet; }
    template<typename IntegrationIdT = Aws::String>
    void SetIntegrationId(IntegrationIdT&& value) { m_integrationIdHasBeenSet = true; m_integrationId = std::forward<IntegrationIdT>(value); }
    template<typename IntegrationIdT = Aws::String>
    CreateIntegrationResponseRequest& WithIntegrationId(IntegrationIdT&& value) { SetIntegrationId(std::forward<IntegrationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The integration response key.</p>
     */
    inline const Aws::String& GetIntegrationResponseKey() const { return m_integrationResponseKey; }
    inline bool IntegrationResponseKeyHasBeenSet() const { return m_integrationResponseKeyHasBeenSet; }
    template<typename IntegrationResponseKeyT = Aws::String>
    void SetIntegrationResponseKey(IntegrationResponseKeyT&& value) { m_integrationResponseKeyHasBeenSet = true; m_integrationResponseKey = std::forward<IntegrationResponseKeyT>(value); }
    template<typename IntegrationResponseKeyT = Aws::String>
    CreateIntegrationResponseRequest& WithIntegrationResponseKey(IntegrationResponseKeyT&& value) { SetIntegrationResponseKey(std::forward<IntegrationResponseKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key-value map specifying response parameters that are passed to the method
     * response from the backend. The key is a method response header parameter name
     * and the mapped value is an integration response header value, a static value
     * enclosed within a pair of single quotes, or a JSON expression from the
     * integration response body. The mapping key must match the pattern of
     * method.response.header.{name}, where {name} is a valid and unique header name.
     * The mapped non-static value must match the pattern of
     * integration.response.header.{name} or
     * integration.response.body.{JSON-expression}, where {name} is a valid and unique
     * response header name and {JSON-expression} is a valid JSON expression without
     * the $ prefix.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseParameters() const { return m_responseParameters; }
    inline bool ResponseParametersHasBeenSet() const { return m_responseParametersHasBeenSet; }
    template<typename ResponseParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetResponseParameters(ResponseParametersT&& value) { m_responseParametersHasBeenSet = true; m_responseParameters = std::forward<ResponseParametersT>(value); }
    template<typename ResponseParametersT = Aws::Map<Aws::String, Aws::String>>
    CreateIntegrationResponseRequest& WithResponseParameters(ResponseParametersT&& value) { SetResponseParameters(std::forward<ResponseParametersT>(value)); return *this;}
    template<typename ResponseParametersKeyT = Aws::String, typename ResponseParametersValueT = Aws::String>
    CreateIntegrationResponseRequest& AddResponseParameters(ResponseParametersKeyT&& key, ResponseParametersValueT&& value) {
      m_responseParametersHasBeenSet = true; m_responseParameters.emplace(std::forward<ResponseParametersKeyT>(key), std::forward<ResponseParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The collection of response templates for the integration response as a
     * string-to-string map of key-value pairs. Response templates are represented as a
     * key/value map, with a content-type as the key and a template as the value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseTemplates() const { return m_responseTemplates; }
    inline bool ResponseTemplatesHasBeenSet() const { return m_responseTemplatesHasBeenSet; }
    template<typename ResponseTemplatesT = Aws::Map<Aws::String, Aws::String>>
    void SetResponseTemplates(ResponseTemplatesT&& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates = std::forward<ResponseTemplatesT>(value); }
    template<typename ResponseTemplatesT = Aws::Map<Aws::String, Aws::String>>
    CreateIntegrationResponseRequest& WithResponseTemplates(ResponseTemplatesT&& value) { SetResponseTemplates(std::forward<ResponseTemplatesT>(value)); return *this;}
    template<typename ResponseTemplatesKeyT = Aws::String, typename ResponseTemplatesValueT = Aws::String>
    CreateIntegrationResponseRequest& AddResponseTemplates(ResponseTemplatesKeyT&& key, ResponseTemplatesValueT&& value) {
      m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(std::forward<ResponseTemplatesKeyT>(key), std::forward<ResponseTemplatesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The template selection expression for the integration response. Supported
     * only for WebSocket APIs.</p>
     */
    inline const Aws::String& GetTemplateSelectionExpression() const { return m_templateSelectionExpression; }
    inline bool TemplateSelectionExpressionHasBeenSet() const { return m_templateSelectionExpressionHasBeenSet; }
    template<typename TemplateSelectionExpressionT = Aws::String>
    void SetTemplateSelectionExpression(TemplateSelectionExpressionT&& value) { m_templateSelectionExpressionHasBeenSet = true; m_templateSelectionExpression = std::forward<TemplateSelectionExpressionT>(value); }
    template<typename TemplateSelectionExpressionT = Aws::String>
    CreateIntegrationResponseRequest& WithTemplateSelectionExpression(TemplateSelectionExpressionT&& value) { SetTemplateSelectionExpression(std::forward<TemplateSelectionExpressionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    ContentHandlingStrategy m_contentHandlingStrategy{ContentHandlingStrategy::NOT_SET};
    bool m_contentHandlingStrategyHasBeenSet = false;

    Aws::String m_integrationId;
    bool m_integrationIdHasBeenSet = false;

    Aws::String m_integrationResponseKey;
    bool m_integrationResponseKeyHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_responseParameters;
    bool m_responseParametersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_responseTemplates;
    bool m_responseTemplatesHasBeenSet = false;

    Aws::String m_templateSelectionExpression;
    bool m_templateSelectionExpressionHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
