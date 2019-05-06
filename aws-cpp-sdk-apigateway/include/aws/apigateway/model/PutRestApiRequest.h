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
#include <aws/apigateway/model/PutMode.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace APIGateway
{
namespace Model
{

  /**
   * <p>A PUT request to update an existing API, with external API definitions
   * specified as the request body.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/PutRestApiRequest">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API PutRestApiRequest : public StreamingAPIGatewayRequest
  {
  public:
    PutRestApiRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutRestApi"; }

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


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
    inline PutRestApiRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline PutRestApiRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(std::move(value)); return *this;}

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline PutRestApiRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}


    /**
     * <p>The <code>mode</code> query parameter to specify the update mode. Valid
     * values are "merge" and "overwrite". By default, the update mode is "merge".</p>
     */
    inline const PutMode& GetMode() const{ return m_mode; }

    /**
     * <p>The <code>mode</code> query parameter to specify the update mode. Valid
     * values are "merge" and "overwrite". By default, the update mode is "merge".</p>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>The <code>mode</code> query parameter to specify the update mode. Valid
     * values are "merge" and "overwrite". By default, the update mode is "merge".</p>
     */
    inline void SetMode(const PutMode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>The <code>mode</code> query parameter to specify the update mode. Valid
     * values are "merge" and "overwrite". By default, the update mode is "merge".</p>
     */
    inline void SetMode(PutMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>The <code>mode</code> query parameter to specify the update mode. Valid
     * values are "merge" and "overwrite". By default, the update mode is "merge".</p>
     */
    inline PutRestApiRequest& WithMode(const PutMode& value) { SetMode(value); return *this;}

    /**
     * <p>The <code>mode</code> query parameter to specify the update mode. Valid
     * values are "merge" and "overwrite". By default, the update mode is "merge".</p>
     */
    inline PutRestApiRequest& WithMode(PutMode&& value) { SetMode(std::move(value)); return *this;}


    /**
     * <p>A query parameter to indicate whether to rollback the API update
     * (<code>true</code>) or not (<code>false</code>) when a warning is encountered.
     * The default value is <code>false</code>.</p>
     */
    inline bool GetFailOnWarnings() const{ return m_failOnWarnings; }

    /**
     * <p>A query parameter to indicate whether to rollback the API update
     * (<code>true</code>) or not (<code>false</code>) when a warning is encountered.
     * The default value is <code>false</code>.</p>
     */
    inline bool FailOnWarningsHasBeenSet() const { return m_failOnWarningsHasBeenSet; }

    /**
     * <p>A query parameter to indicate whether to rollback the API update
     * (<code>true</code>) or not (<code>false</code>) when a warning is encountered.
     * The default value is <code>false</code>.</p>
     */
    inline void SetFailOnWarnings(bool value) { m_failOnWarningsHasBeenSet = true; m_failOnWarnings = value; }

    /**
     * <p>A query parameter to indicate whether to rollback the API update
     * (<code>true</code>) or not (<code>false</code>) when a warning is encountered.
     * The default value is <code>false</code>.</p>
     */
    inline PutRestApiRequest& WithFailOnWarnings(bool value) { SetFailOnWarnings(value); return *this;}


    /**
     * <p>Custom header parameters as part of the request. For example, to exclude
     * <a>DocumentationParts</a> from an imported API, set
     * <code>ignore=documentation</code> as a <code>parameters</code> value, as in the
     * AWS CLI command of <code>aws apigateway import-rest-api --parameters
     * ignore=documentation --body 'file:///path/to/imported-api-body.json'</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }

    /**
     * <p>Custom header parameters as part of the request. For example, to exclude
     * <a>DocumentationParts</a> from an imported API, set
     * <code>ignore=documentation</code> as a <code>parameters</code> value, as in the
     * AWS CLI command of <code>aws apigateway import-rest-api --parameters
     * ignore=documentation --body 'file:///path/to/imported-api-body.json'</code>.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>Custom header parameters as part of the request. For example, to exclude
     * <a>DocumentationParts</a> from an imported API, set
     * <code>ignore=documentation</code> as a <code>parameters</code> value, as in the
     * AWS CLI command of <code>aws apigateway import-rest-api --parameters
     * ignore=documentation --body 'file:///path/to/imported-api-body.json'</code>.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>Custom header parameters as part of the request. For example, to exclude
     * <a>DocumentationParts</a> from an imported API, set
     * <code>ignore=documentation</code> as a <code>parameters</code> value, as in the
     * AWS CLI command of <code>aws apigateway import-rest-api --parameters
     * ignore=documentation --body 'file:///path/to/imported-api-body.json'</code>.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>Custom header parameters as part of the request. For example, to exclude
     * <a>DocumentationParts</a> from an imported API, set
     * <code>ignore=documentation</code> as a <code>parameters</code> value, as in the
     * AWS CLI command of <code>aws apigateway import-rest-api --parameters
     * ignore=documentation --body 'file:///path/to/imported-api-body.json'</code>.</p>
     */
    inline PutRestApiRequest& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}

    /**
     * <p>Custom header parameters as part of the request. For example, to exclude
     * <a>DocumentationParts</a> from an imported API, set
     * <code>ignore=documentation</code> as a <code>parameters</code> value, as in the
     * AWS CLI command of <code>aws apigateway import-rest-api --parameters
     * ignore=documentation --body 'file:///path/to/imported-api-body.json'</code>.</p>
     */
    inline PutRestApiRequest& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>Custom header parameters as part of the request. For example, to exclude
     * <a>DocumentationParts</a> from an imported API, set
     * <code>ignore=documentation</code> as a <code>parameters</code> value, as in the
     * AWS CLI command of <code>aws apigateway import-rest-api --parameters
     * ignore=documentation --body 'file:///path/to/imported-api-body.json'</code>.</p>
     */
    inline PutRestApiRequest& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>Custom header parameters as part of the request. For example, to exclude
     * <a>DocumentationParts</a> from an imported API, set
     * <code>ignore=documentation</code> as a <code>parameters</code> value, as in the
     * AWS CLI command of <code>aws apigateway import-rest-api --parameters
     * ignore=documentation --body 'file:///path/to/imported-api-body.json'</code>.</p>
     */
    inline PutRestApiRequest& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Custom header parameters as part of the request. For example, to exclude
     * <a>DocumentationParts</a> from an imported API, set
     * <code>ignore=documentation</code> as a <code>parameters</code> value, as in the
     * AWS CLI command of <code>aws apigateway import-rest-api --parameters
     * ignore=documentation --body 'file:///path/to/imported-api-body.json'</code>.</p>
     */
    inline PutRestApiRequest& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Custom header parameters as part of the request. For example, to exclude
     * <a>DocumentationParts</a> from an imported API, set
     * <code>ignore=documentation</code> as a <code>parameters</code> value, as in the
     * AWS CLI command of <code>aws apigateway import-rest-api --parameters
     * ignore=documentation --body 'file:///path/to/imported-api-body.json'</code>.</p>
     */
    inline PutRestApiRequest& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Custom header parameters as part of the request. For example, to exclude
     * <a>DocumentationParts</a> from an imported API, set
     * <code>ignore=documentation</code> as a <code>parameters</code> value, as in the
     * AWS CLI command of <code>aws apigateway import-rest-api --parameters
     * ignore=documentation --body 'file:///path/to/imported-api-body.json'</code>.</p>
     */
    inline PutRestApiRequest& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Custom header parameters as part of the request. For example, to exclude
     * <a>DocumentationParts</a> from an imported API, set
     * <code>ignore=documentation</code> as a <code>parameters</code> value, as in the
     * AWS CLI command of <code>aws apigateway import-rest-api --parameters
     * ignore=documentation --body 'file:///path/to/imported-api-body.json'</code>.</p>
     */
    inline PutRestApiRequest& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Custom header parameters as part of the request. For example, to exclude
     * <a>DocumentationParts</a> from an imported API, set
     * <code>ignore=documentation</code> as a <code>parameters</code> value, as in the
     * AWS CLI command of <code>aws apigateway import-rest-api --parameters
     * ignore=documentation --body 'file:///path/to/imported-api-body.json'</code>.</p>
     */
    inline PutRestApiRequest& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

  private:

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;

    PutMode m_mode;
    bool m_modeHasBeenSet;

    bool m_failOnWarnings;
    bool m_failOnWarningsHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet;

  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
