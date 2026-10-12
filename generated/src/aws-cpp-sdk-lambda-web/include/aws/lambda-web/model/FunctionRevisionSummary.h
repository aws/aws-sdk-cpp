/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-web/LambdaWeb_EXPORTS.h>
#include <aws/lambda-web/model/RevisionState.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LambdaWeb {
namespace Model {

/**
 * <p>A summary of a web function revision.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/FunctionRevisionSummary">AWS
 * API Reference</a></p>
 */
class FunctionRevisionSummary {
 public:
  AWS_LAMBDAWEB_API FunctionRevisionSummary() = default;
  AWS_LAMBDAWEB_API FunctionRevisionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAWEB_API FunctionRevisionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAWEB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the revision.</p>
   */
  inline const Aws::String& GetRevisionArn() const { return m_revisionArn; }
  inline bool RevisionArnHasBeenSet() const { return m_revisionArnHasBeenSet; }
  template <typename RevisionArnT = Aws::String>
  void SetRevisionArn(RevisionArnT&& value) {
    m_revisionArnHasBeenSet = true;
    m_revisionArn = std::forward<RevisionArnT>(value);
  }
  template <typename RevisionArnT = Aws::String>
  FunctionRevisionSummary& WithRevisionArn(RevisionArnT&& value) {
    SetRevisionArn(std::forward<RevisionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the revision.</p>
   */
  inline const Aws::String& GetRevisionId() const { return m_revisionId; }
  inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }
  template <typename RevisionIdT = Aws::String>
  void SetRevisionId(RevisionIdT&& value) {
    m_revisionIdHasBeenSet = true;
    m_revisionId = std::forward<RevisionIdT>(value);
  }
  template <typename RevisionIdT = Aws::String>
  FunctionRevisionSummary& WithRevisionId(RevisionIdT&& value) {
    SetRevisionId(std::forward<RevisionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the revision.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  FunctionRevisionSummary& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the revision.</p>
   */
  inline RevisionState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(RevisionState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline FunctionRevisionSummary& WithState(RevisionState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the current state of the revision.</p>
   */
  inline const Aws::String& GetStateReason() const { return m_stateReason; }
  inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
  template <typename StateReasonT = Aws::String>
  void SetStateReason(StateReasonT&& value) {
    m_stateReasonHasBeenSet = true;
    m_stateReason = std::forward<StateReasonT>(value);
  }
  template <typename StateReasonT = Aws::String>
  FunctionRevisionSummary& WithStateReason(StateReasonT&& value) {
    SetStateReason(std::forward<StateReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the revision was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  FunctionRevisionSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_revisionArn;

  Aws::String m_revisionId;

  Aws::String m_description;

  RevisionState m_state{RevisionState::NOT_SET};

  Aws::String m_stateReason;

  Aws::Utils::DateTime m_createdAt{};
  bool m_revisionArnHasBeenSet = false;
  bool m_revisionIdHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_stateReasonHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
