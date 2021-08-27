/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/codeguru-reviewer/model/CommitDiffSourceCodeType.h>
#include <aws/codeguru-reviewer/model/RepositoryHeadSourceCodeType.h>
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
   * <p> Specifies the source code that is analyzed in a code review. A code review
   * can analyze the source code that is specified using a pull request diff or a
   * branch in an associated repository. </p><p><h3>See Also:</h3>   <a
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
     * <p> A <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_SourceCodeType">
     * <code>SourceCodeType</code> </a> that specifies a commit diff created by a pull
     * request on an associated repository. </p>
     */
    inline const CommitDiffSourceCodeType& GetCommitDiff() const{ return m_commitDiff; }

    /**
     * <p> A <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_SourceCodeType">
     * <code>SourceCodeType</code> </a> that specifies a commit diff created by a pull
     * request on an associated repository. </p>
     */
    inline bool CommitDiffHasBeenSet() const { return m_commitDiffHasBeenSet; }

    /**
     * <p> A <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_SourceCodeType">
     * <code>SourceCodeType</code> </a> that specifies a commit diff created by a pull
     * request on an associated repository. </p>
     */
    inline void SetCommitDiff(const CommitDiffSourceCodeType& value) { m_commitDiffHasBeenSet = true; m_commitDiff = value; }

    /**
     * <p> A <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_SourceCodeType">
     * <code>SourceCodeType</code> </a> that specifies a commit diff created by a pull
     * request on an associated repository. </p>
     */
    inline void SetCommitDiff(CommitDiffSourceCodeType&& value) { m_commitDiffHasBeenSet = true; m_commitDiff = std::move(value); }

    /**
     * <p> A <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_SourceCodeType">
     * <code>SourceCodeType</code> </a> that specifies a commit diff created by a pull
     * request on an associated repository. </p>
     */
    inline SourceCodeType& WithCommitDiff(const CommitDiffSourceCodeType& value) { SetCommitDiff(value); return *this;}

    /**
     * <p> A <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_SourceCodeType">
     * <code>SourceCodeType</code> </a> that specifies a commit diff created by a pull
     * request on an associated repository. </p>
     */
    inline SourceCodeType& WithCommitDiff(CommitDiffSourceCodeType&& value) { SetCommitDiff(std::move(value)); return *this;}


    
    inline const RepositoryHeadSourceCodeType& GetRepositoryHead() const{ return m_repositoryHead; }

    
    inline bool RepositoryHeadHasBeenSet() const { return m_repositoryHeadHasBeenSet; }

    
    inline void SetRepositoryHead(const RepositoryHeadSourceCodeType& value) { m_repositoryHeadHasBeenSet = true; m_repositoryHead = value; }

    
    inline void SetRepositoryHead(RepositoryHeadSourceCodeType&& value) { m_repositoryHeadHasBeenSet = true; m_repositoryHead = std::move(value); }

    
    inline SourceCodeType& WithRepositoryHead(const RepositoryHeadSourceCodeType& value) { SetRepositoryHead(value); return *this;}

    
    inline SourceCodeType& WithRepositoryHead(RepositoryHeadSourceCodeType&& value) { SetRepositoryHead(std::move(value)); return *this;}

  private:

    CommitDiffSourceCodeType m_commitDiff;
    bool m_commitDiffHasBeenSet;

    RepositoryHeadSourceCodeType m_repositoryHead;
    bool m_repositoryHeadHasBeenSet;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
