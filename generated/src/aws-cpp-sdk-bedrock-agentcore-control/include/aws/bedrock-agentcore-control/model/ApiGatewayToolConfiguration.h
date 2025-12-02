/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/ApiGatewayToolFilter.h>
#include <aws/bedrock-agentcore-control/model/ApiGatewayToolOverride.h>
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
 * <p>The configuration for defining REST API tool filters and overrides for the
 * gateway target.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ApiGatewayToolConfiguration">AWS
 * API Reference</a></p>
 */
class ApiGatewayToolConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ApiGatewayToolConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ApiGatewayToolConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API ApiGatewayToolConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of explicit tool definitions with optional custom names and
   * descriptions.</p>
   */
  inline const Aws::Vector<ApiGatewayToolOverride>& GetToolOverrides() const { return m_toolOverrides; }
  inline bool ToolOverridesHasBeenSet() const { return m_toolOverridesHasBeenSet; }
  template <typename ToolOverridesT = Aws::Vector<ApiGatewayToolOverride>>
  void SetToolOverrides(ToolOverridesT&& value) {
    m_toolOverridesHasBeenSet = true;
    m_toolOverrides = std::forward<ToolOverridesT>(value);
  }
  template <typename ToolOverridesT = Aws::Vector<ApiGatewayToolOverride>>
  ApiGatewayToolConfiguration& WithToolOverrides(ToolOverridesT&& value) {
    SetToolOverrides(std::forward<ToolOverridesT>(value));
    return *this;
  }
  template <typename ToolOverridesT = ApiGatewayToolOverride>
  ApiGatewayToolConfiguration& AddToolOverrides(ToolOverridesT&& value) {
    m_toolOverridesHasBeenSet = true;
    m_toolOverrides.emplace_back(std::forward<ToolOverridesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of path and method patterns to expose as tools using metadata from the
   * REST API's OpenAPI specification.</p>
   */
  inline const Aws::Vector<ApiGatewayToolFilter>& GetToolFilters() const { return m_toolFilters; }
  inline bool ToolFiltersHasBeenSet() const { return m_toolFiltersHasBeenSet; }
  template <typename ToolFiltersT = Aws::Vector<ApiGatewayToolFilter>>
  void SetToolFilters(ToolFiltersT&& value) {
    m_toolFiltersHasBeenSet = true;
    m_toolFilters = std::forward<ToolFiltersT>(value);
  }
  template <typename ToolFiltersT = Aws::Vector<ApiGatewayToolFilter>>
  ApiGatewayToolConfiguration& WithToolFilters(ToolFiltersT&& value) {
    SetToolFilters(std::forward<ToolFiltersT>(value));
    return *this;
  }
  template <typename ToolFiltersT = ApiGatewayToolFilter>
  ApiGatewayToolConfiguration& AddToolFilters(ToolFiltersT&& value) {
    m_toolFiltersHasBeenSet = true;
    m_toolFilters.emplace_back(std::forward<ToolFiltersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ApiGatewayToolOverride> m_toolOverrides;
  bool m_toolOverridesHasBeenSet = false;

  Aws::Vector<ApiGatewayToolFilter> m_toolFilters;
  bool m_toolFiltersHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
