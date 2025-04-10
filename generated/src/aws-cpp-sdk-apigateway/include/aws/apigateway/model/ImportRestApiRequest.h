﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ImportRestApiRequest : public StreamingAPIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API ImportRestApiRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportRestApi"; }

    AWS_APIGATEWAY_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>A query parameter to indicate whether to rollback the API creation
     * (<code>true</code>) or not (<code>false</code>) when a warning is encountered.
     * The default value is <code>false</code>.</p>
     */
    inline bool GetFailOnWarnings() const { return m_failOnWarnings; }
    inline bool FailOnWarningsHasBeenSet() const { return m_failOnWarningsHasBeenSet; }
    inline void SetFailOnWarnings(bool value) { m_failOnWarningsHasBeenSet = true; m_failOnWarnings = value; }
    inline ImportRestApiRequest& WithFailOnWarnings(bool value) { SetFailOnWarnings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key-value map of context-specific query string parameters specifying the
     * behavior of different API importing operations. The following shows
     * operation-specific parameters and their supported values.</p> <p> To exclude
     * DocumentationParts from the import, set <code>parameters</code> as
     * <code>ignore=documentation</code>.</p> <p> To configure the endpoint type, set
     * <code>parameters</code> as <code>endpointConfigurationTypes=EDGE</code>,
     * <code>endpointConfigurationTypes=REGIONAL</code>, or
     * <code>endpointConfigurationTypes=PRIVATE</code>. The default endpoint type is
     * <code>EDGE</code>.</p> <p> To handle imported <code>basepath</code>, set
     * <code>parameters</code> as <code>basepath=ignore</code>,
     * <code>basepath=prepend</code> or <code>basepath=split</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    ImportRestApiRequest& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::String>
    ImportRestApiRequest& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}
  private:

    bool m_failOnWarnings{false};
    bool m_failOnWarningsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;

  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
