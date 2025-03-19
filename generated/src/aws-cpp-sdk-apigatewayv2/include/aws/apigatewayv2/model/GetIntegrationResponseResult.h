/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/model/ContentHandlingStrategy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetIntegrationResponseResult
  {
  public:
    AWS_APIGATEWAYV2_API GetIntegrationResponseResult() = default;
    AWS_APIGATEWAYV2_API GetIntegrationResponseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAYV2_API GetIntegrationResponseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline GetIntegrationResponseResult& WithContentHandlingStrategy(ContentHandlingStrategy value) { SetContentHandlingStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The integration response ID.</p>
     */
    inline const Aws::String& GetIntegrationResponseId() const { return m_integrationResponseId; }
    template<typename IntegrationResponseIdT = Aws::String>
    void SetIntegrationResponseId(IntegrationResponseIdT&& value) { m_integrationResponseIdHasBeenSet = true; m_integrationResponseId = std::forward<IntegrationResponseIdT>(value); }
    template<typename IntegrationResponseIdT = Aws::String>
    GetIntegrationResponseResult& WithIntegrationResponseId(IntegrationResponseIdT&& value) { SetIntegrationResponseId(std::forward<IntegrationResponseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The integration response key.</p>
     */
    inline const Aws::String& GetIntegrationResponseKey() const { return m_integrationResponseKey; }
    template<typename IntegrationResponseKeyT = Aws::String>
    void SetIntegrationResponseKey(IntegrationResponseKeyT&& value) { m_integrationResponseKeyHasBeenSet = true; m_integrationResponseKey = std::forward<IntegrationResponseKeyT>(value); }
    template<typename IntegrationResponseKeyT = Aws::String>
    GetIntegrationResponseResult& WithIntegrationResponseKey(IntegrationResponseKeyT&& value) { SetIntegrationResponseKey(std::forward<IntegrationResponseKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key-value map specifying response parameters that are passed to the method
     * response from the backend. The key is a method response header parameter name
     * and the mapped value is an integration response header value, a static value
     * enclosed within a pair of single quotes, or a JSON expression from the
     * integration response body. The mapping key must match the pattern of
     * method.response.header.{name}, where name is a valid and unique header name. The
     * mapped non-static value must match the pattern of
     * integration.response.header.{name} or
     * integration.response.body.{JSON-expression}, where name is a valid and unique
     * response header name and JSON-expression is a valid JSON expression without the
     * $ prefix.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseParameters() const { return m_responseParameters; }
    template<typename ResponseParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetResponseParameters(ResponseParametersT&& value) { m_responseParametersHasBeenSet = true; m_responseParameters = std::forward<ResponseParametersT>(value); }
    template<typename ResponseParametersT = Aws::Map<Aws::String, Aws::String>>
    GetIntegrationResponseResult& WithResponseParameters(ResponseParametersT&& value) { SetResponseParameters(std::forward<ResponseParametersT>(value)); return *this;}
    template<typename ResponseParametersKeyT = Aws::String, typename ResponseParametersValueT = Aws::String>
    GetIntegrationResponseResult& AddResponseParameters(ResponseParametersKeyT&& key, ResponseParametersValueT&& value) {
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
    template<typename ResponseTemplatesT = Aws::Map<Aws::String, Aws::String>>
    void SetResponseTemplates(ResponseTemplatesT&& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates = std::forward<ResponseTemplatesT>(value); }
    template<typename ResponseTemplatesT = Aws::Map<Aws::String, Aws::String>>
    GetIntegrationResponseResult& WithResponseTemplates(ResponseTemplatesT&& value) { SetResponseTemplates(std::forward<ResponseTemplatesT>(value)); return *this;}
    template<typename ResponseTemplatesKeyT = Aws::String, typename ResponseTemplatesValueT = Aws::String>
    GetIntegrationResponseResult& AddResponseTemplates(ResponseTemplatesKeyT&& key, ResponseTemplatesValueT&& value) {
      m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(std::forward<ResponseTemplatesKeyT>(key), std::forward<ResponseTemplatesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The template selection expressions for the integration response.</p>
     */
    inline const Aws::String& GetTemplateSelectionExpression() const { return m_templateSelectionExpression; }
    template<typename TemplateSelectionExpressionT = Aws::String>
    void SetTemplateSelectionExpression(TemplateSelectionExpressionT&& value) { m_templateSelectionExpressionHasBeenSet = true; m_templateSelectionExpression = std::forward<TemplateSelectionExpressionT>(value); }
    template<typename TemplateSelectionExpressionT = Aws::String>
    GetIntegrationResponseResult& WithTemplateSelectionExpression(TemplateSelectionExpressionT&& value) { SetTemplateSelectionExpression(std::forward<TemplateSelectionExpressionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetIntegrationResponseResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ContentHandlingStrategy m_contentHandlingStrategy{ContentHandlingStrategy::NOT_SET};
    bool m_contentHandlingStrategyHasBeenSet = false;

    Aws::String m_integrationResponseId;
    bool m_integrationResponseIdHasBeenSet = false;

    Aws::String m_integrationResponseKey;
    bool m_integrationResponseKeyHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_responseParameters;
    bool m_responseParametersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_responseTemplates;
    bool m_responseTemplatesHasBeenSet = false;

    Aws::String m_templateSelectionExpression;
    bool m_templateSelectionExpressionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
