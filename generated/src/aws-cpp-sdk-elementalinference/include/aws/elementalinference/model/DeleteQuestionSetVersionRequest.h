/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elementalinference/ElementalInferenceRequest.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>

#include <utility>

namespace Aws {
namespace ElementalInference {
namespace Model {

/**
 */
class DeleteQuestionSetVersionRequest : public ElementalInferenceRequest {
 public:
  AWS_ELEMENTALINFERENCE_API DeleteQuestionSetVersionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteQuestionSetVersion"; }

  AWS_ELEMENTALINFERENCE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the question set that contains the version.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  DeleteQuestionSetVersionRequest& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of the published version to delete. You can't specify DRAFT.</p>
   */
  inline const Aws::String& GetQuestionSetVersion() const { return m_questionSetVersion; }
  inline bool QuestionSetVersionHasBeenSet() const { return m_questionSetVersionHasBeenSet; }
  template <typename QuestionSetVersionT = Aws::String>
  void SetQuestionSetVersion(QuestionSetVersionT&& value) {
    m_questionSetVersionHasBeenSet = true;
    m_questionSetVersion = std::forward<QuestionSetVersionT>(value);
  }
  template <typename QuestionSetVersionT = Aws::String>
  DeleteQuestionSetVersionRequest& WithQuestionSetVersion(QuestionSetVersionT&& value) {
    SetQuestionSetVersion(std::forward<QuestionSetVersionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_questionSetVersion;
  bool m_idHasBeenSet = false;
  bool m_questionSetVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
