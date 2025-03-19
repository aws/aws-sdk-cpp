/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/apigateway/model/ContentHandlingStrategy.h>
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Represents a put integration response request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/PutIntegrationResponseRequest">AWS
   * API Reference</a></p>
   */
  class PutIntegrationResponseRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API PutIntegrationResponseRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutIntegrationResponse"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline const Aws::String& GetRestApiId() const { return m_restApiId; }
    inline bool RestApiIdHasBeenSet() const { return m_restApiIdHasBeenSet; }
    template<typename RestApiIdT = Aws::String>
    void SetRestApiId(RestApiIdT&& value) { m_restApiIdHasBeenSet = true; m_restApiId = std::forward<RestApiIdT>(value); }
    template<typename RestApiIdT = Aws::String>
    PutIntegrationResponseRequest& WithRestApiId(RestApiIdT&& value) { SetRestApiId(std::forward<RestApiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a put integration response request's resource identifier.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    PutIntegrationResponseRequest& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a put integration response request's HTTP method.</p>
     */
    inline const Aws::String& GetHttpMethod() const { return m_httpMethod; }
    inline bool HttpMethodHasBeenSet() const { return m_httpMethodHasBeenSet; }
    template<typename HttpMethodT = Aws::String>
    void SetHttpMethod(HttpMethodT&& value) { m_httpMethodHasBeenSet = true; m_httpMethod = std::forward<HttpMethodT>(value); }
    template<typename HttpMethodT = Aws::String>
    PutIntegrationResponseRequest& WithHttpMethod(HttpMethodT&& value) { SetHttpMethod(std::forward<HttpMethodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the status code that is used to map the integration response to an
     * existing MethodResponse.</p>
     */
    inline const Aws::String& GetStatusCode() const { return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    template<typename StatusCodeT = Aws::String>
    void SetStatusCode(StatusCodeT&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::forward<StatusCodeT>(value); }
    template<typename StatusCodeT = Aws::String>
    PutIntegrationResponseRequest& WithStatusCode(StatusCodeT&& value) { SetStatusCode(std::forward<StatusCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the selection pattern of a put integration response.</p>
     */
    inline const Aws::String& GetSelectionPattern() const { return m_selectionPattern; }
    inline bool SelectionPatternHasBeenSet() const { return m_selectionPatternHasBeenSet; }
    template<typename SelectionPatternT = Aws::String>
    void SetSelectionPattern(SelectionPatternT&& value) { m_selectionPatternHasBeenSet = true; m_selectionPattern = std::forward<SelectionPatternT>(value); }
    template<typename SelectionPatternT = Aws::String>
    PutIntegrationResponseRequest& WithSelectionPattern(SelectionPatternT&& value) { SetSelectionPattern(std::forward<SelectionPatternT>(value)); return *this;}
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
     * <code>name</code> must be a valid and unique response header name and
     * <code>JSON-expression</code> a valid JSON expression without the <code>$</code>
     * prefix.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseParameters() const { return m_responseParameters; }
    inline bool ResponseParametersHasBeenSet() const { return m_responseParametersHasBeenSet; }
    template<typename ResponseParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetResponseParameters(ResponseParametersT&& value) { m_responseParametersHasBeenSet = true; m_responseParameters = std::forward<ResponseParametersT>(value); }
    template<typename ResponseParametersT = Aws::Map<Aws::String, Aws::String>>
    PutIntegrationResponseRequest& WithResponseParameters(ResponseParametersT&& value) { SetResponseParameters(std::forward<ResponseParametersT>(value)); return *this;}
    template<typename ResponseParametersKeyT = Aws::String, typename ResponseParametersValueT = Aws::String>
    PutIntegrationResponseRequest& AddResponseParameters(ResponseParametersKeyT&& key, ResponseParametersValueT&& value) {
      m_responseParametersHasBeenSet = true; m_responseParameters.emplace(std::forward<ResponseParametersKeyT>(key), std::forward<ResponseParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specifies a put integration response's templates.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseTemplates() const { return m_responseTemplates; }
    inline bool ResponseTemplatesHasBeenSet() const { return m_responseTemplatesHasBeenSet; }
    template<typename ResponseTemplatesT = Aws::Map<Aws::String, Aws::String>>
    void SetResponseTemplates(ResponseTemplatesT&& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates = std::forward<ResponseTemplatesT>(value); }
    template<typename ResponseTemplatesT = Aws::Map<Aws::String, Aws::String>>
    PutIntegrationResponseRequest& WithResponseTemplates(ResponseTemplatesT&& value) { SetResponseTemplates(std::forward<ResponseTemplatesT>(value)); return *this;}
    template<typename ResponseTemplatesKeyT = Aws::String, typename ResponseTemplatesValueT = Aws::String>
    PutIntegrationResponseRequest& AddResponseTemplates(ResponseTemplatesKeyT&& key, ResponseTemplatesValueT&& value) {
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
    inline bool ContentHandlingHasBeenSet() const { return m_contentHandlingHasBeenSet; }
    inline void SetContentHandling(ContentHandlingStrategy value) { m_contentHandlingHasBeenSet = true; m_contentHandling = value; }
    inline PutIntegrationResponseRequest& WithContentHandling(ContentHandlingStrategy value) { SetContentHandling(value); return *this;}
    ///@}
  private:

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_httpMethod;
    bool m_httpMethodHasBeenSet = false;

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
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
