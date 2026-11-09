/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/MatchModels.h>
#include <aws/bedrock-agentcore-control/model/MatchPaths.h>
#include <aws/bedrock-agentcore-control/model/MatchPrincipals.h>

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
 * <p>A condition that determines when a gateway rule applies. Conditions can match
 * on principals, request paths, or the requested model.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/Condition">AWS
 * API Reference</a></p>
 */
class Condition {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API Condition() = default;
  AWS_BEDROCKAGENTCORECONTROL_API Condition(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Condition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A condition that matches on the identity of the caller making the
   * request.</p>
   */
  inline const MatchPrincipals& GetMatchPrincipals() const { return m_matchPrincipals; }
  inline bool MatchPrincipalsHasBeenSet() const { return m_matchPrincipalsHasBeenSet; }
  template <typename MatchPrincipalsT = MatchPrincipals>
  void SetMatchPrincipals(MatchPrincipalsT&& value) {
    m_matchPrincipalsHasBeenSet = true;
    m_matchPrincipals = std::forward<MatchPrincipalsT>(value);
  }
  template <typename MatchPrincipalsT = MatchPrincipals>
  Condition& WithMatchPrincipals(MatchPrincipalsT&& value) {
    SetMatchPrincipals(std::forward<MatchPrincipalsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A condition that matches on the request path.</p>
   */
  inline const MatchPaths& GetMatchPaths() const { return m_matchPaths; }
  inline bool MatchPathsHasBeenSet() const { return m_matchPathsHasBeenSet; }
  template <typename MatchPathsT = MatchPaths>
  void SetMatchPaths(MatchPathsT&& value) {
    m_matchPathsHasBeenSet = true;
    m_matchPaths = std::forward<MatchPathsT>(value);
  }
  template <typename MatchPathsT = MatchPaths>
  Condition& WithMatchPaths(MatchPathsT&& value) {
    SetMatchPaths(std::forward<MatchPathsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A condition that matches on the model requested in an inference request.</p>
   */
  inline const MatchModels& GetMatchModels() const { return m_matchModels; }
  inline bool MatchModelsHasBeenSet() const { return m_matchModelsHasBeenSet; }
  template <typename MatchModelsT = MatchModels>
  void SetMatchModels(MatchModelsT&& value) {
    m_matchModelsHasBeenSet = true;
    m_matchModels = std::forward<MatchModelsT>(value);
  }
  template <typename MatchModelsT = MatchModels>
  Condition& WithMatchModels(MatchModelsT&& value) {
    SetMatchModels(std::forward<MatchModelsT>(value));
    return *this;
  }
  ///@}
 private:
  MatchPrincipals m_matchPrincipals;

  MatchPaths m_matchPaths;

  MatchModels m_matchModels;
  bool m_matchPrincipalsHasBeenSet = false;
  bool m_matchPathsHasBeenSet = false;
  bool m_matchModelsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
