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
#include <aws/apigatewayv2/model/ProtocolType.h>
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
  class AWS_APIGATEWAYV2_API CreateApiRequest : public ApiGatewayV2Request
  {
  public:
    CreateApiRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApi"; }

    Aws::String SerializePayload() const override;


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
    inline CreateApiRequest& WithApiKeySelectionExpression(const Aws::String& value) { SetApiKeySelectionExpression(value); return *this;}

    /**
     * <p>An API key selection expression. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/apigateway-websocket-api-selection-expressions.html#apigateway-websocket-api-apikey-selection-expressions">API
     * Key Selection Expressions</a>.</p>
     */
    inline CreateApiRequest& WithApiKeySelectionExpression(Aws::String&& value) { SetApiKeySelectionExpression(std::move(value)); return *this;}

    /**
     * <p>An API key selection expression. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/apigateway-websocket-api-selection-expressions.html#apigateway-websocket-api-apikey-selection-expressions">API
     * Key Selection Expressions</a>.</p>
     */
    inline CreateApiRequest& WithApiKeySelectionExpression(const char* value) { SetApiKeySelectionExpression(value); return *this;}


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
    inline CreateApiRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the API.</p>
     */
    inline CreateApiRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the API.</p>
     */
    inline CreateApiRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline CreateApiRequest& WithDisableSchemaValidation(bool value) { SetDisableSchemaValidation(value); return *this;}


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
    inline CreateApiRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the API.</p>
     */
    inline CreateApiRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the API.</p>
     */
    inline CreateApiRequest& WithName(const char* value) { SetName(value); return *this;}


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
    inline CreateApiRequest& WithProtocolType(const ProtocolType& value) { SetProtocolType(value); return *this;}

    /**
     * <p>The API protocol: Currently only WEBSOCKET is supported.</p>
     */
    inline CreateApiRequest& WithProtocolType(ProtocolType&& value) { SetProtocolType(std::move(value)); return *this;}


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
    inline CreateApiRequest& WithRouteSelectionExpression(const Aws::String& value) { SetRouteSelectionExpression(value); return *this;}

    /**
     * <p>The route selection expression for the API.</p>
     */
    inline CreateApiRequest& WithRouteSelectionExpression(Aws::String&& value) { SetRouteSelectionExpression(std::move(value)); return *this;}

    /**
     * <p>The route selection expression for the API.</p>
     */
    inline CreateApiRequest& WithRouteSelectionExpression(const char* value) { SetRouteSelectionExpression(value); return *this;}


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
    inline CreateApiRequest& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>A version identifier for the API.</p>
     */
    inline CreateApiRequest& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>A version identifier for the API.</p>
     */
    inline CreateApiRequest& WithVersion(const char* value) { SetVersion(value); return *this;}


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
    inline CreateApiRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline CreateApiRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline CreateApiRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline CreateApiRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline CreateApiRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline CreateApiRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline CreateApiRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline CreateApiRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The key-value map of strings. The valid character set is [a-zA-Z+-=._:/]. The
     * tag key can be up to 128 characters and must not start with aws:. The tag value
     * can be up to 256 characters..</p>
     */
    inline CreateApiRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_apiKeySelectionExpression;
    bool m_apiKeySelectionExpressionHasBeenSet;

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

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
