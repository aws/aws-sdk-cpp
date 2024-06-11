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
   * <p>Represents a method response of a given HTTP status code returned to the
   * client. The method response is passed from the back end through the associated
   * integration response that can be transformed using a mapping template.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/MethodResponse">AWS
   * API Reference</a></p>
   */
  class MethodResponse
  {
  public:
    AWS_APIGATEWAY_API MethodResponse();
    AWS_APIGATEWAY_API MethodResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API MethodResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The method response's status code.</p>
     */
    inline const Aws::String& GetStatusCode() const{ return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    inline void SetStatusCode(const Aws::String& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline void SetStatusCode(Aws::String&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }
    inline void SetStatusCode(const char* value) { m_statusCodeHasBeenSet = true; m_statusCode.assign(value); }
    inline MethodResponse& WithStatusCode(const Aws::String& value) { SetStatusCode(value); return *this;}
    inline MethodResponse& WithStatusCode(Aws::String&& value) { SetStatusCode(std::move(value)); return *this;}
    inline MethodResponse& WithStatusCode(const char* value) { SetStatusCode(value); return *this;}
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
    inline bool ResponseParametersHasBeenSet() const { return m_responseParametersHasBeenSet; }
    inline void SetResponseParameters(const Aws::Map<Aws::String, bool>& value) { m_responseParametersHasBeenSet = true; m_responseParameters = value; }
    inline void SetResponseParameters(Aws::Map<Aws::String, bool>&& value) { m_responseParametersHasBeenSet = true; m_responseParameters = std::move(value); }
    inline MethodResponse& WithResponseParameters(const Aws::Map<Aws::String, bool>& value) { SetResponseParameters(value); return *this;}
    inline MethodResponse& WithResponseParameters(Aws::Map<Aws::String, bool>&& value) { SetResponseParameters(std::move(value)); return *this;}
    inline MethodResponse& AddResponseParameters(const Aws::String& key, bool value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, value); return *this; }
    inline MethodResponse& AddResponseParameters(Aws::String&& key, bool value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(std::move(key), value); return *this; }
    inline MethodResponse& AddResponseParameters(const char* key, bool value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the Model resources used for the response's content-type. Response
     * models are represented as a key/value map, with a content-type as the key and a
     * Model name as the value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseModels() const{ return m_responseModels; }
    inline bool ResponseModelsHasBeenSet() const { return m_responseModelsHasBeenSet; }
    inline void SetResponseModels(const Aws::Map<Aws::String, Aws::String>& value) { m_responseModelsHasBeenSet = true; m_responseModels = value; }
    inline void SetResponseModels(Aws::Map<Aws::String, Aws::String>&& value) { m_responseModelsHasBeenSet = true; m_responseModels = std::move(value); }
    inline MethodResponse& WithResponseModels(const Aws::Map<Aws::String, Aws::String>& value) { SetResponseModels(value); return *this;}
    inline MethodResponse& WithResponseModels(Aws::Map<Aws::String, Aws::String>&& value) { SetResponseModels(std::move(value)); return *this;}
    inline MethodResponse& AddResponseModels(const Aws::String& key, const Aws::String& value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(key, value); return *this; }
    inline MethodResponse& AddResponseModels(Aws::String&& key, const Aws::String& value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(std::move(key), value); return *this; }
    inline MethodResponse& AddResponseModels(const Aws::String& key, Aws::String&& value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(key, std::move(value)); return *this; }
    inline MethodResponse& AddResponseModels(Aws::String&& key, Aws::String&& value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(std::move(key), std::move(value)); return *this; }
    inline MethodResponse& AddResponseModels(const char* key, Aws::String&& value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(key, std::move(value)); return *this; }
    inline MethodResponse& AddResponseModels(Aws::String&& key, const char* value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(std::move(key), value); return *this; }
    inline MethodResponse& AddResponseModels(const char* key, const char* value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline MethodResponse& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline MethodResponse& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline MethodResponse& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_statusCode;
    bool m_statusCodeHasBeenSet = false;

    Aws::Map<Aws::String, bool> m_responseParameters;
    bool m_responseParametersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_responseModels;
    bool m_responseModelsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
