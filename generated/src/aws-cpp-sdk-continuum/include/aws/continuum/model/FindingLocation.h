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
 * <p>A code location a finding points at.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/FindingLocation">AWS
 * API Reference</a></p>
 */
class FindingLocation {
 public:
  AWS_CONTINUUM_API FindingLocation() = default;
  AWS_CONTINUUM_API FindingLocation(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API FindingLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Repository-relative path.</p>
   */
  inline const Aws::String& GetFilePath() const { return m_filePath; }
  inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }
  template <typename FilePathT = Aws::String>
  void SetFilePath(FilePathT&& value) {
    m_filePathHasBeenSet = true;
    m_filePath = std::forward<FilePathT>(value);
  }
  template <typename FilePathT = Aws::String>
  FindingLocation& WithFilePath(FilePathT&& value) {
    SetFilePath(std::forward<FilePathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>1-indexed first line of the affected range.</p>
   */
  inline int GetStartLine() const { return m_startLine; }
  inline bool StartLineHasBeenSet() const { return m_startLineHasBeenSet; }
  inline void SetStartLine(int value) {
    m_startLineHasBeenSet = true;
    m_startLine = value;
  }
  inline FindingLocation& WithStartLine(int value) {
    SetStartLine(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>1-indexed last line, when the producer reported a range.</p>
   */
  inline int GetEndLine() const { return m_endLine; }
  inline bool EndLineHasBeenSet() const { return m_endLineHasBeenSet; }
  inline void SetEndLine(int value) {
    m_endLineHasBeenSet = true;
    m_endLine = value;
  }
  inline FindingLocation& WithEndLine(int value) {
    SetEndLine(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_filePath;

  int m_startLine{0};

  int m_endLine{0};
  bool m_filePathHasBeenSet = false;
  bool m_startLineHasBeenSet = false;
  bool m_endLineHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
