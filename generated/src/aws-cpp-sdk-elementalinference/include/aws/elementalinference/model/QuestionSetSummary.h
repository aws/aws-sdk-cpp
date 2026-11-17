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
 * <p>Contains summary information about a question set. Used in the
 * ListQuestionSets response. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/QuestionSetSummary">AWS
 * API Reference</a></p>
 */
class QuestionSetSummary {
 public:
  AWS_ELEMENTALINFERENCE_API QuestionSetSummary() = default;
  AWS_ELEMENTALINFERENCE_API QuestionSetSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API QuestionSetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the question set.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  QuestionSetSummary& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the question set.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  QuestionSetSummary& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the question set.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  QuestionSetSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of the highest version that you have published for this question
   * set, even if you have since deleted that version. Elemental Inference doesn't
   * return this property if you haven't published a version. </p>
   */
  inline const Aws::String& GetLatestVersion() const { return m_latestVersion; }
  inline bool LatestVersionHasBeenSet() const { return m_latestVersionHasBeenSet; }
  template <typename LatestVersionT = Aws::String>
  void SetLatestVersion(LatestVersionT&& value) {
    m_latestVersionHasBeenSet = true;
    m_latestVersion = std::forward<LatestVersionT>(value);
  }
  template <typename LatestVersionT = Aws::String>
  QuestionSetSummary& WithLatestVersion(LatestVersionT&& value) {
    SetLatestVersion(std::forward<LatestVersionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::String m_id;

  Aws::String m_name;

  Aws::String m_latestVersion;
  bool m_arnHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_latestVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
