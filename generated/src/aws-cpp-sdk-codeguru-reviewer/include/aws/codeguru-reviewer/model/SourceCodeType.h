/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/codeguru-reviewer/model/CommitDiffSourceCodeType.h>
#include <aws/codeguru-reviewer/model/RepositoryHeadSourceCodeType.h>
#include <aws/codeguru-reviewer/model/BranchDiffSourceCodeType.h>
#include <aws/codeguru-reviewer/model/S3BucketRepository.h>
#include <aws/codeguru-reviewer/model/RequestMetadata.h>
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
   * <p>Specifies the source code that is analyzed in a code review.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/SourceCodeType">AWS
   * API Reference</a></p>
   */
  class SourceCodeType
  {
  public:
    AWS_CODEGURUREVIEWER_API SourceCodeType() = default;
    AWS_CODEGURUREVIEWER_API SourceCodeType(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API SourceCodeType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_SourceCodeType">SourceCodeType</a>
     * that specifies a commit diff created by a pull request on an associated
     * repository.</p>
     */
    inline const CommitDiffSourceCodeType& GetCommitDiff() const { return m_commitDiff; }
    inline bool CommitDiffHasBeenSet() const { return m_commitDiffHasBeenSet; }
    template<typename CommitDiffT = CommitDiffSourceCodeType>
    void SetCommitDiff(CommitDiffT&& value) { m_commitDiffHasBeenSet = true; m_commitDiff = std::forward<CommitDiffT>(value); }
    template<typename CommitDiffT = CommitDiffSourceCodeType>
    SourceCodeType& WithCommitDiff(CommitDiffT&& value) { SetCommitDiff(std::forward<CommitDiffT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const RepositoryHeadSourceCodeType& GetRepositoryHead() const { return m_repositoryHead; }
    inline bool RepositoryHeadHasBeenSet() const { return m_repositoryHeadHasBeenSet; }
    template<typename RepositoryHeadT = RepositoryHeadSourceCodeType>
    void SetRepositoryHead(RepositoryHeadT&& value) { m_repositoryHeadHasBeenSet = true; m_repositoryHead = std::forward<RepositoryHeadT>(value); }
    template<typename RepositoryHeadT = RepositoryHeadSourceCodeType>
    SourceCodeType& WithRepositoryHead(RepositoryHeadT&& value) { SetRepositoryHead(std::forward<RepositoryHeadT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A type of <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_SourceCodeType">SourceCodeType</a>
     * that specifies a source branch name and a destination branch name in an
     * associated repository.</p>
     */
    inline const BranchDiffSourceCodeType& GetBranchDiff() const { return m_branchDiff; }
    inline bool BranchDiffHasBeenSet() const { return m_branchDiffHasBeenSet; }
    template<typename BranchDiffT = BranchDiffSourceCodeType>
    void SetBranchDiff(BranchDiffT&& value) { m_branchDiffHasBeenSet = true; m_branchDiff = std::forward<BranchDiffT>(value); }
    template<typename BranchDiffT = BranchDiffSourceCodeType>
    SourceCodeType& WithBranchDiff(BranchDiffT&& value) { SetBranchDiff(std::forward<BranchDiffT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about an associated repository in an S3 bucket that includes its
     * name and an <code>S3RepositoryDetails</code> object. The
     * <code>S3RepositoryDetails</code> object includes the name of an S3 bucket, an S3
     * key for a source code .zip file, and an S3 key for a build artifacts .zip file.
     * <code>S3BucketRepository</code> is required in <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_SourceCodeType">SourceCodeType</a>
     * for <code>S3BucketRepository</code> based code reviews.</p>
     */
    inline const S3BucketRepository& GetS3BucketRepository() const { return m_s3BucketRepository; }
    inline bool S3BucketRepositoryHasBeenSet() const { return m_s3BucketRepositoryHasBeenSet; }
    template<typename S3BucketRepositoryT = S3BucketRepository>
    void SetS3BucketRepository(S3BucketRepositoryT&& value) { m_s3BucketRepositoryHasBeenSet = true; m_s3BucketRepository = std::forward<S3BucketRepositoryT>(value); }
    template<typename S3BucketRepositoryT = S3BucketRepository>
    SourceCodeType& WithS3BucketRepository(S3BucketRepositoryT&& value) { SetS3BucketRepository(std::forward<S3BucketRepositoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata that is associated with a code review. This applies to any type of
     * code review supported by CodeGuru Reviewer. The <code>RequestMetadaa</code>
     * field captures any event metadata. For example, it might capture metadata
     * associated with an event trigger, such as a push or a pull request.</p>
     */
    inline const RequestMetadata& GetRequestMetadata() const { return m_requestMetadata; }
    inline bool RequestMetadataHasBeenSet() const { return m_requestMetadataHasBeenSet; }
    template<typename RequestMetadataT = RequestMetadata>
    void SetRequestMetadata(RequestMetadataT&& value) { m_requestMetadataHasBeenSet = true; m_requestMetadata = std::forward<RequestMetadataT>(value); }
    template<typename RequestMetadataT = RequestMetadata>
    SourceCodeType& WithRequestMetadata(RequestMetadataT&& value) { SetRequestMetadata(std::forward<RequestMetadataT>(value)); return *this;}
    ///@}
  private:

    CommitDiffSourceCodeType m_commitDiff;
    bool m_commitDiffHasBeenSet = false;

    RepositoryHeadSourceCodeType m_repositoryHead;
    bool m_repositoryHeadHasBeenSet = false;

    BranchDiffSourceCodeType m_branchDiff;
    bool m_branchDiffHasBeenSet = false;

    S3BucketRepository m_s3BucketRepository;
    bool m_s3BucketRepositoryHasBeenSet = false;

    RequestMetadata m_requestMetadata;
    bool m_requestMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
