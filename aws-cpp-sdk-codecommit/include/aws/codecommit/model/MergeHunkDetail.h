/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CODECOMMIT_API MergeHunkDetail
  {
  public:
    MergeHunkDetail();
    MergeHunkDetail(Aws::Utils::Json::JsonView jsonValue);
    MergeHunkDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The start position of the hunk in the merge result.</p>
     */
    inline int GetStartLine() const{ return m_startLine; }

    /**
     * <p>The start position of the hunk in the merge result.</p>
     */
    inline bool StartLineHasBeenSet() const { return m_startLineHasBeenSet; }

    /**
     * <p>The start position of the hunk in the merge result.</p>
     */
    inline void SetStartLine(int value) { m_startLineHasBeenSet = true; m_startLine = value; }

    /**
     * <p>The start position of the hunk in the merge result.</p>
     */
    inline MergeHunkDetail& WithStartLine(int value) { SetStartLine(value); return *this;}


    /**
     * <p>The end position of the hunk in the merge result.</p>
     */
    inline int GetEndLine() const{ return m_endLine; }

    /**
     * <p>The end position of the hunk in the merge result.</p>
     */
    inline bool EndLineHasBeenSet() const { return m_endLineHasBeenSet; }

    /**
     * <p>The end position of the hunk in the merge result.</p>
     */
    inline void SetEndLine(int value) { m_endLineHasBeenSet = true; m_endLine = value; }

    /**
     * <p>The end position of the hunk in the merge result.</p>
     */
    inline MergeHunkDetail& WithEndLine(int value) { SetEndLine(value); return *this;}


    /**
     * <p>The base-64 encoded content of the hunk merged region that might or might not
     * contain a conflict.</p>
     */
    inline const Aws::String& GetHunkContent() const{ return m_hunkContent; }

    /**
     * <p>The base-64 encoded content of the hunk merged region that might or might not
     * contain a conflict.</p>
     */
    inline bool HunkContentHasBeenSet() const { return m_hunkContentHasBeenSet; }

    /**
     * <p>The base-64 encoded content of the hunk merged region that might or might not
     * contain a conflict.</p>
     */
    inline void SetHunkContent(const Aws::String& value) { m_hunkContentHasBeenSet = true; m_hunkContent = value; }

    /**
     * <p>The base-64 encoded content of the hunk merged region that might or might not
     * contain a conflict.</p>
     */
    inline void SetHunkContent(Aws::String&& value) { m_hunkContentHasBeenSet = true; m_hunkContent = std::move(value); }

    /**
     * <p>The base-64 encoded content of the hunk merged region that might or might not
     * contain a conflict.</p>
     */
    inline void SetHunkContent(const char* value) { m_hunkContentHasBeenSet = true; m_hunkContent.assign(value); }

    /**
     * <p>The base-64 encoded content of the hunk merged region that might or might not
     * contain a conflict.</p>
     */
    inline MergeHunkDetail& WithHunkContent(const Aws::String& value) { SetHunkContent(value); return *this;}

    /**
     * <p>The base-64 encoded content of the hunk merged region that might or might not
     * contain a conflict.</p>
     */
    inline MergeHunkDetail& WithHunkContent(Aws::String&& value) { SetHunkContent(std::move(value)); return *this;}

    /**
     * <p>The base-64 encoded content of the hunk merged region that might or might not
     * contain a conflict.</p>
     */
    inline MergeHunkDetail& WithHunkContent(const char* value) { SetHunkContent(value); return *this;}

  private:

    int m_startLine;
    bool m_startLineHasBeenSet;

    int m_endLine;
    bool m_endLineHasBeenSet;

    Aws::String m_hunkContent;
    bool m_hunkContentHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
