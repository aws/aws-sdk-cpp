/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/model/DiffChange.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CodeCommit {
namespace Model {

/**
 * <p>A contiguous run of changed lines from a blob diff, together with any
 * surrounding unchanged context lines. Hunks are returned in order from the start
 * of the file to the end. Adjacent or overlapping hunks are merged into a single
 * hunk in the response.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DiffHunk">AWS
 * API Reference</a></p>
 */
class DiffHunk {
 public:
  AWS_CODECOMMIT_API DiffHunk() = default;
  AWS_CODECOMMIT_API DiffHunk(Aws::Utils::Json::JsonView jsonValue);
  AWS_CODECOMMIT_API DiffHunk& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The 1-based line number in the before blob where this hunk begins. When the
   * hunk consists entirely of additions, <code>beforeLineCount</code> is
   * <code>0</code>.</p>
   */
  inline int GetBeforeStartLine() const { return m_beforeStartLine; }
  inline bool BeforeStartLineHasBeenSet() const { return m_beforeStartLineHasBeenSet; }
  inline void SetBeforeStartLine(int value) {
    m_beforeStartLineHasBeenSet = true;
    m_beforeStartLine = value;
  }
  inline DiffHunk& WithBeforeStartLine(int value) {
    SetBeforeStartLine(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of lines from the before blob covered by this hunk, including any
   * context lines.</p>
   */
  inline int GetBeforeLineCount() const { return m_beforeLineCount; }
  inline bool BeforeLineCountHasBeenSet() const { return m_beforeLineCountHasBeenSet; }
  inline void SetBeforeLineCount(int value) {
    m_beforeLineCountHasBeenSet = true;
    m_beforeLineCount = value;
  }
  inline DiffHunk& WithBeforeLineCount(int value) {
    SetBeforeLineCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The 1-based line number in the after blob where this hunk begins. When the
   * hunk consists entirely of deletions, <code>afterLineCount</code> is
   * <code>0</code>.</p>
   */
  inline int GetAfterStartLine() const { return m_afterStartLine; }
  inline bool AfterStartLineHasBeenSet() const { return m_afterStartLineHasBeenSet; }
  inline void SetAfterStartLine(int value) {
    m_afterStartLineHasBeenSet = true;
    m_afterStartLine = value;
  }
  inline DiffHunk& WithAfterStartLine(int value) {
    SetAfterStartLine(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of lines from the after blob covered by this hunk, including any
   * context lines.</p>
   */
  inline int GetAfterLineCount() const { return m_afterLineCount; }
  inline bool AfterLineCountHasBeenSet() const { return m_afterLineCountHasBeenSet; }
  inline void SetAfterLineCount(int value) {
    m_afterLineCountHasBeenSet = true;
    m_afterLineCount = value;
  }
  inline DiffHunk& WithAfterLineCount(int value) {
    SetAfterLineCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An ordered list of line-level changes that make up this hunk. Each entry
   * indicates whether the line is unchanged context, an addition, or a deletion.</p>
   */
  inline const Aws::Vector<DiffChange>& GetChanges() const { return m_changes; }
  inline bool ChangesHasBeenSet() const { return m_changesHasBeenSet; }
  template <typename ChangesT = Aws::Vector<DiffChange>>
  void SetChanges(ChangesT&& value) {
    m_changesHasBeenSet = true;
    m_changes = std::forward<ChangesT>(value);
  }
  template <typename ChangesT = Aws::Vector<DiffChange>>
  DiffHunk& WithChanges(ChangesT&& value) {
    SetChanges(std::forward<ChangesT>(value));
    return *this;
  }
  template <typename ChangesT = DiffChange>
  DiffHunk& AddChanges(ChangesT&& value) {
    m_changesHasBeenSet = true;
    m_changes.emplace_back(std::forward<ChangesT>(value));
    return *this;
  }
  ///@}
 private:
  int m_beforeStartLine{0};

  int m_beforeLineCount{0};

  int m_afterStartLine{0};

  int m_afterLineCount{0};

  Aws::Vector<DiffChange> m_changes;
  bool m_beforeStartLineHasBeenSet = false;
  bool m_beforeLineCountHasBeenSet = false;
  bool m_afterStartLineHasBeenSet = false;
  bool m_afterLineCountHasBeenSet = false;
  bool m_changesHasBeenSet = false;
};

}  // namespace Model
}  // namespace CodeCommit
}  // namespace Aws
