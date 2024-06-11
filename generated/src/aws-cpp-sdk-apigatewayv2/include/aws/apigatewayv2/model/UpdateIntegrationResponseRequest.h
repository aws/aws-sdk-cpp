﻿/**
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
   * <p>Updates an IntegrationResponses.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateIntegrationResponseRequest">AWS
   * API Reference</a></p>
   */
  class UpdateIntegrationResponseRequest : public ApiGatewayV2Request
  {
  public:
    AWS_APIGATEWAYV2_API UpdateIntegrationResponseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateIntegrationResponse"; }

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
    inline UpdateIntegrationResponseRequest& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}
    inline UpdateIntegrationResponseRequest& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}
    inline UpdateIntegrationResponseRequest& WithApiId(const char* value) { SetApiId(value); return *this;}
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
    inline const ContentHandlingStrategy& GetContentHandlingStrategy() const{ return m_contentHandlingStrategy; }
    inline bool ContentHandlingStrategyHasBeenSet() const { return m_contentHandlingStrategyHasBeenSet; }
    inline void SetContentHandlingStrategy(const ContentHandlingStrategy& value) { m_contentHandlingStrategyHasBeenSet = true; m_contentHandlingStrategy = value; }
    inline void SetContentHandlingStrategy(ContentHandlingStrategy&& value) { m_contentHandlingStrategyHasBeenSet = true; m_contentHandlingStrategy = std::move(value); }
    inline UpdateIntegrationResponseRequest& WithContentHandlingStrategy(const ContentHandlingStrategy& value) { SetContentHandlingStrategy(value); return *this;}
    inline UpdateIntegrationResponseRequest& WithContentHandlingStrategy(ContentHandlingStrategy&& value) { SetContentHandlingStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The integration ID.</p>
     */
    inline const Aws::String& GetIntegrationId() const{ return m_integrationId; }
    inline bool IntegrationIdHasBeenSet() const { return m_integrationIdHasBeenSet; }
    inline void SetIntegrationId(const Aws::String& value) { m_integrationIdHasBeenSet = true; m_integrationId = value; }
    inline void SetIntegrationId(Aws::String&& value) { m_integrationIdHasBeenSet = true; m_integrationId = std::move(value); }
    inline void SetIntegrationId(const char* value) { m_integrationIdHasBeenSet = true; m_integrationId.assign(value); }
    inline UpdateIntegrationResponseRequest& WithIntegrationId(const Aws::String& value) { SetIntegrationId(value); return *this;}
    inline UpdateIntegrationResponseRequest& WithIntegrationId(Aws::String&& value) { SetIntegrationId(std::move(value)); return *this;}
    inline UpdateIntegrationResponseRequest& WithIntegrationId(const char* value) { SetIntegrationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The integration response ID.</p>
     */
    inline const Aws::String& GetIntegrationResponseId() const{ return m_integrationResponseId; }
    inline bool IntegrationResponseIdHasBeenSet() const { return m_integrationResponseIdHasBeenSet; }
    inline void SetIntegrationResponseId(const Aws::String& value) { m_integrationResponseIdHasBeenSet = true; m_integrationResponseId = value; }
    inline void SetIntegrationResponseId(Aws::String&& value) { m_integrationResponseIdHasBeenSet = true; m_integrationResponseId = std::move(value); }
    inline void SetIntegrationResponseId(const char* value) { m_integrationResponseIdHasBeenSet = true; m_integrationResponseId.assign(value); }
    inline UpdateIntegrationResponseRequest& WithIntegrationResponseId(const Aws::String& value) { SetIntegrationResponseId(value); return *this;}
    inline UpdateIntegrationResponseRequest& WithIntegrationResponseId(Aws::String&& value) { SetIntegrationResponseId(std::move(value)); return *this;}
    inline UpdateIntegrationResponseRequest& WithIntegrationResponseId(const char* value) { SetIntegrationResponseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The integration response key.</p>
     */
    inline const Aws::String& GetIntegrationResponseKey() const{ return m_integrationResponseKey; }
    inline bool IntegrationResponseKeyHasBeenSet() const { return m_integrationResponseKeyHasBeenSet; }
    inline void SetIntegrationResponseKey(const Aws::String& value) { m_integrationResponseKeyHasBeenSet = true; m_integrationResponseKey = value; }
    inline void SetIntegrationResponseKey(Aws::String&& value) { m_integrationResponseKeyHasBeenSet = true; m_integrationResponseKey = std::move(value); }
    inline void SetIntegrationResponseKey(const char* value) { m_integrationResponseKeyHasBeenSet = true; m_integrationResponseKey.assign(value); }
    inline UpdateIntegrationResponseRequest& WithIntegrationResponseKey(const Aws::String& value) { SetIntegrationResponseKey(value); return *this;}
    inline UpdateIntegrationResponseRequest& WithIntegrationResponseKey(Aws::String&& value) { SetIntegrationResponseKey(std::move(value)); return *this;}
    inline UpdateIntegrationResponseRequest& WithIntegrationResponseKey(const char* value) { SetIntegrationResponseKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key-value map specifying response parameters that are passed to the method
     * response from the backend. The key is a method response header parameter name
     * and the mapped value is an integration response header value, a static value
     * enclosed within a pair of single quotes, or a JSON expression from the
     * integration response body. The mapping key must match the pattern of
     * method.response.header.<replaceable>{name}</replaceable>
               , where
     * name is a valid and unique header name. The mapped non-static value must match
     * the pattern of integration.response.header.<replaceable>{name}</replaceable>
   
     * or integration.response.body.<replaceable>{JSON-expression}</replaceable>
      
     * , where 
                  <replaceable>{name}</replaceable>
                is
     * a valid and unique response header name and 
                 
     * <replaceable>{JSON-expression}</replaceable>
                is a valid JSON
     * expression without the $ prefix.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseParameters() const{ return m_responseParameters; }
    inline bool ResponseParametersHasBeenSet() const { return m_responseParametersHasBeenSet; }
    inline void SetResponseParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_responseParametersHasBeenSet = true; m_responseParameters = value; }
    inline void SetResponseParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_responseParametersHasBeenSet = true; m_responseParameters = std::move(value); }
    inline UpdateIntegrationResponseRequest& WithResponseParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetResponseParameters(value); return *this;}
    inline UpdateIntegrationResponseRequest& WithResponseParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetResponseParameters(std::move(value)); return *this;}
    inline UpdateIntegrationResponseRequest& AddResponseParameters(const Aws::String& key, const Aws::String& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, value); return *this; }
    inline UpdateIntegrationResponseRequest& AddResponseParameters(Aws::String&& key, const Aws::String& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(std::move(key), value); return *this; }
    inline UpdateIntegrationResponseRequest& AddResponseParameters(const Aws::String& key, Aws::String&& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, std::move(value)); return *this; }
    inline UpdateIntegrationResponseRequest& AddResponseParameters(Aws::String&& key, Aws::String&& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateIntegrationResponseRequest& AddResponseParameters(const char* key, Aws::String&& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, std::move(value)); return *this; }
    inline UpdateIntegrationResponseRequest& AddResponseParameters(Aws::String&& key, const char* value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(std::move(key), value); return *this; }
    inline UpdateIntegrationResponseRequest& AddResponseParameters(const char* key, const char* value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The collection of response templates for the integration response as a
     * string-to-string map of key-value pairs. Response templates are represented as a
     * key/value map, with a content-type as the key and a template as the value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseTemplates() const{ return m_responseTemplates; }
    inline bool ResponseTemplatesHasBeenSet() const { return m_responseTemplatesHasBeenSet; }
    inline void SetResponseTemplates(const Aws::Map<Aws::String, Aws::String>& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates = value; }
    inline void SetResponseTemplates(Aws::Map<Aws::String, Aws::String>&& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates = std::move(value); }
    inline UpdateIntegrationResponseRequest& WithResponseTemplates(const Aws::Map<Aws::String, Aws::String>& value) { SetResponseTemplates(value); return *this;}
    inline UpdateIntegrationResponseRequest& WithResponseTemplates(Aws::Map<Aws::String, Aws::String>&& value) { SetResponseTemplates(std::move(value)); return *this;}
    inline UpdateIntegrationResponseRequest& AddResponseTemplates(const Aws::String& key, const Aws::String& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(key, value); return *this; }
    inline UpdateIntegrationResponseRequest& AddResponseTemplates(Aws::String&& key, const Aws::String& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(std::move(key), value); return *this; }
    inline UpdateIntegrationResponseRequest& AddResponseTemplates(const Aws::String& key, Aws::String&& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(key, std::move(value)); return *this; }
    inline UpdateIntegrationResponseRequest& AddResponseTemplates(Aws::String&& key, Aws::String&& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateIntegrationResponseRequest& AddResponseTemplates(const char* key, Aws::String&& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(key, std::move(value)); return *this; }
    inline UpdateIntegrationResponseRequest& AddResponseTemplates(Aws::String&& key, const char* value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(std::move(key), value); return *this; }
    inline UpdateIntegrationResponseRequest& AddResponseTemplates(const char* key, const char* value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The template selection expression for the integration response. Supported
     * only for WebSocket APIs.</p>
     */
    inline const Aws::String& GetTemplateSelectionExpression() const{ return m_templateSelectionExpression; }
    inline bool TemplateSelectionExpressionHasBeenSet() const { return m_templateSelectionExpressionHasBeenSet; }
    inline void SetTemplateSelectionExpression(const Aws::String& value) { m_templateSelectionExpressionHasBeenSet = true; m_templateSelectionExpression = value; }
    inline void SetTemplateSelectionExpression(Aws::String&& value) { m_templateSelectionExpressionHasBeenSet = true; m_templateSelectionExpression = std::move(value); }
    inline void SetTemplateSelectionExpression(const char* value) { m_templateSelectionExpressionHasBeenSet = true; m_templateSelectionExpression.assign(value); }
    inline UpdateIntegrationResponseRequest& WithTemplateSelectionExpression(const Aws::String& value) { SetTemplateSelectionExpression(value); return *this;}
    inline UpdateIntegrationResponseRequest& WithTemplateSelectionExpression(Aws::String&& value) { SetTemplateSelectionExpression(std::move(value)); return *this;}
    inline UpdateIntegrationResponseRequest& WithTemplateSelectionExpression(const char* value) { SetTemplateSelectionExpression(value); return *this;}
    ///@}
  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    ContentHandlingStrategy m_contentHandlingStrategy;
    bool m_contentHandlingStrategyHasBeenSet = false;

    Aws::String m_integrationId;
    bool m_integrationIdHasBeenSet = false;

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
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
