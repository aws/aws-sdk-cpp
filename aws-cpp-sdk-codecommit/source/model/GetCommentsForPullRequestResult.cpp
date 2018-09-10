﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    Array<JsonView> commentsForPullRequestDataJsonList = jsonValue.GetArray("commentsForPullRequestData");
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
