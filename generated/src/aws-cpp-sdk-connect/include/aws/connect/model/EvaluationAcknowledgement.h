/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
 * <p>Information about the evaluation acknowledgement.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationAcknowledgement">AWS
 * API Reference</a></p>
 */
class EvaluationAcknowledgement {
 public:
  AWS_CONNECT_API EvaluationAcknowledgement() = default;
  AWS_CONNECT_API EvaluationAcknowledgement(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationAcknowledgement& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>When the agent acknowledged the evaluation.</p>
   */
  inline const Aws::Utils::DateTime& GetAcknowledgedTime() const { return m_acknowledgedTime; }
  inline bool AcknowledgedTimeHasBeenSet() const { return m_acknowledgedTimeHasBeenSet; }
  template <typename AcknowledgedTimeT = Aws::Utils::DateTime>
  void SetAcknowledgedTime(AcknowledgedTimeT&& value) {
    m_acknowledgedTimeHasBeenSet = true;
    m_acknowledgedTime = std::forward<AcknowledgedTimeT>(value);
  }
  template <typename AcknowledgedTimeT = Aws::Utils::DateTime>
  EvaluationAcknowledgement& WithAcknowledgedTime(AcknowledgedTimeT&& value) {
    SetAcknowledgedTime(std::forward<AcknowledgedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The agent who acknowledged the evaluation.</p>
   */
  inline const Aws::String& GetAcknowledgedBy() const { return m_acknowledgedBy; }
  inline bool AcknowledgedByHasBeenSet() const { return m_acknowledgedByHasBeenSet; }
  template <typename AcknowledgedByT = Aws::String>
  void SetAcknowledgedBy(AcknowledgedByT&& value) {
    m_acknowledgedByHasBeenSet = true;
    m_acknowledgedBy = std::forward<AcknowledgedByT>(value);
  }
  template <typename AcknowledgedByT = Aws::String>
  EvaluationAcknowledgement& WithAcknowledgedBy(AcknowledgedByT&& value) {
    SetAcknowledgedBy(std::forward<AcknowledgedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A comment from the agent when they confirmed they acknowledged the
   * evaluation.</p>
   */
  inline const Aws::String& GetAcknowledgerComment() const { return m_acknowledgerComment; }
  inline bool AcknowledgerCommentHasBeenSet() const { return m_acknowledgerCommentHasBeenSet; }
  template <typename AcknowledgerCommentT = Aws::String>
  void SetAcknowledgerComment(AcknowledgerCommentT&& value) {
    m_acknowledgerCommentHasBeenSet = true;
    m_acknowledgerComment = std::forward<AcknowledgerCommentT>(value);
  }
  template <typename AcknowledgerCommentT = Aws::String>
  EvaluationAcknowledgement& WithAcknowledgerComment(AcknowledgerCommentT&& value) {
    SetAcknowledgerComment(std::forward<AcknowledgerCommentT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_acknowledgedTime{};

  Aws::String m_acknowledgedBy;

  Aws::String m_acknowledgerComment;
  bool m_acknowledgedTimeHasBeenSet = false;
  bool m_acknowledgedByHasBeenSet = false;
  bool m_acknowledgerCommentHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
