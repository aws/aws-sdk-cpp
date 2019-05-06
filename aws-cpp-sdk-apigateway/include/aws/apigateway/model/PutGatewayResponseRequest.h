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
#include <aws/apigateway/model/GatewayResponseType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Creates a customization of a <a>GatewayResponse</a> of a specified response
   * type and status code on the given <a>RestApi</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/PutGatewayResponseRequest">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API PutGatewayResponseRequest : public APIGatewayRequest
  {
  public:
    PutGatewayResponseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutGatewayResponse"; }

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
    inline PutGatewayResponseRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline PutGatewayResponseRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(std::move(value)); return *this;}

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline PutGatewayResponseRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}


    /**
     * <p>[Required] <p>The response type of the associated <a>GatewayResponse</a>.
     * Valid values are
     * <ul><li>ACCESS_DENIED</li><li>API_CONFIGURATION_ERROR</li><li>AUTHORIZER_FAILURE</li><li>
     * AUTHORIZER_CONFIGURATION_ERROR</li><li>BAD_REQUEST_PARAMETERS</li><li>BAD_REQUEST_BODY</li><li>DEFAULT_4XX</li><li>DEFAULT_5XX</li><li>EXPIRED_TOKEN</li><li>INVALID_SIGNATURE</li><li>INTEGRATION_FAILURE</li><li>INTEGRATION_TIMEOUT</li><li>INVALID_API_KEY</li><li>MISSING_AUTHENTICATION_TOKEN</li><li>
     * QUOTA_EXCEEDED</li><li>REQUEST_TOO_LARGE</li><li>RESOURCE_NOT_FOUND</li><li>THROTTLED</li><li>UNAUTHORIZED</li><li>UNSUPPORTED_MEDIA_TYPE</li></ul>
     * </p></p>
     */
    inline const GatewayResponseType& GetResponseType() const{ return m_responseType; }

    /**
     * <p>[Required] <p>The response type of the associated <a>GatewayResponse</a>.
     * Valid values are
     * <ul><li>ACCESS_DENIED</li><li>API_CONFIGURATION_ERROR</li><li>AUTHORIZER_FAILURE</li><li>
     * AUTHORIZER_CONFIGURATION_ERROR</li><li>BAD_REQUEST_PARAMETERS</li><li>BAD_REQUEST_BODY</li><li>DEFAULT_4XX</li><li>DEFAULT_5XX</li><li>EXPIRED_TOKEN</li><li>INVALID_SIGNATURE</li><li>INTEGRATION_FAILURE</li><li>INTEGRATION_TIMEOUT</li><li>INVALID_API_KEY</li><li>MISSING_AUTHENTICATION_TOKEN</li><li>
     * QUOTA_EXCEEDED</li><li>REQUEST_TOO_LARGE</li><li>RESOURCE_NOT_FOUND</li><li>THROTTLED</li><li>UNAUTHORIZED</li><li>UNSUPPORTED_MEDIA_TYPE</li></ul>
     * </p></p>
     */
    inline bool ResponseTypeHasBeenSet() const { return m_responseTypeHasBeenSet; }

    /**
     * <p>[Required] <p>The response type of the associated <a>GatewayResponse</a>.
     * Valid values are
     * <ul><li>ACCESS_DENIED</li><li>API_CONFIGURATION_ERROR</li><li>AUTHORIZER_FAILURE</li><li>
     * AUTHORIZER_CONFIGURATION_ERROR</li><li>BAD_REQUEST_PARAMETERS</li><li>BAD_REQUEST_BODY</li><li>DEFAULT_4XX</li><li>DEFAULT_5XX</li><li>EXPIRED_TOKEN</li><li>INVALID_SIGNATURE</li><li>INTEGRATION_FAILURE</li><li>INTEGRATION_TIMEOUT</li><li>INVALID_API_KEY</li><li>MISSING_AUTHENTICATION_TOKEN</li><li>
     * QUOTA_EXCEEDED</li><li>REQUEST_TOO_LARGE</li><li>RESOURCE_NOT_FOUND</li><li>THROTTLED</li><li>UNAUTHORIZED</li><li>UNSUPPORTED_MEDIA_TYPE</li></ul>
     * </p></p>
     */
    inline void SetResponseType(const GatewayResponseType& value) { m_responseTypeHasBeenSet = true; m_responseType = value; }

    /**
     * <p>[Required] <p>The response type of the associated <a>GatewayResponse</a>.
     * Valid values are
     * <ul><li>ACCESS_DENIED</li><li>API_CONFIGURATION_ERROR</li><li>AUTHORIZER_FAILURE</li><li>
     * AUTHORIZER_CONFIGURATION_ERROR</li><li>BAD_REQUEST_PARAMETERS</li><li>BAD_REQUEST_BODY</li><li>DEFAULT_4XX</li><li>DEFAULT_5XX</li><li>EXPIRED_TOKEN</li><li>INVALID_SIGNATURE</li><li>INTEGRATION_FAILURE</li><li>INTEGRATION_TIMEOUT</li><li>INVALID_API_KEY</li><li>MISSING_AUTHENTICATION_TOKEN</li><li>
     * QUOTA_EXCEEDED</li><li>REQUEST_TOO_LARGE</li><li>RESOURCE_NOT_FOUND</li><li>THROTTLED</li><li>UNAUTHORIZED</li><li>UNSUPPORTED_MEDIA_TYPE</li></ul>
     * </p></p>
     */
    inline void SetResponseType(GatewayResponseType&& value) { m_responseTypeHasBeenSet = true; m_responseType = std::move(value); }

    /**
     * <p>[Required] <p>The response type of the associated <a>GatewayResponse</a>.
     * Valid values are
     * <ul><li>ACCESS_DENIED</li><li>API_CONFIGURATION_ERROR</li><li>AUTHORIZER_FAILURE</li><li>
     * AUTHORIZER_CONFIGURATION_ERROR</li><li>BAD_REQUEST_PARAMETERS</li><li>BAD_REQUEST_BODY</li><li>DEFAULT_4XX</li><li>DEFAULT_5XX</li><li>EXPIRED_TOKEN</li><li>INVALID_SIGNATURE</li><li>INTEGRATION_FAILURE</li><li>INTEGRATION_TIMEOUT</li><li>INVALID_API_KEY</li><li>MISSING_AUTHENTICATION_TOKEN</li><li>
     * QUOTA_EXCEEDED</li><li>REQUEST_TOO_LARGE</li><li>RESOURCE_NOT_FOUND</li><li>THROTTLED</li><li>UNAUTHORIZED</li><li>UNSUPPORTED_MEDIA_TYPE</li></ul>
     * </p></p>
     */
    inline PutGatewayResponseRequest& WithResponseType(const GatewayResponseType& value) { SetResponseType(value); return *this;}

    /**
     * <p>[Required] <p>The response type of the associated <a>GatewayResponse</a>.
     * Valid values are
     * <ul><li>ACCESS_DENIED</li><li>API_CONFIGURATION_ERROR</li><li>AUTHORIZER_FAILURE</li><li>
     * AUTHORIZER_CONFIGURATION_ERROR</li><li>BAD_REQUEST_PARAMETERS</li><li>BAD_REQUEST_BODY</li><li>DEFAULT_4XX</li><li>DEFAULT_5XX</li><li>EXPIRED_TOKEN</li><li>INVALID_SIGNATURE</li><li>INTEGRATION_FAILURE</li><li>INTEGRATION_TIMEOUT</li><li>INVALID_API_KEY</li><li>MISSING_AUTHENTICATION_TOKEN</li><li>
     * QUOTA_EXCEEDED</li><li>REQUEST_TOO_LARGE</li><li>RESOURCE_NOT_FOUND</li><li>THROTTLED</li><li>UNAUTHORIZED</li><li>UNSUPPORTED_MEDIA_TYPE</li></ul>
     * </p></p>
     */
    inline PutGatewayResponseRequest& WithResponseType(GatewayResponseType&& value) { SetResponseType(std::move(value)); return *this;}


    /**
     * The HTTP status code of the <a>GatewayResponse</a>.
     */
    inline const Aws::String& GetStatusCode() const{ return m_statusCode; }

    /**
     * The HTTP status code of the <a>GatewayResponse</a>.
     */
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }

    /**
     * The HTTP status code of the <a>GatewayResponse</a>.
     */
    inline void SetStatusCode(const Aws::String& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * The HTTP status code of the <a>GatewayResponse</a>.
     */
    inline void SetStatusCode(Aws::String&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }

    /**
     * The HTTP status code of the <a>GatewayResponse</a>.
     */
    inline void SetStatusCode(const char* value) { m_statusCodeHasBeenSet = true; m_statusCode.assign(value); }

    /**
     * The HTTP status code of the <a>GatewayResponse</a>.
     */
    inline PutGatewayResponseRequest& WithStatusCode(const Aws::String& value) { SetStatusCode(value); return *this;}

    /**
     * The HTTP status code of the <a>GatewayResponse</a>.
     */
    inline PutGatewayResponseRequest& WithStatusCode(Aws::String&& value) { SetStatusCode(std::move(value)); return *this;}

    /**
     * The HTTP status code of the <a>GatewayResponse</a>.
     */
    inline PutGatewayResponseRequest& WithStatusCode(const char* value) { SetStatusCode(value); return *this;}


    /**
     * <p><p>Response parameters (paths, query strings and headers) of the
     * <a>GatewayResponse</a> as a string-to-string map of key-value pairs.</p></p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseParameters() const{ return m_responseParameters; }

    /**
     * <p><p>Response parameters (paths, query strings and headers) of the
     * <a>GatewayResponse</a> as a string-to-string map of key-value pairs.</p></p>
     */
    inline bool ResponseParametersHasBeenSet() const { return m_responseParametersHasBeenSet; }

    /**
     * <p><p>Response parameters (paths, query strings and headers) of the
     * <a>GatewayResponse</a> as a string-to-string map of key-value pairs.</p></p>
     */
    inline void SetResponseParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_responseParametersHasBeenSet = true; m_responseParameters = value; }

    /**
     * <p><p>Response parameters (paths, query strings and headers) of the
     * <a>GatewayResponse</a> as a string-to-string map of key-value pairs.</p></p>
     */
    inline void SetResponseParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_responseParametersHasBeenSet = true; m_responseParameters = std::move(value); }

    /**
     * <p><p>Response parameters (paths, query strings and headers) of the
     * <a>GatewayResponse</a> as a string-to-string map of key-value pairs.</p></p>
     */
    inline PutGatewayResponseRequest& WithResponseParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetResponseParameters(value); return *this;}

    /**
     * <p><p>Response parameters (paths, query strings and headers) of the
     * <a>GatewayResponse</a> as a string-to-string map of key-value pairs.</p></p>
     */
    inline PutGatewayResponseRequest& WithResponseParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetResponseParameters(std::move(value)); return *this;}

    /**
     * <p><p>Response parameters (paths, query strings and headers) of the
     * <a>GatewayResponse</a> as a string-to-string map of key-value pairs.</p></p>
     */
    inline PutGatewayResponseRequest& AddResponseParameters(const Aws::String& key, const Aws::String& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, value); return *this; }

    /**
     * <p><p>Response parameters (paths, query strings and headers) of the
     * <a>GatewayResponse</a> as a string-to-string map of key-value pairs.</p></p>
     */
    inline PutGatewayResponseRequest& AddResponseParameters(Aws::String&& key, const Aws::String& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p><p>Response parameters (paths, query strings and headers) of the
     * <a>GatewayResponse</a> as a string-to-string map of key-value pairs.</p></p>
     */
    inline PutGatewayResponseRequest& AddResponseParameters(const Aws::String& key, Aws::String&& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p><p>Response parameters (paths, query strings and headers) of the
     * <a>GatewayResponse</a> as a string-to-string map of key-value pairs.</p></p>
     */
    inline PutGatewayResponseRequest& AddResponseParameters(Aws::String&& key, Aws::String&& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p><p>Response parameters (paths, query strings and headers) of the
     * <a>GatewayResponse</a> as a string-to-string map of key-value pairs.</p></p>
     */
    inline PutGatewayResponseRequest& AddResponseParameters(const char* key, Aws::String&& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p><p>Response parameters (paths, query strings and headers) of the
     * <a>GatewayResponse</a> as a string-to-string map of key-value pairs.</p></p>
     */
    inline PutGatewayResponseRequest& AddResponseParameters(Aws::String&& key, const char* value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p><p>Response parameters (paths, query strings and headers) of the
     * <a>GatewayResponse</a> as a string-to-string map of key-value pairs.</p></p>
     */
    inline PutGatewayResponseRequest& AddResponseParameters(const char* key, const char* value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, value); return *this; }


    /**
     * <p><p>Response templates of the <a>GatewayResponse</a> as a string-to-string map
     * of key-value pairs.</p></p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseTemplates() const{ return m_responseTemplates; }

    /**
     * <p><p>Response templates of the <a>GatewayResponse</a> as a string-to-string map
     * of key-value pairs.</p></p>
     */
    inline bool ResponseTemplatesHasBeenSet() const { return m_responseTemplatesHasBeenSet; }

    /**
     * <p><p>Response templates of the <a>GatewayResponse</a> as a string-to-string map
     * of key-value pairs.</p></p>
     */
    inline void SetResponseTemplates(const Aws::Map<Aws::String, Aws::String>& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates = value; }

    /**
     * <p><p>Response templates of the <a>GatewayResponse</a> as a string-to-string map
     * of key-value pairs.</p></p>
     */
    inline void SetResponseTemplates(Aws::Map<Aws::String, Aws::String>&& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates = std::move(value); }

    /**
     * <p><p>Response templates of the <a>GatewayResponse</a> as a string-to-string map
     * of key-value pairs.</p></p>
     */
    inline PutGatewayResponseRequest& WithResponseTemplates(const Aws::Map<Aws::String, Aws::String>& value) { SetResponseTemplates(value); return *this;}

    /**
     * <p><p>Response templates of the <a>GatewayResponse</a> as a string-to-string map
     * of key-value pairs.</p></p>
     */
    inline PutGatewayResponseRequest& WithResponseTemplates(Aws::Map<Aws::String, Aws::String>&& value) { SetResponseTemplates(std::move(value)); return *this;}

    /**
     * <p><p>Response templates of the <a>GatewayResponse</a> as a string-to-string map
     * of key-value pairs.</p></p>
     */
    inline PutGatewayResponseRequest& AddResponseTemplates(const Aws::String& key, const Aws::String& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(key, value); return *this; }

    /**
     * <p><p>Response templates of the <a>GatewayResponse</a> as a string-to-string map
     * of key-value pairs.</p></p>
     */
    inline PutGatewayResponseRequest& AddResponseTemplates(Aws::String&& key, const Aws::String& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(std::move(key), value); return *this; }

    /**
     * <p><p>Response templates of the <a>GatewayResponse</a> as a string-to-string map
     * of key-value pairs.</p></p>
     */
    inline PutGatewayResponseRequest& AddResponseTemplates(const Aws::String& key, Aws::String&& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(key, std::move(value)); return *this; }

    /**
     * <p><p>Response templates of the <a>GatewayResponse</a> as a string-to-string map
     * of key-value pairs.</p></p>
     */
    inline PutGatewayResponseRequest& AddResponseTemplates(Aws::String&& key, Aws::String&& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p><p>Response templates of the <a>GatewayResponse</a> as a string-to-string map
     * of key-value pairs.</p></p>
     */
    inline PutGatewayResponseRequest& AddResponseTemplates(const char* key, Aws::String&& value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(key, std::move(value)); return *this; }

    /**
     * <p><p>Response templates of the <a>GatewayResponse</a> as a string-to-string map
     * of key-value pairs.</p></p>
     */
    inline PutGatewayResponseRequest& AddResponseTemplates(Aws::String&& key, const char* value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(std::move(key), value); return *this; }

    /**
     * <p><p>Response templates of the <a>GatewayResponse</a> as a string-to-string map
     * of key-value pairs.</p></p>
     */
    inline PutGatewayResponseRequest& AddResponseTemplates(const char* key, const char* value) { m_responseTemplatesHasBeenSet = true; m_responseTemplates.emplace(key, value); return *this; }

  private:

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;

    GatewayResponseType m_responseType;
    bool m_responseTypeHasBeenSet;

    Aws::String m_statusCode;
    bool m_statusCodeHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_responseParameters;
    bool m_responseParametersHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_responseTemplates;
    bool m_responseTemplatesHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
