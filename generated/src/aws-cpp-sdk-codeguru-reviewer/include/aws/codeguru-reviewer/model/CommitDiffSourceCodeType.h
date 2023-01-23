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
    AWS_CODEGURUREVIEWER_API CommitDiffSourceCodeType();
    AWS_CODEGURUREVIEWER_API CommitDiffSourceCodeType(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API CommitDiffSourceCodeType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The SHA of the source commit used to generate a commit diff. This field is
     * required for a pull request code review.</p>
     */
    inline const Aws::String& GetSourceCommit() const{ return m_sourceCommit; }

    /**
     * <p>The SHA of the source commit used to generate a commit diff. This field is
     * required for a pull request code review.</p>
     */
    inline bool SourceCommitHasBeenSet() const { return m_sourceCommitHasBeenSet; }

    /**
     * <p>The SHA of the source commit used to generate a commit diff. This field is
     * required for a pull request code review.</p>
     */
    inline void SetSourceCommit(const Aws::String& value) { m_sourceCommitHasBeenSet = true; m_sourceCommit = value; }

    /**
     * <p>The SHA of the source commit used to generate a commit diff. This field is
     * required for a pull request code review.</p>
     */
    inline void SetSourceCommit(Aws::String&& value) { m_sourceCommitHasBeenSet = true; m_sourceCommit = std::move(value); }

    /**
     * <p>The SHA of the source commit used to generate a commit diff. This field is
     * required for a pull request code review.</p>
     */
    inline void SetSourceCommit(const char* value) { m_sourceCommitHasBeenSet = true; m_sourceCommit.assign(value); }

    /**
     * <p>The SHA of the source commit used to generate a commit diff. This field is
     * required for a pull request code review.</p>
     */
    inline CommitDiffSourceCodeType& WithSourceCommit(const Aws::String& value) { SetSourceCommit(value); return *this;}

    /**
     * <p>The SHA of the source commit used to generate a commit diff. This field is
     * required for a pull request code review.</p>
     */
    inline CommitDiffSourceCodeType& WithSourceCommit(Aws::String&& value) { SetSourceCommit(std::move(value)); return *this;}

    /**
     * <p>The SHA of the source commit used to generate a commit diff. This field is
     * required for a pull request code review.</p>
     */
    inline CommitDiffSourceCodeType& WithSourceCommit(const char* value) { SetSourceCommit(value); return *this;}


    /**
     * <p>The SHA of the destination commit used to generate a commit diff. This field
     * is required for a pull request code review.</p>
     */
    inline const Aws::String& GetDestinationCommit() const{ return m_destinationCommit; }

    /**
     * <p>The SHA of the destination commit used to generate a commit diff. This field
     * is required for a pull request code review.</p>
     */
    inline bool DestinationCommitHasBeenSet() const { return m_destinationCommitHasBeenSet; }

    /**
     * <p>The SHA of the destination commit used to generate a commit diff. This field
     * is required for a pull request code review.</p>
     */
    inline void SetDestinationCommit(const Aws::String& value) { m_destinationCommitHasBeenSet = true; m_destinationCommit = value; }

    /**
     * <p>The SHA of the destination commit used to generate a commit diff. This field
     * is required for a pull request code review.</p>
     */
    inline void SetDestinationCommit(Aws::String&& value) { m_destinationCommitHasBeenSet = true; m_destinationCommit = std::move(value); }

    /**
     * <p>The SHA of the destination commit used to generate a commit diff. This field
     * is required for a pull request code review.</p>
     */
    inline void SetDestinationCommit(const char* value) { m_destinationCommitHasBeenSet = true; m_destinationCommit.assign(value); }

    /**
     * <p>The SHA of the destination commit used to generate a commit diff. This field
     * is required for a pull request code review.</p>
     */
    inline CommitDiffSourceCodeType& WithDestinationCommit(const Aws::String& value) { SetDestinationCommit(value); return *this;}

    /**
     * <p>The SHA of the destination commit used to generate a commit diff. This field
     * is required for a pull request code review.</p>
     */
    inline CommitDiffSourceCodeType& WithDestinationCommit(Aws::String&& value) { SetDestinationCommit(std::move(value)); return *this;}

    /**
     * <p>The SHA of the destination commit used to generate a commit diff. This field
     * is required for a pull request code review.</p>
     */
    inline CommitDiffSourceCodeType& WithDestinationCommit(const char* value) { SetDestinationCommit(value); return *this;}


    /**
     * <p>The SHA of the merge base of a commit.</p>
     */
    inline const Aws::String& GetMergeBaseCommit() const{ return m_mergeBaseCommit; }

    /**
     * <p>The SHA of the merge base of a commit.</p>
     */
    inline bool MergeBaseCommitHasBeenSet() const { return m_mergeBaseCommitHasBeenSet; }

    /**
     * <p>The SHA of the merge base of a commit.</p>
     */
    inline void SetMergeBaseCommit(const Aws::String& value) { m_mergeBaseCommitHasBeenSet = true; m_mergeBaseCommit = value; }

    /**
     * <p>The SHA of the merge base of a commit.</p>
     */
    inline void SetMergeBaseCommit(Aws::String&& value) { m_mergeBaseCommitHasBeenSet = true; m_mergeBaseCommit = std::move(value); }

    /**
     * <p>The SHA of the merge base of a commit.</p>
     */
    inline void SetMergeBaseCommit(const char* value) { m_mergeBaseCommitHasBeenSet = true; m_mergeBaseCommit.assign(value); }

    /**
     * <p>The SHA of the merge base of a commit.</p>
     */
    inline CommitDiffSourceCodeType& WithMergeBaseCommit(const Aws::String& value) { SetMergeBaseCommit(value); return *this;}

    /**
     * <p>The SHA of the merge base of a commit.</p>
     */
    inline CommitDiffSourceCodeType& WithMergeBaseCommit(Aws::String&& value) { SetMergeBaseCommit(std::move(value)); return *this;}

    /**
     * <p>The SHA of the merge base of a commit.</p>
     */
    inline CommitDiffSourceCodeType& WithMergeBaseCommit(const char* value) { SetMergeBaseCommit(value); return *this;}

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
