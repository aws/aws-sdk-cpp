/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/AiUseCase.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>The search criteria based on AI Agents metadata.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AiAgentSearchCriteria">AWS
 * API Reference</a></p>
 */
class AiAgentSearchCriteria {
 public:
  AWS_CONNECT_API AiAgentSearchCriteria() = default;
  AWS_CONNECT_API AiAgentSearchCriteria(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API AiAgentSearchCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>ID of the AI Agent that was involved in the contact.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  AiAgentSearchCriteria& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Version of the AI agent that was involved in the contact. ID is required if
   * VersionNumber is passed.</p>
   */
  inline int GetVersionNumber() const { return m_versionNumber; }
  inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }
  inline void SetVersionNumber(int value) {
    m_versionNumberHasBeenSet = true;
    m_versionNumber = value;
  }
  inline AiAgentSearchCriteria& WithVersionNumber(int value) {
    SetVersionNumber(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A boolean flag indicating whether the contact initially handled by this AI
   * agent was escalated to a human agent.</p>
   */
  inline bool GetAiAgentEscalated() const { return m_aiAgentEscalated; }
  inline bool AiAgentEscalatedHasBeenSet() const { return m_aiAgentEscalatedHasBeenSet; }
  inline void SetAiAgentEscalated(bool value) {
    m_aiAgentEscalatedHasBeenSet = true;
    m_aiAgentEscalated = value;
  }
  inline AiAgentSearchCriteria& WithAiAgentEscalated(bool value) {
    SetAiAgentEscalated(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The use case or scenario for which the AI agent is involved in the
   * contact.</p>
   */
  inline AiUseCase GetAiUseCase() const { return m_aiUseCase; }
  inline bool AiUseCaseHasBeenSet() const { return m_aiUseCaseHasBeenSet; }
  inline void SetAiUseCase(AiUseCase value) {
    m_aiUseCaseHasBeenSet = true;
    m_aiUseCase = value;
  }
  inline AiAgentSearchCriteria& WithAiUseCase(AiUseCase value) {
    SetAiUseCase(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  int m_versionNumber{0};

  bool m_aiAgentEscalated{false};

  AiUseCase m_aiUseCase{AiUseCase::NOT_SET};
  bool m_idHasBeenSet = false;
  bool m_versionNumberHasBeenSet = false;
  bool m_aiAgentEscalatedHasBeenSet = false;
  bool m_aiUseCaseHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
