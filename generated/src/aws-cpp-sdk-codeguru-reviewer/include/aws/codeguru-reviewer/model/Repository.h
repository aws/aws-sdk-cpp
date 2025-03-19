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
    AWS_CODEGURUREVIEWER_API Repository() = default;
    AWS_CODEGURUREVIEWER_API Repository(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API Repository& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about an Amazon Web Services CodeCommit repository.</p>
     */
    inline const CodeCommitRepository& GetCodeCommit() const { return m_codeCommit; }
    inline bool CodeCommitHasBeenSet() const { return m_codeCommitHasBeenSet; }
    template<typename CodeCommitT = CodeCommitRepository>
    void SetCodeCommit(CodeCommitT&& value) { m_codeCommitHasBeenSet = true; m_codeCommit = std::forward<CodeCommitT>(value); }
    template<typename CodeCommitT = CodeCommitRepository>
    Repository& WithCodeCommit(CodeCommitT&& value) { SetCodeCommit(std::forward<CodeCommitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about a Bitbucket repository. </p>
     */
    inline const ThirdPartySourceRepository& GetBitbucket() const { return m_bitbucket; }
    inline bool BitbucketHasBeenSet() const { return m_bitbucketHasBeenSet; }
    template<typename BitbucketT = ThirdPartySourceRepository>
    void SetBitbucket(BitbucketT&& value) { m_bitbucketHasBeenSet = true; m_bitbucket = std::forward<BitbucketT>(value); }
    template<typename BitbucketT = ThirdPartySourceRepository>
    Repository& WithBitbucket(BitbucketT&& value) { SetBitbucket(std::forward<BitbucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a GitHub Enterprise Server repository.</p>
     */
    inline const ThirdPartySourceRepository& GetGitHubEnterpriseServer() const { return m_gitHubEnterpriseServer; }
    inline bool GitHubEnterpriseServerHasBeenSet() const { return m_gitHubEnterpriseServerHasBeenSet; }
    template<typename GitHubEnterpriseServerT = ThirdPartySourceRepository>
    void SetGitHubEnterpriseServer(GitHubEnterpriseServerT&& value) { m_gitHubEnterpriseServerHasBeenSet = true; m_gitHubEnterpriseServer = std::forward<GitHubEnterpriseServerT>(value); }
    template<typename GitHubEnterpriseServerT = ThirdPartySourceRepository>
    Repository& WithGitHubEnterpriseServer(GitHubEnterpriseServerT&& value) { SetGitHubEnterpriseServer(std::forward<GitHubEnterpriseServerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const S3Repository& GetS3Bucket() const { return m_s3Bucket; }
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }
    template<typename S3BucketT = S3Repository>
    void SetS3Bucket(S3BucketT&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::forward<S3BucketT>(value); }
    template<typename S3BucketT = S3Repository>
    Repository& WithS3Bucket(S3BucketT&& value) { SetS3Bucket(std::forward<S3BucketT>(value)); return *this;}
    ///@}
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
