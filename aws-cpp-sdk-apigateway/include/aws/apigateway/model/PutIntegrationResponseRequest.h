/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Represents a put integration response request.</p>
   */
  class AWS_APIGATEWAY_API PutIntegrationResponseRequest : public APIGatewayRequest
  {
  public:
    PutIntegrationResponseRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>Specifies a put integration response request's API identifier.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>Specifies a put integration response request's API identifier.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>Specifies a put integration response request's API identifier.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>Specifies a put integration response request's API identifier.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>Specifies a put integration response request's API identifier.</p>
     */
    inline PutIntegrationResponseRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>Specifies a put integration response request's API identifier.</p>
     */
    inline PutIntegrationResponseRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(value); return *this;}

    /**
     * <p>Specifies a put integration response request's API identifier.</p>
     */
    inline PutIntegrationResponseRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}

    /**
     * <p>Specifies a put integration response request's resource identifier.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>Specifies a put integration response request's resource identifier.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>Specifies a put integration response request's resource identifier.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>Specifies a put integration response request's resource identifier.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>Specifies a put integration response request's resource identifier.</p>
     */
    inline PutIntegrationResponseRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>Specifies a put integration response request's resource identifier.</p>
     */
    inline PutIntegrationResponseRequest& WithResourceId(Aws::String&& value) { SetResourceId(value); return *this;}

    /**
     * <p>Specifies a put integration response request's resource identifier.</p>
     */
    inline PutIntegrationResponseRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}

    /**
     * <p>Specifies a put integration response request's HTTP method.</p>
     */
    inline const Aws::String& GetHttpMethod() const{ return m_httpMethod; }

    /**
     * <p>Specifies a put integration response request's HTTP method.</p>
     */
    inline void SetHttpMethod(const Aws::String& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }

    /**
     * <p>Specifies a put integration response request's HTTP method.</p>
     */
    inline void SetHttpMethod(Aws::String&& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }

    /**
     * <p>Specifies a put integration response request's HTTP method.</p>
     */
    inline void SetHttpMethod(const char* value) { m_httpMethodHasBeenSet = true; m_httpMethod.assign(value); }

    /**
     * <p>Specifies a put integration response request's HTTP method.</p>
     */
    inline PutIntegrationResponseRequest& WithHttpMethod(const Aws::String& value) { SetHttpMethod(value); return *this;}

    /**
     * <p>Specifies a put integration response request's HTTP method.</p>
     */
    inline PutIntegrationResponseRequest& WithHttpMethod(Aws::String&& value) { SetHttpMethod(value); return *this;}

    /**
     * <p>Specifies a put integration response request's HTTP method.</p>
     */
    inline PutIntegrationResponseRequest& WithHttpMethod(const char* value) { SetHttpMethod(value); return *this;}

    /**
     * <p>Specifies the status code that is used to map the integration response to an
     * existing <a>MethodResponse</a>.</p>
     */
    inline const Aws::String& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>Specifies the status code that is used to map the integration response to an
     * existing <a>MethodResponse</a>.</p>
     */
    inline void SetStatusCode(const Aws::String& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>Specifies the status code that is used to map the integration response to an
     * existing <a>MethodResponse</a>.</p>
     */
    inline void SetStatusCode(Aws::String&& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>Specifies the status code that is used to map the integration response to an
     * existing <a>MethodResponse</a>.</p>
     */
    inline void SetStatusCode(const char* value) { m_statusCodeHasBeenSet = true; m_statusCode.assign(value); }

    /**
     * <p>Specifies the status code that is used to map the integration response to an
     * existing <a>MethodResponse</a>.</p>
     */
    inline PutIntegrationResponseRequest& WithStatusCode(const Aws::String& value) { SetStatusCode(value); return *this;}

    /**
     * <p>Specifies the status code that is used to map the integration response to an
     * existing <a>MethodResponse</a>.</p>
     */
    inline PutIntegrationResponseRequest& WithStatusCode(Aws::String&& value) { SetStatusCode(value); return *this;}

    /**
     * <p>Specifies the status code that is used to map the integration response to an
     * existing <a>MethodResponse</a>.</p>
     */
    inline PutIntegrationResponseRequest& WithStatusCode(const char* value) { SetStatusCode(value); return *this;}

    /**
     * <p>Specifies the selection pattern of a put integration response.</p>
     */
    inline const Aws::String& GetSelectionPattern() const{ return m_selectionPattern; }

    /**
     * <p>Specifies the selection pattern of a put integration response.</p>
     */
    inline void SetSelectionPattern(const Aws::String& value) { m_selectionPatternHasBeenSet = true; m_selectionPattern = value; }

    /**
     * <p>Specifies the selection pattern of a put integration response.</p>
     */
    inline void SetSelectionPattern(Aws::String&& value) { m_selectionPatternHasBeenSet = true; m_selectionPattern = value; }

    /**
     * <p>Specifies the selection pattern of a put integration response.</p>
     */
    inline void SetSelectionPattern(const char* value) { m_selectionPatternHasBeenSet = true; m_selectionPattern.assign(value); }

    /**
     * <p>Specifies the selection pattern of a put integration response.</p>
     */
    inline PutIntegrationResponseRequest& WithSelectionPattern(const Aws::String& value) { SetSelectionPattern(value); return *this;}

    /**
     * <p>Specifies the selection pattern of a put integration response.</p>
     */
    inline PutIntegrationResponseRequest& WithSelectionPattern(Aws::String&& value) { SetSelectionPattern(value); return *this;}

    /**
     * <p>Specifies the selection pattern of a put integration response.</p>
     */
    inline PutIntegrationResponseRequest& WithSelectionPattern(const char* value) { SetSelectionPattern(value); return *this;}

    /**
     * <p>Represents response parameters that can be read from the backend response.
     * Response parameters are represented as a key/value map, with a destination as
     * the key and a source as the value. A destination must match an existing response
     * parameter in the <a>Method</a>. The source can be a header from the backend
     * response, or a static value. Static values are specified using enclosing single
     * quotes, and backend response headers can be read using the pattern
     * <code>integration.response.header.{name}</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseParameters() const{ return m_responseParameters; }

    /**
     * <p>Represents response parameters that can be read from the backend response.
     * Response parameters are represented as a key/value map, with a destination as
     * the key and a source as the value. A destination must match an existing response
     * parameter in the <a>Method</a>. The source can be a header from the backend
     * response, or a static value. Static values are specified using enclosing single
     * quotes, and backend response headers can be read using the pattern
     * <code>integration.response.header.{name}</code>.</p>
     */
    inline void SetResponseParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_responseParametersHasBeenSet = true; m_responseParameters = value; }

    /**
     * <p>Represents response parameters that can be read from the backend response.
     * Response parameters are represented as a key/value map, with a destination as
     * the key and a source as the value. A destination must match an existing response
     * parameter in the <a>Method</a>. The source can be a header from the backend
     * response, or a static value. Static values are specified using enclosing single
     * quotes, and backend response headers can be read using the pattern
     * <code>integration.response.header.{name}</code>.</p>
     */
    inline void SetResponseParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_responseParametersHasBeenSet = true; m_responseParameters = value; }

    /**
     * <p>Represents response parameters that can be read from the backend response.
     * Response parameters are represented as a key/value map, with a destination as
     * the key and a source as the value. A destination must match an existing response
     * parameter in the <a>Method</a>. The source can be a header from the backend
     * response, or a static value. Static values are specified using enclosing single
     * quotes, and backend response headers can be read using the pattern
     * <code>integration.response.header.{name}</code>.</p>
     */
    inline PutIntegrationResponseRequest& WithResponseParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetResponseParameters(value); return *this;}

    /**
     * <p>Represents response parameters that can be read from the backend response.
     * Response parameters are represented as a key/value map, with a destination as
     * the key and a source as the value. A destination must match an existing response
     * parameter in the <a>Method</a>. The source can be a header from the backend
     * response, or a static value. Static values are specified using enclosing single
     * quotes, and backend response headers can be read using the pattern
     * <code>integration.response.header.{name}</code>.</p>
     */
    inline PutIntegrationResponseRequest& WithResponseParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetResponseParameters(value); return *this;}

    /**
     * <p>Represents response parameters that can be read from the backend response.
     * Response parameters are represented as a key/value map, with a destination as
     * the key and a source as the value. A destination must match an existing response
     * parameter in the <a>Method</a>. The source can be a header from the backend
     * response, or a static value. Static values are specified using enclosing single
     * quotes, and backend response headers can be read using the pattern
     * <code>integration.response.header.{name}</code>.</p>
     */
    inline PutIntegrationResponseRequest& AddResponseParameters(const Aws::String& key, const Aws::String& value) { m_responseParametersHasBeenSet = true; m_responseParameters[key] = value; return *this; }

    /**
     * <p>Represents response parameters that can be read from the backend response.
     * Response parameters are represented as a key/value map, with a destination as
     * the key and a source as the value. A destination must match an existing response
     * parameter in the <a>Method</a>. The source can be a header from the backend
     * response, or a static value. Static values are specified using enclosing single
     * quotes, and backend response headers can be read using the pattern
     * <code>integration.response.header.{name}</code>.</p>
     */
    inline PutIntegrationResponseRequest& AddResponseParameters(Aws::String&& key, const Aws::String& value) { m_responseParametersHasBeenSet = true; m_responseParameters[key] = value; return *this; }

    /**
     * <p>Represents response parameters that can be read from the backend response.
     * Response parameters are represented as a key/value map, with a destination as
     * the key and a source as the value. A destination must match an existing response
     * parameter in the <a>Method</a>. The source can be a header from the backend
     * response, or a static value. Static values are specified using enclosing single
     * quotes, and backend response headers can be read using the pattern
     * <code>integration.response.header.{name}</code>.</p>
     */
    inline PutIntegrationResponseRequest& AddResponseParameters(const Aws::String& key, Aws::String&& value) { m_responseParametersHasBeenSet = true; m_responseParameters[key] = value; return *this; }

    /**
     * <p>Represents response parameters that can be read from the backend response.
     * Response parameters are represented as a key/value map, with a destination as
     * the key and a source as the value. A destination must match an existing response
     * parameter in the <a>Method</a>. The source can be a header from the backend
     * response, or a static value. Static values are specified using enclosing single
     * quotes, and backend response headers can be read using the pattern
     * <code>integration.response.header.{name}</code>.</p>
     */
    inline PutIntegrationResponseRequest& AddResponseParameters(Aws::String&& key, Aws::String&& value) { m_responseParametersHasBeenSet = true; m_responseParameters[key] = value; return *this; }

    /**
     * <p>Represents response parameters that can be read from the backend response.
     * Response parameters are represented as a key/value map, with a destination as
     * the key and a source as the value. A destination must match an existing response
     * parameter in the <a>Method</a>. The source can be a header from the backend
     * response, or a static value. Static values are specified using enclosing single
     * quotes, and backend response headers can be read using the pattern
     * <code>integration.response.header.{name}</code>.</p>
     */
    inline PutIntegrationResponseRequest& AddResponseParameters(const char* key, Aws::String&& value) { m_responseParametersHasBeenSet = true; m_responseParameters[key] = value; return *this; }

    /**
     * <p>Represents response parameters that can be read from the backend response.
     * Response parameters are represented as a key/value map, with a destination as
     * the key and a source as the value. A destination must match an existing response
     * parameter in the <a>Method</a>. The source can be a header from the backend
     * response, or a static value. Static values are specified using enclosing single
     * quotes, and backend response headers can be read using the pattern
     * <code>integration.response.header.{name}</code>.</p>
     */
    inline PutIntegrationResponseRequest& AddResponseParameters(Aws::String&& key, const char* value) { m_responseParametersHasBeenSet = true; m_responseParameters[key] = value; return *this; }

    /**
     * <p>Represents response parameters that can be read from the backend response.
     * Response parameters are represented as a key/value map, with a destination as
     * the key and a source as the value. A destination must match an existing response
     * parameter in the <a>Method</a>. The source can be a header from the backend
     * response, or a static value. Static values are specified using enclosing single
     * quotes, and backend response headers can be read using the pattern
     * <code>integration.response.header.{name}</code>.</p>
     */
    inline PutIntegrationResponseRequest& AddResponseParameters(const char* key, const char* value) { m_responseParametersHasBeenSet = true; m_responseParameters[key] = value; return *this; }

    /**
     * <p>Specifies a put integration response's templates.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseTemplates() const{ return m_responseTemplates; }

    /**
     * <p>Specifies a put integration response's templates.</p>
     */
    inline void SetResponseTemplates(const Aws::Map<Aws::String, Aws::String>& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates = value; }

    /**
     * <p>Specifies a put integration response's templates.</p>
     */
    inline void SetResponseTemplates(Aws::Map<Aws::String, Aws::String>&& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates = value; }

    /**
     * <p>Specifies a put integration response's templates.</p>
     */
    inline PutIntegrationResponseRequest& WithResponseTemplates(const Aws::Map<Aws::String, Aws::String>& value) { SetResponseTemplates(value); return *this;}

    /**
     * <p>Specifies a put integration response's templates.</p>
     */
    inline PutIntegrationResponseRequest& WithResponseTemplates(Aws::Map<Aws::String, Aws::String>&& value) { SetResponseTemplates(value); return *this;}

    /**
     * <p>Specifies a put integration response's templates.</p>
     */
    inline PutIntegrationResponseRequest& AddResponseTemplates(const Aws::String& key, const Aws::String& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates[key] = value; return *this; }

    /**
     * <p>Specifies a put integration response's templates.</p>
     */
    inline PutIntegrationResponseRequest& AddResponseTemplates(Aws::String&& key, const Aws::String& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates[key] = value; return *this; }

    /**
     * <p>Specifies a put integration response's templates.</p>
     */
    inline PutIntegrationResponseRequest& AddResponseTemplates(const Aws::String& key, Aws::String&& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates[key] = value; return *this; }

    /**
     * <p>Specifies a put integration response's templates.</p>
     */
    inline PutIntegrationResponseRequest& AddResponseTemplates(Aws::String&& key, Aws::String&& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates[key] = value; return *this; }

    /**
     * <p>Specifies a put integration response's templates.</p>
     */
    inline PutIntegrationResponseRequest& AddResponseTemplates(const char* key, Aws::String&& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates[key] = value; return *this; }

    /**
     * <p>Specifies a put integration response's templates.</p>
     */
    inline PutIntegrationResponseRequest& AddResponseTemplates(Aws::String&& key, const char* value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates[key] = value; return *this; }

    /**
     * <p>Specifies a put integration response's templates.</p>
     */
    inline PutIntegrationResponseRequest& AddResponseTemplates(const char* key, const char* value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates[key] = value; return *this; }

  private:
    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;
    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;
    Aws::String m_httpMethod;
    bool m_httpMethodHasBeenSet;
    Aws::String m_statusCode;
    bool m_statusCodeHasBeenSet;
    Aws::String m_selectionPattern;
    bool m_selectionPatternHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_responseParameters;
    bool m_responseParametersHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_responseTemplates;
    bool m_responseTemplatesHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
