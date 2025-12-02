/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/RestApiMethod.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>Specifies which operations from an API Gateway REST API are exposed as tools.
 * Tool names and descriptions are derived from the operationId and description
 * fields in the API's exported OpenAPI specification.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ApiGatewayToolFilter">AWS
 * API Reference</a></p>
 */
class ApiGatewayToolFilter {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ApiGatewayToolFilter() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ApiGatewayToolFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API ApiGatewayToolFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Resource path to match in the REST API. Supports exact paths (for example,
   * <code>/pets</code>) or wildcard paths (for example, <code>/pets/ *</code> to
   * match all paths under <code>/pets</code>). Must match existing paths in the REST
   * API.</p>
   */
  inline const Aws::String& GetFilterPath() const { return m_filterPath; }
  inline bool FilterPathHasBeenSet() const { return m_filterPathHasBeenSet; }
  template <typename FilterPathT = Aws::String>
  void SetFilterPath(FilterPathT&& value) {
    m_filterPathHasBeenSet = true;
    m_filterPath = std::forward<FilterPathT>(value);
  }
  template <typename FilterPathT = Aws::String>
  ApiGatewayToolFilter& WithFilterPath(FilterPathT&& value) {
    SetFilterPath(std::forward<FilterPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The methods to filter for.</p>
   */
  inline const Aws::Vector<RestApiMethod>& GetMethods() const { return m_methods; }
  inline bool MethodsHasBeenSet() const { return m_methodsHasBeenSet; }
  template <typename MethodsT = Aws::Vector<RestApiMethod>>
  void SetMethods(MethodsT&& value) {
    m_methodsHasBeenSet = true;
    m_methods = std::forward<MethodsT>(value);
  }
  template <typename MethodsT = Aws::Vector<RestApiMethod>>
  ApiGatewayToolFilter& WithMethods(MethodsT&& value) {
    SetMethods(std::forward<MethodsT>(value));
    return *this;
  }
  inline ApiGatewayToolFilter& AddMethods(RestApiMethod value) {
    m_methodsHasBeenSet = true;
    m_methods.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_filterPath;
  bool m_filterPathHasBeenSet = false;

  Aws::Vector<RestApiMethod> m_methods;
  bool m_methodsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
