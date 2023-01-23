/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/GetCommentsForComparedCommitResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCommentsForComparedCommitResult::GetCommentsForComparedCommitResult()
{
}

GetCommentsForComparedCommitResult::GetCommentsForComparedCommitResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCommentsForComparedCommitResult& GetCommentsForComparedCommitResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("commentsForComparedCommitData"))
  {
    Aws::Utils::Array<JsonView> commentsForComparedCommitDataJsonList = jsonValue.GetArray("commentsForComparedCommitData");
    for(unsigned commentsForComparedCommitDataIndex = 0; commentsForComparedCommitDataIndex < commentsForComparedCommitDataJsonList.GetLength(); ++commentsForComparedCommitDataIndex)
    {
      m_commentsForComparedCommitData.push_back(commentsForComparedCommitDataJsonList[commentsForComparedCommitDataIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
