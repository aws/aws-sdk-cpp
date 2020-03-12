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
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ApiGatewayV2
{
namespace Model
{

  /**
   * <p></p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/ImportApiRequest">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAYV2_API ImportApiRequest : public ApiGatewayV2Request
  {
  public:
    ImportApiRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportApi"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Specifies how to interpret the base path of the API during import. Valid
     * values are ignore, prepend, and split. The default value is ignore. To learn
     * more, see <a
     * href="https://alpha-docs-aws.amazon.com/apigateway/latest/developerguide/api-gateway-import-api-basePath.html">Set
     * the OpenAPI basePath Property</a>. Supported only for HTTP APIs.</p>
     */
    inline const Aws::String& GetBasepath() const{ return m_basepath; }

    /**
     * <p>Specifies how to interpret the base path of the API during import. Valid
     * values are ignore, prepend, and split. The default value is ignore. To learn
     * more, see <a
     * href="https://alpha-docs-aws.amazon.com/apigateway/latest/developerguide/api-gateway-import-api-basePath.html">Set
     * the OpenAPI basePath Property</a>. Supported only for HTTP APIs.</p>
     */
    inline bool BasepathHasBeenSet() const { return m_basepathHasBeenSet; }

    /**
     * <p>Specifies how to interpret the base path of the API during import. Valid
     * values are ignore, prepend, and split. The default value is ignore. To learn
     * more, see <a
     * href="https://alpha-docs-aws.amazon.com/apigateway/latest/developerguide/api-gateway-import-api-basePath.html">Set
     * the OpenAPI basePath Property</a>. Supported only for HTTP APIs.</p>
     */
    inline void SetBasepath(const Aws::String& value) { m_basepathHasBeenSet = true; m_basepath = value; }

    /**
     * <p>Specifies how to interpret the base path of the API during import. Valid
     * values are ignore, prepend, and split. The default value is ignore. To learn
     * more, see <a
     * href="https://alpha-docs-aws.amazon.com/apigateway/latest/developerguide/api-gateway-import-api-basePath.html">Set
     * the OpenAPI basePath Property</a>. Supported only for HTTP APIs.</p>
     */
    inline void SetBasepath(Aws::String&& value) { m_basepathHasBeenSet = true; m_basepath = std::move(value); }

    /**
     * <p>Specifies how to interpret the base path of the API during import. Valid
     * values are ignore, prepend, and split. The default value is ignore. To learn
     * more, see <a
     * href="https://alpha-docs-aws.amazon.com/apigateway/latest/developerguide/api-gateway-import-api-basePath.html">Set
     * the OpenAPI basePath Property</a>. Supported only for HTTP APIs.</p>
     */
    inline void SetBasepath(const char* value) { m_basepathHasBeenSet = true; m_basepath.assign(value); }

    /**
     * <p>Specifies how to interpret the base path of the API during import. Valid
     * values are ignore, prepend, and split. The default value is ignore. To learn
     * more, see <a
     * href="https://alpha-docs-aws.amazon.com/apigateway/latest/developerguide/api-gateway-import-api-basePath.html">Set
     * the OpenAPI basePath Property</a>. Supported only for HTTP APIs.</p>
     */
    inline ImportApiRequest& WithBasepath(const Aws::String& value) { SetBasepath(value); return *this;}

    /**
     * <p>Specifies how to interpret the base path of the API during import. Valid
     * values are ignore, prepend, and split. The default value is ignore. To learn
     * more, see <a
     * href="https://alpha-docs-aws.amazon.com/apigateway/latest/developerguide/api-gateway-import-api-basePath.html">Set
     * the OpenAPI basePath Property</a>. Supported only for HTTP APIs.</p>
     */
    inline ImportApiRequest& WithBasepath(Aws::String&& value) { SetBasepath(std::move(value)); return *this;}

    /**
     * <p>Specifies how to interpret the base path of the API during import. Valid
     * values are ignore, prepend, and split. The default value is ignore. To learn
     * more, see <a
     * href="https://alpha-docs-aws.amazon.com/apigateway/latest/developerguide/api-gateway-import-api-basePath.html">Set
     * the OpenAPI basePath Property</a>. Supported only for HTTP APIs.</p>
     */
    inline ImportApiRequest& WithBasepath(const char* value) { SetBasepath(value); return *this;}


    /**
     * <p>Specifies whether to rollback the API creation (true) or not (false) when a
     * warning is encountered. The default value is false.</p>
     */
    inline bool GetFailOnWarnings() const{ return m_failOnWarnings; }

    /**
     * <p>Specifies whether to rollback the API creation (true) or not (false) when a
     * warning is encountered. The default value is false.</p>
     */
    inline bool FailOnWarningsHasBeenSet() const { return m_failOnWarningsHasBeenSet; }

    /**
     * <p>Specifies whether to rollback the API creation (true) or not (false) when a
     * warning is encountered. The default value is false.</p>
     */
    inline void SetFailOnWarnings(bool value) { m_failOnWarningsHasBeenSet = true; m_failOnWarnings = value; }

    /**
     * <p>Specifies whether to rollback the API creation (true) or not (false) when a
     * warning is encountered. The default value is false.</p>
     */
    inline ImportApiRequest& WithFailOnWarnings(bool value) { SetFailOnWarnings(value); return *this;}


    /**
     * <p>The OpenAPI definition. Supported only for HTTP APIs.</p>
     */
    inline const Aws::String& GetRequestBody() const{ return m_requestBody; }

    /**
     * <p>The OpenAPI definition. Supported only for HTTP APIs.</p>
     */
    inline bool RequestBodyHasBeenSet() const { return m_requestBodyHasBeenSet; }

    /**
     * <p>The OpenAPI definition. Supported only for HTTP APIs.</p>
     */
    inline void SetRequestBody(const Aws::String& value) { m_requestBodyHasBeenSet = true; m_requestBody = value; }

    /**
     * <p>The OpenAPI definition. Supported only for HTTP APIs.</p>
     */
    inline void SetRequestBody(Aws::String&& value) { m_requestBodyHasBeenSet = true; m_requestBody = std::move(value); }

    /**
     * <p>The OpenAPI definition. Supported only for HTTP APIs.</p>
     */
    inline void SetRequestBody(const char* value) { m_requestBodyHasBeenSet = true; m_requestBody.assign(value); }

    /**
     * <p>The OpenAPI definition. Supported only for HTTP APIs.</p>
     */
    inline ImportApiRequest& WithRequestBody(const Aws::String& value) { SetRequestBody(value); return *this;}

    /**
     * <p>The OpenAPI definition. Supported only for HTTP APIs.</p>
     */
    inline ImportApiRequest& WithRequestBody(Aws::String&& value) { SetRequestBody(std::move(value)); return *this;}

    /**
     * <p>The OpenAPI definition. Supported only for HTTP APIs.</p>
     */
    inline ImportApiRequest& WithRequestBody(const char* value) { SetRequestBody(value); return *this;}

  private:

    Aws::String m_basepath;
    bool m_basepathHasBeenSet;

    bool m_failOnWarnings;
    bool m_failOnWarningsHasBeenSet;

    Aws::String m_requestBody;
    bool m_requestBodyHasBeenSet;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
