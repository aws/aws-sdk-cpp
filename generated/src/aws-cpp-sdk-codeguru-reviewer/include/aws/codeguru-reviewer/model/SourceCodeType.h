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
    AWS_CODEGURUREVIEWER_API SourceCodeType();
    AWS_CODEGURUREVIEWER_API SourceCodeType(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API SourceCodeType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_SourceCodeType">SourceCodeType</a>
     * that specifies a commit diff created by a pull request on an associated
     * repository.</p>
     */
    inline const CommitDiffSourceCodeType& GetCommitDiff() const{ return m_commitDiff; }

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_SourceCodeType">SourceCodeType</a>
     * that specifies a commit diff created by a pull request on an associated
     * repository.</p>
     */
    inline bool CommitDiffHasBeenSet() const { return m_commitDiffHasBeenSet; }

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_SourceCodeType">SourceCodeType</a>
     * that specifies a commit diff created by a pull request on an associated
     * repository.</p>
     */
    inline void SetCommitDiff(const CommitDiffSourceCodeType& value) { m_commitDiffHasBeenSet = true; m_commitDiff = value; }

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_SourceCodeType">SourceCodeType</a>
     * that specifies a commit diff created by a pull request on an associated
     * repository.</p>
     */
    inline void SetCommitDiff(CommitDiffSourceCodeType&& value) { m_commitDiffHasBeenSet = true; m_commitDiff = std::move(value); }

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_SourceCodeType">SourceCodeType</a>
     * that specifies a commit diff created by a pull request on an associated
     * repository.</p>
     */
    inline SourceCodeType& WithCommitDiff(const CommitDiffSourceCodeType& value) { SetCommitDiff(value); return *this;}

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_SourceCodeType">SourceCodeType</a>
     * that specifies a commit diff created by a pull request on an associated
     * repository.</p>
     */
    inline SourceCodeType& WithCommitDiff(CommitDiffSourceCodeType&& value) { SetCommitDiff(std::move(value)); return *this;}


    
    inline const RepositoryHeadSourceCodeType& GetRepositoryHead() const{ return m_repositoryHead; }

    
    inline bool RepositoryHeadHasBeenSet() const { return m_repositoryHeadHasBeenSet; }

    
    inline void SetRepositoryHead(const RepositoryHeadSourceCodeType& value) { m_repositoryHeadHasBeenSet = true; m_repositoryHead = value; }

    
    inline void SetRepositoryHead(RepositoryHeadSourceCodeType&& value) { m_repositoryHeadHasBeenSet = true; m_repositoryHead = std::move(value); }

    
    inline SourceCodeType& WithRepositoryHead(const RepositoryHeadSourceCodeType& value) { SetRepositoryHead(value); return *this;}

    
    inline SourceCodeType& WithRepositoryHead(RepositoryHeadSourceCodeType&& value) { SetRepositoryHead(std::move(value)); return *this;}


    /**
     * <p>A type of <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_SourceCodeType">SourceCodeType</a>
     * that specifies a source branch name and a destination branch name in an
     * associated repository.</p>
     */
    inline const BranchDiffSourceCodeType& GetBranchDiff() const{ return m_branchDiff; }

    /**
     * <p>A type of <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_SourceCodeType">SourceCodeType</a>
     * that specifies a source branch name and a destination branch name in an
     * associated repository.</p>
     */
    inline bool BranchDiffHasBeenSet() const { return m_branchDiffHasBeenSet; }

    /**
     * <p>A type of <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_SourceCodeType">SourceCodeType</a>
     * that specifies a source branch name and a destination branch name in an
     * associated repository.</p>
     */
    inline void SetBranchDiff(const BranchDiffSourceCodeType& value) { m_branchDiffHasBeenSet = true; m_branchDiff = value; }

    /**
     * <p>A type of <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_SourceCodeType">SourceCodeType</a>
     * that specifies a source branch name and a destination branch name in an
     * associated repository.</p>
     */
    inline void SetBranchDiff(BranchDiffSourceCodeType&& value) { m_branchDiffHasBeenSet = true; m_branchDiff = std::move(value); }

    /**
     * <p>A type of <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_SourceCodeType">SourceCodeType</a>
     * that specifies a source branch name and a destination branch name in an
     * associated repository.</p>
     */
    inline SourceCodeType& WithBranchDiff(const BranchDiffSourceCodeType& value) { SetBranchDiff(value); return *this;}

    /**
     * <p>A type of <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_SourceCodeType">SourceCodeType</a>
     * that specifies a source branch name and a destination branch name in an
     * associated repository.</p>
     */
    inline SourceCodeType& WithBranchDiff(BranchDiffSourceCodeType&& value) { SetBranchDiff(std::move(value)); return *this;}


    /**
     * <p>Information about an associated repository in an S3 bucket that includes its
     * name and an <code>S3RepositoryDetails</code> object. The
     * <code>S3RepositoryDetails</code> object includes the name of an S3 bucket, an S3
     * key for a source code .zip file, and an S3 key for a build artifacts .zip file.
     * <code>S3BucketRepository</code> is required in <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_SourceCodeType">SourceCodeType</a>
     * for <code>S3BucketRepository</code> based code reviews.</p>
     */
    inline const S3BucketRepository& GetS3BucketRepository() const{ return m_s3BucketRepository; }

    /**
     * <p>Information about an associated repository in an S3 bucket that includes its
     * name and an <code>S3RepositoryDetails</code> object. The
     * <code>S3RepositoryDetails</code> object includes the name of an S3 bucket, an S3
     * key for a source code .zip file, and an S3 key for a build artifacts .zip file.
     * <code>S3BucketRepository</code> is required in <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_SourceCodeType">SourceCodeType</a>
     * for <code>S3BucketRepository</code> based code reviews.</p>
     */
    inline bool S3BucketRepositoryHasBeenSet() const { return m_s3BucketRepositoryHasBeenSet; }

    /**
     * <p>Information about an associated repository in an S3 bucket that includes its
     * name and an <code>S3RepositoryDetails</code> object. The
     * <code>S3RepositoryDetails</code> object includes the name of an S3 bucket, an S3
     * key for a source code .zip file, and an S3 key for a build artifacts .zip file.
     * <code>S3BucketRepository</code> is required in <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_SourceCodeType">SourceCodeType</a>
     * for <code>S3BucketRepository</code> based code reviews.</p>
     */
    inline void SetS3BucketRepository(const S3BucketRepository& value) { m_s3BucketRepositoryHasBeenSet = true; m_s3BucketRepository = value; }

    /**
     * <p>Information about an associated repository in an S3 bucket that includes its
     * name and an <code>S3RepositoryDetails</code> object. The
     * <code>S3RepositoryDetails</code> object includes the name of an S3 bucket, an S3
     * key for a source code .zip file, and an S3 key for a build artifacts .zip file.
     * <code>S3BucketRepository</code> is required in <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_SourceCodeType">SourceCodeType</a>
     * for <code>S3BucketRepository</code> based code reviews.</p>
     */
    inline void SetS3BucketRepository(S3BucketRepository&& value) { m_s3BucketRepositoryHasBeenSet = true; m_s3BucketRepository = std::move(value); }

    /**
     * <p>Information about an associated repository in an S3 bucket that includes its
     * name and an <code>S3RepositoryDetails</code> object. The
     * <code>S3RepositoryDetails</code> object includes the name of an S3 bucket, an S3
     * key for a source code .zip file, and an S3 key for a build artifacts .zip file.
     * <code>S3BucketRepository</code> is required in <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_SourceCodeType">SourceCodeType</a>
     * for <code>S3BucketRepository</code> based code reviews.</p>
     */
    inline SourceCodeType& WithS3BucketRepository(const S3BucketRepository& value) { SetS3BucketRepository(value); return *this;}

    /**
     * <p>Information about an associated repository in an S3 bucket that includes its
     * name and an <code>S3RepositoryDetails</code> object. The
     * <code>S3RepositoryDetails</code> object includes the name of an S3 bucket, an S3
     * key for a source code .zip file, and an S3 key for a build artifacts .zip file.
     * <code>S3BucketRepository</code> is required in <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_SourceCodeType">SourceCodeType</a>
     * for <code>S3BucketRepository</code> based code reviews.</p>
     */
    inline SourceCodeType& WithS3BucketRepository(S3BucketRepository&& value) { SetS3BucketRepository(std::move(value)); return *this;}


    /**
     * <p>Metadata that is associated with a code review. This applies to any type of
     * code review supported by CodeGuru Reviewer. The <code>RequestMetadaa</code>
     * field captures any event metadata. For example, it might capture metadata
     * associated with an event trigger, such as a push or a pull request.</p>
     */
    inline const RequestMetadata& GetRequestMetadata() const{ return m_requestMetadata; }

    /**
     * <p>Metadata that is associated with a code review. This applies to any type of
     * code review supported by CodeGuru Reviewer. The <code>RequestMetadaa</code>
     * field captures any event metadata. For example, it might capture metadata
     * associated with an event trigger, such as a push or a pull request.</p>
     */
    inline bool RequestMetadataHasBeenSet() const { return m_requestMetadataHasBeenSet; }

    /**
     * <p>Metadata that is associated with a code review. This applies to any type of
     * code review supported by CodeGuru Reviewer. The <code>RequestMetadaa</code>
     * field captures any event metadata. For example, it might capture metadata
     * associated with an event trigger, such as a push or a pull request.</p>
     */
    inline void SetRequestMetadata(const RequestMetadata& value) { m_requestMetadataHasBeenSet = true; m_requestMetadata = value; }

    /**
     * <p>Metadata that is associated with a code review. This applies to any type of
     * code review supported by CodeGuru Reviewer. The <code>RequestMetadaa</code>
     * field captures any event metadata. For example, it might capture metadata
     * associated with an event trigger, such as a push or a pull request.</p>
     */
    inline void SetRequestMetadata(RequestMetadata&& value) { m_requestMetadataHasBeenSet = true; m_requestMetadata = std::move(value); }

    /**
     * <p>Metadata that is associated with a code review. This applies to any type of
     * code review supported by CodeGuru Reviewer. The <code>RequestMetadaa</code>
     * field captures any event metadata. For example, it might capture metadata
     * associated with an event trigger, such as a push or a pull request.</p>
     */
    inline SourceCodeType& WithRequestMetadata(const RequestMetadata& value) { SetRequestMetadata(value); return *this;}

    /**
     * <p>Metadata that is associated with a code review. This applies to any type of
     * code review supported by CodeGuru Reviewer. The <code>RequestMetadaa</code>
     * field captures any event metadata. For example, it might capture metadata
     * associated with an event trigger, such as a push or a pull request.</p>
     */
    inline SourceCodeType& WithRequestMetadata(RequestMetadata&& value) { SetRequestMetadata(std::move(value)); return *this;}

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
