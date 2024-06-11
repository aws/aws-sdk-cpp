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
  class UpdateGatewayResponseResult
  {
  public:
    AWS_APIGATEWAY_API UpdateGatewayResponseResult();
    AWS_APIGATEWAY_API UpdateGatewayResponseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API UpdateGatewayResponseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The response type of the associated GatewayResponse.</p>
     */
    inline const GatewayResponseType& GetResponseType() const{ return m_responseType; }
    inline void SetResponseType(const GatewayResponseType& value) { m_responseType = value; }
    inline void SetResponseType(GatewayResponseType&& value) { m_responseType = std::move(value); }
    inline UpdateGatewayResponseResult& WithResponseType(const GatewayResponseType& value) { SetResponseType(value); return *this;}
    inline UpdateGatewayResponseResult& WithResponseType(GatewayResponseType&& value) { SetResponseType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status code for this GatewayResponse.</p>
     */
    inline const Aws::String& GetStatusCode() const{ return m_statusCode; }
    inline void SetStatusCode(const Aws::String& value) { m_statusCode = value; }
    inline void SetStatusCode(Aws::String&& value) { m_statusCode = std::move(value); }
    inline void SetStatusCode(const char* value) { m_statusCode.assign(value); }
    inline UpdateGatewayResponseResult& WithStatusCode(const Aws::String& value) { SetStatusCode(value); return *this;}
    inline UpdateGatewayResponseResult& WithStatusCode(Aws::String&& value) { SetStatusCode(std::move(value)); return *this;}
    inline UpdateGatewayResponseResult& WithStatusCode(const char* value) { SetStatusCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Response parameters (paths, query strings and headers) of the GatewayResponse
     * as a string-to-string map of key-value pairs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseParameters() const{ return m_responseParameters; }
    inline void SetResponseParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_responseParameters = value; }
    inline void SetResponseParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_responseParameters = std::move(value); }
    inline UpdateGatewayResponseResult& WithResponseParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetResponseParameters(value); return *this;}
    inline UpdateGatewayResponseResult& WithResponseParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetResponseParameters(std::move(value)); return *this;}
    inline UpdateGatewayResponseResult& AddResponseParameters(const Aws::String& key, const Aws::String& value) { m_responseParameters.emplace(key, value); return *this; }
    inline UpdateGatewayResponseResult& AddResponseParameters(Aws::String&& key, const Aws::String& value) { m_responseParameters.emplace(std::move(key), value); return *this; }
    inline UpdateGatewayResponseResult& AddResponseParameters(const Aws::String& key, Aws::String&& value) { m_responseParameters.emplace(key, std::move(value)); return *this; }
    inline UpdateGatewayResponseResult& AddResponseParameters(Aws::String&& key, Aws::String&& value) { m_responseParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateGatewayResponseResult& AddResponseParameters(const char* key, Aws::String&& value) { m_responseParameters.emplace(key, std::move(value)); return *this; }
    inline UpdateGatewayResponseResult& AddResponseParameters(Aws::String&& key, const char* value) { m_responseParameters.emplace(std::move(key), value); return *this; }
    inline UpdateGatewayResponseResult& AddResponseParameters(const char* key, const char* value) { m_responseParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Response templates of the GatewayResponse as a string-to-string map of
     * key-value pairs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseTemplates() const{ return m_responseTemplates; }
    inline void SetResponseTemplates(const Aws::Map<Aws::String, Aws::String>& value) { m_responseTemplates = value; }
    inline void SetResponseTemplates(Aws::Map<Aws::String, Aws::String>&& value) { m_responseTemplates = std::move(value); }
    inline UpdateGatewayResponseResult& WithResponseTemplates(const Aws::Map<Aws::String, Aws::String>& value) { SetResponseTemplates(value); return *this;}
    inline UpdateGatewayResponseResult& WithResponseTemplates(Aws::Map<Aws::String, Aws::String>&& value) { SetResponseTemplates(std::move(value)); return *this;}
    inline UpdateGatewayResponseResult& AddResponseTemplates(const Aws::String& key, const Aws::String& value) { m_responseTemplates.emplace(key, value); return *this; }
    inline UpdateGatewayResponseResult& AddResponseTemplates(Aws::String&& key, const Aws::String& value) { m_responseTemplates.emplace(std::move(key), value); return *this; }
    inline UpdateGatewayResponseResult& AddResponseTemplates(const Aws::String& key, Aws::String&& value) { m_responseTemplates.emplace(key, std::move(value)); return *this; }
    inline UpdateGatewayResponseResult& AddResponseTemplates(Aws::String&& key, Aws::String&& value) { m_responseTemplates.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateGatewayResponseResult& AddResponseTemplates(const char* key, Aws::String&& value) { m_responseTemplates.emplace(key, std::move(value)); return *this; }
    inline UpdateGatewayResponseResult& AddResponseTemplates(Aws::String&& key, const char* value) { m_responseTemplates.emplace(std::move(key), value); return *this; }
    inline UpdateGatewayResponseResult& AddResponseTemplates(const char* key, const char* value) { m_responseTemplates.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A Boolean flag to indicate whether this GatewayResponse is the default
     * gateway response (<code>true</code>) or not (<code>false</code>). A default
     * gateway response is one generated by API Gateway without any customization by an
     * API developer. </p>
     */
    inline bool GetDefaultResponse() const{ return m_defaultResponse; }
    inline void SetDefaultResponse(bool value) { m_defaultResponse = value; }
    inline UpdateGatewayResponseResult& WithDefaultResponse(bool value) { SetDefaultResponse(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateGatewayResponseResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateGatewayResponseResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateGatewayResponseResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
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
