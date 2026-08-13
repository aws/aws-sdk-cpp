/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/model/DiffChangeType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>A single line-level entry in a diff hunk. Each <code>DiffChange</code>
 * describes one line and its change type: unchanged context, an addition in the
 * after blob, or a deletion from the before blob.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/DiffChange">AWS
 * API Reference</a></p>
 */
class DiffChange {
 public:
  AWS_CODECOMMIT_API DiffChange() = default;
  AWS_CODECOMMIT_API DiffChange(Aws::Utils::Json::JsonView jsonValue);
  AWS_CODECOMMIT_API DiffChange& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of change for this line. Possible values:</p> <ul> <li> <p>
   * <code>CONTEXT</code> – Unchanged line included for surrounding context.</p>
   * </li> <li> <p> <code>ADD</code> – Line added in the after blob.</p> </li> <li>
   * <p> <code>DELETE</code> – Line removed from the before blob.</p> </li> </ul>
   */
  inline DiffChangeType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(DiffChangeType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline DiffChange& WithType(DiffChangeType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The 1-based line number in the before blob. This field is omitted for
   * <code>ADD</code> lines.</p>
   */
  inline int GetBeforeLineNumber() const { return m_beforeLineNumber; }
  inline bool BeforeLineNumberHasBeenSet() const { return m_beforeLineNumberHasBeenSet; }
  inline void SetBeforeLineNumber(int value) {
    m_beforeLineNumberHasBeenSet = true;
    m_beforeLineNumber = value;
  }
  inline DiffChange& WithBeforeLineNumber(int value) {
    SetBeforeLineNumber(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The 1-based line number in the after blob. This field is omitted for
   * <code>DELETE</code> lines.</p>
   */
  inline int GetAfterLineNumber() const { return m_afterLineNumber; }
  inline bool AfterLineNumberHasBeenSet() const { return m_afterLineNumberHasBeenSet; }
  inline void SetAfterLineNumber(int value) {
    m_afterLineNumberHasBeenSet = true;
    m_afterLineNumber = value;
  }
  inline DiffChange& WithAfterLineNumber(int value) {
    SetAfterLineNumber(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The text content of the line, without the trailing newline.</p>
   */
  inline const Aws::String& GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = Aws::String>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = Aws::String>
  DiffChange& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  ///@}
 private:
  DiffChangeType m_type{DiffChangeType::NOT_SET};

  int m_beforeLineNumber{0};

  int m_afterLineNumber{0};

  Aws::String m_content;
  bool m_typeHasBeenSet = false;
  bool m_beforeLineNumberHasBeenSet = false;
  bool m_afterLineNumberHasBeenSet = false;
  bool m_contentHasBeenSet = false;
};

}  // namespace Model
}  // namespace CodeCommit
}  // namespace Aws
