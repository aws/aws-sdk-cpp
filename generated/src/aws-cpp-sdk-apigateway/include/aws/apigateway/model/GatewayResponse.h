/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/model/GatewayResponseType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace APIGateway
{
namespace Model
{

  /**
   * <p>A gateway response of a given response type and status code, with optional
   * response parameters and mapping templates.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GatewayResponse">AWS
   * API Reference</a></p>
   */
  class GatewayResponse
  {
  public:
    AWS_APIGATEWAY_API GatewayResponse();
    AWS_APIGATEWAY_API GatewayResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API GatewayResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The response type of the associated GatewayResponse.</p>
     */
    inline const GatewayResponseType& GetResponseType() const{ return m_responseType; }

    /**
     * <p>The response type of the associated GatewayResponse.</p>
     */
    inline bool ResponseTypeHasBeenSet() const { return m_responseTypeHasBeenSet; }

    /**
     * <p>The response type of the associated GatewayResponse.</p>
     */
    inline void SetResponseType(const GatewayResponseType& value) { m_responseTypeHasBeenSet = true; m_responseType = value; }

    /**
     * <p>The response type of the associated GatewayResponse.</p>
     */
    inline void SetResponseType(GatewayResponseType&& value) { m_responseTypeHasBeenSet = true; m_responseType = std::move(value); }

    /**
     * <p>The response type of the associated GatewayResponse.</p>
     */
    inline GatewayResponse& WithResponseType(const GatewayResponseType& value) { SetResponseType(value); return *this;}

    /**
     * <p>The response type of the associated GatewayResponse.</p>
     */
    inline GatewayResponse& WithResponseType(GatewayResponseType&& value) { SetResponseType(std::move(value)); return *this;}


    /**
     * <p>The HTTP status code for this GatewayResponse.</p>
     */
    inline const Aws::String& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The HTTP status code for this GatewayResponse.</p>
     */
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }

    /**
     * <p>The HTTP status code for this GatewayResponse.</p>
     */
    inline void SetStatusCode(const Aws::String& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>The HTTP status code for this GatewayResponse.</p>
     */
    inline void SetStatusCode(Aws::String&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }

    /**
     * <p>The HTTP status code for this GatewayResponse.</p>
     */
    inline void SetStatusCode(const char* value) { m_statusCodeHasBeenSet = true; m_statusCode.assign(value); }

    /**
     * <p>The HTTP status code for this GatewayResponse.</p>
     */
    inline GatewayResponse& WithStatusCode(const Aws::String& value) { SetStatusCode(value); return *this;}

    /**
     * <p>The HTTP status code for this GatewayResponse.</p>
     */
    inline GatewayResponse& WithStatusCode(Aws::String&& value) { SetStatusCode(std::move(value)); return *this;}

    /**
     * <p>The HTTP status code for this GatewayResponse.</p>
     */
    inline GatewayResponse& WithStatusCode(const char* value) { SetStatusCode(value); return *this;}


    /**
     * <p>Response parameters (paths, query strings and headers) of the GatewayResponse
     * as a string-to-string map of key-value pairs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseParameters() const{ return m_responseParameters; }

    /**
     * <p>Response parameters (paths, query strings and headers) of the GatewayResponse
     * as a string-to-string map of key-value pairs.</p>
     */
    inline bool ResponseParametersHasBeenSet() const { return m_responseParametersHasBeenSet; }

    /**
     * <p>Response parameters (paths, query strings and headers) of the GatewayResponse
     * as a string-to-string map of key-value pairs.</p>
     */
    inline void SetResponseParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_responseParametersHasBeenSet = true; m_responseParameters = value; }

    /**
     * <p>Response parameters (paths, query strings and headers) of the GatewayResponse
     * as a string-to-string map of key-value pairs.</p>
     */
    inline void SetResponseParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_responseParametersHasBeenSet = true; m_responseParameters = std::move(value); }

    /**
     * <p>Response parameters (paths, query strings and headers) of the GatewayResponse
     * as a string-to-string map of key-value pairs.</p>
     */
    inline GatewayResponse& WithResponseParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetResponseParameters(value); return *this;}

    /**
     * <p>Response parameters (paths, query strings and headers) of the GatewayResponse
     * as a string-to-string map of key-value pairs.</p>
     */
    inline GatewayResponse& WithResponseParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetResponseParameters(std::move(value)); return *this;}

    /**
     * <p>Response parameters (paths, query strings and headers) of the GatewayResponse
     * as a string-to-string map of key-value pairs.</p>
     */
    inline GatewayResponse& AddResponseParameters(const Aws::String& key, const Aws::String& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, value); return *this; }

    /**
     * <p>Response parameters (paths, query strings and headers) of the GatewayResponse
     * as a string-to-string map of key-value pairs.</p>
     */
    inline GatewayResponse& AddResponseParameters(Aws::String&& key, const Aws::String& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Response parameters (paths, query strings and headers) of the GatewayResponse
     * as a string-to-string map of key-value pairs.</p>
     */
    inline GatewayResponse& AddResponseParameters(const Aws::String& key, Aws::String&& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Response parameters (paths, query strings and headers) of the GatewayResponse
     * as a string-to-string map of key-value pairs.</p>
     */
    inline GatewayResponse& AddResponseParameters(Aws::String&& key, Aws::String&& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Response parameters (paths, query strings and headers) of the GatewayResponse
     * as a string-to-string map of key-value pairs.</p>
     */
    inline GatewayResponse& AddResponseParameters(const char* key, Aws::String&& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Response parameters (paths, query strings and headers) of the GatewayResponse
     * as a string-to-string map of key-value pairs.</p>
     */
    inline GatewayResponse& AddResponseParameters(Aws::String&& key, const char* value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Response parameters (paths, query strings and headers) of the GatewayResponse
     * as a string-to-string map of key-value pairs.</p>
     */
    inline GatewayResponse& AddResponseParameters(const char* key, const char* value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, value); return *this; }


    /**
     * <p>Response templates of the GatewayResponse as a string-to-string map of
     * key-value pairs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseTemplates() const{ return m_responseTemplates; }

    /**
     * <p>Response templates of the GatewayResponse as a string-to-string map of
     * key-value pairs.</p>
     */
    inline bool ResponseTemplatesHasBeenSet() const { return m_responseTemplatesHasBeenSet; }

    /**
     * <p>Response templates of the GatewayResponse as a string-to-string map of
     * key-value pairs.</p>
     */
    inline void SetResponseTemplates(const Aws::Map<Aws::String, Aws::String>& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates = value; }

    /**
     * <p>Response templates of the GatewayResponse as a string-to-string map of
     * key-value pairs.</p>
     */
    inline void SetResponseTemplates(Aws::Map<Aws::String, Aws::String>&& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates = std::move(value); }

    /**
     * <p>Response templates of the GatewayResponse as a string-to-string map of
     * key-value pairs.</p>
     */
    inline GatewayResponse& WithResponseTemplates(const Aws::Map<Aws::String, Aws::String>& value) { SetResponseTemplates(value); return *this;}

    /**
     * <p>Response templates of the GatewayResponse as a string-to-string map of
     * key-value pairs.</p>
     */
    inline GatewayResponse& WithResponseTemplates(Aws::Map<Aws::String, Aws::String>&& value) { SetResponseTemplates(std::move(value)); return *this;}

    /**
     * <p>Response templates of the GatewayResponse as a string-to-string map of
     * key-value pairs.</p>
     */
    inline GatewayResponse& AddResponseTemplates(const Aws::String& key, const Aws::String& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(key, value); return *this; }

    /**
     * <p>Response templates of the GatewayResponse as a string-to-string map of
     * key-value pairs.</p>
     */
    inline GatewayResponse& AddResponseTemplates(Aws::String&& key, const Aws::String& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(std::move(key), value); return *this; }

    /**
     * <p>Response templates of the GatewayResponse as a string-to-string map of
     * key-value pairs.</p>
     */
    inline GatewayResponse& AddResponseTemplates(const Aws::String& key, Aws::String&& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Response templates of the GatewayResponse as a string-to-string map of
     * key-value pairs.</p>
     */
    inline GatewayResponse& AddResponseTemplates(Aws::String&& key, Aws::String&& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Response templates of the GatewayResponse as a string-to-string map of
     * key-value pairs.</p>
     */
    inline GatewayResponse& AddResponseTemplates(const char* key, Aws::String&& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Response templates of the GatewayResponse as a string-to-string map of
     * key-value pairs.</p>
     */
    inline GatewayResponse& AddResponseTemplates(Aws::String&& key, const char* value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(std::move(key), value); return *this; }

    /**
     * <p>Response templates of the GatewayResponse as a string-to-string map of
     * key-value pairs.</p>
     */
    inline GatewayResponse& AddResponseTemplates(const char* key, const char* value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(key, value); return *this; }


    /**
     * <p>A Boolean flag to indicate whether this GatewayResponse is the default
     * gateway response (<code>true</code>) or not (<code>false</code>). A default
     * gateway response is one generated by API Gateway without any customization by an
     * API developer. </p>
     */
    inline bool GetDefaultResponse() const{ return m_defaultResponse; }

    /**
     * <p>A Boolean flag to indicate whether this GatewayResponse is the default
     * gateway response (<code>true</code>) or not (<code>false</code>). A default
     * gateway response is one generated by API Gateway without any customization by an
     * API developer. </p>
     */
    inline bool DefaultResponseHasBeenSet() const { return m_defaultResponseHasBeenSet; }

    /**
     * <p>A Boolean flag to indicate whether this GatewayResponse is the default
     * gateway response (<code>true</code>) or not (<code>false</code>). A default
     * gateway response is one generated by API Gateway without any customization by an
     * API developer. </p>
     */
    inline void SetDefaultResponse(bool value) { m_defaultResponseHasBeenSet = true; m_defaultResponse = value; }

    /**
     * <p>A Boolean flag to indicate whether this GatewayResponse is the default
     * gateway response (<code>true</code>) or not (<code>false</code>). A default
     * gateway response is one generated by API Gateway without any customization by an
     * API developer. </p>
     */
    inline GatewayResponse& WithDefaultResponse(bool value) { SetDefaultResponse(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }

    
    inline GatewayResponse& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GatewayResponse& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GatewayResponse& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    GatewayResponseType m_responseType;
    bool m_responseTypeHasBeenSet = false;

    Aws::String m_statusCode;
    bool m_statusCodeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_responseParameters;
    bool m_responseParametersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_responseTemplates;
    bool m_responseTemplatesHasBeenSet = false;

    bool m_defaultResponse;
    bool m_defaultResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
