﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigatewayv2/model/Cors.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigatewayv2/model/ProtocolType.h>
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
namespace ApiGatewayV2
{
namespace Model
{
  class UpdateApiResult
  {
  public:
    AWS_APIGATEWAYV2_API UpdateApiResult();
    AWS_APIGATEWAYV2_API UpdateApiResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAYV2_API UpdateApiResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The URI of the API, of the form {api-id}.execute-api.{region}.amazonaws.com.
     * The stage name is typically appended to this URI to form a complete path to a
     * deployed API stage.</p>
     */
    inline const Aws::String& GetApiEndpoint() const{ return m_apiEndpoint; }
    inline void SetApiEndpoint(const Aws::String& value) { m_apiEndpoint = value; }
    inline void SetApiEndpoint(Aws::String&& value) { m_apiEndpoint = std::move(value); }
    inline void SetApiEndpoint(const char* value) { m_apiEndpoint.assign(value); }
    inline UpdateApiResult& WithApiEndpoint(const Aws::String& value) { SetApiEndpoint(value); return *this;}
    inline UpdateApiResult& WithApiEndpoint(Aws::String&& value) { SetApiEndpoint(std::move(value)); return *this;}
    inline UpdateApiResult& WithApiEndpoint(const char* value) { SetApiEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether an API is managed by API Gateway. You can't update or
     * delete a managed API by using API Gateway. A managed API can be deleted only
     * through the tooling or service that created it.</p>
     */
    inline bool GetApiGatewayManaged() const{ return m_apiGatewayManaged; }
    inline void SetApiGatewayManaged(bool value) { m_apiGatewayManaged = value; }
    inline UpdateApiResult& WithApiGatewayManaged(bool value) { SetApiGatewayManaged(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API ID.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }
    inline void SetApiId(const Aws::String& value) { m_apiId = value; }
    inline void SetApiId(Aws::String&& value) { m_apiId = std::move(value); }
    inline void SetApiId(const char* value) { m_apiId.assign(value); }
    inline UpdateApiResult& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}
    inline UpdateApiResult& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}
    inline UpdateApiResult& WithApiId(const char* value) { SetApiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An API key selection expression. Supported only for WebSocket APIs. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/apigateway-websocket-api-selection-expressions.html#apigateway-websocket-api-apikey-selection-expressions">API
     * Key Selection Expressions</a>.</p>
     */
    inline const Aws::String& GetApiKeySelectionExpression() const{ return m_apiKeySelectionExpression; }
    inline void SetApiKeySelectionExpression(const Aws::String& value) { m_apiKeySelectionExpression = value; }
    inline void SetApiKeySelectionExpression(Aws::String&& value) { m_apiKeySelectionExpression = std::move(value); }
    inline void SetApiKeySelectionExpression(const char* value) { m_apiKeySelectionExpression.assign(value); }
    inline UpdateApiResult& WithApiKeySelectionExpression(const Aws::String& value) { SetApiKeySelectionExpression(value); return *this;}
    inline UpdateApiResult& WithApiKeySelectionExpression(Aws::String&& value) { SetApiKeySelectionExpression(std::move(value)); return *this;}
    inline UpdateApiResult& WithApiKeySelectionExpression(const char* value) { SetApiKeySelectionExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A CORS configuration. Supported only for HTTP APIs.</p>
     */
    inline const Cors& GetCorsConfiguration() const{ return m_corsConfiguration; }
    inline void SetCorsConfiguration(const Cors& value) { m_corsConfiguration = value; }
    inline void SetCorsConfiguration(Cors&& value) { m_corsConfiguration = std::move(value); }
    inline UpdateApiResult& WithCorsConfiguration(const Cors& value) { SetCorsConfiguration(value); return *this;}
    inline UpdateApiResult& WithCorsConfiguration(Cors&& value) { SetCorsConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the API was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }
    inline UpdateApiResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}
    inline UpdateApiResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the API.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline UpdateApiResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateApiResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateApiResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Avoid validating models when creating a deployment. Supported only for
     * WebSocket APIs.</p>
     */
    inline bool GetDisableSchemaValidation() const{ return m_disableSchemaValidation; }
    inline void SetDisableSchemaValidation(bool value) { m_disableSchemaValidation = value; }
    inline UpdateApiResult& WithDisableSchemaValidation(bool value) { SetDisableSchemaValidation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether clients can invoke your API by using the default
     * execute-api endpoint. By default, clients can invoke your API with the default
     * https://{api_id}.execute-api.{region}.amazonaws.com endpoint. To require that
     * clients use a custom domain name to invoke your API, disable the default
     * endpoint.</p>
     */
    inline bool GetDisableExecuteApiEndpoint() const{ return m_disableExecuteApiEndpoint; }
    inline void SetDisableExecuteApiEndpoint(bool value) { m_disableExecuteApiEndpoint = value; }
    inline UpdateApiResult& WithDisableExecuteApiEndpoint(bool value) { SetDisableExecuteApiEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validation information during API import. This may include particular
     * properties of your OpenAPI definition which are ignored during import. Supported
     * only for HTTP APIs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImportInfo() const{ return m_importInfo; }
    inline void SetImportInfo(const Aws::Vector<Aws::String>& value) { m_importInfo = value; }
    inline void SetImportInfo(Aws::Vector<Aws::String>&& value) { m_importInfo = std::move(value); }
    inline UpdateApiResult& WithImportInfo(const Aws::Vector<Aws::String>& value) { SetImportInfo(value); return *this;}
    inline UpdateApiResult& WithImportInfo(Aws::Vector<Aws::String>&& value) { SetImportInfo(std::move(value)); return *this;}
    inline UpdateApiResult& AddImportInfo(const Aws::String& value) { m_importInfo.push_back(value); return *this; }
    inline UpdateApiResult& AddImportInfo(Aws::String&& value) { m_importInfo.push_back(std::move(value)); return *this; }
    inline UpdateApiResult& AddImportInfo(const char* value) { m_importInfo.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the API.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline UpdateApiResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateApiResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateApiResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API protocol.</p>
     */
    inline const ProtocolType& GetProtocolType() const{ return m_protocolType; }
    inline void SetProtocolType(const ProtocolType& value) { m_protocolType = value; }
    inline void SetProtocolType(ProtocolType&& value) { m_protocolType = std::move(value); }
    inline UpdateApiResult& WithProtocolType(const ProtocolType& value) { SetProtocolType(value); return *this;}
    inline UpdateApiResult& WithProtocolType(ProtocolType&& value) { SetProtocolType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route selection expression for the API. For HTTP APIs, the
     * routeSelectionExpression must be ${request.method} ${request.path}. If not
     * provided, this will be the default for HTTP APIs. This property is required for
     * WebSocket APIs.</p>
     */
    inline const Aws::String& GetRouteSelectionExpression() const{ return m_routeSelectionExpression; }
    inline void SetRouteSelectionExpression(const Aws::String& value) { m_routeSelectionExpression = value; }
    inline void SetRouteSelectionExpression(Aws::String&& value) { m_routeSelectionExpression = std::move(value); }
    inline void SetRouteSelectionExpression(const char* value) { m_routeSelectionExpression.assign(value); }
    inline UpdateApiResult& WithRouteSelectionExpression(const Aws::String& value) { SetRouteSelectionExpression(value); return *this;}
    inline UpdateApiResult& WithRouteSelectionExpression(Aws::String&& value) { SetRouteSelectionExpression(std::move(value)); return *this;}
    inline UpdateApiResult& WithRouteSelectionExpression(const char* value) { SetRouteSelectionExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of tags associated with the API.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline UpdateApiResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline UpdateApiResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline UpdateApiResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline UpdateApiResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline UpdateApiResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline UpdateApiResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateApiResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline UpdateApiResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline UpdateApiResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A version identifier for the API.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline void SetVersion(const Aws::String& value) { m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_version.assign(value); }
    inline UpdateApiResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline UpdateApiResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline UpdateApiResult& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The warning messages reported when failonwarnings is turned on during API
     * import.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWarnings() const{ return m_warnings; }
    inline void SetWarnings(const Aws::Vector<Aws::String>& value) { m_warnings = value; }
    inline void SetWarnings(Aws::Vector<Aws::String>&& value) { m_warnings = std::move(value); }
    inline UpdateApiResult& WithWarnings(const Aws::Vector<Aws::String>& value) { SetWarnings(value); return *this;}
    inline UpdateApiResult& WithWarnings(Aws::Vector<Aws::String>&& value) { SetWarnings(std::move(value)); return *this;}
    inline UpdateApiResult& AddWarnings(const Aws::String& value) { m_warnings.push_back(value); return *this; }
    inline UpdateApiResult& AddWarnings(Aws::String&& value) { m_warnings.push_back(std::move(value)); return *this; }
    inline UpdateApiResult& AddWarnings(const char* value) { m_warnings.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateApiResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateApiResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateApiResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_apiEndpoint;

    bool m_apiGatewayManaged;

    Aws::String m_apiId;

    Aws::String m_apiKeySelectionExpression;

    Cors m_corsConfiguration;

    Aws::Utils::DateTime m_createdDate;

    Aws::String m_description;

    bool m_disableSchemaValidation;

    bool m_disableExecuteApiEndpoint;

    Aws::Vector<Aws::String> m_importInfo;

    Aws::String m_name;

    ProtocolType m_protocolType;

    Aws::String m_routeSelectionExpression;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_version;

    Aws::Vector<Aws::String> m_warnings;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
