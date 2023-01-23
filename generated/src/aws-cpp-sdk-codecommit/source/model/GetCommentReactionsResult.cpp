/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/GetCommentReactionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCommentReactionsResult::GetCommentReactionsResult()
{
}

GetCommentReactionsResult::GetCommentReactionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCommentReactionsResult& GetCommentReactionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("reactionsForComment"))
  {
    Aws::Utils::Array<JsonView> reactionsForCommentJsonList = jsonValue.GetArray("reactionsForComment");
    for(unsigned reactionsForCommentIndex = 0; reactionsForCommentIndex < reactionsForCommentJsonList.GetLength(); ++reactionsForCommentIndex)
    {
      m_reactionsForComment.push_back(reactionsForCommentJsonList[reactionsForCommentIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
