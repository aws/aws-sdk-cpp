/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/codeguru-reviewer/model/CommitDiffSourceCodeType.h>
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
namespace CodeGuruReviewer
{
namespace Model
{

  /**
   * <p> Information about the source code type. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/SourceCodeType">AWS
   * API Reference</a></p>
   */
  class AWS_CODEGURUREVIEWER_API SourceCodeType
  {
  public:
    SourceCodeType();
    SourceCodeType(Aws::Utils::Json::JsonView jsonValue);
    SourceCodeType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The commit diff for the pull request. </p>
     */
    inline const CommitDiffSourceCodeType& GetCommitDiff() const{ return m_commitDiff; }

    /**
     * <p> The commit diff for the pull request. </p>
     */
    inline bool CommitDiffHasBeenSet() const { return m_commitDiffHasBeenSet; }

    /**
     * <p> The commit diff for the pull request. </p>
     */
    inline void SetCommitDiff(const CommitDiffSourceCodeType& value) { m_commitDiffHasBeenSet = true; m_commitDiff = value; }

    /**
     * <p> The commit diff for the pull request. </p>
     */
    inline void SetCommitDiff(CommitDiffSourceCodeType&& value) { m_commitDiffHasBeenSet = true; m_commitDiff = std::move(value); }

    /**
     * <p> The commit diff for the pull request. </p>
     */
    inline SourceCodeType& WithCommitDiff(const CommitDiffSourceCodeType& value) { SetCommitDiff(value); return *this;}

    /**
     * <p> The commit diff for the pull request. </p>
     */
    inline SourceCodeType& WithCommitDiff(CommitDiffSourceCodeType&& value) { SetCommitDiff(std::move(value)); return *this;}

  private:

    CommitDiffSourceCodeType m_commitDiff;
    bool m_commitDiffHasBeenSet;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
