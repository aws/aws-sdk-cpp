/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/ReimportApiRequest">AWS
   * API Reference</a></p>
   */
  class ReimportApiRequest : public ApiGatewayV2Request
  {
  public:
    AWS_APIGATEWAYV2_API ReimportApiRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ReimportApi"; }

    AWS_APIGATEWAYV2_API Aws::String SerializePayload() const override;

    AWS_APIGATEWAYV2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The API identifier.</p>
     */
    inline const Aws::String& GetApiId() const { return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    template<typename ApiIdT = Aws::String>
    void SetApiId(ApiIdT&& value) { m_apiIdHasBeenSet = true; m_apiId = std::forward<ApiIdT>(value); }
    template<typename ApiIdT = Aws::String>
    ReimportApiRequest& WithApiId(ApiIdT&& value) { SetApiId(std::forward<ApiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how to interpret the base path of the API during import. Valid
     * values are ignore, prepend, and split. The default value is ignore. To learn
     * more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/api-gateway-import-api-basePath.html">Set
     * the OpenAPI basePath Property</a>. Supported only for HTTP APIs.</p>
     */
    inline const Aws::String& GetBasepath() const { return m_basepath; }
    inline bool BasepathHasBeenSet() const { return m_basepathHasBeenSet; }
    template<typename BasepathT = Aws::String>
    void SetBasepath(BasepathT&& value) { m_basepathHasBeenSet = true; m_basepath = std::forward<BasepathT>(value); }
    template<typename BasepathT = Aws::String>
    ReimportApiRequest& WithBasepath(BasepathT&& value) { SetBasepath(std::forward<BasepathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to rollback the API creation when a warning is encountered.
     * By default, API creation continues if a warning is encountered.</p>
     */
    inline bool GetFailOnWarnings() const { return m_failOnWarnings; }
    inline bool FailOnWarningsHasBeenSet() const { return m_failOnWarningsHasBeenSet; }
    inline void SetFailOnWarnings(bool value) { m_failOnWarningsHasBeenSet = true; m_failOnWarnings = value; }
    inline ReimportApiRequest& WithFailOnWarnings(bool value) { SetFailOnWarnings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OpenAPI definition. Supported only for HTTP APIs.</p>
     */
    inline const Aws::String& GetRequestBody() const { return m_requestBody; }
    inline bool RequestBodyHasBeenSet() const { return m_requestBodyHasBeenSet; }
    template<typename RequestBodyT = Aws::String>
    void SetRequestBody(RequestBodyT&& value) { m_requestBodyHasBeenSet = true; m_requestBody = std::forward<RequestBodyT>(value); }
    template<typename RequestBodyT = Aws::String>
    ReimportApiRequest& WithRequestBody(RequestBodyT&& value) { SetRequestBody(std::forward<RequestBodyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    Aws::String m_basepath;
    bool m_basepathHasBeenSet = false;

    bool m_failOnWarnings{false};
    bool m_failOnWarningsHasBeenSet = false;

    Aws::String m_requestBody;
    bool m_requestBodyHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
