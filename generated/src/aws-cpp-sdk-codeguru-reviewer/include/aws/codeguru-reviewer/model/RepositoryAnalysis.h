/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/codeguru-reviewer/model/RepositoryHeadSourceCodeType.h>
#include <aws/codeguru-reviewer/model/SourceCodeType.h>
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
   * <p>A code review type that analyzes all code under a specified branch in an
   * associated repository. The associated repository is specified using its ARN when
   * you call <a
   * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CreateCodeReview">CreateCodeReview</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/RepositoryAnalysis">AWS
   * API Reference</a></p>
   */
  class RepositoryAnalysis
  {
  public:
    AWS_CODEGURUREVIEWER_API RepositoryAnalysis() = default;
    AWS_CODEGURUREVIEWER_API RepositoryAnalysis(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API RepositoryAnalysis& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_SourceCodeType">SourceCodeType</a>
     * that specifies the tip of a branch in an associated repository.</p>
     */
    inline const RepositoryHeadSourceCodeType& GetRepositoryHead() const { return m_repositoryHead; }
    inline bool RepositoryHeadHasBeenSet() const { return m_repositoryHeadHasBeenSet; }
    template<typename RepositoryHeadT = RepositoryHeadSourceCodeType>
    void SetRepositoryHead(RepositoryHeadT&& value) { m_repositoryHeadHasBeenSet = true; m_repositoryHead = std::forward<RepositoryHeadT>(value); }
    template<typename RepositoryHeadT = RepositoryHeadSourceCodeType>
    RepositoryAnalysis& WithRepositoryHead(RepositoryHeadT&& value) { SetRepositoryHead(std::forward<RepositoryHeadT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const SourceCodeType& GetSourceCodeType() const { return m_sourceCodeType; }
    inline bool SourceCodeTypeHasBeenSet() const { return m_sourceCodeTypeHasBeenSet; }
    template<typename SourceCodeTypeT = SourceCodeType>
    void SetSourceCodeType(SourceCodeTypeT&& value) { m_sourceCodeTypeHasBeenSet = true; m_sourceCodeType = std::forward<SourceCodeTypeT>(value); }
    template<typename SourceCodeTypeT = SourceCodeType>
    RepositoryAnalysis& WithSourceCodeType(SourceCodeTypeT&& value) { SetSourceCodeType(std::forward<SourceCodeTypeT>(value)); return *this;}
    ///@}
  private:

    RepositoryHeadSourceCodeType m_repositoryHead;
    bool m_repositoryHeadHasBeenSet = false;

    SourceCodeType m_sourceCodeType;
    bool m_sourceCodeTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
