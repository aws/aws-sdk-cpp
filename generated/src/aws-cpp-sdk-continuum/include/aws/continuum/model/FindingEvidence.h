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
 * <p>A code citation supporting a validation verdict.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/FindingEvidence">AWS
 * API Reference</a></p>
 */
class FindingEvidence {
 public:
  AWS_CONTINUUM_API FindingEvidence() = default;
  AWS_CONTINUUM_API FindingEvidence(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API FindingEvidence& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The file the evidence was found in.</p>
   */
  inline const Aws::String& GetFile() const { return m_file; }
  inline bool FileHasBeenSet() const { return m_fileHasBeenSet; }
  template <typename FileT = Aws::String>
  void SetFile(FileT&& value) {
    m_fileHasBeenSet = true;
    m_file = std::forward<FileT>(value);
  }
  template <typename FileT = Aws::String>
  FindingEvidence& WithFile(FileT&& value) {
    SetFile(std::forward<FileT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The 1-indexed line, when known.</p>
   */
  inline int GetLine() const { return m_line; }
  inline bool LineHasBeenSet() const { return m_lineHasBeenSet; }
  inline void SetLine(int value) {
    m_lineHasBeenSet = true;
    m_line = value;
  }
  inline FindingEvidence& WithLine(int value) {
    SetLine(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cited excerpt.</p>
   */
  inline const Aws::String& GetSnippet() const { return m_snippet; }
  inline bool SnippetHasBeenSet() const { return m_snippetHasBeenSet; }
  template <typename SnippetT = Aws::String>
  void SetSnippet(SnippetT&& value) {
    m_snippetHasBeenSet = true;
    m_snippet = std::forward<SnippetT>(value);
  }
  template <typename SnippetT = Aws::String>
  FindingEvidence& WithSnippet(SnippetT&& value) {
    SetSnippet(std::forward<SnippetT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_file;

  int m_line{0};

  Aws::String m_snippet;
  bool m_fileHasBeenSet = false;
  bool m_lineHasBeenSet = false;
  bool m_snippetHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
