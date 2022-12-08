/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/codeguru-reviewer/model/CodeCommitRepository.h>
#include <aws/codeguru-reviewer/model/ThirdPartySourceRepository.h>
#include <aws/codeguru-reviewer/model/S3Repository.h>
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
   * <p>Information about an associated Amazon Web Services CodeCommit repository or
   * an associated repository that is managed by Amazon Web Services CodeStar
   * Connections (for example, Bitbucket). This <code>Repository</code> object is not
   * used if your source code is in an associated GitHub repository.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/Repository">AWS
   * API Reference</a></p>
   */
  class Repository
  {
  public:
    AWS_CODEGURUREVIEWER_API Repository();
    AWS_CODEGURUREVIEWER_API Repository(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API Repository& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about an Amazon Web Services CodeCommit repository.</p>
     */
    inline const CodeCommitRepository& GetCodeCommit() const{ return m_codeCommit; }

    /**
     * <p>Information about an Amazon Web Services CodeCommit repository.</p>
     */
    inline bool CodeCommitHasBeenSet() const { return m_codeCommitHasBeenSet; }

    /**
     * <p>Information about an Amazon Web Services CodeCommit repository.</p>
     */
    inline void SetCodeCommit(const CodeCommitRepository& value) { m_codeCommitHasBeenSet = true; m_codeCommit = value; }

    /**
     * <p>Information about an Amazon Web Services CodeCommit repository.</p>
     */
    inline void SetCodeCommit(CodeCommitRepository&& value) { m_codeCommitHasBeenSet = true; m_codeCommit = std::move(value); }

    /**
     * <p>Information about an Amazon Web Services CodeCommit repository.</p>
     */
    inline Repository& WithCodeCommit(const CodeCommitRepository& value) { SetCodeCommit(value); return *this;}

    /**
     * <p>Information about an Amazon Web Services CodeCommit repository.</p>
     */
    inline Repository& WithCodeCommit(CodeCommitRepository&& value) { SetCodeCommit(std::move(value)); return *this;}


    /**
     * <p> Information about a Bitbucket repository. </p>
     */
    inline const ThirdPartySourceRepository& GetBitbucket() const{ return m_bitbucket; }

    /**
     * <p> Information about a Bitbucket repository. </p>
     */
    inline bool BitbucketHasBeenSet() const { return m_bitbucketHasBeenSet; }

    /**
     * <p> Information about a Bitbucket repository. </p>
     */
    inline void SetBitbucket(const ThirdPartySourceRepository& value) { m_bitbucketHasBeenSet = true; m_bitbucket = value; }

    /**
     * <p> Information about a Bitbucket repository. </p>
     */
    inline void SetBitbucket(ThirdPartySourceRepository&& value) { m_bitbucketHasBeenSet = true; m_bitbucket = std::move(value); }

    /**
     * <p> Information about a Bitbucket repository. </p>
     */
    inline Repository& WithBitbucket(const ThirdPartySourceRepository& value) { SetBitbucket(value); return *this;}

    /**
     * <p> Information about a Bitbucket repository. </p>
     */
    inline Repository& WithBitbucket(ThirdPartySourceRepository&& value) { SetBitbucket(std::move(value)); return *this;}


    /**
     * <p>Information about a GitHub Enterprise Server repository.</p>
     */
    inline const ThirdPartySourceRepository& GetGitHubEnterpriseServer() const{ return m_gitHubEnterpriseServer; }

    /**
     * <p>Information about a GitHub Enterprise Server repository.</p>
     */
    inline bool GitHubEnterpriseServerHasBeenSet() const { return m_gitHubEnterpriseServerHasBeenSet; }

    /**
     * <p>Information about a GitHub Enterprise Server repository.</p>
     */
    inline void SetGitHubEnterpriseServer(const ThirdPartySourceRepository& value) { m_gitHubEnterpriseServerHasBeenSet = true; m_gitHubEnterpriseServer = value; }

    /**
     * <p>Information about a GitHub Enterprise Server repository.</p>
     */
    inline void SetGitHubEnterpriseServer(ThirdPartySourceRepository&& value) { m_gitHubEnterpriseServerHasBeenSet = true; m_gitHubEnterpriseServer = std::move(value); }

    /**
     * <p>Information about a GitHub Enterprise Server repository.</p>
     */
    inline Repository& WithGitHubEnterpriseServer(const ThirdPartySourceRepository& value) { SetGitHubEnterpriseServer(value); return *this;}

    /**
     * <p>Information about a GitHub Enterprise Server repository.</p>
     */
    inline Repository& WithGitHubEnterpriseServer(ThirdPartySourceRepository&& value) { SetGitHubEnterpriseServer(std::move(value)); return *this;}


    
    inline const S3Repository& GetS3Bucket() const{ return m_s3Bucket; }

    
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }

    
    inline void SetS3Bucket(const S3Repository& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    
    inline void SetS3Bucket(S3Repository&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }

    
    inline Repository& WithS3Bucket(const S3Repository& value) { SetS3Bucket(value); return *this;}

    
    inline Repository& WithS3Bucket(S3Repository&& value) { SetS3Bucket(std::move(value)); return *this;}

  private:

    CodeCommitRepository m_codeCommit;
    bool m_codeCommitHasBeenSet = false;

    ThirdPartySourceRepository m_bitbucket;
    bool m_bitbucketHasBeenSet = false;

    ThirdPartySourceRepository m_gitHubEnterpriseServer;
    bool m_gitHubEnterpriseServerHasBeenSet = false;

    S3Repository m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
