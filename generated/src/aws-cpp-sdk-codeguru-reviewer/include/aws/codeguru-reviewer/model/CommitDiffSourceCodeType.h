/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
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
namespace CodeGuruReviewer
{
namespace Model
{

  /**
   * <p>A type of <a
   * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_SourceCodeType">SourceCodeType</a>
   * that specifies the commit diff for a pull request on an associated repository.
   * The <code>SourceCommit</code> and <code>DestinationCommit</code> fields are
   * required to do a pull request code review.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/CommitDiffSourceCodeType">AWS
   * API Reference</a></p>
   */
  class CommitDiffSourceCodeType
  {
  public:
    AWS_CODEGURUREVIEWER_API CommitDiffSourceCodeType() = default;
    AWS_CODEGURUREVIEWER_API CommitDiffSourceCodeType(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API CommitDiffSourceCodeType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The SHA of the source commit used to generate a commit diff. This field is
     * required for a pull request code review.</p>
     */
    inline const Aws::String& GetSourceCommit() const { return m_sourceCommit; }
    inline bool SourceCommitHasBeenSet() const { return m_sourceCommitHasBeenSet; }
    template<typename SourceCommitT = Aws::String>
    void SetSourceCommit(SourceCommitT&& value) { m_sourceCommitHasBeenSet = true; m_sourceCommit = std::forward<SourceCommitT>(value); }
    template<typename SourceCommitT = Aws::String>
    CommitDiffSourceCodeType& WithSourceCommit(SourceCommitT&& value) { SetSourceCommit(std::forward<SourceCommitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SHA of the destination commit used to generate a commit diff. This field
     * is required for a pull request code review.</p>
     */
    inline const Aws::String& GetDestinationCommit() const { return m_destinationCommit; }
    inline bool DestinationCommitHasBeenSet() const { return m_destinationCommitHasBeenSet; }
    template<typename DestinationCommitT = Aws::String>
    void SetDestinationCommit(DestinationCommitT&& value) { m_destinationCommitHasBeenSet = true; m_destinationCommit = std::forward<DestinationCommitT>(value); }
    template<typename DestinationCommitT = Aws::String>
    CommitDiffSourceCodeType& WithDestinationCommit(DestinationCommitT&& value) { SetDestinationCommit(std::forward<DestinationCommitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SHA of the merge base of a commit.</p>
     */
    inline const Aws::String& GetMergeBaseCommit() const { return m_mergeBaseCommit; }
    inline bool MergeBaseCommitHasBeenSet() const { return m_mergeBaseCommitHasBeenSet; }
    template<typename MergeBaseCommitT = Aws::String>
    void SetMergeBaseCommit(MergeBaseCommitT&& value) { m_mergeBaseCommitHasBeenSet = true; m_mergeBaseCommit = std::forward<MergeBaseCommitT>(value); }
    template<typename MergeBaseCommitT = Aws::String>
    CommitDiffSourceCodeType& WithMergeBaseCommit(MergeBaseCommitT&& value) { SetMergeBaseCommit(std::forward<MergeBaseCommitT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceCommit;
    bool m_sourceCommitHasBeenSet = false;

    Aws::String m_destinationCommit;
    bool m_destinationCommitHasBeenSet = false;

    Aws::String m_mergeBaseCommit;
    bool m_mergeBaseCommitHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
