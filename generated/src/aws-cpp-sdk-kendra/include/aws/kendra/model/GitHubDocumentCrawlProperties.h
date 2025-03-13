/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>

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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides the configuration information to include certain types of GitHub
   * content. You can configure to index repository files only, or also include
   * issues and pull requests, comments, and comment attachments.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/GitHubDocumentCrawlProperties">AWS
   * API Reference</a></p>
   */
  class GitHubDocumentCrawlProperties
  {
  public:
    AWS_KENDRA_API GitHubDocumentCrawlProperties() = default;
    AWS_KENDRA_API GitHubDocumentCrawlProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API GitHubDocumentCrawlProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> <code>TRUE</code> to index all files with a repository.</p>
     */
    inline bool GetCrawlRepositoryDocuments() const { return m_crawlRepositoryDocuments; }
    inline bool CrawlRepositoryDocumentsHasBeenSet() const { return m_crawlRepositoryDocumentsHasBeenSet; }
    inline void SetCrawlRepositoryDocuments(bool value) { m_crawlRepositoryDocumentsHasBeenSet = true; m_crawlRepositoryDocuments = value; }
    inline GitHubDocumentCrawlProperties& WithCrawlRepositoryDocuments(bool value) { SetCrawlRepositoryDocuments(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>TRUE</code> to index all issues within a repository.</p>
     */
    inline bool GetCrawlIssue() const { return m_crawlIssue; }
    inline bool CrawlIssueHasBeenSet() const { return m_crawlIssueHasBeenSet; }
    inline void SetCrawlIssue(bool value) { m_crawlIssueHasBeenSet = true; m_crawlIssue = value; }
    inline GitHubDocumentCrawlProperties& WithCrawlIssue(bool value) { SetCrawlIssue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>TRUE</code> to index all comments on issues.</p>
     */
    inline bool GetCrawlIssueComment() const { return m_crawlIssueComment; }
    inline bool CrawlIssueCommentHasBeenSet() const { return m_crawlIssueCommentHasBeenSet; }
    inline void SetCrawlIssueComment(bool value) { m_crawlIssueCommentHasBeenSet = true; m_crawlIssueComment = value; }
    inline GitHubDocumentCrawlProperties& WithCrawlIssueComment(bool value) { SetCrawlIssueComment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>TRUE</code> to include all comment attachments for issues.</p>
     */
    inline bool GetCrawlIssueCommentAttachment() const { return m_crawlIssueCommentAttachment; }
    inline bool CrawlIssueCommentAttachmentHasBeenSet() const { return m_crawlIssueCommentAttachmentHasBeenSet; }
    inline void SetCrawlIssueCommentAttachment(bool value) { m_crawlIssueCommentAttachmentHasBeenSet = true; m_crawlIssueCommentAttachment = value; }
    inline GitHubDocumentCrawlProperties& WithCrawlIssueCommentAttachment(bool value) { SetCrawlIssueCommentAttachment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>TRUE</code> to index all pull requests within a repository.</p>
     */
    inline bool GetCrawlPullRequest() const { return m_crawlPullRequest; }
    inline bool CrawlPullRequestHasBeenSet() const { return m_crawlPullRequestHasBeenSet; }
    inline void SetCrawlPullRequest(bool value) { m_crawlPullRequestHasBeenSet = true; m_crawlPullRequest = value; }
    inline GitHubDocumentCrawlProperties& WithCrawlPullRequest(bool value) { SetCrawlPullRequest(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>TRUE</code> to index all comments on pull requests.</p>
     */
    inline bool GetCrawlPullRequestComment() const { return m_crawlPullRequestComment; }
    inline bool CrawlPullRequestCommentHasBeenSet() const { return m_crawlPullRequestCommentHasBeenSet; }
    inline void SetCrawlPullRequestComment(bool value) { m_crawlPullRequestCommentHasBeenSet = true; m_crawlPullRequestComment = value; }
    inline GitHubDocumentCrawlProperties& WithCrawlPullRequestComment(bool value) { SetCrawlPullRequestComment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>TRUE</code> to include all comment attachments for pull requests.</p>
     */
    inline bool GetCrawlPullRequestCommentAttachment() const { return m_crawlPullRequestCommentAttachment; }
    inline bool CrawlPullRequestCommentAttachmentHasBeenSet() const { return m_crawlPullRequestCommentAttachmentHasBeenSet; }
    inline void SetCrawlPullRequestCommentAttachment(bool value) { m_crawlPullRequestCommentAttachmentHasBeenSet = true; m_crawlPullRequestCommentAttachment = value; }
    inline GitHubDocumentCrawlProperties& WithCrawlPullRequestCommentAttachment(bool value) { SetCrawlPullRequestCommentAttachment(value); return *this;}
    ///@}
  private:

    bool m_crawlRepositoryDocuments{false};
    bool m_crawlRepositoryDocumentsHasBeenSet = false;

    bool m_crawlIssue{false};
    bool m_crawlIssueHasBeenSet = false;

    bool m_crawlIssueComment{false};
    bool m_crawlIssueCommentHasBeenSet = false;

    bool m_crawlIssueCommentAttachment{false};
    bool m_crawlIssueCommentAttachmentHasBeenSet = false;

    bool m_crawlPullRequest{false};
    bool m_crawlPullRequestHasBeenSet = false;

    bool m_crawlPullRequestComment{false};
    bool m_crawlPullRequestCommentHasBeenSet = false;

    bool m_crawlPullRequestCommentAttachment{false};
    bool m_crawlPullRequestCommentAttachmentHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
