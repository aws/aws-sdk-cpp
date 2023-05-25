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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
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
  class PutGatewayResponseResult
  {
  public:
    AWS_APIGATEWAY_API PutGatewayResponseResult();
    AWS_APIGATEWAY_API PutGatewayResponseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API PutGatewayResponseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The response type of the associated GatewayResponse.</p>
     */
    inline const GatewayResponseType& GetResponseType() const{ return m_responseType; }

    /**
     * <p>The response type of the associated GatewayResponse.</p>
     */
    inline void SetResponseType(const GatewayResponseType& value) { m_responseType = value; }

    /**
     * <p>The response type of the associated GatewayResponse.</p>
     */
    inline void SetResponseType(GatewayResponseType&& value) { m_responseType = std::move(value); }

    /**
     * <p>The response type of the associated GatewayResponse.</p>
     */
    inline PutGatewayResponseResult& WithResponseType(const GatewayResponseType& value) { SetResponseType(value); return *this;}

    /**
     * <p>The response type of the associated GatewayResponse.</p>
     */
    inline PutGatewayResponseResult& WithResponseType(GatewayResponseType&& value) { SetResponseType(std::move(value)); return *this;}


    /**
     * <p>The HTTP status code for this GatewayResponse.</p>
     */
    inline const Aws::String& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The HTTP status code for this GatewayResponse.</p>
     */
    inline void SetStatusCode(const Aws::String& value) { m_statusCode = value; }

    /**
     * <p>The HTTP status code for this GatewayResponse.</p>
     */
    inline void SetStatusCode(Aws::String&& value) { m_statusCode = std::move(value); }

    /**
     * <p>The HTTP status code for this GatewayResponse.</p>
     */
    inline void SetStatusCode(const char* value) { m_statusCode.assign(value); }

    /**
     * <p>The HTTP status code for this GatewayResponse.</p>
     */
    inline PutGatewayResponseResult& WithStatusCode(const Aws::String& value) { SetStatusCode(value); return *this;}

    /**
     * <p>The HTTP status code for this GatewayResponse.</p>
     */
    inline PutGatewayResponseResult& WithStatusCode(Aws::String&& value) { SetStatusCode(std::move(value)); return *this;}

    /**
     * <p>The HTTP status code for this GatewayResponse.</p>
     */
    inline PutGatewayResponseResult& WithStatusCode(const char* value) { SetStatusCode(value); return *this;}


    /**
     * <p>Response parameters (paths, query strings and headers) of the GatewayResponse
     * as a string-to-string map of key-value pairs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseParameters() const{ return m_responseParameters; }

    /**
     * <p>Response parameters (paths, query strings and headers) of the GatewayResponse
     * as a string-to-string map of key-value pairs.</p>
     */
    inline void SetResponseParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_responseParameters = value; }

    /**
     * <p>Response parameters (paths, query strings and headers) of the GatewayResponse
     * as a string-to-string map of key-value pairs.</p>
     */
    inline void SetResponseParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_responseParameters = std::move(value); }

    /**
     * <p>Response parameters (paths, query strings and headers) of the GatewayResponse
     * as a string-to-string map of key-value pairs.</p>
     */
    inline PutGatewayResponseResult& WithResponseParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetResponseParameters(value); return *this;}

    /**
     * <p>Response parameters (paths, query strings and headers) of the GatewayResponse
     * as a string-to-string map of key-value pairs.</p>
     */
    inline PutGatewayResponseResult& WithResponseParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetResponseParameters(std::move(value)); return *this;}

    /**
     * <p>Response parameters (paths, query strings and headers) of the GatewayResponse
     * as a string-to-string map of key-value pairs.</p>
     */
    inline PutGatewayResponseResult& AddResponseParameters(const Aws::String& key, const Aws::String& value) { m_responseParameters.emplace(key, value); return *this; }

    /**
     * <p>Response parameters (paths, query strings and headers) of the GatewayResponse
     * as a string-to-string map of key-value pairs.</p>
     */
    inline PutGatewayResponseResult& AddResponseParameters(Aws::String&& key, const Aws::String& value) { m_responseParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Response parameters (paths, query strings and headers) of the GatewayResponse
     * as a string-to-string map of key-value pairs.</p>
     */
    inline PutGatewayResponseResult& AddResponseParameters(const Aws::String& key, Aws::String&& value) { m_responseParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Response parameters (paths, query strings and headers) of the GatewayResponse
     * as a string-to-string map of key-value pairs.</p>
     */
    inline PutGatewayResponseResult& AddResponseParameters(Aws::String&& key, Aws::String&& value) { m_responseParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Response parameters (paths, query strings and headers) of the GatewayResponse
     * as a string-to-string map of key-value pairs.</p>
     */
    inline PutGatewayResponseResult& AddResponseParameters(const char* key, Aws::String&& value) { m_responseParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Response parameters (paths, query strings and headers) of the GatewayResponse
     * as a string-to-string map of key-value pairs.</p>
     */
    inline PutGatewayResponseResult& AddResponseParameters(Aws::String&& key, const char* value) { m_responseParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Response parameters (paths, query strings and headers) of the GatewayResponse
     * as a string-to-string map of key-value pairs.</p>
     */
    inline PutGatewayResponseResult& AddResponseParameters(const char* key, const char* value) { m_responseParameters.emplace(key, value); return *this; }


    /**
     * <p>Response templates of the GatewayResponse as a string-to-string map of
     * key-value pairs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseTemplates() const{ return m_responseTemplates; }

    /**
     * <p>Response templates of the GatewayResponse as a string-to-string map of
     * key-value pairs.</p>
     */
    inline void SetResponseTemplates(const Aws::Map<Aws::String, Aws::String>& value) { m_responseTemplates = value; }

    /**
     * <p>Response templates of the GatewayResponse as a string-to-string map of
     * key-value pairs.</p>
     */
    inline void SetResponseTemplates(Aws::Map<Aws::String, Aws::String>&& value) { m_responseTemplates = std::move(value); }

    /**
     * <p>Response templates of the GatewayResponse as a string-to-string map of
     * key-value pairs.</p>
     */
    inline PutGatewayResponseResult& WithResponseTemplates(const Aws::Map<Aws::String, Aws::String>& value) { SetResponseTemplates(value); return *this;}

    /**
     * <p>Response templates of the GatewayResponse as a string-to-string map of
     * key-value pairs.</p>
     */
    inline PutGatewayResponseResult& WithResponseTemplates(Aws::Map<Aws::String, Aws::String>&& value) { SetResponseTemplates(std::move(value)); return *this;}

    /**
     * <p>Response templates of the GatewayResponse as a string-to-string map of
     * key-value pairs.</p>
     */
    inline PutGatewayResponseResult& AddResponseTemplates(const Aws::String& key, const Aws::String& value) { m_responseTemplates.emplace(key, value); return *this; }

    /**
     * <p>Response templates of the GatewayResponse as a string-to-string map of
     * key-value pairs.</p>
     */
    inline PutGatewayResponseResult& AddResponseTemplates(Aws::String&& key, const Aws::String& value) { m_responseTemplates.emplace(std::move(key), value); return *this; }

    /**
     * <p>Response templates of the GatewayResponse as a string-to-string map of
     * key-value pairs.</p>
     */
    inline PutGatewayResponseResult& AddResponseTemplates(const Aws::String& key, Aws::String&& value) { m_responseTemplates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Response templates of the GatewayResponse as a string-to-string map of
     * key-value pairs.</p>
     */
    inline PutGatewayResponseResult& AddResponseTemplates(Aws::String&& key, Aws::String&& value) { m_responseTemplates.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Response templates of the GatewayResponse as a string-to-string map of
     * key-value pairs.</p>
     */
    inline PutGatewayResponseResult& AddResponseTemplates(const char* key, Aws::String&& value) { m_responseTemplates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Response templates of the GatewayResponse as a string-to-string map of
     * key-value pairs.</p>
     */
    inline PutGatewayResponseResult& AddResponseTemplates(Aws::String&& key, const char* value) { m_responseTemplates.emplace(std::move(key), value); return *this; }

    /**
     * <p>Response templates of the GatewayResponse as a string-to-string map of
     * key-value pairs.</p>
     */
    inline PutGatewayResponseResult& AddResponseTemplates(const char* key, const char* value) { m_responseTemplates.emplace(key, value); return *this; }


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
    inline void SetDefaultResponse(bool value) { m_defaultResponse = value; }

    /**
     * <p>A Boolean flag to indicate whether this GatewayResponse is the default
     * gateway response (<code>true</code>) or not (<code>false</code>). A default
     * gateway response is one generated by API Gateway without any customization by an
     * API developer. </p>
     */
    inline PutGatewayResponseResult& WithDefaultResponse(bool value) { SetDefaultResponse(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutGatewayResponseResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutGatewayResponseResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutGatewayResponseResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    GatewayResponseType m_responseType;

    Aws::String m_statusCode;

    Aws::Map<Aws::String, Aws::String> m_responseParameters;

    Aws::Map<Aws::String, Aws::String> m_responseTemplates;

    bool m_defaultResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
