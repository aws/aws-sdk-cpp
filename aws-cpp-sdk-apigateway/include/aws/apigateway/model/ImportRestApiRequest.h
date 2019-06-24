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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A POST request to import an API to API Gateway using an input of an API
   * definition file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/ImportRestApiRequest">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API ImportRestApiRequest : public StreamingAPIGatewayRequest
  {
  public:
    ImportRestApiRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportRestApi"; }

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>A query parameter to indicate whether to rollback the API creation
     * (<code>true</code>) or not (<code>false</code>) when a warning is encountered.
     * The default value is <code>false</code>.</p>
     */
    inline bool GetFailOnWarnings() const{ return m_failOnWarnings; }

    /**
     * <p>A query parameter to indicate whether to rollback the API creation
     * (<code>true</code>) or not (<code>false</code>) when a warning is encountered.
     * The default value is <code>false</code>.</p>
     */
    inline bool FailOnWarningsHasBeenSet() const { return m_failOnWarningsHasBeenSet; }

    /**
     * <p>A query parameter to indicate whether to rollback the API creation
     * (<code>true</code>) or not (<code>false</code>) when a warning is encountered.
     * The default value is <code>false</code>.</p>
     */
    inline void SetFailOnWarnings(bool value) { m_failOnWarningsHasBeenSet = true; m_failOnWarnings = value; }

    /**
     * <p>A query parameter to indicate whether to rollback the API creation
     * (<code>true</code>) or not (<code>false</code>) when a warning is encountered.
     * The default value is <code>false</code>.</p>
     */
    inline ImportRestApiRequest& WithFailOnWarnings(bool value) { SetFailOnWarnings(value); return *this;}


    /**
     * <p>A key-value map of context-specific query string parameters specifying the
     * behavior of different API importing operations. The following shows
     * operation-specific parameters and their supported values.</p> <p> To exclude
     * <a>DocumentationParts</a> from the import, set <code>parameters</code> as
     * <code>ignore=documentation</code>.</p> <p> To configure the endpoint type, set
     * <code>parameters</code> as <code>endpointConfigurationTypes=EDGE</code>,
     * <code>endpointConfigurationTypes=REGIONAL</code>, or
     * <code>endpointConfigurationTypes=PRIVATE</code>. The default endpoint type is
     * <code>EDGE</code>.</p> <p> To handle imported <code>basepath</code>, set
     * <code>parameters</code> as <code>basepath=ignore</code>,
     * <code>basepath=prepend</code> or <code>basepath=split</code>.</p> <p>For
     * example, the AWS CLI command to exclude documentation from the imported API
     * is:</p> <pre><code>aws apigateway import-rest-api --parameters
     * ignore=documentation --body
     * 'file:///path/to/imported-api-body.json'</code></pre> <p>The AWS CLI command to
     * set the regional endpoint on the imported API is:</p> <pre><code>aws apigateway
     * import-rest-api --parameters endpointConfigurationTypes=REGIONAL --body
     * 'file:///path/to/imported-api-body.json'</code></pre>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }

    /**
     * <p>A key-value map of context-specific query string parameters specifying the
     * behavior of different API importing operations. The following shows
     * operation-specific parameters and their supported values.</p> <p> To exclude
     * <a>DocumentationParts</a> from the import, set <code>parameters</code> as
     * <code>ignore=documentation</code>.</p> <p> To configure the endpoint type, set
     * <code>parameters</code> as <code>endpointConfigurationTypes=EDGE</code>,
     * <code>endpointConfigurationTypes=REGIONAL</code>, or
     * <code>endpointConfigurationTypes=PRIVATE</code>. The default endpoint type is
     * <code>EDGE</code>.</p> <p> To handle imported <code>basepath</code>, set
     * <code>parameters</code> as <code>basepath=ignore</code>,
     * <code>basepath=prepend</code> or <code>basepath=split</code>.</p> <p>For
     * example, the AWS CLI command to exclude documentation from the imported API
     * is:</p> <pre><code>aws apigateway import-rest-api --parameters
     * ignore=documentation --body
     * 'file:///path/to/imported-api-body.json'</code></pre> <p>The AWS CLI command to
     * set the regional endpoint on the imported API is:</p> <pre><code>aws apigateway
     * import-rest-api --parameters endpointConfigurationTypes=REGIONAL --body
     * 'file:///path/to/imported-api-body.json'</code></pre>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>A key-value map of context-specific query string parameters specifying the
     * behavior of different API importing operations. The following shows
     * operation-specific parameters and their supported values.</p> <p> To exclude
     * <a>DocumentationParts</a> from the import, set <code>parameters</code> as
     * <code>ignore=documentation</code>.</p> <p> To configure the endpoint type, set
     * <code>parameters</code> as <code>endpointConfigurationTypes=EDGE</code>,
     * <code>endpointConfigurationTypes=REGIONAL</code>, or
     * <code>endpointConfigurationTypes=PRIVATE</code>. The default endpoint type is
     * <code>EDGE</code>.</p> <p> To handle imported <code>basepath</code>, set
     * <code>parameters</code> as <code>basepath=ignore</code>,
     * <code>basepath=prepend</code> or <code>basepath=split</code>.</p> <p>For
     * example, the AWS CLI command to exclude documentation from the imported API
     * is:</p> <pre><code>aws apigateway import-rest-api --parameters
     * ignore=documentation --body
     * 'file:///path/to/imported-api-body.json'</code></pre> <p>The AWS CLI command to
     * set the regional endpoint on the imported API is:</p> <pre><code>aws apigateway
     * import-rest-api --parameters endpointConfigurationTypes=REGIONAL --body
     * 'file:///path/to/imported-api-body.json'</code></pre>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>A key-value map of context-specific query string parameters specifying the
     * behavior of different API importing operations. The following shows
     * operation-specific parameters and their supported values.</p> <p> To exclude
     * <a>DocumentationParts</a> from the import, set <code>parameters</code> as
     * <code>ignore=documentation</code>.</p> <p> To configure the endpoint type, set
     * <code>parameters</code> as <code>endpointConfigurationTypes=EDGE</code>,
     * <code>endpointConfigurationTypes=REGIONAL</code>, or
     * <code>endpointConfigurationTypes=PRIVATE</code>. The default endpoint type is
     * <code>EDGE</code>.</p> <p> To handle imported <code>basepath</code>, set
     * <code>parameters</code> as <code>basepath=ignore</code>,
     * <code>basepath=prepend</code> or <code>basepath=split</code>.</p> <p>For
     * example, the AWS CLI command to exclude documentation from the imported API
     * is:</p> <pre><code>aws apigateway import-rest-api --parameters
     * ignore=documentation --body
     * 'file:///path/to/imported-api-body.json'</code></pre> <p>The AWS CLI command to
     * set the regional endpoint on the imported API is:</p> <pre><code>aws apigateway
     * import-rest-api --parameters endpointConfigurationTypes=REGIONAL --body
     * 'file:///path/to/imported-api-body.json'</code></pre>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>A key-value map of context-specific query string parameters specifying the
     * behavior of different API importing operations. The following shows
     * operation-specific parameters and their supported values.</p> <p> To exclude
     * <a>DocumentationParts</a> from the import, set <code>parameters</code> as
     * <code>ignore=documentation</code>.</p> <p> To configure the endpoint type, set
     * <code>parameters</code> as <code>endpointConfigurationTypes=EDGE</code>,
     * <code>endpointConfigurationTypes=REGIONAL</code>, or
     * <code>endpointConfigurationTypes=PRIVATE</code>. The default endpoint type is
     * <code>EDGE</code>.</p> <p> To handle imported <code>basepath</code>, set
     * <code>parameters</code> as <code>basepath=ignore</code>,
     * <code>basepath=prepend</code> or <code>basepath=split</code>.</p> <p>For
     * example, the AWS CLI command to exclude documentation from the imported API
     * is:</p> <pre><code>aws apigateway import-rest-api --parameters
     * ignore=documentation --body
     * 'file:///path/to/imported-api-body.json'</code></pre> <p>The AWS CLI command to
     * set the regional endpoint on the imported API is:</p> <pre><code>aws apigateway
     * import-rest-api --parameters endpointConfigurationTypes=REGIONAL --body
     * 'file:///path/to/imported-api-body.json'</code></pre>
     */
    inline ImportRestApiRequest& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}

    /**
     * <p>A key-value map of context-specific query string parameters specifying the
     * behavior of different API importing operations. The following shows
     * operation-specific parameters and their supported values.</p> <p> To exclude
     * <a>DocumentationParts</a> from the import, set <code>parameters</code> as
     * <code>ignore=documentation</code>.</p> <p> To configure the endpoint type, set
     * <code>parameters</code> as <code>endpointConfigurationTypes=EDGE</code>,
     * <code>endpointConfigurationTypes=REGIONAL</code>, or
     * <code>endpointConfigurationTypes=PRIVATE</code>. The default endpoint type is
     * <code>EDGE</code>.</p> <p> To handle imported <code>basepath</code>, set
     * <code>parameters</code> as <code>basepath=ignore</code>,
     * <code>basepath=prepend</code> or <code>basepath=split</code>.</p> <p>For
     * example, the AWS CLI command to exclude documentation from the imported API
     * is:</p> <pre><code>aws apigateway import-rest-api --parameters
     * ignore=documentation --body
     * 'file:///path/to/imported-api-body.json'</code></pre> <p>The AWS CLI command to
     * set the regional endpoint on the imported API is:</p> <pre><code>aws apigateway
     * import-rest-api --parameters endpointConfigurationTypes=REGIONAL --body
     * 'file:///path/to/imported-api-body.json'</code></pre>
     */
    inline ImportRestApiRequest& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>A key-value map of context-specific query string parameters specifying the
     * behavior of different API importing operations. The following shows
     * operation-specific parameters and their supported values.</p> <p> To exclude
     * <a>DocumentationParts</a> from the import, set <code>parameters</code> as
     * <code>ignore=documentation</code>.</p> <p> To configure the endpoint type, set
     * <code>parameters</code> as <code>endpointConfigurationTypes=EDGE</code>,
     * <code>endpointConfigurationTypes=REGIONAL</code>, or
     * <code>endpointConfigurationTypes=PRIVATE</code>. The default endpoint type is
     * <code>EDGE</code>.</p> <p> To handle imported <code>basepath</code>, set
     * <code>parameters</code> as <code>basepath=ignore</code>,
     * <code>basepath=prepend</code> or <code>basepath=split</code>.</p> <p>For
     * example, the AWS CLI command to exclude documentation from the imported API
     * is:</p> <pre><code>aws apigateway import-rest-api --parameters
     * ignore=documentation --body
     * 'file:///path/to/imported-api-body.json'</code></pre> <p>The AWS CLI command to
     * set the regional endpoint on the imported API is:</p> <pre><code>aws apigateway
     * import-rest-api --parameters endpointConfigurationTypes=REGIONAL --body
     * 'file:///path/to/imported-api-body.json'</code></pre>
     */
    inline ImportRestApiRequest& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>A key-value map of context-specific query string parameters specifying the
     * behavior of different API importing operations. The following shows
     * operation-specific parameters and their supported values.</p> <p> To exclude
     * <a>DocumentationParts</a> from the import, set <code>parameters</code> as
     * <code>ignore=documentation</code>.</p> <p> To configure the endpoint type, set
     * <code>parameters</code> as <code>endpointConfigurationTypes=EDGE</code>,
     * <code>endpointConfigurationTypes=REGIONAL</code>, or
     * <code>endpointConfigurationTypes=PRIVATE</code>. The default endpoint type is
     * <code>EDGE</code>.</p> <p> To handle imported <code>basepath</code>, set
     * <code>parameters</code> as <code>basepath=ignore</code>,
     * <code>basepath=prepend</code> or <code>basepath=split</code>.</p> <p>For
     * example, the AWS CLI command to exclude documentation from the imported API
     * is:</p> <pre><code>aws apigateway import-rest-api --parameters
     * ignore=documentation --body
     * 'file:///path/to/imported-api-body.json'</code></pre> <p>The AWS CLI command to
     * set the regional endpoint on the imported API is:</p> <pre><code>aws apigateway
     * import-rest-api --parameters endpointConfigurationTypes=REGIONAL --body
     * 'file:///path/to/imported-api-body.json'</code></pre>
     */
    inline ImportRestApiRequest& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key-value map of context-specific query string parameters specifying the
     * behavior of different API importing operations. The following shows
     * operation-specific parameters and their supported values.</p> <p> To exclude
     * <a>DocumentationParts</a> from the import, set <code>parameters</code> as
     * <code>ignore=documentation</code>.</p> <p> To configure the endpoint type, set
     * <code>parameters</code> as <code>endpointConfigurationTypes=EDGE</code>,
     * <code>endpointConfigurationTypes=REGIONAL</code>, or
     * <code>endpointConfigurationTypes=PRIVATE</code>. The default endpoint type is
     * <code>EDGE</code>.</p> <p> To handle imported <code>basepath</code>, set
     * <code>parameters</code> as <code>basepath=ignore</code>,
     * <code>basepath=prepend</code> or <code>basepath=split</code>.</p> <p>For
     * example, the AWS CLI command to exclude documentation from the imported API
     * is:</p> <pre><code>aws apigateway import-rest-api --parameters
     * ignore=documentation --body
     * 'file:///path/to/imported-api-body.json'</code></pre> <p>The AWS CLI command to
     * set the regional endpoint on the imported API is:</p> <pre><code>aws apigateway
     * import-rest-api --parameters endpointConfigurationTypes=REGIONAL --body
     * 'file:///path/to/imported-api-body.json'</code></pre>
     */
    inline ImportRestApiRequest& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key-value map of context-specific query string parameters specifying the
     * behavior of different API importing operations. The following shows
     * operation-specific parameters and their supported values.</p> <p> To exclude
     * <a>DocumentationParts</a> from the import, set <code>parameters</code> as
     * <code>ignore=documentation</code>.</p> <p> To configure the endpoint type, set
     * <code>parameters</code> as <code>endpointConfigurationTypes=EDGE</code>,
     * <code>endpointConfigurationTypes=REGIONAL</code>, or
     * <code>endpointConfigurationTypes=PRIVATE</code>. The default endpoint type is
     * <code>EDGE</code>.</p> <p> To handle imported <code>basepath</code>, set
     * <code>parameters</code> as <code>basepath=ignore</code>,
     * <code>basepath=prepend</code> or <code>basepath=split</code>.</p> <p>For
     * example, the AWS CLI command to exclude documentation from the imported API
     * is:</p> <pre><code>aws apigateway import-rest-api --parameters
     * ignore=documentation --body
     * 'file:///path/to/imported-api-body.json'</code></pre> <p>The AWS CLI command to
     * set the regional endpoint on the imported API is:</p> <pre><code>aws apigateway
     * import-rest-api --parameters endpointConfigurationTypes=REGIONAL --body
     * 'file:///path/to/imported-api-body.json'</code></pre>
     */
    inline ImportRestApiRequest& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A key-value map of context-specific query string parameters specifying the
     * behavior of different API importing operations. The following shows
     * operation-specific parameters and their supported values.</p> <p> To exclude
     * <a>DocumentationParts</a> from the import, set <code>parameters</code> as
     * <code>ignore=documentation</code>.</p> <p> To configure the endpoint type, set
     * <code>parameters</code> as <code>endpointConfigurationTypes=EDGE</code>,
     * <code>endpointConfigurationTypes=REGIONAL</code>, or
     * <code>endpointConfigurationTypes=PRIVATE</code>. The default endpoint type is
     * <code>EDGE</code>.</p> <p> To handle imported <code>basepath</code>, set
     * <code>parameters</code> as <code>basepath=ignore</code>,
     * <code>basepath=prepend</code> or <code>basepath=split</code>.</p> <p>For
     * example, the AWS CLI command to exclude documentation from the imported API
     * is:</p> <pre><code>aws apigateway import-rest-api --parameters
     * ignore=documentation --body
     * 'file:///path/to/imported-api-body.json'</code></pre> <p>The AWS CLI command to
     * set the regional endpoint on the imported API is:</p> <pre><code>aws apigateway
     * import-rest-api --parameters endpointConfigurationTypes=REGIONAL --body
     * 'file:///path/to/imported-api-body.json'</code></pre>
     */
    inline ImportRestApiRequest& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key-value map of context-specific query string parameters specifying the
     * behavior of different API importing operations. The following shows
     * operation-specific parameters and their supported values.</p> <p> To exclude
     * <a>DocumentationParts</a> from the import, set <code>parameters</code> as
     * <code>ignore=documentation</code>.</p> <p> To configure the endpoint type, set
     * <code>parameters</code> as <code>endpointConfigurationTypes=EDGE</code>,
     * <code>endpointConfigurationTypes=REGIONAL</code>, or
     * <code>endpointConfigurationTypes=PRIVATE</code>. The default endpoint type is
     * <code>EDGE</code>.</p> <p> To handle imported <code>basepath</code>, set
     * <code>parameters</code> as <code>basepath=ignore</code>,
     * <code>basepath=prepend</code> or <code>basepath=split</code>.</p> <p>For
     * example, the AWS CLI command to exclude documentation from the imported API
     * is:</p> <pre><code>aws apigateway import-rest-api --parameters
     * ignore=documentation --body
     * 'file:///path/to/imported-api-body.json'</code></pre> <p>The AWS CLI command to
     * set the regional endpoint on the imported API is:</p> <pre><code>aws apigateway
     * import-rest-api --parameters endpointConfigurationTypes=REGIONAL --body
     * 'file:///path/to/imported-api-body.json'</code></pre>
     */
    inline ImportRestApiRequest& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key-value map of context-specific query string parameters specifying the
     * behavior of different API importing operations. The following shows
     * operation-specific parameters and their supported values.</p> <p> To exclude
     * <a>DocumentationParts</a> from the import, set <code>parameters</code> as
     * <code>ignore=documentation</code>.</p> <p> To configure the endpoint type, set
     * <code>parameters</code> as <code>endpointConfigurationTypes=EDGE</code>,
     * <code>endpointConfigurationTypes=REGIONAL</code>, or
     * <code>endpointConfigurationTypes=PRIVATE</code>. The default endpoint type is
     * <code>EDGE</code>.</p> <p> To handle imported <code>basepath</code>, set
     * <code>parameters</code> as <code>basepath=ignore</code>,
     * <code>basepath=prepend</code> or <code>basepath=split</code>.</p> <p>For
     * example, the AWS CLI command to exclude documentation from the imported API
     * is:</p> <pre><code>aws apigateway import-rest-api --parameters
     * ignore=documentation --body
     * 'file:///path/to/imported-api-body.json'</code></pre> <p>The AWS CLI command to
     * set the regional endpoint on the imported API is:</p> <pre><code>aws apigateway
     * import-rest-api --parameters endpointConfigurationTypes=REGIONAL --body
     * 'file:///path/to/imported-api-body.json'</code></pre>
     */
    inline ImportRestApiRequest& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

  private:

    bool m_failOnWarnings;
    bool m_failOnWarningsHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet;

  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
