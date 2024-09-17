/**
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
  class Api
  {
  public:
    AWS_APIGATEWAYV2_API Api();
    AWS_APIGATEWAYV2_API Api(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API Api& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URI of the API, of the form {api-id}.execute-api.{region}.amazonaws.com.
     * The stage name is typically appended to this URI to form a complete path to a
     * deployed API stage.</p>
     */
    inline const Aws::String& GetApiEndpoint() const{ return m_apiEndpoint; }
    inline bool ApiEndpointHasBeenSet() const { return m_apiEndpointHasBeenSet; }
    inline void SetApiEndpoint(const Aws::String& value) { m_apiEndpointHasBeenSet = true; m_apiEndpoint = value; }
    inline void SetApiEndpoint(Aws::String&& value) { m_apiEndpointHasBeenSet = true; m_apiEndpoint = std::move(value); }
    inline void SetApiEndpoint(const char* value) { m_apiEndpointHasBeenSet = true; m_apiEndpoint.assign(value); }
    inline Api& WithApiEndpoint(const Aws::String& value) { SetApiEndpoint(value); return *this;}
    inline Api& WithApiEndpoint(Aws::String&& value) { SetApiEndpoint(std::move(value)); return *this;}
    inline Api& WithApiEndpoint(const char* value) { SetApiEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether an API is managed by API Gateway. You can't update or
     * delete a managed API by using API Gateway. A managed API can be deleted only
     * through the tooling or service that created it.</p>
     */
    inline bool GetApiGatewayManaged() const{ return m_apiGatewayManaged; }
    inline bool ApiGatewayManagedHasBeenSet() const { return m_apiGatewayManagedHasBeenSet; }
    inline void SetApiGatewayManaged(bool value) { m_apiGatewayManagedHasBeenSet = true; m_apiGatewayManaged = value; }
    inline Api& WithApiGatewayManaged(bool value) { SetApiGatewayManaged(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API ID.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }
    inline Api& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}
    inline Api& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}
    inline Api& WithApiId(const char* value) { SetApiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An API key selection expression. Supported only for WebSocket APIs. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/apigateway-websocket-api-selection-expressions.html#apigateway-websocket-api-apikey-selection-expressions">API
     * Key Selection Expressions</a>.</p>
     */
    inline const Aws::String& GetApiKeySelectionExpression() const{ return m_apiKeySelectionExpression; }
    inline bool ApiKeySelectionExpressionHasBeenSet() const { return m_apiKeySelectionExpressionHasBeenSet; }
    inline void SetApiKeySelectionExpression(const Aws::String& value) { m_apiKeySelectionExpressionHasBeenSet = true; m_apiKeySelectionExpression = value; }
    inline void SetApiKeySelectionExpression(Aws::String&& value) { m_apiKeySelectionExpressionHasBeenSet = true; m_apiKeySelectionExpression = std::move(value); }
    inline void SetApiKeySelectionExpression(const char* value) { m_apiKeySelectionExpressionHasBeenSet = true; m_apiKeySelectionExpression.assign(value); }
    inline Api& WithApiKeySelectionExpression(const Aws::String& value) { SetApiKeySelectionExpression(value); return *this;}
    inline Api& WithApiKeySelectionExpression(Aws::String&& value) { SetApiKeySelectionExpression(std::move(value)); return *this;}
    inline Api& WithApiKeySelectionExpression(const char* value) { SetApiKeySelectionExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A CORS configuration. Supported only for HTTP APIs.</p>
     */
    inline const Cors& GetCorsConfiguration() const{ return m_corsConfiguration; }
    inline bool CorsConfigurationHasBeenSet() const { return m_corsConfigurationHasBeenSet; }
    inline void SetCorsConfiguration(const Cors& value) { m_corsConfigurationHasBeenSet = true; m_corsConfiguration = value; }
    inline void SetCorsConfiguration(Cors&& value) { m_corsConfigurationHasBeenSet = true; m_corsConfiguration = std::move(value); }
    inline Api& WithCorsConfiguration(const Cors& value) { SetCorsConfiguration(value); return *this;}
    inline Api& WithCorsConfiguration(Cors&& value) { SetCorsConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the API was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }
    inline Api& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}
    inline Api& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the API.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Api& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Api& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Api& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Avoid validating models when creating a deployment. Supported only for
     * WebSocket APIs.</p>
     */
    inline bool GetDisableSchemaValidation() const{ return m_disableSchemaValidation; }
    inline bool DisableSchemaValidationHasBeenSet() const { return m_disableSchemaValidationHasBeenSet; }
    inline void SetDisableSchemaValidation(bool value) { m_disableSchemaValidationHasBeenSet = true; m_disableSchemaValidation = value; }
    inline Api& WithDisableSchemaValidation(bool value) { SetDisableSchemaValidation(value); return *this;}
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
    inline bool DisableExecuteApiEndpointHasBeenSet() const { return m_disableExecuteApiEndpointHasBeenSet; }
    inline void SetDisableExecuteApiEndpoint(bool value) { m_disableExecuteApiEndpointHasBeenSet = true; m_disableExecuteApiEndpoint = value; }
    inline Api& WithDisableExecuteApiEndpoint(bool value) { SetDisableExecuteApiEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validation information during API import. This may include particular
     * properties of your OpenAPI definition which are ignored during import. Supported
     * only for HTTP APIs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImportInfo() const{ return m_importInfo; }
    inline bool ImportInfoHasBeenSet() const { return m_importInfoHasBeenSet; }
    inline void SetImportInfo(const Aws::Vector<Aws::String>& value) { m_importInfoHasBeenSet = true; m_importInfo = value; }
    inline void SetImportInfo(Aws::Vector<Aws::String>&& value) { m_importInfoHasBeenSet = true; m_importInfo = std::move(value); }
    inline Api& WithImportInfo(const Aws::Vector<Aws::String>& value) { SetImportInfo(value); return *this;}
    inline Api& WithImportInfo(Aws::Vector<Aws::String>&& value) { SetImportInfo(std::move(value)); return *this;}
    inline Api& AddImportInfo(const Aws::String& value) { m_importInfoHasBeenSet = true; m_importInfo.push_back(value); return *this; }
    inline Api& AddImportInfo(Aws::String&& value) { m_importInfoHasBeenSet = true; m_importInfo.push_back(std::move(value)); return *this; }
    inline Api& AddImportInfo(const char* value) { m_importInfoHasBeenSet = true; m_importInfo.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the API.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Api& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Api& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Api& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API protocol.</p>
     */
    inline const ProtocolType& GetProtocolType() const{ return m_protocolType; }
    inline bool ProtocolTypeHasBeenSet() const { return m_protocolTypeHasBeenSet; }
    inline void SetProtocolType(const ProtocolType& value) { m_protocolTypeHasBeenSet = true; m_protocolType = value; }
    inline void SetProtocolType(ProtocolType&& value) { m_protocolTypeHasBeenSet = true; m_protocolType = std::move(value); }
    inline Api& WithProtocolType(const ProtocolType& value) { SetProtocolType(value); return *this;}
    inline Api& WithProtocolType(ProtocolType&& value) { SetProtocolType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route selection expression for the API. For HTTP APIs, the
     * routeSelectionExpression must be ${request.method} ${request.path}. If not
     * provided, this will be the default for HTTP APIs. This property is required for
     * WebSocket APIs.</p>
     */
    inline const Aws::String& GetRouteSelectionExpression() const{ return m_routeSelectionExpression; }
    inline bool RouteSelectionExpressionHasBeenSet() const { return m_routeSelectionExpressionHasBeenSet; }
    inline void SetRouteSelectionExpression(const Aws::String& value) { m_routeSelectionExpressionHasBeenSet = true; m_routeSelectionExpression = value; }
    inline void SetRouteSelectionExpression(Aws::String&& value) { m_routeSelectionExpressionHasBeenSet = true; m_routeSelectionExpression = std::move(value); }
    inline void SetRouteSelectionExpression(const char* value) { m_routeSelectionExpressionHasBeenSet = true; m_routeSelectionExpression.assign(value); }
    inline Api& WithRouteSelectionExpression(const Aws::String& value) { SetRouteSelectionExpression(value); return *this;}
    inline Api& WithRouteSelectionExpression(Aws::String&& value) { SetRouteSelectionExpression(std::move(value)); return *this;}
    inline Api& WithRouteSelectionExpression(const char* value) { SetRouteSelectionExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of tags associated with the API.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Api& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline Api& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline Api& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline Api& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Api& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Api& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline Api& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline Api& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline Api& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A version identifier for the API.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline Api& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline Api& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline Api& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The warning messages reported when failonwarnings is turned on during API
     * import.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWarnings() const{ return m_warnings; }
    inline bool WarningsHasBeenSet() const { return m_warningsHasBeenSet; }
    inline void SetWarnings(const Aws::Vector<Aws::String>& value) { m_warningsHasBeenSet = true; m_warnings = value; }
    inline void SetWarnings(Aws::Vector<Aws::String>&& value) { m_warningsHasBeenSet = true; m_warnings = std::move(value); }
    inline Api& WithWarnings(const Aws::Vector<Aws::String>& value) { SetWarnings(value); return *this;}
    inline Api& WithWarnings(Aws::Vector<Aws::String>&& value) { SetWarnings(std::move(value)); return *this;}
    inline Api& AddWarnings(const Aws::String& value) { m_warningsHasBeenSet = true; m_warnings.push_back(value); return *this; }
    inline Api& AddWarnings(Aws::String&& value) { m_warningsHasBeenSet = true; m_warnings.push_back(std::move(value)); return *this; }
    inline Api& AddWarnings(const char* value) { m_warningsHasBeenSet = true; m_warnings.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_apiEndpoint;
    bool m_apiEndpointHasBeenSet = false;

    bool m_apiGatewayManaged;
    bool m_apiGatewayManagedHasBeenSet = false;

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    Aws::String m_apiKeySelectionExpression;
    bool m_apiKeySelectionExpressionHasBeenSet = false;

    Cors m_corsConfiguration;
    bool m_corsConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_disableSchemaValidation;
    bool m_disableSchemaValidationHasBeenSet = false;

    bool m_disableExecuteApiEndpoint;
    bool m_disableExecuteApiEndpointHasBeenSet = false;

    Aws::Vector<Aws::String> m_importInfo;
    bool m_importInfoHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ProtocolType m_protocolType;
    bool m_protocolTypeHasBeenSet = false;

    Aws::String m_routeSelectionExpression;
    bool m_routeSelectionExpressionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::Vector<Aws::String> m_warnings;
    bool m_warningsHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
