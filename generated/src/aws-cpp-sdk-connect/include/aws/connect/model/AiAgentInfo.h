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
 * <p> Information of the AI agent involved in the contact.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AiAgentInfo">AWS
 * API Reference</a></p>
 */
class AiAgentInfo {
 public:
  AWS_CONNECT_API AiAgentInfo() = default;
  AWS_CONNECT_API AiAgentInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API AiAgentInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The use case or scenario for which the AI agent is involved in the contact
   * </p>
   */
  inline AiUseCase GetAiUseCase() const { return m_aiUseCase; }
  inline bool AiUseCaseHasBeenSet() const { return m_aiUseCaseHasBeenSet; }
  inline void SetAiUseCase(AiUseCase value) {
    m_aiUseCaseHasBeenSet = true;
    m_aiUseCase = value;
  }
  inline AiAgentInfo& WithAiUseCase(AiUseCase value) {
    SetAiUseCase(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The unique identifier that specifies both the AI agent ID and its version
   * number that was involved in the contact </p>
   */
  inline const Aws::String& GetAiAgentVersionId() const { return m_aiAgentVersionId; }
  inline bool AiAgentVersionIdHasBeenSet() const { return m_aiAgentVersionIdHasBeenSet; }
  template <typename AiAgentVersionIdT = Aws::String>
  void SetAiAgentVersionId(AiAgentVersionIdT&& value) {
    m_aiAgentVersionIdHasBeenSet = true;
    m_aiAgentVersionId = std::forward<AiAgentVersionIdT>(value);
  }
  template <typename AiAgentVersionIdT = Aws::String>
  AiAgentInfo& WithAiAgentVersionId(AiAgentVersionIdT&& value) {
    SetAiAgentVersionId(std::forward<AiAgentVersionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> A boolean flag indicating whether the contact initially handled by this AI
   * agent was escalated to a human agent. </p>
   */
  inline bool GetAiAgentEscalated() const { return m_aiAgentEscalated; }
  inline bool AiAgentEscalatedHasBeenSet() const { return m_aiAgentEscalatedHasBeenSet; }
  inline void SetAiAgentEscalated(bool value) {
    m_aiAgentEscalatedHasBeenSet = true;
    m_aiAgentEscalated = value;
  }
  inline AiAgentInfo& WithAiAgentEscalated(bool value) {
    SetAiAgentEscalated(value);
    return *this;
  }
  ///@}
 private:
  AiUseCase m_aiUseCase{AiUseCase::NOT_SET};
  bool m_aiUseCaseHasBeenSet = false;

  Aws::String m_aiAgentVersionId;
  bool m_aiAgentVersionIdHasBeenSet = false;

  bool m_aiAgentEscalated{false};
  bool m_aiAgentEscalatedHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
