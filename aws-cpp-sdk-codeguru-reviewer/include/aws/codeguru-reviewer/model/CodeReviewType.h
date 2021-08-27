/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/codeguru-reviewer/model/RepositoryAnalysis.h>
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
   * <p> The type of a code review. There are two code review types: </p> <ul> <li>
   * <p> <code>PullRequest</code> - A code review that is automatically triggered by
   * a pull request on an assocaited repository. Because this type of code review is
   * automatically generated, you cannot specify this code review type using <a
   * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CreateCodeReview">
   * <code>CreateCodeReview</code> </a>. </p> </li> <li> <p>
   * <code>RepositoryAnalysis</code> - A code review that analyzes all code under a
   * specified branch in an associated respository. The assocated repository is
   * specified using its ARN in <a
   * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CreateCodeReview">
   * <code>CreateCodeReview</code> </a>. </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/CodeReviewType">AWS
   * API Reference</a></p>
   */
  class AWS_CODEGURUREVIEWER_API CodeReviewType
  {
  public:
    CodeReviewType();
    CodeReviewType(Aws::Utils::Json::JsonView jsonValue);
    CodeReviewType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> A code review that analyzes all code under a specified branch in an
     * associated respository. The assocated repository is specified using its ARN in
     * <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CreateCodeReview">
     * <code>CreateCodeReview</code> </a>. </p>
     */
    inline const RepositoryAnalysis& GetRepositoryAnalysis() const{ return m_repositoryAnalysis; }

    /**
     * <p> A code review that analyzes all code under a specified branch in an
     * associated respository. The assocated repository is specified using its ARN in
     * <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CreateCodeReview">
     * <code>CreateCodeReview</code> </a>. </p>
     */
    inline bool RepositoryAnalysisHasBeenSet() const { return m_repositoryAnalysisHasBeenSet; }

    /**
     * <p> A code review that analyzes all code under a specified branch in an
     * associated respository. The assocated repository is specified using its ARN in
     * <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CreateCodeReview">
     * <code>CreateCodeReview</code> </a>. </p>
     */
    inline void SetRepositoryAnalysis(const RepositoryAnalysis& value) { m_repositoryAnalysisHasBeenSet = true; m_repositoryAnalysis = value; }

    /**
     * <p> A code review that analyzes all code under a specified branch in an
     * associated respository. The assocated repository is specified using its ARN in
     * <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CreateCodeReview">
     * <code>CreateCodeReview</code> </a>. </p>
     */
    inline void SetRepositoryAnalysis(RepositoryAnalysis&& value) { m_repositoryAnalysisHasBeenSet = true; m_repositoryAnalysis = std::move(value); }

    /**
     * <p> A code review that analyzes all code under a specified branch in an
     * associated respository. The assocated repository is specified using its ARN in
     * <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CreateCodeReview">
     * <code>CreateCodeReview</code> </a>. </p>
     */
    inline CodeReviewType& WithRepositoryAnalysis(const RepositoryAnalysis& value) { SetRepositoryAnalysis(value); return *this;}

    /**
     * <p> A code review that analyzes all code under a specified branch in an
     * associated respository. The assocated repository is specified using its ARN in
     * <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CreateCodeReview">
     * <code>CreateCodeReview</code> </a>. </p>
     */
    inline CodeReviewType& WithRepositoryAnalysis(RepositoryAnalysis&& value) { SetRepositoryAnalysis(std::move(value)); return *this;}

  private:

    RepositoryAnalysis m_repositoryAnalysis;
    bool m_repositoryAnalysisHasBeenSet;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
