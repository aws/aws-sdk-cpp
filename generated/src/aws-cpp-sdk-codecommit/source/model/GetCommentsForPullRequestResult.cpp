/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/GetCommentsForPullRequestResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCommentsForPullRequestResult::GetCommentsForPullRequestResult()
{
}

GetCommentsForPullRequestResult::GetCommentsForPullRequestResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCommentsForPullRequestResult& GetCommentsForPullRequestResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("commentsForPullRequestData"))
  {
    Aws::Utils::Array<JsonView> commentsForPullRequestDataJsonList = jsonValue.GetArray("commentsForPullRequestData");
    for(unsigned commentsForPullRequestDataIndex = 0; commentsForPullRequestDataIndex < commentsForPullRequestDataJsonList.GetLength(); ++commentsForPullRequestDataIndex)
    {
      m_commentsForPullRequestData.push_back(commentsForPullRequestDataJsonList[commentsForPullRequestDataIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
