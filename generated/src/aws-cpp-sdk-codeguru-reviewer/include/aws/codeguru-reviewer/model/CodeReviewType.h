/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/codeguru-reviewer/model/RepositoryAnalysis.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codeguru-reviewer/model/AnalysisType.h>
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
   * <p>The type of a code review. There are two code review types:</p> <ul> <li> <p>
   * <code>PullRequest</code> - A code review that is automatically triggered by a
   * pull request on an associated repository.</p> </li> <li> <p>
   * <code>RepositoryAnalysis</code> - A code review that analyzes all code under a
   * specified branch in an associated repository. The associated repository is
   * specified using its ARN in <a
   * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CreateCodeReview">CreateCodeReview</a>.</p>
   * </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/CodeReviewType">AWS
   * API Reference</a></p>
   */
  class CodeReviewType
  {
  public:
    AWS_CODEGURUREVIEWER_API CodeReviewType();
    AWS_CODEGURUREVIEWER_API CodeReviewType(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API CodeReviewType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A code review that analyzes all code under a specified branch in an
     * associated repository. The associated repository is specified using its ARN in
     * <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CreateCodeReview">CreateCodeReview</a>.</p>
     */
    inline const RepositoryAnalysis& GetRepositoryAnalysis() const{ return m_repositoryAnalysis; }

    /**
     * <p>A code review that analyzes all code under a specified branch in an
     * associated repository. The associated repository is specified using its ARN in
     * <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CreateCodeReview">CreateCodeReview</a>.</p>
     */
    inline bool RepositoryAnalysisHasBeenSet() const { return m_repositoryAnalysisHasBeenSet; }

    /**
     * <p>A code review that analyzes all code under a specified branch in an
     * associated repository. The associated repository is specified using its ARN in
     * <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CreateCodeReview">CreateCodeReview</a>.</p>
     */
    inline void SetRepositoryAnalysis(const RepositoryAnalysis& value) { m_repositoryAnalysisHasBeenSet = true; m_repositoryAnalysis = value; }

    /**
     * <p>A code review that analyzes all code under a specified branch in an
     * associated repository. The associated repository is specified using its ARN in
     * <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CreateCodeReview">CreateCodeReview</a>.</p>
     */
    inline void SetRepositoryAnalysis(RepositoryAnalysis&& value) { m_repositoryAnalysisHasBeenSet = true; m_repositoryAnalysis = std::move(value); }

    /**
     * <p>A code review that analyzes all code under a specified branch in an
     * associated repository. The associated repository is specified using its ARN in
     * <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CreateCodeReview">CreateCodeReview</a>.</p>
     */
    inline CodeReviewType& WithRepositoryAnalysis(const RepositoryAnalysis& value) { SetRepositoryAnalysis(value); return *this;}

    /**
     * <p>A code review that analyzes all code under a specified branch in an
     * associated repository. The associated repository is specified using its ARN in
     * <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CreateCodeReview">CreateCodeReview</a>.</p>
     */
    inline CodeReviewType& WithRepositoryAnalysis(RepositoryAnalysis&& value) { SetRepositoryAnalysis(std::move(value)); return *this;}


    /**
     * <p>They types of analysis performed during a repository analysis or a pull
     * request review. You can specify either <code>Security</code>,
     * <code>CodeQuality</code>, or both.</p>
     */
    inline const Aws::Vector<AnalysisType>& GetAnalysisTypes() const{ return m_analysisTypes; }

    /**
     * <p>They types of analysis performed during a repository analysis or a pull
     * request review. You can specify either <code>Security</code>,
     * <code>CodeQuality</code>, or both.</p>
     */
    inline bool AnalysisTypesHasBeenSet() const { return m_analysisTypesHasBeenSet; }

    /**
     * <p>They types of analysis performed during a repository analysis or a pull
     * request review. You can specify either <code>Security</code>,
     * <code>CodeQuality</code>, or both.</p>
     */
    inline void SetAnalysisTypes(const Aws::Vector<AnalysisType>& value) { m_analysisTypesHasBeenSet = true; m_analysisTypes = value; }

    /**
     * <p>They types of analysis performed during a repository analysis or a pull
     * request review. You can specify either <code>Security</code>,
     * <code>CodeQuality</code>, or both.</p>
     */
    inline void SetAnalysisTypes(Aws::Vector<AnalysisType>&& value) { m_analysisTypesHasBeenSet = true; m_analysisTypes = std::move(value); }

    /**
     * <p>They types of analysis performed during a repository analysis or a pull
     * request review. You can specify either <code>Security</code>,
     * <code>CodeQuality</code>, or both.</p>
     */
    inline CodeReviewType& WithAnalysisTypes(const Aws::Vector<AnalysisType>& value) { SetAnalysisTypes(value); return *this;}

    /**
     * <p>They types of analysis performed during a repository analysis or a pull
     * request review. You can specify either <code>Security</code>,
     * <code>CodeQuality</code>, or both.</p>
     */
    inline CodeReviewType& WithAnalysisTypes(Aws::Vector<AnalysisType>&& value) { SetAnalysisTypes(std::move(value)); return *this;}

    /**
     * <p>They types of analysis performed during a repository analysis or a pull
     * request review. You can specify either <code>Security</code>,
     * <code>CodeQuality</code>, or both.</p>
     */
    inline CodeReviewType& AddAnalysisTypes(const AnalysisType& value) { m_analysisTypesHasBeenSet = true; m_analysisTypes.push_back(value); return *this; }

    /**
     * <p>They types of analysis performed during a repository analysis or a pull
     * request review. You can specify either <code>Security</code>,
     * <code>CodeQuality</code>, or both.</p>
     */
    inline CodeReviewType& AddAnalysisTypes(AnalysisType&& value) { m_analysisTypesHasBeenSet = true; m_analysisTypes.push_back(std::move(value)); return *this; }

  private:

    RepositoryAnalysis m_repositoryAnalysis;
    bool m_repositoryAnalysisHasBeenSet = false;

    Aws::Vector<AnalysisType> m_analysisTypes;
    bool m_analysisTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
