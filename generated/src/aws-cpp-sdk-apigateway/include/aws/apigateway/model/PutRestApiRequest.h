/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class PutRestApiRequest : public StreamingAPIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API PutRestApiRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutRestApi"; }

    AWS_APIGATEWAY_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline const Aws::String& GetRestApiId() const { return m_restApiId; }
    inline bool RestApiIdHasBeenSet() const { return m_restApiIdHasBeenSet; }
    template<typename RestApiIdT = Aws::String>
    void SetRestApiId(RestApiIdT&& value) { m_restApiIdHasBeenSet = true; m_restApiId = std::forward<RestApiIdT>(value); }
    template<typename RestApiIdT = Aws::String>
    PutRestApiRequest& WithRestApiId(RestApiIdT&& value) { SetRestApiId(std::forward<RestApiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>mode</code> query parameter to specify the update mode. Valid
     * values are "merge" and "overwrite". By default, the update mode is "merge".</p>
     */
    inline PutMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(PutMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline PutRestApiRequest& WithMode(PutMode value) { SetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A query parameter to indicate whether to rollback the API update
     * (<code>true</code>) or not (<code>false</code>) when a warning is encountered.
     * The default value is <code>false</code>.</p>
     */
    inline bool GetFailOnWarnings() const { return m_failOnWarnings; }
    inline bool FailOnWarningsHasBeenSet() const { return m_failOnWarningsHasBeenSet; }
    inline void SetFailOnWarnings(bool value) { m_failOnWarningsHasBeenSet = true; m_failOnWarnings = value; }
    inline PutRestApiRequest& WithFailOnWarnings(bool value) { SetFailOnWarnings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Custom header parameters as part of the request. For example, to exclude
     * DocumentationParts from an imported API, set <code>ignore=documentation</code>
     * as a <code>parameters</code> value, as in the AWS CLI command of <code>aws
     * apigateway import-rest-api --parameters ignore=documentation --body
     * 'file:///path/to/imported-api-body.json'</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    PutRestApiRequest& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::String>
    PutRestApiRequest& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet = false;

    PutMode m_mode{PutMode::NOT_SET};
    bool m_modeHasBeenSet = false;

    bool m_failOnWarnings{false};
    bool m_failOnWarningsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;

  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
