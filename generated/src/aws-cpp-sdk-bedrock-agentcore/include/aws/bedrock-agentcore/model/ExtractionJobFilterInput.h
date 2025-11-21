/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/ExtractionJobStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>Filters for querying memory extraction jobs based on various
 * criteria.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ExtractionJobFilterInput">AWS
 * API Reference</a></p>
 */
class ExtractionJobFilterInput {
 public:
  AWS_BEDROCKAGENTCORE_API ExtractionJobFilterInput() = default;
  AWS_BEDROCKAGENTCORE_API ExtractionJobFilterInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API ExtractionJobFilterInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The memory strategy identifier to filter extraction jobs by. If specified,
   * only extraction jobs with this strategy ID are returned.</p>
   */
  inline const Aws::String& GetStrategyId() const { return m_strategyId; }
  inline bool StrategyIdHasBeenSet() const { return m_strategyIdHasBeenSet; }
  template <typename StrategyIdT = Aws::String>
  void SetStrategyId(StrategyIdT&& value) {
    m_strategyIdHasBeenSet = true;
    m_strategyId = std::forward<StrategyIdT>(value);
  }
  template <typename StrategyIdT = Aws::String>
  ExtractionJobFilterInput& WithStrategyId(StrategyIdT&& value) {
    SetStrategyId(std::forward<StrategyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the session. If specified, only extraction jobs with
   * this session ID are returned.</p>
   */
  inline const Aws::String& GetSessionId() const { return m_sessionId; }
  inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
  template <typename SessionIdT = Aws::String>
  void SetSessionId(SessionIdT&& value) {
    m_sessionIdHasBeenSet = true;
    m_sessionId = std::forward<SessionIdT>(value);
  }
  template <typename SessionIdT = Aws::String>
  ExtractionJobFilterInput& WithSessionId(SessionIdT&& value) {
    SetSessionId(std::forward<SessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the actor. If specified, only extraction jobs with this
   * actor ID are returned.</p>
   */
  inline const Aws::String& GetActorId() const { return m_actorId; }
  inline bool ActorIdHasBeenSet() const { return m_actorIdHasBeenSet; }
  template <typename ActorIdT = Aws::String>
  void SetActorId(ActorIdT&& value) {
    m_actorIdHasBeenSet = true;
    m_actorId = std::forward<ActorIdT>(value);
  }
  template <typename ActorIdT = Aws::String>
  ExtractionJobFilterInput& WithActorId(ActorIdT&& value) {
    SetActorId(std::forward<ActorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the extraction job. If specified, only extraction jobs with
   * this status are returned.</p>
   */
  inline ExtractionJobStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ExtractionJobStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ExtractionJobFilterInput& WithStatus(ExtractionJobStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_strategyId;
  bool m_strategyIdHasBeenSet = false;

  Aws::String m_sessionId;
  bool m_sessionIdHasBeenSet = false;

  Aws::String m_actorId;
  bool m_actorIdHasBeenSet = false;

  ExtractionJobStatus m_status{ExtractionJobStatus::NOT_SET};
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
