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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>

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
   * <p>Represents an integration response. The status code must map to an existing
   * <a>MethodResponse</a>, and parameters and templates can be used to transform the
   * backend response.</p>
   */
  class AWS_APIGATEWAY_API GetIntegrationResponseResult
  {
  public:
    GetIntegrationResponseResult();
    GetIntegrationResponseResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetIntegrationResponseResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Specifies the status code that is used to map the integration response to an
     * existing <a>MethodResponse</a>.</p>
     */
    inline const Aws::String& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>Specifies the status code that is used to map the integration response to an
     * existing <a>MethodResponse</a>.</p>
     */
    inline void SetStatusCode(const Aws::String& value) { m_statusCode = value; }

    /**
     * <p>Specifies the status code that is used to map the integration response to an
     * existing <a>MethodResponse</a>.</p>
     */
    inline void SetStatusCode(Aws::String&& value) { m_statusCode = value; }

    /**
     * <p>Specifies the status code that is used to map the integration response to an
     * existing <a>MethodResponse</a>.</p>
     */
    inline void SetStatusCode(const char* value) { m_statusCode.assign(value); }

    /**
     * <p>Specifies the status code that is used to map the integration response to an
     * existing <a>MethodResponse</a>.</p>
     */
    inline GetIntegrationResponseResult& WithStatusCode(const Aws::String& value) { SetStatusCode(value); return *this;}

    /**
     * <p>Specifies the status code that is used to map the integration response to an
     * existing <a>MethodResponse</a>.</p>
     */
    inline GetIntegrationResponseResult& WithStatusCode(Aws::String&& value) { SetStatusCode(value); return *this;}

    /**
     * <p>Specifies the status code that is used to map the integration response to an
     * existing <a>MethodResponse</a>.</p>
     */
    inline GetIntegrationResponseResult& WithStatusCode(const char* value) { SetStatusCode(value); return *this;}

    /**
     * <p>Specifies the regular expression (regex) pattern used to choose an
     * integration response based on the response from the backend. If the backend is
     * an AWS Lambda function, the AWS Lambda function error header is matched. For all
     * other HTTP and AWS backends, the HTTP status code is matched.</p>
     */
    inline const Aws::String& GetSelectionPattern() const{ return m_selectionPattern; }

    /**
     * <p>Specifies the regular expression (regex) pattern used to choose an
     * integration response based on the response from the backend. If the backend is
     * an AWS Lambda function, the AWS Lambda function error header is matched. For all
     * other HTTP and AWS backends, the HTTP status code is matched.</p>
     */
    inline void SetSelectionPattern(const Aws::String& value) { m_selectionPattern = value; }

    /**
     * <p>Specifies the regular expression (regex) pattern used to choose an
     * integration response based on the response from the backend. If the backend is
     * an AWS Lambda function, the AWS Lambda function error header is matched. For all
     * other HTTP and AWS backends, the HTTP status code is matched.</p>
     */
    inline void SetSelectionPattern(Aws::String&& value) { m_selectionPattern = value; }

    /**
     * <p>Specifies the regular expression (regex) pattern used to choose an
     * integration response based on the response from the backend. If the backend is
     * an AWS Lambda function, the AWS Lambda function error header is matched. For all
     * other HTTP and AWS backends, the HTTP status code is matched.</p>
     */
    inline void SetSelectionPattern(const char* value) { m_selectionPattern.assign(value); }

    /**
     * <p>Specifies the regular expression (regex) pattern used to choose an
     * integration response based on the response from the backend. If the backend is
     * an AWS Lambda function, the AWS Lambda function error header is matched. For all
     * other HTTP and AWS backends, the HTTP status code is matched.</p>
     */
    inline GetIntegrationResponseResult& WithSelectionPattern(const Aws::String& value) { SetSelectionPattern(value); return *this;}

    /**
     * <p>Specifies the regular expression (regex) pattern used to choose an
     * integration response based on the response from the backend. If the backend is
     * an AWS Lambda function, the AWS Lambda function error header is matched. For all
     * other HTTP and AWS backends, the HTTP status code is matched.</p>
     */
    inline GetIntegrationResponseResult& WithSelectionPattern(Aws::String&& value) { SetSelectionPattern(value); return *this;}

    /**
     * <p>Specifies the regular expression (regex) pattern used to choose an
     * integration response based on the response from the backend. If the backend is
     * an AWS Lambda function, the AWS Lambda function error header is matched. For all
     * other HTTP and AWS backends, the HTTP status code is matched.</p>
     */
    inline GetIntegrationResponseResult& WithSelectionPattern(const char* value) { SetSelectionPattern(value); return *this;}

    /**
     * <p>Represents response parameters that can be read from the backend response.
     * Response parameters are represented as a key/value map, with a destination as
     * the key and a source as the value. A destination must match an existing response
     * parameter in the <a>MethodResponse</a>. The source can be a header from the
     * backend response, or a static value. Static values are specified using enclosing
     * single quotes, and backend response headers can be read using the pattern
     * <code>integration.response.header.{name}</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseParameters() const{ return m_responseParameters; }

    /**
     * <p>Represents response parameters that can be read from the backend response.
     * Response parameters are represented as a key/value map, with a destination as
     * the key and a source as the value. A destination must match an existing response
     * parameter in the <a>MethodResponse</a>. The source can be a header from the
     * backend response, or a static value. Static values are specified using enclosing
     * single quotes, and backend response headers can be read using the pattern
     * <code>integration.response.header.{name}</code>.</p>
     */
    inline void SetResponseParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_responseParameters = value; }

    /**
     * <p>Represents response parameters that can be read from the backend response.
     * Response parameters are represented as a key/value map, with a destination as
     * the key and a source as the value. A destination must match an existing response
     * parameter in the <a>MethodResponse</a>. The source can be a header from the
     * backend response, or a static value. Static values are specified using enclosing
     * single quotes, and backend response headers can be read using the pattern
     * <code>integration.response.header.{name}</code>.</p>
     */
    inline void SetResponseParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_responseParameters = value; }

    /**
     * <p>Represents response parameters that can be read from the backend response.
     * Response parameters are represented as a key/value map, with a destination as
     * the key and a source as the value. A destination must match an existing response
     * parameter in the <a>MethodResponse</a>. The source can be a header from the
     * backend response, or a static value. Static values are specified using enclosing
     * single quotes, and backend response headers can be read using the pattern
     * <code>integration.response.header.{name}</code>.</p>
     */
    inline GetIntegrationResponseResult& WithResponseParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetResponseParameters(value); return *this;}

    /**
     * <p>Represents response parameters that can be read from the backend response.
     * Response parameters are represented as a key/value map, with a destination as
     * the key and a source as the value. A destination must match an existing response
     * parameter in the <a>MethodResponse</a>. The source can be a header from the
     * backend response, or a static value. Static values are specified using enclosing
     * single quotes, and backend response headers can be read using the pattern
     * <code>integration.response.header.{name}</code>.</p>
     */
    inline GetIntegrationResponseResult& WithResponseParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetResponseParameters(value); return *this;}

    /**
     * <p>Represents response parameters that can be read from the backend response.
     * Response parameters are represented as a key/value map, with a destination as
     * the key and a source as the value. A destination must match an existing response
     * parameter in the <a>MethodResponse</a>. The source can be a header from the
     * backend response, or a static value. Static values are specified using enclosing
     * single quotes, and backend response headers can be read using the pattern
     * <code>integration.response.header.{name}</code>.</p>
     */
    inline GetIntegrationResponseResult& AddResponseParameters(const Aws::String& key, const Aws::String& value) { m_responseParameters[key] = value; return *this; }

    /**
     * <p>Represents response parameters that can be read from the backend response.
     * Response parameters are represented as a key/value map, with a destination as
     * the key and a source as the value. A destination must match an existing response
     * parameter in the <a>MethodResponse</a>. The source can be a header from the
     * backend response, or a static value. Static values are specified using enclosing
     * single quotes, and backend response headers can be read using the pattern
     * <code>integration.response.header.{name}</code>.</p>
     */
    inline GetIntegrationResponseResult& AddResponseParameters(Aws::String&& key, const Aws::String& value) { m_responseParameters[key] = value; return *this; }

    /**
     * <p>Represents response parameters that can be read from the backend response.
     * Response parameters are represented as a key/value map, with a destination as
     * the key and a source as the value. A destination must match an existing response
     * parameter in the <a>MethodResponse</a>. The source can be a header from the
     * backend response, or a static value. Static values are specified using enclosing
     * single quotes, and backend response headers can be read using the pattern
     * <code>integration.response.header.{name}</code>.</p>
     */
    inline GetIntegrationResponseResult& AddResponseParameters(const Aws::String& key, Aws::String&& value) { m_responseParameters[key] = value; return *this; }

    /**
     * <p>Represents response parameters that can be read from the backend response.
     * Response parameters are represented as a key/value map, with a destination as
     * the key and a source as the value. A destination must match an existing response
     * parameter in the <a>MethodResponse</a>. The source can be a header from the
     * backend response, or a static value. Static values are specified using enclosing
     * single quotes, and backend response headers can be read using the pattern
     * <code>integration.response.header.{name}</code>.</p>
     */
    inline GetIntegrationResponseResult& AddResponseParameters(Aws::String&& key, Aws::String&& value) { m_responseParameters[key] = value; return *this; }

    /**
     * <p>Represents response parameters that can be read from the backend response.
     * Response parameters are represented as a key/value map, with a destination as
     * the key and a source as the value. A destination must match an existing response
     * parameter in the <a>MethodResponse</a>. The source can be a header from the
     * backend response, or a static value. Static values are specified using enclosing
     * single quotes, and backend response headers can be read using the pattern
     * <code>integration.response.header.{name}</code>.</p>
     */
    inline GetIntegrationResponseResult& AddResponseParameters(const char* key, Aws::String&& value) { m_responseParameters[key] = value; return *this; }

    /**
     * <p>Represents response parameters that can be read from the backend response.
     * Response parameters are represented as a key/value map, with a destination as
     * the key and a source as the value. A destination must match an existing response
     * parameter in the <a>MethodResponse</a>. The source can be a header from the
     * backend response, or a static value. Static values are specified using enclosing
     * single quotes, and backend response headers can be read using the pattern
     * <code>integration.response.header.{name}</code>.</p>
     */
    inline GetIntegrationResponseResult& AddResponseParameters(Aws::String&& key, const char* value) { m_responseParameters[key] = value; return *this; }

    /**
     * <p>Represents response parameters that can be read from the backend response.
     * Response parameters are represented as a key/value map, with a destination as
     * the key and a source as the value. A destination must match an existing response
     * parameter in the <a>MethodResponse</a>. The source can be a header from the
     * backend response, or a static value. Static values are specified using enclosing
     * single quotes, and backend response headers can be read using the pattern
     * <code>integration.response.header.{name}</code>.</p>
     */
    inline GetIntegrationResponseResult& AddResponseParameters(const char* key, const char* value) { m_responseParameters[key] = value; return *this; }

    /**
     * <p>Specifies the templates used to transform the integration response body.
     * Response templates are represented as a key/value map, with a content-type as
     * the key and a template as the value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseTemplates() const{ return m_responseTemplates; }

    /**
     * <p>Specifies the templates used to transform the integration response body.
     * Response templates are represented as a key/value map, with a content-type as
     * the key and a template as the value.</p>
     */
    inline void SetResponseTemplates(const Aws::Map<Aws::String, Aws::String>& value) { m_responseTemplates = value; }

    /**
     * <p>Specifies the templates used to transform the integration response body.
     * Response templates are represented as a key/value map, with a content-type as
     * the key and a template as the value.</p>
     */
    inline void SetResponseTemplates(Aws::Map<Aws::String, Aws::String>&& value) { m_responseTemplates = value; }

    /**
     * <p>Specifies the templates used to transform the integration response body.
     * Response templates are represented as a key/value map, with a content-type as
     * the key and a template as the value.</p>
     */
    inline GetIntegrationResponseResult& WithResponseTemplates(const Aws::Map<Aws::String, Aws::String>& value) { SetResponseTemplates(value); return *this;}

    /**
     * <p>Specifies the templates used to transform the integration response body.
     * Response templates are represented as a key/value map, with a content-type as
     * the key and a template as the value.</p>
     */
    inline GetIntegrationResponseResult& WithResponseTemplates(Aws::Map<Aws::String, Aws::String>&& value) { SetResponseTemplates(value); return *this;}

    /**
     * <p>Specifies the templates used to transform the integration response body.
     * Response templates are represented as a key/value map, with a content-type as
     * the key and a template as the value.</p>
     */
    inline GetIntegrationResponseResult& AddResponseTemplates(const Aws::String& key, const Aws::String& value) { m_responseTemplates[key] = value; return *this; }

    /**
     * <p>Specifies the templates used to transform the integration response body.
     * Response templates are represented as a key/value map, with a content-type as
     * the key and a template as the value.</p>
     */
    inline GetIntegrationResponseResult& AddResponseTemplates(Aws::String&& key, const Aws::String& value) { m_responseTemplates[key] = value; return *this; }

    /**
     * <p>Specifies the templates used to transform the integration response body.
     * Response templates are represented as a key/value map, with a content-type as
     * the key and a template as the value.</p>
     */
    inline GetIntegrationResponseResult& AddResponseTemplates(const Aws::String& key, Aws::String&& value) { m_responseTemplates[key] = value; return *this; }

    /**
     * <p>Specifies the templates used to transform the integration response body.
     * Response templates are represented as a key/value map, with a content-type as
     * the key and a template as the value.</p>
     */
    inline GetIntegrationResponseResult& AddResponseTemplates(Aws::String&& key, Aws::String&& value) { m_responseTemplates[key] = value; return *this; }

    /**
     * <p>Specifies the templates used to transform the integration response body.
     * Response templates are represented as a key/value map, with a content-type as
     * the key and a template as the value.</p>
     */
    inline GetIntegrationResponseResult& AddResponseTemplates(const char* key, Aws::String&& value) { m_responseTemplates[key] = value; return *this; }

    /**
     * <p>Specifies the templates used to transform the integration response body.
     * Response templates are represented as a key/value map, with a content-type as
     * the key and a template as the value.</p>
     */
    inline GetIntegrationResponseResult& AddResponseTemplates(Aws::String&& key, const char* value) { m_responseTemplates[key] = value; return *this; }

    /**
     * <p>Specifies the templates used to transform the integration response body.
     * Response templates are represented as a key/value map, with a content-type as
     * the key and a template as the value.</p>
     */
    inline GetIntegrationResponseResult& AddResponseTemplates(const char* key, const char* value) { m_responseTemplates[key] = value; return *this; }

  private:
    Aws::String m_statusCode;
    Aws::String m_selectionPattern;
    Aws::Map<Aws::String, Aws::String> m_responseParameters;
    Aws::Map<Aws::String, Aws::String> m_responseTemplates;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
