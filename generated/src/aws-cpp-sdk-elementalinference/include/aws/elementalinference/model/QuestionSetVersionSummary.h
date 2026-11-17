/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
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
 * <p>Contains summary information about one version of a question set. Used in the
 * ListQuestionSetVersions response. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/QuestionSetVersionSummary">AWS
 * API Reference</a></p>
 */
class QuestionSetVersionSummary {
 public:
  AWS_ELEMENTALINFERENCE_API QuestionSetVersionSummary() = default;
  AWS_ELEMENTALINFERENCE_API QuestionSetVersionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API QuestionSetVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The version: DRAFT or the number of a published version.</p>
   */
  inline const Aws::String& GetVersion() const { return m_version; }
  inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
  template <typename VersionT = Aws::String>
  void SetVersion(VersionT&& value) {
    m_versionHasBeenSet = true;
    m_version = std::forward<VersionT>(value);
  }
  template <typename VersionT = Aws::String>
  QuestionSetVersionSummary& WithVersion(VersionT&& value) {
    SetVersion(std::forward<VersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description that you specified when you published this version. Elemental
   * Inference doesn't return this property for DRAFT, or for a version that you
   * published without a description. </p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  QuestionSetVersionSummary& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The SHA-256 hash of this version, as 64 lowercase hexadecimal characters. The
   * hash covers the name of the question set and its questions at this version. </p>
   */
  inline const Aws::String& GetSha256() const { return m_sha256; }
  inline bool Sha256HasBeenSet() const { return m_sha256HasBeenSet; }
  template <typename Sha256T = Aws::String>
  void SetSha256(Sha256T&& value) {
    m_sha256HasBeenSet = true;
    m_sha256 = std::forward<Sha256T>(value);
  }
  template <typename Sha256T = Aws::String>
  QuestionSetVersionSummary& WithSha256(Sha256T&& value) {
    SetSha256(std::forward<Sha256T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>For DRAFT, the time when you created the question set or last updated DRAFT.
   * For a published version, the time when you published it. </p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedAt() const { return m_lastModifiedAt; }
  inline bool LastModifiedAtHasBeenSet() const { return m_lastModifiedAtHasBeenSet; }
  template <typename LastModifiedAtT = Aws::Utils::DateTime>
  void SetLastModifiedAt(LastModifiedAtT&& value) {
    m_lastModifiedAtHasBeenSet = true;
    m_lastModifiedAt = std::forward<LastModifiedAtT>(value);
  }
  template <typename LastModifiedAtT = Aws::Utils::DateTime>
  QuestionSetVersionSummary& WithLastModifiedAt(LastModifiedAtT&& value) {
    SetLastModifiedAt(std::forward<LastModifiedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_version;

  Aws::String m_description;

  Aws::String m_sha256;

  Aws::Utils::DateTime m_lastModifiedAt{};
  bool m_versionHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_sha256HasBeenSet = false;
  bool m_lastModifiedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
