/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ElementalInference {
namespace Model {

/**
 * <p>Identifies one version of a question set. You specify it in
 * CustomQuestionsConfig.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/QuestionSetReference">AWS
 * API Reference</a></p>
 */
class QuestionSetReference {
 public:
  AWS_ELEMENTALINFERENCE_API QuestionSetReference() = default;
  AWS_ELEMENTALINFERENCE_API QuestionSetReference(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API QuestionSetReference& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the question set. The question set must be in your account.</p>
   */
  inline const Aws::String& GetQuestionSetId() const { return m_questionSetId; }
  inline bool QuestionSetIdHasBeenSet() const { return m_questionSetIdHasBeenSet; }
  template <typename QuestionSetIdT = Aws::String>
  void SetQuestionSetId(QuestionSetIdT&& value) {
    m_questionSetIdHasBeenSet = true;
    m_questionSetId = std::forward<QuestionSetIdT>(value);
  }
  template <typename QuestionSetIdT = Aws::String>
  QuestionSetReference& WithQuestionSetId(QuestionSetIdT&& value) {
    SetQuestionSetId(std::forward<QuestionSetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the question set: DRAFT or the number of a published version.
   * The version must exist. </p> <p>If you specify DRAFT, the output uses the
   * current DRAFT questions and picks up changes that you make later by using
   * UpdateQuestionSet. To keep the questions for the output fixed, specify a
   * published version. </p>
   */
  inline const Aws::String& GetVersion() const { return m_version; }
  inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
  template <typename VersionT = Aws::String>
  void SetVersion(VersionT&& value) {
    m_versionHasBeenSet = true;
    m_version = std::forward<VersionT>(value);
  }
  template <typename VersionT = Aws::String>
  QuestionSetReference& WithVersion(VersionT&& value) {
    SetVersion(std::forward<VersionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_questionSetId;

  Aws::String m_version;
  bool m_questionSetIdHasBeenSet = false;
  bool m_versionHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
