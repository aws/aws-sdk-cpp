/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  class AWS_APIGATEWAY_API PutIntegrationResponseRequest : public APIGatewayRequest
  {
  public:
    PutIntegrationResponseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutIntegrationResponse"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline bool RestApiIdHasBeenSet() const { return m_restApiIdHasBeenSet; }

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = std::move(value); }

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline PutIntegrationResponseRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline PutIntegrationResponseRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(std::move(value)); return *this;}

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline PutIntegrationResponseRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}


    /**
     * <p>[Required] Specifies a put integration response request's resource
     * identifier.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>[Required] Specifies a put integration response request's resource
     * identifier.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>[Required] Specifies a put integration response request's resource
     * identifier.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>[Required] Specifies a put integration response request's resource
     * identifier.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>[Required] Specifies a put integration response request's resource
     * identifier.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>[Required] Specifies a put integration response request's resource
     * identifier.</p>
     */
    inline PutIntegrationResponseRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>[Required] Specifies a put integration response request's resource
     * identifier.</p>
     */
    inline PutIntegrationResponseRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>[Required] Specifies a put integration response request's resource
     * identifier.</p>
     */
    inline PutIntegrationResponseRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>[Required] Specifies a put integration response request's HTTP method.</p>
     */
    inline const Aws::String& GetHttpMethod() const{ return m_httpMethod; }

    /**
     * <p>[Required] Specifies a put integration response request's HTTP method.</p>
     */
    inline bool HttpMethodHasBeenSet() const { return m_httpMethodHasBeenSet; }

    /**
     * <p>[Required] Specifies a put integration response request's HTTP method.</p>
     */
    inline void SetHttpMethod(const Aws::String& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }

    /**
     * <p>[Required] Specifies a put integration response request's HTTP method.</p>
     */
    inline void SetHttpMethod(Aws::String&& value) { m_httpMethodHasBeenSet = true; m_httpMethod = std::move(value); }

    /**
     * <p>[Required] Specifies a put integration response request's HTTP method.</p>
     */
    inline void SetHttpMethod(const char* value) { m_httpMethodHasBeenSet = true; m_httpMethod.assign(value); }

    /**
     * <p>[Required] Specifies a put integration response request's HTTP method.</p>
     */
    inline PutIntegrationResponseRequest& WithHttpMethod(const Aws::String& value) { SetHttpMethod(value); return *this;}

    /**
     * <p>[Required] Specifies a put integration response request's HTTP method.</p>
     */
    inline PutIntegrationResponseRequest& WithHttpMethod(Aws::String&& value) { SetHttpMethod(std::move(value)); return *this;}

    /**
     * <p>[Required] Specifies a put integration response request's HTTP method.</p>
     */
    inline PutIntegrationResponseRequest& WithHttpMethod(const char* value) { SetHttpMethod(value); return *this;}


    /**
     * <p>[Required] Specifies the status code that is used to map the integration
     * response to an existing <a>MethodResponse</a>.</p>
     */
    inline const Aws::String& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>[Required] Specifies the status code that is used to map the integration
     * response to an existing <a>MethodResponse</a>.</p>
     */
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }

    /**
     * <p>[Required] Specifies the status code that is used to map the integration
     * response to an existing <a>MethodResponse</a>.</p>
     */
    inline void SetStatusCode(const Aws::String& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>[Required] Specifies the status code that is used to map the integration
     * response to an existing <a>MethodResponse</a>.</p>
     */
    inline void SetStatusCode(Aws::String&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }

    /**
     * <p>[Required] Specifies the status code that is used to map the integration
     * response to an existing <a>MethodResponse</a>.</p>
     */
    inline void SetStatusCode(const char* value) { m_statusCodeHasBeenSet = true; m_statusCode.assign(value); }

    /**
     * <p>[Required] Specifies the status code that is used to map the integration
     * response to an existing <a>MethodResponse</a>.</p>
     */
    inline PutIntegrationResponseRequest& WithStatusCode(const Aws::String& value) { SetStatusCode(value); return *this;}

    /**
     * <p>[Required] Specifies the status code that is used to map the integration
     * response to an existing <a>MethodResponse</a>.</p>
     */
    inline PutIntegrationResponseRequest& WithStatusCode(Aws::String&& value) { SetStatusCode(std::move(value)); return *this;}

    /**
     * <p>[Required] Specifies the status code that is used to map the integration
     * response to an existing <a>MethodResponse</a>.</p>
     */
    inline PutIntegrationResponseRequest& WithStatusCode(const char* value) { SetStatusCode(value); return *this;}


    /**
     * <p>Specifies the selection pattern of a put integration response.</p>
     */
    inline const Aws::String& GetSelectionPattern() const{ return m_selectionPattern; }

    /**
     * <p>Specifies the selection pattern of a put integration response.</p>
     */
    inline bool SelectionPatternHasBeenSet() const { return m_selectionPatternHasBeenSet; }

    /**
     * <p>Specifies the selection pattern of a put integration response.</p>
     */
    inline void SetSelectionPattern(const Aws::String& value) { m_selectionPatternHasBeenSet = true; m_selectionPattern = value; }

    /**
     * <p>Specifies the selection pattern of a put integration response.</p>
     */
    inline void SetSelectionPattern(Aws::String&& value) { m_selectionPatternHasBeenSet = true; m_selectionPattern = std::move(value); }

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
    inline PutIntegrationResponseRequest& WithSelectionPattern(Aws::String&& value) { SetSelectionPattern(std::move(value)); return *this;}

    /**
     * <p>Specifies the selection pattern of a put integration response.</p>
     */
    inline PutIntegrationResponseRequest& WithSelectionPattern(const char* value) { SetSelectionPattern(value); return *this;}


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
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseParameters() const{ return m_responseParameters; }

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
    inline bool ResponseParametersHasBeenSet() const { return m_responseParametersHasBeenSet; }

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
    inline void SetResponseParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_responseParametersHasBeenSet = true; m_responseParameters = value; }

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
    inline void SetResponseParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_responseParametersHasBeenSet = true; m_responseParameters = std::move(value); }

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
    inline PutIntegrationResponseRequest& WithResponseParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetResponseParameters(value); return *this;}

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
    inline PutIntegrationResponseRequest& WithResponseParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetResponseParameters(std::move(value)); return *this;}

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
    inline PutIntegrationResponseRequest& AddResponseParameters(const Aws::String& key, const Aws::String& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, value); return *this; }

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
    inline PutIntegrationResponseRequest& AddResponseParameters(Aws::String&& key, const Aws::String& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(std::move(key), value); return *this; }

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
    inline PutIntegrationResponseRequest& AddResponseParameters(const Aws::String& key, Aws::String&& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, std::move(value)); return *this; }

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
    inline PutIntegrationResponseRequest& AddResponseParameters(Aws::String&& key, Aws::String&& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(std::move(key), std::move(value)); return *this; }

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
    inline PutIntegrationResponseRequest& AddResponseParameters(const char* key, Aws::String&& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, std::move(value)); return *this; }

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
    inline PutIntegrationResponseRequest& AddResponseParameters(Aws::String&& key, const char* value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(std::move(key), value); return *this; }

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
    inline PutIntegrationResponseRequest& AddResponseParameters(const char* key, const char* value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, value); return *this; }


    /**
     * <p>Specifies a put integration response's templates.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseTemplates() const{ return m_responseTemplates; }

    /**
     * <p>Specifies a put integration response's templates.</p>
     */
    inline bool ResponseTemplatesHasBeenSet() const { return m_responseTemplatesHasBeenSet; }

    /**
     * <p>Specifies a put integration response's templates.</p>
     */
    inline void SetResponseTemplates(const Aws::Map<Aws::String, Aws::String>& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates = value; }

    /**
     * <p>Specifies a put integration response's templates.</p>
     */
    inline void SetResponseTemplates(Aws::Map<Aws::String, Aws::String>&& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates = std::move(value); }

    /**
     * <p>Specifies a put integration response's templates.</p>
     */
    inline PutIntegrationResponseRequest& WithResponseTemplates(const Aws::Map<Aws::String, Aws::String>& value) { SetResponseTemplates(value); return *this;}

    /**
     * <p>Specifies a put integration response's templates.</p>
     */
    inline PutIntegrationResponseRequest& WithResponseTemplates(Aws::Map<Aws::String, Aws::String>&& value) { SetResponseTemplates(std::move(value)); return *this;}

    /**
     * <p>Specifies a put integration response's templates.</p>
     */
    inline PutIntegrationResponseRequest& AddResponseTemplates(const Aws::String& key, const Aws::String& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(key, value); return *this; }

    /**
     * <p>Specifies a put integration response's templates.</p>
     */
    inline PutIntegrationResponseRequest& AddResponseTemplates(Aws::String&& key, const Aws::String& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies a put integration response's templates.</p>
     */
    inline PutIntegrationResponseRequest& AddResponseTemplates(const Aws::String& key, Aws::String&& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies a put integration response's templates.</p>
     */
    inline PutIntegrationResponseRequest& AddResponseTemplates(Aws::String&& key, Aws::String&& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specifies a put integration response's templates.</p>
     */
    inline PutIntegrationResponseRequest& AddResponseTemplates(const char* key, Aws::String&& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies a put integration response's templates.</p>
     */
    inline PutIntegrationResponseRequest& AddResponseTemplates(Aws::String&& key, const char* value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies a put integration response's templates.</p>
     */
    inline PutIntegrationResponseRequest& AddResponseTemplates(const char* key, const char* value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(key, value); return *this; }


    /**
     * <p>Specifies how to handle response payload content type conversions. Supported
     * values are <code>CONVERT_TO_BINARY</code> and <code>CONVERT_TO_TEXT</code>, with
     * the following behaviors:</p> <ul> <li><p><code>CONVERT_TO_BINARY</code>:
     * Converts a response payload from a Base64-encoded string to the corresponding
     * binary blob.</p></li> <li><p><code>CONVERT_TO_TEXT</code>: Converts a response
     * payload from a binary blob to a Base64-encoded string.</p></li> </ul> <p>If this
     * property is not defined, the response payload will be passed through from the
     * integration response to the method response without modification.</p>
     */
    inline const ContentHandlingStrategy& GetContentHandling() const{ return m_contentHandling; }

    /**
     * <p>Specifies how to handle response payload content type conversions. Supported
     * values are <code>CONVERT_TO_BINARY</code> and <code>CONVERT_TO_TEXT</code>, with
     * the following behaviors:</p> <ul> <li><p><code>CONVERT_TO_BINARY</code>:
     * Converts a response payload from a Base64-encoded string to the corresponding
     * binary blob.</p></li> <li><p><code>CONVERT_TO_TEXT</code>: Converts a response
     * payload from a binary blob to a Base64-encoded string.</p></li> </ul> <p>If this
     * property is not defined, the response payload will be passed through from the
     * integration response to the method response without modification.</p>
     */
    inline bool ContentHandlingHasBeenSet() const { return m_contentHandlingHasBeenSet; }

    /**
     * <p>Specifies how to handle response payload content type conversions. Supported
     * values are <code>CONVERT_TO_BINARY</code> and <code>CONVERT_TO_TEXT</code>, with
     * the following behaviors:</p> <ul> <li><p><code>CONVERT_TO_BINARY</code>:
     * Converts a response payload from a Base64-encoded string to the corresponding
     * binary blob.</p></li> <li><p><code>CONVERT_TO_TEXT</code>: Converts a response
     * payload from a binary blob to a Base64-encoded string.</p></li> </ul> <p>If this
     * property is not defined, the response payload will be passed through from the
     * integration response to the method response without modification.</p>
     */
    inline void SetContentHandling(const ContentHandlingStrategy& value) { m_contentHandlingHasBeenSet = true; m_contentHandling = value; }

    /**
     * <p>Specifies how to handle response payload content type conversions. Supported
     * values are <code>CONVERT_TO_BINARY</code> and <code>CONVERT_TO_TEXT</code>, with
     * the following behaviors:</p> <ul> <li><p><code>CONVERT_TO_BINARY</code>:
     * Converts a response payload from a Base64-encoded string to the corresponding
     * binary blob.</p></li> <li><p><code>CONVERT_TO_TEXT</code>: Converts a response
     * payload from a binary blob to a Base64-encoded string.</p></li> </ul> <p>If this
     * property is not defined, the response payload will be passed through from the
     * integration response to the method response without modification.</p>
     */
    inline void SetContentHandling(ContentHandlingStrategy&& value) { m_contentHandlingHasBeenSet = true; m_contentHandling = std::move(value); }

    /**
     * <p>Specifies how to handle response payload content type conversions. Supported
     * values are <code>CONVERT_TO_BINARY</code> and <code>CONVERT_TO_TEXT</code>, with
     * the following behaviors:</p> <ul> <li><p><code>CONVERT_TO_BINARY</code>:
     * Converts a response payload from a Base64-encoded string to the corresponding
     * binary blob.</p></li> <li><p><code>CONVERT_TO_TEXT</code>: Converts a response
     * payload from a binary blob to a Base64-encoded string.</p></li> </ul> <p>If this
     * property is not defined, the response payload will be passed through from the
     * integration response to the method response without modification.</p>
     */
    inline PutIntegrationResponseRequest& WithContentHandling(const ContentHandlingStrategy& value) { SetContentHandling(value); return *this;}

    /**
     * <p>Specifies how to handle response payload content type conversions. Supported
     * values are <code>CONVERT_TO_BINARY</code> and <code>CONVERT_TO_TEXT</code>, with
     * the following behaviors:</p> <ul> <li><p><code>CONVERT_TO_BINARY</code>:
     * Converts a response payload from a Base64-encoded string to the corresponding
     * binary blob.</p></li> <li><p><code>CONVERT_TO_TEXT</code>: Converts a response
     * payload from a binary blob to a Base64-encoded string.</p></li> </ul> <p>If this
     * property is not defined, the response payload will be passed through from the
     * integration response to the method response without modification.</p>
     */
    inline PutIntegrationResponseRequest& WithContentHandling(ContentHandlingStrategy&& value) { SetContentHandling(std::move(value)); return *this;}

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

    ContentHandlingStrategy m_contentHandling;
    bool m_contentHandlingHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
