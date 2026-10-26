/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Continuum {
namespace Model {

/**
 * <p>The agent that produced an artifact.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/IssueArtifactProducerSummary">AWS
 * API Reference</a></p>
 */
class IssueArtifactProducerSummary {
 public:
  AWS_CONTINUUM_API IssueArtifactProducerSummary() = default;
  AWS_CONTINUUM_API IssueArtifactProducerSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API IssueArtifactProducerSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Stable producer name, such as ContinuumValidation.</p>
   */
  inline const Aws::String& GetAgent() const { return m_agent; }
  inline bool AgentHasBeenSet() const { return m_agentHasBeenSet; }
  template <typename AgentT = Aws::String>
  void SetAgent(AgentT&& value) {
    m_agentHasBeenSet = true;
    m_agent = std::forward<AgentT>(value);
  }
  template <typename AgentT = Aws::String>
  IssueArtifactProducerSummary& WithAgent(AgentT&& value) {
    SetAgent(std::forward<AgentT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agent;
  bool m_agentHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
