﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/apigateway/model/ContentHandlingStrategy.h>
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
   * <p>Represents an integration response. The status code must map to an existing
   * MethodResponse, and parameters and templates can be used to transform the
   * back-end response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/IntegrationResponse">AWS
   * API Reference</a></p>
   */
  class UpdateIntegrationResponseResult
  {
  public:
    AWS_APIGATEWAY_API UpdateIntegrationResponseResult() = default;
    AWS_APIGATEWAY_API UpdateIntegrationResponseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API UpdateIntegrationResponseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies the status code that is used to map the integration response to an
     * existing MethodResponse.</p>
     */
    inline const Aws::String& GetStatusCode() const { return m_statusCode; }
    template<typename StatusCodeT = Aws::String>
    void SetStatusCode(StatusCodeT&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::forward<StatusCodeT>(value); }
    template<typename StatusCodeT = Aws::String>
    UpdateIntegrationResponseResult& WithStatusCode(StatusCodeT&& value) { SetStatusCode(std::forward<StatusCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the regular expression (regex) pattern used to choose an
     * integration response based on the response from the back end. For example, if
     * the success response returns nothing and the error response returns some string,
     * you could use the <code>.+</code> regex to match error response. However, make
     * sure that the error response does not contain any newline (<code>\n</code>)
     * character in such cases. If the back end is an Lambda function, the Lambda
     * function error header is matched. For all other HTTP and Amazon Web Services
     * back ends, the HTTP status code is matched.</p>
     */
    inline const Aws::String& GetSelectionPattern() const { return m_selectionPattern; }
    template<typename SelectionPatternT = Aws::String>
    void SetSelectionPattern(SelectionPatternT&& value) { m_selectionPatternHasBeenSet = true; m_selectionPattern = std::forward<SelectionPatternT>(value); }
    template<typename SelectionPatternT = Aws::String>
    UpdateIntegrationResponseResult& WithSelectionPattern(SelectionPatternT&& value) { SetSelectionPattern(std::forward<SelectionPatternT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key-value map specifying response parameters that are passed to the method
     * response from the back end. The key is a method response header parameter name
     * and the mapped value is an integration response header value, a static value
     * enclosed within a pair of single quotes, or a JSON expression from the
     * integration response body. The mapping key must match the pattern of
     * <code>method.response.header.{name}</code>, where <code>name</code> is a valid
     * and unique header name. The mapped non-static value must match the pattern of
     * <code>integration.response.header.{name}</code> or
     * <code>integration.response.body.{JSON-expression}</code>, where
     * <code>name</code> is a valid and unique response header name and
     * <code>JSON-expression</code> is a valid JSON expression without the
     * <code>$</code> prefix.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseParameters() const { return m_responseParameters; }
    template<typename ResponseParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetResponseParameters(ResponseParametersT&& value) { m_responseParametersHasBeenSet = true; m_responseParameters = std::forward<ResponseParametersT>(value); }
    template<typename ResponseParametersT = Aws::Map<Aws::String, Aws::String>>
    UpdateIntegrationResponseResult& WithResponseParameters(ResponseParametersT&& value) { SetResponseParameters(std::forward<ResponseParametersT>(value)); return *this;}
    template<typename ResponseParametersKeyT = Aws::String, typename ResponseParametersValueT = Aws::String>
    UpdateIntegrationResponseResult& AddResponseParameters(ResponseParametersKeyT&& key, ResponseParametersValueT&& value) {
      m_responseParametersHasBeenSet = true; m_responseParameters.emplace(std::forward<ResponseParametersKeyT>(key), std::forward<ResponseParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specifies the templates used to transform the integration response body.
     * Response templates are represented as a key/value map, with a content-type as
     * the key and a template as the value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseTemplates() const { return m_responseTemplates; }
    template<typename ResponseTemplatesT = Aws::Map<Aws::String, Aws::String>>
    void SetResponseTemplates(ResponseTemplatesT&& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates = std::forward<ResponseTemplatesT>(value); }
    template<typename ResponseTemplatesT = Aws::Map<Aws::String, Aws::String>>
    UpdateIntegrationResponseResult& WithResponseTemplates(ResponseTemplatesT&& value) { SetResponseTemplates(std::forward<ResponseTemplatesT>(value)); return *this;}
    template<typename ResponseTemplatesKeyT = Aws::String, typename ResponseTemplatesValueT = Aws::String>
    UpdateIntegrationResponseResult& AddResponseTemplates(ResponseTemplatesKeyT&& key, ResponseTemplatesValueT&& value) {
      m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(std::forward<ResponseTemplatesKeyT>(key), std::forward<ResponseTemplatesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specifies how to handle response payload content type conversions. Supported
     * values are <code>CONVERT_TO_BINARY</code> and <code>CONVERT_TO_TEXT</code>, with
     * the following behaviors:</p> <p>If this property is not defined, the response
     * payload will be passed through from the integration response to the method
     * response without modification.</p>
     */
    inline ContentHandlingStrategy GetContentHandling() const { return m_contentHandling; }
    inline void SetContentHandling(ContentHandlingStrategy value) { m_contentHandlingHasBeenSet = true; m_contentHandling = value; }
    inline UpdateIntegrationResponseResult& WithContentHandling(ContentHandlingStrategy value) { SetContentHandling(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateIntegrationResponseResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_statusCode;
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_selectionPattern;
    bool m_selectionPatternHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_responseParameters;
    bool m_responseParametersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_responseTemplates;
    bool m_responseTemplatesHasBeenSet = false;

    ContentHandlingStrategy m_contentHandling{ContentHandlingStrategy::NOT_SET};
    bool m_contentHandlingHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
