/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/GitHubDocumentCrawlProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

GitHubDocumentCrawlProperties::GitHubDocumentCrawlProperties() : 
    m_crawlRepositoryDocuments(false),
    m_crawlRepositoryDocumentsHasBeenSet(false),
    m_crawlIssue(false),
    m_crawlIssueHasBeenSet(false),
    m_crawlIssueComment(false),
    m_crawlIssueCommentHasBeenSet(false),
    m_crawlIssueCommentAttachment(false),
    m_crawlIssueCommentAttachmentHasBeenSet(false),
    m_crawlPullRequest(false),
    m_crawlPullRequestHasBeenSet(false),
    m_crawlPullRequestComment(false),
    m_crawlPullRequestCommentHasBeenSet(false),
    m_crawlPullRequestCommentAttachment(false),
    m_crawlPullRequestCommentAttachmentHasBeenSet(false)
{
}

GitHubDocumentCrawlProperties::GitHubDocumentCrawlProperties(JsonView jsonValue) : 
    m_crawlRepositoryDocuments(false),
    m_crawlRepositoryDocumentsHasBeenSet(false),
    m_crawlIssue(false),
    m_crawlIssueHasBeenSet(false),
    m_crawlIssueComment(false),
    m_crawlIssueCommentHasBeenSet(false),
    m_crawlIssueCommentAttachment(false),
    m_crawlIssueCommentAttachmentHasBeenSet(false),
    m_crawlPullRequest(false),
    m_crawlPullRequestHasBeenSet(false),
    m_crawlPullRequestComment(false),
    m_crawlPullRequestCommentHasBeenSet(false),
    m_crawlPullRequestCommentAttachment(false),
    m_crawlPullRequestCommentAttachmentHasBeenSet(false)
{
  *this = jsonValue;
}

GitHubDocumentCrawlProperties& GitHubDocumentCrawlProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CrawlRepositoryDocuments"))
  {
    m_crawlRepositoryDocuments = jsonValue.GetBool("CrawlRepositoryDocuments");

    m_crawlRepositoryDocumentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CrawlIssue"))
  {
    m_crawlIssue = jsonValue.GetBool("CrawlIssue");

    m_crawlIssueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CrawlIssueComment"))
  {
    m_crawlIssueComment = jsonValue.GetBool("CrawlIssueComment");

    m_crawlIssueCommentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CrawlIssueCommentAttachment"))
  {
    m_crawlIssueCommentAttachment = jsonValue.GetBool("CrawlIssueCommentAttachment");

    m_crawlIssueCommentAttachmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CrawlPullRequest"))
  {
    m_crawlPullRequest = jsonValue.GetBool("CrawlPullRequest");

    m_crawlPullRequestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CrawlPullRequestComment"))
  {
    m_crawlPullRequestComment = jsonValue.GetBool("CrawlPullRequestComment");

    m_crawlPullRequestCommentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CrawlPullRequestCommentAttachment"))
  {
    m_crawlPullRequestCommentAttachment = jsonValue.GetBool("CrawlPullRequestCommentAttachment");

    m_crawlPullRequestCommentAttachmentHasBeenSet = true;
  }

  return *this;
}

JsonValue GitHubDocumentCrawlProperties::Jsonize() const
{
  JsonValue payload;

  if(m_crawlRepositoryDocumentsHasBeenSet)
  {
   payload.WithBool("CrawlRepositoryDocuments", m_crawlRepositoryDocuments);

  }

  if(m_crawlIssueHasBeenSet)
  {
   payload.WithBool("CrawlIssue", m_crawlIssue);

  }

  if(m_crawlIssueCommentHasBeenSet)
  {
   payload.WithBool("CrawlIssueComment", m_crawlIssueComment);

  }

  if(m_crawlIssueCommentAttachmentHasBeenSet)
  {
   payload.WithBool("CrawlIssueCommentAttachment", m_crawlIssueCommentAttachment);

  }

  if(m_crawlPullRequestHasBeenSet)
  {
   payload.WithBool("CrawlPullRequest", m_crawlPullRequest);

  }

  if(m_crawlPullRequestCommentHasBeenSet)
  {
   payload.WithBool("CrawlPullRequestComment", m_crawlPullRequestComment);

  }

  if(m_crawlPullRequestCommentAttachmentHasBeenSet)
  {
   payload.WithBool("CrawlPullRequestCommentAttachment", m_crawlPullRequestCommentAttachment);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
