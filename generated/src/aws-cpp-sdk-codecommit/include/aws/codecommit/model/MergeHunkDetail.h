/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>Information about the details of a merge hunk that contains a conflict in a
   * merge or pull request operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/MergeHunkDetail">AWS
   * API Reference</a></p>
   */
  class MergeHunkDetail
  {
  public:
    AWS_CODECOMMIT_API MergeHunkDetail() = default;
    AWS_CODECOMMIT_API MergeHunkDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API MergeHunkDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The start position of the hunk in the merge result.</p>
     */
    inline int GetStartLine() const { return m_startLine; }
    inline bool StartLineHasBeenSet() const { return m_startLineHasBeenSet; }
    inline void SetStartLine(int value) { m_startLineHasBeenSet = true; m_startLine = value; }
    inline MergeHunkDetail& WithStartLine(int value) { SetStartLine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end position of the hunk in the merge result.</p>
     */
    inline int GetEndLine() const { return m_endLine; }
    inline bool EndLineHasBeenSet() const { return m_endLineHasBeenSet; }
    inline void SetEndLine(int value) { m_endLineHasBeenSet = true; m_endLine = value; }
    inline MergeHunkDetail& WithEndLine(int value) { SetEndLine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The base-64 encoded content of the hunk merged region that might contain a
     * conflict.</p>
     */
    inline const Aws::String& GetHunkContent() const { return m_hunkContent; }
    inline bool HunkContentHasBeenSet() const { return m_hunkContentHasBeenSet; }
    template<typename HunkContentT = Aws::String>
    void SetHunkContent(HunkContentT&& value) { m_hunkContentHasBeenSet = true; m_hunkContent = std::forward<HunkContentT>(value); }
    template<typename HunkContentT = Aws::String>
    MergeHunkDetail& WithHunkContent(HunkContentT&& value) { SetHunkContent(std::forward<HunkContentT>(value)); return *this;}
    ///@}
  private:

    int m_startLine{0};
    bool m_startLineHasBeenSet = false;

    int m_endLine{0};
    bool m_endLineHasBeenSet = false;

    Aws::String m_hunkContent;
    bool m_hunkContentHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
