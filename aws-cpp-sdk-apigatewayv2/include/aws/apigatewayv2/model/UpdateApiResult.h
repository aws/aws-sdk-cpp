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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/apigatewayv2/model/ProtocolType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_APIGATEWAYV2_API UpdateApiResult
  {
  public:
    UpdateApiResult();
    UpdateApiResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateApiResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The URI of the API, of the form {api-id}.execute-api.{region}.amazonaws.com.
     * The
 stage name is typically appended to this URI to form a complete path to a
     * deployed
 API stage.</p>
     */
    inline const Aws::String& GetApiEndpoint() const{ return m_apiEndpoint; }

    /**
     * <p>The URI of the API, of the form {api-id}.execute-api.{region}.amazonaws.com.
     * The
 stage name is typically appended to this URI to form a complete path to a
     * deployed
 API stage.</p>
     */
    inline void SetApiEndpoint(const Aws::String& value) { m_apiEndpoint = value; }

    /**
     * <p>The URI of the API, of the form {api-id}.execute-api.{region}.amazonaws.com.
     * The
 stage name is typically appended to this URI to form a complete path to a
     * deployed
 API stage.</p>
     */
    inline void SetApiEndpoint(Aws::String&& value) { m_apiEndpoint = std::move(value); }

    /**
     * <p>The URI of the API, of the form {api-id}.execute-api.{region}.amazonaws.com.
     * The
 stage name is typically appended to this URI to form a complete path to a
     * deployed
 API stage.</p>
     */
    inline void SetApiEndpoint(const char* value) { m_apiEndpoint.assign(value); }

    /**
     * <p>The URI of the API, of the form {api-id}.execute-api.{region}.amazonaws.com.
     * The
 stage name is typically appended to this URI to form a complete path to a
     * deployed
 API stage.</p>
     */
    inline UpdateApiResult& WithApiEndpoint(const Aws::String& value) { SetApiEndpoint(value); return *this;}

    /**
     * <p>The URI of the API, of the form {api-id}.execute-api.{region}.amazonaws.com.
     * The
 stage name is typically appended to this URI to form a complete path to a
     * deployed
 API stage.</p>
     */
    inline UpdateApiResult& WithApiEndpoint(Aws::String&& value) { SetApiEndpoint(std::move(value)); return *this;}

    /**
     * <p>The URI of the API, of the form {api-id}.execute-api.{region}.amazonaws.com.
     * The
 stage name is typically appended to this URI to form a complete path to a
     * deployed
 API stage.</p>
     */
    inline UpdateApiResult& WithApiEndpoint(const char* value) { SetApiEndpoint(value); return *this;}


    /**
     * <p>The API ID.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }

    /**
     * <p>The API ID.</p>
     */
    inline void SetApiId(const Aws::String& value) { m_apiId = value; }

    /**
     * <p>The API ID.</p>
     */
    inline void SetApiId(Aws::String&& value) { m_apiId = std::move(value); }

    /**
     * <p>The API ID.</p>
     */
    inline void SetApiId(const char* value) { m_apiId.assign(value); }

    /**
     * <p>The API ID.</p>
     */
    inline UpdateApiResult& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}

    /**
     * <p>The API ID.</p>
     */
    inline UpdateApiResult& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}

    /**
     * <p>The API ID.</p>
     */
    inline UpdateApiResult& WithApiId(const char* value) { SetApiId(value); return *this;}


    /**
     * <p>An API key selection expression. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/apigateway-websocket-api-selection-expressions.html#apigateway-websocket-api-apikey-selection-expressions">API
     * Key Selection Expressions</a>.</p>
     */
    inline const Aws::String& GetApiKeySelectionExpression() const{ return m_apiKeySelectionExpression; }

    /**
     * <p>An API key selection expression. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/apigateway-websocket-api-selection-expressions.html#apigateway-websocket-api-apikey-selection-expressions">API
     * Key Selection Expressions</a>.</p>
     */
    inline void SetApiKeySelectionExpression(const Aws::String& value) { m_apiKeySelectionExpression = value; }

    /**
     * <p>An API key selection expression. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/apigateway-websocket-api-selection-expressions.html#apigateway-websocket-api-apikey-selection-expressions">API
     * Key Selection Expressions</a>.</p>
     */
    inline void SetApiKeySelectionExpression(Aws::String&& value) { m_apiKeySelectionExpression = std::move(value); }

    /**
     * <p>An API key selection expression. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/apigateway-websocket-api-selection-expressions.html#apigateway-websocket-api-apikey-selection-expressions">API
     * Key Selection Expressions</a>.</p>
     */
    inline void SetApiKeySelectionExpression(const char* value) { m_apiKeySelectionExpression.assign(value); }

    /**
     * <p>An API key selection expression. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/apigateway-websocket-api-selection-expressions.html#apigateway-websocket-api-apikey-selection-expressions">API
     * Key Selection Expressions</a>.</p>
     */
    inline UpdateApiResult& WithApiKeySelectionExpression(const Aws::String& value) { SetApiKeySelectionExpression(value); return *this;}

    /**
     * <p>An API key selection expression. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/apigateway-websocket-api-selection-expressions.html#apigateway-websocket-api-apikey-selection-expressions">API
     * Key Selection Expressions</a>.</p>
     */
    inline UpdateApiResult& WithApiKeySelectionExpression(Aws::String&& value) { SetApiKeySelectionExpression(std::move(value)); return *this;}

    /**
     * <p>An API key selection expression. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/apigateway-websocket-api-selection-expressions.html#apigateway-websocket-api-apikey-selection-expressions">API
     * Key Selection Expressions</a>.</p>
     */
    inline UpdateApiResult& WithApiKeySelectionExpression(const char* value) { SetApiKeySelectionExpression(value); return *this;}


    /**
     * <p>The timestamp when the API was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The timestamp when the API was created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }

    /**
     * <p>The timestamp when the API was created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }

    /**
     * <p>The timestamp when the API was created.</p>
     */
    inline UpdateApiResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The timestamp when the API was created.</p>
     */
    inline UpdateApiResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>The description of the API.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the API.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the API.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the API.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the API.</p>
     */
    inline UpdateApiResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the API.</p>
     */
    inline UpdateApiResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the API.</p>
     */
    inline UpdateApiResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Avoid validating models when creating a deployment.</p>
     */
    inline bool GetDisableSchemaValidation() const{ return m_disableSchemaValidation; }

    /**
     * <p>Avoid validating models when creating a deployment.</p>
     */
    inline void SetDisableSchemaValidation(bool value) { m_disableSchemaValidation = value; }

    /**
     * <p>Avoid validating models when creating a deployment.</p>
     */
    inline UpdateApiResult& WithDisableSchemaValidation(bool value) { SetDisableSchemaValidation(value); return *this;}


    /**
     * <p>The name of the API.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the API.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the API.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the API.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the API.</p>
     */
    inline UpdateApiResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the API.</p>
     */
    inline UpdateApiResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the API.</p>
     */
    inline UpdateApiResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The API protocol: Currently only WEBSOCKET is supported.</p>
     */
    inline const ProtocolType& GetProtocolType() const{ return m_protocolType; }

    /**
     * <p>The API protocol: Currently only WEBSOCKET is supported.</p>
     */
    inline void SetProtocolType(const ProtocolType& value) { m_protocolType = value; }

    /**
     * <p>The API protocol: Currently only WEBSOCKET is supported.</p>
     */
    inline void SetProtocolType(ProtocolType&& value) { m_protocolType = std::move(value); }

    /**
     * <p>The API protocol: Currently only WEBSOCKET is supported.</p>
     */
    inline UpdateApiResult& WithProtocolType(const ProtocolType& value) { SetProtocolType(value); return *this;}

    /**
     * <p>The API protocol: Currently only WEBSOCKET is supported.</p>
     */
    inline UpdateApiResult& WithProtocolType(ProtocolType&& value) { SetProtocolType(std::move(value)); return *this;}


    /**
     * <p>The route selection expression for the API.</p>
     */
    inline const Aws::String& GetRouteSelectionExpression() const{ return m_routeSelectionExpression; }

    /**
     * <p>The route selection expression for the API.</p>
     */
    inline void SetRouteSelectionExpression(const Aws::String& value) { m_routeSelectionExpression = value; }

    /**
     * <p>The route selection expression for the API.</p>
     */
    inline void SetRouteSelectionExpression(Aws::String&& value) { m_routeSelectionExpression = std::move(value); }

    /**
     * <p>The route selection expression for the API.</p>
     */
    inline void SetRouteSelectionExpression(const char* value) { m_routeSelectionExpression.assign(value); }

    /**
     * <p>The route selection expression for the API.</p>
     */
    inline UpdateApiResult& WithRouteSelectionExpression(const Aws::String& value) { SetRouteSelectionExpression(value); return *this;}

    /**
     * <p>The route selection expression for the API.</p>
     */
    inline UpdateApiResult& WithRouteSelectionExpression(Aws::String&& value) { SetRouteSelectionExpression(std::move(value)); return *this;}

    /**
     * <p>The route selection expression for the API.</p>
     */
    inline UpdateApiResult& WithRouteSelectionExpression(const char* value) { SetRouteSelectionExpression(value); return *this;}


    /**
     * <p>A version identifier for the API.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>A version identifier for the API.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_version = value; }

    /**
     * <p>A version identifier for the API.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }

    /**
     * <p>A version identifier for the API.</p>
     */
    inline void SetVersion(const char* value) { m_version.assign(value); }

    /**
     * <p>A version identifier for the API.</p>
     */
    inline UpdateApiResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>A version identifier for the API.</p>
     */
    inline UpdateApiResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>A version identifier for the API.</p>
     */
    inline UpdateApiResult& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The warning messages reported when failonwarnings is turned on during
 API
     * import.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWarnings() const{ return m_warnings; }

    /**
     * <p>The warning messages reported when failonwarnings is turned on during
 API
     * import.</p>
     */
    inline void SetWarnings(const Aws::Vector<Aws::String>& value) { m_warnings = value; }

    /**
     * <p>The warning messages reported when failonwarnings is turned on during
 API
     * import.</p>
     */
    inline void SetWarnings(Aws::Vector<Aws::String>&& value) { m_warnings = std::move(value); }

    /**
     * <p>The warning messages reported when failonwarnings is turned on during
 API
     * import.</p>
     */
    inline UpdateApiResult& WithWarnings(const Aws::Vector<Aws::String>& value) { SetWarnings(value); return *this;}

    /**
     * <p>The warning messages reported when failonwarnings is turned on during
 API
     * import.</p>
     */
    inline UpdateApiResult& WithWarnings(Aws::Vector<Aws::String>&& value) { SetWarnings(std::move(value)); return *this;}

    /**
     * <p>The warning messages reported when failonwarnings is turned on during
 API
     * import.</p>
     */
    inline UpdateApiResult& AddWarnings(const Aws::String& value) { m_warnings.push_back(value); return *this; }

    /**
     * <p>The warning messages reported when failonwarnings is turned on during
 API
     * import.</p>
     */
    inline UpdateApiResult& AddWarnings(Aws::String&& value) { m_warnings.push_back(std::move(value)); return *this; }

    /**
     * <p>The warning messages reported when failonwarnings is turned on during
 API
     * import.</p>
     */
    inline UpdateApiResult& AddWarnings(const char* value) { m_warnings.push_back(value); return *this; }


    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline UpdateApiResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline UpdateApiResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline UpdateApiResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline UpdateApiResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline UpdateApiResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline UpdateApiResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline UpdateApiResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline UpdateApiResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline UpdateApiResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_apiEndpoint;

    Aws::String m_apiId;

    Aws::String m_apiKeySelectionExpression;

    Aws::Utils::DateTime m_createdDate;

    Aws::String m_description;

    bool m_disableSchemaValidation;

    Aws::String m_name;

    ProtocolType m_protocolType;

    Aws::String m_routeSelectionExpression;

    Aws::String m_version;

    Aws::Vector<Aws::String> m_warnings;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
