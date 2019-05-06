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
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/ApiGatewayV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigatewayv2/model/ContentHandlingStrategy.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace ApiGatewayV2
{
namespace Model
{

  /**
   */
  class AWS_APIGATEWAYV2_API UpdateIntegrationResponseRequest : public ApiGatewayV2Request
  {
  public:
    UpdateIntegrationResponseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateIntegrationResponse"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The API identifier.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }

    /**
     * <p>The API identifier.</p>
     */
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }

    /**
     * <p>The API identifier.</p>
     */
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }

    /**
     * <p>The API identifier.</p>
     */
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }

    /**
     * <p>The API identifier.</p>
     */
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }

    /**
     * <p>The API identifier.</p>
     */
    inline UpdateIntegrationResponseRequest& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}

    /**
     * <p>The API identifier.</p>
     */
    inline UpdateIntegrationResponseRequest& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}

    /**
     * <p>The API identifier.</p>
     */
    inline UpdateIntegrationResponseRequest& WithApiId(const char* value) { SetApiId(value); return *this;}


    /**
     * <p>Specifies how to handle response payload content type conversions. Supported

     * values are CONVERT_TO_BINARY and CONVERT_TO_TEXT, with the
 following
     * behaviors:</p><p>
 CONVERT_TO_BINARY: Converts a response payload from a
     * Base64-encoded
 string to the corresponding binary blob.</p><p>

     * CONVERT_TO_TEXT: Converts a response payload from a binary blob to a

     * Base64-encoded string.</p><p>If this property is not defined, the response
     * payload will be passed through from
 the integration response to the route
     * response or method response without
 modification.</p>
     */
    inline const ContentHandlingStrategy& GetContentHandlingStrategy() const{ return m_contentHandlingStrategy; }

    /**
     * <p>Specifies how to handle response payload content type conversions. Supported

     * values are CONVERT_TO_BINARY and CONVERT_TO_TEXT, with the
 following
     * behaviors:</p><p>
 CONVERT_TO_BINARY: Converts a response payload from a
     * Base64-encoded
 string to the corresponding binary blob.</p><p>

     * CONVERT_TO_TEXT: Converts a response payload from a binary blob to a

     * Base64-encoded string.</p><p>If this property is not defined, the response
     * payload will be passed through from
 the integration response to the route
     * response or method response without
 modification.</p>
     */
    inline bool ContentHandlingStrategyHasBeenSet() const { return m_contentHandlingStrategyHasBeenSet; }

    /**
     * <p>Specifies how to handle response payload content type conversions. Supported

     * values are CONVERT_TO_BINARY and CONVERT_TO_TEXT, with the
 following
     * behaviors:</p><p>
 CONVERT_TO_BINARY: Converts a response payload from a
     * Base64-encoded
 string to the corresponding binary blob.</p><p>

     * CONVERT_TO_TEXT: Converts a response payload from a binary blob to a

     * Base64-encoded string.</p><p>If this property is not defined, the response
     * payload will be passed through from
 the integration response to the route
     * response or method response without
 modification.</p>
     */
    inline void SetContentHandlingStrategy(const ContentHandlingStrategy& value) { m_contentHandlingStrategyHasBeenSet = true; m_contentHandlingStrategy = value; }

    /**
     * <p>Specifies how to handle response payload content type conversions. Supported

     * values are CONVERT_TO_BINARY and CONVERT_TO_TEXT, with the
 following
     * behaviors:</p><p>
 CONVERT_TO_BINARY: Converts a response payload from a
     * Base64-encoded
 string to the corresponding binary blob.</p><p>

     * CONVERT_TO_TEXT: Converts a response payload from a binary blob to a

     * Base64-encoded string.</p><p>If this property is not defined, the response
     * payload will be passed through from
 the integration response to the route
     * response or method response without
 modification.</p>
     */
    inline void SetContentHandlingStrategy(ContentHandlingStrategy&& value) { m_contentHandlingStrategyHasBeenSet = true; m_contentHandlingStrategy = std::move(value); }

    /**
     * <p>Specifies how to handle response payload content type conversions. Supported

     * values are CONVERT_TO_BINARY and CONVERT_TO_TEXT, with the
 following
     * behaviors:</p><p>
 CONVERT_TO_BINARY: Converts a response payload from a
     * Base64-encoded
 string to the corresponding binary blob.</p><p>

     * CONVERT_TO_TEXT: Converts a response payload from a binary blob to a

     * Base64-encoded string.</p><p>If this property is not defined, the response
     * payload will be passed through from
 the integration response to the route
     * response or method response without
 modification.</p>
     */
    inline UpdateIntegrationResponseRequest& WithContentHandlingStrategy(const ContentHandlingStrategy& value) { SetContentHandlingStrategy(value); return *this;}

    /**
     * <p>Specifies how to handle response payload content type conversions. Supported

     * values are CONVERT_TO_BINARY and CONVERT_TO_TEXT, with the
 following
     * behaviors:</p><p>
 CONVERT_TO_BINARY: Converts a response payload from a
     * Base64-encoded
 string to the corresponding binary blob.</p><p>

     * CONVERT_TO_TEXT: Converts a response payload from a binary blob to a

     * Base64-encoded string.</p><p>If this property is not defined, the response
     * payload will be passed through from
 the integration response to the route
     * response or method response without
 modification.</p>
     */
    inline UpdateIntegrationResponseRequest& WithContentHandlingStrategy(ContentHandlingStrategy&& value) { SetContentHandlingStrategy(std::move(value)); return *this;}


    /**
     * <p>The integration ID.</p>
     */
    inline const Aws::String& GetIntegrationId() const{ return m_integrationId; }

    /**
     * <p>The integration ID.</p>
     */
    inline bool IntegrationIdHasBeenSet() const { return m_integrationIdHasBeenSet; }

    /**
     * <p>The integration ID.</p>
     */
    inline void SetIntegrationId(const Aws::String& value) { m_integrationIdHasBeenSet = true; m_integrationId = value; }

    /**
     * <p>The integration ID.</p>
     */
    inline void SetIntegrationId(Aws::String&& value) { m_integrationIdHasBeenSet = true; m_integrationId = std::move(value); }

    /**
     * <p>The integration ID.</p>
     */
    inline void SetIntegrationId(const char* value) { m_integrationIdHasBeenSet = true; m_integrationId.assign(value); }

    /**
     * <p>The integration ID.</p>
     */
    inline UpdateIntegrationResponseRequest& WithIntegrationId(const Aws::String& value) { SetIntegrationId(value); return *this;}

    /**
     * <p>The integration ID.</p>
     */
    inline UpdateIntegrationResponseRequest& WithIntegrationId(Aws::String&& value) { SetIntegrationId(std::move(value)); return *this;}

    /**
     * <p>The integration ID.</p>
     */
    inline UpdateIntegrationResponseRequest& WithIntegrationId(const char* value) { SetIntegrationId(value); return *this;}


    /**
     * The integration response ID.
     */
    inline const Aws::String& GetIntegrationResponseId() const{ return m_integrationResponseId; }

    /**
     * The integration response ID.
     */
    inline bool IntegrationResponseIdHasBeenSet() const { return m_integrationResponseIdHasBeenSet; }

    /**
     * The integration response ID.
     */
    inline void SetIntegrationResponseId(const Aws::String& value) { m_integrationResponseIdHasBeenSet = true; m_integrationResponseId = value; }

    /**
     * The integration response ID.
     */
    inline void SetIntegrationResponseId(Aws::String&& value) { m_integrationResponseIdHasBeenSet = true; m_integrationResponseId = std::move(value); }

    /**
     * The integration response ID.
     */
    inline void SetIntegrationResponseId(const char* value) { m_integrationResponseIdHasBeenSet = true; m_integrationResponseId.assign(value); }

    /**
     * The integration response ID.
     */
    inline UpdateIntegrationResponseRequest& WithIntegrationResponseId(const Aws::String& value) { SetIntegrationResponseId(value); return *this;}

    /**
     * The integration response ID.
     */
    inline UpdateIntegrationResponseRequest& WithIntegrationResponseId(Aws::String&& value) { SetIntegrationResponseId(std::move(value)); return *this;}

    /**
     * The integration response ID.
     */
    inline UpdateIntegrationResponseRequest& WithIntegrationResponseId(const char* value) { SetIntegrationResponseId(value); return *this;}


    /**
     * <p>The integration response key.</p>
     */
    inline const Aws::String& GetIntegrationResponseKey() const{ return m_integrationResponseKey; }

    /**
     * <p>The integration response key.</p>
     */
    inline bool IntegrationResponseKeyHasBeenSet() const { return m_integrationResponseKeyHasBeenSet; }

    /**
     * <p>The integration response key.</p>
     */
    inline void SetIntegrationResponseKey(const Aws::String& value) { m_integrationResponseKeyHasBeenSet = true; m_integrationResponseKey = value; }

    /**
     * <p>The integration response key.</p>
     */
    inline void SetIntegrationResponseKey(Aws::String&& value) { m_integrationResponseKeyHasBeenSet = true; m_integrationResponseKey = std::move(value); }

    /**
     * <p>The integration response key.</p>
     */
    inline void SetIntegrationResponseKey(const char* value) { m_integrationResponseKeyHasBeenSet = true; m_integrationResponseKey.assign(value); }

    /**
     * <p>The integration response key.</p>
     */
    inline UpdateIntegrationResponseRequest& WithIntegrationResponseKey(const Aws::String& value) { SetIntegrationResponseKey(value); return *this;}

    /**
     * <p>The integration response key.</p>
     */
    inline UpdateIntegrationResponseRequest& WithIntegrationResponseKey(Aws::String&& value) { SetIntegrationResponseKey(std::move(value)); return *this;}

    /**
     * <p>The integration response key.</p>
     */
    inline UpdateIntegrationResponseRequest& WithIntegrationResponseKey(const char* value) { SetIntegrationResponseKey(value); return *this;}


    /**
     * <p>A key-value map specifying response parameters that are passed to the method

     * response from the backend. The key is a method response header parameter name
     * and the
 mapped value is an integration response header value, a static value
     * enclosed within
 a pair of single quotes, or a JSON expression from the
     * integration response body. The
 mapping key must match the pattern of

     * method.response.header.{name}
 , where name is a valid and unique header name.
     * The mapped non-static value
 must match the pattern of

     * integration.response.header.{name}
  or

     * integration.response.body.{JSON-expression}
 , where 
 {name}
  is a valid and
     * unique response header name and 
 {JSON-expression}
  is a valid JSON expression
     * without the $ prefix.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseParameters() const{ return m_responseParameters; }

    /**
     * <p>A key-value map specifying response parameters that are passed to the method

     * response from the backend. The key is a method response header parameter name
     * and the
 mapped value is an integration response header value, a static value
     * enclosed within
 a pair of single quotes, or a JSON expression from the
     * integration response body. The
 mapping key must match the pattern of

     * method.response.header.{name}
 , where name is a valid and unique header name.
     * The mapped non-static value
 must match the pattern of

     * integration.response.header.{name}
  or

     * integration.response.body.{JSON-expression}
 , where 
 {name}
  is a valid and
     * unique response header name and 
 {JSON-expression}
  is a valid JSON expression
     * without the $ prefix.</p>
     */
    inline bool ResponseParametersHasBeenSet() const { return m_responseParametersHasBeenSet; }

    /**
     * <p>A key-value map specifying response parameters that are passed to the method

     * response from the backend. The key is a method response header parameter name
     * and the
 mapped value is an integration response header value, a static value
     * enclosed within
 a pair of single quotes, or a JSON expression from the
     * integration response body. The
 mapping key must match the pattern of

     * method.response.header.{name}
 , where name is a valid and unique header name.
     * The mapped non-static value
 must match the pattern of

     * integration.response.header.{name}
  or

     * integration.response.body.{JSON-expression}
 , where 
 {name}
  is a valid and
     * unique response header name and 
 {JSON-expression}
  is a valid JSON expression
     * without the $ prefix.</p>
     */
    inline void SetResponseParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_responseParametersHasBeenSet = true; m_responseParameters = value; }

    /**
     * <p>A key-value map specifying response parameters that are passed to the method

     * response from the backend. The key is a method response header parameter name
     * and the
 mapped value is an integration response header value, a static value
     * enclosed within
 a pair of single quotes, or a JSON expression from the
     * integration response body. The
 mapping key must match the pattern of

     * method.response.header.{name}
 , where name is a valid and unique header name.
     * The mapped non-static value
 must match the pattern of

     * integration.response.header.{name}
  or

     * integration.response.body.{JSON-expression}
 , where 
 {name}
  is a valid and
     * unique response header name and 
 {JSON-expression}
  is a valid JSON expression
     * without the $ prefix.</p>
     */
    inline void SetResponseParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_responseParametersHasBeenSet = true; m_responseParameters = std::move(value); }

    /**
     * <p>A key-value map specifying response parameters that are passed to the method

     * response from the backend. The key is a method response header parameter name
     * and the
 mapped value is an integration response header value, a static value
     * enclosed within
 a pair of single quotes, or a JSON expression from the
     * integration response body. The
 mapping key must match the pattern of

     * method.response.header.{name}
 , where name is a valid and unique header name.
     * The mapped non-static value
 must match the pattern of

     * integration.response.header.{name}
  or

     * integration.response.body.{JSON-expression}
 , where 
 {name}
  is a valid and
     * unique response header name and 
 {JSON-expression}
  is a valid JSON expression
     * without the $ prefix.</p>
     */
    inline UpdateIntegrationResponseRequest& WithResponseParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetResponseParameters(value); return *this;}

    /**
     * <p>A key-value map specifying response parameters that are passed to the method

     * response from the backend. The key is a method response header parameter name
     * and the
 mapped value is an integration response header value, a static value
     * enclosed within
 a pair of single quotes, or a JSON expression from the
     * integration response body. The
 mapping key must match the pattern of

     * method.response.header.{name}
 , where name is a valid and unique header name.
     * The mapped non-static value
 must match the pattern of

     * integration.response.header.{name}
  or

     * integration.response.body.{JSON-expression}
 , where 
 {name}
  is a valid and
     * unique response header name and 
 {JSON-expression}
  is a valid JSON expression
     * without the $ prefix.</p>
     */
    inline UpdateIntegrationResponseRequest& WithResponseParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetResponseParameters(std::move(value)); return *this;}

    /**
     * <p>A key-value map specifying response parameters that are passed to the method

     * response from the backend. The key is a method response header parameter name
     * and the
 mapped value is an integration response header value, a static value
     * enclosed within
 a pair of single quotes, or a JSON expression from the
     * integration response body. The
 mapping key must match the pattern of

     * method.response.header.{name}
 , where name is a valid and unique header name.
     * The mapped non-static value
 must match the pattern of

     * integration.response.header.{name}
  or

     * integration.response.body.{JSON-expression}
 , where 
 {name}
  is a valid and
     * unique response header name and 
 {JSON-expression}
  is a valid JSON expression
     * without the $ prefix.</p>
     */
    inline UpdateIntegrationResponseRequest& AddResponseParameters(const Aws::String& key, const Aws::String& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, value); return *this; }

    /**
     * <p>A key-value map specifying response parameters that are passed to the method

     * response from the backend. The key is a method response header parameter name
     * and the
 mapped value is an integration response header value, a static value
     * enclosed within
 a pair of single quotes, or a JSON expression from the
     * integration response body. The
 mapping key must match the pattern of

     * method.response.header.{name}
 , where name is a valid and unique header name.
     * The mapped non-static value
 must match the pattern of

     * integration.response.header.{name}
  or

     * integration.response.body.{JSON-expression}
 , where 
 {name}
  is a valid and
     * unique response header name and 
 {JSON-expression}
  is a valid JSON expression
     * without the $ prefix.</p>
     */
    inline UpdateIntegrationResponseRequest& AddResponseParameters(Aws::String&& key, const Aws::String& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key-value map specifying response parameters that are passed to the method

     * response from the backend. The key is a method response header parameter name
     * and the
 mapped value is an integration response header value, a static value
     * enclosed within
 a pair of single quotes, or a JSON expression from the
     * integration response body. The
 mapping key must match the pattern of

     * method.response.header.{name}
 , where name is a valid and unique header name.
     * The mapped non-static value
 must match the pattern of

     * integration.response.header.{name}
  or

     * integration.response.body.{JSON-expression}
 , where 
 {name}
  is a valid and
     * unique response header name and 
 {JSON-expression}
  is a valid JSON expression
     * without the $ prefix.</p>
     */
    inline UpdateIntegrationResponseRequest& AddResponseParameters(const Aws::String& key, Aws::String&& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key-value map specifying response parameters that are passed to the method

     * response from the backend. The key is a method response header parameter name
     * and the
 mapped value is an integration response header value, a static value
     * enclosed within
 a pair of single quotes, or a JSON expression from the
     * integration response body. The
 mapping key must match the pattern of

     * method.response.header.{name}
 , where name is a valid and unique header name.
     * The mapped non-static value
 must match the pattern of

     * integration.response.header.{name}
  or

     * integration.response.body.{JSON-expression}
 , where 
 {name}
  is a valid and
     * unique response header name and 
 {JSON-expression}
  is a valid JSON expression
     * without the $ prefix.</p>
     */
    inline UpdateIntegrationResponseRequest& AddResponseParameters(Aws::String&& key, Aws::String&& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A key-value map specifying response parameters that are passed to the method

     * response from the backend. The key is a method response header parameter name
     * and the
 mapped value is an integration response header value, a static value
     * enclosed within
 a pair of single quotes, or a JSON expression from the
     * integration response body. The
 mapping key must match the pattern of

     * method.response.header.{name}
 , where name is a valid and unique header name.
     * The mapped non-static value
 must match the pattern of

     * integration.response.header.{name}
  or

     * integration.response.body.{JSON-expression}
 , where 
 {name}
  is a valid and
     * unique response header name and 
 {JSON-expression}
  is a valid JSON expression
     * without the $ prefix.</p>
     */
    inline UpdateIntegrationResponseRequest& AddResponseParameters(const char* key, Aws::String&& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key-value map specifying response parameters that are passed to the method

     * response from the backend. The key is a method response header parameter name
     * and the
 mapped value is an integration response header value, a static value
     * enclosed within
 a pair of single quotes, or a JSON expression from the
     * integration response body. The
 mapping key must match the pattern of

     * method.response.header.{name}
 , where name is a valid and unique header name.
     * The mapped non-static value
 must match the pattern of

     * integration.response.header.{name}
  or

     * integration.response.body.{JSON-expression}
 , where 
 {name}
  is a valid and
     * unique response header name and 
 {JSON-expression}
  is a valid JSON expression
     * without the $ prefix.</p>
     */
    inline UpdateIntegrationResponseRequest& AddResponseParameters(Aws::String&& key, const char* value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key-value map specifying response parameters that are passed to the method

     * response from the backend. The key is a method response header parameter name
     * and the
 mapped value is an integration response header value, a static value
     * enclosed within
 a pair of single quotes, or a JSON expression from the
     * integration response body. The
 mapping key must match the pattern of

     * method.response.header.{name}
 , where name is a valid and unique header name.
     * The mapped non-static value
 must match the pattern of

     * integration.response.header.{name}
  or

     * integration.response.body.{JSON-expression}
 , where 
 {name}
  is a valid and
     * unique response header name and 
 {JSON-expression}
  is a valid JSON expression
     * without the $ prefix.</p>
     */
    inline UpdateIntegrationResponseRequest& AddResponseParameters(const char* key, const char* value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, value); return *this; }


    /**
     * <p>The collection of response templates for the integration response as a

     * string-to-string map of key-value pairs. Response templates are represented as
     * a
 key/value map, with a content-type as the key and a template as the
     * value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseTemplates() const{ return m_responseTemplates; }

    /**
     * <p>The collection of response templates for the integration response as a

     * string-to-string map of key-value pairs. Response templates are represented as
     * a
 key/value map, with a content-type as the key and a template as the
     * value.</p>
     */
    inline bool ResponseTemplatesHasBeenSet() const { return m_responseTemplatesHasBeenSet; }

    /**
     * <p>The collection of response templates for the integration response as a

     * string-to-string map of key-value pairs. Response templates are represented as
     * a
 key/value map, with a content-type as the key and a template as the
     * value.</p>
     */
    inline void SetResponseTemplates(const Aws::Map<Aws::String, Aws::String>& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates = value; }

    /**
     * <p>The collection of response templates for the integration response as a

     * string-to-string map of key-value pairs. Response templates are represented as
     * a
 key/value map, with a content-type as the key and a template as the
     * value.</p>
     */
    inline void SetResponseTemplates(Aws::Map<Aws::String, Aws::String>&& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates = std::move(value); }

    /**
     * <p>The collection of response templates for the integration response as a

     * string-to-string map of key-value pairs. Response templates are represented as
     * a
 key/value map, with a content-type as the key and a template as the
     * value.</p>
     */
    inline UpdateIntegrationResponseRequest& WithResponseTemplates(const Aws::Map<Aws::String, Aws::String>& value) { SetResponseTemplates(value); return *this;}

    /**
     * <p>The collection of response templates for the integration response as a

     * string-to-string map of key-value pairs. Response templates are represented as
     * a
 key/value map, with a content-type as the key and a template as the
     * value.</p>
     */
    inline UpdateIntegrationResponseRequest& WithResponseTemplates(Aws::Map<Aws::String, Aws::String>&& value) { SetResponseTemplates(std::move(value)); return *this;}

    /**
     * <p>The collection of response templates for the integration response as a

     * string-to-string map of key-value pairs. Response templates are represented as
     * a
 key/value map, with a content-type as the key and a template as the
     * value.</p>
     */
    inline UpdateIntegrationResponseRequest& AddResponseTemplates(const Aws::String& key, const Aws::String& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(key, value); return *this; }

    /**
     * <p>The collection of response templates for the integration response as a

     * string-to-string map of key-value pairs. Response templates are represented as
     * a
 key/value map, with a content-type as the key and a template as the
     * value.</p>
     */
    inline UpdateIntegrationResponseRequest& AddResponseTemplates(Aws::String&& key, const Aws::String& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(std::move(key), value); return *this; }

    /**
     * <p>The collection of response templates for the integration response as a

     * string-to-string map of key-value pairs. Response templates are represented as
     * a
 key/value map, with a content-type as the key and a template as the
     * value.</p>
     */
    inline UpdateIntegrationResponseRequest& AddResponseTemplates(const Aws::String& key, Aws::String&& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The collection of response templates for the integration response as a

     * string-to-string map of key-value pairs. Response templates are represented as
     * a
 key/value map, with a content-type as the key and a template as the
     * value.</p>
     */
    inline UpdateIntegrationResponseRequest& AddResponseTemplates(Aws::String&& key, Aws::String&& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The collection of response templates for the integration response as a

     * string-to-string map of key-value pairs. Response templates are represented as
     * a
 key/value map, with a content-type as the key and a template as the
     * value.</p>
     */
    inline UpdateIntegrationResponseRequest& AddResponseTemplates(const char* key, Aws::String&& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The collection of response templates for the integration response as a

     * string-to-string map of key-value pairs. Response templates are represented as
     * a
 key/value map, with a content-type as the key and a template as the
     * value.</p>
     */
    inline UpdateIntegrationResponseRequest& AddResponseTemplates(Aws::String&& key, const char* value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(std::move(key), value); return *this; }

    /**
     * <p>The collection of response templates for the integration response as a

     * string-to-string map of key-value pairs. Response templates are represented as
     * a
 key/value map, with a content-type as the key and a template as the
     * value.</p>
     */
    inline UpdateIntegrationResponseRequest& AddResponseTemplates(const char* key, const char* value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(key, value); return *this; }


    /**
     * <p>The template selection expression for the integration response.</p>
     */
    inline const Aws::String& GetTemplateSelectionExpression() const{ return m_templateSelectionExpression; }

    /**
     * <p>The template selection expression for the integration response.</p>
     */
    inline bool TemplateSelectionExpressionHasBeenSet() const { return m_templateSelectionExpressionHasBeenSet; }

    /**
     * <p>The template selection expression for the integration response.</p>
     */
    inline void SetTemplateSelectionExpression(const Aws::String& value) { m_templateSelectionExpressionHasBeenSet = true; m_templateSelectionExpression = value; }

    /**
     * <p>The template selection expression for the integration response.</p>
     */
    inline void SetTemplateSelectionExpression(Aws::String&& value) { m_templateSelectionExpressionHasBeenSet = true; m_templateSelectionExpression = std::move(value); }

    /**
     * <p>The template selection expression for the integration response.</p>
     */
    inline void SetTemplateSelectionExpression(const char* value) { m_templateSelectionExpressionHasBeenSet = true; m_templateSelectionExpression.assign(value); }

    /**
     * <p>The template selection expression for the integration response.</p>
     */
    inline UpdateIntegrationResponseRequest& WithTemplateSelectionExpression(const Aws::String& value) { SetTemplateSelectionExpression(value); return *this;}

    /**
     * <p>The template selection expression for the integration response.</p>
     */
    inline UpdateIntegrationResponseRequest& WithTemplateSelectionExpression(Aws::String&& value) { SetTemplateSelectionExpression(std::move(value)); return *this;}

    /**
     * <p>The template selection expression for the integration response.</p>
     */
    inline UpdateIntegrationResponseRequest& WithTemplateSelectionExpression(const char* value) { SetTemplateSelectionExpression(value); return *this;}

  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet;

    ContentHandlingStrategy m_contentHandlingStrategy;
    bool m_contentHandlingStrategyHasBeenSet;

    Aws::String m_integrationId;
    bool m_integrationIdHasBeenSet;

    Aws::String m_integrationResponseId;
    bool m_integrationResponseIdHasBeenSet;

    Aws::String m_integrationResponseKey;
    bool m_integrationResponseKeyHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_responseParameters;
    bool m_responseParametersHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_responseTemplates;
    bool m_responseTemplatesHasBeenSet;

    Aws::String m_templateSelectionExpression;
    bool m_templateSelectionExpressionHasBeenSet;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
