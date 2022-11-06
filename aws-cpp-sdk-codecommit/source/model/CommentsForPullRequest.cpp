/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/CommentsForPullRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

CommentsForPullRequest::CommentsForPullRequest() : 
    m_pullRequestIdHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_beforeCommitIdHasBeenSet(false),
    m_afterCommitIdHasBeenSet(false),
    m_beforeBlobIdHasBeenSet(false),
    m_afterBlobIdHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_commentsHasBeenSet(false)
{
}

CommentsForPullRequest::CommentsForPullRequest(JsonView jsonValue) : 
    m_pullRequestIdHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_beforeCommitIdHasBeenSet(false),
    m_afterCommitIdHasBeenSet(false),
    m_beforeBlobIdHasBeenSet(false),
    m_afterBlobIdHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_commentsHasBeenSet(false)
{
  *this = jsonValue;
}

CommentsForPullRequest& CommentsForPullRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pullRequestId"))
  {
    m_pullRequestId = jsonValue.GetString("pullRequestId");

    m_pullRequestIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("repositoryName"))
  {
    m_repositoryName = jsonValue.GetString("repositoryName");

    m_repositoryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("beforeCommitId"))
  {
    m_beforeCommitId = jsonValue.GetString("beforeCommitId");

    m_beforeCommitIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("afterCommitId"))
  {
    m_afterCommitId = jsonValue.GetString("afterCommitId");

    m_afterCommitIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("beforeBlobId"))
  {
    m_beforeBlobId = jsonValue.GetString("beforeBlobId");

    m_beforeBlobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("afterBlobId"))
  {
    m_afterBlobId = jsonValue.GetString("afterBlobId");

    m_afterBlobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetObject("location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("comments"))
  {
    Aws::Utils::Array<JsonView> commentsJsonList = jsonValue.GetArray("comments");
    for(unsigned commentsIndex = 0; commentsIndex < commentsJsonList.GetLength(); ++commentsIndex)
    {
      m_comments.push_back(commentsJsonList[commentsIndex].AsObject());
    }
    m_commentsHasBeenSet = true;
  }

  return *this;
}

JsonValue CommentsForPullRequest::Jsonize() const
{
  JsonValue payload;

  if(m_pullRequestIdHasBeenSet)
  {
   payload.WithString("pullRequestId", m_pullRequestId);

  }

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  if(m_beforeCommitIdHasBeenSet)
  {
   payload.WithString("beforeCommitId", m_beforeCommitId);

  }

  if(m_afterCommitIdHasBeenSet)
  {
   payload.WithString("afterCommitId", m_afterCommitId);

  }

  if(m_beforeBlobIdHasBeenSet)
  {
   payload.WithString("beforeBlobId", m_beforeBlobId);

  }

  if(m_afterBlobIdHasBeenSet)
  {
   payload.WithString("afterBlobId", m_afterBlobId);

  }

  if(m_locationHasBeenSet)
  {
   payload.WithObject("location", m_location.Jsonize());

  }

  if(m_commentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> commentsJsonList(m_comments.size());
   for(unsigned commentsIndex = 0; commentsIndex < commentsJsonList.GetLength(); ++commentsIndex)
   {
     commentsJsonList[commentsIndex].AsObject(m_comments[commentsIndex].Jsonize());
   }
   payload.WithArray("comments", std::move(commentsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
