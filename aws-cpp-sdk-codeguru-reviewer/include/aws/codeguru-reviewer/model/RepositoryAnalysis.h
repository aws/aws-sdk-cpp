/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
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
   * <p> A code review type that analyzes all code under a specified branch in an
   * associated respository. The assocated repository is specified using its ARN when
   * you call <a
   * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CreateCodeReview">
   * <code>CreateCodeReview</code> </a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/RepositoryAnalysis">AWS
   * API Reference</a></p>
   */
  class AWS_CODEGURUREVIEWER_API RepositoryAnalysis
  {
  public:
    RepositoryAnalysis();
    RepositoryAnalysis(Aws::Utils::Json::JsonView jsonValue);
    RepositoryAnalysis& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> A <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_SourceCodeType">
     * <code>SourceCodeType</code> </a> that specifies the tip of a branch in an
     * associated repository. </p>
     */
    inline const RepositoryHeadSourceCodeType& GetRepositoryHead() const{ return m_repositoryHead; }

    /**
     * <p> A <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_SourceCodeType">
     * <code>SourceCodeType</code> </a> that specifies the tip of a branch in an
     * associated repository. </p>
     */
    inline bool RepositoryHeadHasBeenSet() const { return m_repositoryHeadHasBeenSet; }

    /**
     * <p> A <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_SourceCodeType">
     * <code>SourceCodeType</code> </a> that specifies the tip of a branch in an
     * associated repository. </p>
     */
    inline void SetRepositoryHead(const RepositoryHeadSourceCodeType& value) { m_repositoryHeadHasBeenSet = true; m_repositoryHead = value; }

    /**
     * <p> A <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_SourceCodeType">
     * <code>SourceCodeType</code> </a> that specifies the tip of a branch in an
     * associated repository. </p>
     */
    inline void SetRepositoryHead(RepositoryHeadSourceCodeType&& value) { m_repositoryHeadHasBeenSet = true; m_repositoryHead = std::move(value); }

    /**
     * <p> A <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_SourceCodeType">
     * <code>SourceCodeType</code> </a> that specifies the tip of a branch in an
     * associated repository. </p>
     */
    inline RepositoryAnalysis& WithRepositoryHead(const RepositoryHeadSourceCodeType& value) { SetRepositoryHead(value); return *this;}

    /**
     * <p> A <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_SourceCodeType">
     * <code>SourceCodeType</code> </a> that specifies the tip of a branch in an
     * associated repository. </p>
     */
    inline RepositoryAnalysis& WithRepositoryHead(RepositoryHeadSourceCodeType&& value) { SetRepositoryHead(std::move(value)); return *this;}

  private:

    RepositoryHeadSourceCodeType m_repositoryHead;
    bool m_repositoryHeadHasBeenSet;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
