/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/PostCommentForPullRequestResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PostCommentForPullRequestResult::PostCommentForPullRequestResult()
{
}

PostCommentForPullRequestResult::PostCommentForPullRequestResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PostCommentForPullRequestResult& PostCommentForPullRequestResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("repositoryName"))
  {
    m_repositoryName = jsonValue.GetString("repositoryName");

  }

  if(jsonValue.ValueExists("pullRequestId"))
  {
    m_pullRequestId = jsonValue.GetString("pullRequestId");

  }

  if(jsonValue.ValueExists("beforeCommitId"))
  {
    m_beforeCommitId = jsonValue.GetString("beforeCommitId");

  }

  if(jsonValue.ValueExists("afterCommitId"))
  {
    m_afterCommitId = jsonValue.GetString("afterCommitId");

  }

  if(jsonValue.ValueExists("beforeBlobId"))
  {
    m_beforeBlobId = jsonValue.GetString("beforeBlobId");

  }

  if(jsonValue.ValueExists("afterBlobId"))
  {
    m_afterBlobId = jsonValue.GetString("afterBlobId");

  }

  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetObject("location");

  }

  if(jsonValue.ValueExists("comment"))
  {
    m_comment = jsonValue.GetObject("comment");

  }



  return *this;
}
