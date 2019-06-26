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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ApiGatewayV2
{
namespace Model
{

  /**
   * <p>Represents an API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/Api">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAYV2_API Api
  {
  public:
    Api();
    Api(Aws::Utils::Json::JsonView jsonValue);
    Api& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline bool ApiEndpointHasBeenSet() const { return m_apiEndpointHasBeenSet; }

    /**
     * <p>The URI of the API, of the form {api-id}.execute-api.{region}.amazonaws.com.
     * The
 stage name is typically appended to this URI to form a complete path to a
     * deployed
 API stage.</p>
     */
    inline void SetApiEndpoint(const Aws::String& value) { m_apiEndpointHasBeenSet = true; m_apiEndpoint = value; }

    /**
     * <p>The URI of the API, of the form {api-id}.execute-api.{region}.amazonaws.com.
     * The
 stage name is typically appended to this URI to form a complete path to a
     * deployed
 API stage.</p>
     */
    inline void SetApiEndpoint(Aws::String&& value) { m_apiEndpointHasBeenSet = true; m_apiEndpoint = std::move(value); }

    /**
     * <p>The URI of the API, of the form {api-id}.execute-api.{region}.amazonaws.com.
     * The
 stage name is typically appended to this URI to form a complete path to a
     * deployed
 API stage.</p>
     */
    inline void SetApiEndpoint(const char* value) { m_apiEndpointHasBeenSet = true; m_apiEndpoint.assign(value); }

    /**
     * <p>The URI of the API, of the form {api-id}.execute-api.{region}.amazonaws.com.
     * The
 stage name is typically appended to this URI to form a complete path to a
     * deployed
 API stage.</p>
     */
    inline Api& WithApiEndpoint(const Aws::String& value) { SetApiEndpoint(value); return *this;}

    /**
     * <p>The URI of the API, of the form {api-id}.execute-api.{region}.amazonaws.com.
     * The
 stage name is typically appended to this URI to form a complete path to a
     * deployed
 API stage.</p>
     */
    inline Api& WithApiEndpoint(Aws::String&& value) { SetApiEndpoint(std::move(value)); return *this;}

    /**
     * <p>The URI of the API, of the form {api-id}.execute-api.{region}.amazonaws.com.
     * The
 stage name is typically appended to this URI to form a complete path to a
     * deployed
 API stage.</p>
     */
    inline Api& WithApiEndpoint(const char* value) { SetApiEndpoint(value); return *this;}


    /**
     * <p>The API ID.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }

    /**
     * <p>The API ID.</p>
     */
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }

    /**
     * <p>The API ID.</p>
     */
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }

    /**
     * <p>The API ID.</p>
     */
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }

    /**
     * <p>The API ID.</p>
     */
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }

    /**
     * <p>The API ID.</p>
     */
    inline Api& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}

    /**
     * <p>The API ID.</p>
     */
    inline Api& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}

    /**
     * <p>The API ID.</p>
     */
    inline Api& WithApiId(const char* value) { SetApiId(value); return *this;}


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
    inline bool ApiKeySelectionExpressionHasBeenSet() const { return m_apiKeySelectionExpressionHasBeenSet; }

    /**
     * <p>An API key selection expression. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/apigateway-websocket-api-selection-expressions.html#apigateway-websocket-api-apikey-selection-expressions">API
     * Key Selection Expressions</a>.</p>
     */
    inline void SetApiKeySelectionExpression(const Aws::String& value) { m_apiKeySelectionExpressionHasBeenSet = true; m_apiKeySelectionExpression = value; }

    /**
     * <p>An API key selection expression. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/apigateway-websocket-api-selection-expressions.html#apigateway-websocket-api-apikey-selection-expressions">API
     * Key Selection Expressions</a>.</p>
     */
    inline void SetApiKeySelectionExpression(Aws::String&& value) { m_apiKeySelectionExpressionHasBeenSet = true; m_apiKeySelectionExpression = std::move(value); }

    /**
     * <p>An API key selection expression. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/apigateway-websocket-api-selection-expressions.html#apigateway-websocket-api-apikey-selection-expressions">API
     * Key Selection Expressions</a>.</p>
     */
    inline void SetApiKeySelectionExpression(const char* value) { m_apiKeySelectionExpressionHasBeenSet = true; m_apiKeySelectionExpression.assign(value); }

    /**
     * <p>An API key selection expression. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/apigateway-websocket-api-selection-expressions.html#apigateway-websocket-api-apikey-selection-expressions">API
     * Key Selection Expressions</a>.</p>
     */
    inline Api& WithApiKeySelectionExpression(const Aws::String& value) { SetApiKeySelectionExpression(value); return *this;}

    /**
     * <p>An API key selection expression. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/apigateway-websocket-api-selection-expressions.html#apigateway-websocket-api-apikey-selection-expressions">API
     * Key Selection Expressions</a>.</p>
     */
    inline Api& WithApiKeySelectionExpression(Aws::String&& value) { SetApiKeySelectionExpression(std::move(value)); return *this;}

    /**
     * <p>An API key selection expression. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/apigateway-websocket-api-selection-expressions.html#apigateway-websocket-api-apikey-selection-expressions">API
     * Key Selection Expressions</a>.</p>
     */
    inline Api& WithApiKeySelectionExpression(const char* value) { SetApiKeySelectionExpression(value); return *this;}


    /**
     * <p>The timestamp when the API was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The timestamp when the API was created.</p>
     */
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }

    /**
     * <p>The timestamp when the API was created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    /**
     * <p>The timestamp when the API was created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }

    /**
     * <p>The timestamp when the API was created.</p>
     */
    inline Api& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The timestamp when the API was created.</p>
     */
    inline Api& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>The description of the API.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the API.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the API.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the API.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the API.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the API.</p>
     */
    inline Api& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the API.</p>
     */
    inline Api& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the API.</p>
     */
    inline Api& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Avoid validating models when creating a deployment.</p>
     */
    inline bool GetDisableSchemaValidation() const{ return m_disableSchemaValidation; }

    /**
     * <p>Avoid validating models when creating a deployment.</p>
     */
    inline bool DisableSchemaValidationHasBeenSet() const { return m_disableSchemaValidationHasBeenSet; }

    /**
     * <p>Avoid validating models when creating a deployment.</p>
     */
    inline void SetDisableSchemaValidation(bool value) { m_disableSchemaValidationHasBeenSet = true; m_disableSchemaValidation = value; }

    /**
     * <p>Avoid validating models when creating a deployment.</p>
     */
    inline Api& WithDisableSchemaValidation(bool value) { SetDisableSchemaValidation(value); return *this;}


    /**
     * <p>The name of the API.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the API.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the API.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the API.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the API.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the API.</p>
     */
    inline Api& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the API.</p>
     */
    inline Api& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the API.</p>
     */
    inline Api& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The API protocol: Currently only WEBSOCKET is supported.</p>
     */
    inline const ProtocolType& GetProtocolType() const{ return m_protocolType; }

    /**
     * <p>The API protocol: Currently only WEBSOCKET is supported.</p>
     */
    inline bool ProtocolTypeHasBeenSet() const { return m_protocolTypeHasBeenSet; }

    /**
     * <p>The API protocol: Currently only WEBSOCKET is supported.</p>
     */
    inline void SetProtocolType(const ProtocolType& value) { m_protocolTypeHasBeenSet = true; m_protocolType = value; }

    /**
     * <p>The API protocol: Currently only WEBSOCKET is supported.</p>
     */
    inline void SetProtocolType(ProtocolType&& value) { m_protocolTypeHasBeenSet = true; m_protocolType = std::move(value); }

    /**
     * <p>The API protocol: Currently only WEBSOCKET is supported.</p>
     */
    inline Api& WithProtocolType(const ProtocolType& value) { SetProtocolType(value); return *this;}

    /**
     * <p>The API protocol: Currently only WEBSOCKET is supported.</p>
     */
    inline Api& WithProtocolType(ProtocolType&& value) { SetProtocolType(std::move(value)); return *this;}


    /**
     * <p>The route selection expression for the API.</p>
     */
    inline const Aws::String& GetRouteSelectionExpression() const{ return m_routeSelectionExpression; }

    /**
     * <p>The route selection expression for the API.</p>
     */
    inline bool RouteSelectionExpressionHasBeenSet() const { return m_routeSelectionExpressionHasBeenSet; }

    /**
     * <p>The route selection expression for the API.</p>
     */
    inline void SetRouteSelectionExpression(const Aws::String& value) { m_routeSelectionExpressionHasBeenSet = true; m_routeSelectionExpression = value; }

    /**
     * <p>The route selection expression for the API.</p>
     */
    inline void SetRouteSelectionExpression(Aws::String&& value) { m_routeSelectionExpressionHasBeenSet = true; m_routeSelectionExpression = std::move(value); }

    /**
     * <p>The route selection expression for the API.</p>
     */
    inline void SetRouteSelectionExpression(const char* value) { m_routeSelectionExpressionHasBeenSet = true; m_routeSelectionExpression.assign(value); }

    /**
     * <p>The route selection expression for the API.</p>
     */
    inline Api& WithRouteSelectionExpression(const Aws::String& value) { SetRouteSelectionExpression(value); return *this;}

    /**
     * <p>The route selection expression for the API.</p>
     */
    inline Api& WithRouteSelectionExpression(Aws::String&& value) { SetRouteSelectionExpression(std::move(value)); return *this;}

    /**
     * <p>The route selection expression for the API.</p>
     */
    inline Api& WithRouteSelectionExpression(const char* value) { SetRouteSelectionExpression(value); return *this;}


    /**
     * <p>A version identifier for the API.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>A version identifier for the API.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>A version identifier for the API.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>A version identifier for the API.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>A version identifier for the API.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>A version identifier for the API.</p>
     */
    inline Api& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>A version identifier for the API.</p>
     */
    inline Api& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>A version identifier for the API.</p>
     */
    inline Api& WithVersion(const char* value) { SetVersion(value); return *this;}


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
    inline bool WarningsHasBeenSet() const { return m_warningsHasBeenSet; }

    /**
     * <p>The warning messages reported when failonwarnings is turned on during
 API
     * import.</p>
     */
    inline void SetWarnings(const Aws::Vector<Aws::String>& value) { m_warningsHasBeenSet = true; m_warnings = value; }

    /**
     * <p>The warning messages reported when failonwarnings is turned on during
 API
     * import.</p>
     */
    inline void SetWarnings(Aws::Vector<Aws::String>&& value) { m_warningsHasBeenSet = true; m_warnings = std::move(value); }

    /**
     * <p>The warning messages reported when failonwarnings is turned on during
 API
     * import.</p>
     */
    inline Api& WithWarnings(const Aws::Vector<Aws::String>& value) { SetWarnings(value); return *this;}

    /**
     * <p>The warning messages reported when failonwarnings is turned on during
 API
     * import.</p>
     */
    inline Api& WithWarnings(Aws::Vector<Aws::String>&& value) { SetWarnings(std::move(value)); return *this;}

    /**
     * <p>The warning messages reported when failonwarnings is turned on during
 API
     * import.</p>
     */
    inline Api& AddWarnings(const Aws::String& value) { m_warningsHasBeenSet = true; m_warnings.push_back(value); return *this; }

    /**
     * <p>The warning messages reported when failonwarnings is turned on during
 API
     * import.</p>
     */
    inline Api& AddWarnings(Aws::String&& value) { m_warningsHasBeenSet = true; m_warnings.push_back(std::move(value)); return *this; }

    /**
     * <p>The warning messages reported when failonwarnings is turned on during
 API
     * import.</p>
     */
    inline Api& AddWarnings(const char* value) { m_warningsHasBeenSet = true; m_warnings.push_back(value); return *this; }


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
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline Api& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline Api& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline Api& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline Api& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline Api& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline Api& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline Api& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline Api& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline Api& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_apiEndpoint;
    bool m_apiEndpointHasBeenSet;

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet;

    Aws::String m_apiKeySelectionExpression;
    bool m_apiKeySelectionExpressionHasBeenSet;

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    bool m_disableSchemaValidation;
    bool m_disableSchemaValidationHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    ProtocolType m_protocolType;
    bool m_protocolTypeHasBeenSet;

    Aws::String m_routeSelectionExpression;
    bool m_routeSelectionExpressionHasBeenSet;

    Aws::String m_version;
    bool m_versionHasBeenSet;

    Aws::Vector<Aws::String> m_warnings;
    bool m_warningsHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
