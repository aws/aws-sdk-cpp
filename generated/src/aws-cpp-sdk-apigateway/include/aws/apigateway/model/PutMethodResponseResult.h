/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
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
   * <p>Represents a method response of a given HTTP status code returned to the
   * client. The method response is passed from the back end through the associated
   * integration response that can be transformed using a mapping template.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/MethodResponse">AWS
   * API Reference</a></p>
   */
  class PutMethodResponseResult
  {
  public:
    AWS_APIGATEWAY_API PutMethodResponseResult();
    AWS_APIGATEWAY_API PutMethodResponseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API PutMethodResponseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The method response's status code.</p>
     */
    inline const Aws::String& GetStatusCode() const{ return m_statusCode; }
    inline void SetStatusCode(const Aws::String& value) { m_statusCode = value; }
    inline void SetStatusCode(Aws::String&& value) { m_statusCode = std::move(value); }
    inline void SetStatusCode(const char* value) { m_statusCode.assign(value); }
    inline PutMethodResponseResult& WithStatusCode(const Aws::String& value) { SetStatusCode(value); return *this;}
    inline PutMethodResponseResult& WithStatusCode(Aws::String&& value) { SetStatusCode(std::move(value)); return *this;}
    inline PutMethodResponseResult& WithStatusCode(const char* value) { SetStatusCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key-value map specifying required or optional response parameters that API
     * Gateway can send back to the caller. A key defines a method response header and
     * the value specifies whether the associated method response header is required or
     * not. The expression of the key must match the pattern
     * <code>method.response.header.{name}</code>, where <code>name</code> is a valid
     * and unique header name. API Gateway passes certain integration response data to
     * the method response headers specified here according to the mapping you
     * prescribe in the API's IntegrationResponse. The integration response data that
     * can be mapped include an integration response header expressed in
     * <code>integration.response.header.{name}</code>, a static value enclosed within
     * a pair of single quotes (e.g., <code>'application/json'</code>), or a JSON
     * expression from the back-end response payload in the form of
     * <code>integration.response.body.{JSON-expression}</code>, where
     * <code>JSON-expression</code> is a valid JSON expression without the
     * <code>$</code> prefix.)</p>
     */
    inline const Aws::Map<Aws::String, bool>& GetResponseParameters() const{ return m_responseParameters; }
    inline void SetResponseParameters(const Aws::Map<Aws::String, bool>& value) { m_responseParameters = value; }
    inline void SetResponseParameters(Aws::Map<Aws::String, bool>&& value) { m_responseParameters = std::move(value); }
    inline PutMethodResponseResult& WithResponseParameters(const Aws::Map<Aws::String, bool>& value) { SetResponseParameters(value); return *this;}
    inline PutMethodResponseResult& WithResponseParameters(Aws::Map<Aws::String, bool>&& value) { SetResponseParameters(std::move(value)); return *this;}
    inline PutMethodResponseResult& AddResponseParameters(const Aws::String& key, bool value) { m_responseParameters.emplace(key, value); return *this; }
    inline PutMethodResponseResult& AddResponseParameters(Aws::String&& key, bool value) { m_responseParameters.emplace(std::move(key), value); return *this; }
    inline PutMethodResponseResult& AddResponseParameters(const char* key, bool value) { m_responseParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the Model resources used for the response's content-type. Response
     * models are represented as a key/value map, with a content-type as the key and a
     * Model name as the value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseModels() const{ return m_responseModels; }
    inline void SetResponseModels(const Aws::Map<Aws::String, Aws::String>& value) { m_responseModels = value; }
    inline void SetResponseModels(Aws::Map<Aws::String, Aws::String>&& value) { m_responseModels = std::move(value); }
    inline PutMethodResponseResult& WithResponseModels(const Aws::Map<Aws::String, Aws::String>& value) { SetResponseModels(value); return *this;}
    inline PutMethodResponseResult& WithResponseModels(Aws::Map<Aws::String, Aws::String>&& value) { SetResponseModels(std::move(value)); return *this;}
    inline PutMethodResponseResult& AddResponseModels(const Aws::String& key, const Aws::String& value) { m_responseModels.emplace(key, value); return *this; }
    inline PutMethodResponseResult& AddResponseModels(Aws::String&& key, const Aws::String& value) { m_responseModels.emplace(std::move(key), value); return *this; }
    inline PutMethodResponseResult& AddResponseModels(const Aws::String& key, Aws::String&& value) { m_responseModels.emplace(key, std::move(value)); return *this; }
    inline PutMethodResponseResult& AddResponseModels(Aws::String&& key, Aws::String&& value) { m_responseModels.emplace(std::move(key), std::move(value)); return *this; }
    inline PutMethodResponseResult& AddResponseModels(const char* key, Aws::String&& value) { m_responseModels.emplace(key, std::move(value)); return *this; }
    inline PutMethodResponseResult& AddResponseModels(Aws::String&& key, const char* value) { m_responseModels.emplace(std::move(key), value); return *this; }
    inline PutMethodResponseResult& AddResponseModels(const char* key, const char* value) { m_responseModels.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutMethodResponseResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutMethodResponseResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutMethodResponseResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_statusCode;

    Aws::Map<Aws::String, bool> m_responseParameters;

    Aws::Map<Aws::String, Aws::String> m_responseModels;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
