/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/PostCommentReplyResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PostCommentReplyResult::PostCommentReplyResult()
{
}

PostCommentReplyResult::PostCommentReplyResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PostCommentReplyResult& PostCommentReplyResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("comment"))
  {
    m_comment = jsonValue.GetObject("comment");

  }



  return *this;
}
