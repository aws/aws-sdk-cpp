/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/ApiGatewayToolConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>The configuration for an Amazon API Gateway target.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ApiGatewayTargetConfiguration">AWS
 * API Reference</a></p>
 */
class ApiGatewayTargetConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ApiGatewayTargetConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ApiGatewayTargetConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API ApiGatewayTargetConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the API Gateway REST API.</p>
   */
  inline const Aws::String& GetRestApiId() const { return m_restApiId; }
  inline bool RestApiIdHasBeenSet() const { return m_restApiIdHasBeenSet; }
  template <typename RestApiIdT = Aws::String>
  void SetRestApiId(RestApiIdT&& value) {
    m_restApiIdHasBeenSet = true;
    m_restApiId = std::forward<RestApiIdT>(value);
  }
  template <typename RestApiIdT = Aws::String>
  ApiGatewayTargetConfiguration& WithRestApiId(RestApiIdT&& value) {
    SetRestApiId(std::forward<RestApiIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the stage of the REST API to add as a target.</p>
   */
  inline const Aws::String& GetStage() const { return m_stage; }
  inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
  template <typename StageT = Aws::String>
  void SetStage(StageT&& value) {
    m_stageHasBeenSet = true;
    m_stage = std::forward<StageT>(value);
  }
  template <typename StageT = Aws::String>
  ApiGatewayTargetConfiguration& WithStage(StageT&& value) {
    SetStage(std::forward<StageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for defining REST API tool filters and overrides for the
   * gateway target.</p>
   */
  inline const ApiGatewayToolConfiguration& GetApiGatewayToolConfiguration() const { return m_apiGatewayToolConfiguration; }
  inline bool ApiGatewayToolConfigurationHasBeenSet() const { return m_apiGatewayToolConfigurationHasBeenSet; }
  template <typename ApiGatewayToolConfigurationT = ApiGatewayToolConfiguration>
  void SetApiGatewayToolConfiguration(ApiGatewayToolConfigurationT&& value) {
    m_apiGatewayToolConfigurationHasBeenSet = true;
    m_apiGatewayToolConfiguration = std::forward<ApiGatewayToolConfigurationT>(value);
  }
  template <typename ApiGatewayToolConfigurationT = ApiGatewayToolConfiguration>
  ApiGatewayTargetConfiguration& WithApiGatewayToolConfiguration(ApiGatewayToolConfigurationT&& value) {
    SetApiGatewayToolConfiguration(std::forward<ApiGatewayToolConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_restApiId;
  bool m_restApiIdHasBeenSet = false;

  Aws::String m_stage;
  bool m_stageHasBeenSet = false;

  ApiGatewayToolConfiguration m_apiGatewayToolConfiguration;
  bool m_apiGatewayToolConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
